using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000326")]
[Flags]
public enum X509KeyStorageFlags
{
	[Token(Token = "0x4000E27")]
	DefaultKeySet = 0,
	[Token(Token = "0x4000E28")]
	UserKeySet = 1,
	[Token(Token = "0x4000E29")]
	MachineKeySet = 2,
	[Token(Token = "0x4000E2A")]
	Exportable = 4,
	[Token(Token = "0x4000E2B")]
	UserProtected = 8,
	[Token(Token = "0x4000E2C")]
	PersistKeySet = 0x10,
	[Token(Token = "0x4000E2D")]
	EphemeralKeySet = 0x20
}
