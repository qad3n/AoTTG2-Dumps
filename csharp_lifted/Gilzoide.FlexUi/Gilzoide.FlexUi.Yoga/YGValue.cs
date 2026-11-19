// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.YGValue
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/YGValue.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
	[Address(RVA = "0x5219C70", Offset = "0x5218C70", VA = "0x5219C70")]
	public YGValue(float value, Unit unit)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGValue.c (Gilzoide.FlexUi.Yoga.YGValue$$.ctor): clean
		this.Value = value;
		this.Unit = unit;
		return;
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x5219C80", Offset = "0x5218C80", VA = "0x5219C80")]
	public static YGValue Percent(float value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGValue.c (Gilzoide.FlexUi.Yoga.YGValue$$Percent): clean
		return (YGValue)((ulong)(uint)value | 0x200000000);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x5219CA0", Offset = "0x5218CA0", VA = "0x5219CA0")]
	public static implicit operator YGValue(float value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGValue.c (Gilzoide.FlexUi.Yoga.YGValue$$op_Implicit): clean
		return (YGValue)((ulong)(uint)value | 0x100000000);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGValue.c.

	// Gilzoide.FlexUi.Yoga.YGValue$$.cctor: clean
	static YGValue()
	{
		YGValue pGVar1;

		(YGValue.Zero) =(YGValue)0x100000000;
		pGVar1 = typeof(YGValue);
		(YGValue.Undefined) =(YGValue)0x7fc00000;
		(pGVar1.static_fields.Auto) = (YGValue)0x37fc00000;
		return;
	}
}
