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

[Token(Token = "0x20000A1")]
public readonly struct GisketchUIColorPickerValue
{
	[Token(Token = "0x400036F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly byte R;

	[Token(Token = "0x4000370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public readonly byte G;

	[Token(Token = "0x4000371")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public readonly byte B;

	[Token(Token = "0x4000372")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public readonly byte A;

	[Token(Token = "0x4000373")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly float H;

	[Token(Token = "0x4000374")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly float S;

	[Token(Token = "0x4000375")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly float V;

	[Token(Token = "0x17000093")]
	public Color32 Color32
	{
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x5278520", Offset = "0x5277520", VA = "0x5278520")]
		get
		{
			return default(Color32);
		}
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x5277040", Offset = "0x5276040", VA = "0x5277040")]
	public GisketchUIColorPickerValue(byte r, byte g, byte b, byte a)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x5278680", Offset = "0x5277680", VA = "0x5278680")]
	private GisketchUIColorPickerValue(byte r, byte g, byte b, byte a, float h, float s, float v)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x5273530", Offset = "0x5272530", VA = "0x5273530")]
	public string ToHex(bool alpha)
	{
		return null;
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x5277EB0", Offset = "0x5276EB0", VA = "0x5277EB0")]
	public GisketchUIColorPickerValue WithRgb(byte r, byte g, byte b)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x5278700", Offset = "0x5277700", VA = "0x5278700")]
	public GisketchUIColorPickerValue WithAlpha(byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x52787A0", Offset = "0x52777A0", VA = "0x52787A0")]
	public GisketchUIColorPickerValue WithHue(float h)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x5278970", Offset = "0x5277970", VA = "0x5278970")]
	public GisketchUIColorPickerValue WithSaturationValue(float s, float v)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x5278880", Offset = "0x5277880", VA = "0x5278880")]
	public static GisketchUIColorPickerValue FromHsv(float h, float s, float v, byte a)
	{
		return default(GisketchUIColorPickerValue);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x5272470", Offset = "0x5271470", VA = "0x5272470")]
	public static string Normalize(string text, bool alpha, [Optional] string fallback)
	{
		return null;
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x5278120", Offset = "0x5277120", VA = "0x5278120")]
	public static string FilterHexInput(string text, bool alpha)
	{
		return null;
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x5276DA0", Offset = "0x5275DA0", VA = "0x5276DA0")]
	public static bool TryParse(string text, bool alpha, out GisketchUIColorPickerValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x5278530", Offset = "0x5277530", VA = "0x5278530")]
	public static bool TryParseByte(string text, out byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x5278650", Offset = "0x5277650", VA = "0x5278650")]
	private static Color ToColor(byte r, byte g, byte b, byte a)
	{
		return default(Color);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x5278B90", Offset = "0x5277B90", VA = "0x5278B90")]
	private static byte ParseByte(string value, int start)
	{
		return default(byte);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x5278A60", Offset = "0x5277A60", VA = "0x5278A60")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}
}
