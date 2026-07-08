using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002D6")]
[Flags]
[ComVisible(true)]
public enum CspProviderFlags
{
	[Token(Token = "0x4000CEB")]
	NoFlags = 0,
	[Token(Token = "0x4000CEC")]
	UseMachineKeyStore = 1,
	[Token(Token = "0x4000CED")]
	UseDefaultKeyContainer = 2,
	[Token(Token = "0x4000CEE")]
	UseNonExportableKey = 4,
	[Token(Token = "0x4000CEF")]
	UseExistingKey = 8,
	[Token(Token = "0x4000CF0")]
	UseArchivableKey = 0x10,
	[Token(Token = "0x4000CF1")]
	UseUserProtectedKey = 0x20,
	[Token(Token = "0x4000CF2")]
	NoPrompt = 0x40,
	[Token(Token = "0x4000CF3")]
	CreateEphemeralKey = 0x80
}
