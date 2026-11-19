// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XDRSchema
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000092")]
internal sealed class XDRSchema : XMLSchema
{
	[Token(Token = "0x2000093")]
	private sealed class NameType : IComparable
	{
		[Token(Token = "0x40002E4")]
		[FieldOffset(Offset = "0x10")]
		public string name;

		[Token(Token = "0x40002E5")]
		[FieldOffset(Offset = "0x18")]
		public Type type;

		[Token(Token = "0x6000801")]
		[Address(RVA = "0x5ED2640", Offset = "0x5ED1640", VA = "0x5ED2640")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x6000802")]
		[Address(RVA = "0x5ED2680", Offset = "0x5ED1680", VA = "0x5ED2680", Slot = "4")]
		public int CompareTo(object obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x10")]
	internal string _schemaName;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x18")]
	internal string _schemaUri;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x20")]
	internal XmlElement _schemaRoot;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x28")]
	internal DataSet _ds;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_colonArray;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x8")]
	private static NameType[] s_mapNameTypeXdr;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x10")]
	private static NameType s_enumerationNameType;

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x5ECEBF0", Offset = "0x5ECDBF0", VA = "0x5ECEBF0")]
	internal XDRSchema(DataSet ds, bool fInline)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x5ECEC70", Offset = "0x5ECDC70", VA = "0x5ECEC70")]
	internal void LoadSchema(XmlElement schemaRoot, DataSet ds)
	{
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x5ECF060", Offset = "0x5ECE060", VA = "0x5ECF060")]
	internal XmlElement FindTypeNode(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x5ECF3C0", Offset = "0x5ECE3C0", VA = "0x5ECF3C0")]
	internal bool IsTextOnlyContent(XmlElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x5ECF580", Offset = "0x5ECE580", VA = "0x5ECF580")]
	internal bool IsXDRField(XmlElement node, XmlElement typeNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x5ECEEC0", Offset = "0x5ECDEC0", VA = "0x5ECEEC0")]
	internal DataTable HandleTable(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x5ED0030", Offset = "0x5ECF030", VA = "0x5ED0030")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x5ED00F0", Offset = "0x5ECF0F0", VA = "0x5ED00F0")]
	private Type ParseDataType(string dt, string dtValues)
	{
		return null;
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x5ED0240", Offset = "0x5ECF240", VA = "0x5ED0240")]
	internal string GetInstanceName(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x5ED03A0", Offset = "0x5ECF3A0", VA = "0x5ED03A0")]
	internal void HandleColumn(XmlElement node, DataTable table)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x5ECF6E0", Offset = "0x5ECE6E0", VA = "0x5ECF6E0")]
	internal void GetMinMax(XmlElement elNode, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x5ED0D70", Offset = "0x5ECFD70", VA = "0x5ED0D70")]
	internal void GetMinMax(XmlElement elNode, bool isAttribute, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x5ED1100", Offset = "0x5ED0100", VA = "0x5ED1100")]
	internal void HandleTypeNode(XmlElement typeNode, DataTable table, ArrayList tableChildren)
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x5ECF920", Offset = "0x5ECE920", VA = "0x5ECF920")]
	internal DataTable InstantiateTable(DataSet dataSet, XmlElement node, XmlElement typeNode)
	{
		return null;
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x5ECF6F0", Offset = "0x5ECE6F0", VA = "0x5ECF6F0")]
	internal DataTable InstantiateSimpleTable(DataSet dataSet, XmlElement node)
	{
		return null;
	}
}
