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
	[Address(RVA = "0x428CC70", Offset = "0x428CC70", VA = "0x428CC70")]
	internal void LoadDiffGram(DataSet ds, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x428D750", Offset = "0x428D750", VA = "0x428D750")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x428DB90", Offset = "0x428DB90", VA = "0x428DB90")]
	internal void LoadDiffGram(DataTable dt, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x428CE30", Offset = "0x428CE30", VA = "0x428CE30")]
	internal void ProcessDiffs(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x428DDB0", Offset = "0x428DDB0", VA = "0x428DDB0")]
	internal void ProcessDiffs(ArrayList tableList, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x428D220", Offset = "0x428D220", VA = "0x428D220")]
	internal void ProcessErrors(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x428E170", Offset = "0x428E170", VA = "0x428E170")]
	internal void ProcessErrors(ArrayList dt, XmlReader ssync)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x428F920", Offset = "0x428F920", VA = "0x428F920")]
	private DataTable GetTable(string tableName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x428E790", Offset = "0x428E790", VA = "0x428E790")]
	private int ReadOldRowData(DataSet ds, ref DataTable table, ref int pos, XmlReader row)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x428E730", Offset = "0x428E730", VA = "0x428E730")]
	internal void SkipWhitespaces(XmlReader reader)
	{
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x428FAF0", Offset = "0x428FAF0", VA = "0x428FAF0")]
	public XMLDiffLoader()
	{
	}
}
