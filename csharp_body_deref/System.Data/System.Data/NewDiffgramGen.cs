using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000099")]
internal sealed class NewDiffgramGen
{
	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x10")]
	internal XmlDocument _doc;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x18")]
	internal DataSet _ds;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x20")]
	internal DataTable _dt;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x28")]
	internal XmlWriter _xmlw;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x30")]
	private bool _fBefore;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x31")]
	private bool _fErrors;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x38")]
	internal Hashtable _rowsOrder;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _tables;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x48")]
	private bool _writeHierarchy;

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x42BC940", Offset = "0x42BC940", VA = "0x42BC940")]
	internal NewDiffgramGen(DataSet ds)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x42BCD20", Offset = "0x42BCD20", VA = "0x42BCD20")]
	internal NewDiffgramGen(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x42BCE30", Offset = "0x42BCE30", VA = "0x42BCE30")]
	private void CreateTableHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x42BCA90", Offset = "0x42BCA90", VA = "0x42BCA90")]
	private void DoAssignments(ArrayList tables)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x42BD270", Offset = "0x42BD270", VA = "0x42BD270")]
	private bool EmptyData()
	{
		return default(bool);
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x42BD350", Offset = "0x42BD350", VA = "0x42BD350")]
	internal void Save(XmlWriter xmlw)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x42BD360", Offset = "0x42BD360", VA = "0x42BD360")]
	internal void Save(XmlWriter xmlw, DataTable table)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x42BE760", Offset = "0x42BE760", VA = "0x42BE760")]
	private void GenerateTable(DataTable table)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x42BE7E0", Offset = "0x42BE7E0", VA = "0x42BE7E0")]
	private void GenerateTableErrors(DataTable table)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x42BEE40", Offset = "0x42BEE40", VA = "0x42BEE40")]
	private void GenerateRow(DataRow row)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x42BF560", Offset = "0x42BF560", VA = "0x42BF560")]
	private void GenerateColumn(DataRow row, DataColumn col, DataRowVersion version)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x42BC8E0", Offset = "0x42BC8E0", VA = "0x42BC8E0")]
	internal static string QualifiedName(string prefix, string name)
	{
		return null;
	}
}
