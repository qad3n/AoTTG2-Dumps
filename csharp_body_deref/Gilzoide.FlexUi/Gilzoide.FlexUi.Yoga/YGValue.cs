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
	[Address(RVA = "0x39C0080", Offset = "0x39C0080", VA = "0x39C0080")]
	public YGValue(float value, Unit unit)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x39C0090", Offset = "0x39C0090", VA = "0x39C0090")]
	public static YGValue Percent(float value)
	{
		return default(YGValue);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x39C00B0", Offset = "0x39C00B0", VA = "0x39C00B0")]
	public static implicit operator YGValue(float value)
	{
		return default(YGValue);
	}
}
