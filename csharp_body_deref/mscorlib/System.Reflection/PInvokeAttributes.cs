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
[Token(Token = "0x2000507")]
[Flags]
internal enum PInvokeAttributes
{
	[Token(Token = "0x40014E3")]
	NoMangle = 1,
	[Token(Token = "0x40014E4")]
	CharSetMask = 6,
	[Token(Token = "0x40014E5")]
	CharSetNotSpec = 0,
	[Token(Token = "0x40014E6")]
	CharSetAnsi = 2,
	[Token(Token = "0x40014E7")]
	CharSetUnicode = 4,
	[Token(Token = "0x40014E8")]
	CharSetAuto = 6,
	[Token(Token = "0x40014E9")]
	BestFitUseAssem = 0,
	[Token(Token = "0x40014EA")]
	BestFitEnabled = 0x10,
	[Token(Token = "0x40014EB")]
	BestFitDisabled = 0x20,
	[Token(Token = "0x40014EC")]
	BestFitMask = 0x30,
	[Token(Token = "0x40014ED")]
	ThrowOnUnmappableCharUseAssem = 0,
	[Token(Token = "0x40014EE")]
	ThrowOnUnmappableCharEnabled = 0x1000,
	[Token(Token = "0x40014EF")]
	ThrowOnUnmappableCharDisabled = 0x2000,
	[Token(Token = "0x40014F0")]
	ThrowOnUnmappableCharMask = 0x3000,
	[Token(Token = "0x40014F1")]
	SupportsLastError = 0x40,
	[Token(Token = "0x40014F2")]
	CallConvMask = 0x700,
	[Token(Token = "0x40014F3")]
	CallConvWinapi = 0x100,
	[Token(Token = "0x40014F4")]
	CallConvCdecl = 0x200,
	[Token(Token = "0x40014F5")]
	CallConvStdcall = 0x300,
	[Token(Token = "0x40014F6")]
	CallConvThiscall = 0x400,
	[Token(Token = "0x40014F7")]
	CallConvFastcall = 0x500,
	[Token(Token = "0x40014F8")]
	MaxValue = 0xFFFF
}
