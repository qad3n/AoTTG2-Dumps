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
[Token(Token = "0x200001B")]
public struct YGValue
{
	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x0")]
	public float Value;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x4")]
	public Unit Unit;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly YGValue Zero;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x8")]
	public static readonly YGValue Undefined;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x10")]
	public static readonly YGValue Auto;

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x1381B80", Offset = "0x1380180", VA = "0x181381B80")]
	public YGValue(float value, Unit unit)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x1880A40", Offset = "0x187F040", VA = "0x181880A40")]
	public static YGValue Percent(float value)
	{
		return default(YGValue);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x1880B00", Offset = "0x187F100", VA = "0x181880B00")]
	public static implicit operator YGValue(float value)
	{
		return default(YGValue);
	}
}
