// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.EncodingTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005CE")]
internal static class EncodingTable
{
	[Token(Token = "0x4001999")]
	[FieldOffset(Offset = "0x0")]
	internal static System.Globalization.InternalEncodingDataItem[] encodingDataPtr;

	[Token(Token = "0x400199A")]
	[FieldOffset(Offset = "0x8")]
	internal static System.Globalization.InternalCodePageDataItem[] codePageDataPtr;

	[Token(Token = "0x400199B")]
	[FieldOffset(Offset = "0x10")]
	private static int lastEncodingItem;

	[Token(Token = "0x400199C")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, int> hashByName;

	[Token(Token = "0x400199D")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<int, System.Globalization.CodePageDataItem> hashByCodePage;

	[Token(Token = "0x6002DDA")]
	[Address(RVA = "0x3C65160", Offset = "0x3C65160", VA = "0x3C65160")]
	private static int GetNumEncodingItems()
	{
		return default(int);
	}

	[Token(Token = "0x6002DDB")]
	[Address(RVA = "0x3C651E0", Offset = "0x3C651E0", VA = "0x3C651E0")]
	private static System.Globalization.InternalEncodingDataItem ENC(string name, ushort cp)
	{
		return default(System.Globalization.InternalEncodingDataItem);
	}

	[Token(Token = "0x6002DDC")]
	[Address(RVA = "0x3C65210", Offset = "0x3C65210", VA = "0x3C65210")]
	private static System.Globalization.InternalCodePageDataItem MapCodePageDataItem(ushort cp, ushort fcp, string names, uint flags)
	{
		return default(System.Globalization.InternalCodePageDataItem);
	}

	[Token(Token = "0x6002DDD")]
	[Address(RVA = "0x3C65250", Offset = "0x3C65250", VA = "0x3C65250")]
	static EncodingTable()
	{
	}

	[Token(Token = "0x6002DDE")]
	[Address(RVA = "0x3C71E30", Offset = "0x3C71E30", VA = "0x3C71E30")]
	private static int internalGetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002DDF")]
	[Address(RVA = "0x3C72090", Offset = "0x3C72090", VA = "0x3C72090")]
	internal static int GetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002DE0")]
	[Address(RVA = "0x3C72360", Offset = "0x3C72360", VA = "0x3C72360")]
	internal static System.Globalization.CodePageDataItem GetCodePageDataItem(int codepage)
	{
		return null;
	}
}
