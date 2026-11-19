// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.BindingFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004DA")]
[Flags]
public enum BindingFlags
{
	[Token(Token = "0x400131C")]
	Default = 0,
	[Token(Token = "0x400131D")]
	IgnoreCase = 1,
	[Token(Token = "0x400131E")]
	DeclaredOnly = 2,
	[Token(Token = "0x400131F")]
	Instance = 4,
	[Token(Token = "0x4001320")]
	Static = 8,
	[Token(Token = "0x4001321")]
	Public = 0x10,
	[Token(Token = "0x4001322")]
	NonPublic = 0x20,
	[Token(Token = "0x4001323")]
	FlattenHierarchy = 0x40,
	[Token(Token = "0x4001324")]
	InvokeMethod = 0x100,
	[Token(Token = "0x4001325")]
	CreateInstance = 0x200,
	[Token(Token = "0x4001326")]
	GetField = 0x400,
	[Token(Token = "0x4001327")]
	SetField = 0x800,
	[Token(Token = "0x4001328")]
	GetProperty = 0x1000,
	[Token(Token = "0x4001329")]
	SetProperty = 0x2000,
	[Token(Token = "0x400132A")]
	PutDispProperty = 0x4000,
	[Token(Token = "0x400132B")]
	PutRefDispProperty = 0x8000,
	[Token(Token = "0x400132C")]
	ExactBinding = 0x10000,
	[Token(Token = "0x400132D")]
	SuppressChangeType = 0x20000,
	[Token(Token = "0x400132E")]
	OptionalParamBinding = 0x40000,
	[Token(Token = "0x400132F")]
	IgnoreReturn = 0x1000000,
	[Token(Token = "0x4001330")]
	DoNotWrapExceptions = 0x2000000
}
