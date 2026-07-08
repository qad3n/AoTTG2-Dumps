using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000113")]
[DefaultMember("Item")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Color.h")]
[UnityEngine.NativeClass("ColorRGBAf")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct Color : IEquatable<Color>, IFormattable
{
	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x0")]
	public float r;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x4")]
	public float g;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x8")]
	public float b;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0xC")]
	public float a;

	[Token(Token = "0x17000167")]
	public static Color red
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000783")]
		[Address(RVA = "0x4ABDBA0", Offset = "0x4ABDBA0", VA = "0x4ABDBA0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000168")]
	public static Color green
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000784")]
		[Address(RVA = "0x4ABDBB0", Offset = "0x4ABDBB0", VA = "0x4ABDBB0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000169")]
	public static Color blue
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000785")]
		[Address(RVA = "0x4ABDBC0", Offset = "0x4ABDBC0", VA = "0x4ABDBC0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016A")]
	public static Color white
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x4ABDBD0", Offset = "0x4ABDBD0", VA = "0x4ABDBD0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016B")]
	public static Color black
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x4ABDBE0", Offset = "0x4ABDBE0", VA = "0x4ABDBE0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016C")]
	public static Color yellow
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x4ABDBF0", Offset = "0x4ABDBF0", VA = "0x4ABDBF0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016D")]
	public static Color magenta
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x4ABDC00", Offset = "0x4ABDC00", VA = "0x4ABDC00")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016E")]
	public static Color gray
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x4ABDC10", Offset = "0x4ABDC10", VA = "0x4ABDC10")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016F")]
	public static Color clear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x4ABDC20", Offset = "0x4ABDC20", VA = "0x4ABDC20")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000170")]
	public Color linear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4ABDC30", Offset = "0x4ABDC30", VA = "0x4ABDC30")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000171")]
	public Color gamma
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x4ABDD40", Offset = "0x4ABDD40", VA = "0x4ABDD40")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000172")]
	public float maxColorComponent
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x4ABDE50", Offset = "0x4ABDE50", VA = "0x4ABDE50")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4ABD620", Offset = "0x4ABD620", VA = "0x4ABD620")]
	public Color(float r, float g, float b, float a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4ABD640", Offset = "0x4ABD640", VA = "0x4ABD640")]
	public Color(float r, float g, float b)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x4ABD660", Offset = "0x4ABD660", VA = "0x4ABD660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x4ABD670", Offset = "0x4ABD670", VA = "0x4ABD670", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4ABD8B0", Offset = "0x4ABD8B0", VA = "0x4ABD8B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000777")]
	[Address(RVA = "0x4ABD920", Offset = "0x4ABD920", VA = "0x4ABD920", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4ABD9E0", Offset = "0x4ABD9E0", VA = "0x4ABD9E0", Slot = "4")]
	public bool Equals(Color other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4ABDA50", Offset = "0x4ABDA50", VA = "0x4ABDA50")]
	public static Color operator +(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077A")]
	[Address(RVA = "0x4ABDA60", Offset = "0x4ABDA60", VA = "0x4ABDA60")]
	public static Color operator -(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077B")]
	[Address(RVA = "0x4ABDA70", Offset = "0x4ABDA70", VA = "0x4ABDA70")]
	public static Color operator *(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077C")]
	[Address(RVA = "0x4ABDA80", Offset = "0x4ABDA80", VA = "0x4ABDA80")]
	public static Color operator *(Color a, float b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077D")]
	[Address(RVA = "0x4ABDA90", Offset = "0x4ABDA90", VA = "0x4ABDA90")]
	public static Color operator *(float b, Color a)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077E")]
	[Address(RVA = "0x4ABDAB0", Offset = "0x4ABDAB0", VA = "0x4ABDAB0")]
	public static bool operator ==(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x4ABDAF0", Offset = "0x4ABDAF0", VA = "0x4ABDAF0")]
	public static bool operator !=(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000780")]
	[Address(RVA = "0x4ABDB30", Offset = "0x4ABDB30", VA = "0x4ABDB30")]
	public static Color Lerp(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000781")]
	[Address(RVA = "0x4ABDB60", Offset = "0x4ABDB60", VA = "0x4ABDB60")]
	public static Color LerpUnclamped(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000782")]
	[Address(RVA = "0x4ABDB80", Offset = "0x4ABDB80", VA = "0x4ABDB80")]
	internal Color RGBMultiplied(float multiplier)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078F")]
	[Address(RVA = "0x4ABDE60", Offset = "0x4ABDE60", VA = "0x4ABDE60")]
	public static implicit operator Vector4(Color c)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000790")]
	[Address(RVA = "0x4ABDE70", Offset = "0x4ABDE70", VA = "0x4ABDE70")]
	public static implicit operator Color(Vector4 v)
	{
		return default(Color);
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x4ABDE80", Offset = "0x4ABDE80", VA = "0x4ABDE80")]
	public static void RGBToHSV(Color rgbColor, out float H, out float S, out float V)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x4ABE000", Offset = "0x4ABE000", VA = "0x4ABE000")]
	private static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, out float H, out float S, out float V)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000793")]
	[Address(RVA = "0x4ABE080", Offset = "0x4ABE080", VA = "0x4ABE080")]
	public static Color HSVToRGB(float H, float S, float V)
	{
		return default(Color);
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x4ABE210", Offset = "0x4ABE210", VA = "0x4ABE210")]
	public static Color HSVToRGB(float H, float S, float V, bool hdr)
	{
		return default(Color);
	}
}
