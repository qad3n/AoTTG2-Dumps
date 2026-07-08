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
[Token(Token = "0x2000037")]
[XmlRoot("DataSet")]
[ToolboxItem("Microsoft.VSDesigner.Data.VS.DataSetToolboxItem, Microsoft.VSDesigner, Version=10.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
[DefaultProperty("DataSetName")]
[XmlSchemaProvider("GetDataSetSchema")]
public class DataSet : MarshalByValueComponent, IListSource, IXmlSerializable, ISupportInitializeNotification, ISupportInitialize, ISerializable
{
	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x20")]
	private DataViewManager _defaultViewManager;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTableCollection _tableCollection;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x30")]
	private readonly DataRelationCollection _relationCollection;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x38")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x40")]
	private string _dataSetName;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x48")]
	private string _datasetPrefix;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x50")]
	internal string _namespaceURI;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x58")]
	private bool _enforceConstraints;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x59")]
	private bool _caseSensitive;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x60")]
	private CultureInfo _culture;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x68")]
	private bool _cultureUserSet;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x69")]
	internal bool _fInReadXml;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x6A")]
	internal bool _fInLoadDiffgram;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x6B")]
	internal bool _fTopLevelTable;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x6C")]
	internal bool _fInitInProgress;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x6D")]
	internal bool _fEnableCascading;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x6E")]
	internal bool _fIsSchemaLoading;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x70")]
	internal string _mainTableName;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x78")]
	private SerializationFormat _remotingFormat;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x80")]
	private object _defaultViewManagerLock;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x88")]
	private readonly int _objectID;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x8")]
	private static XmlSchemaComplexType s_schemaTypeForWSDL;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x8C")]
	internal bool _useDataSetSchemaOnly;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x8D")]
	internal bool _udtIsWrapped;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x90")]
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x98")]
	[CompilerGenerated]
	private MergeFailedEventHandler MergeFailed;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0xA0")]
	[CompilerGenerated]
	private DataRowCreatedEventHandler DataRowCreated;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0xA8")]
	[CompilerGenerated]
	private DataSetClearEventhandler ClearFunctionCalled;

	[Token(Token = "0x1700008B")]
	[DefaultValue(SerializationFormat.Xml)]
	public SerializationFormat RemotingFormat
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x42423C0", Offset = "0x42423C0", VA = "0x42423C0")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x42423D0", Offset = "0x42423D0", VA = "0x42423D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual SchemaSerializationMode SchemaSerializationMode
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4242580", Offset = "0x4242580", VA = "0x4242580", Slot = "27")]
		get
		{
			return default(SchemaSerializationMode);
		}
	}

	[Token(Token = "0x1700008D")]
	[DefaultValue(false)]
	public bool CaseSensitive
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x42466B0", Offset = "0x42466B0", VA = "0x42466B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x42466C0", Offset = "0x42466C0", VA = "0x42466C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x4246F50", Offset = "0x4246F50", VA = "0x4246F50", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008F")]
	[Browsable(false)]
	public DataViewManager DefaultViewManager
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4246F60", Offset = "0x4246F60", VA = "0x4246F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	[DefaultValue(true)]
	public bool EnforceConstraints
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4247090", Offset = "0x4247090", VA = "0x4247090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x42464F0", Offset = "0x42464F0", VA = "0x42464F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	[DefaultValue("")]
	public string DataSetName
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x4247A80", Offset = "0x4247A80", VA = "0x4247A80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x42421F0", Offset = "0x42421F0", VA = "0x42421F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	[DefaultValue("")]
	public string Namespace
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x4247B00", Offset = "0x4247B00", VA = "0x4247B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x4247B10", Offset = "0x4247B10", VA = "0x4247B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x42483B0", Offset = "0x42483B0", VA = "0x42483B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x42483C0", Offset = "0x42483C0", VA = "0x42483C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x4246370", Offset = "0x4246370", VA = "0x4246370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000095")]
	[Browsable(false)]
	public bool IsInitialized
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x4248570", Offset = "0x4248570", VA = "0x4248570", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000096")]
	public CultureInfo Locale
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4248580", Offset = "0x4248580", VA = "0x4248580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4248590", Offset = "0x4248590", VA = "0x4248590")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public override ISite Site
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x42497A0", Offset = "0x42497A0", VA = "0x42497A0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x42497B0", Offset = "0x42497B0", VA = "0x42497B0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataRelationCollection Relations
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x42499D0", Offset = "0x42499D0", VA = "0x42499D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000099")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataTableCollection Tables
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x42499E0", Offset = "0x42499E0", VA = "0x42499E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	internal string MainTableName
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x4252AA0", Offset = "0x4252AA0", VA = "0x4252AA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x4252AB0", Offset = "0x4252AB0", VA = "0x4252AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	internal int ObjectID
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x4252AC0", Offset = "0x4252AC0", VA = "0x4252AC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000006")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x42499F0", Offset = "0x42499F0", VA = "0x42499F0", Slot = "22")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x4249A90", Offset = "0x4249A90", VA = "0x4249A90", Slot = "23")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4241DD0", Offset = "0x4241DD0", VA = "0x4241DD0")]
	public DataSet()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x42421D0", Offset = "0x42421D0", VA = "0x42421D0")]
	public DataSet(string dataSetName)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x4242590", Offset = "0x4242590", VA = "0x4242590")]
	protected DataSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x42425A0", Offset = "0x42425A0", VA = "0x42425A0")]
	protected DataSet(SerializationInfo info, StreamingContext context, bool ConstructSchema)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x42427E0", Offset = "0x42427E0", VA = "0x42427E0", Slot = "28")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4242E20", Offset = "0x4242E20", VA = "0x4242E20", Slot = "29")]
	protected virtual void InitializeDerivedDataSet()
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x42427F0", Offset = "0x42427F0", VA = "0x42427F0")]
	private void SerializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x42427A0", Offset = "0x42427A0", VA = "0x42427A0")]
	internal void DeserializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4243CD0", Offset = "0x4243CD0", VA = "0x4243CD0")]
	private void DeserializeDataSetSchema(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x4244180", Offset = "0x4244180", VA = "0x4244180")]
	private void DeserializeDataSetData(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x4242E30", Offset = "0x4242E30", VA = "0x4242E30")]
	private void SerializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4244300", Offset = "0x4244300", VA = "0x4244300")]
	private void DeserializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x4242FD0", Offset = "0x4242FD0", VA = "0x4242FD0")]
	private void SerializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4244860", Offset = "0x4244860", VA = "0x4244860")]
	private void DeserializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x42464C0", Offset = "0x42464C0", VA = "0x42464C0")]
	internal void FailedEnableConstraints()
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4247A70", Offset = "0x4247A70", VA = "0x4247A70")]
	internal void RestoreEnforceConstraints(bool value)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x42470A0", Offset = "0x42470A0", VA = "0x42470A0")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x4248790", Offset = "0x4248790", VA = "0x4248790")]
	internal void SetLocaleValue(CultureInfo value, bool userSet)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x4249790", Offset = "0x4249790", VA = "0x4249790")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4249B30", Offset = "0x4249B30", VA = "0x4249B30", Slot = "24")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4249B40", Offset = "0x4249B40", VA = "0x4249B40", Slot = "25")]
	public void EndInit()
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4249E50", Offset = "0x4249E50", VA = "0x4249E50")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x424A0E0", Offset = "0x424A0E0", VA = "0x424A0E0", Slot = "30")]
	public virtual DataSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4243900", Offset = "0x4243900", VA = "0x4243900")]
	internal int EstimatedXmlStringSize()
	{
		return default(int);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x424B4F0", Offset = "0x424B4F0", VA = "0x424B4F0", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x424B500", Offset = "0x424B500", VA = "0x424B500")]
	internal string GetRemotingDiffGram(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4243760", Offset = "0x4243760", VA = "0x4243760")]
	internal string GetXmlSchemaForRemoting(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x424B620", Offset = "0x424B620", VA = "0x424B620")]
	public void ReadXmlSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4245400", Offset = "0x4245400", VA = "0x4245400")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x424BB10", Offset = "0x424BB10", VA = "0x424BB10")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x424C0E0", Offset = "0x424C0E0", VA = "0x424C0E0")]
	private static void MoveToElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x424BBC0", Offset = "0x424BBC0", VA = "0x424BBC0")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x424B770", Offset = "0x424B770", VA = "0x424B770")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x424B630", Offset = "0x424B630", VA = "0x424B630")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x424C160", Offset = "0x424C160", VA = "0x424C160")]
	private void WriteXmlSchema(XmlWriter writer, SchemaFormat schemaFormat, Converter<Type, string> multipleTargetConverter)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x424C3D0", Offset = "0x424C3D0", VA = "0x424C3D0")]
	public XmlReadMode ReadXml(XmlReader reader)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x424C3E0", Offset = "0x424C3E0", VA = "0x424C3E0")]
	internal XmlReadMode ReadXml(XmlReader reader, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x424BC60", Offset = "0x424BC60", VA = "0x424BC60")]
	internal void InferSchema(XmlDocument xdoc, string[] excludedNamespaces, XmlReadMode mode)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x424F720", Offset = "0x424F720", VA = "0x424F720")]
	private bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x424D9C0", Offset = "0x424D9C0", VA = "0x424D9C0")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4246360", Offset = "0x4246360", VA = "0x4246360")]
	public XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x424FC40", Offset = "0x424FC40", VA = "0x424FC40")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4243A60", Offset = "0x4243A60", VA = "0x4243A60")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x424FAB0", Offset = "0x424FAB0", VA = "0x424FAB0")]
	public void Merge(DataSet dataSet)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x4250F30", Offset = "0x4250F30", VA = "0x4250F30")]
	public void Merge(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x42511E0", Offset = "0x42511E0", VA = "0x42511E0", Slot = "31")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x4251210", Offset = "0x4251210", VA = "0x4251210")]
	internal void OnMergeFailed(MergeFailedEventArgs mfevent)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x4251270", Offset = "0x4251270", VA = "0x4251270")]
	internal void RaiseMergeFailed(DataTable table, string conflict, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4251350", Offset = "0x4251350", VA = "0x4251350")]
	internal void OnDataRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x424A0B0", Offset = "0x424A0B0", VA = "0x424A0B0")]
	internal void OnClearFunctionCalled(DataTable table)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4249DD0", Offset = "0x4249DD0", VA = "0x4249DD0")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4251380", Offset = "0x4251380", VA = "0x4251380", Slot = "32")]
	protected internal virtual void OnRemoveTable(DataTable table)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4251390", Offset = "0x4251390", VA = "0x4251390")]
	internal void OnRemovedTable(DataTable table)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x42513C0", Offset = "0x42513C0", VA = "0x42513C0", Slot = "33")]
	protected virtual void OnRemoveRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x423B760", Offset = "0x423B760", VA = "0x423B760")]
	internal void OnRemoveRelationHack(DataRelation relation)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4247A90", Offset = "0x4247A90", VA = "0x4247A90")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x42513D0", Offset = "0x42513D0", VA = "0x42513D0")]
	internal DataTable[] TopLevelTables()
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x42513E0", Offset = "0x42513E0", VA = "0x42513E0")]
	internal DataTable[] TopLevelTables(bool forSchema)
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4251850", Offset = "0x4251850", VA = "0x4251850", Slot = "34")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4246A60", Offset = "0x4246A60", VA = "0x4246A60")]
	internal bool ValidateCaseConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4249210", Offset = "0x4249210", VA = "0x4249210")]
	internal bool ValidateLocaleConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4251F10", Offset = "0x4251F10", VA = "0x4251F10")]
	internal DataTable FindTable(DataTable baseTable, PropertyDescriptor[] props, int propStart)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4252040", Offset = "0x4252040", VA = "0x4252040", Slot = "35")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x42523C0", Offset = "0x42523C0", VA = "0x42523C0")]
	public static XmlSchemaComplexType GetDataSetSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4252670", Offset = "0x4252670", VA = "0x4252670", Slot = "18")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4252820", Offset = "0x4252820", VA = "0x4252820", Slot = "19")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4252A70", Offset = "0x4252A70", VA = "0x4252A70", Slot = "20")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}
}
