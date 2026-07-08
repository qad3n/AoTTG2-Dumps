using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000088")]
internal sealed class XDRSchema : XMLSchema
{
	[Token(Token = "0x2000089")]
	private sealed class NameType : IComparable
	{
		[Token(Token = "0x40002D1")]
		[FieldOffset(Offset = "0x10")]
		public string name;

		[Token(Token = "0x40002D2")]
		[FieldOffset(Offset = "0x18")]
		public Type type;

		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x428CBF0", Offset = "0x428CBF0", VA = "0x428CBF0")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x428CC30", Offset = "0x428CC30", VA = "0x428CC30", Slot = "4")]
		public int CompareTo(object obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x10")]
	internal string _schemaName;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x18")]
	internal string _schemaUri;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x20")]
	internal XmlElement _schemaRoot;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x28")]
	internal DataSet _ds;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_colonArray;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x8")]
	private static NameType[] s_mapNameTypeXdr;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x10")]
	private static NameType s_enumerationNameType;

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x4288EF0", Offset = "0x4288EF0", VA = "0x4288EF0")]
	internal XDRSchema(DataSet ds, bool fInline)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x4288F70", Offset = "0x4288F70", VA = "0x4288F70")]
	internal void LoadSchema(XmlElement schemaRoot, DataSet ds)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x4289360", Offset = "0x4289360", VA = "0x4289360")]
	internal XmlElement FindTypeNode(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x42896D0", Offset = "0x42896D0", VA = "0x42896D0")]
	internal bool IsTextOnlyContent(XmlElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x4289890", Offset = "0x4289890", VA = "0x4289890")]
	internal bool IsXDRField(XmlElement node, XmlElement typeNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x42891C0", Offset = "0x42891C0", VA = "0x42891C0")]
	internal DataTable HandleTable(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x428A4D0", Offset = "0x428A4D0", VA = "0x428A4D0")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x428A590", Offset = "0x428A590", VA = "0x428A590")]
	private Type ParseDataType(string dt, string dtValues)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x428A6D0", Offset = "0x428A6D0", VA = "0x428A6D0")]
	internal string GetInstanceName(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x428A830", Offset = "0x428A830", VA = "0x428A830")]
	internal void HandleColumn(XmlElement node, DataTable table)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x42899F0", Offset = "0x42899F0", VA = "0x42899F0")]
	internal void GetMinMax(XmlElement elNode, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x428B210", Offset = "0x428B210", VA = "0x428B210")]
	internal void GetMinMax(XmlElement elNode, bool isAttribute, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x428B590", Offset = "0x428B590", VA = "0x428B590")]
	internal void HandleTypeNode(XmlElement typeNode, DataTable table, ArrayList tableChildren)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x4289C40", Offset = "0x4289C40", VA = "0x4289C40")]
	internal DataTable InstantiateTable(DataSet dataSet, XmlElement node, XmlElement typeNode)
	{
		return null;
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x4289A00", Offset = "0x4289A00", VA = "0x4289A00")]
	internal DataTable InstantiateSimpleTable(DataSet dataSet, XmlElement node)
	{
		return null;
	}
}
