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
	[Address(RVA = "0x45FA0A0", Offset = "0x45FA0A0", VA = "0x45FA0A0")]
	internal NewDiffgramGen(DataSet ds)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x45FA480", Offset = "0x45FA480", VA = "0x45FA480")]
	internal NewDiffgramGen(DataTable dt, bool writeHierarchy)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x45FA590", Offset = "0x45FA590", VA = "0x45FA590")]
	private void CreateTableHierarchy(DataTable dt)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x45FA1F0", Offset = "0x45FA1F0", VA = "0x45FA1F0")]
	private void DoAssignments(ArrayList tables)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x45FA9D0", Offset = "0x45FA9D0", VA = "0x45FA9D0")]
	private bool EmptyData()
	{
		return default(bool);
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x45FAAB0", Offset = "0x45FAAB0", VA = "0x45FAAB0")]
	internal void Save(XmlWriter xmlw)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x45FAAC0", Offset = "0x45FAAC0", VA = "0x45FAAC0")]
	internal void Save(XmlWriter xmlw, DataTable table)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x45FBEC0", Offset = "0x45FBEC0", VA = "0x45FBEC0")]
	private void GenerateTable(DataTable table)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x45FBF40", Offset = "0x45FBF40", VA = "0x45FBF40")]
	private void GenerateTableErrors(DataTable table)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x45FC5A0", Offset = "0x45FC5A0", VA = "0x45FC5A0")]
	private void GenerateRow(DataRow row)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x45FCCC0", Offset = "0x45FCCC0", VA = "0x45FCCC0")]
	private void GenerateColumn(DataRow row, DataColumn col, DataRowVersion version)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x45FA040", Offset = "0x45FA040", VA = "0x45FA040")]
	internal static string QualifiedName(string prefix, string name)
	{
		return null;
	}
}
