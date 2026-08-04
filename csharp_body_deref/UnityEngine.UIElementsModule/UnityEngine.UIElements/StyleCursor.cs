// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleCursor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000374")]
public struct StyleCursor : IStyleValue<Cursor>, IEquatable<StyleCursor>
{
	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x0")]
	private Cursor m_Value;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x18")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000636")]
	public Cursor value
	{
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x50AE870", Offset = "0x50AE870", VA = "0x50AE870", Slot = "4")]
		get
		{
			return default(Cursor);
		}
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x50AE8C0", Offset = "0x50AE8C0", VA = "0x50AE8C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000637")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x50AE8F0", Offset = "0x50AE8F0", VA = "0x50AE8F0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600162D")]
		[Address(RVA = "0x50AE900", Offset = "0x50AE900", VA = "0x50AE900", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x50AE910", Offset = "0x50AE910", VA = "0x50AE910")]
	public StyleCursor(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x50AE930", Offset = "0x50AE930", VA = "0x50AE930")]
	internal StyleCursor(Cursor v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x50AE950", Offset = "0x50AE950", VA = "0x50AE950")]
	public static bool operator ==(StyleCursor lhs, StyleCursor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x50AE9A0", Offset = "0x50AE9A0", VA = "0x50AE9A0")]
	public static implicit operator StyleCursor(StyleKeyword keyword)
	{
		return default(StyleCursor);
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x50AEA00", Offset = "0x50AEA00", VA = "0x50AEA00", Slot = "8")]
	public bool Equals(StyleCursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x50AEA80", Offset = "0x50AEA80", VA = "0x50AEA80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x50AEB50", Offset = "0x50AEB50", VA = "0x50AEB50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x50AEB70", Offset = "0x50AEB70", VA = "0x50AEB70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
