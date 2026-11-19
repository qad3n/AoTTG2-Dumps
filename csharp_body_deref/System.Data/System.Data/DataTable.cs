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
		[Address(RVA = "0x5E846E0", Offset = "0x5E836E0", VA = "0x5E846E0")]
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
		[Address(RVA = "0x5E80380", Offset = "0x5E7F380", VA = "0x5E80380")]
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
		[Address(RVA = "0x5E4CC80", Offset = "0x5E4BC80", VA = "0x5E4CC80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x5E4CC90", Offset = "0x5E4BC90", VA = "0x5E4CC90")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	internal bool AreIndexEventsSuspended
	{
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x5E4CD30", Offset = "0x5E4BD30", VA = "0x5E4CD30")]
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
		[Address(RVA = "0x5E4D240", Offset = "0x5E4C240", VA = "0x5E4D240", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	private bool IsTypedDataTable
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x5E4D250", Offset = "0x5E4C250", VA = "0x5E4D250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	internal bool SelfNested
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x5E4D2F0", Offset = "0x5E4C2F0", VA = "0x5E4D2F0")]
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
		[Address(RVA = "0x5E4D720", Offset = "0x5E4C720", VA = "0x5E4D720")]
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
		[Address(RVA = "0x5E4D7C0", Offset = "0x5E4C7C0", VA = "0x5E4D7C0")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x5E4D7D0", Offset = "0x5E4C7D0", VA = "0x5E4D7D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	internal int UKColumnPositionForInference
	{
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x5E4D820", Offset = "0x5E4C820", VA = "0x5E4D820")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x5E4D830", Offset = "0x5E4C830", VA = "0x5E4D830")]
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
		[Address(RVA = "0x5E4D840", Offset = "0x5E4C840", VA = "0x5E4D840")]
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
		[Address(RVA = "0x5E4D8B0", Offset = "0x5E4C8B0", VA = "0x5E4D8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	private CompareInfo CompareInfo
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x5E4D8C0", Offset = "0x5E4C8C0", VA = "0x5E4D8C0")]
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
		[Address(RVA = "0x5E4D920", Offset = "0x5E4C920", VA = "0x5E4D920")]
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
		[Address(RVA = "0x5E4D950", Offset = "0x5E4C950", VA = "0x5E4D950")]
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
		[Address(RVA = "0x5E4DA30", Offset = "0x5E4CA30", VA = "0x5E4DA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	internal string DisplayExpressionInternal
	{
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x5E4DB10", Offset = "0x5E4CB10", VA = "0x5E4DB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	internal bool EnforceConstraints
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x5E4DB40", Offset = "0x5E4CB40", VA = "0x5E4DB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x5E4DB70", Offset = "0x5E4CB70", VA = "0x5E4DB70")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	internal bool SuspendEnforceConstraints
	{
		[Token(Token = "0x6000256")]
		[Address(RVA = "0x5E4E210", Offset = "0x5E4D210", VA = "0x5E4E210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x5E4E220", Offset = "0x5E4D220", VA = "0x5E4E220")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x5E49DA0", Offset = "0x5E48DA0", VA = "0x5E49DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x5E4E230", Offset = "0x5E4D230", VA = "0x5E4E230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public CultureInfo Locale
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x5E4E2E0", Offset = "0x5E4D2E0", VA = "0x5E4E2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x5E4E2F0", Offset = "0x5E4D2F0", VA = "0x5E4E2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	[DefaultValue(50)]
	public int MinimumCapacity
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x5E4E810", Offset = "0x5E4D810", VA = "0x5E4E810")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x5E4B4A0", Offset = "0x5E4A4A0", VA = "0x5E4B4A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	internal int RecordCapacity
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x5E4E830", Offset = "0x5E4D830", VA = "0x5E4E830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005F")]
	internal int ElementColumnCount
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x5E4E850", Offset = "0x5E4D850", VA = "0x5E4E850")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x5E4E860", Offset = "0x5E4D860", VA = "0x5E4E860")]
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
		[Address(RVA = "0x5E4D6B0", Offset = "0x5E4C6B0", VA = "0x5E4D6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	internal bool MergingData
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x5E4E8A0", Offset = "0x5E4D8A0", VA = "0x5E4E8A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x5E4E8B0", Offset = "0x5E4D8B0", VA = "0x5E4E8B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	internal DataRelation[] NestedParentRelations
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x5E4E8C0", Offset = "0x5E4D8C0", VA = "0x5E4E8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	internal bool SchemaLoading
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x5E4E8D0", Offset = "0x5E4D8D0", VA = "0x5E4E8D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000064")]
	internal int NestedParentsCount
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x5E4EE70", Offset = "0x5E4DE70", VA = "0x5E4EE70")]
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
		[Address(RVA = "0x5E4F1F0", Offset = "0x5E4E1F0", VA = "0x5E4F1F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x5E4F2D0", Offset = "0x5E4E2D0", VA = "0x5E4F2D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	[Browsable(false)]
	public DataRowCollection Rows
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x5E4F800", Offset = "0x5E4E800", VA = "0x5E4F800")]
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
		[Address(RVA = "0x5E4F810", Offset = "0x5E4E810", VA = "0x5E4F810")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x5E4F820", Offset = "0x5E4E820", VA = "0x5E4F820")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	internal string EncodedTableName
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x5E4FF70", Offset = "0x5E4EF70", VA = "0x5E4FF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	public string Namespace
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x5E46EF0", Offset = "0x5E45EF0", VA = "0x5E46EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x5E499E0", Offset = "0x5E489E0", VA = "0x5E499E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5E51D60", Offset = "0x5E50D60", VA = "0x5E51D60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x5E51D70", Offset = "0x5E50D70", VA = "0x5E51D70")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	internal DataColumn XmlText
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5E51F20", Offset = "0x5E50F20", VA = "0x5E51F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x5E51F30", Offset = "0x5E50F30", VA = "0x5E51F30")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	internal decimal MaxOccurs
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x5E51FE0", Offset = "0x5E50FE0", VA = "0x5E51FE0")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x5E51FF0", Offset = "0x5E50FF0", VA = "0x5E51FF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	internal decimal MinOccurs
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x5E52000", Offset = "0x5E51000", VA = "0x5E52000")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x5E52010", Offset = "0x5E51010", VA = "0x5E52010")]
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
		[Address(RVA = "0x5E53D20", Offset = "0x5E52D20", VA = "0x5E53D20", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x5E53D30", Offset = "0x5E52D30", VA = "0x5E53D30", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x5E55E30", Offset = "0x5E54E30", VA = "0x5E55E30", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	internal bool NeedColumnChangeEvents
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x5E57FD0", Offset = "0x5E56FD0", VA = "0x5E57FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000071")]
	internal XmlQualifiedName TypeName
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x5E49D10", Offset = "0x5E48D10", VA = "0x5E49D10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x5E5B1C0", Offset = "0x5E5A1C0", VA = "0x5E5B1C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	internal Hashtable RowDiffId
	{
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x5E60BB0", Offset = "0x5E5FBB0", VA = "0x5E60BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	internal int ObjectID
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x5E60C30", Offset = "0x5E5FC30", VA = "0x5E60C30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x5E53C20", Offset = "0x5E52C20", VA = "0x5E53C20", Slot = "19")]
		add
		{
		}
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x5E53CA0", Offset = "0x5E52CA0", VA = "0x5E53CA0", Slot = "20")]
		remove
		{
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x5E44A60", Offset = "0x5E43A60", VA = "0x5E44A60")]
	public DataTable()
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x5E45080", Offset = "0x5E44080", VA = "0x5E45080")]
	public DataTable(string tableName)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x5E450F0", Offset = "0x5E440F0", VA = "0x5E450F0")]
	protected DataTable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x5E45610", Offset = "0x5E44610", VA = "0x5E45610", Slot = "27")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x5E456D0", Offset = "0x5E446D0", VA = "0x5E456D0")]
	private void SerializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x5E45290", Offset = "0x5E44290", VA = "0x5E45290")]
	internal void DeserializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x5E45A60", Offset = "0x5E44A60", VA = "0x5E45A60")]
	internal void SerializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x5E46F70", Offset = "0x5E45F70", VA = "0x5E46F70")]
	internal void DeserializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x5E4A370", Offset = "0x5E49370", VA = "0x5E4A370")]
	internal void SerializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x5E4B4C0", Offset = "0x5E4A4C0", VA = "0x5E4B4C0")]
	internal void DeserializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x5E4C260", Offset = "0x5E4B260", VA = "0x5E4C260")]
	internal void SerializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x5E4C460", Offset = "0x5E4B460", VA = "0x5E4C460")]
	internal void DeserializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x5E46800", Offset = "0x5E45800", VA = "0x5E46800")]
	internal void SerializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x5E47E20", Offset = "0x5E46E20", VA = "0x5E47E20")]
	internal void DeserializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x5E4C920", Offset = "0x5E4B920", VA = "0x5E4C920")]
	private DataRowState ConvertToRowState(BitArray bitStates, int bitIndex)
	{
		return default(DataRowState);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x5E4C650", Offset = "0x5E4B650", VA = "0x5E4C650")]
	internal void GetRowAndColumnErrors(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x5E4C9C0", Offset = "0x5E4B9C0", VA = "0x5E4C9C0")]
	private void ConvertToRowError(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x5E4CD40", Offset = "0x5E4BD40", VA = "0x5E4CD40")]
	internal void RestoreIndexEvents(bool forceReset)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x5E4D170", Offset = "0x5E4C170", VA = "0x5E4D170")]
	internal void SuspendIndexEvents()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x5E4AB00", Offset = "0x5E49B00", VA = "0x5E4AB00")]
	internal bool SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x5E4D2E0", Offset = "0x5E4C2E0", VA = "0x5E4D2E0")]
	internal bool ShouldSerializeCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x5E4D930", Offset = "0x5E4C930", VA = "0x5E4D930")]
	private void ResetConstraints()
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x5E4D960", Offset = "0x5E4C960", VA = "0x5E4D960")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x5E4DBB0", Offset = "0x5E4CBB0", VA = "0x5E4DBB0")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x5E4AE40", Offset = "0x5E49E40", VA = "0x5E4AE40")]
	internal bool SetLocaleValue(CultureInfo culture, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x5E4E800", Offset = "0x5E4D800", VA = "0x5E4E800")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x5E4E8E0", Offset = "0x5E4D8E0", VA = "0x5E4E8E0")]
	internal void CacheNestedParent()
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x5E4E910", Offset = "0x5E4D910", VA = "0x5E4E910")]
	private DataRelation[] FindNestedParentRelations()
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x5E4FFF0", Offset = "0x5E4EFF0", VA = "0x5E4FFF0")]
	private string GetInheritedNamespace(List<DataTable> visitedTables)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x5E51290", Offset = "0x5E50290", VA = "0x5E51290")]
	internal bool IsNamespaceInherited()
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x5E50290", Offset = "0x5E4F290", VA = "0x5E50290")]
	internal void CheckCascadingNamespaceConflict(string realNamespace)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x5E50720", Offset = "0x5E4F720", VA = "0x5E50720")]
	internal void CheckNamespaceValidityForNestedRelations(string realNamespace)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x5E512A0", Offset = "0x5E502A0", VA = "0x5E512A0")]
	internal void CheckNamespaceValidityForNestedParentRelations(string ns, DataTable parentTable)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x5E50BE0", Offset = "0x5E4FBE0", VA = "0x5E50BE0")]
	internal void DoRaiseNamespaceChange()
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x5E51730", Offset = "0x5E50730", VA = "0x5E51730", Slot = "28")]
	public virtual void BeginInit()
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x5E51740", Offset = "0x5E50740", VA = "0x5E51740", Slot = "29")]
	public virtual void EndInit()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x5E52020", Offset = "0x5E51020", VA = "0x5E52020")]
	internal void SetKeyValues(DataKey key, object[] keyValues, int record)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5E520A0", Offset = "0x5E510A0", VA = "0x5E520A0")]
	internal DataRow FindByIndex(Index ndx, object[] key)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x5E52130", Offset = "0x5E51130", VA = "0x5E52130")]
	internal DataRow FindMergeTarget(DataRow row, DataKey key, Index ndx)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x5E521A0", Offset = "0x5E511A0", VA = "0x5E521A0")]
	private void SetMergeRecords(DataRow row, int newRecord, int oldRecord, DataRowAction action)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x5E525A0", Offset = "0x5E515A0", VA = "0x5E525A0")]
	internal DataRow MergeRow(DataRow row, DataRow targetRow, bool preserveChanges, Index idxSearch)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000289")]
	[Address(RVA = "0x5E530A0", Offset = "0x5E520A0", VA = "0x5E530A0", Slot = "30")]
	protected virtual DataTable CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x5E53120", Offset = "0x5E52120", VA = "0x5E53120", Slot = "31")]
	public virtual DataTable Clone()
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x5E53130", Offset = "0x5E52130", VA = "0x5E53130")]
	internal DataTable Clone(DataSet cloneDS)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x5E53340", Offset = "0x5E52340", VA = "0x5E53340")]
	private DataTable IncrementalCloneTo(DataTable sourceTable, DataTable targetTable)
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x5E536A0", Offset = "0x5E526A0", VA = "0x5E536A0")]
	private DataTable CloneHierarchy(DataTable sourceTable, DataSet ds, Hashtable visitedMap)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5E48A10", Offset = "0x5E47A10", VA = "0x5E48A10")]
	private DataTable CloneTo(DataTable clone, DataSet cloneDS, bool skipExpressionColumns)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x5E53F50", Offset = "0x5E52F50", VA = "0x5E53F50")]
	internal void AddRow(DataRow row, int proposedID)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x5E53F70", Offset = "0x5E52F70", VA = "0x5E53F70")]
	internal void InsertRow(DataRow row, int proposedID, int pos)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x5E53F80", Offset = "0x5E52F80", VA = "0x5E53F80")]
	internal void InsertRow(DataRow row, long proposedID, int pos, bool fireEvent)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5E54D80", Offset = "0x5E53D80", VA = "0x5E54D80")]
	internal void CheckNotModifying(DataRow row)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5E54DA0", Offset = "0x5E53DA0", VA = "0x5E54DA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5E54DB0", Offset = "0x5E53DB0", VA = "0x5E54DB0")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x5E557F0", Offset = "0x5E547F0", VA = "0x5E557F0")]
	internal void CascadeAll(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x5E558A0", Offset = "0x5E548A0", VA = "0x5E558A0")]
	internal void CommitRow(DataRow row)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x5E55B70", Offset = "0x5E54B70", VA = "0x5E55B70")]
	internal int Compare(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x5E55B80", Offset = "0x5E54B80", VA = "0x5E55B80")]
	internal int Compare(string s1, string s2, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x5E55D10", Offset = "0x5E54D10", VA = "0x5E55D10")]
	internal int IndexOf(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x5E55DA0", Offset = "0x5E54DA0", VA = "0x5E55DA0")]
	internal bool IsSuffix(string s1, string s2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x5E55E40", Offset = "0x5E54E40", VA = "0x5E55E40")]
	internal void DeleteRow(DataRow row)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x5E55EC0", Offset = "0x5E54EC0", VA = "0x5E55EC0")]
	internal string FormatSortString(IndexField[] indexDesc)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x5E56000", Offset = "0x5E55000", VA = "0x5E56000")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x5E56020", Offset = "0x5E55020", VA = "0x5E56020")]
	internal Index GetIndex(string sort, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x5E56440", Offset = "0x5E55440", VA = "0x5E56440")]
	internal Index GetIndex(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x5E56610", Offset = "0x5E55610", VA = "0x5E56610", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x5E56620", Offset = "0x5E55620", VA = "0x5E56620")]
	internal List<DataViewListener> GetListeners()
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x5E4E710", Offset = "0x5E4D710", VA = "0x5E4E710")]
	internal int GetSpecialHashCode(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x5E52C30", Offset = "0x5E51C30", VA = "0x5E52C30")]
	internal void InsertRow(DataRow row, long proposedID)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x5E57560", Offset = "0x5E56560", VA = "0x5E57560")]
	internal int NewRecord()
	{
		return default(int);
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x5E57640", Offset = "0x5E56640", VA = "0x5E57640")]
	internal int NewUninitializedRecord()
	{
		return default(int);
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5E57570", Offset = "0x5E56570", VA = "0x5E57570")]
	internal int NewRecord(int sourceRecord)
	{
		return default(int);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x5E4C8D0", Offset = "0x5E4B8D0", VA = "0x5E4C8D0")]
	internal DataRow NewEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x5E57660", Offset = "0x5E56660", VA = "0x5E57660")]
	private DataRow NewUninitializedRow()
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x5E57710", Offset = "0x5E56710", VA = "0x5E57710")]
	public DataRow NewRow()
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x5E57860", Offset = "0x5E56860", VA = "0x5E57860")]
	internal DataRow CreateEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x5E577E0", Offset = "0x5E567E0", VA = "0x5E577E0")]
	private void NewRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x5E57690", Offset = "0x5E56690", VA = "0x5E57690")]
	internal DataRow NewRow(int record)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x5E57C70", Offset = "0x5E56C70", VA = "0x5E57C70", Slot = "32")]
	protected virtual DataRow NewRowFromBuilder(DataRowBuilder builder)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x5E57CC0", Offset = "0x5E56CC0", VA = "0x5E57CC0", Slot = "33")]
	protected virtual Type GetRowType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5E57D20", Offset = "0x5E56D20", VA = "0x5E57D20")]
	protected internal DataRow[] NewRowArray(int size)
	{
		return null;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x5E580A0", Offset = "0x5E570A0", VA = "0x5E580A0", Slot = "34")]
	protected internal virtual void OnColumnChanging(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x5E58170", Offset = "0x5E57170", VA = "0x5E58170", Slot = "35")]
	protected internal virtual void OnColumnChanged(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x5E58240", Offset = "0x5E57240", VA = "0x5E58240", Slot = "36")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5E58310", Offset = "0x5E57310", VA = "0x5E58310")]
	internal void OnRemoveColumnInternal(DataColumn column)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x5E58330", Offset = "0x5E57330", VA = "0x5E58330", Slot = "37")]
	protected virtual void OnRemoveColumn(DataColumn column)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5E55A40", Offset = "0x5E54A40", VA = "0x5E55A40")]
	private DataRowChangeEventArgs OnRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x5E55910", Offset = "0x5E54910", VA = "0x5E55910")]
	private DataRowChangeEventArgs OnRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x5E58340", Offset = "0x5E57340", VA = "0x5E58340", Slot = "38")]
	protected virtual void OnRowChanged(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x5E58410", Offset = "0x5E57410", VA = "0x5E58410", Slot = "39")]
	protected virtual void OnRowChanging(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x5E584E0", Offset = "0x5E574E0", VA = "0x5E584E0", Slot = "40")]
	protected virtual void OnRowDeleting(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x5E585B0", Offset = "0x5E575B0", VA = "0x5E585B0", Slot = "41")]
	protected virtual void OnRowDeleted(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x5E58680", Offset = "0x5E57680", VA = "0x5E58680", Slot = "42")]
	protected virtual void OnTableCleared(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x5E58750", Offset = "0x5E57750", VA = "0x5E58750", Slot = "43")]
	protected virtual void OnTableClearing(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x5E58820", Offset = "0x5E57820", VA = "0x5E58820", Slot = "44")]
	protected virtual void OnTableNewRow(DataTableNewRowEventArgs e)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x5E51C60", Offset = "0x5E50C60", VA = "0x5E51C60")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x5E56050", Offset = "0x5E55050", VA = "0x5E56050")]
	internal IndexField[] ParseSortString(string sortString)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x5E4FF00", Offset = "0x5E4EF00", VA = "0x5E4FF00")]
	internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x5E588F0", Offset = "0x5E578F0", VA = "0x5E588F0")]
	internal void RecordChanged(int record)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x5E58A80", Offset = "0x5E57A80", VA = "0x5E58A80")]
	internal void RecordChanged(int[] oldIndex, int[] newIndex)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x5E56850", Offset = "0x5E55850", VA = "0x5E56850")]
	internal void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x5E569E0", Offset = "0x5E559E0", VA = "0x5E569E0")]
	internal void RecordStateChanged(int record1, DataViewRowState oldState1, DataViewRowState newState1, int record2, DataViewRowState oldState2, DataViewRowState newState2)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x5E58D00", Offset = "0x5E57D00", VA = "0x5E58D00")]
	internal int[] RemoveRecordFromIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x5E58F00", Offset = "0x5E57F00", VA = "0x5E58F00")]
	internal int[] InsertRecordToIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5E590F0", Offset = "0x5E580F0", VA = "0x5E590F0")]
	internal void SilentlySetValue(DataRow dr, DataColumn dc, DataRowVersion version, object newValue)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x5E59EA0", Offset = "0x5E58EA0", VA = "0x5E59EA0")]
	internal void RemoveRow(DataRow row, bool check)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x5E5A040", Offset = "0x5E59040", VA = "0x5E5A040", Slot = "45")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x5E48A00", Offset = "0x5E47A00", VA = "0x5E48A00")]
	internal void ResetIndexes()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x5E5A350", Offset = "0x5E59350", VA = "0x5E5A350")]
	internal void ResetInternalIndexes(DataColumn column)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x5E5A570", Offset = "0x5E59570", VA = "0x5E5A570")]
	internal void RollbackRow(DataRow row)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x5E57260", Offset = "0x5E56260", VA = "0x5E57260")]
	private DataRowChangeEventArgs RaiseRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x5E5A610", Offset = "0x5E59610", VA = "0x5E5A610")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x5E56630", Offset = "0x5E55630", VA = "0x5E56630")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction, bool fireEvent)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x5E522B0", Offset = "0x5E512B0", VA = "0x5E522B0")]
	internal void SetNewRecord(DataRow row, int proposedRecord, DataRowAction action = DataRowAction.Change, bool isInMerge = false, bool fireEvent = true, bool suppressEnsurePropertyChanged = false)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x5E54320", Offset = "0x5E53320", VA = "0x5E54320")]
	private void SetNewRecordWorker(DataRow row, int proposedRecord, DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged, int position, bool fireEvent, out Exception deferredException)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x5E52310", Offset = "0x5E51310", VA = "0x5E52310")]
	internal void SetOldRecord(DataRow row, int proposedRecord)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x5E5A8F0", Offset = "0x5E598F0", VA = "0x5E5A8F0")]
	private void RestoreShadowIndexes()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5E4D120", Offset = "0x5E4C120", VA = "0x5E4D120")]
	private void SetShadowIndexes()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5E5A910", Offset = "0x5E59910", VA = "0x5E5A910")]
	internal void ShadowIndexCopy()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x5E5A990", Offset = "0x5E59990", VA = "0x5E5A990", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x5E5A5F0", Offset = "0x5E595F0", VA = "0x5E5A5F0")]
	internal bool UpdatingCurrent(DataRow row, DataRowAction action)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x5E5AA00", Offset = "0x5E59A00", VA = "0x5E5AA00")]
	internal DataColumn AddUniqueKey(int position)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x5E5ACA0", Offset = "0x5E59CA0", VA = "0x5E5ACA0")]
	internal DataColumn AddUniqueKey()
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x5E5ACB0", Offset = "0x5E59CB0", VA = "0x5E5ACB0")]
	internal DataColumn AddForeignKey(DataColumn parentKey)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x5E5AD50", Offset = "0x5E59D50", VA = "0x5E5AD50")]
	internal void UpdatePropertyDescriptorCollectionCache()
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x5E5AD70", Offset = "0x5E59D70", VA = "0x5E5AD70")]
	internal PropertyDescriptorCollection GetPropertyDescriptorCollection(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x5E5B1E0", Offset = "0x5E5A1E0", VA = "0x5E5B1E0")]
	public void Merge(DataTable table)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x5E5B1F0", Offset = "0x5E5A1F0", VA = "0x5E5B1F0")]
	public void Merge(DataTable table, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x5E5B470", Offset = "0x5E5A470", VA = "0x5E5B470")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x5E5B8B0", Offset = "0x5E5A8B0", VA = "0x5E5B8B0")]
	private bool CheckForClosureOnExpressions(DataTable dt, bool writeHierarchy)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x5E49E10", Offset = "0x5E48E10", VA = "0x5E49E10")]
	private bool CheckForClosureOnExpressionTables(List<DataTable> tableList)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x5E5BE10", Offset = "0x5E5AE10", VA = "0x5E5BE10")]
	public void WriteXmlSchema(XmlWriter writer, bool writeHierarchy)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x5E5C1C0", Offset = "0x5E5B1C0", VA = "0x5E5C1C0")]
	private void RestoreConstraint(bool originalEnforceConstraint)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x5E5C210", Offset = "0x5E5B210", VA = "0x5E5C210")]
	private bool IsEmptyXml(XmlReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x5E5C450", Offset = "0x5E5B450", VA = "0x5E5C450")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x5E5E410", Offset = "0x5E5D410", VA = "0x5E5E410")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x5E5E4B0", Offset = "0x5E5D4B0", VA = "0x5E5E4B0")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x5E5FC90", Offset = "0x5E5EC90", VA = "0x5E5FC90")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x5E5D770", Offset = "0x5E5C770", VA = "0x5E5D770")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x5E5FD40", Offset = "0x5E5ED40", VA = "0x5E5FD40")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x5E5E520", Offset = "0x5E5D520", VA = "0x5E5E520")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x5E5B9B0", Offset = "0x5E5A9B0", VA = "0x5E5B9B0")]
	private void CreateTableList(DataTable currentTable, List<DataTable> tableList)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x5E5FFE0", Offset = "0x5E5EFE0", VA = "0x5E5FFE0")]
	private void CreateRelationList(List<DataTable> tableList, List<DataRelation> relationList)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x5E60590", Offset = "0x5E5F590", VA = "0x5E60590")]
	public static XmlSchemaComplexType GetDataTableSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x5E607E0", Offset = "0x5E5F7E0", VA = "0x5E607E0", Slot = "24")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x5E60800", Offset = "0x5E5F800", VA = "0x5E60800", Slot = "46")]
	protected virtual XmlSchema GetSchema()
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x5E609B0", Offset = "0x5E5F9B0", VA = "0x5E609B0", Slot = "25")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x5E60B70", Offset = "0x5E5FB70", VA = "0x5E60B70", Slot = "26")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5E60BA0", Offset = "0x5E5FBA0", VA = "0x5E60BA0", Slot = "47")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x5E60C40", Offset = "0x5E5FC40", VA = "0x5E60C40")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x5E60D60", Offset = "0x5E5FD60", VA = "0x5E60D60")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x5E60DF0", Offset = "0x5E5FDF0", VA = "0x5E60DF0")]
	internal void EvaluateExpressions()
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x5E56CB0", Offset = "0x5E55CB0", VA = "0x5E56CB0")]
	internal void EvaluateExpressions(DataRow row, DataRowAction action, List<DataRow> cachedRows)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x5E61170", Offset = "0x5E60170", VA = "0x5E61170")]
	internal void EvaluateExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x5E55690", Offset = "0x5E54690", VA = "0x5E55690")]
	internal void EvaluateDependentExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x5E59250", Offset = "0x5E58250", VA = "0x5E59250")]
	internal void EvaluateDependentExpressions(List<DataColumn> columns, DataRow row, DataRowVersion version, List<DataRow> cachedRows)
	{
	}
}
