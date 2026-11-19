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

[Token(Token = "0x200057B")]
internal static class EncodingTable
{
	[Token(Token = "0x400171C")]
	[FieldOffset(Offset = "0x0")]
	internal static System.Globalization.InternalEncodingDataItem[] encodingDataPtr;

	[Token(Token = "0x400171D")]
	[FieldOffset(Offset = "0x8")]
	internal static System.Globalization.InternalCodePageDataItem[] codePageDataPtr;

	[Token(Token = "0x400171E")]
	[FieldOffset(Offset = "0x10")]
	private static int lastEncodingItem;

	[Token(Token = "0x400171F")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, int> hashByName;

	[Token(Token = "0x4001720")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<int, System.Globalization.CodePageDataItem> hashByCodePage;

	[Token(Token = "0x6002AC6")]
	[Address(RVA = "0x5439CD0", Offset = "0x5438CD0", VA = "0x5439CD0")]
	private static int GetNumEncodingItems()
	{
		return default(int);
	}

	[Token(Token = "0x6002AC7")]
	[Address(RVA = "0x5439D50", Offset = "0x5438D50", VA = "0x5439D50")]
	private static System.Globalization.InternalEncodingDataItem ENC(string name, ushort cp)
	{
		return default(System.Globalization.InternalEncodingDataItem);
	}

	[Token(Token = "0x6002AC8")]
	[Address(RVA = "0x5439D80", Offset = "0x5438D80", VA = "0x5439D80")]
	private static System.Globalization.InternalCodePageDataItem MapCodePageDataItem(ushort cp, ushort fcp, string names, uint flags)
	{
		return default(System.Globalization.InternalCodePageDataItem);
	}

	[Token(Token = "0x6002AC9")]
	[Address(RVA = "0x5439DC0", Offset = "0x5438DC0", VA = "0x5439DC0")]
	static EncodingTable()
	{
	}

	[Token(Token = "0x6002ACA")]
	[Address(RVA = "0x5444D30", Offset = "0x5443D30", VA = "0x5444D30")]
	private static int internalGetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002ACB")]
	[Address(RVA = "0x5444F80", Offset = "0x5443F80", VA = "0x5444F80")]
	internal static int GetCodePageFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002ACC")]
	[Address(RVA = "0x5445220", Offset = "0x5444220", VA = "0x5445220")]
	internal static System.Globalization.CodePageDataItem GetCodePageDataItem(int codepage)
	{
		return null;
	}
}
