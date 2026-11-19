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

[Token(Token = "0x20000A4")]
internal sealed class XmlDataTreeWriter
{
	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x10")]
	private XmlWriter _xmlw;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x18")]
	private DataSet _ds;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x20")]
	private DataTable _dt;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x28")]
	private ArrayList _dTables;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x30")]
	private DataTable[] _topLevelTables;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x38")]
	private bool _fFromTable;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x39")]
	private bool _isDiffgram;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable _rowsOrder;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x48")]
	private bool _writeHierarchy;

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x5EFFCA0", Offset = "0x5EFECA0", VA = "0x5EFFCA0")]
	internal XmlDataTreeWriter(DataSet ds)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x5EFF3A0", Offset = "0x5EFE3A0", VA = "0x5EFF3A0")]
	internal XmlDataTreeWriter(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x5F01C40", Offset = "0x5F00C40", VA = "0x5F01C40")]
	private DataTable[] CreateToplevelTables()
	{
		return null;
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x5F01880", Offset = "0x5F00880", VA = "0x5F01880")]
	private void CreateTablesHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x5F00D00", Offset = "0x5EFFD00", VA = "0x5F00D00")]
	internal static bool RowHasErrors(DataRow row)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x5EFF530", Offset = "0x5EFE530", VA = "0x5EFF530")]
	internal void SaveDiffgramData(XmlWriter xw, Hashtable rowsOrder)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x5F03B60", Offset = "0x5F02B60", VA = "0x5F03B60")]
	internal void Save(XmlWriter xw, bool writeSchema)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x5F04550", Offset = "0x5F03550", VA = "0x5F04550")]
	private ArrayList GetNestedChildRelations(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x5F01F90", Offset = "0x5F00F90", VA = "0x5F01F90")]
	internal void XmlDataRowWriter(DataRow row, string encodedTableName)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x5F017F0", Offset = "0x5F007F0", VA = "0x5F017F0")]
	internal static bool PreserveSpace(object value)
	{
		return default(bool);
	}
}
