// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Dimension
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Serializable]
[Token(Token = "0x200062C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct Dimension : IEquatable<Dimension>
{
	[Token(Token = "0x200062D")]
	public enum Unit
	{
		[Token(Token = "0x40017A0")]
		Unitless,
		[Token(Token = "0x40017A1")]
		Pixel,
		[Token(Token = "0x40017A2")]
		Percent,
		[Token(Token = "0x40017A3")]
		Second,
		[Token(Token = "0x40017A4")]
		Millisecond,
		[Token(Token = "0x40017A5")]
		Degree,
		[Token(Token = "0x40017A6")]
		Gradian,
		[Token(Token = "0x40017A7")]
		Radian,
		[Token(Token = "0x40017A8")]
		Turn
	}

	[Token(Token = "0x400179D")]
	[FieldOffset(Offset = "0x0")]
	public Unit unit;

	[Token(Token = "0x400179E")]
	[FieldOffset(Offset = "0x4")]
	public float value;

	[Token(Token = "0x6002D3E")]
	[Address(RVA = "0x31EC430", Offset = "0x31EAA30", VA = "0x1831EC430")]
	public Dimension(float value, Unit unit)
	{
	}

	[Token(Token = "0x6002D3F")]
	[Address(RVA = "0x31EC2F0", Offset = "0x31EA8F0", VA = "0x1831EC2F0")]
	public Length ToLength()
	{
		return default(Length);
	}

	[Token(Token = "0x6002D40")]
	[Address(RVA = "0x31EC3F0", Offset = "0x31EA9F0", VA = "0x1831EC3F0")]
	public TimeValue ToTime()
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6002D41")]
	[Address(RVA = "0x31EC260", Offset = "0x31EA860", VA = "0x1831EC260")]
	public Angle ToAngle()
	{
		return default(Angle);
	}

	[Token(Token = "0x6002D42")]
	[Address(RVA = "0x31EC440", Offset = "0x31EAA40", VA = "0x1831EC440")]
	public static bool operator ==(Dimension lhs, Dimension rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D43")]
	[Address(RVA = "0x31EC190", Offset = "0x31EA790", VA = "0x1831EC190", Slot = "4")]
	public bool Equals(Dimension other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D44")]
	[Address(RVA = "0x31EC0D0", Offset = "0x31EA6D0", VA = "0x1831EC0D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D45")]
	[Address(RVA = "0x31EC1C0", Offset = "0x31EA7C0", VA = "0x1831EC1C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D46")]
	[Address(RVA = "0x31EC330", Offset = "0x31EA930", VA = "0x1831EC330", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002D47")]
	[Address(RVA = "0x31EC220", Offset = "0x31EA820", VA = "0x1831EC220")]
	public bool IsLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6002D48")]
	[Address(RVA = "0x31EC240", Offset = "0x31EA840", VA = "0x1831EC240")]
	public bool IsTimeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6002D49")]
	[Address(RVA = "0x31EC200", Offset = "0x31EA800", VA = "0x1831EC200")]
	public bool IsAngle()
	{
		return default(bool);
	}
}
