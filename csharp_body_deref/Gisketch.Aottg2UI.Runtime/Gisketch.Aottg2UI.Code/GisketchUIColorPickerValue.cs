// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000083")]
public readonly struct GisketchUIColorPickerValue
{
	[Token(Token = "0x40002B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly byte R;

	[Token(Token = "0x40002B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public readonly byte G;

	[Token(Token = "0x40002BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public readonly byte B;

	[Token(Token = "0x40002BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public readonly byte A;

	[Token(Token = "0x40002BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly float H;

	[Token(Token = "0x40002BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly float S;

	[Token(Token = "0x40002BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly float V;

	[Token(Token = "0x1700006B")]
	public Color32 Color32
	{
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x3A70530", Offset = "0x3A70530", VA = "0x3A70530")]
		get
		{
			return default(Color32);
		}
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x3A6F040", Offset = "0x3A6F040", VA = "0x3A6F040")]
	public GisketchUIColorPickerValue(byte r, byte g, byte b, byte a)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x3A706A0", Offset = "0x3A706A0", VA = "0x3A706A0")]
	private GisketchUIColorPickerValue(byte r, byte g, byte b, byte a, float h, float s, float v)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x3A6B560", Offset = "0x3A6B560", VA = "0x3A6B560")]
	public string ToHex(bool alpha)
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x3A6FEB0", Offset = "0x3A6FEB0", VA = "0x3A6FEB0")]
	public GisketchUIColorPickerValue WithRgb(byte r, byte g, byte b)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x3A70730", Offset = "0x3A70730", VA = "0x3A70730")]
	public GisketchUIColorPickerValue WithAlpha(byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x3A707F0", Offset = "0x3A707F0", VA = "0x3A707F0")]
	public GisketchUIColorPickerValue WithHue(float h)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x3A70A00", Offset = "0x3A70A00", VA = "0x3A70A00")]
	public GisketchUIColorPickerValue WithSaturationValue(float s, float v)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x3A70900", Offset = "0x3A70900", VA = "0x3A70900")]
	public static GisketchUIColorPickerValue FromHsv(float h, float s, float v, byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x3A6A4A0", Offset = "0x3A6A4A0", VA = "0x3A6A4A0")]
	public static string Normalize(string text, bool alpha, [Optional] string fallback)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x3A70120", Offset = "0x3A70120", VA = "0x3A70120")]
	public static string FilterHexInput(string text, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x3A6EDC0", Offset = "0x3A6EDC0", VA = "0x3A6EDC0")]
	public static bool TryParse(string text, bool alpha, out GisketchUIColorPickerValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x3A70540", Offset = "0x3A70540", VA = "0x3A70540")]
	public static bool TryParseByte(string text, out byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x3A70670", Offset = "0x3A70670", VA = "0x3A70670")]
	private static Color ToColor(byte r, byte g, byte b, byte a)
	{
		return default(Color);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x3A70C30", Offset = "0x3A70C30", VA = "0x3A70C30")]
	private static byte ParseByte(string value, int start)
	{
		return default(byte);
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x3A70B00", Offset = "0x3A70B00", VA = "0x3A70B00")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}
}
