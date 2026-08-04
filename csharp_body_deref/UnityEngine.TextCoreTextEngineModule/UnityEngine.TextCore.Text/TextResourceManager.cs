// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextResourceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200003D")]
internal class TextResourceManager
{
	[Token(Token = "0x200003E")]
	private struct FontAssetRef
	{
		[Token(Token = "0x400033B")]
		[FieldOffset(Offset = "0x0")]
		public int nameHashCode;

		[Token(Token = "0x400033C")]
		[FieldOffset(Offset = "0x4")]
		public int familyNameHashCode;

		[Token(Token = "0x400033D")]
		[FieldOffset(Offset = "0x8")]
		public int styleNameHashCode;

		[Token(Token = "0x400033E")]
		[FieldOffset(Offset = "0x10")]
		public long familyNameAndStyleHashCode;

		[Token(Token = "0x400033F")]
		[FieldOffset(Offset = "0x18")]
		public readonly FontAsset fontAsset;

		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x4EE8B00", Offset = "0x4EE8B00", VA = "0x4EE8B00")]
		public FontAssetRef(int nameHashCode, int familyNameHashCode, int styleNameHashCode, FontAsset fontAsset)
		{
		}
	}

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, FontAssetRef> s_FontAssetReferences;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, FontAsset> s_FontAssetNameReferenceLookup;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<long, FontAsset> s_FontAssetFamilyNameAndStyleReferenceLookup;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<int> s_FontAssetRemovalList;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int k_RegularStyleHashCode;

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4EE8530", Offset = "0x4EE8530", VA = "0x4EE8530")]
	internal static void AddFontAsset(FontAsset fontAsset)
	{
	}
}
