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

[Token(Token = "0x2000118")]
public static class NameFontCatalog
{
	[Token(Token = "0x4000685")]
	public const string Normal = "Normal";

	[Token(Token = "0x4000686")]
	public const string Aottg2 = "Aottg2";

	[Token(Token = "0x4000687")]
	public const string Serif = "Serif";

	[Token(Token = "0x4000688")]
	public const string EightBit = "EightBit";

	[Token(Token = "0x4000689")]
	public const string Comics = "Comics";

	[Token(Token = "0x400068A")]
	public const string Jacquard = "Jacquard";

	[Token(Token = "0x400068B")]
	public const string Pixelify = "Pixelify";

	[Token(Token = "0x400068C")]
	public const string Oxanium = "Oxanium";

	[Token(Token = "0x400068D")]
	private const string DefaultPath = "UI/Fonts/Vegur-Regular-SDF";

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, TMP_FontAsset> Cache;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] Ids;

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x20CC180", Offset = "0x20CA780", VA = "0x1820CC180")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x20CC6B0", Offset = "0x20CACB0", VA = "0x1820CC6B0")]
	public static string Normalize(string id)
	{
		return null;
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x20CC300", Offset = "0x20CA900", VA = "0x1820CC300")]
	public static TMP_FontAsset Load(string id)
	{
		return null;
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x20CBDB0", Offset = "0x20CA3B0", VA = "0x1820CBDB0")]
	public static void Apply(TMP_Text text, string id)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x20CBE80", Offset = "0x20CA480", VA = "0x1820CBE80")]
	public static void Apply(TMP_InputField input, string id)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x20CBFA0", Offset = "0x20CA5A0", VA = "0x1820CBFA0")]
	public static TMP_FontAsset FontForPlayer(Player player, bool guild)
	{
		return null;
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x20CC9C0", Offset = "0x20CAFC0", VA = "0x1820CC9C0")]
	private static ProfileSettings Profile(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x20CC7E0", Offset = "0x20CADE0", VA = "0x1820CC7E0")]
	private static string Path(string id)
	{
		return null;
	}
}
