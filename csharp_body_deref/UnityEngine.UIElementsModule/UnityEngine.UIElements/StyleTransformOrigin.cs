// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTransformOrigin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000423")]
public struct StyleTransformOrigin : IStyleValue<TransformOrigin>, IEquatable<StyleTransformOrigin>
{
	[Token(Token = "0x4000DDC")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private TransformOrigin m_Value;

	[Token(Token = "0x4000DDD")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008E3")]
	public TransformOrigin value
	{
		[Token(Token = "0x60020B7")]
		[Address(RVA = "0x311C1C0", Offset = "0x311A7C0", VA = "0x18311C1C0", Slot = "4")]
		get
		{
			return default(TransformOrigin);
		}
		[Token(Token = "0x60020B8")]
		[Address(RVA = "0x3111AC0", Offset = "0x31100C0", VA = "0x183111AC0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E4")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60020B9")]
		[Address(RVA = "0x152EFE0", Offset = "0x152D5E0", VA = "0x18152EFE0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60020BA")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x3111AC0", Offset = "0x31100C0", VA = "0x183111AC0")]
	public StyleTransformOrigin(TransformOrigin v)
	{
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x3111AB0", Offset = "0x31100B0", VA = "0x183111AB0")]
	public StyleTransformOrigin(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x3111A90", Offset = "0x3110090", VA = "0x183111A90")]
	internal StyleTransformOrigin(TransformOrigin v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x311C290", Offset = "0x311A890", VA = "0x18311C290")]
	public static bool operator ==(StyleTransformOrigin lhs, StyleTransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x3111B90", Offset = "0x3110190", VA = "0x183111B90")]
	public static implicit operator StyleTransformOrigin(StyleKeyword keyword)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x3111B60", Offset = "0x3110160", VA = "0x183111B60")]
	public static implicit operator StyleTransformOrigin(TransformOrigin v)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x311BF90", Offset = "0x311A590", VA = "0x18311BF90", Slot = "8")]
	public bool Equals(StyleTransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x311C040", Offset = "0x311A640", VA = "0x18311C040", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x311C0E0", Offset = "0x311A6E0", VA = "0x18311C0E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x311C150", Offset = "0x311A750", VA = "0x18311C150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
