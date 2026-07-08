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
		[Address(RVA = "0x42A3F60", Offset = "0x42A3F60", VA = "0x42A3F60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000837")]
		[Address(RVA = "0x42A3F70", Offset = "0x42A3F70", VA = "0x42A3F70")]
		set
		{
		}
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x42A3C60", Offset = "0x42A3C60", VA = "0x42A3C60")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x42A3CF0", Offset = "0x42A3CF0", VA = "0x42A3CF0")]
	internal XmlDataLoader(DataSet dataset, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x42A3DD0", Offset = "0x42A3DD0", VA = "0x42A3DD0")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x42A3E70", Offset = "0x42A3E70", VA = "0x42A3E70")]
	internal XmlDataLoader(DataTable datatable, bool IsXdr, XmlElement topNode, bool ignoreSchema)
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x42A3F80", Offset = "0x42A3F80", VA = "0x42A3F80")]
	private void AttachRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x42A4310", Offset = "0x42A4310", VA = "0x42A4310")]
	private int CountNonNSAttributes(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x42A4510", Offset = "0x42A4510", VA = "0x42A4510")]
	private string GetValueForTextOnlyColums(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x42A47E0", Offset = "0x42A47E0", VA = "0x42A47E0")]
	private string GetInitialTextFromNodes(ref XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x42A4AB0", Offset = "0x42A4AB0", VA = "0x42A4AB0")]
	private DataColumn GetTextOnlyColumn(DataRow row)
	{
		return null;
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x42A4280", Offset = "0x42A4280", VA = "0x42A4280")]
	internal DataRow GetRowFromElement(XmlElement e)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x42A4B70", Offset = "0x42A4B70", VA = "0x42A4B70")]
	internal bool FColumnElement(XmlElement e)
	{
		return default(bool);
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x42A4490", Offset = "0x42A4490", VA = "0x42A4490")]
	private bool FExcludedNamespace(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x42A4C50", Offset = "0x42A4C50", VA = "0x42A4C50")]
	private bool FIgnoreNamespace(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x42A4F80", Offset = "0x42A4F80", VA = "0x42A4F80")]
	private bool FIgnoreNamespace(XmlReader node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x42A47A0", Offset = "0x42A47A0", VA = "0x42A47A0")]
	internal bool IsTextLikeNode(XmlNodeType n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x42A4B40", Offset = "0x42A4B40", VA = "0x42A4B40")]
	internal bool IsTextOnly(DataColumn c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x42A5000", Offset = "0x42A5000", VA = "0x42A5000")]
	internal void LoadData(XmlDocument xdoc)
	{
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x42A5420", Offset = "0x42A5420", VA = "0x42A5420")]
	private void LoadRowData(DataRow row, XmlElement rowElement)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x42A6390", Offset = "0x42A6390", VA = "0x42A6390")]
	private void LoadRows(DataRow parentRow, XmlNode parentElement)
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x42A6730", Offset = "0x42A6730", VA = "0x42A6730")]
	private void SetRowValueFromXmlText(DataRow row, DataColumn col, string xmlText)
	{
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x42A67A0", Offset = "0x42A67A0", VA = "0x42A67A0")]
	private void InitNameTable()
	{
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x42A6AE0", Offset = "0x42A6AE0", VA = "0x42A6AE0")]
	internal void LoadData(XmlReader reader)
	{
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x42A6FD0", Offset = "0x42A6FD0", VA = "0x42A6FD0")]
	private void LoadTopMostTable(DataTable table)
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x42A7E70", Offset = "0x42A7E70", VA = "0x42A7E70")]
	private void LoadTable(DataTable table, bool isNested)
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x42A8FA0", Offset = "0x42A8FA0", VA = "0x42A8FA0")]
	private void LoadColumn(DataColumn column, object[] foundColumns)
	{
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x42A7C40", Offset = "0x42A7C40", VA = "0x42A7C40")]
	private bool ProcessXsdSchema()
	{
		return default(bool);
	}
}
