// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.BindingFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004D1")]
[Flags]
public enum BindingFlags
{
	[Token(Token = "0x40013BC")]
	Default = 0,
	[Token(Token = "0x40013BD")]
	IgnoreCase = 1,
	[Token(Token = "0x40013BE")]
	DeclaredOnly = 2,
	[Token(Token = "0x40013BF")]
	Instance = 4,
	[Token(Token = "0x40013C0")]
	Static = 8,
	[Token(Token = "0x40013C1")]
	Public = 0x10,
	[Token(Token = "0x40013C2")]
	NonPublic = 0x20,
	[Token(Token = "0x40013C3")]
	FlattenHierarchy = 0x40,
	[Token(Token = "0x40013C4")]
	InvokeMethod = 0x100,
	[Token(Token = "0x40013C5")]
	CreateInstance = 0x200,
	[Token(Token = "0x40013C6")]
	GetField = 0x400,
	[Token(Token = "0x40013C7")]
	SetField = 0x800,
	[Token(Token = "0x40013C8")]
	GetProperty = 0x1000,
	[Token(Token = "0x40013C9")]
	SetProperty = 0x2000,
	[Token(Token = "0x40013CA")]
	PutDispProperty = 0x4000,
	[Token(Token = "0x40013CB")]
	PutRefDispProperty = 0x8000,
	[Token(Token = "0x40013CC")]
	ExactBinding = 0x10000,
	[Token(Token = "0x40013CD")]
	SuppressChangeType = 0x20000,
	[Token(Token = "0x40013CE")]
	OptionalParamBinding = 0x40000,
	[Token(Token = "0x40013CF")]
	IgnoreReturn = 0x1000000,
	[Token(Token = "0x40013D0")]
	DoNotWrapExceptions = 0x2000000
}
