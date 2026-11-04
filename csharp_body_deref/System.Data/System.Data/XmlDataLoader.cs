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
		[Address(RVA = "0x1A21E30", Offset = "0x1A20430", VA = "0x181A21E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x1C5E470", Offset = "0x1C5CA70", VA = "0x181C5E470")]
		set
		{
		}
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x2544700", Offset = "0x2542D00", VA = "0x182544700")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x2544920", Offset = "0x2542F20", VA = "0x182544920")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x2544790", Offset = "0x2542D90", VA = "0x182544790")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x2544830", Offset = "0x2542E30", VA = "0x182544830")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x253F9D0", Offset = "0x253DFD0", VA = "0x18253F9D0")]
	private void AttachRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x253FB40", Offset = "0x253E140", VA = "0x18253FB40")]
	private int CountNonNSAttributes(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x2540520", Offset = "0x253EB20", VA = "0x182540520")]
	private string GetValueForTextOnlyColums(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x2540110", Offset = "0x253E710", VA = "0x182540110")]
	private string GetInitialTextFromNodes(ref XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x2540480", Offset = "0x253EA80", VA = "0x182540480")]
	private DataColumn GetTextOnlyColumn(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x25403E0", Offset = "0x253E9E0", VA = "0x1825403E0")]
	internal DataRow GetRowFromElement(XmlElement e)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x253FCA0", Offset = "0x253E2A0", VA = "0x18253FCA0")]
	internal bool FColumnElement(XmlElement e)
	{
		return default(bool);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x253FEE0", Offset = "0x253E4E0", VA = "0x18253FEE0")]
	private bool FExcludedNamespace(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2540000", Offset = "0x253E600", VA = "0x182540000")]
	private bool FIgnoreNamespace(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x253FF70", Offset = "0x253E570", VA = "0x18253FF70")]
	private bool FIgnoreNamespace(XmlReader node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2540AF0", Offset = "0x253F0F0", VA = "0x182540AF0")]
	internal bool IsTextLikeNode(XmlNodeType n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x2540B50", Offset = "0x253F150", VA = "0x182540B50")]
	internal bool IsTextOnly(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x25415A0", Offset = "0x253FBA0", VA = "0x1825415A0")]
	internal void LoadData(XmlDocument xdoc)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x2541C40", Offset = "0x2540240", VA = "0x182541C40")]
	private void LoadRowData(DataRow row, XmlElement rowElement)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x2542920", Offset = "0x2540F20", VA = "0x182542920")]
	private void LoadRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x25446B0", Offset = "0x2542CB0", VA = "0x1825446B0")]
	private void SetRowValueFromXmlText(DataRow row, DataColumn col, string xmlText)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x25407D0", Offset = "0x253EDD0", VA = "0x1825407D0")]
	private void InitNameTable()
	{
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2541890", Offset = "0x253FE90", VA = "0x182541890")]
	internal void LoadData(XmlReader reader)
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2543B40", Offset = "0x2542140", VA = "0x182543B40")]
	private void LoadTopMostTable(DataTable table)
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x2542CC0", Offset = "0x25412C0", VA = "0x182542CC0")]
	private void LoadTable(DataTable table, bool isNested)
	{
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2540B80", Offset = "0x253F180", VA = "0x182540B80")]
	private void LoadColumn(DataColumn column, object[] foundColumns)
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x2544470", Offset = "0x2542A70", VA = "0x182544470")]
	private bool ProcessXsdSchema()
	{
		return default(bool);
	}
}
