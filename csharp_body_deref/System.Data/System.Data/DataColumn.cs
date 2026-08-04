// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataColumn
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data.Common;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Xml;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000F")]
[DesignTimeVisible(false)]
[DefaultProperty("ColumnName")]
[ToolboxItem(false)]
public class DataColumn : MarshalByValueComponent
{
	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x20")]
	private bool _allowNull;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x28")]
	private string _caption;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x30")]
	private string _columnName;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x38")]
	private Type _dataType;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x40")]
	private StorageType _storageType;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x48")]
	internal object _defaultValue;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x50")]
	private DataSetDateTime _dateTimeMode;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x58")]
	private DataExpression _expression;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x60")]
	private int _maxLength;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x64")]
	private int _ordinal;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x68")]
	private bool _readOnly;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x70")]
	internal Index _sortIndex;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x78")]
	internal DataTable _table;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x80")]
	private bool _unique;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x84")]
	internal MappingType _columnMapping;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x88")]
	internal int _hashCode;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x8C")]
	internal int _errors;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x90")]
	private bool _isSqlType;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x91")]
	private bool _implementsINullable;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x92")]
	private bool _implementsIChangeTracking;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x93")]
	private bool _implementsIRevertibleChangeTracking;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x94")]
	private bool _implementsIXMLSerializable;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x95")]
	private bool _defaultValueIsNull;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x98")]
	internal List<DataColumn> _dependentColumns;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0xA0")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0xA8")]
	private DataStorage _storage;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0xB0")]
	private AutoIncrementValue _autoInc;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0xB8")]
	internal string _columnUri;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0xC0")]
	private string _columnPrefix;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0xC8")]
	internal string _encodedColumnName;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0xD0")]
	internal SimpleType _simpleType;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0xD8")]
	private readonly int _objectID;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0xE8")]
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging;

	[Token(Token = "0x17000010")]
	[DefaultValue(true)]
	public bool AllowDBNull
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4539450", Offset = "0x4539450", VA = "0x4539450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x4539460", Offset = "0x4539460", VA = "0x4539460")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	[DefaultValue(false)]
	[RefreshProperties(RefreshProperties.All)]
	public bool AutoIncrement
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x4539B50", Offset = "0x4539B50", VA = "0x4539B50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x4539B70", Offset = "0x4539B70", VA = "0x4539B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	internal object AutoIncrementCurrent
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x453AE40", Offset = "0x453AE40", VA = "0x453AE40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x453AEB0", Offset = "0x453AEB0", VA = "0x453AEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	internal AutoIncrementValue AutoInc
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x453AD00", Offset = "0x453AD00", VA = "0x453AD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	[DefaultValue(0L)]
	public long AutoIncrementSeed
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x453AE80", Offset = "0x453AE80", VA = "0x453AE80")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x453B130", Offset = "0x453B130", VA = "0x453B130")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	[DefaultValue(1L)]
	public long AutoIncrementStep
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x453B250", Offset = "0x453B250", VA = "0x453B250")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x453B280", Offset = "0x453B280", VA = "0x453B280")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public string Caption
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x453B3A0", Offset = "0x453B3A0", VA = "0x453B3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x453B3B0", Offset = "0x453B3B0", VA = "0x453B3B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	[DefaultValue("")]
	[RefreshProperties(RefreshProperties.All)]
	public string ColumnName
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x453B4E0", Offset = "0x453B4E0", VA = "0x453B4E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x453B4F0", Offset = "0x453B4F0", VA = "0x453B4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	internal string EncodedColumnName
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x453BFE0", Offset = "0x453BFE0", VA = "0x453BFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x453B050", Offset = "0x453B050", VA = "0x453B050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	internal CultureInfo Locale
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x453B480", Offset = "0x453B480", VA = "0x453B480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	internal int ObjectID
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x453C070", Offset = "0x453C070", VA = "0x453C070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x453C080", Offset = "0x453C080", VA = "0x453C080")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x453C090", Offset = "0x453C090", VA = "0x453C090")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool Computed
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x453C4C0", Offset = "0x453C4C0", VA = "0x453C4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	internal DataExpression DataExpression
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x453C4D0", Offset = "0x453C4D0", VA = "0x453C4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	[DefaultValue(typeof(string))]
	[TypeConverter(typeof(ColumnTypeConverter))]
	[RefreshProperties(RefreshProperties.All)]
	public Type DataType
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x453C4E0", Offset = "0x453C4E0", VA = "0x453C4E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x453A1E0", Offset = "0x453A1E0", VA = "0x453A1E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	[DefaultValue(DataSetDateTime.UnspecifiedLocal)]
	[RefreshProperties(RefreshProperties.All)]
	public DataSetDateTime DateTimeMode
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x453D020", Offset = "0x453D020", VA = "0x453D020")]
		get
		{
			return default(DataSetDateTime);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x453D030", Offset = "0x453D030", VA = "0x453D030")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	[TypeConverter(typeof(DefaultValueTypeConverter))]
	public object DefaultValue
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x453C810", Offset = "0x453C810", VA = "0x453C810")]
		get
		{
			return null;
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x453C9A0", Offset = "0x453C9A0", VA = "0x453C9A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	internal bool DefaultValueIsNull
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x453D4E0", Offset = "0x453D4E0", VA = "0x453D4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	[RefreshProperties(RefreshProperties.All)]
	[DefaultValue("")]
	public string Expression
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x453D510", Offset = "0x453D510", VA = "0x453D510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x45388E0", Offset = "0x45388E0", VA = "0x45388E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x453DC20", Offset = "0x453DC20", VA = "0x453DC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	internal bool HasData
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x453A0C0", Offset = "0x453A0C0", VA = "0x453A0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	internal bool ImplementsINullable
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x453DC90", Offset = "0x453DC90", VA = "0x453DC90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	internal bool ImplementsIChangeTracking
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x453DCA0", Offset = "0x453DCA0", VA = "0x453DCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	internal bool ImplementsIRevertibleChangeTracking
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x453DCB0", Offset = "0x453DCB0", VA = "0x453DCB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	internal bool IsValueType
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x453DCC0", Offset = "0x453DCC0", VA = "0x453DCC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	internal bool IsSqlType
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x453DCE0", Offset = "0x453DCE0", VA = "0x453DCE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	[DefaultValue(-1)]
	public int MaxLength
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x453DDC0", Offset = "0x453DDC0", VA = "0x453DDC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x453DDD0", Offset = "0x453DDD0", VA = "0x453DDD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public string Namespace
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x453E910", Offset = "0x453E910", VA = "0x453E910")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x453E960", Offset = "0x453E960", VA = "0x453E960")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public int Ordinal
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x453EC80", Offset = "0x453EC80", VA = "0x453EC80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002E")]
	[DefaultValue(false)]
	public bool ReadOnly
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x453EDD0", Offset = "0x453EDD0", VA = "0x453EDD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x453D6D0", Offset = "0x453D6D0", VA = "0x453D6D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Index SortIndex
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x453EE60", Offset = "0x453EE60", VA = "0x453EE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public DataTable Table
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x453EF50", Offset = "0x453EF50", VA = "0x453EF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	internal object this[int record]
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x453C3E0", Offset = "0x453C3E0", VA = "0x453C3E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x453F060", Offset = "0x453F060", VA = "0x453F060")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[DefaultValue(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public bool Unique
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x453F4D0", Offset = "0x453F4D0", VA = "0x453F4D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x453F4E0", Offset = "0x453F4E0", VA = "0x453F4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	internal string XmlDataType
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x453FC70", Offset = "0x453FC70", VA = "0x453FC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x453FC80", Offset = "0x453FC80", VA = "0x453FC80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	internal SimpleType SimpleType
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x453FCA0", Offset = "0x453FCA0", VA = "0x453FCA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x4538780", Offset = "0x4538780", VA = "0x4538780")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	[DefaultValue(MappingType.Element)]
	public virtual MappingType ColumnMapping
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x453FCB0", Offset = "0x453FCB0", VA = "0x453FCB0", Slot = "16")]
		get
		{
			return default(MappingType);
		}
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x453FCC0", Offset = "0x453FCC0", VA = "0x453FCC0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	internal bool IsCustomType
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x4541380", Offset = "0x4541380", VA = "0x4541380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	internal bool ImplementsIXMLSerializable
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x4541490", Offset = "0x4541490", VA = "0x4541490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4538370", Offset = "0x4538370", VA = "0x4538370")]
	public DataColumn()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4538710", Offset = "0x4538710", VA = "0x4538710")]
	public DataColumn(string columnName, Type dataType)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x45383D0", Offset = "0x45383D0", VA = "0x45383D0")]
	public DataColumn(string columnName, Type dataType, string expr, MappingType type)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x45387D0", Offset = "0x45387D0", VA = "0x45387D0")]
	private void UpdateColumnType(Type type, StorageType typeCode)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x453C340", Offset = "0x453C340", VA = "0x453C340")]
	internal string GetColumnValueAsString(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x453D4F0", Offset = "0x453D4F0", VA = "0x453D4F0")]
	internal void BindExpression()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x453DCF0", Offset = "0x453DCF0", VA = "0x453DCF0")]
	private void SetMaxLengthSimpleType()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x453EC90", Offset = "0x453EC90", VA = "0x453EC90")]
	internal void SetOrdinalInternal(int ordinal)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x453EF60", Offset = "0x453EF60", VA = "0x453EF60")]
	internal void SetTable(DataTable table)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x453F040", Offset = "0x453F040", VA = "0x453F040")]
	private DataRow GetDataRow(int index)
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x453DB10", Offset = "0x453DB10", VA = "0x453DB10")]
	internal void InitializeRecord(int record)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x453F370", Offset = "0x453F370", VA = "0x453F370")]
	internal void SetValue(int record, object value)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x453F4A0", Offset = "0x453F4A0", VA = "0x453F4A0")]
	internal void FreeRecord(int record)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x453FC60", Offset = "0x453FC60", VA = "0x453FC60")]
	internal void InternalUnique(bool value)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4540250", Offset = "0x4540250", VA = "0x4540250")]
	internal void CheckColumnConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x453E3A0", Offset = "0x453E3A0", VA = "0x453E3A0")]
	internal bool CheckMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4540320", Offset = "0x4540320", VA = "0x4540320")]
	internal void CheckMaxLength(DataRow dr)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4539640", Offset = "0x4539640", VA = "0x4539640")]
	protected internal void CheckNotAllowNull()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x45402A0", Offset = "0x45402A0", VA = "0x45402A0")]
	internal void CheckNullable(DataRow row)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x453FC10", Offset = "0x453FC10", VA = "0x453FC10")]
	protected void CheckUnique()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x45407D0", Offset = "0x45407D0", VA = "0x45407D0")]
	internal int Compare(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4540800", Offset = "0x4540800", VA = "0x4540800")]
	internal bool CompareValueTo(int record1, object value, bool checkType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x45409C0", Offset = "0x45409C0", VA = "0x45409C0")]
	internal int CompareValueTo(int record1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x45409F0", Offset = "0x45409F0", VA = "0x45409F0")]
	internal object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4540A20", Offset = "0x4540A20", VA = "0x4540A20")]
	internal void Copy(int srcRecordNo, int dstRecordNo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4540A50", Offset = "0x4540A50", VA = "0x4540A50")]
	internal DataColumn Clone()
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4541240", Offset = "0x4541240", VA = "0x4541240")]
	internal object GetAggregateValue(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4540390", Offset = "0x4540390", VA = "0x4540390")]
	private int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x45412F0", Offset = "0x45412F0", VA = "0x45412F0")]
	internal void Init(int record)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4539E30", Offset = "0x4539E30", VA = "0x4539E30")]
	internal static bool IsAutoIncrementType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x45413F0", Offset = "0x45413F0", VA = "0x45413F0")]
	internal bool IsValueCustomTypeInstance(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x453C5F0", Offset = "0x453C5F0", VA = "0x453C5F0")]
	internal bool IsInRelation()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4541510", Offset = "0x4541510", VA = "0x4541510")]
	internal bool IsMaxLengthViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4541D70", Offset = "0x4541D70", VA = "0x4541D70")]
	internal bool IsNotAllowDBNullViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4542000", Offset = "0x4542000", VA = "0x4542000")]
	internal void FinishInitInProgress()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4542020", Offset = "0x4542020", VA = "0x4542020", Slot = "18")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x453BF20", Offset = "0x453BF20", VA = "0x453BF20")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4542050", Offset = "0x4542050", VA = "0x4542050")]
	private void InsureStorage()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x45420E0", Offset = "0x45420E0", VA = "0x45420E0")]
	internal void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4542190", Offset = "0x4542190", VA = "0x4542190")]
	internal void OnSetDataSet()
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x45421A0", Offset = "0x45421A0", VA = "0x45421A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4542230", Offset = "0x4542230", VA = "0x4542230")]
	internal object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x45422E0", Offset = "0x45422E0", VA = "0x45422E0")]
	internal object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x453C410", Offset = "0x453C410", VA = "0x453C410")]
	internal string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x45423A0", Offset = "0x45423A0", VA = "0x45423A0")]
	internal void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4542470", Offset = "0x4542470", VA = "0x4542470")]
	internal object GetEmptyColumnStore(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4542510", Offset = "0x4542510", VA = "0x4542510")]
	internal void CopyValueIntoStore(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4542530", Offset = "0x4542530", VA = "0x4542530")]
	internal void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x45425E0", Offset = "0x45425E0", VA = "0x45425E0")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4542700", Offset = "0x4542700", VA = "0x4542700")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x453D9B0", Offset = "0x453D9B0", VA = "0x453D9B0")]
	internal void HandleDependentColumnList(DataExpression oldExpression, DataExpression newExpression)
	{
	}
}
