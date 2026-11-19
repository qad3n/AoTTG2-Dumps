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
		[Address(RVA = "0x6B13400", Offset = "0x6B12400", VA = "0x6B13400", Slot = "4")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600204F")]
		[Address(RVA = "0x6B13430", Offset = "0x6B12430", VA = "0x6B13430", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D6")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002050")]
		[Address(RVA = "0x6B13450", Offset = "0x6B12450", VA = "0x6B13450", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002051")]
		[Address(RVA = "0x6B13460", Offset = "0x6B12460", VA = "0x6B13460", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x6B134A0", Offset = "0x6B124A0", VA = "0x6B134A0")]
	public StyleLength(float v)
	{
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x6B134E0", Offset = "0x6B124E0", VA = "0x6B134E0")]
	public StyleLength(Length v)
	{
	}

	[Token(Token = "0x6002054")]
	[Address(RVA = "0x6B13500", Offset = "0x6B12500", VA = "0x6B13500")]
	public StyleLength(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002055")]
	[Address(RVA = "0x6B0DD80", Offset = "0x6B0CD80", VA = "0x6B0DD80")]
	internal StyleLength(Length v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x6B13510", Offset = "0x6B12510", VA = "0x6B13510")]
	public static bool operator ==(StyleLength lhs, StyleLength rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x6B0DDA0", Offset = "0x6B0CDA0", VA = "0x6B0DDA0")]
	public static implicit operator StyleLength(StyleKeyword keyword)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x6B13540", Offset = "0x6B12540", VA = "0x6B13540")]
	public static implicit operator StyleLength(float v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x6B13570", Offset = "0x6B12570", VA = "0x6B13570")]
	public static implicit operator StyleLength(Length v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x6B13590", Offset = "0x6B12590", VA = "0x6B13590", Slot = "8")]
	public bool Equals(StyleLength other)
	{
		return default(bool);
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x6B135C0", Offset = "0x6B125C0", VA = "0x6B135C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600205C")]
	[Address(RVA = "0x6B13640", Offset = "0x6B12640", VA = "0x6B13640", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600205D")]
	[Address(RVA = "0x6B13660", Offset = "0x6B12660", VA = "0x6B13660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
