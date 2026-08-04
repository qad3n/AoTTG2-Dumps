// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MethodAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004E5")]
[Flags]
public enum MethodAttributes
{
	[Token(Token = "0x4001410")]
	MemberAccessMask = 7,
	[Token(Token = "0x4001411")]
	PrivateScope = 0,
	[Token(Token = "0x4001412")]
	Private = 1,
	[Token(Token = "0x4001413")]
	FamANDAssem = 2,
	[Token(Token = "0x4001414")]
	Assembly = 3,
	[Token(Token = "0x4001415")]
	Family = 4,
	[Token(Token = "0x4001416")]
	FamORAssem = 5,
	[Token(Token = "0x4001417")]
	Public = 6,
	[Token(Token = "0x4001418")]
	Static = 0x10,
	[Token(Token = "0x4001419")]
	Final = 0x20,
	[Token(Token = "0x400141A")]
	Virtual = 0x40,
	[Token(Token = "0x400141B")]
	HideBySig = 0x80,
	[Token(Token = "0x400141C")]
	CheckAccessOnOverride = 0x200,
	[Token(Token = "0x400141D")]
	VtableLayoutMask = 0x100,
	[Token(Token = "0x400141E")]
	ReuseSlot = 0,
	[Token(Token = "0x400141F")]
	NewSlot = 0x100,
	[Token(Token = "0x4001420")]
	Abstract = 0x400,
	[Token(Token = "0x4001421")]
	SpecialName = 0x800,
	[Token(Token = "0x4001422")]
	PinvokeImpl = 0x2000,
	[Token(Token = "0x4001423")]
	UnmanagedExport = 8,
	[Token(Token = "0x4001424")]
	RTSpecialName = 0x1000,
	[Token(Token = "0x4001425")]
	HasSecurity = 0x4000,
	[Token(Token = "0x4001426")]
	RequireSecObject = 0x8000,
	[Token(Token = "0x4001427")]
	ReservedMask = 0xD000
}
