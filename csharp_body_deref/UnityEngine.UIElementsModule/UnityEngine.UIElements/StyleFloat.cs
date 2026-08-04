// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleFloat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000378")]
public struct StyleFloat : IStyleValue<float>, IEquatable<StyleFloat>
{
	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x0")]
	private float m_Value;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x4")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700063B")]
	public float value
	{
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x50AEBE0", Offset = "0x50AEBE0", VA = "0x50AEBE0", Slot = "4")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001657")]
		[Address(RVA = "0x50AEBF0", Offset = "0x50AEBF0", VA = "0x50AEBF0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700063C")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x50AEC00", Offset = "0x50AEC00", VA = "0x50AEC00", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001659")]
		[Address(RVA = "0x50AEC10", Offset = "0x50AEC10", VA = "0x50AEC10", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x50AEC20", Offset = "0x50AEC20", VA = "0x50AEC20")]
	public StyleFloat(float v)
	{
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x50AEC30", Offset = "0x50AEC30", VA = "0x50AEC30")]
	public StyleFloat(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x50AC500", Offset = "0x50AC500", VA = "0x50AC500")]
	internal StyleFloat(float v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x50AEC40", Offset = "0x50AEC40", VA = "0x50AEC40")]
	public static bool operator ==(StyleFloat lhs, StyleFloat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x50AC510", Offset = "0x50AC510", VA = "0x50AC510")]
	public static implicit operator StyleFloat(StyleKeyword keyword)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x50AEC70", Offset = "0x50AEC70", VA = "0x50AEC70")]
	public static implicit operator StyleFloat(float v)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x50AEC80", Offset = "0x50AEC80", VA = "0x50AEC80", Slot = "8")]
	public bool Equals(StyleFloat other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x50AECA0", Offset = "0x50AECA0", VA = "0x50AECA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x50AED10", Offset = "0x50AED10", VA = "0x50AED10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x50AED30", Offset = "0x50AED30", VA = "0x50AED30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
