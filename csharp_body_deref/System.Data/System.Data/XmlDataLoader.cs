// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XmlDataLoader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000090")]
internal sealed class XmlDataLoader
{
	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x10")]
	private DataSet _dataSet;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x18")]
	private XmlToDatasetMap _nodeToSchemaMap;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable _nodeToRowMap;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x28")]
	private Stack _childRowsStack;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x30")]
	private Hashtable _htableExcludedNS;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x38")]
	private bool _fIsXdr;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x39")]
	internal bool _isDiffgram;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x40")]
	private XmlElement _topMostNode;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x48")]
	private bool _ignoreSchema;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x50")]
	private DataTable _dataTable;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x58")]
	private bool _isTableLevel;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x59")]
	private bool _fromInference;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x60")]
	private XmlReader _dataReader;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x68")]
	private object _XSD_XMLNS_NS;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x70")]
	private object _XDR_SCHEMA;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x78")]
	private object _XDRNS;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x80")]
	private object _SQL_SYNC;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x88")]
	private object _UPDGNS;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x90")]
	private object _XSD_SCHEMA;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x98")]
	private object _XSDNS;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0xA0")]
	private object _DFFNS;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0xA8")]
	private object _MSDNS;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0xB0")]
	private object _DIFFID;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0xB8")]
	private object _HASCHANGES;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0xC0")]
	private object _ROWORDER;

	[Token(Token = "0x17000149")]
	internal bool FromInference
	{
		[Token(Token = "0x6000836")]
		[Address(RVA = "0x45E16C0", Offset = "0x45E16C0", VA = "0x45E16C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000837")]
		[Address(RVA = "0x45E16D0", Offset = "0x45E16D0", VA = "0x45E16D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x45E13C0", Offset = "0x45E13C0", VA = "0x45E13C0")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x45E1450", Offset = "0x45E1450", VA = "0x45E1450")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x45E1530", Offset = "0x45E1530", VA = "0x45E1530")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x45E15D0", Offset = "0x45E15D0", VA = "0x45E15D0")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x45E16E0", Offset = "0x45E16E0", VA = "0x45E16E0")]
	private void AttachRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x45E1A70", Offset = "0x45E1A70", VA = "0x45E1A70")]
	private int CountNonNSAttributes(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x45E1C70", Offset = "0x45E1C70", VA = "0x45E1C70")]
	private string GetValueForTextOnlyColums(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x45E1F40", Offset = "0x45E1F40", VA = "0x45E1F40")]
	private string GetInitialTextFromNodes(ref XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x45E2210", Offset = "0x45E2210", VA = "0x45E2210")]
	private DataColumn GetTextOnlyColumn(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x45E19E0", Offset = "0x45E19E0", VA = "0x45E19E0")]
	internal DataRow GetRowFromElement(XmlElement e)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x45E22D0", Offset = "0x45E22D0", VA = "0x45E22D0")]
	internal bool FColumnElement(XmlElement e)
	{
		return default(bool);
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x45E1BF0", Offset = "0x45E1BF0", VA = "0x45E1BF0")]
	private bool FExcludedNamespace(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x45E23B0", Offset = "0x45E23B0", VA = "0x45E23B0")]
	private bool FIgnoreNamespace(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x45E26E0", Offset = "0x45E26E0", VA = "0x45E26E0")]
	private bool FIgnoreNamespace(XmlReader node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x45E1F00", Offset = "0x45E1F00", VA = "0x45E1F00")]
	internal bool IsTextLikeNode(XmlNodeType n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x45E22A0", Offset = "0x45E22A0", VA = "0x45E22A0")]
	internal bool IsTextOnly(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x45E2760", Offset = "0x45E2760", VA = "0x45E2760")]
	internal void LoadData(XmlDocument xdoc)
	{
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x45E2B80", Offset = "0x45E2B80", VA = "0x45E2B80")]
	private void LoadRowData(DataRow row, XmlElement rowElement)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x45E3AF0", Offset = "0x45E3AF0", VA = "0x45E3AF0")]
	private void LoadRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x45E3E90", Offset = "0x45E3E90", VA = "0x45E3E90")]
	private void SetRowValueFromXmlText(DataRow row, DataColumn col, string xmlText)
	{
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x45E3F00", Offset = "0x45E3F00", VA = "0x45E3F00")]
	private void InitNameTable()
	{
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x45E4240", Offset = "0x45E4240", VA = "0x45E4240")]
	internal void LoadData(XmlReader reader)
	{
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x45E4730", Offset = "0x45E4730", VA = "0x45E4730")]
	private void LoadTopMostTable(DataTable table)
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x45E55D0", Offset = "0x45E55D0", VA = "0x45E55D0")]
	private void LoadTable(DataTable table, bool isNested)
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x45E6700", Offset = "0x45E6700", VA = "0x45E6700")]
	private void LoadColumn(DataColumn column, object[] foundColumns)
	{
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x45E53A0", Offset = "0x45E53A0", VA = "0x45E53A0")]
	private bool ProcessXsdSchema()
	{
		return default(bool);
	}
}
