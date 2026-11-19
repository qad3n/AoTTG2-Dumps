// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_DynamicFontAssetUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200002F")]
internal class TMP_DynamicFontAssetUtilities
{
	[Token(Token = "0x2000030")]
	public struct FontReference
	{
		[Token(Token = "0x40000CF")]
		[FieldOffset(Offset = "0x0")]
		public string familyName;

		[Token(Token = "0x40000D0")]
		[FieldOffset(Offset = "0x8")]
		public string styleName;

		[Token(Token = "0x40000D1")]
		[FieldOffset(Offset = "0x10")]
		public int faceIndex;

		[Token(Token = "0x40000D2")]
		[FieldOffset(Offset = "0x18")]
		public string filePath;

		[Token(Token = "0x40000D3")]
		[FieldOffset(Offset = "0x20")]
		public ulong hashCode;

		[Token(Token = "0x6000120")]
		[Address(RVA = "0x66E5C20", Offset = "0x66E4C20", VA = "0x66E5C20")]
		public FontReference(string fontFilePath, string faceNameAndStyle, int index)
		{
		}
	}

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_DynamicFontAssetUtilities s_Instance;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<ulong, FontReference> s_SystemFontLookup;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x18")]
	private string[] s_SystemFontPaths;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	private uint s_RegularStyleNameHashCode;

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x66E5580", Offset = "0x66E4580", VA = "0x66E5580")]
	private void InitializeSystemFontReferenceCache()
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x66E5EE0", Offset = "0x66E4EE0", VA = "0x66E5EE0")]
	public static bool TryGetSystemFontReference(string familyName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x66E6290", Offset = "0x66E5290", VA = "0x66E6290")]
	public static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x66E5F70", Offset = "0x66E4F70", VA = "0x66E5F70")]
	private bool TryGetSystemFontReferenceInternal(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x66E6330", Offset = "0x66E5330", VA = "0x66E6330")]
	public TMP_DynamicFontAssetUtilities()
	{
	}
}
