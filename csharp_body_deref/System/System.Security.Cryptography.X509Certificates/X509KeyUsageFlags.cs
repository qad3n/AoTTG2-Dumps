// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200012F")]
[Flags]
public enum X509KeyUsageFlags
{
	[Token(Token = "0x400056C")]
	None = 0,
	[Token(Token = "0x400056D")]
	EncipherOnly = 1,
	[Token(Token = "0x400056E")]
	CrlSign = 2,
	[Token(Token = "0x400056F")]
	KeyCertSign = 4,
	[Token(Token = "0x4000570")]
	KeyAgreement = 8,
	[Token(Token = "0x4000571")]
	DataEncipherment = 0x10,
	[Token(Token = "0x4000572")]
	KeyEncipherment = 0x20,
	[Token(Token = "0x4000573")]
	NonRepudiation = 0x40,
	[Token(Token = "0x4000574")]
	DigitalSignature = 0x80,
	[Token(Token = "0x4000575")]
	DecipherOnly = 0x8000
}
