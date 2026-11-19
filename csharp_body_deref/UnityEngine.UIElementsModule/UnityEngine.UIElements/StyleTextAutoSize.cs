// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTextAutoSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000494")]
public struct StyleTextAutoSize : IStyleValue<TextAutoSize>, IEquatable<StyleTextAutoSize>
{
	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x0")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x4")]
	private TextAutoSize m_Value;

	[Token(Token = "0x1700093A")]
	public TextAutoSize value
	{
		[Token(Token = "0x6002335")]
		[Address(RVA = "0x6B28950", Offset = "0x6B27950", VA = "0x6B28950", Slot = "4")]
		get
		{
			return default(TextAutoSize);
		}
		[Token(Token = "0x6002336")]
		[Address(RVA = "0x6B28990", Offset = "0x6B27990", VA = "0x6B28990", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700093B")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002337")]
		[Address(RVA = "0x6B289B0", Offset = "0x6B279B0", VA = "0x6B289B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002338")]
		[Address(RVA = "0x6B289C0", Offset = "0x6B279C0", VA = "0x6B289C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002339")]
	[Address(RVA = "0x6B289D0", Offset = "0x6B279D0", VA = "0x6B289D0")]
	public StyleTextAutoSize(TextAutoSize v)
	{
	}

	[Token(Token = "0x600233A")]
	[Address(RVA = "0x6B28A10", Offset = "0x6B27A10", VA = "0x6B28A10")]
	public StyleTextAutoSize(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600233B")]
	[Address(RVA = "0x6B289F0", Offset = "0x6B279F0", VA = "0x6B289F0")]
	internal StyleTextAutoSize(TextAutoSize v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600233C")]
	[Address(RVA = "0x6B28A30", Offset = "0x6B27A30", VA = "0x6B28A30")]
	public static bool operator ==(StyleTextAutoSize lhs, StyleTextAutoSize rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600233D")]
	[Address(RVA = "0x6B28AA0", Offset = "0x6B27AA0", VA = "0x6B28AA0")]
	public static implicit operator StyleTextAutoSize(StyleKeyword keyword)
	{
		return default(StyleTextAutoSize);
	}

	[Token(Token = "0x600233E")]
	[Address(RVA = "0x6B28AC0", Offset = "0x6B27AC0", VA = "0x6B28AC0")]
	public static implicit operator StyleTextAutoSize(TextAutoSize v)
	{
		return default(StyleTextAutoSize);
	}

	[Token(Token = "0x600233F")]
	[Address(RVA = "0x6B28AE0", Offset = "0x6B27AE0", VA = "0x6B28AE0", Slot = "8")]
	public bool Equals(StyleTextAutoSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002340")]
	[Address(RVA = "0x6B28B40", Offset = "0x6B27B40", VA = "0x6B28B40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002341")]
	[Address(RVA = "0x6B28BE0", Offset = "0x6B27BE0", VA = "0x6B28BE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002342")]
	[Address(RVA = "0x6B28C20", Offset = "0x6B27C20", VA = "0x6B28C20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
