using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200009A")]
internal sealed class XmlDataTreeWriter
{
	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x10")]
	private XmlWriter _xmlw;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x18")]
	private DataSet _ds;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x20")]
	private DataTable _dt;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x28")]
	private ArrayList _dTables;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x30")]
	private DataTable[] _topLevelTables;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x38")]
	private bool _fFromTable;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x39")]
	private bool _isDiffgram;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable _rowsOrder;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x48")]
	private bool _writeHierarchy;

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x42BE380", Offset = "0x42BE380", VA = "0x42BE380")]
	internal XmlDataTreeWriter(DataSet ds)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x42BD960", Offset = "0x42BD960", VA = "0x42BD960")]
	internal XmlDataTreeWriter(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x42C0480", Offset = "0x42C0480", VA = "0x42C0480")]
	private DataTable[] CreateToplevelTables()
	{
		return null;
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x42C0040", Offset = "0x42C0040", VA = "0x42C0040")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x42BF4A0", Offset = "0x42BF4A0", VA = "0x42BF4A0")]
	internal static bool RowHasErrors(DataRow row)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x42BDAF0", Offset = "0x42BDAF0", VA = "0x42BDAF0")]
	internal void SaveDiffgramData(XmlWriter xw, Hashtable rowsOrder)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x42C2BE0", Offset = "0x42C2BE0", VA = "0x42C2BE0")]
	internal void Save(XmlWriter xw, bool writeSchema)
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x42C3780", Offset = "0x42C3780", VA = "0x42C3780")]
	private ArrayList GetNestedChildRelations(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x42C07E0", Offset = "0x42C07E0", VA = "0x42C07E0")]
	internal void XmlDataRowWriter(DataRow row, string encodedTableName)
	{
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x42BFFB0", Offset = "0x42BFFB0", VA = "0x42BFFB0")]
	internal static bool PreserveSpace(object value)
	{
		return default(bool);
	}
}
