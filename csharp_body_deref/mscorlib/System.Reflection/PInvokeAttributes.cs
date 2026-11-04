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
[Token(Token = "0x2000537")]
[Flags]
internal enum PInvokeAttributes
{
	[Token(Token = "0x40014E2")]
	NoMangle = 1,
	[Token(Token = "0x40014E3")]
	CharSetMask = 6,
	[Token(Token = "0x40014E4")]
	CharSetNotSpec = 0,
	[Token(Token = "0x40014E5")]
	CharSetAnsi = 2,
	[Token(Token = "0x40014E6")]
	CharSetUnicode = 4,
	[Token(Token = "0x40014E7")]
	CharSetAuto = CharSetMask,
	[Token(Token = "0x40014E8")]
	BestFitUseAssem = 0,
	[Token(Token = "0x40014E9")]
	BestFitEnabled = 0x10,
	[Token(Token = "0x40014EA")]
	BestFitDisabled = 0x20,
	[Token(Token = "0x40014EB")]
	BestFitMask = BestFitEnabled | BestFitDisabled,
	[Token(Token = "0x40014EC")]
	ThrowOnUnmappableCharUseAssem = 0,
	[Token(Token = "0x40014ED")]
	ThrowOnUnmappableCharEnabled = 0x1000,
	[Token(Token = "0x40014EE")]
	ThrowOnUnmappableCharDisabled = 0x2000,
	[Token(Token = "0x40014EF")]
	ThrowOnUnmappableCharMask = ThrowOnUnmappableCharEnabled | ThrowOnUnmappableCharDisabled,
	[Token(Token = "0x40014F0")]
	SupportsLastError = 0x40,
	[Token(Token = "0x40014F1")]
	CallConvMask = 0x700,
	[Token(Token = "0x40014F2")]
	CallConvWinapi = 0x100,
	[Token(Token = "0x40014F3")]
	CallConvCdecl = 0x200,
	[Token(Token = "0x40014F4")]
	CallConvStdcall = 0x300,
	[Token(Token = "0x40014F5")]
	CallConvThiscall = 0x400,
	[Token(Token = "0x40014F6")]
	CallConvFastcall = 0x500,
	[Token(Token = "0x40014F7")]
	MaxValue = 0xFFFF
}
