// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Dimension
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6BEEEF0", Offset = "0x6BEDEF0", VA = "0x6BEEEF0")]
	public Dimension(float value, Unit unit)
	{
	}

	[Token(Token = "0x6002D3F")]
	[Address(RVA = "0x6BEEF00", Offset = "0x6BEDF00", VA = "0x6BEEF00")]
	public Length ToLength()
	{
		return default(Length);
	}

	[Token(Token = "0x6002D40")]
	[Address(RVA = "0x6BEEF30", Offset = "0x6BEDF30", VA = "0x6BEEF30")]
	public TimeValue ToTime()
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6002D41")]
	[Address(RVA = "0x6BEEF60", Offset = "0x6BEDF60", VA = "0x6BEEF60")]
	public Angle ToAngle()
	{
		return default(Angle);
	}

	[Token(Token = "0x6002D42")]
	[Address(RVA = "0x6BEEFE0", Offset = "0x6BEDFE0", VA = "0x6BEEFE0")]
	public static bool operator ==(Dimension lhs, Dimension rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D43")]
	[Address(RVA = "0x6BEF010", Offset = "0x6BEE010", VA = "0x6BEF010", Slot = "4")]
	public bool Equals(Dimension other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D44")]
	[Address(RVA = "0x6BEF030", Offset = "0x6BEE030", VA = "0x6BEF030", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D45")]
	[Address(RVA = "0x6BEF0A0", Offset = "0x6BEE0A0", VA = "0x6BEF0A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D46")]
	[Address(RVA = "0x6BEF0E0", Offset = "0x6BEE0E0", VA = "0x6BEF0E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002D47")]
	[Address(RVA = "0x6BEF1D0", Offset = "0x6BEE1D0", VA = "0x6BEF1D0")]
	public bool IsLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6002D48")]
	[Address(RVA = "0x6BEF1E0", Offset = "0x6BEE1E0", VA = "0x6BEF1E0")]
	public bool IsTimeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6002D49")]
	[Address(RVA = "0x6BEF1F0", Offset = "0x6BEE1F0", VA = "0x6BEF1F0")]
	public bool IsAngle()
	{
		return default(bool);
	}
}
