// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Color
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000116")]
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

	[Token(Token = "0x17000168")]
	public static Color red
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000785")]
		[Address(RVA = "0x4DE54D0", Offset = "0x4DE54D0", VA = "0x4DE54D0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000169")]
	public static Color green
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x4DE54E0", Offset = "0x4DE54E0", VA = "0x4DE54E0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016A")]
	public static Color blue
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x4DE54F0", Offset = "0x4DE54F0", VA = "0x4DE54F0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016B")]
	public static Color white
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x4DE5500", Offset = "0x4DE5500", VA = "0x4DE5500")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016C")]
	public static Color black
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x4DE5510", Offset = "0x4DE5510", VA = "0x4DE5510")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016D")]
	public static Color yellow
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x4DE5520", Offset = "0x4DE5520", VA = "0x4DE5520")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016E")]
	public static Color magenta
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x4DE5530", Offset = "0x4DE5530", VA = "0x4DE5530")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700016F")]
	public static Color gray
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4DE5540", Offset = "0x4DE5540", VA = "0x4DE5540")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000170")]
	public static Color clear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x4DE5550", Offset = "0x4DE5550", VA = "0x4DE5550")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000171")]
	public Color linear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x4DE5560", Offset = "0x4DE5560", VA = "0x4DE5560")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000172")]
	public Color gamma
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600078F")]
		[Address(RVA = "0x4DE5670", Offset = "0x4DE5670", VA = "0x4DE5670")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000173")]
	public float maxColorComponent
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x4DE5780", Offset = "0x4DE5780", VA = "0x4DE5780")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x4DE4F50", Offset = "0x4DE4F50", VA = "0x4DE4F50")]
	public Color(float r, float g, float b, float a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x4DE4F70", Offset = "0x4DE4F70", VA = "0x4DE4F70")]
	public Color(float r, float g, float b)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4DE4F90", Offset = "0x4DE4F90", VA = "0x4DE4F90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000777")]
	[Address(RVA = "0x4DE4FA0", Offset = "0x4DE4FA0", VA = "0x4DE4FA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4DE51E0", Offset = "0x4DE51E0", VA = "0x4DE51E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4DE5250", Offset = "0x4DE5250", VA = "0x4DE5250", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077A")]
	[Address(RVA = "0x4DE5310", Offset = "0x4DE5310", VA = "0x4DE5310", Slot = "4")]
	public bool Equals(Color other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077B")]
	[Address(RVA = "0x4DE5380", Offset = "0x4DE5380", VA = "0x4DE5380")]
	public static Color operator +(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077C")]
	[Address(RVA = "0x4DE5390", Offset = "0x4DE5390", VA = "0x4DE5390")]
	public static Color operator -(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077D")]
	[Address(RVA = "0x4DE53A0", Offset = "0x4DE53A0", VA = "0x4DE53A0")]
	public static Color operator *(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077E")]
	[Address(RVA = "0x4DE53B0", Offset = "0x4DE53B0", VA = "0x4DE53B0")]
	public static Color operator *(Color a, float b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x4DE53C0", Offset = "0x4DE53C0", VA = "0x4DE53C0")]
	public static Color operator *(float b, Color a)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000780")]
	[Address(RVA = "0x4DE53E0", Offset = "0x4DE53E0", VA = "0x4DE53E0")]
	public static bool operator ==(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000781")]
	[Address(RVA = "0x4DE5420", Offset = "0x4DE5420", VA = "0x4DE5420")]
	public static bool operator !=(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000782")]
	[Address(RVA = "0x4DE5460", Offset = "0x4DE5460", VA = "0x4DE5460")]
	public static Color Lerp(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000783")]
	[Address(RVA = "0x4DE5490", Offset = "0x4DE5490", VA = "0x4DE5490")]
	public static Color LerpUnclamped(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000784")]
	[Address(RVA = "0x4DE54B0", Offset = "0x4DE54B0", VA = "0x4DE54B0")]
	internal Color RGBMultiplied(float multiplier)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000791")]
	[Address(RVA = "0x4DE5790", Offset = "0x4DE5790", VA = "0x4DE5790")]
	public static implicit operator Vector4(Color c)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000792")]
	[Address(RVA = "0x4DE57A0", Offset = "0x4DE57A0", VA = "0x4DE57A0")]
	public static implicit operator Color(Vector4 v)
	{
		return default(Color);
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x4DE57B0", Offset = "0x4DE57B0", VA = "0x4DE57B0")]
	public static void RGBToHSV(Color rgbColor, out float H, out float S, out float V)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x4DE5930", Offset = "0x4DE5930", VA = "0x4DE5930")]
	private static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, out float H, out float S, out float V)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000795")]
	[Address(RVA = "0x4DE59B0", Offset = "0x4DE59B0", VA = "0x4DE59B0")]
	public static Color HSVToRGB(float H, float S, float V)
	{
		return default(Color);
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x4DE5B40", Offset = "0x4DE5B40", VA = "0x4DE5B40")]
	public static Color HSVToRGB(float H, float S, float V, bool hdr)
	{
		return default(Color);
	}
}
