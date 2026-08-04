// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
