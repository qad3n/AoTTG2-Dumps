// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MethodAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004EE")]
[Flags]
public enum MethodAttributes
{
	[Token(Token = "0x4001370")]
	MemberAccessMask = 7,
	[Token(Token = "0x4001371")]
	PrivateScope = 0,
	[Token(Token = "0x4001372")]
	Private = 1,
	[Token(Token = "0x4001373")]
	FamANDAssem = 2,
	[Token(Token = "0x4001374")]
	Assembly = 3,
	[Token(Token = "0x4001375")]
	Family = 4,
	[Token(Token = "0x4001376")]
	FamORAssem = 5,
	[Token(Token = "0x4001377")]
	Public = 6,
	[Token(Token = "0x4001378")]
	Static = 0x10,
	[Token(Token = "0x4001379")]
	Final = 0x20,
	[Token(Token = "0x400137A")]
	Virtual = 0x40,
	[Token(Token = "0x400137B")]
	HideBySig = 0x80,
	[Token(Token = "0x400137C")]
	CheckAccessOnOverride = 0x200,
	[Token(Token = "0x400137D")]
	VtableLayoutMask = 0x100,
	[Token(Token = "0x400137E")]
	ReuseSlot = 0,
	[Token(Token = "0x400137F")]
	NewSlot = VtableLayoutMask,
	[Token(Token = "0x4001380")]
	Abstract = 0x400,
	[Token(Token = "0x4001381")]
	SpecialName = 0x800,
	[Token(Token = "0x4001382")]
	PinvokeImpl = 0x2000,
	[Token(Token = "0x4001383")]
	UnmanagedExport = 8,
	[Token(Token = "0x4001384")]
	RTSpecialName = 0x1000,
	[Token(Token = "0x4001385")]
	HasSecurity = 0x4000,
	[Token(Token = "0x4001386")]
	RequireSecObject = 0x8000,
	[Token(Token = "0x4001387")]
	ReservedMask = RTSpecialName | HasSecurity | RequireSecObject
}
