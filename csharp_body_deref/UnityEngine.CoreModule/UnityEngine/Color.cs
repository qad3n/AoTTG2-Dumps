// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Color
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200013B")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("ColorRGBAf")]
[DefaultMember("Item")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Color.h")]
public struct Color : IEquatable<Color>, IFormattable
{
	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x0")]
	public float r;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x4")]
	public float g;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x8")]
	public float b;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0xC")]
	public float a;

	[Token(Token = "0x170001C1")]
	public readonly Color linear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x2F026D0", Offset = "0x2F00CD0", VA = "0x182F026D0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C2")]
	public readonly Color gamma
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x2F025D0", Offset = "0x2F00BD0", VA = "0x182F025D0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C3")]
	public readonly float maxColorComponent
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x2F027B0", Offset = "0x2F00DB0", VA = "0x182F027B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001C4")]
	public static Color black
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x2F02580", Offset = "0x2F00B80", VA = "0x182F02580")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C5")]
	public static Color blue
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x2F025A0", Offset = "0x2F00BA0", VA = "0x182F025A0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C6")]
	public static Color clear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x2F025C0", Offset = "0x2F00BC0", VA = "0x182F025C0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C7")]
	public static Color gray
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x2F02690", Offset = "0x2F00C90", VA = "0x182F02690")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C8")]
	public static Color grey
	{
		[Token(Token = "0x6000A21")]
		[Address(RVA = "0x2F02690", Offset = "0x2F00C90", VA = "0x182F02690")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C9")]
	public static Color gray5
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x2F02690", Offset = "0x2F00C90", VA = "0x182F02690")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CA")]
	public static Color green
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x2F026B0", Offset = "0x2F00CB0", VA = "0x182F026B0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CB")]
	public static Color magenta
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x2F02790", Offset = "0x2F00D90", VA = "0x182F02790")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CC")]
	public static Color red
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x2F027E0", Offset = "0x2F00DE0", VA = "0x182F027E0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CD")]
	public static Color white
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x2F02800", Offset = "0x2F00E00", VA = "0x182F02800")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CE")]
	public static Color yellow
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x2F02820", Offset = "0x2F00E20", VA = "0x182F02820")]
		get
		{
			return default(Color);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public Color(float r, float g, float b, float a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x2F02560", Offset = "0x2F00B60", VA = "0x182F02560")]
	public Color(float r, float g, float b)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x2F022D0", Offset = "0x2F008D0", VA = "0x182F022D0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x2F022E0", Offset = "0x2F008E0", VA = "0x182F022E0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x2F01E00", Offset = "0x2F00400", VA = "0x182F01E00", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x2F01CF0", Offset = "0x2F002F0", VA = "0x182F01CF0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x5BB830", Offset = "0x5B9E30", VA = "0x1805BB830", Slot = "4")]
	public readonly bool Equals(Color other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x5BB830", Offset = "0x5B9E30", VA = "0x1805BB830")]
	public readonly bool Equals(in Color other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x2CF45C0", Offset = "0x2CF2BC0", VA = "0x182CF45C0")]
	public static Color operator +(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x2F02970", Offset = "0x2F00F70", VA = "0x182F02970")]
	public static Color operator -(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x2F02930", Offset = "0x2F00F30", VA = "0x182F02930")]
	public static Color operator *(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x2F02900", Offset = "0x2F00F00", VA = "0x182F02900")]
	public static Color operator *(Color a, float b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x2F02840", Offset = "0x2F00E40", VA = "0x182F02840")]
	public static bool operator ==(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x2F028A0", Offset = "0x2F00EA0", VA = "0x182F028A0")]
	public static bool operator !=(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x2F020D0", Offset = "0x2F006D0", VA = "0x182F020D0")]
	public static Color Lerp(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x1DAF120", Offset = "0x1DAD720", VA = "0x181DAF120")]
	public static Color LerpUnclamped(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x2F02160", Offset = "0x2F00760", VA = "0x182F02160")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal readonly Color RGBMultiplied(float multiplier)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static implicit operator Vector4(Color c)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static implicit operator Color(Vector4 v)
	{
		return default(Color);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x2F02240", Offset = "0x2F00840", VA = "0x182F02240")]
	public static void RGBToHSV(Color rgbColor, out float H, out float S, out float V)
	{
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x2F02190", Offset = "0x2F00790", VA = "0x182F02190")]
	private static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, out float H, out float S, out float V)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x2F01E60", Offset = "0x2F00460", VA = "0x182F01E60")]
	public static Color HSVToRGB(float H, float S, float V)
	{
		return default(Color);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x2F01E90", Offset = "0x2F00490", VA = "0x182F01E90")]
	public static Color HSVToRGB(float H, float S, float V, bool hdr)
	{
		return default(Color);
	}
}
