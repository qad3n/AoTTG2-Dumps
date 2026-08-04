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
		[Address(RVA = "0x457FB20", Offset = "0x457FB20", VA = "0x457FB20")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x457FB30", Offset = "0x457FB30", VA = "0x457FB30")]
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
		[Address(RVA = "0x457FCE0", Offset = "0x457FCE0", VA = "0x457FCE0", Slot = "27")]
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
		[Address(RVA = "0x4583E10", Offset = "0x4583E10", VA = "0x4583E10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4583E20", Offset = "0x4583E20", VA = "0x4583E20")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x45846B0", Offset = "0x45846B0", VA = "0x45846B0", Slot = "16")]
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
		[Address(RVA = "0x45846C0", Offset = "0x45846C0", VA = "0x45846C0")]
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
		[Address(RVA = "0x45847F0", Offset = "0x45847F0", VA = "0x45847F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x4583C50", Offset = "0x4583C50", VA = "0x4583C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	[DefaultValue("")]
	public string DataSetName
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x45851E0", Offset = "0x45851E0", VA = "0x45851E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x457F950", Offset = "0x457F950", VA = "0x457F950")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	[DefaultValue("")]
	public string Namespace
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x4585260", Offset = "0x4585260", VA = "0x4585260")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x4585270", Offset = "0x4585270", VA = "0x4585270")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x4585B10", Offset = "0x4585B10", VA = "0x4585B10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x4585B20", Offset = "0x4585B20", VA = "0x4585B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x4583AD0", Offset = "0x4583AD0", VA = "0x4583AD0")]
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
		[Address(RVA = "0x4585CD0", Offset = "0x4585CD0", VA = "0x4585CD0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000096")]
	public CultureInfo Locale
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4585CE0", Offset = "0x4585CE0", VA = "0x4585CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4585CF0", Offset = "0x4585CF0", VA = "0x4585CF0")]
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
		[Address(RVA = "0x4586F00", Offset = "0x4586F00", VA = "0x4586F00", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x4586F10", Offset = "0x4586F10", VA = "0x4586F10", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataRelationCollection Relations
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x4587130", Offset = "0x4587130", VA = "0x4587130")]
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
		[Address(RVA = "0x4587140", Offset = "0x4587140", VA = "0x4587140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	internal string MainTableName
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x4590200", Offset = "0x4590200", VA = "0x4590200")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x4590210", Offset = "0x4590210", VA = "0x4590210")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	internal int ObjectID
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x4590220", Offset = "0x4590220", VA = "0x4590220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000006")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x4587150", Offset = "0x4587150", VA = "0x4587150", Slot = "22")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x45871F0", Offset = "0x45871F0", VA = "0x45871F0", Slot = "23")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x457F530", Offset = "0x457F530", VA = "0x457F530")]
	public DataSet()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x457F930", Offset = "0x457F930", VA = "0x457F930")]
	public DataSet(string dataSetName)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x457FCF0", Offset = "0x457FCF0", VA = "0x457FCF0")]
	protected DataSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x457FD00", Offset = "0x457FD00", VA = "0x457FD00")]
	protected DataSet(SerializationInfo info, StreamingContext context, bool ConstructSchema)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x457FF40", Offset = "0x457FF40", VA = "0x457FF40", Slot = "28")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4580580", Offset = "0x4580580", VA = "0x4580580", Slot = "29")]
	protected virtual void InitializeDerivedDataSet()
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x457FF50", Offset = "0x457FF50", VA = "0x457FF50")]
	private void SerializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x457FF00", Offset = "0x457FF00", VA = "0x457FF00")]
	internal void DeserializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4581430", Offset = "0x4581430", VA = "0x4581430")]
	private void DeserializeDataSetSchema(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x45818E0", Offset = "0x45818E0", VA = "0x45818E0")]
	private void DeserializeDataSetData(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x4580590", Offset = "0x4580590", VA = "0x4580590")]
	private void SerializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4581A60", Offset = "0x4581A60", VA = "0x4581A60")]
	private void DeserializeDataSetProperties(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x4580730", Offset = "0x4580730", VA = "0x4580730")]
	private void SerializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4581FC0", Offset = "0x4581FC0", VA = "0x4581FC0")]
	private void DeserializeRelations(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4583C20", Offset = "0x4583C20", VA = "0x4583C20")]
	internal void FailedEnableConstraints()
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x45851D0", Offset = "0x45851D0", VA = "0x45851D0")]
	internal void RestoreEnforceConstraints(bool value)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x4584800", Offset = "0x4584800", VA = "0x4584800")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x4585EF0", Offset = "0x4585EF0", VA = "0x4585EF0")]
	internal void SetLocaleValue(CultureInfo value, bool userSet)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x4586EF0", Offset = "0x4586EF0", VA = "0x4586EF0")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4587290", Offset = "0x4587290", VA = "0x4587290", Slot = "24")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x45872A0", Offset = "0x45872A0", VA = "0x45872A0", Slot = "25")]
	public void EndInit()
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x45875B0", Offset = "0x45875B0", VA = "0x45875B0")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x4587840", Offset = "0x4587840", VA = "0x4587840", Slot = "30")]
	public virtual DataSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4581060", Offset = "0x4581060", VA = "0x4581060")]
	internal int EstimatedXmlStringSize()
	{
		return default(int);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x4588C50", Offset = "0x4588C50", VA = "0x4588C50", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x4588C60", Offset = "0x4588C60", VA = "0x4588C60")]
	internal string GetRemotingDiffGram(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4580EC0", Offset = "0x4580EC0", VA = "0x4580EC0")]
	internal string GetXmlSchemaForRemoting(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4588D80", Offset = "0x4588D80", VA = "0x4588D80")]
	public void ReadXmlSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4582B60", Offset = "0x4582B60", VA = "0x4582B60")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4589270", Offset = "0x4589270", VA = "0x4589270")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4589840", Offset = "0x4589840", VA = "0x4589840")]
	private static void MoveToElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4589320", Offset = "0x4589320", VA = "0x4589320")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4588ED0", Offset = "0x4588ED0", VA = "0x4588ED0")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4588D90", Offset = "0x4588D90", VA = "0x4588D90")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x45898C0", Offset = "0x45898C0", VA = "0x45898C0")]
	private void WriteXmlSchema(XmlWriter writer, SchemaFormat schemaFormat, Converter<Type, string> multipleTargetConverter)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4589B30", Offset = "0x4589B30", VA = "0x4589B30")]
	public XmlReadMode ReadXml(XmlReader reader)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4589B40", Offset = "0x4589B40", VA = "0x4589B40")]
	internal XmlReadMode ReadXml(XmlReader reader, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x45893C0", Offset = "0x45893C0", VA = "0x45893C0")]
	internal void InferSchema(XmlDocument xdoc, string[] excludedNamespaces, XmlReadMode mode)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x458CE80", Offset = "0x458CE80", VA = "0x458CE80")]
	private bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x458B120", Offset = "0x458B120", VA = "0x458B120")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4583AC0", Offset = "0x4583AC0", VA = "0x4583AC0")]
	public XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x458D3A0", Offset = "0x458D3A0", VA = "0x458D3A0")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x45811C0", Offset = "0x45811C0", VA = "0x45811C0")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x458D210", Offset = "0x458D210", VA = "0x458D210")]
	public void Merge(DataSet dataSet)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x458E690", Offset = "0x458E690", VA = "0x458E690")]
	public void Merge(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x458E940", Offset = "0x458E940", VA = "0x458E940", Slot = "31")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x458E970", Offset = "0x458E970", VA = "0x458E970")]
	internal void OnMergeFailed(MergeFailedEventArgs mfevent)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x458E9D0", Offset = "0x458E9D0", VA = "0x458E9D0")]
	internal void RaiseMergeFailed(DataTable table, string conflict, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x458EAB0", Offset = "0x458EAB0", VA = "0x458EAB0")]
	internal void OnDataRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4587810", Offset = "0x4587810", VA = "0x4587810")]
	internal void OnClearFunctionCalled(DataTable table)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4587530", Offset = "0x4587530", VA = "0x4587530")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x458EAE0", Offset = "0x458EAE0", VA = "0x458EAE0", Slot = "32")]
	protected internal virtual void OnRemoveTable(DataTable table)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x458EAF0", Offset = "0x458EAF0", VA = "0x458EAF0")]
	internal void OnRemovedTable(DataTable table)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x458EB20", Offset = "0x458EB20", VA = "0x458EB20", Slot = "33")]
	protected virtual void OnRemoveRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4578EC0", Offset = "0x4578EC0", VA = "0x4578EC0")]
	internal void OnRemoveRelationHack(DataRelation relation)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x45851F0", Offset = "0x45851F0", VA = "0x45851F0")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x458EB30", Offset = "0x458EB30", VA = "0x458EB30")]
	internal DataTable[] TopLevelTables()
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x458EB40", Offset = "0x458EB40", VA = "0x458EB40")]
	internal DataTable[] TopLevelTables(bool forSchema)
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x458EFB0", Offset = "0x458EFB0", VA = "0x458EFB0", Slot = "34")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x45841C0", Offset = "0x45841C0", VA = "0x45841C0")]
	internal bool ValidateCaseConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4586970", Offset = "0x4586970", VA = "0x4586970")]
	internal bool ValidateLocaleConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x458F670", Offset = "0x458F670", VA = "0x458F670")]
	internal DataTable FindTable(DataTable baseTable, PropertyDescriptor[] props, int propStart)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x458F7A0", Offset = "0x458F7A0", VA = "0x458F7A0", Slot = "35")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x458FB20", Offset = "0x458FB20", VA = "0x458FB20")]
	public static XmlSchemaComplexType GetDataSetSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x458FDD0", Offset = "0x458FDD0", VA = "0x458FDD0", Slot = "18")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x458FF80", Offset = "0x458FF80", VA = "0x458FF80", Slot = "19")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x45901D0", Offset = "0x45901D0", VA = "0x45901D0", Slot = "20")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}
}
