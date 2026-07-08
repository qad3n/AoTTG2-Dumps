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
	[Address(RVA = "0x4F7F640", Offset = "0x4F7F640", VA = "0x4F7F640")]
	private static int GetNumEncodingItems()
	{
		return default(int);
	}

	[Token(Token = "0x6002DDB")]
	[Address(RVA = "0x4F7F6C0", Offset = "0x4F7F6C0", VA = "0x4F7F6C0")]
	private static System.Globalization.InternalEncodingDataItem ENC(string name, ushort cp)
	{
		return default(System.Globalization.InternalEncodingDataItem);
	}

	[Token(Token = "0x6002DDC")]
	[Address(RVA = "0x4F7F6F0", Offset = "0x4F7F6F0", VA = "0x4F7F6F0")]
	private static System.Globalization.InternalCodePageDataItem MapCodePageDataItem(ushort cp, ushort fcp, string names, uint flags)
	{
		return default(System.Globalization.InternalCodePageDataItem);
	}

	[Token(Token = "0x6002DDD")]
	[Address(RVA = "0x4F7F730", Offset = "0x4F7F730", VA = "0x4F7F730")]
	static EncodingTable()
	{
	}

	[Token(Token = "0x6002DDE")]
	[Address(RVA = "0x4F8C310", Offset = "0x4F8C310", VA = "0x4F8C310")]
	private static int internalGetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002DDF")]
	[Address(RVA = "0x4F8C570", Offset = "0x4F8C570", VA = "0x4F8C570")]
	internal static int GetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002DE0")]
	[Address(RVA = "0x4F8C840", Offset = "0x4F8C840", VA = "0x4F8C840")]
	internal static System.Globalization.CodePageDataItem GetCodePageDataItem(int codepage)
	{
		return null;
	}
}
