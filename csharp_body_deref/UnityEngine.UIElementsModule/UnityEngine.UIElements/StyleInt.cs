// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037B")]
public struct StyleInt : IStyleValue<int>, IEquatable<StyleInt>
{
	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x0")]
	private int m_Value;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x4")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000641")]
	public int value
	{
		[Token(Token = "0x600167E")]
		[Address(RVA = "0x50AF360", Offset = "0x50AF360", VA = "0x50AF360", Slot = "4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600167F")]
		[Address(RVA = "0x50AF370", Offset = "0x50AF370", VA = "0x50AF370", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000642")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001680")]
		[Address(RVA = "0x50AF380", Offset = "0x50AF380", VA = "0x50AF380", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x50AF390", Offset = "0x50AF390", VA = "0x50AF390", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x50AF3A0", Offset = "0x50AF3A0", VA = "0x50AF3A0")]
	public StyleInt(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x50AC570", Offset = "0x50AC570", VA = "0x50AC570")]
	internal StyleInt(int v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x50AF3B0", Offset = "0x50AF3B0", VA = "0x50AF3B0")]
	public static bool operator ==(StyleInt lhs, StyleInt rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x50AC580", Offset = "0x50AC580", VA = "0x50AC580")]
	public static implicit operator StyleInt(StyleKeyword keyword)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x50AF3D0", Offset = "0x50AF3D0", VA = "0x50AF3D0", Slot = "8")]
	public bool Equals(StyleInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x50AF3F0", Offset = "0x50AF3F0", VA = "0x50AF3F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x50AF460", Offset = "0x50AF460", VA = "0x50AF460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x50AF470", Offset = "0x50AF470", VA = "0x50AF470", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
