// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTextAutoSize
// Update status: NEW in this game update
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
		[Address(RVA = "0x312CBD0", Offset = "0x312B1D0", VA = "0x18312CBD0", Slot = "4")]
		get
		{
			return default(TextAutoSize);
		}
		[Token(Token = "0x6002336")]
		[Address(RVA = "0x312CB80", Offset = "0x312B180", VA = "0x18312CB80", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700093B")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002337")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002338")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002339")]
	[Address(RVA = "0x312CB80", Offset = "0x312B180", VA = "0x18312CB80")]
	public StyleTextAutoSize(TextAutoSize v)
	{
	}

	[Token(Token = "0x600233A")]
	[Address(RVA = "0x312CBC0", Offset = "0x312B1C0", VA = "0x18312CBC0")]
	public StyleTextAutoSize(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600233B")]
	[Address(RVA = "0x312CBA0", Offset = "0x312B1A0", VA = "0x18312CBA0")]
	internal StyleTextAutoSize(TextAutoSize v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600233C")]
	[Address(RVA = "0x312CC00", Offset = "0x312B200", VA = "0x18312CC00")]
	public static bool operator ==(StyleTextAutoSize lhs, StyleTextAutoSize rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600233D")]
	[Address(RVA = "0x312CCA0", Offset = "0x312B2A0", VA = "0x18312CCA0")]
	public static implicit operator StyleTextAutoSize(StyleKeyword keyword)
	{
		return default(StyleTextAutoSize);
	}

	[Token(Token = "0x600233E")]
	[Address(RVA = "0x312CC50", Offset = "0x312B250", VA = "0x18312CC50")]
	public static implicit operator StyleTextAutoSize(TextAutoSize v)
	{
		return default(StyleTextAutoSize);
	}

	[Token(Token = "0x600233F")]
	[Address(RVA = "0x312C970", Offset = "0x312AF70", VA = "0x18312C970", Slot = "8")]
	public bool Equals(StyleTextAutoSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002340")]
	[Address(RVA = "0x312C9D0", Offset = "0x312AFD0", VA = "0x18312C9D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002341")]
	[Address(RVA = "0x312CAD0", Offset = "0x312B0D0", VA = "0x18312CAD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002342")]
	[Address(RVA = "0x312CB10", Offset = "0x312B110", VA = "0x18312CB10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
