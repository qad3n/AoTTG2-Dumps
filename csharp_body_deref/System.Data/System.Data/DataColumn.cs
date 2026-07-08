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
		[Address(RVA = "0x41FBCF0", Offset = "0x41FBCF0", VA = "0x41FBCF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x41FBD00", Offset = "0x41FBD00", VA = "0x41FBD00")]
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
		[Address(RVA = "0x41FC3F0", Offset = "0x41FC3F0", VA = "0x41FC3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x41FC410", Offset = "0x41FC410", VA = "0x41FC410")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	internal object AutoIncrementCurrent
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x41FD6E0", Offset = "0x41FD6E0", VA = "0x41FD6E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x41FD750", Offset = "0x41FD750", VA = "0x41FD750")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	internal AutoIncrementValue AutoInc
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x41FD5A0", Offset = "0x41FD5A0", VA = "0x41FD5A0")]
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
		[Address(RVA = "0x41FD720", Offset = "0x41FD720", VA = "0x41FD720")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x41FD9D0", Offset = "0x41FD9D0", VA = "0x41FD9D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	[DefaultValue(1L)]
	public long AutoIncrementStep
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x41FDAF0", Offset = "0x41FDAF0", VA = "0x41FDAF0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x41FDB20", Offset = "0x41FDB20", VA = "0x41FDB20")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public string Caption
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x41FDC40", Offset = "0x41FDC40", VA = "0x41FDC40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x41FDC50", Offset = "0x41FDC50", VA = "0x41FDC50")]
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
		[Address(RVA = "0x41FDD80", Offset = "0x41FDD80", VA = "0x41FDD80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x41FDD90", Offset = "0x41FDD90", VA = "0x41FDD90")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	internal string EncodedColumnName
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x41FE880", Offset = "0x41FE880", VA = "0x41FE880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x41FD8F0", Offset = "0x41FD8F0", VA = "0x41FD8F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	internal CultureInfo Locale
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x41FDD20", Offset = "0x41FDD20", VA = "0x41FDD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	internal int ObjectID
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x41FE910", Offset = "0x41FE910", VA = "0x41FE910")]
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
		[Address(RVA = "0x41FE920", Offset = "0x41FE920", VA = "0x41FE920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x41FE930", Offset = "0x41FE930", VA = "0x41FE930")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool Computed
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x41FED60", Offset = "0x41FED60", VA = "0x41FED60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	internal DataExpression DataExpression
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x41FED70", Offset = "0x41FED70", VA = "0x41FED70")]
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
		[Address(RVA = "0x41FED80", Offset = "0x41FED80", VA = "0x41FED80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x41FCA80", Offset = "0x41FCA80", VA = "0x41FCA80")]
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
		[Address(RVA = "0x41FF8C0", Offset = "0x41FF8C0", VA = "0x41FF8C0")]
		get
		{
			return default(DataSetDateTime);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x41FF8D0", Offset = "0x41FF8D0", VA = "0x41FF8D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	[TypeConverter(typeof(DefaultValueTypeConverter))]
	public object DefaultValue
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x41FF0B0", Offset = "0x41FF0B0", VA = "0x41FF0B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x41FF240", Offset = "0x41FF240", VA = "0x41FF240")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	internal bool DefaultValueIsNull
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x41FFD80", Offset = "0x41FFD80", VA = "0x41FFD80")]
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
		[Address(RVA = "0x41FFDB0", Offset = "0x41FFDB0", VA = "0x41FFDB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x41FB180", Offset = "0x41FB180", VA = "0x41FB180")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x42004C0", Offset = "0x42004C0", VA = "0x42004C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	internal bool HasData
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x41FC960", Offset = "0x41FC960", VA = "0x41FC960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	internal bool ImplementsINullable
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x4200530", Offset = "0x4200530", VA = "0x4200530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	internal bool ImplementsIChangeTracking
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4200540", Offset = "0x4200540", VA = "0x4200540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	internal bool ImplementsIRevertibleChangeTracking
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4200550", Offset = "0x4200550", VA = "0x4200550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	internal bool IsValueType
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4200560", Offset = "0x4200560", VA = "0x4200560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	internal bool IsSqlType
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x4200580", Offset = "0x4200580", VA = "0x4200580")]
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
		[Address(RVA = "0x4200660", Offset = "0x4200660", VA = "0x4200660")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x4200670", Offset = "0x4200670", VA = "0x4200670")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public string Namespace
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x42011B0", Offset = "0x42011B0", VA = "0x42011B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x4201200", Offset = "0x4201200", VA = "0x4201200")]
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
		[Address(RVA = "0x4201520", Offset = "0x4201520", VA = "0x4201520")]
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
		[Address(RVA = "0x4201670", Offset = "0x4201670", VA = "0x4201670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x41FFF70", Offset = "0x41FFF70", VA = "0x41FFF70")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Index SortIndex
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x4201700", Offset = "0x4201700", VA = "0x4201700")]
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
		[Address(RVA = "0x42017F0", Offset = "0x42017F0", VA = "0x42017F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	internal object this[int record]
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x41FEC80", Offset = "0x41FEC80", VA = "0x41FEC80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x4201900", Offset = "0x4201900", VA = "0x4201900")]
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
		[Address(RVA = "0x4201D70", Offset = "0x4201D70", VA = "0x4201D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x4201D80", Offset = "0x4201D80", VA = "0x4201D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	internal string XmlDataType
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x4202510", Offset = "0x4202510", VA = "0x4202510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x4202520", Offset = "0x4202520", VA = "0x4202520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	internal SimpleType SimpleType
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x4202540", Offset = "0x4202540", VA = "0x4202540")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x41FB020", Offset = "0x41FB020", VA = "0x41FB020")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	[DefaultValue(MappingType.Element)]
	public virtual MappingType ColumnMapping
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x4202550", Offset = "0x4202550", VA = "0x4202550", Slot = "16")]
		get
		{
			return default(MappingType);
		}
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x4202560", Offset = "0x4202560", VA = "0x4202560", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	internal bool IsCustomType
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x4203C20", Offset = "0x4203C20", VA = "0x4203C20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	internal bool ImplementsIXMLSerializable
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x4203D30", Offset = "0x4203D30", VA = "0x4203D30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x41FAC10", Offset = "0x41FAC10", VA = "0x41FAC10")]
	public DataColumn()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x41FAFB0", Offset = "0x41FAFB0", VA = "0x41FAFB0")]
	public DataColumn(string columnName, Type dataType)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x41FAC70", Offset = "0x41FAC70", VA = "0x41FAC70")]
	public DataColumn(string columnName, Type dataType, string expr, MappingType type)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x41FB070", Offset = "0x41FB070", VA = "0x41FB070")]
	private void UpdateColumnType(Type type, StorageType typeCode)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x41FEBE0", Offset = "0x41FEBE0", VA = "0x41FEBE0")]
	internal string GetColumnValueAsString(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x41FFD90", Offset = "0x41FFD90", VA = "0x41FFD90")]
	internal void BindExpression()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4200590", Offset = "0x4200590", VA = "0x4200590")]
	private void SetMaxLengthSimpleType()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4201530", Offset = "0x4201530", VA = "0x4201530")]
	internal void SetOrdinalInternal(int ordinal)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4201800", Offset = "0x4201800", VA = "0x4201800")]
	internal void SetTable(DataTable table)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x42018E0", Offset = "0x42018E0", VA = "0x42018E0")]
	private DataRow GetDataRow(int index)
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x42003B0", Offset = "0x42003B0", VA = "0x42003B0")]
	internal void InitializeRecord(int record)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4201C10", Offset = "0x4201C10", VA = "0x4201C10")]
	internal void SetValue(int record, object value)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4201D40", Offset = "0x4201D40", VA = "0x4201D40")]
	internal void FreeRecord(int record)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4202500", Offset = "0x4202500", VA = "0x4202500")]
	internal void InternalUnique(bool value)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4202AF0", Offset = "0x4202AF0", VA = "0x4202AF0")]
	internal void CheckColumnConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4200C40", Offset = "0x4200C40", VA = "0x4200C40")]
	internal bool CheckMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4202BC0", Offset = "0x4202BC0", VA = "0x4202BC0")]
	internal void CheckMaxLength(DataRow dr)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x41FBEE0", Offset = "0x41FBEE0", VA = "0x41FBEE0")]
	protected internal void CheckNotAllowNull()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4202B40", Offset = "0x4202B40", VA = "0x4202B40")]
	internal void CheckNullable(DataRow row)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x42024B0", Offset = "0x42024B0", VA = "0x42024B0")]
	protected void CheckUnique()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4203070", Offset = "0x4203070", VA = "0x4203070")]
	internal int Compare(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x42030A0", Offset = "0x42030A0", VA = "0x42030A0")]
	internal bool CompareValueTo(int record1, object value, bool checkType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4203260", Offset = "0x4203260", VA = "0x4203260")]
	internal int CompareValueTo(int record1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4203290", Offset = "0x4203290", VA = "0x4203290")]
	internal object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x42032C0", Offset = "0x42032C0", VA = "0x42032C0")]
	internal void Copy(int srcRecordNo, int dstRecordNo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x42032F0", Offset = "0x42032F0", VA = "0x42032F0")]
	internal DataColumn Clone()
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4203AE0", Offset = "0x4203AE0", VA = "0x4203AE0")]
	internal object GetAggregateValue(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4202C30", Offset = "0x4202C30", VA = "0x4202C30")]
	private int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4203B90", Offset = "0x4203B90", VA = "0x4203B90")]
	internal void Init(int record)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x41FC6D0", Offset = "0x41FC6D0", VA = "0x41FC6D0")]
	internal static bool IsAutoIncrementType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4203C90", Offset = "0x4203C90", VA = "0x4203C90")]
	internal bool IsValueCustomTypeInstance(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x41FEE90", Offset = "0x41FEE90", VA = "0x41FEE90")]
	internal bool IsInRelation()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4203DB0", Offset = "0x4203DB0", VA = "0x4203DB0")]
	internal bool IsMaxLengthViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4204610", Offset = "0x4204610", VA = "0x4204610")]
	internal bool IsNotAllowDBNullViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x42048A0", Offset = "0x42048A0", VA = "0x42048A0")]
	internal void FinishInitInProgress()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x42048C0", Offset = "0x42048C0", VA = "0x42048C0", Slot = "18")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x41FE7C0", Offset = "0x41FE7C0", VA = "0x41FE7C0")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x42048F0", Offset = "0x42048F0", VA = "0x42048F0")]
	private void InsureStorage()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4204980", Offset = "0x4204980", VA = "0x4204980")]
	internal void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4204A30", Offset = "0x4204A30", VA = "0x4204A30")]
	internal void OnSetDataSet()
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4204A40", Offset = "0x4204A40", VA = "0x4204A40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4204AD0", Offset = "0x4204AD0", VA = "0x4204AD0")]
	internal object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4204B80", Offset = "0x4204B80", VA = "0x4204B80")]
	internal object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x41FECB0", Offset = "0x41FECB0", VA = "0x41FECB0")]
	internal string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4204C40", Offset = "0x4204C40", VA = "0x4204C40")]
	internal void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4204D10", Offset = "0x4204D10", VA = "0x4204D10")]
	internal object GetEmptyColumnStore(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4204DB0", Offset = "0x4204DB0", VA = "0x4204DB0")]
	internal void CopyValueIntoStore(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4204DD0", Offset = "0x4204DD0", VA = "0x4204DD0")]
	internal void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4204E80", Offset = "0x4204E80", VA = "0x4204E80")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4204FA0", Offset = "0x4204FA0", VA = "0x4204FA0")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4200250", Offset = "0x4200250", VA = "0x4200250")]
	internal void HandleDependentColumnList(DataExpression oldExpression, DataExpression newExpression)
	{
	}
}
