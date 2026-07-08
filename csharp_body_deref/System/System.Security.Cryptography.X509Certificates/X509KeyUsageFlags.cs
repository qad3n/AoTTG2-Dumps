using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000EF")]
[Flags]
public enum X509KeyUsageFlags
{
	[Token(Token = "0x400049A")]
	None = 0,
	[Token(Token = "0x400049B")]
	EncipherOnly = 1,
	[Token(Token = "0x400049C")]
	CrlSign = 2,
	[Token(Token = "0x400049D")]
	KeyCertSign = 4,
	[Token(Token = "0x400049E")]
	KeyAgreement = 8,
	[Token(Token = "0x400049F")]
	DataEncipherment = 0x10,
	[Token(Token = "0x40004A0")]
	KeyEncipherment = 0x20,
	[Token(Token = "0x40004A1")]
	NonRepudiation = 0x40,
	[Token(Token = "0x40004A2")]
	DigitalSignature = 0x80,
	[Token(Token = "0x40004A3")]
	DecipherOnly = 0x8000
}
