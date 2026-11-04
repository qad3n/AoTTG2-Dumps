// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleLength
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041C")]
public struct StyleLength : IStyleValue<Length>, IEquatable<StyleLength>
{
	[Token(Token = "0x4000DCE")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Length m_Value;

	[Token(Token = "0x4000DCF")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008D5")]
	public Length value
	{
		[Token(Token = "0x600204E")]
		[Address(RVA = "0x3114370", Offset = "0x3112970", VA = "0x183114370", Slot = "4")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600204F")]
		[Address(RVA = "0x31144D0", Offset = "0x3112AD0", VA = "0x1831144D0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D6")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002050")]
		[Address(RVA = "0xA50840", Offset = "0xA4EE40", VA = "0x180A50840", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002051")]
		[Address(RVA = "0x3114480", Offset = "0x3112A80", VA = "0x183114480", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x31142E0", Offset = "0x31128E0", VA = "0x1831142E0")]
	public StyleLength(float v)
	{
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x3114340", Offset = "0x3112940", VA = "0x183114340")]
	public StyleLength(Length v)
	{
	}

	[Token(Token = "0x6002054")]
	[Address(RVA = "0x3111850", Offset = "0x310FE50", VA = "0x183111850")]
	public StyleLength(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002055")]
	[Address(RVA = "0x3114310", Offset = "0x3112910", VA = "0x183114310")]
	internal StyleLength(Length v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x3114390", Offset = "0x3112990", VA = "0x183114390")]
	public static bool operator ==(StyleLength lhs, StyleLength rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x31118C0", Offset = "0x310FEC0", VA = "0x1831118C0")]
	public static implicit operator StyleLength(StyleKeyword keyword)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x3114430", Offset = "0x3112A30", VA = "0x183114430")]
	public static implicit operator StyleLength(float v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x31143D0", Offset = "0x31129D0", VA = "0x1831143D0")]
	public static implicit operator StyleLength(Length v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x3114140", Offset = "0x3112740", VA = "0x183114140", Slot = "8")]
	public bool Equals(StyleLength other)
	{
		return default(bool);
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x3114180", Offset = "0x3112780", VA = "0x183114180", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600205C")]
	[Address(RVA = "0x3114240", Offset = "0x3112840", VA = "0x183114240", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600205D")]
	[Address(RVA = "0x3114270", Offset = "0x3112870", VA = "0x183114270", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
