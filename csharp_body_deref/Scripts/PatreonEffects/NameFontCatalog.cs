// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameFontCatalog
// Update status: CHANGED in this game update
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

[Token(Token = "0x200008C")]
public static class NameFontCatalog
{
	[Token(Token = "0x40002EB")]
	public const string Normal = "Normal";

	[Token(Token = "0x40002EC")]
	public const string Aottg2 = "Aottg2";

	[Token(Token = "0x40002ED")]
	public const string Serif = "Serif";

	[Token(Token = "0x40002EE")]
	public const string EightBit = "EightBit";

	[Token(Token = "0x40002EF")]
	public const string Comics = "Comics";

	[Token(Token = "0x40002F0")]
	public const string Jacquard = "Jacquard";

	[Token(Token = "0x40002F1")]
	public const string Pixelify = "Pixelify";

	[Token(Token = "0x40002F2")]
	public const string Oxanium = "Oxanium";

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, TMP_FontAsset> Cache;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] Ids;

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x58C7C60", Offset = "0x58C6C60", VA = "0x58C7C60")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x58C7DD0", Offset = "0x58C6DD0", VA = "0x58C7DD0")]
	public static string Normalize(string id)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x58C13E0", Offset = "0x58C03E0", VA = "0x58C13E0")]
	public static TMP_FontAsset Load(string id)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x58C80E0", Offset = "0x58C70E0", VA = "0x58C80E0")]
	public static void Apply(TMP_Text text, string id)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x58C81E0", Offset = "0x58C71E0", VA = "0x58C81E0")]
	public static void Apply(TMP_InputField input, string id)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x58C12E0", Offset = "0x58C02E0", VA = "0x58C12E0")]
	public static TMP_FontAsset FontForPlayer(Player player, bool guild)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x58C82E0", Offset = "0x58C72E0", VA = "0x58C82E0")]
	private static ProfileSettings Profile(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x58C7F10", Offset = "0x58C6F10", VA = "0x58C7F10")]
	private static string Path(string id)
	{
		return null;
	}
}
