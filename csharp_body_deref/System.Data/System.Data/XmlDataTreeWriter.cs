// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XmlDataTreeWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x45FBAE0", Offset = "0x45FBAE0", VA = "0x45FBAE0")]
	internal XmlDataTreeWriter(DataSet ds)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x45FB0C0", Offset = "0x45FB0C0", VA = "0x45FB0C0")]
	internal XmlDataTreeWriter(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x45FDBE0", Offset = "0x45FDBE0", VA = "0x45FDBE0")]
	private DataTable[] CreateToplevelTables()
	{
		return null;
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x45FD7A0", Offset = "0x45FD7A0", VA = "0x45FD7A0")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x45FCC00", Offset = "0x45FCC00", VA = "0x45FCC00")]
	internal static bool RowHasErrors(DataRow row)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x45FB250", Offset = "0x45FB250", VA = "0x45FB250")]
	internal void SaveDiffgramData(XmlWriter xw, Hashtable rowsOrder)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x4600340", Offset = "0x4600340", VA = "0x4600340")]
	internal void Save(XmlWriter xw, bool writeSchema)
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x4600EE0", Offset = "0x4600EE0", VA = "0x4600EE0")]
	private ArrayList GetNestedChildRelations(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x45FDF40", Offset = "0x45FDF40", VA = "0x45FDF40")]
	internal void XmlDataRowWriter(DataRow row, string encodedTableName)
	{
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x45FD710", Offset = "0x45FD710", VA = "0x45FD710")]
	internal static bool PreserveSpace(object value)
	{
		return default(bool);
	}
}
