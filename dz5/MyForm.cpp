#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
/// ������� ����������� �� �������, ��� ��������� �� � �������� ������ �����
[STAThreadAttribute]
// String ���� � ������� ���� System::Windows::Forms
// ������ ^ ��������������� ��� ������������� ��������� ���'��
// args - ����� ��� ����������
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	dz5::MyForm form;
	Application::Run(% form); // ������ % � ���������� �� �ᒺ�� form
}