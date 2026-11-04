// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTranslate
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000424")]
public struct StyleTranslate : IStyleValue<Translate>, IEquatable<StyleTranslate>
{
	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Translate m_Value;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008E5")]
	public Translate value
	{
		[Token(Token = "0x60020C5")]
		[Address(RVA = "0x311C580", Offset = "0x311AB80", VA = "0x18311C580", Slot = "4")]
		get
		{
			return default(Translate);
		}
		[Token(Token = "0x60020C6")]
		[Address(RVA = "0x31176C0", Offset = "0x3115CC0", VA = "0x1831176C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E6")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60020C7")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60020C8")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60020C9")]
	[Address(RVA = "0x31176C0", Offset = "0x3115CC0", VA = "0x1831176C0")]
	public StyleTranslate(Translate v)
	{
	}

	[Token(Token = "0x60020CA")]
	[Address(RVA = "0x31176B0", Offset = "0x3115CB0", VA = "0x1831176B0")]
	public StyleTranslate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020CB")]
	[Address(RVA = "0x31176E0", Offset = "0x3115CE0", VA = "0x1831176E0")]
	internal StyleTranslate(Translate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020CC")]
	[Address(RVA = "0x311C630", Offset = "0x311AC30", VA = "0x18311C630")]
	public static bool operator ==(StyleTranslate lhs, StyleTranslate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020CD")]
	[Address(RVA = "0x3117960", Offset = "0x3115F60", VA = "0x183117960")]
	public static implicit operator StyleTranslate(StyleKeyword keyword)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60020CE")]
	[Address(RVA = "0x3117920", Offset = "0x3115F20", VA = "0x183117920")]
	public static implicit operator StyleTranslate(Translate v)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x311C700", Offset = "0x311AD00", VA = "0x18311C700")]
	public static implicit operator StyleTranslate(Vector3 v)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x311C330", Offset = "0x311A930", VA = "0x18311C330", Slot = "8")]
	public bool Equals(StyleTranslate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x311C400", Offset = "0x311AA00", VA = "0x18311C400", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x311C4A0", Offset = "0x311AAA0", VA = "0x18311C4A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x311C510", Offset = "0x311AB10", VA = "0x18311C510", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
