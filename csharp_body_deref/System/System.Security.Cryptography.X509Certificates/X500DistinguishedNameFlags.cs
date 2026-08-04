// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000EC")]
[Flags]
public enum X500DistinguishedNameFlags
{
	[Token(Token = "0x4000464")]
	None = 0,
	[Token(Token = "0x4000465")]
	Reversed = 1,
	[Token(Token = "0x4000466")]
	UseSemicolons = 0x10,
	[Token(Token = "0x4000467")]
	DoNotUsePlusSign = 0x20,
	[Token(Token = "0x4000468")]
	DoNotUseQuotes = 0x40,
	[Token(Token = "0x4000469")]
	UseCommas = 0x80,
	[Token(Token = "0x400046A")]
	UseNewLines = 0x100,
	[Token(Token = "0x400046B")]
	UseUTF8Encoding = 0x1000,
	[Token(Token = "0x400046C")]
	UseT61Encoding = 0x2000,
	[Token(Token = "0x400046D")]
	ForceUTF8Encoding = 0x4000
}
