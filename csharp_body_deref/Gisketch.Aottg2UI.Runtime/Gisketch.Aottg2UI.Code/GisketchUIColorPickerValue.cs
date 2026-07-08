using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000080")]
public readonly struct GisketchUIColorPickerValue
{
	[Token(Token = "0x400029C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly byte R;

	[Token(Token = "0x400029D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public readonly byte G;

	[Token(Token = "0x400029E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public readonly byte B;

	[Token(Token = "0x400029F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public readonly byte A;

	[Token(Token = "0x40002A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly float H;

	[Token(Token = "0x40002A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly float S;

	[Token(Token = "0x40002A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly float V;

	[Token(Token = "0x17000069")]
	public Color32 Color32
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x3A04570", Offset = "0x3A04570", VA = "0x3A04570")]
		get
		{
			return default(Color32);
		}
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x3A03080", Offset = "0x3A03080", VA = "0x3A03080")]
	public GisketchUIColorPickerValue(byte r, byte g, byte b, byte a)
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x3A046E0", Offset = "0x3A046E0", VA = "0x3A046E0")]
	private GisketchUIColorPickerValue(byte r, byte g, byte b, byte a, float h, float s, float v)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x39FF610", Offset = "0x39FF610", VA = "0x39FF610")]
	public string ToHex(bool alpha)
	{
		return null;
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x3A03EF0", Offset = "0x3A03EF0", VA = "0x3A03EF0")]
	public GisketchUIColorPickerValue WithRgb(byte r, byte g, byte b)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x3A04770", Offset = "0x3A04770", VA = "0x3A04770")]
	public GisketchUIColorPickerValue WithAlpha(byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x3A04830", Offset = "0x3A04830", VA = "0x3A04830")]
	public GisketchUIColorPickerValue WithHue(float h)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x3A04A40", Offset = "0x3A04A40", VA = "0x3A04A40")]
	public GisketchUIColorPickerValue WithSaturationValue(float s, float v)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x3A04940", Offset = "0x3A04940", VA = "0x3A04940")]
	public static GisketchUIColorPickerValue FromHsv(float h, float s, float v, byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x39FE590", Offset = "0x39FE590", VA = "0x39FE590")]
	public static string Normalize(string text, bool alpha, [Optional] string fallback)
	{
		return null;
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x3A04160", Offset = "0x3A04160", VA = "0x3A04160")]
	public static string FilterHexInput(string text, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x3A02E00", Offset = "0x3A02E00", VA = "0x3A02E00")]
	public static bool TryParse(string text, bool alpha, out GisketchUIColorPickerValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x3A04580", Offset = "0x3A04580", VA = "0x3A04580")]
	public static bool TryParseByte(string text, out byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x3A046B0", Offset = "0x3A046B0", VA = "0x3A046B0")]
	private static Color ToColor(byte r, byte g, byte b, byte a)
	{
		return default(Color);
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x3A04C70", Offset = "0x3A04C70", VA = "0x3A04C70")]
	private static byte ParseByte(string value, int start)
	{
		return default(byte);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x3A04B40", Offset = "0x3A04B40", VA = "0x3A04B40")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}
}
