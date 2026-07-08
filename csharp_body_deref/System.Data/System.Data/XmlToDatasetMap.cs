using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000092")]
internal sealed class XmlToDatasetMap
{
	[Token(Token = "0x2000093")]
	private sealed class XmlNodeIdentety
	{
		[Token(Token = "0x4000312")]
		[FieldOffset(Offset = "0x10")]
		public string LocalName;

		[Token(Token = "0x4000313")]
		[FieldOffset(Offset = "0x18")]
		public string NamespaceURI;

		[Token(Token = "0x6000861")]
		[Address(RVA = "0x42ACDE0", Offset = "0x42ACDE0", VA = "0x42ACDE0")]
		public XmlNodeIdentety(string localName, string namespaceURI)
		{
		}

		[Token(Token = "0x6000862")]
		[Address(RVA = "0x42ACE20", Offset = "0x42ACE20", VA = "0x42ACE20", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000863")]
		[Address(RVA = "0x42ACE50", Offset = "0x42ACE50", VA = "0x42ACE50", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000094")]
	internal sealed class XmlNodeIdHashtable : Hashtable
	{
		[Token(Token = "0x4000314")]
		[FieldOffset(Offset = "0x50")]
		private XmlNodeIdentety _id;

		[Token(Token = "0x1700014A")]
		public object this[XmlNode node]
		{
			[Token(Token = "0x6000865")]
			[Address(RVA = "0x42ACF90", Offset = "0x42ACF90", VA = "0x42ACF90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014B")]
		public object this[XmlReader dataReader]
		{
			[Token(Token = "0x6000866")]
			[Address(RVA = "0x42AD030", Offset = "0x42AD030", VA = "0x42AD030")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014C")]
		public object this[DataTable table]
		{
			[Token(Token = "0x6000867")]
			[Address(RVA = "0x42AD0D0", Offset = "0x42AD0D0", VA = "0x42AD0D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014D")]
		public object this[string name]
		{
			[Token(Token = "0x6000868")]
			[Address(RVA = "0x42AD150", Offset = "0x42AD150", VA = "0x42AD150")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000864")]
		[Address(RVA = "0x42ACEE0", Offset = "0x42ACEE0", VA = "0x42ACEE0")]
		public XmlNodeIdHashtable(int capacity)
		{
		}
	}

	[Token(Token = "0x2000095")]
	private sealed class TableSchemaInfo
	{
		[Token(Token = "0x4000315")]
		[FieldOffset(Offset = "0x10")]
		public DataTable TableSchema;

		[Token(Token = "0x4000316")]
		[FieldOffset(Offset = "0x18")]
		public XmlNodeIdHashtable ColumnsSchemaMap;

		[Token(Token = "0x6000869")]
		[Address(RVA = "0x42AD1C0", Offset = "0x42AD1C0", VA = "0x42AD1C0")]
		public TableSchemaInfo(DataTable tableSchema)
		{
		}
	}

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x10")]
	private XmlNodeIdHashtable _tableSchemaMap;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x18")]
	private TableSchemaInfo _lastTableSchemaInfo;

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x42A5310", Offset = "0x42A5310", VA = "0x42A5310")]
	public XmlToDatasetMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x42A6F70", Offset = "0x42A6F70", VA = "0x42A6F70")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x42A52E0", Offset = "0x42A52E0", VA = "0x42A52E0")]
	public XmlToDatasetMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x42A6FA0", Offset = "0x42A6FA0", VA = "0x42A6FA0")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x42A6770", Offset = "0x42A6770", VA = "0x42A6770")]
	internal static bool IsMappedColumn(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x42AC190", Offset = "0x42AC190", VA = "0x42AC190")]
	private TableSchemaInfo AddTableSchema(DataTable table, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x42AC2B0", Offset = "0x42AC2B0", VA = "0x42AC2B0")]
	private TableSchemaInfo AddTableSchema(XmlNameTable nameTable, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x42AC440", Offset = "0x42AC440", VA = "0x42AC440")]
	private bool AddColumnSchema(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x42AC6D0", Offset = "0x42AC6D0", VA = "0x42AC6D0")]
	private bool AddColumnSchema(XmlNameTable nameTable, DataColumn col, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x42A9B70", Offset = "0x42A9B70", VA = "0x42A9B70")]
	private void BuildIdentityMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x42AA2A0", Offset = "0x42AA2A0", VA = "0x42AA2A0")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x42AB020", Offset = "0x42AB020", VA = "0x42AB020")]
	private void BuildIdentityMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x42AB430", Offset = "0x42AB430", VA = "0x42AB430")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x42AC8A0", Offset = "0x42AC8A0", VA = "0x42AC8A0")]
	private ArrayList GetSelfAndDescendants(DataTable dt)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x42A4D20", Offset = "0x42A4D20", VA = "0x42A4D20")]
	public object GetColumnSchema(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x42A8E70", Offset = "0x42A8E70", VA = "0x42A8E70")]
	public object GetColumnSchema(DataTable table, XmlReader dataReader, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x42A5340", Offset = "0x42A5340", VA = "0x42A5340")]
	public object GetSchemaForNode(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x42A7B70", Offset = "0x42A7B70", VA = "0x42A7B70")]
	public DataTable GetTableForNode(XmlReader node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x42AC570", Offset = "0x42AC570", VA = "0x42AC570")]
	private void HandleSpecialColumn(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
	}
}
