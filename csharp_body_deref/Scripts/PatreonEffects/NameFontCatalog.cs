using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using TMPro;

namespace PatreonEffects;

[Token(Token = "0x20000F6")]
public static class NameFontCatalog
{
	[Token(Token = "0x40005DE")]
	public const string Normal = "Normal";

	[Token(Token = "0x40005DF")]
	public const string Aottg2 = "Aottg2";

	[Token(Token = "0x40005E0")]
	public const string Serif = "Serif";

	[Token(Token = "0x40005E1")]
	public const string EightBit = "EightBit";

	[Token(Token = "0x40005E2")]
	public const string Comics = "Comics";

	[Token(Token = "0x40005E3")]
	public const string Jacquard = "Jacquard";

	[Token(Token = "0x40005E4")]
	public const string Pixelify = "Pixelify";

	[Token(Token = "0x40005E5")]
	public const string Oxanium = "Oxanium";

	[Token(Token = "0x40005E6")]
	private const string DefaultPath = "UI/Fonts/Vegur-Regular-SDF";

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, TMP_FontAsset> Cache;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] Ids;

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x3F39D00", Offset = "0x3F39D00", VA = "0x3F39D00")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x3F39E80", Offset = "0x3F39E80", VA = "0x3F39E80")]
	public static string Normalize(string id)
	{
		return null;
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x3F39FC0", Offset = "0x3F39FC0", VA = "0x3F39FC0")]
	public static TMP_FontAsset Load(string id)
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x3F3A3A0", Offset = "0x3F3A3A0", VA = "0x3F3A3A0")]
	public static void Apply(TMP_Text text, string id)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x3F3A470", Offset = "0x3F3A470", VA = "0x3F3A470")]
	public static void Apply(TMP_InputField input, string id)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x3F3A570", Offset = "0x3F3A570", VA = "0x3F3A570")]
	public static TMP_FontAsset FontForPlayer(Player player, bool guild)
	{
		return null;
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x3F3A670", Offset = "0x3F3A670", VA = "0x3F3A670")]
	private static ProfileSettings Profile(Player player)
	{
		return null;
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x3F3A1C0", Offset = "0x3F3A1C0", VA = "0x3F3A1C0")]
	private static string Path(string id)
	{
		return null;
	}
}
