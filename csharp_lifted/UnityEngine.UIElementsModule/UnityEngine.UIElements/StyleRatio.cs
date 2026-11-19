// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleRatio
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200041F")]
public struct StyleRatio : IStyleValue<Ratio>, IEquatable<StyleRatio>
{
	[Token(Token = "0x4000DD4")]
	[FieldOffset(Offset = "0x0")]
	private Ratio m_Value;

	[Token(Token = "0x4000DD5")]
	[FieldOffset(Offset = "0x4")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008DB")]
	public Ratio value
	{
		[Token(Token = "0x600207B")]
		[Address(RVA = "0x6B13990", Offset = "0x6B12990", VA = "0x6B13990", Slot = "4")]
		get
		{
			return default(Ratio);
		}
		[Token(Token = "0x600207C")]
		[Address(RVA = "0x6B139B0", Offset = "0x6B129B0", VA = "0x6B139B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008DC")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600207D")]
		[Address(RVA = "0x6B139C0", Offset = "0x6B129C0", VA = "0x6B139C0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600207E")]
		[Address(RVA = "0x6B139D0", Offset = "0x6B129D0", VA = "0x6B139D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600207F")]
	[Address(RVA = "0x6B0E800", Offset = "0x6B0D800", VA = "0x6B0E800")]
	public StyleRatio(Ratio value)
	{
	}

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x6B139F0", Offset = "0x6B129F0", VA = "0x6B139F0")]
	public StyleRatio(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x6B139E0", Offset = "0x6B129E0", VA = "0x6B139E0")]
	internal StyleRatio(Ratio value, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x6B13A00", Offset = "0x6B12A00", VA = "0x6B13A00")]
	public static StyleRatio Auto()
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x6B13A10", Offset = "0x6B12A10", VA = "0x6B13A10")]
	internal bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x6B13A20", Offset = "0x6B12A20", VA = "0x6B13A20")]
	public static implicit operator StyleRatio(float value)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002085")]
	[Address(RVA = "0x6B13A30", Offset = "0x6B12A30", VA = "0x6B13A30")]
	public static implicit operator StyleRatio(Ratio value)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002086")]
	[Address(RVA = "0x6B13A40", Offset = "0x6B12A40", VA = "0x6B13A40")]
	public static implicit operator Ratio(StyleRatio value)
	{
		return default(Ratio);
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x6B0E810", Offset = "0x6B0D810", VA = "0x6B0E810")]
	public static implicit operator StyleRatio(StyleKeyword value)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x6B13A60", Offset = "0x6B12A60", VA = "0x6B13A60")]
	public static bool operator ==(StyleRatio lhs, StyleRatio rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x6B13AB0", Offset = "0x6B12AB0", VA = "0x6B13AB0", Slot = "8")]
	public bool Equals(StyleRatio other)
	{
		return default(bool);
	}

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x6B13B00", Offset = "0x6B12B00", VA = "0x6B13B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600208B")]
	[Address(RVA = "0x6B13BB0", Offset = "0x6B12BB0", VA = "0x6B13BB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600208C")]
	[Address(RVA = "0x6B13BC0", Offset = "0x6B12BC0", VA = "0x6B13BC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
