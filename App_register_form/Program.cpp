#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;
	while (true) {
		Appregisterform::LoginForm loginform;
		loginform.ShowDialog();

		if (loginform.switchToRegister) {
			Appregisterform::RegisterForm registerform;
			registerform.ShowDialog();

			if (registerform.switchToLogin) {
				continue;
			}
			else {
				user = registerform.user;
				break;
			}
		}
		else {
			user = loginform.user;
			break;
		}
	}

	if (user != nullptr) {
		Appregisterform::MainForm mainform(user);
		Application::Run(% mainform);
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}
}