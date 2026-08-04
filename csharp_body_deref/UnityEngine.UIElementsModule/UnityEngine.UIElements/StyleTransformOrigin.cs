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

[Token(Token = "0x2000382")]
public struct StyleTransformOrigin : IStyleValue<TransformOrigin>, IEquatable<StyleTransformOrigin>
{
	[Token(Token = "0x4000A90")]
	[FieldOffset(Offset = "0x0")]
	private TransformOrigin m_Value;

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x14")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700064F")]
	public TransformOrigin value
	{
		[Token(Token = "0x60016DE")]
		[Address(RVA = "0x50B0710", Offset = "0x50B0710", VA = "0x50B0710", Slot = "4")]
		get
		{
			return default(TransformOrigin);
		}
		[Token(Token = "0x60016DF")]
		[Address(RVA = "0x50B0760", Offset = "0x50B0760", VA = "0x50B0760", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016E0")]
		[Address(RVA = "0x50B0780", Offset = "0x50B0780", VA = "0x50B0780", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016E1")]
		[Address(RVA = "0x50B0790", Offset = "0x50B0790", VA = "0x50B0790", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x50B07A0", Offset = "0x50B07A0", VA = "0x50B07A0")]
	public StyleTransformOrigin(TransformOrigin v)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x50B07E0", Offset = "0x50B07E0", VA = "0x50B07E0")]
	public StyleTransformOrigin(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x50B07C0", Offset = "0x50B07C0", VA = "0x50B07C0")]
	internal StyleTransformOrigin(TransformOrigin v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x50B0800", Offset = "0x50B0800", VA = "0x50B0800")]
	public static bool operator ==(StyleTransformOrigin lhs, StyleTransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x50B0870", Offset = "0x50B0870", VA = "0x50B0870")]
	public static implicit operator StyleTransformOrigin(StyleKeyword keyword)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x50B0890", Offset = "0x50B0890", VA = "0x50B0890")]
	public static implicit operator StyleTransformOrigin(TransformOrigin v)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x50B08B0", Offset = "0x50B08B0", VA = "0x50B08B0", Slot = "8")]
	public bool Equals(StyleTransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x50B0930", Offset = "0x50B0930", VA = "0x50B0930", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x50B0A00", Offset = "0x50B0A00", VA = "0x50B0A00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x50B0A60", Offset = "0x50B0A60", VA = "0x50B0A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
