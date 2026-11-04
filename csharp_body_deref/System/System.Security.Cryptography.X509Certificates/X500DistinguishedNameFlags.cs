// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200012C")]
[Flags]
public enum X500DistinguishedNameFlags
{
	[Token(Token = "0x4000536")]
	None = 0,
	[Token(Token = "0x4000537")]
	Reversed = 1,
	[Token(Token = "0x4000538")]
	UseSemicolons = 0x10,
	[Token(Token = "0x4000539")]
	DoNotUsePlusSign = 0x20,
	[Token(Token = "0x400053A")]
	DoNotUseQuotes = 0x40,
	[Token(Token = "0x400053B")]
	UseCommas = 0x80,
	[Token(Token = "0x400053C")]
	UseNewLines = 0x100,
	[Token(Token = "0x400053D")]
	UseUTF8Encoding = 0x1000,
	[Token(Token = "0x400053E")]
	UseT61Encoding = 0x2000,
	[Token(Token = "0x400053F")]
	ForceUTF8Encoding = 0x4000
}
