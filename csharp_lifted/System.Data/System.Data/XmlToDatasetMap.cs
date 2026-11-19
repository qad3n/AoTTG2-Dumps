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
		[Address(RVA = "0x5EEFB50", Offset = "0x5EEEB50", VA = "0x5EEFB50")]
		public XmlNodeIdentety(string localName, string namespaceURI)
		{
		}

		[Token(Token = "0x6000881")]
		[Address(RVA = "0x5EEFB90", Offset = "0x5EEEB90", VA = "0x5EEFB90", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000882")]
		[Address(RVA = "0x5EEFBC0", Offset = "0x5EEEBC0", VA = "0x5EEFBC0", Slot = "0")]
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
			[Address(RVA = "0x5EEFD00", Offset = "0x5EEED00", VA = "0x5EEFD00")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		public object this[XmlReader dataReader]
		{
			[Token(Token = "0x6000885")]
			[Address(RVA = "0x5EEFDA0", Offset = "0x5EEEDA0", VA = "0x5EEFDA0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014F")]
		public object this[DataTable table]
		{
			[Token(Token = "0x6000886")]
			[Address(RVA = "0x5EEFE40", Offset = "0x5EEEE40", VA = "0x5EEFE40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000150")]
		public object this[string name]
		{
			[Token(Token = "0x6000887")]
			[Address(RVA = "0x5EEFEC0", Offset = "0x5EEEEC0", VA = "0x5EEFEC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000883")]
		[Address(RVA = "0x5EEFC50", Offset = "0x5EEEC50", VA = "0x5EEFC50")]
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
		[Address(RVA = "0x5EEFF30", Offset = "0x5EEEF30", VA = "0x5EEFF30")]
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
	[Address(RVA = "0x5EE8980", Offset = "0x5EE7980", VA = "0x5EE8980")]
	public XmlToDatasetMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x5EEA380", Offset = "0x5EE9380", VA = "0x5EEA380")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x5EE8950", Offset = "0x5EE7950", VA = "0x5EE8950")]
	public XmlToDatasetMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x5EEA3B0", Offset = "0x5EE93B0", VA = "0x5EEA3B0")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x5EE9BA0", Offset = "0x5EE8BA0", VA = "0x5EE9BA0")]
	internal static bool IsMappedColumn(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x5EEEFA0", Offset = "0x5EEDFA0", VA = "0x5EEEFA0")]
	private TableSchemaInfo AddTableSchema(DataTable table, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x5EEF0C0", Offset = "0x5EEE0C0", VA = "0x5EEF0C0")]
	private TableSchemaInfo AddTableSchema(XmlNameTable nameTable, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x5EEF250", Offset = "0x5EEE250", VA = "0x5EEF250")]
	private bool AddColumnSchema(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x5EEF4E0", Offset = "0x5EEE4E0", VA = "0x5EEF4E0")]
	private bool AddColumnSchema(XmlNameTable nameTable, DataColumn col, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x5EECDB0", Offset = "0x5EEBDB0", VA = "0x5EECDB0")]
	private void BuildIdentityMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x5EED430", Offset = "0x5EEC430", VA = "0x5EED430")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x5EEE030", Offset = "0x5EED030", VA = "0x5EEE030")]
	private void BuildIdentityMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x5EEE3C0", Offset = "0x5EED3C0", VA = "0x5EEE3C0")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x5EEF6B0", Offset = "0x5EEE6B0", VA = "0x5EEF6B0")]
	private ArrayList GetSelfAndDescendants(DataTable dt)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x5EE83A0", Offset = "0x5EE73A0", VA = "0x5EE83A0")]
	public object GetColumnSchema(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x5EEC110", Offset = "0x5EEB110", VA = "0x5EEC110")]
	public object GetColumnSchema(DataTable table, XmlReader dataReader, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x5EE89B0", Offset = "0x5EE79B0", VA = "0x5EE89B0")]
	public object GetSchemaForNode(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x5EEAE50", Offset = "0x5EE9E50", VA = "0x5EEAE50")]
	public DataTable GetTableForNode(XmlReader node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x5EEF380", Offset = "0x5EEE380", VA = "0x5EEF380")]
	private void HandleSpecialColumn(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
	}
}
