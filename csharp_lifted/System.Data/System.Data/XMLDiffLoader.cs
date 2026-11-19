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
	[Address(RVA = "0x5ED26C0", Offset = "0x5ED16C0", VA = "0x5ED26C0")]
	internal void LoadDiffGram(DataSet ds, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x5ED3060", Offset = "0x5ED2060", VA = "0x5ED3060")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x5ED3420", Offset = "0x5ED2420", VA = "0x5ED3420")]
	internal void LoadDiffGram(DataTable dt, XmlReader dataTextReader)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x5ED2880", Offset = "0x5ED1880", VA = "0x5ED2880")]
	internal void ProcessDiffs(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x5ED3640", Offset = "0x5ED2640", VA = "0x5ED3640")]
	internal void ProcessDiffs(ArrayList tableList, XmlReader ssync)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x5ED2C50", Offset = "0x5ED1C50", VA = "0x5ED2C50")]
	internal void ProcessErrors(DataSet ds, XmlReader ssync)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x5ED39F0", Offset = "0x5ED29F0", VA = "0x5ED39F0")]
	internal void ProcessErrors(ArrayList dt, XmlReader ssync)
	{
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x5ED4F60", Offset = "0x5ED3F60", VA = "0x5ED4F60")]
	private DataTable GetTable(string tableName, string ns)
	{
		return null;
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x5ED3F80", Offset = "0x5ED2F80", VA = "0x5ED3F80")]
	private int ReadOldRowData(DataSet ds, ref DataTable table, ref int pos, XmlReader row)
	{
		return default(int);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x5ED3F20", Offset = "0x5ED2F20", VA = "0x5ED3F20")]
	internal void SkipWhitespaces(XmlReader reader)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x5ED5140", Offset = "0x5ED4140", VA = "0x5ED5140")]
	public XMLDiffLoader()
	{
	}
}
