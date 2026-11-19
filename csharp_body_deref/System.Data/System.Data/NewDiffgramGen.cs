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
	[Address(RVA = "0x5EFE410", Offset = "0x5EFD410", VA = "0x5EFE410")]
	internal NewDiffgramGen(DataSet ds)
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x5EFE7F0", Offset = "0x5EFD7F0", VA = "0x5EFE7F0")]
	internal NewDiffgramGen(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x5EFE900", Offset = "0x5EFD900", VA = "0x5EFE900")]
	private void CreateTableHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x5EFE560", Offset = "0x5EFD560", VA = "0x5EFE560")]
	private void DoAssignments(ArrayList tables)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x5EFECC0", Offset = "0x5EFDCC0", VA = "0x5EFECC0")]
	private bool EmptyData()
	{
		return default(bool);
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x5EFEDB0", Offset = "0x5EFDDB0", VA = "0x5EFEDB0")]
	internal void Save(XmlWriter xmlw)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x5EFEDC0", Offset = "0x5EFDDC0", VA = "0x5EFEDC0")]
	internal void Save(XmlWriter xmlw, DataTable table)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x5F00020", Offset = "0x5EFF020", VA = "0x5F00020")]
	private void GenerateTable(DataTable table)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x5F000A0", Offset = "0x5EFF0A0", VA = "0x5F000A0")]
	private void GenerateTableErrors(DataTable table)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x5F006C0", Offset = "0x5EFF6C0", VA = "0x5F006C0")]
	private void GenerateRow(DataRow row)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x5F00DC0", Offset = "0x5EFFDC0", VA = "0x5F00DC0")]
	private void GenerateColumn(DataRow row, DataColumn col, DataRowVersion version)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x5EFE3B0", Offset = "0x5EFD3B0", VA = "0x5EFE3B0")]
	internal static string QualifiedName(string prefix, string name)
	{
		return null;
	}
}
