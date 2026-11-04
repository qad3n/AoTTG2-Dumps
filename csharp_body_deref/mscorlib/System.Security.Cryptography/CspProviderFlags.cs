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
[Token(Token = "0x2000305")]
[Flags]
[ComVisible(true)]
public enum CspProviderFlags
{
	[Token(Token = "0x4000CF8")]
	NoFlags = 0,
	[Token(Token = "0x4000CF9")]
	UseMachineKeyStore = 1,
	[Token(Token = "0x4000CFA")]
	UseDefaultKeyContainer = 2,
	[Token(Token = "0x4000CFB")]
	UseNonExportableKey = 4,
	[Token(Token = "0x4000CFC")]
	UseExistingKey = 8,
	[Token(Token = "0x4000CFD")]
	UseArchivableKey = 0x10,
	[Token(Token = "0x4000CFE")]
	UseUserProtectedKey = 0x20,
	[Token(Token = "0x4000CFF")]
	NoPrompt = 0x40,
	[Token(Token = "0x4000D00")]
	CreateEphemeralKey = 0x80
}
