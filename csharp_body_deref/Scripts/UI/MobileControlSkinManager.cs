// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileControlSkinManager
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileControlSkinManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000751")]
internal static class MobileControlSkinManager
{
	[Token(Token = "0x40024F2")]
	private const string BuiltinSkinListAsset = "MobileControlSkinList";

	[Token(Token = "0x40024F3")]
	private const string DefaultBuiltinResourceRoot = "UI/Mobile/Controls";

	[Token(Token = "0x40024F4")]
	private const string CustomSourceName = "Custom";

	[Token(Token = "0x40024F5")]
	private const string CustomPrefix = "Custom/";

	[Token(Token = "0x40024F6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ImageExtensions;

	[Token(Token = "0x40024F7")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, Sprite> _sprites;

	[Token(Token = "0x40024F8")]
	[FieldOffset(Offset = "0x10")]
	private static JSONNode _builtinSkinList;

	[Token(Token = "0x60046DB")]
	[Address(RVA = "0x5B73DE0", Offset = "0x5B72DE0", VA = "0x5B73DE0")]
	public static string[] GetSkinOptions()
	{
		return null;
	}

	[Token(Token = "0x60046DC")]
	[Address(RVA = "0x5B745A0", Offset = "0x5B735A0", VA = "0x5B745A0")]
	public static string[] GetSkinSourceOptions()
	{
		return null;
	}

	[Token(Token = "0x60046DD")]
	[Address(RVA = "0x5B74B90", Offset = "0x5B73B90", VA = "0x5B74B90")]
	public static string NormalizeSkinReference(string path)
	{
		return null;
	}

	[Token(Token = "0x60046DE")]
	[Address(RVA = "0x5B74D90", Offset = "0x5B73D90", VA = "0x5B74D90")]
	public static bool IsCustomSkinReference(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60046DF")]
	[Address(RVA = "0x5B74E60", Offset = "0x5B73E60", VA = "0x5B74E60")]
	public static bool IsSkinReferenceFromSource(string path, string source)
	{
		return default(bool);
	}

	[Token(Token = "0x60046E0")]
	[Address(RVA = "0x5B74FC0", Offset = "0x5B73FC0", VA = "0x5B74FC0")]
	public static string GetSkinSourceName(string path)
	{
		return null;
	}

	[Token(Token = "0x60046E1")]
	[Address(RVA = "0x5B75190", Offset = "0x5B74190", VA = "0x5B75190")]
	public static string GetSkinDisplayName(string path)
	{
		return null;
	}

	[Token(Token = "0x60046E2")]
	[Address(RVA = "0x5B73F60", Offset = "0x5B72F60", VA = "0x5B73F60")]
	private static IEnumerable<string> GetBuiltinSkinOptions()
	{
		return null;
	}

	[Token(Token = "0x60046E3")]
	[Address(RVA = "0x5B75530", Offset = "0x5B74530", VA = "0x5B75530")]
	private static void AddBuiltinSourceOptions(JSONNode source, List<string> options)
	{
	}

	[Token(Token = "0x60046E4")]
	[Address(RVA = "0x5B75980", Offset = "0x5B74980", VA = "0x5B75980")]
	private static void AddBuiltinSkinSetOptions(JSONNode source, string root, string prefix, List<string> options)
	{
	}

	[Token(Token = "0x60046E5")]
	[Address(RVA = "0x5B75F00", Offset = "0x5B74F00", VA = "0x5B75F00")]
	private static void AddBuiltinGroupOptions(JSONNode source, string root, string prefix, List<string> options)
	{
	}

	[Token(Token = "0x60046E6")]
	[Address(RVA = "0x5B764F0", Offset = "0x5B754F0", VA = "0x5B764F0")]
	private static void AddBuiltinTextureOptions(string resourcePath, string optionRoot, List<string> options)
	{
	}

	[Token(Token = "0x60046E7")]
	[Address(RVA = "0x5B768C0", Offset = "0x5B758C0", VA = "0x5B768C0")]
	private static string GetBuiltinResourcePath(string builtinPath)
	{
		return null;
	}

	[Token(Token = "0x60046E8")]
	[Address(RVA = "0x5B76A80", Offset = "0x5B75A80", VA = "0x5B76A80")]
	private static string GetBuiltinSourceResourcePath(JSONNode source, string builtinPath)
	{
		return null;
	}

	[Token(Token = "0x60046E9")]
	[Address(RVA = "0x5B76CE0", Offset = "0x5B75CE0", VA = "0x5B76CE0")]
	private static bool SourceContainsBuiltinPath(JSONNode source, string sourcePath)
	{
		return default(bool);
	}

	[Token(Token = "0x60046EA")]
	[Address(RVA = "0x5B772D0", Offset = "0x5B762D0", VA = "0x5B772D0")]
	private static bool IsSameOrChildPath(string path, string root)
	{
		return default(bool);
	}

	[Token(Token = "0x60046EB")]
	[Address(RVA = "0x5B75810", Offset = "0x5B74810", VA = "0x5B75810")]
	private static string GetBuiltinSourcePrefix(JSONNode source)
	{
		return null;
	}

	[Token(Token = "0x60046EC")]
	[Address(RVA = "0x5B74730", Offset = "0x5B73730", VA = "0x5B74730")]
	private static IEnumerable<string> GetBuiltinSourcePrefixes()
	{
		return null;
	}

	[Token(Token = "0x60046ED")]
	[Address(RVA = "0x5B75690", Offset = "0x5B74690", VA = "0x5B75690")]
	private static string GetBuiltinResourceRoot(JSONNode source)
	{
		return null;
	}

	[Token(Token = "0x60046EE")]
	[Address(RVA = "0x5B74310", Offset = "0x5B73310", VA = "0x5B74310")]
	private static IEnumerable<string> GetCustomSkinOptions()
	{
		return null;
	}

	[Token(Token = "0x60046EF")]
	[Address(RVA = "0x5B68660", Offset = "0x5B67660", VA = "0x5B68660")]
	public static void ApplySkin(Image image, MobileInputSkin skin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x60046F0")]
	[Address(RVA = "0x5B6D540", Offset = "0x5B6C540", VA = "0x5B6D540")]
	public static Sprite GetSprite(string relativePath)
	{
		return null;
	}

	[Token(Token = "0x60046F1")]
	[Address(RVA = "0x5B77470", Offset = "0x5B76470", VA = "0x5B77470")]
	private static Sprite LoadSprite(string relativePath)
	{
		return null;
	}

	[Token(Token = "0x60046F2")]
	[Address(RVA = "0x5B77750", Offset = "0x5B76750", VA = "0x5B77750")]
	private static Sprite GetBuiltinSprite(string normalized)
	{
		return null;
	}

	[Token(Token = "0x60046F3")]
	[Address(RVA = "0x5B778A0", Offset = "0x5B768A0", VA = "0x5B778A0")]
	private static bool IsImagePath(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60046F4")]
	[Address(RVA = "0x5B779E0", Offset = "0x5B769E0", VA = "0x5B779E0")]
	private static string ToRelativePath(string root, string path)
	{
		return null;
	}

	[Token(Token = "0x60046F5")]
	[Address(RVA = "0x5B74CC0", Offset = "0x5B73CC0", VA = "0x5B74CC0")]
	private static string NormalizeRelativePath(string path)
	{
		return null;
	}

	[Token(Token = "0x60046F6")]
	[Address(RVA = "0x5B75300", Offset = "0x5B74300", VA = "0x5B75300")]
	private static JSONNode GetBuiltinSkinList()
	{
		return null;
	}

	[Token(Token = "0x60046F7")]
	[Address(RVA = "0x5B76220", Offset = "0x5B75220", VA = "0x5B76220")]
	private static string CombineResourcePath(params string[] parts)
	{
		return null;
	}

	[Token(Token = "0x60046F8")]
	[Address(RVA = "0x5B74D10", Offset = "0x5B73D10", VA = "0x5B74D10")]
	private static bool IsResourceReference(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60046F9")]
	[Address(RVA = "0x5B752B0", Offset = "0x5B742B0", VA = "0x5B752B0")]
	private static string StripSourcePrefix(string path, string prefix)
	{
		return null;
	}
}
