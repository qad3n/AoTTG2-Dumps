// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.NewDiffgramGen
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x20000A3")]
internal sealed class NewDiffgramGen
{
	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x10")]
	internal XmlDocument _doc;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x18")]
	internal DataSet _ds;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x20")]
	internal DataTable _dt;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x28")]
	internal XmlWriter _xmlw;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x30")]
	private bool _fBefore;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x31")]
	private bool _fErrors;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x38")]
	internal Hashtable _rowsOrder;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _tables;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x48")]
	private bool _writeHierarchy;

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x2549F20", Offset = "0x2548520", VA = "0x182549F20")]
	internal NewDiffgramGen(DataSet ds)
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x2549E10", Offset = "0x2548410", VA = "0x182549E10")]
	internal NewDiffgramGen(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x2547B60", Offset = "0x2546160", VA = "0x182547B60")]
	private void CreateTableHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x2547E20", Offset = "0x2546420", VA = "0x182547E20")]
	private void DoAssignments(ArrayList tables)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x2548080", Offset = "0x2546680", VA = "0x182548080")]
	private bool EmptyData()
	{
		return default(bool);
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x2549E00", Offset = "0x2548400", VA = "0x182549E00")]
	internal void Save(XmlWriter xmlw)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x25497B0", Offset = "0x2547DB0", VA = "0x1825497B0")]
	internal void Save(XmlWriter xmlw, DataTable table)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x25496E0", Offset = "0x2547CE0", VA = "0x1825496E0")]
	private void GenerateTable(DataTable table)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x2549120", Offset = "0x2547720", VA = "0x182549120")]
	private void GenerateTableErrors(DataTable table)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x2548AD0", Offset = "0x25470D0", VA = "0x182548AD0")]
	private void GenerateRow(DataRow row)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x2548190", Offset = "0x2546790", VA = "0x182548190")]
	private void GenerateColumn(DataRow row, DataColumn col, DataRowVersion version)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x2549750", Offset = "0x2547D50", VA = "0x182549750")]
	internal static string QualifiedName(string prefix, string name)
	{
		return null;
	}
}
