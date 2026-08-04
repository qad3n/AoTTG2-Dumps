// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleLength
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037C")]
public struct StyleLength : IStyleValue<Length>, IEquatable<StyleLength>
{
	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x0")]
	private Length m_Value;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x8")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000643")]
	public Length value
	{
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x50AF4E0", Offset = "0x50AF4E0", VA = "0x50AF4E0", Slot = "4")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x50AF500", Offset = "0x50AF500", VA = "0x50AF500", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000644")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600168C")]
		[Address(RVA = "0x50AF540", Offset = "0x50AF540", VA = "0x50AF540", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600168D")]
		[Address(RVA = "0x50AF550", Offset = "0x50AF550", VA = "0x50AF550", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x50AF590", Offset = "0x50AF590", VA = "0x50AF590")]
	public StyleLength(float v)
	{
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x50AF5D0", Offset = "0x50AF5D0", VA = "0x50AF5D0")]
	public StyleLength(Length v)
	{
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x50AF5F0", Offset = "0x50AF5F0", VA = "0x50AF5F0")]
	public StyleLength(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x50AC480", Offset = "0x50AC480", VA = "0x50AC480")]
	internal StyleLength(Length v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x50AF600", Offset = "0x50AF600", VA = "0x50AF600")]
	public static bool operator ==(StyleLength lhs, StyleLength rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x50AC4A0", Offset = "0x50AC4A0", VA = "0x50AC4A0")]
	public static implicit operator StyleLength(StyleKeyword keyword)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x50AF630", Offset = "0x50AF630", VA = "0x50AF630")]
	public static implicit operator StyleLength(float v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x50AF660", Offset = "0x50AF660", VA = "0x50AF660")]
	public static implicit operator StyleLength(Length v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x50AF680", Offset = "0x50AF680", VA = "0x50AF680", Slot = "8")]
	public bool Equals(StyleLength other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x50AF6B0", Offset = "0x50AF6B0", VA = "0x50AF6B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x50AF740", Offset = "0x50AF740", VA = "0x50AF740", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001699")]
	[Address(RVA = "0x50AF760", Offset = "0x50AF760", VA = "0x50AF760", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
