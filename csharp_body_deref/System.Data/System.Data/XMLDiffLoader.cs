// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XMLDiffLoader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000094")]
internal sealed class XMLDiffLoader
{
	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _tables;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x18")]
	private DataSet _dataSet;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x20")]
	private DataTable _dataTable;

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x252CF90", Offset = "0x252B590", VA = "0x18252CF90")]
	internal void LoadDiffGram(DataSet ds, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x252CAD0", Offset = "0x252B0D0", VA = "0x18252CAD0")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x252D110", Offset = "0x252B710", VA = "0x18252D110")]
	internal void LoadDiffGram(DataTable dt, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x252D2F0", Offset = "0x252B8F0", VA = "0x18252D2F0")]
	internal void ProcessDiffs(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x252D680", Offset = "0x252BC80", VA = "0x18252D680")]
	internal void ProcessDiffs(ArrayList tableList, XmlReader ssync)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x252DEC0", Offset = "0x252C4C0", VA = "0x18252DEC0")]
	internal void ProcessErrors(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x252D9C0", Offset = "0x252BFC0", VA = "0x18252D9C0")]
	internal void ProcessErrors(ArrayList dt, XmlReader ssync)
	{
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x252CD90", Offset = "0x252B390", VA = "0x18252CD90")]
	private DataTable GetTable(string tableName, string ns)
	{
		return null;
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x252E2B0", Offset = "0x252C8B0", VA = "0x18252E2B0")]
	private int ReadOldRowData(DataSet ds, ref DataTable table, ref int pos, XmlReader row)
	{
		return default(int);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x252F110", Offset = "0x252D710", VA = "0x18252F110")]
	internal void SkipWhitespaces(XmlReader reader)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XMLDiffLoader()
	{
	}
}
