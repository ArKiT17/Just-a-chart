#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
/// Атрибут прив’язується до функції, щоб запустити її в окремому потоці даних
[STAThreadAttribute]
// String клас в просторі імен System::Windows::Forms
// Символ ^ використовується для автоматичного звільнення пам'яті
// args - назва для контейнера
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	dz5::MyForm form;
	Application::Run(% form); // Символ % є посиланням на об’єкт form
}