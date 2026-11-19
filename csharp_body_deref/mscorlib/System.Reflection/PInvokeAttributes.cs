// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.PInvokeAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000510")]
[Flags]
internal enum PInvokeAttributes
{
	[Token(Token = "0x4001442")]
	NoMangle = 1,
	[Token(Token = "0x4001443")]
	CharSetMask = 6,
	[Token(Token = "0x4001444")]
	CharSetNotSpec = 0,
	[Token(Token = "0x4001445")]
	CharSetAnsi = 2,
	[Token(Token = "0x4001446")]
	CharSetUnicode = 4,
	[Token(Token = "0x4001447")]
	CharSetAuto = CharSetMask,
	[Token(Token = "0x4001448")]
	BestFitUseAssem = 0,
	[Token(Token = "0x4001449")]
	BestFitEnabled = 0x10,
	[Token(Token = "0x400144A")]
	BestFitDisabled = 0x20,
	[Token(Token = "0x400144B")]
	BestFitMask = BestFitEnabled | BestFitDisabled,
	[Token(Token = "0x400144C")]
	ThrowOnUnmappableCharUseAssem = 0,
	[Token(Token = "0x400144D")]
	ThrowOnUnmappableCharEnabled = 0x1000,
	[Token(Token = "0x400144E")]
	ThrowOnUnmappableCharDisabled = 0x2000,
	[Token(Token = "0x400144F")]
	ThrowOnUnmappableCharMask = ThrowOnUnmappableCharEnabled | ThrowOnUnmappableCharDisabled,
	[Token(Token = "0x4001450")]
	SupportsLastError = 0x40,
	[Token(Token = "0x4001451")]
	CallConvMask = 0x700,
	[Token(Token = "0x4001452")]
	CallConvWinapi = 0x100,
	[Token(Token = "0x4001453")]
	CallConvCdecl = 0x200,
	[Token(Token = "0x4001454")]
	CallConvStdcall = 0x300,
	[Token(Token = "0x4001455")]
	CallConvThiscall = 0x400,
	[Token(Token = "0x4001456")]
	CallConvFastcall = 0x500,
	[Token(Token = "0x4001457")]
	MaxValue = 0xFFFF
}
