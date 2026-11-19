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
		[Address(RVA = "0x5E769E0", Offset = "0x5E759E0", VA = "0x5E769E0")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x5E769F0", Offset = "0x5E759F0", VA = "0x5E769F0")]
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
		[Address(RVA = "0x5E76A80", Offset = "0x5E75A80", VA = "0x5E76A80", Slot = "27")]
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
		[Address(RVA = "0x5E79EE0", Offset = "0x5E78EE0", VA = "0x5E79EE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x5E79EF0", Offset = "0x5E78EF0", VA = "0x5E79EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x5E7A670", Offset = "0x5E79670", VA = "0x5E7A670", Slot = "16")]
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
		[Address(RVA = "0x5E7A680", Offset = "0x5E79680", VA = "0x5E7A680")]
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
		[Address(RVA = "0x5E7A7A0", Offset = "0x5E797A0", VA = "0x5E7A7A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x5E79D60", Offset = "0x5E78D60", VA = "0x5E79D60")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	[DefaultValue("")]
	public string DataSetName
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x5E7AFB0", Offset = "0x5E79FB0", VA = "0x5E7AFB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x5E76810", Offset = "0x5E75810", VA = "0x5E76810")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	[DefaultValue("")]
	public string Namespace
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x5E7B030", Offset = "0x5E7A030", VA = "0x5E7B030")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x5E7B040", Offset = "0x5E7A040", VA = "0x5E7B040")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x5E7B590", Offset = "0x5E7A590", VA = "0x5E7B590")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x5E7B5A0", Offset = "0x5E7A5A0", VA = "0x5E7B5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x5E79CC0", Offset = "0x5E78CC0", VA = "0x5E79CC0")]
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
		[Address(RVA = "0x5E7B750", Offset = "0x5E7A750", VA = "0x5E7B750", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000043")]
	public CultureInfo Locale
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x5E7B760", Offset = "0x5E7A760", VA = "0x5E7B760")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x5E7B770", Offset = "0x5E7A770", VA = "0x5E7B770")]
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
		[Address(RVA = "0x5E7C650", Offset = "0x5E7B650", VA = "0x5E7C650", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x5E7C660", Offset = "0x5E7B660", VA = "0x5E7C660", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataRelationCollection Relations
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x5E7C880", Offset = "0x5E7B880", VA = "0x5E7C880")]
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
		[Address(RVA = "0x5E7C890", Offset = "0x5E7B890", VA = "0x5E7C890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	internal string MainTableName
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x5E846B0", Offset = "0x5E836B0", VA = "0x5E846B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x5E846C0", Offset = "0x5E836C0", VA = "0x5E846C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	internal int ObjectID
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x5E846D0", Offset = "0x5E836D0", VA = "0x5E846D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x5E7C8A0", Offset = "0x5E7B8A0", VA = "0x5E7C8A0", Slot = "22")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x5E7C940", Offset = "0x5E7B940", VA = "0x5E7C940", Slot = "23")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x5E76540", Offset = "0x5E75540", VA = "0x5E76540")]
	public DataSet()
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x5E767E0", Offset = "0x5E757E0", VA = "0x5E767E0")]
	public DataSet(string dataSetName)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x5E76A90", Offset = "0x5E75A90", VA = "0x5E76A90")]
	protected DataSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x5E76AA0", Offset = "0x5E75AA0", VA = "0x5E76AA0")]
	protected DataSet(SerializationInfo info, StreamingContext context, bool ConstructSchema)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x5E76CE0", Offset = "0x5E75CE0", VA = "0x5E76CE0", Slot = "28")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x5E77320", Offset = "0x5E76320", VA = "0x5E77320", Slot = "29")]
	protected virtual void InitializeDerivedDataSet()
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x5E76CF0", Offset = "0x5E75CF0", VA = "0x5E76CF0")]
	private void SerializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x5E76CA0", Offset = "0x5E75CA0", VA = "0x5E76CA0")]
	internal void DeserializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x5E780D0", Offset = "0x5E770D0", VA = "0x5E780D0")]
	private void DeserializeDataSetSchema(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x5E78580", Offset = "0x5E77580", VA = "0x5E78580")]
	private void DeserializeDataSetData(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x5E77330", Offset = "0x5E76330", VA = "0x5E77330")]
	private void SerializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x5E78700", Offset = "0x5E77700", VA = "0x5E78700")]
	private void DeserializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x5E774D0", Offset = "0x5E764D0", VA = "0x5E774D0")]
	private void SerializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x5E78980", Offset = "0x5E77980", VA = "0x5E78980")]
	private void DeserializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x5E79D30", Offset = "0x5E78D30", VA = "0x5E79D30")]
	internal void FailedEnableConstraints()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x5E7AFA0", Offset = "0x5E79FA0", VA = "0x5E7AFA0")]
	internal void RestoreEnforceConstraints(bool value)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x5E7A7B0", Offset = "0x5E797B0", VA = "0x5E7A7B0")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x5E7B910", Offset = "0x5E7A910", VA = "0x5E7B910")]
	internal void SetLocaleValue(CultureInfo value, bool userSet)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x5E7C640", Offset = "0x5E7B640", VA = "0x5E7C640")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5E7C9E0", Offset = "0x5E7B9E0", VA = "0x5E7C9E0", Slot = "24")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5E7C9F0", Offset = "0x5E7B9F0", VA = "0x5E7C9F0", Slot = "25")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x5E7CBF0", Offset = "0x5E7BBF0", VA = "0x5E7CBF0")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x5E7CE30", Offset = "0x5E7BE30", VA = "0x5E7CE30", Slot = "30")]
	public virtual DataSet Clone()
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x5E77D60", Offset = "0x5E76D60", VA = "0x5E77D60")]
	internal int EstimatedXmlStringSize()
	{
		return default(int);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x5E7E090", Offset = "0x5E7D090", VA = "0x5E7E090", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x5E7E0A0", Offset = "0x5E7D0A0", VA = "0x5E7E0A0")]
	internal string GetRemotingDiffGram(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x5E77BD0", Offset = "0x5E76BD0", VA = "0x5E77BD0")]
	internal string GetXmlSchemaForRemoting(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5E7E1C0", Offset = "0x5E7D1C0", VA = "0x5E7E1C0")]
	public void ReadXmlSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x5E79270", Offset = "0x5E78270", VA = "0x5E79270")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x5E7E710", Offset = "0x5E7D710", VA = "0x5E7E710")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5E7EC00", Offset = "0x5E7DC00", VA = "0x5E7EC00")]
	private static void MoveToElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x5E7E7C0", Offset = "0x5E7D7C0", VA = "0x5E7E7C0")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5E7E310", Offset = "0x5E7D310", VA = "0x5E7E310")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x5E7E1D0", Offset = "0x5E7D1D0", VA = "0x5E7E1D0")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5E7EC80", Offset = "0x5E7DC80", VA = "0x5E7EC80")]
	private void WriteXmlSchema(XmlWriter writer, SchemaFormat schemaFormat, Converter<Type, string> multipleTargetConverter)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x5E7EEB0", Offset = "0x5E7DEB0", VA = "0x5E7EEB0")]
	public XmlReadMode ReadXml(XmlReader reader)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x5E7EEC0", Offset = "0x5E7DEC0", VA = "0x5E7EEC0")]
	internal XmlReadMode ReadXml(XmlReader reader, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x5E7E860", Offset = "0x5E7D860", VA = "0x5E7E860")]
	internal void InferSchema(XmlDocument xdoc, string[] excludedNamespaces, XmlReadMode mode)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x5E81B80", Offset = "0x5E80B80", VA = "0x5E81B80")]
	private bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x5E80400", Offset = "0x5E7F400", VA = "0x5E80400")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x5E79CB0", Offset = "0x5E78CB0", VA = "0x5E79CB0")]
	public XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x5E82010", Offset = "0x5E81010", VA = "0x5E82010")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x5E77EC0", Offset = "0x5E76EC0", VA = "0x5E77EC0")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x5E81E80", Offset = "0x5E80E80", VA = "0x5E81E80")]
	public void Merge(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x5E82FB0", Offset = "0x5E81FB0", VA = "0x5E82FB0")]
	public void Merge(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x5E83220", Offset = "0x5E82220", VA = "0x5E83220", Slot = "31")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x5E83250", Offset = "0x5E82250", VA = "0x5E83250")]
	internal void OnMergeFailed(MergeFailedEventArgs mfevent)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x5E832B0", Offset = "0x5E822B0", VA = "0x5E832B0")]
	internal void RaiseMergeFailed(DataTable table, string conflict, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x5E83380", Offset = "0x5E82380", VA = "0x5E83380")]
	internal void OnDataRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x5E7CE00", Offset = "0x5E7BE00", VA = "0x5E7CE00")]
	internal void OnClearFunctionCalled(DataTable table)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x5E7CB70", Offset = "0x5E7BB70", VA = "0x5E7CB70")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x5E833B0", Offset = "0x5E823B0", VA = "0x5E833B0", Slot = "32")]
	protected internal virtual void OnRemoveTable(DataTable table)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x5E833C0", Offset = "0x5E823C0", VA = "0x5E833C0")]
	internal void OnRemovedTable(DataTable table)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x5E833F0", Offset = "0x5E823F0", VA = "0x5E833F0", Slot = "33")]
	protected virtual void OnRemoveRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x5E83400", Offset = "0x5E82400", VA = "0x5E83400")]
	internal void OnRemoveRelationHack(DataRelation relation)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x5E7AFC0", Offset = "0x5E79FC0", VA = "0x5E7AFC0")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x5E83420", Offset = "0x5E82420", VA = "0x5E83420")]
	internal DataTable[] TopLevelTables()
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x5E83430", Offset = "0x5E82430", VA = "0x5E83430")]
	internal DataTable[] TopLevelTables(bool forSchema)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x5E83870", Offset = "0x5E82870", VA = "0x5E83870", Slot = "34")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x5E7A220", Offset = "0x5E79220", VA = "0x5E7A220")]
	internal bool ValidateCaseConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x5E7C150", Offset = "0x5E7B150", VA = "0x5E7C150")]
	internal bool ValidateLocaleConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x5E83B40", Offset = "0x5E82B40", VA = "0x5E83B40")]
	internal DataTable FindTable(DataTable baseTable, PropertyDescriptor[] props, int propStart)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x5E83C50", Offset = "0x5E82C50", VA = "0x5E83C50", Slot = "35")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x5E83FD0", Offset = "0x5E82FD0", VA = "0x5E83FD0")]
	public static XmlSchemaComplexType GetDataSetSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x5E84280", Offset = "0x5E83280", VA = "0x5E84280", Slot = "18")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x5E84430", Offset = "0x5E83430", VA = "0x5E84430", Slot = "19")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x5E84680", Offset = "0x5E83680", VA = "0x5E84680", Slot = "20")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}
}
