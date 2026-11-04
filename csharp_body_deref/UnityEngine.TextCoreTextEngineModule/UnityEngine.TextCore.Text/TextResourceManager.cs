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

[Token(Token = "0x200006D")]
internal class TextResourceManager
{
	[Token(Token = "0x200006E")]
	private struct FontAssetRef
	{
		[Token(Token = "0x4000490")]
		[FieldOffset(Offset = "0x0")]
		public int nameHashCode;

		[Token(Token = "0x4000491")]
		[FieldOffset(Offset = "0x4")]
		public int familyNameHashCode;

		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0x8")]
		public int styleNameHashCode;

		[Token(Token = "0x4000493")]
		[FieldOffset(Offset = "0x10")]
		public long familyNameAndStyleHashCode;

		[Token(Token = "0x4000494")]
		[FieldOffset(Offset = "0x18")]
		public readonly FontAsset fontAsset;

		[Token(Token = "0x600034D")]
		[Address(RVA = "0x2D337C0", Offset = "0x2D31DC0", VA = "0x182D337C0")]
		public FontAssetRef(int nameHashCode, int familyNameHashCode, int styleNameHashCode, FontAsset fontAsset)
		{
		}
	}

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, FontAssetRef> s_FontAssetReferences;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, FontAsset> s_FontAssetNameReferenceLookup;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<long, FontAsset> s_FontAssetFamilyNameAndStyleReferenceLookup;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<int> s_FontAssetRemovalList;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int k_RegularStyleHashCode;

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x305A710", Offset = "0x3058D10", VA = "0x18305A710")]
	internal static void AddFontAsset(FontAsset fontAsset)
	{
	}
}
