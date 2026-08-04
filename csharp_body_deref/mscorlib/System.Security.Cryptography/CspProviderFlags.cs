// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CspProviderFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
