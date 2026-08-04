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
[Token(Token = "0x2000039")]
[XmlSchemaProvider("GetDataTableSchema")]
[DefaultEvent("RowChanging")]
[DesignTimeVisible(false)]
[DefaultProperty("TableName")]
[ToolboxItem(false)]
public class DataTable : MarshalByValueComponent, IListSource, ISupportInitializeNotification, ISupportInitialize, ISerializable, IXmlSerializable
{
	[Token(Token = "0x200003A")]
	internal struct RowDiffIdUsageSection
	{
		[Token(Token = "0x4000124")]
		[FieldOffset(Offset = "0x0")]
		private DataTable _targetTable;

		[Token(Token = "0x600049A")]
		[Address(RVA = "0x4590230", Offset = "0x4590230", VA = "0x4590230")]
		internal void Prepare(DataTable table)
		{
		}
	}

	[Token(Token = "0x200003B")]
	internal struct DSRowDiffIdUsageSection
	{
		[Token(Token = "0x4000125")]
		[FieldOffset(Offset = "0x0")]
		private DataSet _targetDS;

		[Token(Token = "0x600049B")]
		[Address(RVA = "0x458B0A0", Offset = "0x458B0A0", VA = "0x458B0A0")]
		internal void Prepare(DataSet ds)
		{
		}
	}

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x20")]
	private DataSet _dataSet;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x28")]
	private DataView _defaultView;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x30")]
	internal long _nextRowID;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x38")]
	internal readonly DataRowCollection _rowCollection;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x40")]
	internal readonly DataColumnCollection _columnCollection;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x48")]
	private readonly ConstraintCollection _constraintCollection;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x50")]
	private int _elementColumnCount;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x58")]
	internal DataRelationCollection _parentRelationsCollection;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x60")]
	internal DataRelationCollection _childRelationsCollection;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x68")]
	internal readonly RecordManager _recordManager;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x70")]
	internal readonly List<Index> _indexes;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x78")]
	private List<Index> _shadowIndexes;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x80")]
	private int _shadowCount;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x88")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x90")]
	private string _tableName;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x98")]
	internal string _tableNamespace;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0xA0")]
	private string _tablePrefix;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0xA8")]
	internal DataExpression _displayExpression;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0xB0")]
	internal bool _fNestedInDataset;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0xB8")]
	private CultureInfo _culture;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0xC0")]
	private bool _cultureUserSet;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0xC8")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0xD0")]
	private CompareOptions _compareFlags;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0xD8")]
	private IFormatProvider _formatProvider;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0xE0")]
	private StringComparer _hashCodeProvider;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0xE8")]
	private bool _caseSensitive;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0xE9")]
	private bool _caseSensitiveUserSet;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0xF0")]
	internal string _encodedTableName;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0xF8")]
	internal DataColumn _xmlText;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x100")]
	internal DataColumn _colUnique;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x108")]
	internal decimal _minOccurs;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x118")]
	internal decimal _maxOccurs;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x128")]
	internal bool _repeatableElement;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x130")]
	private object _typeName;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x138")]
	internal UniqueConstraint _primaryKey;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x140")]
	internal IndexField[] _primaryIndex;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x148")]
	private DataColumn[] _delayedSetPrimaryKey;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x150")]
	private Index _loadIndex;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x158")]
	private Index _loadIndexwithOriginalAdded;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x160")]
	private Index _loadIndexwithCurrentDeleted;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x168")]
	private int _suspendIndexEvents;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x16C")]
	private bool _inDataLoad;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x16D")]
	private bool _schemaLoading;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x16E")]
	private bool _enforceConstraints;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x16F")]
	internal bool _suspendEnforceConstraints;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x170")]
	protected internal bool fInitInProgress;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x171")]
	private bool _inLoad;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x172")]
	internal bool _fInLoadDiffgram;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x173")]
	private byte _isTypedDataTable;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x178")]
	private DataRow[] _emptyDataRowArray;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x180")]
	private PropertyDescriptorCollection _propertyDescriptorCollectionCache;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x188")]
	private DataRelation[] _nestedParentRelations;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x190")]
	internal List<DataColumn> _dependentColumns;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x198")]
	private bool _mergingData;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x1A0")]
	private DataRowChangeEventHandler _onRowChangedDelegate;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x1A8")]
	private DataRowChangeEventHandler _onRowChangingDelegate;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x1B0")]
	private DataRowChangeEventHandler _onRowDeletingDelegate;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x1B8")]
	private DataRowChangeEventHandler _onRowDeletedDelegate;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x1C0")]
	private DataColumnChangeEventHandler _onColumnChangedDelegate;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x1C8")]
	private DataColumnChangeEventHandler _onColumnChangingDelegate;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x1D0")]
	private DataTableClearEventHandler _onTableClearingDelegate;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x1D8")]
	private DataTableClearEventHandler _onTableClearedDelegate;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x1E0")]
	private DataTableNewRowEventHandler _onTableNewRowDelegate;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x1E8")]
	private PropertyChangedEventHandler _onPropertyChangingDelegate;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x1F0")]
	private EventHandler _onInitialized;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x1F8")]
	private readonly DataRowBuilder _rowBuilder;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x200")]
	internal readonly List<DataView> _delayedViews;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x208")]
	private readonly List<DataViewListener> _dataViewListeners;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x210")]
	internal Hashtable _rowDiffId;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x218")]
	internal readonly ReaderWriterLockSlim _indexesLock;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x220")]
	internal int _ukColumnPositionForInference;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x224")]
	private SerializationFormat _remotingFormat;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x228")]
	private readonly int _objectID;

	[Token(Token = "0x1700009C")]
	public bool CaseSensitive
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x455EEF0", Offset = "0x455EEF0", VA = "0x455EEF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x455EF00", Offset = "0x455EF00", VA = "0x455EF00")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	internal bool AreIndexEventsSuspended
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x455EFA0", Offset = "0x455EFA0", VA = "0x455EFA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009E")]
	[Browsable(false)]
	public bool IsInitialized
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x455F640", Offset = "0x455F640", VA = "0x455F640", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009F")]
	private bool IsTypedDataTable
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x455F650", Offset = "0x455F650", VA = "0x455F650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	internal bool SelfNested
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x455F700", Offset = "0x455F700", VA = "0x455F700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A1")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	internal List<Index> LiveIndexes
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x455FBA0", Offset = "0x455FBA0", VA = "0x455FBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	[DefaultValue(SerializationFormat.Xml)]
	public SerializationFormat RemotingFormat
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x455FC30", Offset = "0x455FC30", VA = "0x455FC30")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x455FC40", Offset = "0x455FC40", VA = "0x455FC40")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	internal int UKColumnPositionForInference
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x455FC90", Offset = "0x455FC90", VA = "0x455FC90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x455FCA0", Offset = "0x455FCA0", VA = "0x455FCA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public DataRelationCollection ChildRelations
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x455FCB0", Offset = "0x455FCB0", VA = "0x455FCB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataColumnCollection Columns
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x455FD20", Offset = "0x455FD20", VA = "0x455FD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A6")]
	private CompareInfo CompareInfo
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x455FD30", Offset = "0x455FD30", VA = "0x455FD30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public ConstraintCollection Constraints
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x455FD90", Offset = "0x455FD90", VA = "0x455FD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public DataSet DataSet
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x455FDC0", Offset = "0x455FDC0", VA = "0x455FDC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	[Browsable(false)]
	public DataView DefaultView
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x455FEB0", Offset = "0x455FEB0", VA = "0x455FEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	internal string DisplayExpressionInternal
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x455FF90", Offset = "0x455FF90", VA = "0x455FF90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	internal bool EnforceConstraints
	{
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x455FFC0", Offset = "0x455FFC0", VA = "0x455FFC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x455FFF0", Offset = "0x455FFF0", VA = "0x455FFF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	internal bool SuspendEnforceConstraints
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x4560720", Offset = "0x4560720", VA = "0x4560720")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x4560730", Offset = "0x4560730", VA = "0x4560730")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x455B980", Offset = "0x455B980", VA = "0x455B980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AE")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x4560740", Offset = "0x4560740", VA = "0x4560740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	public CultureInfo Locale
	{
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x45607F0", Offset = "0x45607F0", VA = "0x45607F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x4560800", Offset = "0x4560800", VA = "0x4560800")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	[DefaultValue(50)]
	public int MinimumCapacity
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x4560D80", Offset = "0x4560D80", VA = "0x4560D80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x455D250", Offset = "0x455D250", VA = "0x455D250")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	internal int RecordCapacity
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x4560DA0", Offset = "0x4560DA0", VA = "0x4560DA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	internal int ElementColumnCount
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x4560DC0", Offset = "0x4560DC0", VA = "0x4560DC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x4560DD0", Offset = "0x4560DD0", VA = "0x4560DD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public DataRelationCollection ParentRelations
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x455FB30", Offset = "0x455FB30", VA = "0x455FB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B4")]
	internal bool MergingData
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x4560E10", Offset = "0x4560E10", VA = "0x4560E10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x4560E20", Offset = "0x4560E20", VA = "0x4560E20")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	internal DataRelation[] NestedParentRelations
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x4560E30", Offset = "0x4560E30", VA = "0x4560E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B6")]
	internal bool SchemaLoading
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x4560E40", Offset = "0x4560E40", VA = "0x4560E40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B7")]
	internal int NestedParentsCount
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x4561450", Offset = "0x4561450", VA = "0x4561450")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B8")]
	[TypeConverter(typeof(PrimaryKeyTypeConverter))]
	public DataColumn[] PrimaryKey
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x4561840", Offset = "0x4561840", VA = "0x4561840")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x4561930", Offset = "0x4561930", VA = "0x4561930")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	[Browsable(false)]
	public DataRowCollection Rows
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x4561E40", Offset = "0x4561E40", VA = "0x4561E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	[RefreshProperties(RefreshProperties.All)]
	[DefaultValue("")]
	public string TableName
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x4561E50", Offset = "0x4561E50", VA = "0x4561E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x4561E60", Offset = "0x4561E60", VA = "0x4561E60")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	internal string EncodedTableName
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x45627D0", Offset = "0x45627D0", VA = "0x45627D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public string Namespace
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x4558580", Offset = "0x4558580", VA = "0x4558580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x455B500", Offset = "0x455B500", VA = "0x455B500")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x4564A50", Offset = "0x4564A50", VA = "0x4564A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x4564A60", Offset = "0x4564A60", VA = "0x4564A60")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	internal DataColumn XmlText
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x4564C10", Offset = "0x4564C10", VA = "0x4564C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x4564C20", Offset = "0x4564C20", VA = "0x4564C20")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	internal decimal MaxOccurs
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x4564CD0", Offset = "0x4564CD0", VA = "0x4564CD0")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x4564CE0", Offset = "0x4564CE0", VA = "0x4564CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	internal decimal MinOccurs
	{
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x4564CF0", Offset = "0x4564CF0", VA = "0x4564CF0")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x4564D00", Offset = "0x4564D00", VA = "0x4564D00")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public override ISite Site
	{
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x4566DC0", Offset = "0x4566DC0", VA = "0x4566DC0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x4566DD0", Offset = "0x4566DD0", VA = "0x4566DD0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x4569300", Offset = "0x4569300", VA = "0x4569300", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	internal bool NeedColumnChangeEvents
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x456B880", Offset = "0x456B880", VA = "0x456B880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C4")]
	internal XmlQualifiedName TypeName
	{
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x455B8F0", Offset = "0x455B8F0", VA = "0x455B8F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x456EF20", Offset = "0x456EF20", VA = "0x456EF20")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	internal Hashtable RowDiffId
	{
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x4575BE0", Offset = "0x4575BE0", VA = "0x4575BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	internal int ObjectID
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x4575C60", Offset = "0x4575C60", VA = "0x4575C60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000007")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x4566CC0", Offset = "0x4566CC0", VA = "0x4566CC0", Slot = "19")]
		add
		{
		}
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x4566D40", Offset = "0x4566D40", VA = "0x4566D40", Slot = "20")]
		remove
		{
		}
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x45560A0", Offset = "0x45560A0", VA = "0x45560A0")]
	public DataTable()
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x45566C0", Offset = "0x45566C0", VA = "0x45566C0")]
	public DataTable(string tableName)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4556740", Offset = "0x4556740", VA = "0x4556740")]
	protected DataTable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4556C60", Offset = "0x4556C60", VA = "0x4556C60", Slot = "27")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4556D20", Offset = "0x4556D20", VA = "0x4556D20")]
	private void SerializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x45568E0", Offset = "0x45568E0", VA = "0x45568E0")]
	internal void DeserializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x45570B0", Offset = "0x45570B0", VA = "0x45570B0")]
	internal void SerializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4558600", Offset = "0x4558600", VA = "0x4558600")]
	internal void DeserializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x455BFB0", Offset = "0x455BFB0", VA = "0x455BFB0")]
	internal void SerializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x455D270", Offset = "0x455D270", VA = "0x455D270")]
	internal void DeserializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x455E4A0", Offset = "0x455E4A0", VA = "0x455E4A0")]
	internal void SerializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x455E6A0", Offset = "0x455E6A0", VA = "0x455E6A0")]
	internal void DeserializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4557E80", Offset = "0x4557E80", VA = "0x4557E80")]
	internal void SerializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x45594B0", Offset = "0x45594B0", VA = "0x45594B0")]
	internal void DeserializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x455EB80", Offset = "0x455EB80", VA = "0x455EB80")]
	private DataRowState ConvertToRowState(BitArray bitStates, int bitIndex)
	{
		return default(DataRowState);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x455E8A0", Offset = "0x455E8A0", VA = "0x455E8A0")]
	internal void GetRowAndColumnErrors(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x455EC20", Offset = "0x455EC20", VA = "0x455EC20")]
	private void ConvertToRowError(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x455EFB0", Offset = "0x455EFB0", VA = "0x455EFB0")]
	internal void RestoreIndexEvents(bool forceReset)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x455F570", Offset = "0x455F570", VA = "0x455F570")]
	internal void SuspendIndexEvents()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x455C750", Offset = "0x455C750", VA = "0x455C750")]
	internal bool SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x455F6F0", Offset = "0x455F6F0", VA = "0x455F6F0")]
	internal bool ShouldSerializeCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x455FDA0", Offset = "0x455FDA0", VA = "0x455FDA0")]
	private void ResetConstraints()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x455FDD0", Offset = "0x455FDD0", VA = "0x455FDD0")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4560030", Offset = "0x4560030", VA = "0x4560030")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x455CAF0", Offset = "0x455CAF0", VA = "0x455CAF0")]
	internal bool SetLocaleValue(CultureInfo culture, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4560D70", Offset = "0x4560D70", VA = "0x4560D70")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4560E50", Offset = "0x4560E50", VA = "0x4560E50")]
	internal void CacheNestedParent()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4560E80", Offset = "0x4560E80", VA = "0x4560E80")]
	private DataRelation[] FindNestedParentRelations()
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4562850", Offset = "0x4562850", VA = "0x4562850")]
	private string GetInheritedNamespace(List<DataTable> visitedTables)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4563E40", Offset = "0x4563E40", VA = "0x4563E40")]
	internal bool IsNamespaceInherited()
	{
		return default(bool);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4562B80", Offset = "0x4562B80", VA = "0x4562B80")]
	internal void CheckCascadingNamespaceConflict(string realNamespace)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x45630D0", Offset = "0x45630D0", VA = "0x45630D0")]
	internal void CheckNamespaceValidityForNestedRelations(string realNamespace)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4563E50", Offset = "0x4563E50", VA = "0x4563E50")]
	internal void CheckNamespaceValidityForNestedParentRelations(string ns, DataTable parentTable)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4563670", Offset = "0x4563670", VA = "0x4563670")]
	internal void DoRaiseNamespaceChange()
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4564360", Offset = "0x4564360", VA = "0x4564360", Slot = "28")]
	public virtual void BeginInit()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4564370", Offset = "0x4564370", VA = "0x4564370", Slot = "29")]
	public virtual void EndInit()
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4564D10", Offset = "0x4564D10", VA = "0x4564D10")]
	internal void SetKeyValues(DataKey key, object[] keyValues, int record)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4564D90", Offset = "0x4564D90", VA = "0x4564D90")]
	internal DataRow FindByIndex(Index ndx, object[] key)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x4564E30", Offset = "0x4564E30", VA = "0x4564E30")]
	internal DataRow FindMergeTarget(DataRow row, DataKey key, Index ndx)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4564EA0", Offset = "0x4564EA0", VA = "0x4564EA0")]
	private void SetMergeRecords(DataRow row, int newRecord, int oldRecord, DataRowAction action)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4565330", Offset = "0x4565330", VA = "0x4565330")]
	internal DataRow MergeRow(DataRow row, DataRow targetRow, bool preserveChanges, Index idxSearch)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4565EC0", Offset = "0x4565EC0", VA = "0x4565EC0", Slot = "30")]
	protected virtual DataTable CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4565F40", Offset = "0x4565F40", VA = "0x4565F40", Slot = "31")]
	public virtual DataTable Clone()
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4565F50", Offset = "0x4565F50", VA = "0x4565F50")]
	internal DataTable Clone(DataSet cloneDS)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4566190", Offset = "0x4566190", VA = "0x4566190")]
	private DataTable IncrementalCloneTo(DataTable sourceTable, DataTable targetTable)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x45666C0", Offset = "0x45666C0", VA = "0x45666C0")]
	private DataTable CloneHierarchy(DataTable sourceTable, DataSet ds, Hashtable visitedMap)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x455A430", Offset = "0x455A430", VA = "0x455A430")]
	private DataTable CloneTo(DataTable clone, DataSet cloneDS, bool skipExpressionColumns)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4566FF0", Offset = "0x4566FF0", VA = "0x4566FF0")]
	internal void AddRow(DataRow row, int proposedID)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4567000", Offset = "0x4567000", VA = "0x4567000")]
	internal void InsertRow(DataRow row, int proposedID, int pos)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4567010", Offset = "0x4567010", VA = "0x4567010")]
	internal void InsertRow(DataRow row, long proposedID, int pos, bool fireEvent)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4568110", Offset = "0x4568110", VA = "0x4568110")]
	internal void CheckNotModifying(DataRow row)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4568130", Offset = "0x4568130", VA = "0x4568130")]
	public void Clear()
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4568140", Offset = "0x4568140", VA = "0x4568140")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4568CF0", Offset = "0x4568CF0", VA = "0x4568CF0")]
	internal void CascadeAll(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4568DA0", Offset = "0x4568DA0", VA = "0x4568DA0")]
	internal void CommitRow(DataRow row)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4569050", Offset = "0x4569050", VA = "0x4569050")]
	internal int Compare(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4569060", Offset = "0x4569060", VA = "0x4569060")]
	internal int Compare(string s1, string s2, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x45691E0", Offset = "0x45691E0", VA = "0x45691E0")]
	internal int IndexOf(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x4569270", Offset = "0x4569270", VA = "0x4569270")]
	internal bool IsSuffix(string s1, string s2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4569310", Offset = "0x4569310", VA = "0x4569310")]
	internal void DeleteRow(DataRow row)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x45693B0", Offset = "0x45693B0", VA = "0x45693B0")]
	internal string FormatSortString(IndexField[] indexDesc)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x45694F0", Offset = "0x45694F0", VA = "0x45694F0")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4569510", Offset = "0x4569510", VA = "0x4569510")]
	internal Index GetIndex(string sort, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x4569970", Offset = "0x4569970", VA = "0x4569970")]
	internal Index GetIndex(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4569B80", Offset = "0x4569B80", VA = "0x4569B80", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4569B90", Offset = "0x4569B90", VA = "0x4569B90")]
	internal List<DataViewListener> GetListeners()
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4560C80", Offset = "0x4560C80", VA = "0x4560C80")]
	internal int GetSpecialHashCode(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x45659D0", Offset = "0x45659D0", VA = "0x45659D0")]
	internal void InsertRow(DataRow row, long proposedID)
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x456AD40", Offset = "0x456AD40", VA = "0x456AD40")]
	internal int NewRecord()
	{
		return default(int);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x456AE20", Offset = "0x456AE20", VA = "0x456AE20")]
	internal int NewUninitializedRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x456AD50", Offset = "0x456AD50", VA = "0x456AD50")]
	internal int NewRecord(int sourceRecord)
	{
		return default(int);
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x455EB30", Offset = "0x455EB30", VA = "0x455EB30")]
	internal DataRow NewEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x456AE40", Offset = "0x456AE40", VA = "0x456AE40")]
	private DataRow NewUninitializedRow()
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x456AEF0", Offset = "0x456AEF0", VA = "0x456AEF0")]
	public DataRow NewRow()
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x456B040", Offset = "0x456B040", VA = "0x456B040")]
	internal DataRow CreateEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x456AFC0", Offset = "0x456AFC0", VA = "0x456AFC0")]
	private void NewRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x456AE70", Offset = "0x456AE70", VA = "0x456AE70")]
	internal DataRow NewRow(int record)
	{
		return null;
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x456B500", Offset = "0x456B500", VA = "0x456B500", Slot = "32")]
	protected virtual DataRow NewRowFromBuilder(DataRowBuilder builder)
	{
		return null;
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x456B550", Offset = "0x456B550", VA = "0x456B550", Slot = "33")]
	protected virtual Type GetRowType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x456B5B0", Offset = "0x456B5B0", VA = "0x456B5B0")]
	protected internal DataRow[] NewRowArray(int size)
	{
		return null;
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x456B940", Offset = "0x456B940", VA = "0x456B940", Slot = "34")]
	protected internal virtual void OnColumnChanging(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x456BA10", Offset = "0x456BA10", VA = "0x456BA10", Slot = "35")]
	protected internal virtual void OnColumnChanged(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x456BAE0", Offset = "0x456BAE0", VA = "0x456BAE0", Slot = "36")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x456BBB0", Offset = "0x456BBB0", VA = "0x456BBB0")]
	internal void OnRemoveColumnInternal(DataColumn column)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x456BBD0", Offset = "0x456BBD0", VA = "0x456BBD0", Slot = "37")]
	protected virtual void OnRemoveColumn(DataColumn column)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4568F30", Offset = "0x4568F30", VA = "0x4568F30")]
	private DataRowChangeEventArgs OnRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x4568E10", Offset = "0x4568E10", VA = "0x4568E10")]
	private DataRowChangeEventArgs OnRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x456BBE0", Offset = "0x456BBE0", VA = "0x456BBE0", Slot = "38")]
	protected virtual void OnRowChanged(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x456BCB0", Offset = "0x456BCB0", VA = "0x456BCB0", Slot = "39")]
	protected virtual void OnRowChanging(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x456BD80", Offset = "0x456BD80", VA = "0x456BD80", Slot = "40")]
	protected virtual void OnRowDeleting(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x456BE50", Offset = "0x456BE50", VA = "0x456BE50", Slot = "41")]
	protected virtual void OnRowDeleted(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x456BF20", Offset = "0x456BF20", VA = "0x456BF20", Slot = "42")]
	protected virtual void OnTableCleared(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x456BFF0", Offset = "0x456BFF0", VA = "0x456BFF0", Slot = "43")]
	protected virtual void OnTableClearing(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x456C0C0", Offset = "0x456C0C0", VA = "0x456C0C0", Slot = "44")]
	protected virtual void OnTableNewRow(DataTableNewRowEventArgs e)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4564950", Offset = "0x4564950", VA = "0x4564950")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4569540", Offset = "0x4569540", VA = "0x4569540")]
	internal IndexField[] ParseSortString(string sortString)
	{
		return null;
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4562760", Offset = "0x4562760", VA = "0x4562760")]
	internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x456C190", Offset = "0x456C190", VA = "0x456C190")]
	internal void RecordChanged(int record)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x456C350", Offset = "0x456C350", VA = "0x456C350")]
	internal void RecordChanged(int[] oldIndex, int[] newIndex)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4569DD0", Offset = "0x4569DD0", VA = "0x4569DD0")]
	internal void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4569FE0", Offset = "0x4569FE0", VA = "0x4569FE0")]
	internal void RecordStateChanged(int record1, DataViewRowState oldState1, DataViewRowState newState1, int record2, DataViewRowState oldState2, DataViewRowState newState2)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x456C680", Offset = "0x456C680", VA = "0x456C680")]
	internal int[] RemoveRecordFromIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x456C900", Offset = "0x456C900", VA = "0x456C900")]
	internal int[] InsertRecordToIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x456CAF0", Offset = "0x456CAF0", VA = "0x456CAF0")]
	internal void SilentlySetValue(DataRow dr, DataColumn dc, DataRowVersion version, object newValue)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x456DB30", Offset = "0x456DB30", VA = "0x456DB30")]
	internal void RemoveRow(DataRow row, bool check)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x456DCE0", Offset = "0x456DCE0", VA = "0x456DCE0", Slot = "45")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x455A420", Offset = "0x455A420", VA = "0x455A420")]
	internal void ResetIndexes()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x456E070", Offset = "0x456E070", VA = "0x456E070")]
	internal void ResetInternalIndexes(DataColumn column)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x456E310", Offset = "0x456E310", VA = "0x456E310")]
	internal void RollbackRow(DataRow row)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x456AA30", Offset = "0x456AA30", VA = "0x456AA30")]
	private DataRowChangeEventArgs RaiseRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x456E3B0", Offset = "0x456E3B0", VA = "0x456E3B0")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4569BA0", Offset = "0x4569BA0", VA = "0x4569BA0")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction, bool fireEvent)
	{
		return null;
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4564FB0", Offset = "0x4564FB0", VA = "0x4564FB0")]
	internal void SetNewRecord(DataRow row, int proposedRecord, DataRowAction action = DataRowAction.Change, bool isInMerge = false, bool fireEvent = true, bool suppressEnsurePropertyChanged = false)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x45673C0", Offset = "0x45673C0", VA = "0x45673C0")]
	private void SetNewRecordWorker(DataRow row, int proposedRecord, DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged, int position, bool fireEvent, out Exception deferredException)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4565010", Offset = "0x4565010", VA = "0x4565010")]
	internal void SetOldRecord(DataRow row, int proposedRecord)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x456E680", Offset = "0x456E680", VA = "0x456E680")]
	private void RestoreShadowIndexes()
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x455F520", Offset = "0x455F520", VA = "0x455F520")]
	private void SetShadowIndexes()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x456E6A0", Offset = "0x456E6A0", VA = "0x456E6A0")]
	internal void ShadowIndexCopy()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x456E720", Offset = "0x456E720", VA = "0x456E720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x456E390", Offset = "0x456E390", VA = "0x456E390")]
	internal bool UpdatingCurrent(DataRow row, DataRowAction action)
	{
		return default(bool);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x456E790", Offset = "0x456E790", VA = "0x456E790")]
	internal DataColumn AddUniqueKey(int position)
	{
		return null;
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x456EA00", Offset = "0x456EA00", VA = "0x456EA00")]
	internal DataColumn AddUniqueKey()
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x456EA10", Offset = "0x456EA10", VA = "0x456EA10")]
	internal DataColumn AddForeignKey(DataColumn parentKey)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x456EAB0", Offset = "0x456EAB0", VA = "0x456EAB0")]
	internal void UpdatePropertyDescriptorCollectionCache()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x456EAD0", Offset = "0x456EAD0", VA = "0x456EAD0")]
	internal PropertyDescriptorCollection GetPropertyDescriptorCollection(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x456EF40", Offset = "0x456EF40", VA = "0x456EF40")]
	public void Merge(DataTable table)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x456EF50", Offset = "0x456EF50", VA = "0x456EF50")]
	public void Merge(DataTable table, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x456F200", Offset = "0x456F200", VA = "0x456F200")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode, bool writeHierarchy)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x456F780", Offset = "0x456F780", VA = "0x456F780")]
	private bool CheckForClosureOnExpressions(DataTable dt, bool writeHierarchy)
	{
		return default(bool);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x455B9F0", Offset = "0x455B9F0", VA = "0x455B9F0")]
	private bool CheckForClosureOnExpressionTables(List<DataTable> tableList)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x456FD50", Offset = "0x456FD50", VA = "0x456FD50")]
	public void WriteXmlSchema(XmlWriter writer, bool writeHierarchy)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x45701C0", Offset = "0x45701C0", VA = "0x45701C0")]
	private void RestoreConstraint(bool originalEnforceConstraint)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4570210", Offset = "0x4570210", VA = "0x4570210")]
	private bool IsEmptyXml(XmlReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4570450", Offset = "0x4570450", VA = "0x4570450")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4572B50", Offset = "0x4572B50", VA = "0x4572B50")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4572BF0", Offset = "0x4572BF0", VA = "0x4572BF0")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4574C70", Offset = "0x4574C70", VA = "0x4574C70")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4571E60", Offset = "0x4571E60", VA = "0x4571E60")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4574D20", Offset = "0x4574D20", VA = "0x4574D20")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4572C60", Offset = "0x4572C60", VA = "0x4572C60")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x456F880", Offset = "0x456F880", VA = "0x456F880")]
	private void CreateTableList(DataTable currentTable, List<DataTable> tableList)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4574FB0", Offset = "0x4574FB0", VA = "0x4574FB0")]
	private void CreateRelationList(List<DataTable> tableList, List<DataRelation> relationList)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x45755C0", Offset = "0x45755C0", VA = "0x45755C0")]
	public static XmlSchemaComplexType GetDataTableSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4575810", Offset = "0x4575810", VA = "0x4575810", Slot = "24")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4575830", Offset = "0x4575830", VA = "0x4575830", Slot = "46")]
	protected virtual XmlSchema GetSchema()
	{
		return null;
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x45759E0", Offset = "0x45759E0", VA = "0x45759E0", Slot = "25")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4575BA0", Offset = "0x4575BA0", VA = "0x4575BA0", Slot = "26")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4575BD0", Offset = "0x4575BD0", VA = "0x4575BD0", Slot = "47")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4575C70", Offset = "0x4575C70", VA = "0x4575C70")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4575DA0", Offset = "0x4575DA0", VA = "0x4575DA0")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4575E30", Offset = "0x4575E30", VA = "0x4575E30")]
	internal void EvaluateExpressions()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x456A2E0", Offset = "0x456A2E0", VA = "0x456A2E0")]
	internal void EvaluateExpressions(DataRow row, DataRowAction action, List<DataRow> cachedRows)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4576240", Offset = "0x4576240", VA = "0x4576240")]
	internal void EvaluateExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4568B80", Offset = "0x4568B80", VA = "0x4568B80")]
	internal void EvaluateDependentExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x456CC50", Offset = "0x456CC50", VA = "0x456CC50")]
	internal void EvaluateDependentExpressions(List<DataColumn> columns, DataRow row, DataRowVersion version, List<DataRow> cachedRows)
	{
	}
}
