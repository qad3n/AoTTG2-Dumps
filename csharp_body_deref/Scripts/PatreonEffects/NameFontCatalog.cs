// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameFontCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameFontCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using TMPro;

namespace PatreonEffects;

[Token(Token = "0x20000F7")]
public static class NameFontCatalog
{
	[Token(Token = "0x40005E6")]
	public const string Normal = "Normal";

	[Token(Token = "0x40005E7")]
	public const string Aottg2 = "Aottg2";

	[Token(Token = "0x40005E8")]
	public const string Serif = "Serif";

	[Token(Token = "0x40005E9")]
	public const string EightBit = "EightBit";

	[Token(Token = "0x40005EA")]
	public const string Comics = "Comics";

	[Token(Token = "0x40005EB")]
	public const string Jacquard = "Jacquard";

	[Token(Token = "0x40005EC")]
	public const string Pixelify = "Pixelify";

	[Token(Token = "0x40005ED")]
	public const string Oxanium = "Oxanium";

	[Token(Token = "0x40005EE")]
	private const string DefaultPath = "UI/Fonts/Vegur-Regular-SDF";

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, TMP_FontAsset> Cache;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] Ids;

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x422F2B0", Offset = "0x422F2B0", VA = "0x422F2B0")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x422F430", Offset = "0x422F430", VA = "0x422F430")]
	public static string Normalize(string id)
	{
		return null;
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4227FB0", Offset = "0x4227FB0", VA = "0x4227FB0")]
	public static TMP_FontAsset Load(string id)
	{
		return null;
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x422F750", Offset = "0x422F750", VA = "0x422F750")]
	public static void Apply(TMP_Text text, string id)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x422F820", Offset = "0x422F820", VA = "0x422F820")]
	public static void Apply(TMP_InputField input, string id)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4227EB0", Offset = "0x4227EB0", VA = "0x4227EB0")]
	public static TMP_FontAsset FontForPlayer(Player player, bool guild)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x422F920", Offset = "0x422F920", VA = "0x422F920")]
	private static ProfileSettings Profile(Player player)
	{
		return null;
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x422F570", Offset = "0x422F570", VA = "0x422F570")]
	private static string Path(string id)
	{
		return null;
	}
}
