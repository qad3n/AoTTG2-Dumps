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
		[Address(RVA = "0x45EA540", Offset = "0x45EA540", VA = "0x45EA540")]
		public XmlNodeIdentety(string localName, string namespaceURI)
		{
		}

		[Token(Token = "0x6000862")]
		[Address(RVA = "0x45EA580", Offset = "0x45EA580", VA = "0x45EA580", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000863")]
		[Address(RVA = "0x45EA5B0", Offset = "0x45EA5B0", VA = "0x45EA5B0", Slot = "0")]
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
			[Address(RVA = "0x45EA6F0", Offset = "0x45EA6F0", VA = "0x45EA6F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014B")]
		public object this[XmlReader dataReader]
		{
			[Token(Token = "0x6000866")]
			[Address(RVA = "0x45EA790", Offset = "0x45EA790", VA = "0x45EA790")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014C")]
		public object this[DataTable table]
		{
			[Token(Token = "0x6000867")]
			[Address(RVA = "0x45EA830", Offset = "0x45EA830", VA = "0x45EA830")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014D")]
		public object this[string name]
		{
			[Token(Token = "0x6000868")]
			[Address(RVA = "0x45EA8B0", Offset = "0x45EA8B0", VA = "0x45EA8B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000864")]
		[Address(RVA = "0x45EA640", Offset = "0x45EA640", VA = "0x45EA640")]
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
		[Address(RVA = "0x45EA920", Offset = "0x45EA920", VA = "0x45EA920")]
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
	[Address(RVA = "0x45E2A70", Offset = "0x45E2A70", VA = "0x45E2A70")]
	public XmlToDatasetMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x45E46D0", Offset = "0x45E46D0", VA = "0x45E46D0")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x45E2A40", Offset = "0x45E2A40", VA = "0x45E2A40")]
	public XmlToDatasetMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x45E4700", Offset = "0x45E4700", VA = "0x45E4700")]
	public XmlToDatasetMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x45E3ED0", Offset = "0x45E3ED0", VA = "0x45E3ED0")]
	internal static bool IsMappedColumn(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x45E98F0", Offset = "0x45E98F0", VA = "0x45E98F0")]
	private TableSchemaInfo AddTableSchema(DataTable table, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x45E9A10", Offset = "0x45E9A10", VA = "0x45E9A10")]
	private TableSchemaInfo AddTableSchema(XmlNameTable nameTable, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x45E9BA0", Offset = "0x45E9BA0", VA = "0x45E9BA0")]
	private bool AddColumnSchema(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x45E9E30", Offset = "0x45E9E30", VA = "0x45E9E30")]
	private bool AddColumnSchema(XmlNameTable nameTable, DataColumn col, XmlNodeIdHashtable columns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x45E72D0", Offset = "0x45E72D0", VA = "0x45E72D0")]
	private void BuildIdentityMap(DataSet dataSet, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x45E7A00", Offset = "0x45E7A00", VA = "0x45E7A00")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataSet dataSet)
	{
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x45E8780", Offset = "0x45E8780", VA = "0x45E8780")]
	private void BuildIdentityMap(DataTable dataTable, XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x45E8B90", Offset = "0x45E8B90", VA = "0x45E8B90")]
	private void BuildIdentityMap(XmlNameTable nameTable, DataTable dataTable)
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x45EA000", Offset = "0x45EA000", VA = "0x45EA000")]
	private ArrayList GetSelfAndDescendants(DataTable dt)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x45E2480", Offset = "0x45E2480", VA = "0x45E2480")]
	public object GetColumnSchema(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x45E65D0", Offset = "0x45E65D0", VA = "0x45E65D0")]
	public object GetColumnSchema(DataTable table, XmlReader dataReader, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x45E2AA0", Offset = "0x45E2AA0", VA = "0x45E2AA0")]
	public object GetSchemaForNode(XmlNode node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x45E52D0", Offset = "0x45E52D0", VA = "0x45E52D0")]
	public DataTable GetTableForNode(XmlReader node, bool fIgnoreNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x45E9CD0", Offset = "0x45E9CD0", VA = "0x45E9CD0")]
	private void HandleSpecialColumn(DataColumn col, XmlNameTable nameTable, XmlNodeIdHashtable columns)
	{
	}
}
