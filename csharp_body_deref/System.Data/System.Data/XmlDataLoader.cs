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

[Token(Token = "0x200009A")]
internal sealed class XmlDataLoader
{
	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x10")]
	private DataSet _dataSet;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x18")]
	private XmlToDatasetMap _nodeToSchemaMap;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable _nodeToRowMap;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x28")]
	private Stack _childRowsStack;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x30")]
	private Hashtable _htableExcludedNS;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x38")]
	private bool _fIsXdr;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x39")]
	internal bool _isDiffgram;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x40")]
	private XmlElement _topMostNode;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x48")]
	private bool _ignoreSchema;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x50")]
	private DataTable _dataTable;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x58")]
	private bool _isTableLevel;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x59")]
	private bool _fromInference;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x60")]
	private XmlReader _dataReader;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x68")]
	private object _XSD_XMLNS_NS;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x70")]
	private object _XDR_SCHEMA;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x78")]
	private object _XDRNS;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x80")]
	private object _SQL_SYNC;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x88")]
	private object _UPDGNS;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x90")]
	private object _XSD_SCHEMA;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x98")]
	private object _XSDNS;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0xA0")]
	private object _DFFNS;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0xA8")]
	private object _MSDNS;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0xB0")]
	private object _DIFFID;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0xB8")]
	private object _HASCHANGES;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0xC0")]
	private object _ROWORDER;

	[Token(Token = "0x1700014C")]
	internal bool FromInference
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x5EE7730", Offset = "0x5EE6730", VA = "0x5EE7730")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x5EE7740", Offset = "0x5EE6740", VA = "0x5EE7740")]
		set
		{
		}
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x5EE7430", Offset = "0x5EE6430", VA = "0x5EE7430")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x5EE74C0", Offset = "0x5EE64C0", VA = "0x5EE74C0")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x5EE75A0", Offset = "0x5EE65A0", VA = "0x5EE75A0")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x5EE7640", Offset = "0x5EE6640", VA = "0x5EE7640")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x5EE7750", Offset = "0x5EE6750", VA = "0x5EE7750")]
	private void AttachRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x5EE79A0", Offset = "0x5EE69A0", VA = "0x5EE79A0")]
	private int CountNonNSAttributes(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x5EE7BA0", Offset = "0x5EE6BA0", VA = "0x5EE7BA0")]
	private string GetValueForTextOnlyColums(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x5EE7E70", Offset = "0x5EE6E70", VA = "0x5EE7E70")]
	private string GetInitialTextFromNodes(ref XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x5EE8130", Offset = "0x5EE7130", VA = "0x5EE8130")]
	private DataColumn GetTextOnlyColumn(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x5EE7910", Offset = "0x5EE6910", VA = "0x5EE7910")]
	internal DataRow GetRowFromElement(XmlElement e)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x5EE81F0", Offset = "0x5EE71F0", VA = "0x5EE81F0")]
	internal bool FColumnElement(XmlElement e)
	{
		return default(bool);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x5EE7B20", Offset = "0x5EE6B20", VA = "0x5EE7B20")]
	private bool FExcludedNamespace(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x5EE82D0", Offset = "0x5EE72D0", VA = "0x5EE82D0")]
	private bool FIgnoreNamespace(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x5EE85F0", Offset = "0x5EE75F0", VA = "0x5EE85F0")]
	private bool FIgnoreNamespace(XmlReader node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x5EE7E30", Offset = "0x5EE6E30", VA = "0x5EE7E30")]
	internal bool IsTextLikeNode(XmlNodeType n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x5EE81C0", Offset = "0x5EE71C0", VA = "0x5EE81C0")]
	internal bool IsTextOnly(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x5EE8670", Offset = "0x5EE7670", VA = "0x5EE8670")]
	internal void LoadData(XmlDocument xdoc)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x5EE8A90", Offset = "0x5EE7A90", VA = "0x5EE8A90")]
	private void LoadRowData(DataRow row, XmlElement rowElement)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x5EE97B0", Offset = "0x5EE87B0", VA = "0x5EE97B0")]
	private void LoadRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x5EE9B60", Offset = "0x5EE8B60", VA = "0x5EE9B60")]
	private void SetRowValueFromXmlText(DataRow row, DataColumn col, string xmlText)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x5EE9BD0", Offset = "0x5EE8BD0", VA = "0x5EE9BD0")]
	private void InitNameTable()
	{
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x5EE9F10", Offset = "0x5EE8F10", VA = "0x5EE9F10")]
	internal void LoadData(XmlReader reader)
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x5EEA3E0", Offset = "0x5EE93E0", VA = "0x5EEA3E0")]
	private void LoadTopMostTable(DataTable table)
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x5EEB150", Offset = "0x5EEA150", VA = "0x5EEB150")]
	private void LoadTable(DataTable table, bool isNested)
	{
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x5EEC250", Offset = "0x5EEB250", VA = "0x5EEC250")]
	private void LoadColumn(DataColumn column, object[] foundColumns)
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x5EEAF20", Offset = "0x5EE9F20", VA = "0x5EEAF20")]
	private bool ProcessXsdSchema()
	{
		return default(bool);
	}
}
