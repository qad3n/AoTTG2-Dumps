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

[Serializable]
[Token(Token = "0x2000418")]
public struct StyleFloat : IStyleValue<float>, IEquatable<StyleFloat>
{
	[Token(Token = "0x4000DC6")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000DC7")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008CD")]
	public float value
	{
		[Token(Token = "0x6002013")]
		[Address(RVA = "0x31137D0", Offset = "0x3111DD0", VA = "0x1831137D0", Slot = "4")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002014")]
		[Address(RVA = "0x31137B0", Offset = "0x3111DB0", VA = "0x1831137B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008CE")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002015")]
		[Address(RVA = "0xD161B0", Offset = "0xD147B0", VA = "0x180D161B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002016")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002017")]
	[Address(RVA = "0x31137B0", Offset = "0x3111DB0", VA = "0x1831137B0")]
	public StyleFloat(float v)
	{
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x31137C0", Offset = "0x3111DC0", VA = "0x1831137C0")]
	public StyleFloat(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x1381B80", Offset = "0x1380180", VA = "0x181381B80")]
	internal StyleFloat(float v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600201A")]
	[Address(RVA = "0x31137E0", Offset = "0x3111DE0", VA = "0x1831137E0")]
	public static bool operator ==(StyleFloat lhs, StyleFloat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x3113830", Offset = "0x3111E30", VA = "0x183113830")]
	public static implicit operator StyleFloat(StyleKeyword keyword)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600201C")]
	[Address(RVA = "0x3113810", Offset = "0x3111E10", VA = "0x183113810")]
	public static implicit operator StyleFloat(float v)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600201D")]
	[Address(RVA = "0x3113720", Offset = "0x3111D20", VA = "0x183113720", Slot = "8")]
	public bool Equals(StyleFloat other)
	{
		return default(bool);
	}

	[Token(Token = "0x600201E")]
	[Address(RVA = "0x3113670", Offset = "0x3111C70", VA = "0x183113670", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600201F")]
	[Address(RVA = "0x310E0C0", Offset = "0x310C6C0", VA = "0x18310E0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002020")]
	[Address(RVA = "0x3113750", Offset = "0x3111D50", VA = "0x183113750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
