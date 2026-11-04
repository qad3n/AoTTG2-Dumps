// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_ResourceManager
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2D337C0", Offset = "0x2D31DC0", VA = "0x182D337C0")]
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
		[Address(RVA = "0x2D3E2D0", Offset = "0x2D3C8D0", VA = "0x182D3E2D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x2D3D510", Offset = "0x2D3BB10", VA = "0x182D3D510")]
	internal static TMP_Settings GetTextSettings()
	{
		return null;
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2D3D050", Offset = "0x2D3B650", VA = "0x182D3D050")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x2D3DDE0", Offset = "0x2D3C3E0", VA = "0x182D3DDE0")]
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
	[Address(RVA = "0x2D3DA20", Offset = "0x2D3C020", VA = "0x182D3DA20")]
	private static void RemoveDestroyedFontAssetReferences()
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2D3D630", Offset = "0x2D3BC30", VA = "0x182D3D630")]
	private static void ReassignLookupsToRegisteredFontAssets()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x2D3E040", Offset = "0x2D3C640", VA = "0x182D3E040")]
	internal static bool TryGetFontAssetByName(int nameHashcode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x2D3DF70", Offset = "0x2D3C570", VA = "0x182D3DF70")]
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
	[Address(RVA = "0x2D3D4D0", Offset = "0x2D3BAD0", VA = "0x182D3D4D0")]
	public static void ClearFontAssetGlyphCache()
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x2D3D860", Offset = "0x2D3BE60", VA = "0x182D3D860")]
	internal static void RebuildFontAssetCache()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TMP_ResourceManager()
	{
	}
}
