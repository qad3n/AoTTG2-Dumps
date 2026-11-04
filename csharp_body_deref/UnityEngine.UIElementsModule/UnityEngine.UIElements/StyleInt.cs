// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleInt
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041B")]
public struct StyleInt : IStyleValue<int>, IEquatable<StyleInt>
{
	[Token(Token = "0x4000DCC")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x4000DCD")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008D3")]
	public int value
	{
		[Token(Token = "0x6002040")]
		[Address(RVA = "0xD163A0", Offset = "0xD149A0", VA = "0x180D163A0", Slot = "4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002041")]
		[Address(RVA = "0xD16C20", Offset = "0xD15220", VA = "0x180D16C20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D4")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002042")]
		[Address(RVA = "0xD161B0", Offset = "0xD147B0", VA = "0x180D161B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002043")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002044")]
	[Address(RVA = "0x31140F0", Offset = "0x31126F0", VA = "0x1831140F0")]
	public StyleInt(int v)
	{
	}

	[Token(Token = "0x6002045")]
	[Address(RVA = "0x31137C0", Offset = "0x3111DC0", VA = "0x1831137C0")]
	public StyleInt(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002046")]
	[Address(RVA = "0xD16150", Offset = "0xD14750", VA = "0x180D16150")]
	internal StyleInt(int v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002047")]
	[Address(RVA = "0x3114100", Offset = "0x3112700", VA = "0x183114100")]
	public static bool operator ==(StyleInt lhs, StyleInt rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002048")]
	[Address(RVA = "0x3113830", Offset = "0x3111E30", VA = "0x183113830")]
	public static implicit operator StyleInt(StyleKeyword keyword)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x6002049")]
	[Address(RVA = "0x3114120", Offset = "0x3112720", VA = "0x183114120")]
	public static implicit operator StyleInt(int v)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x600204A")]
	[Address(RVA = "0x3114060", Offset = "0x3112660", VA = "0x183114060", Slot = "8")]
	public bool Equals(StyleInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x3113FC0", Offset = "0x31125C0", VA = "0x183113FC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x2F6AE60", Offset = "0x2F69460", VA = "0x182F6AE60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600204D")]
	[Address(RVA = "0x3114090", Offset = "0x3112690", VA = "0x183114090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
