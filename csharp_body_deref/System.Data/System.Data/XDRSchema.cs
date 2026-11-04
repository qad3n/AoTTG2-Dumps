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
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x6000802")]
		[Address(RVA = "0x25227A0", Offset = "0x2520DA0", VA = "0x1825227A0", Slot = "4")]
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
	[Address(RVA = "0x252CA50", Offset = "0x252B050", VA = "0x18252CA50")]
	internal XDRSchema(DataSet ds, bool fInline)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x252B350", Offset = "0x2529950", VA = "0x18252B350")]
	internal void LoadSchema(XmlElement schemaRoot, DataSet ds)
	{
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x2529090", Offset = "0x2527690", VA = "0x182529090")]
	internal XmlElement FindTypeNode(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x252AEA0", Offset = "0x25294A0", VA = "0x18252AEA0")]
	internal bool IsTextOnlyContent(XmlElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x252B060", Offset = "0x2529660", VA = "0x18252B060")]
	internal bool IsXDRField(XmlElement node, XmlElement typeNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x252A300", Offset = "0x2528900", VA = "0x18252A300")]
	internal DataTable HandleTable(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x2528FB0", Offset = "0x25275B0", VA = "0x182528FB0")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x252B5B0", Offset = "0x2529BB0", VA = "0x18252B5B0")]
	private Type ParseDataType(string dt, string dtValues)
	{
		return null;
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x2529420", Offset = "0x2527A20", VA = "0x182529420")]
	internal string GetInstanceName(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x2529840", Offset = "0x2527E40", VA = "0x182529840")]
	internal void HandleColumn(XmlElement node, DataTable table)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x2529810", Offset = "0x2527E10", VA = "0x182529810")]
	internal void GetMinMax(XmlElement elNode, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x25295B0", Offset = "0x2527BB0", VA = "0x1825295B0")]
	internal void GetMinMax(XmlElement elNode, bool isAttribute, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x252A4B0", Offset = "0x2528AB0", VA = "0x18252A4B0")]
	internal void HandleTypeNode(XmlElement typeNode, DataTable table, ArrayList tableChildren)
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x252A900", Offset = "0x2528F00", VA = "0x18252A900")]
	internal DataTable InstantiateTable(DataSet dataSet, XmlElement node, XmlElement typeNode)
	{
		return null;
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x252A6A0", Offset = "0x2528CA0", VA = "0x18252A6A0")]
	internal DataTable InstantiateSimpleTable(DataSet dataSet, XmlElement node)
	{
		return null;
	}
}
