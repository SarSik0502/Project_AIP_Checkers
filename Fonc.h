/**
* \file Fonc.h
* ������������ ���� ���������
**/
#ifndef FOC
#define FOC
#include <iostream>
#include <vector>

/**
* ������� ������ �����
* \param[in] desk
* \return �����
**/
std::string print_desk(std::vector <std::vector <char>> desk);

/**
* ������� ��������� �����
* \param[in] hod ���
* \param[in] desk �����
**/
void atack(std::string hod, std::vector <std::vector <char>>& desk);

/**
* ������� ����
* \param[in] hod ���
* \param[in] desk �����
**/
void move(std::string hod, std::vector <std::vector <char>>& desk, bool& per);

/**
* ������� ����������� �����, ������� ����� ������ ���
* \param[in] hod ���
* \param[in] desk �����
* \return �����, ������� ����� ������ ���
**/
char t1(std::string hod, std::vector <std::vector <char>>& desk);

/**
* ������� ������ ������
* \param[in] s ������ ���������
* \return ����� ������
**/
std::string err(std::string s);
#endif