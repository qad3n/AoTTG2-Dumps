// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_ResourceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000072")]
public class TMP_ResourceManager
{
	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_ResourceManager s_instance;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x8")]
	private static TMP_Settings s_TextSettings;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<TMP_FontAsset> s_FontAssetReferences;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<int, TMP_FontAsset> s_FontAssetReferenceLookup;

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4C8A5F0", Offset = "0x4C8A5F0", VA = "0x4C8A5F0")]
	static TMP_ResourceManager()
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4C8A710", Offset = "0x4C8A710", VA = "0x4C8A710")]
	internal static TMP_Settings GetTextSettings()
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4C8A810", Offset = "0x4C8A810", VA = "0x4C8A810")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4C8A960", Offset = "0x4C8A960", VA = "0x4C8A960")]
	public static bool TryGetFontAsset(int hashcode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4C8A9F0", Offset = "0x4C8A9F0", VA = "0x4C8A9F0")]
	internal static void RebuildFontAssetCache(int instanceID)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4C8A700", Offset = "0x4C8A700", VA = "0x4C8A700")]
	public TMP_ResourceManager()
	{
	}
}
