#ifndef _BASE64_HEADER_FILE_
#define _BASE64_HEADER_FILE_
#pragma once

/** @brief base64�ı���๤��.
* ��ǰʹ�õı���뺯��,���������������б����,���ҽ���β��==��ȥ����, �����ٽ���ʱ, �ᶪʧ��β��һЩ�ַ�.��������������������.
* ���� ss://YWVzLTI1Ni1jZmI6dGVzdHRAMS4yLjQuNDoxMjM0NQ== ( ��Ӧ aes-256-cfb:testt@1.2.4.4:12345 ) 
* ��������������,Ȼ��Ѻ�ߵ�== ȥ�����: ss://YWVzLTI1Ni1jZmI6dGVzdHRAMS4yLjQuNDoxMjM0NQ, ���ǽ������: aes-256-cfb:testt@1.2.4.4:1234 
* ����5.
* 
* ��������������������
*/

#include <string>

namespace base64{
	std::string encode(unsigned char const* bytes_to_encode, unsigned int in_len);
	std::string decode(std::string const& encoded_string);
}

#endif
