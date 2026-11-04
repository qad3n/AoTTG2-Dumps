// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Threading;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000019")]
[DesignTimeVisible(false)]
[DefaultProperty("TableName")]
[DefaultEvent("RowChanging")]
[XmlSchemaProvider("GetDataTableSchema")]
[ToolboxItem(false)]
public class DataTable : MarshalByValueComponent, IListSource, ISupportInitializeNotification, ISupportInitialize, ISerializable, IXmlSerializable
{
	[Token(Token = "0x200001A")]
	internal struct RowDiffIdUsageSection
	{
		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x0")]
		private DataTable _targetTable;

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x24E45F0", Offset = "0x24E2BF0", VA = "0x1824E45F0")]
		internal void Prepare(DataTable table)
		{
		}
	}

	[Token(Token = "0x200001B")]
	internal struct DSRowDiffIdUsageSection
	{
		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x0")]
		private DataSet _targetDS;

		[Token(Token = "0x6000306")]
		[Address(RVA = "0x24C1DC0", Offset = "0x24C03C0", VA = "0x1824C1DC0")]
		internal void Prepare(DataSet ds)
		{
		}
	}

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x20")]
	private DataSet _dataSet;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x28")]
	private DataView _defaultView;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x30")]
	internal long _nextRowID;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x38")]
	internal readonly DataRowCollection _rowCollection;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x40")]
	internal readonly DataColumnCollection _columnCollection;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x48")]
	private readonly ConstraintCollection _constraintCollection;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x50")]
	private int _elementColumnCount;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x58")]
	internal DataRelationCollection _parentRelationsCollection;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x60")]
	internal DataRelationCollection _childRelationsCollection;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x68")]
	internal readonly RecordManager _recordManager;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x70")]
	internal readonly List<Index> _indexes;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x78")]
	private List<Index> _shadowIndexes;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x80")]
	private int _shadowCount;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x88")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x90")]
	private string _tableName;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x98")]
	internal string _tableNamespace;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0xA0")]
	private string _tablePrefix;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0xA8")]
	internal DataExpression _displayExpression;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0xB0")]
	internal bool _fNestedInDataset;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0xB8")]
	private CultureInfo _culture;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0xC0")]
	private bool _cultureUserSet;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0xC8")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0xD0")]
	private CompareOptions _compareFlags;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0xD8")]
	private IFormatProvider _formatProvider;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0xE0")]
	private StringComparer _hashCodeProvider;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0xE8")]
	private bool _caseSensitive;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0xE9")]
	private bool _caseSensitiveUserSet;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0xF0")]
	internal string _encodedTableName;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0xF8")]
	internal DataColumn _xmlText;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x100")]
	internal DataColumn _colUnique;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x108")]
	internal decimal _minOccurs;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x118")]
	internal decimal _maxOccurs;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x128")]
	internal bool _repeatableElement;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x130")]
	private object _typeName;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x138")]
	internal UniqueConstraint _primaryKey;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x140")]
	internal IndexField[] _primaryIndex;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x148")]
	private DataColumn[] _delayedSetPrimaryKey;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x150")]
	private Index _loadIndex;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x158")]
	private Index _loadIndexwithOriginalAdded;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x160")]
	private Index _loadIndexwithCurrentDeleted;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x168")]
	private int _suspendIndexEvents;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x16C")]
	private bool _inDataLoad;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x16D")]
	private bool _schemaLoading;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x16E")]
	private bool _enforceConstraints;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x16F")]
	internal bool _suspendEnforceConstraints;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x170")]
	protected internal bool fInitInProgress;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x171")]
	private bool _inLoad;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x172")]
	internal bool _fInLoadDiffgram;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x173")]
	private byte _isTypedDataTable;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x178")]
	private DataRow[] _emptyDataRowArray;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x180")]
	private PropertyDescriptorCollection _propertyDescriptorCollectionCache;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x188")]
	private DataRelation[] _nestedParentRelations;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x190")]
	internal List<DataColumn> _dependentColumns;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x198")]
	private bool _mergingData;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x1A0")]
	private DataRowChangeEventHandler _onRowChangedDelegate;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x1A8")]
	private DataRowChangeEventHandler _onRowChangingDelegate;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x1B0")]
	private DataRowChangeEventHandler _onRowDeletingDelegate;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x1B8")]
	private DataRowChangeEventHandler _onRowDeletedDelegate;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x1C0")]
	private DataColumnChangeEventHandler _onColumnChangedDelegate;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x1C8")]
	private DataColumnChangeEventHandler _onColumnChangingDelegate;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x1D0")]
	private DataTableClearEventHandler _onTableClearingDelegate;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x1D8")]
	private DataTableClearEventHandler _onTableClearedDelegate;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x1E0")]
	private DataTableNewRowEventHandler _onTableNewRowDelegate;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x1E8")]
	private PropertyChangedEventHandler _onPropertyChangingDelegate;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x1F0")]
	private EventHandler _onInitialized;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x1F8")]
	private readonly DataRowBuilder _rowBuilder;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x200")]
	internal readonly List<DataView> _delayedViews;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x208")]
	private readonly List<DataViewListener> _dataViewListeners;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x210")]
	internal Hashtable _rowDiffId;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x218")]
	internal readonly ReaderWriterLockSlim _indexesLock;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x220")]
	internal int _ukColumnPositionForInference;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x224")]
	private SerializationFormat _remotingFormat;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x228")]
	private readonly int _objectID;

	[Token(Token = "0x17000049")]
	public bool CaseSensitive
	{
		[Token(Token = "0x600023C")]
		[Address(RVA = "0x5604C0", Offset = "0x55EAC0", VA = "0x1805604C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x24BF5A0", Offset = "0x24BDBA0", VA = "0x1824BF5A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	internal bool AreIndexEventsSuspended
	{
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x24BE890", Offset = "0x24BCE90", VA = "0x1824BE890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	[Browsable(false)]
	public bool IsInitialized
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x24BEBB0", Offset = "0x24BD1B0", VA = "0x1824BEBB0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	private bool IsTypedDataTable
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x24BEBC0", Offset = "0x24BD1C0", VA = "0x1824BEBC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	internal bool SelfNested
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x24BF230", Offset = "0x24BD830", VA = "0x1824BF230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004E")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	internal List<Index> LiveIndexes
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x24BEC70", Offset = "0x24BD270", VA = "0x1824BEC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	[DefaultValue(SerializationFormat.Xml)]
	public SerializationFormat RemotingFormat
	{
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x24BF190", Offset = "0x24BD790", VA = "0x1824BF190")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x24C03C0", Offset = "0x24BE9C0", VA = "0x1824C03C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	internal int UKColumnPositionForInference
	{
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x24BF4E0", Offset = "0x24BDAE0", VA = "0x1824BF4E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x24C0B40", Offset = "0x24BF140", VA = "0x1824C0B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public DataRelationCollection ChildRelations
	{
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x24BE8A0", Offset = "0x24BCEA0", VA = "0x1824BE8A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataColumnCollection Columns
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	private CompareInfo CompareInfo
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x24BE920", Offset = "0x24BCF20", VA = "0x1824BE920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public ConstraintCollection Constraints
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public DataSet DataSet
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	[Browsable(false)]
	public DataView DefaultView
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x24BD650", Offset = "0x24BBC50", VA = "0x1824BD650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	internal string DisplayExpressionInternal
	{
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x24BE990", Offset = "0x24BCF90", VA = "0x1824BE990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	internal bool EnforceConstraints
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x24BEA50", Offset = "0x24BD050", VA = "0x1824BEA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x24BF6A0", Offset = "0x24BDCA0", VA = "0x1824BF6A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	internal bool SuspendEnforceConstraints
	{
		[Token(Token = "0x6000256")]
		[Address(RVA = "0x24BF420", Offset = "0x24BDA20", VA = "0x1824BF420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x24C05A0", Offset = "0x24BEBA0", VA = "0x1824C05A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x24BEA80", Offset = "0x24BD080", VA = "0x1824BEA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x24BEB00", Offset = "0x24BD100", VA = "0x1824BEB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public CultureInfo Locale
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x24BF6E0", Offset = "0x24BDCE0", VA = "0x1824BF6E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	[DefaultValue(50)]
	public int MinimumCapacity
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x24BED40", Offset = "0x24BD340", VA = "0x1824BED40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x24BFAF0", Offset = "0x24BE0F0", VA = "0x1824BFAF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	internal int RecordCapacity
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x24BF170", Offset = "0x24BD770", VA = "0x1824BF170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005F")]
	internal int ElementColumnCount
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x24BF650", Offset = "0x24BDC50", VA = "0x1824BF650")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public DataRelationCollection ParentRelations
	{
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x24BF080", Offset = "0x24BD680", VA = "0x1824BF080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	internal bool MergingData
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x24BED20", Offset = "0x24BD320", VA = "0x1824BED20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x24BFAD0", Offset = "0x24BE0D0", VA = "0x1824BFAD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	internal DataRelation[] NestedParentRelations
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x1D6BB50", Offset = "0x1D6A150", VA = "0x181D6BB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	internal bool SchemaLoading
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x24BF220", Offset = "0x24BD820", VA = "0x1824BF220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000064")]
	internal int NestedParentsCount
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x24BEE20", Offset = "0x24BD420", VA = "0x1824BEE20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000065")]
	[TypeConverter(typeof(PrimaryKeyTypeConverter))]
	public DataColumn[] PrimaryKey
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x24BF100", Offset = "0x24BD700", VA = "0x1824BF100")]
		get
		{
			return null;
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x24BFF10", Offset = "0x24BE510", VA = "0x1824BFF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	[Browsable(false)]
	public DataRowCollection Rows
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	[DefaultValue("")]
	[RefreshProperties(RefreshProperties.All)]
	public string TableName
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x24C05B0", Offset = "0x24BEBB0", VA = "0x1824C05B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	internal string EncodedTableName
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x24BE9C0", Offset = "0x24BCFC0", VA = "0x1824BE9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	public string Namespace
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x24BED60", Offset = "0x24BD360", VA = "0x1824BED60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x24BFB20", Offset = "0x24BE120", VA = "0x1824BFB20")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x24BFDA0", Offset = "0x24BE3A0", VA = "0x1824BFDA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	internal DataColumn XmlText
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x24C0B50", Offset = "0x24BF150", VA = "0x1824C0B50")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	internal decimal MaxOccurs
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x24BED10", Offset = "0x24BD310", VA = "0x1824BED10")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x24BFAC0", Offset = "0x24BE0C0", VA = "0x1824BFAC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	internal decimal MinOccurs
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x24BED30", Offset = "0x24BD330", VA = "0x1824BED30")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x24BFAE0", Offset = "0x24BE0E0", VA = "0x1824BFAE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public override ISite Site
	{
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x24C0440", Offset = "0x24BEA40", VA = "0x1824C0440", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	internal bool NeedColumnChangeEvents
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x24BEDE0", Offset = "0x24BD3E0", VA = "0x1824BEDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000071")]
	internal XmlQualifiedName TypeName
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x24BF430", Offset = "0x24BDA30", VA = "0x1824BF430")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x24C0B20", Offset = "0x24BF120", VA = "0x1824C0B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	internal Hashtable RowDiffId
	{
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x24BF1A0", Offset = "0x24BD7A0", VA = "0x1824BF1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	internal int ObjectID
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x24BF070", Offset = "0x24BD670", VA = "0x1824BF070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x24BE7E0", Offset = "0x24BCDE0", VA = "0x1824BE7E0", Slot = "19")]
		add
		{
		}
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x24BF4F0", Offset = "0x24BDAF0", VA = "0x1824BF4F0", Slot = "20")]
		remove
		{
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x24BE110", Offset = "0x24BC710", VA = "0x1824BE110")]
	public DataTable()
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x24BE5E0", Offset = "0x24BCBE0", VA = "0x1824BE5E0")]
	public DataTable(string tableName)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x24BE650", Offset = "0x24BCC50", VA = "0x1824BE650")]
	protected DataTable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x24B1F10", Offset = "0x24B0510", VA = "0x1824B1F10", Slot = "27")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x24BA490", Offset = "0x24B8A90", VA = "0x1824BA490")]
	private void SerializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x24AD130", Offset = "0x24AB730", VA = "0x1824AD130")]
	internal void DeserializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x24BAF10", Offset = "0x24B9510", VA = "0x1824BAF10")]
	internal void SerializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x24ADFF0", Offset = "0x24AC5F0", VA = "0x1824ADFF0")]
	internal void DeserializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x24B9D10", Offset = "0x24B8310", VA = "0x1824B9D10")]
	internal void SerializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x24AC630", Offset = "0x24AAC30", VA = "0x1824AC630")]
	internal void DeserializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x24BA760", Offset = "0x24B8D60", VA = "0x1824BA760")]
	internal void SerializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x24AD450", Offset = "0x24ABA50", VA = "0x1824AD450")]
	internal void DeserializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x24BA8E0", Offset = "0x24B8EE0", VA = "0x1824BA8E0")]
	internal void SerializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x24AD5D0", Offset = "0x24ABBD0", VA = "0x1824AD5D0")]
	internal void DeserializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x24ABB10", Offset = "0x24AA110", VA = "0x1824ABB10")]
	private DataRowState ConvertToRowState(BitArray bitStates, int bitIndex)
	{
		return default(DataRowState);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x24B22E0", Offset = "0x24B08E0", VA = "0x1824B22E0")]
	internal void GetRowAndColumnErrors(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x24AB840", Offset = "0x24A9E40", VA = "0x1824AB840")]
	private void ConvertToRowError(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x24B9980", Offset = "0x24B7F80", VA = "0x1824B9980")]
	internal void RestoreIndexEvents(bool forceReset)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x24BD5A0", Offset = "0x24BBBA0", VA = "0x1824BD5A0")]
	internal void SuspendIndexEvents()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x24BBC30", Offset = "0x24BA230", VA = "0x1824BBC30")]
	internal bool SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x24BD3E0", Offset = "0x24BB9E0", VA = "0x1824BD3E0")]
	internal bool ShouldSerializeCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x24B94B0", Offset = "0x24B7AB0", VA = "0x1824B94B0")]
	private void ResetConstraints()
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x24BBE80", Offset = "0x24BA480", VA = "0x1824BBE80")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x24AF3B0", Offset = "0x24AD9B0", VA = "0x1824AF3B0")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x24BBFD0", Offset = "0x24BA5D0", VA = "0x1824BBFD0")]
	internal bool SetLocaleValue(CultureInfo culture, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x24BD3F0", Offset = "0x24BB9F0", VA = "0x1824BD3F0")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x24A8BA0", Offset = "0x24A71A0", VA = "0x1824A8BA0")]
	internal void CacheNestedParent()
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x24B1370", Offset = "0x24AF970", VA = "0x1824B1370")]
	private DataRelation[] FindNestedParentRelations()
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x24B1C70", Offset = "0x24B0270", VA = "0x1824B1C70")]
	private string GetInheritedNamespace(List<DataTable> visitedTables)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x24B3790", Offset = "0x24B1D90", VA = "0x1824B3790")]
	internal bool IsNamespaceInherited()
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x24A8CA0", Offset = "0x24A72A0", VA = "0x1824A8CA0")]
	internal void CheckCascadingNamespaceConflict(string realNamespace)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x24A95F0", Offset = "0x24A7BF0", VA = "0x1824A95F0")]
	internal void CheckNamespaceValidityForNestedRelations(string realNamespace)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x24A93B0", Offset = "0x24A79B0", VA = "0x1824A93B0")]
	internal void CheckNamespaceValidityForNestedParentRelations(string ns, DataTable parentTable)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x24AEE80", Offset = "0x24AD480", VA = "0x1824AEE80")]
	internal void DoRaiseNamespaceChange()
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x24A8B90", Offset = "0x24A7190", VA = "0x1824A8B90", Slot = "28")]
	public virtual void BeginInit()
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x24AF8D0", Offset = "0x24ADED0", VA = "0x1824AF8D0", Slot = "29")]
	public virtual void EndInit()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x24BBF60", Offset = "0x24BA560", VA = "0x1824BBF60")]
	internal void SetKeyValues(DataKey key, object[] keyValues, int record)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x24B11E0", Offset = "0x24AF7E0", VA = "0x1824B11E0")]
	internal DataRow FindByIndex(Index ndx, object[] key)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x24B1280", Offset = "0x24AF880", VA = "0x1824B1280")]
	internal DataRow FindMergeTarget(DataRow row, DataKey key, Index ndx)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x24BC5C0", Offset = "0x24BABC0", VA = "0x1824BC5C0")]
	private void SetMergeRecords(DataRow row, int newRecord, int oldRecord, DataRowAction action)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x24B3830", Offset = "0x24B1E30", VA = "0x1824B3830")]
	internal DataRow MergeRow(DataRow row, DataRow targetRow, bool preserveChanges, Index idxSearch)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000289")]
	[Address(RVA = "0x24ABF10", Offset = "0x24AA510", VA = "0x1824ABF10", Slot = "30")]
	protected virtual DataTable CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x24AB410", Offset = "0x24A9A10", VA = "0x1824AB410", Slot = "31")]
	public virtual DataTable Clone()
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x24AB240", Offset = "0x24A9840", VA = "0x1824AB240")]
	internal DataTable Clone(DataSet cloneDS)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x24B2860", Offset = "0x24B0E60", VA = "0x1824B2860")]
	private DataTable IncrementalCloneTo(DataTable sourceTable, DataTable targetTable)
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x24AA0F0", Offset = "0x24A86F0", VA = "0x1824AA0F0")]
	private DataTable CloneHierarchy(DataTable sourceTable, DataSet ds, Hashtable visitedMap)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x24AA500", Offset = "0x24A8B00", VA = "0x1824AA500")]
	private DataTable CloneTo(DataTable clone, DataSet cloneDS, bool skipExpressionColumns)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x24A8850", Offset = "0x24A6E50", VA = "0x1824A8850")]
	internal void AddRow(DataRow row, int proposedID)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x24B3570", Offset = "0x24B1B70", VA = "0x1824B3570")]
	internal void InsertRow(DataRow row, int proposedID, int pos)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x24B3190", Offset = "0x24B1790", VA = "0x1824B3190")]
	internal void InsertRow(DataRow row, long proposedID, int pos, bool fireEvent)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x24A9930", Offset = "0x24A7F30", VA = "0x1824A9930")]
	internal void CheckNotModifying(DataRow row)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x24A9960", Offset = "0x24A7F60", VA = "0x1824A9960")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x24A9970", Offset = "0x24A7F70", VA = "0x1824A9970")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x24A8BD0", Offset = "0x24A71D0", VA = "0x1824A8BD0")]
	internal void CascadeAll(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x24AB420", Offset = "0x24A9A20", VA = "0x1824AB420")]
	internal void CommitRow(DataRow row)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x24AB700", Offset = "0x24A9D00", VA = "0x1824AB700")]
	internal int Compare(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x24AB570", Offset = "0x24A9B70", VA = "0x1824AB570")]
	internal int Compare(string s1, string s2, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x24B2B00", Offset = "0x24B1100", VA = "0x1824B2B00")]
	internal int IndexOf(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x24B37A0", Offset = "0x24B1DA0", VA = "0x1824B37A0")]
	internal bool IsSuffix(string s1, string s2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x24AC580", Offset = "0x24AAB80", VA = "0x1824AC580")]
	internal void DeleteRow(DataRow row)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x24B1680", Offset = "0x24AFC80", VA = "0x1824B1680")]
	internal string FormatSortString(IndexField[] indexDesc)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x24B17B0", Offset = "0x24AFDB0", VA = "0x1824B17B0")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x24B1C20", Offset = "0x24B0220", VA = "0x1824B1C20")]
	internal Index GetIndex(string sort, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x24B1A30", Offset = "0x24B0030", VA = "0x1824B1A30")]
	internal Index GetIndex(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x24BD650", Offset = "0x24BBC50", VA = "0x1824BD650", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x24B1F00", Offset = "0x24B0500", VA = "0x1824B1F00")]
	internal List<DataViewListener> GetListeners()
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x24B2760", Offset = "0x24B0D60", VA = "0x1824B2760")]
	internal int GetSpecialHashCode(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x24B2D80", Offset = "0x24B1380", VA = "0x1824B2D80")]
	internal void InsertRow(DataRow row, long proposedID)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x24B4290", Offset = "0x24B2890", VA = "0x1824B4290")]
	internal int NewRecord()
	{
		return default(int);
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x24B4890", Offset = "0x24B2E90", VA = "0x1824B4890")]
	internal int NewUninitializedRecord()
	{
		return default(int);
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x24B4310", Offset = "0x24B2910", VA = "0x1824B4310")]
	internal int NewRecord(int sourceRecord)
	{
		return default(int);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x24B4220", Offset = "0x24B2820", VA = "0x1824B4220")]
	internal DataRow NewEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x24B48B0", Offset = "0x24B2EB0", VA = "0x1824B48B0")]
	private DataRow NewUninitializedRow()
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x24B4740", Offset = "0x24B2D40", VA = "0x1824B4740")]
	public DataRow NewRow()
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x24ABBF0", Offset = "0x24AA1F0", VA = "0x1824ABBF0")]
	internal DataRow CreateEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x24B4570", Offset = "0x24B2B70", VA = "0x1824B4570")]
	private void NewRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x24B4650", Offset = "0x24B2C50", VA = "0x1824B4650")]
	internal DataRow NewRow(int record)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x24B45F0", Offset = "0x24B2BF0", VA = "0x1824B45F0", Slot = "32")]
	protected virtual DataRow NewRowFromBuilder(DataRowBuilder builder)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x24B2550", Offset = "0x24B0B50", VA = "0x1824B2550", Slot = "33")]
	protected virtual Type GetRowType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x24B43E0", Offset = "0x24B29E0", VA = "0x1824B43E0")]
	protected internal DataRow[] NewRowArray(int size)
	{
		return null;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x24B49C0", Offset = "0x24B2FC0", VA = "0x1824B49C0", Slot = "34")]
	protected internal virtual void OnColumnChanging(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x24B48F0", Offset = "0x24B2EF0", VA = "0x1824B48F0", Slot = "35")]
	protected internal virtual void OnColumnChanged(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x24B4B90", Offset = "0x24B3190", VA = "0x1824B4B90", Slot = "36")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x24B4C60", Offset = "0x24B3260", VA = "0x1824B4C60")]
	internal void OnRemoveColumnInternal(DataColumn column)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
	protected virtual void OnRemoveColumn(DataColumn column)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x24B4C80", Offset = "0x24B3280", VA = "0x1824B4C80")]
	private DataRowChangeEventArgs OnRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x24B4DE0", Offset = "0x24B33E0", VA = "0x1824B4DE0")]
	private DataRowChangeEventArgs OnRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x24B4D10", Offset = "0x24B3310", VA = "0x1824B4D10", Slot = "38")]
	protected virtual void OnRowChanged(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x24B4E70", Offset = "0x24B3470", VA = "0x1824B4E70", Slot = "39")]
	protected virtual void OnRowChanging(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x24B5010", Offset = "0x24B3610", VA = "0x1824B5010", Slot = "40")]
	protected virtual void OnRowDeleting(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x24B4F40", Offset = "0x24B3540", VA = "0x1824B4F40", Slot = "41")]
	protected virtual void OnRowDeleted(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x24B50E0", Offset = "0x24B36E0", VA = "0x1824B50E0", Slot = "42")]
	protected virtual void OnTableCleared(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x24B51B0", Offset = "0x24B37B0", VA = "0x1824B51B0", Slot = "43")]
	protected virtual void OnTableClearing(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x24B5280", Offset = "0x24B3880", VA = "0x1824B5280", Slot = "44")]
	protected virtual void OnTableNewRow(DataTableNewRowEventArgs e)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x24B4A90", Offset = "0x24B3090", VA = "0x1824B4A90")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x24B5350", Offset = "0x24B3950", VA = "0x1824B5350")]
	internal IndexField[] ParseSortString(string sortString)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x24B56E0", Offset = "0x24B3CE0", VA = "0x1824B56E0")]
	internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x24B8920", Offset = "0x24B6F20", VA = "0x1824B8920")]
	internal void RecordChanged(int record)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x24B8A90", Offset = "0x24B7090", VA = "0x1824B8A90")]
	internal void RecordChanged(int[] oldIndex, int[] newIndex)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x24B8E80", Offset = "0x24B7480", VA = "0x1824B8E80")]
	internal void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x24B8C60", Offset = "0x24B7260", VA = "0x1824B8C60")]
	internal void RecordStateChanged(int record1, DataViewRowState oldState1, DataViewRowState newState1, int record2, DataViewRowState oldState2, DataViewRowState newState2)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x24B90B0", Offset = "0x24B76B0", VA = "0x1824B90B0")]
	internal int[] RemoveRecordFromIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x24B2B90", Offset = "0x24B1190", VA = "0x1824B2B90")]
	internal int[] InsertRecordToIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x24BD400", Offset = "0x24BBA00", VA = "0x1824BD400")]
	internal void SilentlySetValue(DataRow dr, DataColumn dc, DataRowVersion version, object newValue)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x24B92F0", Offset = "0x24B78F0", VA = "0x1824B92F0")]
	internal void RemoveRow(DataRow row, bool check)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x24B96B0", Offset = "0x24B7CB0", VA = "0x1824B96B0", Slot = "45")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x24B94D0", Offset = "0x24B7AD0", VA = "0x1824B94D0")]
	internal void ResetIndexes()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x24B94E0", Offset = "0x24B7AE0", VA = "0x1824B94E0")]
	internal void ResetInternalIndexes(DataColumn column)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x24B9C70", Offset = "0x24B8270", VA = "0x1824B9C70")]
	internal void RollbackRow(DataRow row)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x24B5760", Offset = "0x24B3D60", VA = "0x1824B5760")]
	private DataRowChangeEventArgs RaiseRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x24B5A90", Offset = "0x24B4090", VA = "0x1824B5A90")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x24B58F0", Offset = "0x24B3EF0", VA = "0x1824B58F0")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction, bool fireEvent)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x24BCFB0", Offset = "0x24BB5B0", VA = "0x1824BCFB0")]
	internal void SetNewRecord(DataRow row, int proposedRecord, DataRowAction action = DataRowAction.Change, bool isInMerge = false, bool fireEvent = true, bool suppressEnsurePropertyChanged = false)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x24BC700", Offset = "0x24BAD00", VA = "0x1824BC700")]
	private void SetNewRecordWorker(DataRow row, int proposedRecord, DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged, int position, bool fireEvent, out Exception deferredException)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x24BD030", Offset = "0x24BB630", VA = "0x1824BD030")]
	internal void SetOldRecord(DataRow row, int proposedRecord)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x24B9C50", Offset = "0x24B8250", VA = "0x1824B9C50")]
	private void RestoreShadowIndexes()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x24BD300", Offset = "0x24BB900", VA = "0x1824BD300")]
	private void SetShadowIndexes()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x24BD350", Offset = "0x24BB950", VA = "0x1824BD350")]
	internal void ShadowIndexCopy()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x24BD840", Offset = "0x24BBE40", VA = "0x1824BD840", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x24BD8E0", Offset = "0x24BBEE0", VA = "0x1824BD8E0")]
	internal bool UpdatingCurrent(DataRow row, DataRowAction action)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x24A8890", Offset = "0x24A6E90", VA = "0x1824A8890")]
	internal DataColumn AddUniqueKey(int position)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x24A8880", Offset = "0x24A6E80", VA = "0x1824A8880")]
	internal DataColumn AddUniqueKey()
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x24A8790", Offset = "0x24A6D90", VA = "0x1824A8790")]
	internal DataColumn AddForeignKey(DataColumn parentKey)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x24BD8C0", Offset = "0x24BBEC0", VA = "0x1824BD8C0")]
	internal void UpdatePropertyDescriptorCollectionCache()
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x24B1FE0", Offset = "0x24B05E0", VA = "0x1824B1FE0")]
	internal PropertyDescriptorCollection GetPropertyDescriptorCollection(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x24B3F00", Offset = "0x24B2500", VA = "0x1824B3F00")]
	public void Merge(DataTable table)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x24B3F20", Offset = "0x24B2520", VA = "0x1824B3F20")]
	public void Merge(DataTable table, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x24BDD00", Offset = "0x24BC300", VA = "0x1824BDD00")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x24A92B0", Offset = "0x24A78B0", VA = "0x1824A92B0")]
	private bool CheckForClosureOnExpressions(DataTable dt, bool writeHierarchy)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x24A8F50", Offset = "0x24A7550", VA = "0x1824A8F50")]
	private bool CheckForClosureOnExpressionTables(List<DataTable> tableList)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x24BD910", Offset = "0x24BBF10", VA = "0x1824BD910")]
	public void WriteXmlSchema(XmlWriter writer, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x24B9920", Offset = "0x24B7F20", VA = "0x1824B9920")]
	private void RestoreConstraint(bool originalEnforceConstraint)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x24B3590", Offset = "0x24B1B90", VA = "0x1824B3590")]
	private bool IsEmptyXml(XmlReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x24B7A00", Offset = "0x24B6000", VA = "0x1824B7A00")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x24B5D20", Offset = "0x24B4320", VA = "0x1824B5D20")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x24B5DD0", Offset = "0x24B43D0", VA = "0x1824B5DD0")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x24B4160", Offset = "0x24B2760", VA = "0x1824B4160")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x24B6050", Offset = "0x24B4650", VA = "0x1824B6050")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x24B5E40", Offset = "0x24B4440", VA = "0x1824B5E40")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x24B69D0", Offset = "0x24B4FD0", VA = "0x1824B69D0")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x24AC2C0", Offset = "0x24AA8C0", VA = "0x1824AC2C0")]
	private void CreateTableList(DataTable currentTable, List<DataTable> tableList)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x24ABF90", Offset = "0x24AA590", VA = "0x1824ABF90")]
	private void CreateRelationList(List<DataTable> tableList, List<DataRelation> relationList)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x24B17D0", Offset = "0x24AFDD0", VA = "0x1824B17D0")]
	public static XmlSchemaComplexType GetDataTableSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x1B54740", Offset = "0x1B52D40", VA = "0x181B54740", Slot = "24")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x24B25A0", Offset = "0x24B0BA0", VA = "0x1824B25A0", Slot = "46")]
	protected virtual XmlSchema GetSchema()
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x24BD740", Offset = "0x24BBD40", VA = "0x1824BD740", Slot = "25")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x24BD7F0", Offset = "0x24BBDF0", VA = "0x1824BD7F0", Slot = "26")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x24B79E0", Offset = "0x24B5FE0", VA = "0x1824B79E0", Slot = "47")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x24A8650", Offset = "0x24A6C50", VA = "0x1824A8650")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x24B9020", Offset = "0x24B7620", VA = "0x1824B9020")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x24B0990", Offset = "0x24AEF90", VA = "0x1824B0990")]
	internal void EvaluateExpressions()
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x24B0C40", Offset = "0x24AF240", VA = "0x1824B0C40")]
	internal void EvaluateExpressions(DataRow row, DataRowAction action, List<DataRow> cachedRows)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x24B0740", Offset = "0x24AED40", VA = "0x1824B0740")]
	internal void EvaluateExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x24B05F0", Offset = "0x24AEBF0", VA = "0x1824B05F0")]
	internal void EvaluateDependentExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x24AFDA0", Offset = "0x24AE3A0", VA = "0x1824AFDA0")]
	internal void EvaluateDependentExpressions(List<DataColumn> columns, DataRow row, DataRowVersion version, List<DataRow> cachedRows)
	{
	}
}
