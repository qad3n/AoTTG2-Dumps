using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000021")]
public static class GisketchTypography
{
	[Token(Token = "0x40000B2")]
	private const string FontRoot = "UI/Fonts/";

	[Token(Token = "0x40000B3")]
	private const string ProbeCharacters = "Aa0";

	[Token(Token = "0x40000B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string[] BodyFallbackAssetNames;

	[Token(Token = "0x40000B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly string[] DisplayFallbackAssetNames;

	[Token(Token = "0x40000B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly string[] GlobalFallbackAssetNames;

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x39D90F0", Offset = "0x39D90F0", VA = "0x39D90F0")]
	public static TMP_FontAsset Resolve(string family, int weight, [Optional] string requiredText)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x39D92C0", Offset = "0x39D92C0", VA = "0x39D92C0")]
	public static string Key(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x39D9BA0", Offset = "0x39D9BA0", VA = "0x39D9BA0")]
	public static string[] FallbackAssetNamesFor(string family, int weight)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x39D94C0", Offset = "0x39D94C0", VA = "0x39D94C0")]
	public static string[] FallbackAssetNamesForKey(string key)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x39D9C00", Offset = "0x39D9C00", VA = "0x39D9C00")]
	private static bool IsDisplayKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x39D95C0", Offset = "0x39D95C0", VA = "0x39D95C0")]
	private static void ValidateFallbacks(TMP_FontAsset font, string[] assetNames)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x39D9C70", Offset = "0x39D9C70", VA = "0x39D9C70")]
	private static bool FallbacksMatch(List<TMP_FontAsset> current, List<TMP_FontAsset> expected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x39D99F0", Offset = "0x39D99F0", VA = "0x39D99F0")]
	private static bool CanRender(TMP_FontAsset font, string requiredText, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x39D9D50", Offset = "0x39D9D50", VA = "0x39D9D50")]
	private static string RequiredCharacters(string requiredText)
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x39D94B0", Offset = "0x39D94B0", VA = "0x39D94B0")]
	private static void ReportError(string message)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x39D9C60", Offset = "0x39D9C60", VA = "0x39D9C60")]
	private static void ReportWarning(string message)
	{
	}
}
