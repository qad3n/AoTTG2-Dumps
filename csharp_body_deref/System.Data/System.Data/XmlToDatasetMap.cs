// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XmlToDatasetMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200009C")]
internal sealed class XmlToDatasetMap
{
	[Token(Token = "0x200009D")]
	private sealed class XmlNodeIdentety
	{
		[Token(Token = "0x4000325")]
		[FieldOffset(Offset = "0x10")]
		public string LocalName;

		[Token(Token = "0x4000326")]
		[FieldOffset(Offset = "0x18")]
		public string NamespaceURI;

		[Token(Token = "0x6000880")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public XmlNodeIdentety(string localName, string namespaceURI)
		{
		}

		[Token(Token = "0x6000881")]
		[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000882")]
		[Address(RVA = "0x254FB00", Offset = "0x254E100", VA = "0x18254FB00", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009E")]
	internal sealed class XmlNodeIdHashtable : Hashtable
	{
		[Token(Token = "0x4000327")]
		[FieldOffset(Offset = "0x50")]
		private XmlNodeIdentety _id;

		[Token(Token = "0x1700014D")]
		public object this[XmlNode node]
		{
			[Token(Token = "0x6000884")]
			[Address(RVA = "0x254F9C0", Offset = "0x254DFC0", VA = "0x18254F9C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		public object this[XmlReader dataReader]
		{
			[Token(Token = "0x6000885")]
			[Address(RVA = "0x254FA60", Offset = "0x254E060", VA = "0x18254FA60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014F")]
		public object this[DataTable table]
		{
			[Token(Token = "0x6000886")]
			[Address(RVA = "0x254F930", Offset = "0x254DF30", VA = "0x18254F930")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000150")]
		public object this[string name]
		{
			[Token(Token = "0x6000887")]
			[Address(RVA = "0x254F8C0", Offset = "0x254DEC0", VA = "0x18254F8C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000883")]
		[Address(RVA = "0x254F820", Offset = "0x254DE20", VA = "0x18254F820")]
		public XmlNodeIdHashtable(int capacity)
		{
		}
	}

	[Token(Token = "0x200009F")]
	private sealed class TableSchemaInfo
	{
		[Token(Token = "0x4000328")]
		[FieldOffset(Offset = "0x10")]
		public DataTable TableSchema;

		[Token(Token = "0x4000329")]
		[FieldOffset(Offset = "0x18")]
		public XmlNodeIdHashtable ColumnsSchemaMap;

		[Token(Token = "0x6000888")]
		[Address(RVA = "0x254C5E0", Offset = "0x254ABE0", VA = "0x18254C5E0")]
		public TableSchemaInfo(DataTable tableSchema)
		{
		}
	}

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x10")]
	private XmlNodeIdHashtable _tableSchemaMap;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x18")]
	private TableSchemaInfo _lastTableSchemaInfo;

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x2547190", Offset = "0x2545790", VA = "0x182547190")]
	public XmlToDatasetMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x2547110", Offset = "0x2545710", VA = "0x182547110")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x25471D0", Offset = "0x25457D0", VA = "0x1825471D0")]
	public XmlToDatasetMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x2547150", Offset = "0x2545750", VA = "0x182547150")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x25470E0", Offset = "0x25456E0", VA = "0x1825470E0")]
	internal static bool IsMappedColumn(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x2545000", Offset = "0x2543600", VA = "0x182545000")]
	private TableSchemaInfo AddTableSchema(DataTable table, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x2545130", Offset = "0x2543730", VA = "0x182545130")]
	private TableSchemaInfo AddTableSchema(XmlNameTable nameTable, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x2544CA0", Offset = "0x25432A0", VA = "0x182544CA0")]
	private bool AddColumnSchema(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x2544E00", Offset = "0x2543400", VA = "0x182544E00")]
	private bool AddColumnSchema(XmlNameTable nameTable, DataColumn col, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x25452E0", Offset = "0x25438E0", VA = "0x1825452E0")]
	private void BuildIdentityMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x2545950", Offset = "0x2543F50", VA = "0x182545950")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x2545690", Offset = "0x2543C90", VA = "0x182545690")]
	private void BuildIdentityMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x2546070", Offset = "0x2544670", VA = "0x182546070")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x2546BB0", Offset = "0x25451B0", VA = "0x182546BB0")]
	private ArrayList GetSelfAndDescendants(DataTable dt)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x2546740", Offset = "0x2544D40", VA = "0x182546740")]
	public object GetColumnSchema(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x2546940", Offset = "0x2544F40", VA = "0x182546940")]
	public object GetColumnSchema(DataTable table, XmlReader dataReader, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x2546AB0", Offset = "0x25450B0", VA = "0x182546AB0")]
	public object GetSchemaForNode(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x2546E80", Offset = "0x2545480", VA = "0x182546E80")]
	public DataTable GetTableForNode(XmlReader node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x2546F60", Offset = "0x2545560", VA = "0x182546F60")]
	private void HandleSpecialColumn(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
	}
}
