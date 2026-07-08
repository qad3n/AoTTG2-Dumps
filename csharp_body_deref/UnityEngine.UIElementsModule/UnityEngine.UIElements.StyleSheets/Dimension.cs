using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Serializable]
[Token(Token = "0x2000534")]
internal struct Dimension : IEquatable<Dimension>
{
	[Token(Token = "0x2000535")]
	public enum Unit
	{
		[Token(Token = "0x40011F5")]
		Unitless,
		[Token(Token = "0x40011F6")]
		Pixel,
		[Token(Token = "0x40011F7")]
		Percent,
		[Token(Token = "0x40011F8")]
		Second,
		[Token(Token = "0x40011F9")]
		Millisecond,
		[Token(Token = "0x40011FA")]
		Degree,
		[Token(Token = "0x40011FB")]
		Gradian,
		[Token(Token = "0x40011FC")]
		Radian,
		[Token(Token = "0x40011FD")]
		Turn
	}

	[Token(Token = "0x40011F2")]
	[FieldOffset(Offset = "0x0")]
	public Unit unit;

	[Token(Token = "0x40011F3")]
	[FieldOffset(Offset = "0x4")]
	public float value;

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x4C9F090", Offset = "0x4C9F090", VA = "0x4C9F090")]
	public Dimension(float value, Unit unit)
	{
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x4C9F0A0", Offset = "0x4C9F0A0", VA = "0x4C9F0A0")]
	public Length ToLength()
	{
		return default(Length);
	}

	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x4C9F0D0", Offset = "0x4C9F0D0", VA = "0x4C9F0D0")]
	public TimeValue ToTime()
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x4C9F100", Offset = "0x4C9F100", VA = "0x4C9F100")]
	public Angle ToAngle()
	{
		return default(Angle);
	}

	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x4C9F1A0", Offset = "0x4C9F1A0", VA = "0x4C9F1A0")]
	public static bool operator ==(Dimension lhs, Dimension rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x4C9F1D0", Offset = "0x4C9F1D0", VA = "0x4C9F1D0", Slot = "4")]
	public bool Equals(Dimension other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE5")]
	[Address(RVA = "0x4C9F1F0", Offset = "0x4C9F1F0", VA = "0x4C9F1F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE6")]
	[Address(RVA = "0x4C9F260", Offset = "0x4C9F260", VA = "0x4C9F260", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FE7")]
	[Address(RVA = "0x4C9F2A0", Offset = "0x4C9F2A0", VA = "0x4C9F2A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
