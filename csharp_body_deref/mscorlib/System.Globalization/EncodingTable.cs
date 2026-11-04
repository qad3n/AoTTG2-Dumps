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

[Token(Token = "0x20005A0")]
internal static class EncodingTable
{
	[Token(Token = "0x40017B5")]
	[FieldOffset(Offset = "0x0")]
	internal static System.Globalization.InternalEncodingDataItem[] encodingDataPtr;

	[Token(Token = "0x40017B6")]
	[FieldOffset(Offset = "0x8")]
	internal static System.Globalization.InternalCodePageDataItem[] codePageDataPtr;

	[Token(Token = "0x40017B7")]
	[FieldOffset(Offset = "0x10")]
	private static int lastEncodingItem;

	[Token(Token = "0x40017B8")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, int> hashByName;

	[Token(Token = "0x40017B9")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<int, System.Globalization.CodePageDataItem> hashByCodePage;

	[Token(Token = "0x6002AE7")]
	[Address(RVA = "0x1A98D90", Offset = "0x1A97390", VA = "0x181A98D90")]
	private static int GetNumEncodingItems()
	{
		return default(int);
	}

	[Token(Token = "0x6002AE8")]
	[Address(RVA = "0x1A98840", Offset = "0x1A96E40", VA = "0x181A98840")]
	private static System.Globalization.InternalEncodingDataItem ENC(string name, ushort cp)
	{
		return default(System.Globalization.InternalEncodingDataItem);
	}

	[Token(Token = "0x6002AE9")]
	[Address(RVA = "0x1A98DF0", Offset = "0x1A973F0", VA = "0x181A98DF0")]
	private static System.Globalization.InternalCodePageDataItem MapCodePageDataItem(ushort cp, ushort fcp, string names, uint flags)
	{
		return default(System.Globalization.InternalCodePageDataItem);
	}

	[Token(Token = "0x6002AEA")]
	[Address(RVA = "0x1A98E30", Offset = "0x1A97430", VA = "0x181A98E30")]
	static EncodingTable()
	{
	}

	[Token(Token = "0x6002AEB")]
	[Address(RVA = "0x1AA35A0", Offset = "0x1AA1BA0", VA = "0x181AA35A0")]
	private static int internalGetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002AEC")]
	[Address(RVA = "0x1A98B40", Offset = "0x1A97140", VA = "0x181A98B40")]
	internal static int GetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002AED")]
	[Address(RVA = "0x1A98880", Offset = "0x1A96E80", VA = "0x181A98880")]
	internal static System.Globalization.CodePageDataItem GetCodePageDataItem(int codepage)
	{
		return null;
	}
}
