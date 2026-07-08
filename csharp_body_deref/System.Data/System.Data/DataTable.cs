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
		[Address(RVA = "0x4252AD0", Offset = "0x4252AD0", VA = "0x4252AD0")]
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
		[Address(RVA = "0x424D940", Offset = "0x424D940", VA = "0x424D940")]
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
		[Address(RVA = "0x4221790", Offset = "0x4221790", VA = "0x4221790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x42217A0", Offset = "0x42217A0", VA = "0x42217A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	internal bool AreIndexEventsSuspended
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x4221840", Offset = "0x4221840", VA = "0x4221840")]
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
		[Address(RVA = "0x4221EE0", Offset = "0x4221EE0", VA = "0x4221EE0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009F")]
	private bool IsTypedDataTable
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x4221EF0", Offset = "0x4221EF0", VA = "0x4221EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	internal bool SelfNested
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x4221FA0", Offset = "0x4221FA0", VA = "0x4221FA0")]
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
		[Address(RVA = "0x4222440", Offset = "0x4222440", VA = "0x4222440")]
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
		[Address(RVA = "0x42224D0", Offset = "0x42224D0", VA = "0x42224D0")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x42224E0", Offset = "0x42224E0", VA = "0x42224E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	internal int UKColumnPositionForInference
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x4222530", Offset = "0x4222530", VA = "0x4222530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x4222540", Offset = "0x4222540", VA = "0x4222540")]
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
		[Address(RVA = "0x4222550", Offset = "0x4222550", VA = "0x4222550")]
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
		[Address(RVA = "0x42225C0", Offset = "0x42225C0", VA = "0x42225C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A6")]
	private CompareInfo CompareInfo
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x42225D0", Offset = "0x42225D0", VA = "0x42225D0")]
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
		[Address(RVA = "0x4222630", Offset = "0x4222630", VA = "0x4222630")]
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
		[Address(RVA = "0x4222660", Offset = "0x4222660", VA = "0x4222660")]
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
		[Address(RVA = "0x4222750", Offset = "0x4222750", VA = "0x4222750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	internal string DisplayExpressionInternal
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x4222830", Offset = "0x4222830", VA = "0x4222830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	internal bool EnforceConstraints
	{
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x4222860", Offset = "0x4222860", VA = "0x4222860")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x4222890", Offset = "0x4222890", VA = "0x4222890")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	internal bool SuspendEnforceConstraints
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x4222FC0", Offset = "0x4222FC0", VA = "0x4222FC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x4222FD0", Offset = "0x4222FD0", VA = "0x4222FD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x421E220", Offset = "0x421E220", VA = "0x421E220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AE")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x4222FE0", Offset = "0x4222FE0", VA = "0x4222FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	public CultureInfo Locale
	{
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x4223090", Offset = "0x4223090", VA = "0x4223090")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x42230A0", Offset = "0x42230A0", VA = "0x42230A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	[DefaultValue(50)]
	public int MinimumCapacity
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x4223620", Offset = "0x4223620", VA = "0x4223620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x421FAF0", Offset = "0x421FAF0", VA = "0x421FAF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	internal int RecordCapacity
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x4223640", Offset = "0x4223640", VA = "0x4223640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	internal int ElementColumnCount
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x4223660", Offset = "0x4223660", VA = "0x4223660")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x4223670", Offset = "0x4223670", VA = "0x4223670")]
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
		[Address(RVA = "0x42223D0", Offset = "0x42223D0", VA = "0x42223D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B4")]
	internal bool MergingData
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x42236B0", Offset = "0x42236B0", VA = "0x42236B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x42236C0", Offset = "0x42236C0", VA = "0x42236C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	internal DataRelation[] NestedParentRelations
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x42236D0", Offset = "0x42236D0", VA = "0x42236D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B6")]
	internal bool SchemaLoading
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x42236E0", Offset = "0x42236E0", VA = "0x42236E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B7")]
	internal int NestedParentsCount
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x4223CF0", Offset = "0x4223CF0", VA = "0x4223CF0")]
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
		[Address(RVA = "0x42240E0", Offset = "0x42240E0", VA = "0x42240E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x42241D0", Offset = "0x42241D0", VA = "0x42241D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	[Browsable(false)]
	public DataRowCollection Rows
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x42246E0", Offset = "0x42246E0", VA = "0x42246E0")]
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
		[Address(RVA = "0x42246F0", Offset = "0x42246F0", VA = "0x42246F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x4224700", Offset = "0x4224700", VA = "0x4224700")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	internal string EncodedTableName
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x4225070", Offset = "0x4225070", VA = "0x4225070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public string Namespace
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x421AE20", Offset = "0x421AE20", VA = "0x421AE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x421DDA0", Offset = "0x421DDA0", VA = "0x421DDA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x42272F0", Offset = "0x42272F0", VA = "0x42272F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x4227300", Offset = "0x4227300", VA = "0x4227300")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	internal DataColumn XmlText
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x42274B0", Offset = "0x42274B0", VA = "0x42274B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x42274C0", Offset = "0x42274C0", VA = "0x42274C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	internal decimal MaxOccurs
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x4227570", Offset = "0x4227570", VA = "0x4227570")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x4227580", Offset = "0x4227580", VA = "0x4227580")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	internal decimal MinOccurs
	{
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x4227590", Offset = "0x4227590", VA = "0x4227590")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x42275A0", Offset = "0x42275A0", VA = "0x42275A0")]
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
		[Address(RVA = "0x4229660", Offset = "0x4229660", VA = "0x4229660", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x4229670", Offset = "0x4229670", VA = "0x4229670", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	private bool System_002EComponentModel_002EIListSource_002EContainsListCollection
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x422BBA0", Offset = "0x422BBA0", VA = "0x422BBA0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	internal bool NeedColumnChangeEvents
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x422E120", Offset = "0x422E120", VA = "0x422E120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C4")]
	internal XmlQualifiedName TypeName
	{
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x421E190", Offset = "0x421E190", VA = "0x421E190")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x42317C0", Offset = "0x42317C0", VA = "0x42317C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	internal Hashtable RowDiffId
	{
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x4238480", Offset = "0x4238480", VA = "0x4238480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	internal int ObjectID
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x4238500", Offset = "0x4238500", VA = "0x4238500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000007")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x4229560", Offset = "0x4229560", VA = "0x4229560", Slot = "19")]
		add
		{
		}
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x42295E0", Offset = "0x42295E0", VA = "0x42295E0", Slot = "20")]
		remove
		{
		}
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4218940", Offset = "0x4218940", VA = "0x4218940")]
	public DataTable()
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4218F60", Offset = "0x4218F60", VA = "0x4218F60")]
	public DataTable(string tableName)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4218FE0", Offset = "0x4218FE0", VA = "0x4218FE0")]
	protected DataTable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4219500", Offset = "0x4219500", VA = "0x4219500", Slot = "27")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x42195C0", Offset = "0x42195C0", VA = "0x42195C0")]
	private void SerializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4219180", Offset = "0x4219180", VA = "0x4219180")]
	internal void DeserializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4219950", Offset = "0x4219950", VA = "0x4219950")]
	internal void SerializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x421AEA0", Offset = "0x421AEA0", VA = "0x421AEA0")]
	internal void DeserializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x421E850", Offset = "0x421E850", VA = "0x421E850")]
	internal void SerializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x421FB10", Offset = "0x421FB10", VA = "0x421FB10")]
	internal void DeserializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4220D40", Offset = "0x4220D40", VA = "0x4220D40")]
	internal void SerializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4220F40", Offset = "0x4220F40", VA = "0x4220F40")]
	internal void DeserializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x421A720", Offset = "0x421A720", VA = "0x421A720")]
	internal void SerializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x421BD50", Offset = "0x421BD50", VA = "0x421BD50")]
	internal void DeserializeTableData(SerializationInfo info, StreamingContext context, int serIndex)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4221420", Offset = "0x4221420", VA = "0x4221420")]
	private DataRowState ConvertToRowState(BitArray bitStates, int bitIndex)
	{
		return default(DataRowState);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4221140", Offset = "0x4221140", VA = "0x4221140")]
	internal void GetRowAndColumnErrors(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x42214C0", Offset = "0x42214C0", VA = "0x42214C0")]
	private void ConvertToRowError(int rowIndex, Hashtable rowErrors, Hashtable colErrors)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4221850", Offset = "0x4221850", VA = "0x4221850")]
	internal void RestoreIndexEvents(bool forceReset)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4221E10", Offset = "0x4221E10", VA = "0x4221E10")]
	internal void SuspendIndexEvents()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x421EFF0", Offset = "0x421EFF0", VA = "0x421EFF0")]
	internal bool SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4221F90", Offset = "0x4221F90", VA = "0x4221F90")]
	internal bool ShouldSerializeCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4222640", Offset = "0x4222640", VA = "0x4222640")]
	private void ResetConstraints()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4222670", Offset = "0x4222670", VA = "0x4222670")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x42228D0", Offset = "0x42228D0", VA = "0x42228D0")]
	internal void EnableConstraints()
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x421F390", Offset = "0x421F390", VA = "0x421F390")]
	internal bool SetLocaleValue(CultureInfo culture, bool userSet, bool resetIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4223610", Offset = "0x4223610", VA = "0x4223610")]
	internal bool ShouldSerializeLocale()
	{
		return default(bool);
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x42236F0", Offset = "0x42236F0", VA = "0x42236F0")]
	internal void CacheNestedParent()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4223720", Offset = "0x4223720", VA = "0x4223720")]
	private DataRelation[] FindNestedParentRelations()
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x42250F0", Offset = "0x42250F0", VA = "0x42250F0")]
	private string GetInheritedNamespace(List<DataTable> visitedTables)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x42266E0", Offset = "0x42266E0", VA = "0x42266E0")]
	internal bool IsNamespaceInherited()
	{
		return default(bool);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4225420", Offset = "0x4225420", VA = "0x4225420")]
	internal void CheckCascadingNamespaceConflict(string realNamespace)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x4225970", Offset = "0x4225970", VA = "0x4225970")]
	internal void CheckNamespaceValidityForNestedRelations(string realNamespace)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x42266F0", Offset = "0x42266F0", VA = "0x42266F0")]
	internal void CheckNamespaceValidityForNestedParentRelations(string ns, DataTable parentTable)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4225F10", Offset = "0x4225F10", VA = "0x4225F10")]
	internal void DoRaiseNamespaceChange()
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4226C00", Offset = "0x4226C00", VA = "0x4226C00", Slot = "28")]
	public virtual void BeginInit()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4226C10", Offset = "0x4226C10", VA = "0x4226C10", Slot = "29")]
	public virtual void EndInit()
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x42275B0", Offset = "0x42275B0", VA = "0x42275B0")]
	internal void SetKeyValues(DataKey key, object[] keyValues, int record)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4227630", Offset = "0x4227630", VA = "0x4227630")]
	internal DataRow FindByIndex(Index ndx, object[] key)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x42276D0", Offset = "0x42276D0", VA = "0x42276D0")]
	internal DataRow FindMergeTarget(DataRow row, DataKey key, Index ndx)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4227740", Offset = "0x4227740", VA = "0x4227740")]
	private void SetMergeRecords(DataRow row, int newRecord, int oldRecord, DataRowAction action)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4227BD0", Offset = "0x4227BD0", VA = "0x4227BD0")]
	internal DataRow MergeRow(DataRow row, DataRow targetRow, bool preserveChanges, Index idxSearch)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4228760", Offset = "0x4228760", VA = "0x4228760", Slot = "30")]
	protected virtual DataTable CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x42287E0", Offset = "0x42287E0", VA = "0x42287E0", Slot = "31")]
	public virtual DataTable Clone()
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x42287F0", Offset = "0x42287F0", VA = "0x42287F0")]
	internal DataTable Clone(DataSet cloneDS)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4228A30", Offset = "0x4228A30", VA = "0x4228A30")]
	private DataTable IncrementalCloneTo(DataTable sourceTable, DataTable targetTable)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4228F60", Offset = "0x4228F60", VA = "0x4228F60")]
	private DataTable CloneHierarchy(DataTable sourceTable, DataSet ds, Hashtable visitedMap)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x421CCD0", Offset = "0x421CCD0", VA = "0x421CCD0")]
	private DataTable CloneTo(DataTable clone, DataSet cloneDS, bool skipExpressionColumns)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4229890", Offset = "0x4229890", VA = "0x4229890")]
	internal void AddRow(DataRow row, int proposedID)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x42298A0", Offset = "0x42298A0", VA = "0x42298A0")]
	internal void InsertRow(DataRow row, int proposedID, int pos)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x42298B0", Offset = "0x42298B0", VA = "0x42298B0")]
	internal void InsertRow(DataRow row, long proposedID, int pos, bool fireEvent)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x422A9B0", Offset = "0x422A9B0", VA = "0x422A9B0")]
	internal void CheckNotModifying(DataRow row)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x422A9D0", Offset = "0x422A9D0", VA = "0x422A9D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x422A9E0", Offset = "0x422A9E0", VA = "0x422A9E0")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x422B590", Offset = "0x422B590", VA = "0x422B590")]
	internal void CascadeAll(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x422B640", Offset = "0x422B640", VA = "0x422B640")]
	internal void CommitRow(DataRow row)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x422B8F0", Offset = "0x422B8F0", VA = "0x422B8F0")]
	internal int Compare(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x422B900", Offset = "0x422B900", VA = "0x422B900")]
	internal int Compare(string s1, string s2, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x422BA80", Offset = "0x422BA80", VA = "0x422BA80")]
	internal int IndexOf(string s1, string s2)
	{
		return default(int);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x422BB10", Offset = "0x422BB10", VA = "0x422BB10")]
	internal bool IsSuffix(string s1, string s2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x422BBB0", Offset = "0x422BBB0", VA = "0x422BBB0")]
	internal void DeleteRow(DataRow row)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x422BC50", Offset = "0x422BC50", VA = "0x422BC50")]
	internal string FormatSortString(IndexField[] indexDesc)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x422BD90", Offset = "0x422BD90", VA = "0x422BD90")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x422BDB0", Offset = "0x422BDB0", VA = "0x422BDB0")]
	internal Index GetIndex(string sort, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x422C210", Offset = "0x422C210", VA = "0x422C210")]
	internal Index GetIndex(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x422C420", Offset = "0x422C420", VA = "0x422C420", Slot = "17")]
	private IList System_002EComponentModel_002EIListSource_002EGetList()
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x422C430", Offset = "0x422C430", VA = "0x422C430")]
	internal List<DataViewListener> GetListeners()
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4223520", Offset = "0x4223520", VA = "0x4223520")]
	internal int GetSpecialHashCode(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4228270", Offset = "0x4228270", VA = "0x4228270")]
	internal void InsertRow(DataRow row, long proposedID)
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x422D5E0", Offset = "0x422D5E0", VA = "0x422D5E0")]
	internal int NewRecord()
	{
		return default(int);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x422D6C0", Offset = "0x422D6C0", VA = "0x422D6C0")]
	internal int NewUninitializedRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x422D5F0", Offset = "0x422D5F0", VA = "0x422D5F0")]
	internal int NewRecord(int sourceRecord)
	{
		return default(int);
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x42213D0", Offset = "0x42213D0", VA = "0x42213D0")]
	internal DataRow NewEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x422D6E0", Offset = "0x422D6E0", VA = "0x422D6E0")]
	private DataRow NewUninitializedRow()
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x422D790", Offset = "0x422D790", VA = "0x422D790")]
	public DataRow NewRow()
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x422D8E0", Offset = "0x422D8E0", VA = "0x422D8E0")]
	internal DataRow CreateEmptyRow()
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x422D860", Offset = "0x422D860", VA = "0x422D860")]
	private void NewRowCreated(DataRow row)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x422D710", Offset = "0x422D710", VA = "0x422D710")]
	internal DataRow NewRow(int record)
	{
		return null;
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x422DDA0", Offset = "0x422DDA0", VA = "0x422DDA0", Slot = "32")]
	protected virtual DataRow NewRowFromBuilder(DataRowBuilder builder)
	{
		return null;
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x422DDF0", Offset = "0x422DDF0", VA = "0x422DDF0", Slot = "33")]
	protected virtual Type GetRowType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x422DE50", Offset = "0x422DE50", VA = "0x422DE50")]
	protected internal DataRow[] NewRowArray(int size)
	{
		return null;
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x422E1E0", Offset = "0x422E1E0", VA = "0x422E1E0", Slot = "34")]
	protected internal virtual void OnColumnChanging(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x422E2B0", Offset = "0x422E2B0", VA = "0x422E2B0", Slot = "35")]
	protected internal virtual void OnColumnChanged(DataColumnChangeEventArgs e)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x422E380", Offset = "0x422E380", VA = "0x422E380", Slot = "36")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x422E450", Offset = "0x422E450", VA = "0x422E450")]
	internal void OnRemoveColumnInternal(DataColumn column)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x422E470", Offset = "0x422E470", VA = "0x422E470", Slot = "37")]
	protected virtual void OnRemoveColumn(DataColumn column)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x422B7D0", Offset = "0x422B7D0", VA = "0x422B7D0")]
	private DataRowChangeEventArgs OnRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x422B6B0", Offset = "0x422B6B0", VA = "0x422B6B0")]
	private DataRowChangeEventArgs OnRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x422E480", Offset = "0x422E480", VA = "0x422E480", Slot = "38")]
	protected virtual void OnRowChanged(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x422E550", Offset = "0x422E550", VA = "0x422E550", Slot = "39")]
	protected virtual void OnRowChanging(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x422E620", Offset = "0x422E620", VA = "0x422E620", Slot = "40")]
	protected virtual void OnRowDeleting(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x422E6F0", Offset = "0x422E6F0", VA = "0x422E6F0", Slot = "41")]
	protected virtual void OnRowDeleted(DataRowChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x422E7C0", Offset = "0x422E7C0", VA = "0x422E7C0", Slot = "42")]
	protected virtual void OnTableCleared(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x422E890", Offset = "0x422E890", VA = "0x422E890", Slot = "43")]
	protected virtual void OnTableClearing(DataTableClearEventArgs e)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x422E960", Offset = "0x422E960", VA = "0x422E960", Slot = "44")]
	protected virtual void OnTableNewRow(DataTableNewRowEventArgs e)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x42271F0", Offset = "0x42271F0", VA = "0x42271F0")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x422BDE0", Offset = "0x422BDE0", VA = "0x422BDE0")]
	internal IndexField[] ParseSortString(string sortString)
	{
		return null;
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4225000", Offset = "0x4225000", VA = "0x4225000")]
	internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x422EA30", Offset = "0x422EA30", VA = "0x422EA30")]
	internal void RecordChanged(int record)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x422EBF0", Offset = "0x422EBF0", VA = "0x422EBF0")]
	internal void RecordChanged(int[] oldIndex, int[] newIndex)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x422C670", Offset = "0x422C670", VA = "0x422C670")]
	internal void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x422C880", Offset = "0x422C880", VA = "0x422C880")]
	internal void RecordStateChanged(int record1, DataViewRowState oldState1, DataViewRowState newState1, int record2, DataViewRowState oldState2, DataViewRowState newState2)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x422EF20", Offset = "0x422EF20", VA = "0x422EF20")]
	internal int[] RemoveRecordFromIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x422F1A0", Offset = "0x422F1A0", VA = "0x422F1A0")]
	internal int[] InsertRecordToIndexes(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x422F390", Offset = "0x422F390", VA = "0x422F390")]
	internal void SilentlySetValue(DataRow dr, DataColumn dc, DataRowVersion version, object newValue)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x42303D0", Offset = "0x42303D0", VA = "0x42303D0")]
	internal void RemoveRow(DataRow row, bool check)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4230580", Offset = "0x4230580", VA = "0x4230580", Slot = "45")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x421CCC0", Offset = "0x421CCC0", VA = "0x421CCC0")]
	internal void ResetIndexes()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4230910", Offset = "0x4230910", VA = "0x4230910")]
	internal void ResetInternalIndexes(DataColumn column)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4230BB0", Offset = "0x4230BB0", VA = "0x4230BB0")]
	internal void RollbackRow(DataRow row)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x422D2D0", Offset = "0x422D2D0", VA = "0x422D2D0")]
	private DataRowChangeEventArgs RaiseRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4230C50", Offset = "0x4230C50", VA = "0x4230C50")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction)
	{
		return null;
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x422C440", Offset = "0x422C440", VA = "0x422C440")]
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction, bool fireEvent)
	{
		return null;
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4227850", Offset = "0x4227850", VA = "0x4227850")]
	internal void SetNewRecord(DataRow row, int proposedRecord, DataRowAction action = DataRowAction.Change, bool isInMerge = false, bool fireEvent = true, bool suppressEnsurePropertyChanged = false)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4229C60", Offset = "0x4229C60", VA = "0x4229C60")]
	private void SetNewRecordWorker(DataRow row, int proposedRecord, DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged, int position, bool fireEvent, out Exception deferredException)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x42278B0", Offset = "0x42278B0", VA = "0x42278B0")]
	internal void SetOldRecord(DataRow row, int proposedRecord)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4230F20", Offset = "0x4230F20", VA = "0x4230F20")]
	private void RestoreShadowIndexes()
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4221DC0", Offset = "0x4221DC0", VA = "0x4221DC0")]
	private void SetShadowIndexes()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4230F40", Offset = "0x4230F40", VA = "0x4230F40")]
	internal void ShadowIndexCopy()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4230FC0", Offset = "0x4230FC0", VA = "0x4230FC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4230C30", Offset = "0x4230C30", VA = "0x4230C30")]
	internal bool UpdatingCurrent(DataRow row, DataRowAction action)
	{
		return default(bool);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4231030", Offset = "0x4231030", VA = "0x4231030")]
	internal DataColumn AddUniqueKey(int position)
	{
		return null;
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x42312A0", Offset = "0x42312A0", VA = "0x42312A0")]
	internal DataColumn AddUniqueKey()
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x42312B0", Offset = "0x42312B0", VA = "0x42312B0")]
	internal DataColumn AddForeignKey(DataColumn parentKey)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4231350", Offset = "0x4231350", VA = "0x4231350")]
	internal void UpdatePropertyDescriptorCollectionCache()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4231370", Offset = "0x4231370", VA = "0x4231370")]
	internal PropertyDescriptorCollection GetPropertyDescriptorCollection(Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x42317E0", Offset = "0x42317E0", VA = "0x42317E0")]
	public void Merge(DataTable table)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x42317F0", Offset = "0x42317F0", VA = "0x42317F0")]
	public void Merge(DataTable table, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4231AA0", Offset = "0x4231AA0", VA = "0x4231AA0")]
	public void WriteXml(XmlWriter writer, XmlWriteMode mode, bool writeHierarchy)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4232020", Offset = "0x4232020", VA = "0x4232020")]
	private bool CheckForClosureOnExpressions(DataTable dt, bool writeHierarchy)
	{
		return default(bool);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x421E290", Offset = "0x421E290", VA = "0x421E290")]
	private bool CheckForClosureOnExpressionTables(List<DataTable> tableList)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x42325F0", Offset = "0x42325F0", VA = "0x42325F0")]
	public void WriteXmlSchema(XmlWriter writer, bool writeHierarchy)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4232A60", Offset = "0x4232A60", VA = "0x4232A60")]
	private void RestoreConstraint(bool originalEnforceConstraint)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4232AB0", Offset = "0x4232AB0", VA = "0x4232AB0")]
	private bool IsEmptyXml(XmlReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4232CF0", Offset = "0x4232CF0", VA = "0x4232CF0")]
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving)
	{
		return default(XmlReadMode);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x42353F0", Offset = "0x42353F0", VA = "0x42353F0")]
	internal void ReadEndElement(XmlReader reader)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4235490", Offset = "0x4235490", VA = "0x4235490")]
	internal void ReadXDRSchema(XmlReader reader)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4237510", Offset = "0x4237510", VA = "0x4237510")]
	internal bool MoveToElement(XmlReader reader, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4234700", Offset = "0x4234700", VA = "0x4234700")]
	private void ReadXmlDiffgram(XmlReader reader)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x42375C0", Offset = "0x42375C0", VA = "0x42375C0")]
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4235500", Offset = "0x4235500", VA = "0x4235500")]
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4232120", Offset = "0x4232120", VA = "0x4232120")]
	private void CreateTableList(DataTable currentTable, List<DataTable> tableList)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4237850", Offset = "0x4237850", VA = "0x4237850")]
	private void CreateRelationList(List<DataTable> tableList, List<DataRelation> relationList)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4237E60", Offset = "0x4237E60", VA = "0x4237E60")]
	public static XmlSchemaComplexType GetDataTableSchema(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x42380B0", Offset = "0x42380B0", VA = "0x42380B0", Slot = "24")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x42380D0", Offset = "0x42380D0", VA = "0x42380D0", Slot = "46")]
	protected virtual XmlSchema GetSchema()
	{
		return null;
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4238280", Offset = "0x4238280", VA = "0x4238280", Slot = "25")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4238440", Offset = "0x4238440", VA = "0x4238440", Slot = "26")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4238470", Offset = "0x4238470", VA = "0x4238470", Slot = "47")]
	protected virtual void ReadXmlSerializable(XmlReader reader)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4238510", Offset = "0x4238510", VA = "0x4238510")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4238640", Offset = "0x4238640", VA = "0x4238640")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x42386D0", Offset = "0x42386D0", VA = "0x42386D0")]
	internal void EvaluateExpressions()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x422CB80", Offset = "0x422CB80", VA = "0x422CB80")]
	internal void EvaluateExpressions(DataRow row, DataRowAction action, List<DataRow> cachedRows)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4238AE0", Offset = "0x4238AE0", VA = "0x4238AE0")]
	internal void EvaluateExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x422B420", Offset = "0x422B420", VA = "0x422B420")]
	internal void EvaluateDependentExpressions(DataColumn column)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x422F4F0", Offset = "0x422F4F0", VA = "0x422F4F0")]
	internal void EvaluateDependentExpressions(List<DataColumn> columns, DataRow row, DataRowVersion version, List<DataRow> cachedRows)
	{
	}
}
