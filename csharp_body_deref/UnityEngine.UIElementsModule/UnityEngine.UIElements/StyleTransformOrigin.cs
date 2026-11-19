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
		[Address(RVA = "0x6B14A10", Offset = "0x6B13A10", VA = "0x6B14A10", Slot = "4")]
		get
		{
			return default(TransformOrigin);
		}
		[Token(Token = "0x60020B8")]
		[Address(RVA = "0x6B14AA0", Offset = "0x6B13AA0", VA = "0x6B14AA0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E4")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60020B9")]
		[Address(RVA = "0x6B14AC0", Offset = "0x6B13AC0", VA = "0x6B14AC0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60020BA")]
		[Address(RVA = "0x6B14AD0", Offset = "0x6B13AD0", VA = "0x6B14AD0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x6B14AE0", Offset = "0x6B13AE0", VA = "0x6B14AE0")]
	public StyleTransformOrigin(TransformOrigin v)
	{
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x6B14B20", Offset = "0x6B13B20", VA = "0x6B14B20")]
	public StyleTransformOrigin(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x6B14B00", Offset = "0x6B13B00", VA = "0x6B14B00")]
	internal StyleTransformOrigin(TransformOrigin v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x6B14B40", Offset = "0x6B13B40", VA = "0x6B14B40")]
	public static bool operator ==(StyleTransformOrigin lhs, StyleTransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x6B14BF0", Offset = "0x6B13BF0", VA = "0x6B14BF0")]
	public static implicit operator StyleTransformOrigin(StyleKeyword keyword)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x6B14C10", Offset = "0x6B13C10", VA = "0x6B14C10")]
	public static implicit operator StyleTransformOrigin(TransformOrigin v)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x6B14C30", Offset = "0x6B13C30", VA = "0x6B14C30", Slot = "8")]
	public bool Equals(StyleTransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x6B14CA0", Offset = "0x6B13CA0", VA = "0x6B14CA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x6B14D60", Offset = "0x6B13D60", VA = "0x6B14D60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x6B14E20", Offset = "0x6B13E20", VA = "0x6B14E20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
