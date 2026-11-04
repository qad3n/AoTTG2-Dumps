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

[Token(Token = "0x2000009")]
[ToolboxItem(false)]
[DesignTimeVisible(false)]
[DefaultProperty("ColumnName")]
public class DataColumn : MarshalByValueComponent
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	private bool _allowNull;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	private string _caption;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	private string _columnName;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x38")]
	private Type _dataType;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x40")]
	private StorageType _storageType;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x48")]
	internal object _defaultValue;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x50")]
	private DataSetDateTime _dateTimeMode;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x58")]
	private DataExpression _expression;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x60")]
	private int _maxLength;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x64")]
	private int _ordinal;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x68")]
	private bool _readOnly;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x70")]
	internal Index _sortIndex;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x78")]
	internal DataTable _table;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x80")]
	private bool _unique;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x84")]
	internal MappingType _columnMapping;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x88")]
	internal int _hashCode;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x8C")]
	internal int _errors;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x90")]
	private bool _isSqlType;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x91")]
	private bool _implementsINullable;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x92")]
	private bool _implementsIChangeTracking;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x93")]
	private bool _implementsIRevertibleChangeTracking;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x94")]
	private bool _implementsIXMLSerializable;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x95")]
	private bool _defaultValueIsNull;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x98")]
	internal List<DataColumn> _dependentColumns;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0xA0")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0xA8")]
	private DataStorage _storage;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0xB0")]
	private AutoIncrementValue _autoInc;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0xB8")]
	internal string _columnUri;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0xC0")]
	private string _columnPrefix;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0xC8")]
	internal string _encodedColumnName;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0xD0")]
	internal SimpleType _simpleType;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0xD8")]
	private readonly int _objectID;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0xE8")]
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging;

	[Token(Token = "0x17000003")]
	[DefaultValue(true)]
	public bool AllowDBNull
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x24C5670", Offset = "0x24C3C70", VA = "0x1824C5670")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[DefaultValue(false)]
	[RefreshProperties(RefreshProperties.All)]
	public bool AutoIncrement
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x24C5070", Offset = "0x24C3670", VA = "0x1824C5070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x24C5B70", Offset = "0x24C4170", VA = "0x1824C5B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal object AutoIncrementCurrent
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x24C4FC0", Offset = "0x24C35C0", VA = "0x1824C4FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x24C57D0", Offset = "0x24C3DD0", VA = "0x1824C57D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal AutoIncrementValue AutoInc
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x24C4EC0", Offset = "0x24C34C0", VA = "0x1824C4EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	[DefaultValue(0L)]
	public long AutoIncrementSeed
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x24C5010", Offset = "0x24C3610", VA = "0x1824C5010")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x24C5970", Offset = "0x24C3F70", VA = "0x1824C5970")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	[DefaultValue(1L)]
	public long AutoIncrementStep
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x24C5040", Offset = "0x24C3640", VA = "0x1824C5040")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x24C5A70", Offset = "0x24C4070", VA = "0x1824C5A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public string Caption
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x24C5090", Offset = "0x24C3690", VA = "0x1824C5090")]
		get
		{
			return null;
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x24C5D50", Offset = "0x24C4350", VA = "0x1824C5D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	[DefaultValue("")]
	[RefreshProperties(RefreshProperties.All)]
	public string ColumnName
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x24C60E0", Offset = "0x24C46E0", VA = "0x1824C60E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	internal string EncodedColumnName
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x24C5220", Offset = "0x24C3820", VA = "0x1824C5220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x24C5370", Offset = "0x24C3970", VA = "0x1824C5370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	internal CultureInfo Locale
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x24C54D0", Offset = "0x24C3AD0", VA = "0x1824C54D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	internal int ObjectID
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x24C5570", Offset = "0x24C3B70", VA = "0x1824C5570")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	[DefaultValue("")]
	public string Prefix
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x24C8180", Offset = "0x24C6780", VA = "0x1824C8180")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	internal bool Computed
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x24C50B0", Offset = "0x24C36B0", VA = "0x1824C50B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	internal DataExpression DataExpression
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	[DefaultValue(typeof(string))]
	[RefreshProperties(RefreshProperties.All)]
	[TypeConverter(typeof(ColumnTypeConverter))]
	public Type DataType
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x24C64E0", Offset = "0x24C4AE0", VA = "0x1824C64E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	[RefreshProperties(RefreshProperties.All)]
	[DefaultValue(DataSetDateTime.UnspecifiedLocal)]
	public DataSetDateTime DateTimeMode
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(DataSetDateTime);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x24C6FF0", Offset = "0x24C55F0", VA = "0x1824C6FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	[TypeConverter(typeof(DefaultValueTypeConverter))]
	public object DefaultValue
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x24C50D0", Offset = "0x24C36D0", VA = "0x1824C50D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x24C7160", Offset = "0x24C5760", VA = "0x1824C7160")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	internal bool DefaultValueIsNull
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x24C50C0", Offset = "0x24C36C0", VA = "0x1824C50C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	[RefreshProperties(RefreshProperties.All)]
	[DefaultValue("")]
	public string Expression
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x24C52A0", Offset = "0x24C38A0", VA = "0x1824C52A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x24C7450", Offset = "0x24C5A50", VA = "0x1824C7450")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x24C52F0", Offset = "0x24C38F0", VA = "0x1824C52F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	internal bool HasData
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x24C53D0", Offset = "0x24C39D0", VA = "0x1824C53D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	internal bool ImplementsINullable
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x24C53F0", Offset = "0x24C39F0", VA = "0x1824C53F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	internal bool ImplementsIChangeTracking
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x24C53E0", Offset = "0x24C39E0", VA = "0x1824C53E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001B")]
	internal bool ImplementsIRevertibleChangeTracking
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x24C5400", Offset = "0x24C3A00", VA = "0x1824C5400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	internal bool IsValueType
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x24C5480", Offset = "0x24C3A80", VA = "0x1824C5480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool IsSqlType
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	[DefaultValue(-1)]
	public int MaxLength
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x24C7C20", Offset = "0x24C6220", VA = "0x1824C7C20")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public string Namespace
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x24C5530", Offset = "0x24C3B30", VA = "0x1824C5530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x24C8000", Offset = "0x24C6600", VA = "0x1824C8000")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public int Ordinal
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0xCDE980", Offset = "0xCDCF80", VA = "0x180CDE980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000021")]
	[DefaultValue(false)]
	public bool ReadOnly
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x24C82F0", Offset = "0x24C68F0", VA = "0x1824C82F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Index SortIndex
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x24C5580", Offset = "0x24C3B80", VA = "0x1824C5580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public DataTable Table
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	internal object this[int record]
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x24C54A0", Offset = "0x24C3AA0", VA = "0x1824C54A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x24C7A90", Offset = "0x24C6090", VA = "0x1824C7A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	[DefaultValue(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public bool Unique
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x24C8430", Offset = "0x24C6A30", VA = "0x1824C8430")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	internal string XmlDataType
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x1BD5200", Offset = "0x1BD3800", VA = "0x181BD5200")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	internal SimpleType SimpleType
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x24C83D0", Offset = "0x24C69D0", VA = "0x1824C83D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	[DefaultValue(MappingType.Element)]
	public virtual MappingType ColumnMapping
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0", Slot = "16")]
		get
		{
			return default(MappingType);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x24C5E10", Offset = "0x24C4410", VA = "0x1824C5E10", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	internal bool IsCustomType
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x24C5410", Offset = "0x24C3A10", VA = "0x1824C5410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	internal bool ImplementsIXMLSerializable
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x1CD34F0", Offset = "0x1CD1AF0", VA = "0x181CD34F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x24C4AF0", Offset = "0x24C30F0", VA = "0x1824C4AF0")]
	public DataColumn()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x24C4AC0", Offset = "0x24C30C0", VA = "0x1824C4AC0")]
	public DataColumn(string columnName, Type dataType)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x24C4B50", Offset = "0x24C3150", VA = "0x1824C4B50")]
	public DataColumn(string columnName, Type dataType, string expr, MappingType type)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x24C49B0", Offset = "0x24C2FB0", VA = "0x1824C49B0")]
	private void UpdateColumnType(Type type, StorageType typeCode)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x24C32D0", Offset = "0x24C18D0", VA = "0x1824C32D0")]
	internal string GetColumnValueAsString(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x24C1F60", Offset = "0x24C0560", VA = "0x1824C1F60")]
	internal void BindExpression()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x24C4480", Offset = "0x24C2A80", VA = "0x1824C4480")]
	private void SetMaxLengthSimpleType()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x24C45B0", Offset = "0x24C2BB0", VA = "0x1824C45B0")]
	internal void SetOrdinalInternal(int ordinal)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x24C4740", Offset = "0x24C2D40", VA = "0x1824C4740")]
	internal void SetTable(DataTable table)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x24C33C0", Offset = "0x24C19C0", VA = "0x1824C33C0")]
	private DataRow GetDataRow(int index)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x24C37B0", Offset = "0x24C1DB0", VA = "0x1824C37B0")]
	internal void InitializeRecord(int record)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x24C4820", Offset = "0x24C2E20", VA = "0x1824C4820")]
	internal void SetValue(int record, object value)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x24C31B0", Offset = "0x24C17B0", VA = "0x1824C31B0")]
	internal void FreeRecord(int record)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
	internal void InternalUnique(bool value)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x24C1F90", Offset = "0x24C0590", VA = "0x1824C1F90")]
	internal void CheckColumnConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x24C2140", Offset = "0x24C0740", VA = "0x1824C2140")]
	internal bool CheckMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x24C20B0", Offset = "0x24C06B0", VA = "0x1824C20B0")]
	internal void CheckMaxLength(DataRow dr)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x24C2380", Offset = "0x24C0980", VA = "0x1824C2380")]
	protected internal void CheckNotAllowNull()
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x24C26A0", Offset = "0x24C0CA0", VA = "0x1824C26A0")]
	internal void CheckNullable(DataRow row)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x24C2730", Offset = "0x24C0D30", VA = "0x1824C2730")]
	protected void CheckUnique()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x24C2F70", Offset = "0x24C1570", VA = "0x1824C2F70")]
	internal int Compare(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x24C2D70", Offset = "0x24C1370", VA = "0x1824C2D70")]
	internal bool CompareValueTo(int record1, object value, bool checkType)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x24C2F40", Offset = "0x24C1540", VA = "0x1824C2F40")]
	internal int CompareValueTo(int record1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x24C3050", Offset = "0x24C1650", VA = "0x1824C3050")]
	internal object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x24C3160", Offset = "0x24C1760", VA = "0x1824C3160")]
	internal void Copy(int srcRecordNo, int dstRecordNo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x24C2790", Offset = "0x24C0D90", VA = "0x1824C2790")]
	internal DataColumn Clone()
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x24C31F0", Offset = "0x24C17F0", VA = "0x1824C31F0")]
	internal object GetAggregateValue(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x24C3430", Offset = "0x24C1A30", VA = "0x1824C3430")]
	private int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x24C3700", Offset = "0x24C1D00", VA = "0x1824C3700")]
	internal void Init(int record)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x24C3890", Offset = "0x24C1E90", VA = "0x1824C3890")]
	internal static bool IsAutoIncrementType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x24C4220", Offset = "0x24C2820", VA = "0x1824C4220")]
	internal bool IsValueCustomTypeInstance(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x24C3B20", Offset = "0x24C2120", VA = "0x1824C3B20")]
	internal bool IsInRelation()
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x24C3C60", Offset = "0x24C2260", VA = "0x1824C3C60")]
	internal bool IsMaxLengthViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x24C4070", Offset = "0x24C2670", VA = "0x1824C4070")]
	internal bool IsNotAllowDBNullViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x24C3190", Offset = "0x24C1790", VA = "0x1824C3190")]
	internal void FinishInitInProgress()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x24C42F0", Offset = "0x24C28F0", VA = "0x1824C42F0", Slot = "18")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x24C4310", Offset = "0x24C2910", VA = "0x1824C4310")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x24C3800", Offset = "0x24C1E00", VA = "0x1824C3800")]
	private void InsureStorage()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x24C4430", Offset = "0x24C2A30", VA = "0x1824C4430")]
	internal void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void OnSetDataSet()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x24C4910", Offset = "0x24C2F10", VA = "0x1824C4910", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x24C3080", Offset = "0x24C1680", VA = "0x1824C3080")]
	internal object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x24C30D0", Offset = "0x24C16D0", VA = "0x1824C30D0")]
	internal object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x24C2FA0", Offset = "0x24C15A0", VA = "0x1824C2FA0")]
	internal string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x24C2FF0", Offset = "0x24C15F0", VA = "0x1824C2FF0")]
	internal void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x24C33F0", Offset = "0x24C19F0", VA = "0x1824C33F0")]
	internal object GetEmptyColumnStore(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x24C3130", Offset = "0x24C1730", VA = "0x1824C3130")]
	internal void CopyValueIntoStore(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x24C46F0", Offset = "0x24C2CF0", VA = "0x1824C46F0")]
	internal void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x24C1E40", Offset = "0x24C0440", VA = "0x1824C1E40")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x24C4390", Offset = "0x24C2990", VA = "0x1824C4390")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x24C3460", Offset = "0x24C1A60", VA = "0x1824C3460")]
	internal void HandleDependentColumnList(DataExpression oldExpression, DataExpression newExpression)
	{
	}
}
