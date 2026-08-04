// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000372")]
public struct StyleBackgroundSize : IStyleValue<BackgroundSize>, IEquatable<StyleBackgroundSize>
{
	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x0")]
	private BackgroundSize m_Value;

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x14")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000632")]
	public BackgroundSize value
	{
		[Token(Token = "0x6001612")]
		[Address(RVA = "0x50AE250", Offset = "0x50AE250", VA = "0x50AE250", Slot = "4")]
		get
		{
			return default(BackgroundSize);
		}
		[Token(Token = "0x6001613")]
		[Address(RVA = "0x50AE2A0", Offset = "0x50AE2A0", VA = "0x50AE2A0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000633")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001614")]
		[Address(RVA = "0x50AE2C0", Offset = "0x50AE2C0", VA = "0x50AE2C0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x50AE2D0", Offset = "0x50AE2D0", VA = "0x50AE2D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x50AE2E0", Offset = "0x50AE2E0", VA = "0x50AE2E0")]
	public StyleBackgroundSize(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x50AE300", Offset = "0x50AE300", VA = "0x50AE300")]
	internal StyleBackgroundSize(BackgroundSize v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x50AE320", Offset = "0x50AE320", VA = "0x50AE320")]
	public static bool operator ==(StyleBackgroundSize lhs, StyleBackgroundSize rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x50AE370", Offset = "0x50AE370", VA = "0x50AE370")]
	public static implicit operator StyleBackgroundSize(StyleKeyword keyword)
	{
		return default(StyleBackgroundSize);
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x50AE390", Offset = "0x50AE390", VA = "0x50AE390", Slot = "8")]
	public bool Equals(StyleBackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x50AE400", Offset = "0x50AE400", VA = "0x50AE400", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x50AE4D0", Offset = "0x50AE4D0", VA = "0x50AE4D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x50AE4F0", Offset = "0x50AE4F0", VA = "0x50AE4F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
