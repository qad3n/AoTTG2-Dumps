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

[Token(Token = "0x200008A")]
internal sealed class XMLDiffLoader
{
	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _tables;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x18")]
	private DataSet _dataSet;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x20")]
	private DataTable _dataTable;

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x45CA3D0", Offset = "0x45CA3D0", VA = "0x45CA3D0")]
	internal void LoadDiffGram(DataSet ds, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x45CAEB0", Offset = "0x45CAEB0", VA = "0x45CAEB0")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x45CB2F0", Offset = "0x45CB2F0", VA = "0x45CB2F0")]
	internal void LoadDiffGram(DataTable dt, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x45CA590", Offset = "0x45CA590", VA = "0x45CA590")]
	internal void ProcessDiffs(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x45CB510", Offset = "0x45CB510", VA = "0x45CB510")]
	internal void ProcessDiffs(ArrayList tableList, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x45CA980", Offset = "0x45CA980", VA = "0x45CA980")]
	internal void ProcessErrors(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x45CB8D0", Offset = "0x45CB8D0", VA = "0x45CB8D0")]
	internal void ProcessErrors(ArrayList dt, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x45CD080", Offset = "0x45CD080", VA = "0x45CD080")]
	private DataTable GetTable(string tableName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x45CBEF0", Offset = "0x45CBEF0", VA = "0x45CBEF0")]
	private int ReadOldRowData(DataSet ds, ref DataTable table, ref int pos, XmlReader row)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x45CBE90", Offset = "0x45CBE90", VA = "0x45CBE90")]
	internal void SkipWhitespaces(XmlReader reader)
	{
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x45CD250", Offset = "0x45CD250", VA = "0x45CD250")]
	public XMLDiffLoader()
	{
	}
}
