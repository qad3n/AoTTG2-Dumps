// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.YGValue
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/YGValue.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi.Yoga;

[Serializable]
[Token(Token = "0x200001D")]
public struct YGValue
{
	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x0")]
	public float Value;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x4")]
	public Unit Unit;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x0")]
	public static readonly YGValue Zero;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x8")]
	public static readonly YGValue Undefined;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x10")]
	public static readonly YGValue Auto;

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3A292D0", Offset = "0x3A292D0", VA = "0x3A292D0")]
	public YGValue(float value, Unit unit)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3A292E0", Offset = "0x3A292E0", VA = "0x3A292E0")]
	public static YGValue Percent(float value)
	{
		return default(YGValue);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3A29300", Offset = "0x3A29300", VA = "0x3A29300")]
	public static implicit operator YGValue(float value)
	{
		return default(YGValue);
	}
}
