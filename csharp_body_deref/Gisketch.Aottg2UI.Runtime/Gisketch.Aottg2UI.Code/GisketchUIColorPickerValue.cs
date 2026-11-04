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

[Token(Token = "0x200009B")]
public readonly struct GisketchUIColorPickerValue
{
	[Token(Token = "0x4000348")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly byte R;

	[Token(Token = "0x4000349")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public readonly byte G;

	[Token(Token = "0x400034A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public readonly byte B;

	[Token(Token = "0x400034B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public readonly byte A;

	[Token(Token = "0x400034C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly float H;

	[Token(Token = "0x400034D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly float S;

	[Token(Token = "0x400034E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly float V;

	[Token(Token = "0x17000093")]
	public Color32 Color32
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(Color32);
		}
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x18F0D90", Offset = "0x18EF390", VA = "0x1818F0D90")]
	public GisketchUIColorPickerValue(byte r, byte g, byte b, byte a)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x18F0E30", Offset = "0x18EF430", VA = "0x1818F0E30")]
	private GisketchUIColorPickerValue(byte r, byte g, byte b, byte a, float h, float s, float v)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x18F0820", Offset = "0x18EEE20", VA = "0x1818F0820")]
	public string ToHex(bool alpha)
	{
		return null;
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x18F0D00", Offset = "0x18EF300", VA = "0x1818F0D00")]
	public GisketchUIColorPickerValue WithRgb(byte r, byte g, byte b)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x18F0C60", Offset = "0x18EF260", VA = "0x1818F0C60")]
	public GisketchUIColorPickerValue WithAlpha(byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x18F0CC0", Offset = "0x18EF2C0", VA = "0x1818F0CC0")]
	public GisketchUIColorPickerValue WithHue(float h)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x18F0D50", Offset = "0x18EF350", VA = "0x1818F0D50")]
	public GisketchUIColorPickerValue WithSaturationValue(float s, float v)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x18F0470", Offset = "0x18EEA70", VA = "0x1818F0470")]
	public static GisketchUIColorPickerValue FromHsv(float h, float s, float v, byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x18F0640", Offset = "0x18EEC40", VA = "0x1818F0640")]
	public static string Normalize(string text, bool alpha, [Optional] string fallback)
	{
		return null;
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x18F0320", Offset = "0x18EE920", VA = "0x1818F0320")]
	public static string FilterHexInput(string text, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x18F09A0", Offset = "0x18EEFA0", VA = "0x1818F09A0")]
	public static bool TryParse(string text, bool alpha, out GisketchUIColorPickerValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x18F08E0", Offset = "0x18EEEE0", VA = "0x1818F08E0")]
	public static bool TryParseByte(string text, out byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x18F07C0", Offset = "0x18EEDC0", VA = "0x1818F07C0")]
	private static Color ToColor(byte r, byte g, byte b, byte a)
	{
		return default(Color);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x18F0700", Offset = "0x18EED00", VA = "0x1818F0700")]
	private static byte ParseByte(string value, int start)
	{
		return default(byte);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x18F0790", Offset = "0x18EED90", VA = "0x1818F0790")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}
}
