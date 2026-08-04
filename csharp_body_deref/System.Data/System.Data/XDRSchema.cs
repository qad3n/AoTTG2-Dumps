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
		[Address(RVA = "0x45CA350", Offset = "0x45CA350", VA = "0x45CA350")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x45CA390", Offset = "0x45CA390", VA = "0x45CA390", Slot = "4")]
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
	[Address(RVA = "0x45C6650", Offset = "0x45C6650", VA = "0x45C6650")]
	internal XDRSchema(DataSet ds, bool fInline)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x45C66D0", Offset = "0x45C66D0", VA = "0x45C66D0")]
	internal void LoadSchema(XmlElement schemaRoot, DataSet ds)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x45C6AC0", Offset = "0x45C6AC0", VA = "0x45C6AC0")]
	internal XmlElement FindTypeNode(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x45C6E30", Offset = "0x45C6E30", VA = "0x45C6E30")]
	internal bool IsTextOnlyContent(XmlElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x45C6FF0", Offset = "0x45C6FF0", VA = "0x45C6FF0")]
	internal bool IsXDRField(XmlElement node, XmlElement typeNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x45C6920", Offset = "0x45C6920", VA = "0x45C6920")]
	internal DataTable HandleTable(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x45C7C30", Offset = "0x45C7C30", VA = "0x45C7C30")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x45C7CF0", Offset = "0x45C7CF0", VA = "0x45C7CF0")]
	private Type ParseDataType(string dt, string dtValues)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x45C7E30", Offset = "0x45C7E30", VA = "0x45C7E30")]
	internal string GetInstanceName(XmlElement node)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x45C7F90", Offset = "0x45C7F90", VA = "0x45C7F90")]
	internal void HandleColumn(XmlElement node, DataTable table)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x45C7150", Offset = "0x45C7150", VA = "0x45C7150")]
	internal void GetMinMax(XmlElement elNode, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x45C8970", Offset = "0x45C8970", VA = "0x45C8970")]
	internal void GetMinMax(XmlElement elNode, bool isAttribute, ref int minOccurs, ref int maxOccurs)
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x45C8CF0", Offset = "0x45C8CF0", VA = "0x45C8CF0")]
	internal void HandleTypeNode(XmlElement typeNode, DataTable table, ArrayList tableChildren)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x45C73A0", Offset = "0x45C73A0", VA = "0x45C73A0")]
	internal DataTable InstantiateTable(DataSet dataSet, XmlElement node, XmlElement typeNode)
	{
		return null;
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x45C7160", Offset = "0x45C7160", VA = "0x45C7160")]
	internal DataTable InstantiateSimpleTable(DataSet dataSet, XmlElement node)
	{
		return null;
	}
}
