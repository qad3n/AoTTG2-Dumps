// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000018")]
[DefaultProperty("DataSetName")]
[XmlSchemaProvider("GetDataSetSchema")]
[XmlRoot("DataSet")]
[ToolboxItem("Microsoft.VSDesigner.Data.VS.DataSetToolboxItem, Microsoft.VSDesigner, Version=10.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
public class DataSet : MarshalByValueComponent, IListSource, IXmlSerializable, ISupportInitializeNotification, ISupportInitialize, ISerializable
{
	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x20")]
	private DataViewManager _defaultViewManager;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTableCollection _tableCollection;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x30")]
	private readonly DataRelationCollection _relationCollection;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x38")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x40")]
	private string _dataSetName;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x48")]
	private string _datasetPrefix;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x50")]
	internal string _namespaceURI;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x58")]
	private bool _enforceConstraints;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x59")]
	private bool _caseSensitive;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x60")]
	private CultureInfo _culture;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x68")]
	private bool _cultureUserSet;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x69")]
	internal bool _fInReadXml;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x6A")]
	internal bool _fInLoadDiffgram;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x6B")]
	internal bool _fTopLevelTable;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x6C")]
	internal bool _fInitInProgress;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x6D")]
	internal bool _fEnableCascading;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x6E")]
	internal bool _fIsSchemaLoading;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x70")]
	internal string _mainTableName;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x78")]
	private SerializationFormat _remotingFormat;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x80")]
	private object _defaultViewManagerLock;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x88")]
	private readonly int _objectID;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x8")]
	private static XmlSchemaComplexType s_schemaTypeForWSDL;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x8C")]
	internal bool _useDataSetSchemaOnly;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x8D")]
	internal bool _udtIsWrapped;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x90")]
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x98")]
	[CompilerGenerated]
	private MergeFailedEventHandler MergeFailed;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0xA0")]
	[CompilerGenerated]
	private DataRowCreatedEventHandler DataRowCreated;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0xA8")]
	[CompilerGenerated]
	private DataSetClearEventhandler ClearFunctionCalled;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0xB0")]
	[CompilerGenerated]
	private EventHandler m_Initialized;

	[Token(Token = "0x17000038")]
	[DefaultValue(SerializationFormat.Xml)]
	public SerializationFormat RemotingFormat
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x24D47F0", Offset = "0x24D2DF0", VA = "0x1824D47F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual SchemaSerializationMode SchemaSerializationMode
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "27")]
		get
		{
			return default(SchemaSerializationMode);
		}
	}

	[Token(Token = "0x1700003A")]
	[DefaultValue(false)]
	public bool CaseSensitive
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x1A21E30", Offset = "0x1A20430", VA = "0x181A21E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x24D3CA0", Offset = "0x24D22A0", VA = "0x1824D3CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003C")]
	[Browsable(false)]
	public DataViewManager DefaultViewManager
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x24D3A80", Offset = "0x24D2080", VA = "0x1824D3A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	[DefaultValue(true)]
	public bool EnforceConstraints
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x24D4070", Offset = "0x24D2670", VA = "0x1824D4070")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	[DefaultValue("")]
	public string DataSetName
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x24D3F00", Offset = "0x24D2500", VA = "0x1824D3F00")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	[DefaultValue("")]
	public string Namespace
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x24D4320", Offset = "0x24D2920", VA = "0x1824D4320")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x24D46D0", Offset = "0x24D2CD0", VA = "0x1824D46D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x24D3B80", Offset = "0x24D2180", VA = "0x1824D3B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	[Browsable(false)]
	public bool IsInitialized
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x24D3BF0", Offset = "0x24D21F0", VA = "0x1824D3BF0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000043")]
	public CultureInfo Locale
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x24D41B0", Offset = "0x24D27B0", VA = "0x1824D41B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public override ISite Site
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x24D48C0", Offset = "0x24D2EC0", VA = "0x1824D48C0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataRelationCollection Relations
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000046")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataTableCollection Tables
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	internal string MainTableName
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000229")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	internal int ObjectID
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x24D39E0", Offset = "0x24D1FE0", VA = "0x1824D39E0", Slot = "22")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x24D3C00", Offset = "0x24D2200", VA = "0x1824D3C00", Slot = "23")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x24D3500", Offset = "0x24D1B00", VA = "0x1824D3500")]
	public DataSet()
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x24D39B0", Offset = "0x24D1FB0", VA = "0x1824D39B0")]
	public DataSet(string dataSetName)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x24D3980", Offset = "0x24D1F80", VA = "0x1824D3980")]
	protected DataSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x24D3790", Offset = "0x24D1D90", VA = "0x1824D3790")]
	protected DataSet(SerializationInfo info, StreamingContext context, bool ConstructSchema)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x24CB8C0", Offset = "0x24C9EC0", VA = "0x1824CB8C0", Slot = "28")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "29")]
	protected virtual void InitializeDerivedDataSet()
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x24D0E00", Offset = "0x24CF400", VA = "0x1824D0E00")]
	private void SerializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x24CA2A0", Offset = "0x24C88A0", VA = "0x1824CA2A0")]
	internal void DeserializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x24C9DC0", Offset = "0x24C83C0", VA = "0x1824C9DC0")]
	private void DeserializeDataSetSchema(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x24C9970", Offset = "0x24C7F70", VA = "0x1824C9970")]
	private void DeserializeDataSetData(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x24D0C60", Offset = "0x24CF260", VA = "0x1824D0C60")]
	private void SerializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x24C9B20", Offset = "0x24C8120", VA = "0x1824C9B20")]
	private void DeserializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x24D16D0", Offset = "0x24CFCD0", VA = "0x1824D16D0")]
	private void SerializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x24CA480", Offset = "0x24C8A80", VA = "0x1824CA480")]
	private void DeserializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x24CB440", Offset = "0x24C9A40", VA = "0x1824CB440")]
	internal void FailedEnableConstraints()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
	internal void RestoreEnforceConstraints(bool value)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x24CAB60", Offset = "0x24C9160", VA = "0x1824CAB60")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x24D1BE0", Offset = "0x24D01E0", VA = "0x1824D1BE0")]
	internal void SetLocaleValue(CultureInfo value, bool userSet)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x24C88C0", Offset = "0x24C6EC0", VA = "0x1824C88C0", Slot = "24")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x24CB100", Offset = "0x24C9700", VA = "0x1824CB100", Slot = "25")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x24C88D0", Offset = "0x24C6ED0", VA = "0x1824C88D0")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x24C8A90", Offset = "0x24C7090", VA = "0x1824C8A90", Slot = "30")]
	public virtual DataSet Clone()
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x24CB2F0", Offset = "0x24C98F0", VA = "0x1824CB2F0")]
	internal int EstimatedXmlStringSize()
	{
		return default(int);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x24D2290", Offset = "0x24D0890", VA = "0x1824D2290", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x24CB8F0", Offset = "0x24C9EF0", VA = "0x1824CB8F0")]
	internal string GetRemotingDiffGram(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x24CBA10", Offset = "0x24CA010", VA = "0x1824CBA10")]
	internal string GetXmlSchemaForRemoting(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x24CDD70", Offset = "0x24CC370", VA = "0x1824CDD70")]
	public void ReadXmlSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x24CDD80", Offset = "0x24CC380", VA = "0x1824CDD80")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x24B4160", Offset = "0x24B2760", VA = "0x1824B4160")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x24CC400", Offset = "0x24CAA00", VA = "0x1824CC400")]
	private static void MoveToElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x24B5D20", Offset = "0x24B4320", VA = "0x1824B5D20")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x24CC900", Offset = "0x24CAF00", VA = "0x1824CC900")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x24CC7A0", Offset = "0x24CADA0", VA = "0x1824CC7A0")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x24D30D0", Offset = "0x24D16D0", VA = "0x1824D30D0")]
	private void WriteXmlSchema(XmlWriter writer, SchemaFormat schemaFormat, Converter<Type, string> multipleTargetConverter)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x24D09D0", Offset = "0x24CEFD0", VA = "0x1824D09D0")]
	public XmlReadMode ReadXml(XmlReader reader)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x24CF7F0", Offset = "0x24CDDF0", VA = "0x1824CF7F0")]
	internal XmlReadMode ReadXml(XmlReader reader, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x24CBBA0", Offset = "0x24CA1A0", VA = "0x1824CBBA0")]
	internal void InferSchema(XmlDocument xdoc, string[] excludedNamespaces, XmlReadMode mode)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x24CBE90", Offset = "0x24CA490", VA = "0x1824CBE90")]
	private bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x24CCC30", Offset = "0x24CB230", VA = "0x1824CCC30")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x24CEA00", Offset = "0x24CD000", VA = "0x1824CEA00")]
	public XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x24CEA20", Offset = "0x24CD020", VA = "0x1824CEA20")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x24D32E0", Offset = "0x24D18E0", VA = "0x1824D32E0")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x24CC060", Offset = "0x24CA660", VA = "0x1824CC060")]
	public void Merge(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x24CC1C0", Offset = "0x24CA7C0", VA = "0x1824CC1C0")]
	public void Merge(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x24CC5C0", Offset = "0x24CABC0", VA = "0x1824CC5C0", Slot = "31")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x24CC540", Offset = "0x24CAB40", VA = "0x1824CC540")]
	internal void OnMergeFailed(MergeFailedEventArgs mfevent)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x24CC630", Offset = "0x24CAC30", VA = "0x1824CC630")]
	internal void RaiseMergeFailed(DataTable table, string conflict, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x24CC4A0", Offset = "0x24CAAA0", VA = "0x1824CC4A0")]
	internal void OnDataRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x24CC480", Offset = "0x24CAA80", VA = "0x1824CC480")]
	internal void OnClearFunctionCalled(DataTable table)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x24CC4C0", Offset = "0x24CAAC0", VA = "0x1824CC4C0")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "32")]
	protected internal virtual void OnRemoveTable(DataTable table)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x24CC600", Offset = "0x24CAC00", VA = "0x1824CC600")]
	internal void OnRemovedTable(DataTable table)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "33")]
	protected virtual void OnRemoveRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x24CC5E0", Offset = "0x24CABE0", VA = "0x1824CC5E0")]
	internal void OnRemoveRelationHack(DataRelation relation)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x24CC720", Offset = "0x24CAD20", VA = "0x1824CC720")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x24D2610", Offset = "0x24D0C10", VA = "0x1824D2610")]
	internal DataTable[] TopLevelTables()
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x24D2620", Offset = "0x24D0C20", VA = "0x1824D2620")]
	internal DataTable[] TopLevelTables(bool forSchema)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x24D09E0", Offset = "0x24CEFE0", VA = "0x1824D09E0", Slot = "34")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x24D2850", Offset = "0x24D0E50", VA = "0x1824D2850")]
	internal bool ValidateCaseConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x24D2C50", Offset = "0x24D1250", VA = "0x1824D2C50")]
	internal bool ValidateLocaleConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x24CB480", Offset = "0x24C9A80", VA = "0x1824CB480")]
	internal DataTable FindTable(DataTable baseTable, PropertyDescriptor[] props, int propStart)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x24CE6D0", Offset = "0x24CCCD0", VA = "0x1824CE6D0", Slot = "35")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x24CB5F0", Offset = "0x24C9BF0", VA = "0x1824CB5F0")]
	public static XmlSchemaComplexType GetDataSetSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x24D22A0", Offset = "0x24D08A0", VA = "0x1824D22A0", Slot = "18")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x24D2460", Offset = "0x24D0A60", VA = "0x1824D2460", Slot = "19")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x24D25C0", Offset = "0x24D0BC0", VA = "0x1824D25C0", Slot = "20")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}
}
