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

[Token(Token = "0x2000066")]
public class TMP_ResourceManager
{
	[Token(Token = "0x2000067")]
	private struct FontAssetRef
	{
		[Token(Token = "0x4000256")]
		[FieldOffset(Offset = "0x0")]
		public int nameHashCode;

		[Token(Token = "0x4000257")]
		[FieldOffset(Offset = "0x4")]
		public int familyNameHashCode;

		[Token(Token = "0x4000258")]
		[FieldOffset(Offset = "0x8")]
		public int styleNameHashCode;

		[Token(Token = "0x4000259")]
		[FieldOffset(Offset = "0x10")]
		public long familyNameAndStyleHashCode;

		[Token(Token = "0x400025A")]
		[FieldOffset(Offset = "0x18")]
		public readonly TMP_FontAsset fontAsset;

		[Token(Token = "0x600035C")]
		[Address(RVA = "0x6734B60", Offset = "0x6733B60", VA = "0x6734B60")]
		public FontAssetRef(int nameHashCode, int familyNameHashCode, int styleNameHashCode, TMP_FontAsset fontAsset)
		{
		}
	}

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_Settings s_TextSettings;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, FontAssetRef> s_FontAssetReferences;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<int, TMP_FontAsset> s_FontAssetNameReferenceLookup;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<long, TMP_FontAsset> s_FontAssetFamilyNameAndStyleReferenceLookup;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x20")]
	private static readonly List<int> s_FontAssetRemovalList;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int k_RegularStyleHashCode;

	[Token(Token = "0x170000BB")]
	internal static int registeredFontAssetCount
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x6734F50", Offset = "0x6733F50", VA = "0x6734F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x67341D0", Offset = "0x67331D0", VA = "0x67341D0")]
	internal static TMP_Settings GetTextSettings()
	{
		return null;
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x67342E0", Offset = "0x67332E0", VA = "0x67342E0")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x6734B90", Offset = "0x6733B90", VA = "0x6734B90")]
	public static void RemoveFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000351")]
	private static void AddToLookup<TKey>(Dictionary<TKey, TMP_FontAsset> lookup, TKey key, TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000352")]
	private static bool RemoveFromLookup<TKey>(Dictionary<TKey, TMP_FontAsset> lookup, TKey key, TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x6734740", Offset = "0x6733740", VA = "0x6734740")]
	private static void RemoveDestroyedFontAssetReferences()
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x6734D10", Offset = "0x6733D10", VA = "0x6734D10")]
	private static void ReassignLookupsToRegisteredFontAssets()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x6734FE0", Offset = "0x6733FE0", VA = "0x6734FE0")]
	internal static bool TryGetFontAssetByName(int nameHashcode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x6735050", Offset = "0x6734050", VA = "0x6735050")]
	internal static bool TryGetFontAssetByFamilyName(int familyNameHashCode, int styleNameHashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000357")]
	private static bool TryGetLiveFontAsset<TKey>(Dictionary<TKey, TMP_FontAsset> lookup, TKey key, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x6735110", Offset = "0x6734110", VA = "0x6735110")]
	public static void ClearFontAssetGlyphCache()
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x6735170", Offset = "0x6734170", VA = "0x6735170")]
	internal static void RebuildFontAssetCache()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x6735340", Offset = "0x6734340", VA = "0x6735340")]
	public TMP_ResourceManager()
	{
	}
}
