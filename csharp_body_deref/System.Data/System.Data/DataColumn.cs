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
		[Address(RVA = "0x5E629A0", Offset = "0x5E619A0", VA = "0x5E629A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x5E629B0", Offset = "0x5E619B0", VA = "0x5E629B0")]
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
		[Address(RVA = "0x5E62F90", Offset = "0x5E61F90", VA = "0x5E62F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x5E62FB0", Offset = "0x5E61FB0", VA = "0x5E62FB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal object AutoIncrementCurrent
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x5E640B0", Offset = "0x5E630B0", VA = "0x5E640B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x5E64120", Offset = "0x5E63120", VA = "0x5E64120")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal AutoIncrementValue AutoInc
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x5E63F70", Offset = "0x5E62F70", VA = "0x5E63F70")]
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
		[Address(RVA = "0x5E640F0", Offset = "0x5E630F0", VA = "0x5E640F0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x5E64390", Offset = "0x5E63390", VA = "0x5E64390")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	[DefaultValue(1L)]
	public long AutoIncrementStep
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x5E644B0", Offset = "0x5E634B0", VA = "0x5E644B0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x5E644E0", Offset = "0x5E634E0", VA = "0x5E644E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public string Caption
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x5E64600", Offset = "0x5E63600", VA = "0x5E64600")]
		get
		{
			return null;
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x5E64610", Offset = "0x5E63610", VA = "0x5E64610")]
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
		[Address(RVA = "0x5E64740", Offset = "0x5E63740", VA = "0x5E64740")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x5E64750", Offset = "0x5E63750", VA = "0x5E64750")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	internal string EncodedColumnName
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x5E64D00", Offset = "0x5E63D00", VA = "0x5E64D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x5E642B0", Offset = "0x5E632B0", VA = "0x5E642B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	internal CultureInfo Locale
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5E646E0", Offset = "0x5E636E0", VA = "0x5E646E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	internal int ObjectID
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x5E64D90", Offset = "0x5E63D90", VA = "0x5E64D90")]
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
		[Address(RVA = "0x5E64DA0", Offset = "0x5E63DA0", VA = "0x5E64DA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5E64DB0", Offset = "0x5E63DB0", VA = "0x5E64DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	internal bool Computed
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x5E651E0", Offset = "0x5E641E0", VA = "0x5E651E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	internal DataExpression DataExpression
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x5E651F0", Offset = "0x5E641F0", VA = "0x5E651F0")]
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
		[Address(RVA = "0x5E65200", Offset = "0x5E64200", VA = "0x5E65200")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x5E63610", Offset = "0x5E62610", VA = "0x5E63610")]
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
		[Address(RVA = "0x5E65D30", Offset = "0x5E64D30", VA = "0x5E65D30")]
		get
		{
			return default(DataSetDateTime);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x5E65D40", Offset = "0x5E64D40", VA = "0x5E65D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	[TypeConverter(typeof(DefaultValueTypeConverter))]
	public object DefaultValue
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x5E65510", Offset = "0x5E64510", VA = "0x5E65510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x5E656A0", Offset = "0x5E646A0", VA = "0x5E656A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	internal bool DefaultValueIsNull
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5E661F0", Offset = "0x5E651F0", VA = "0x5E661F0")]
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
		[Address(RVA = "0x5E66220", Offset = "0x5E65220", VA = "0x5E66220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x5E62040", Offset = "0x5E61040", VA = "0x5E62040")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x5E66910", Offset = "0x5E65910", VA = "0x5E66910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	internal bool HasData
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x5E634F0", Offset = "0x5E624F0", VA = "0x5E634F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	internal bool ImplementsINullable
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x5E66980", Offset = "0x5E65980", VA = "0x5E66980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	internal bool ImplementsIChangeTracking
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x5E66990", Offset = "0x5E65990", VA = "0x5E66990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001B")]
	internal bool ImplementsIRevertibleChangeTracking
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x5E669A0", Offset = "0x5E659A0", VA = "0x5E669A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	internal bool IsValueType
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x5E669B0", Offset = "0x5E659B0", VA = "0x5E669B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool IsSqlType
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x5E669D0", Offset = "0x5E659D0", VA = "0x5E669D0")]
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
		[Address(RVA = "0x5E66AB0", Offset = "0x5E65AB0", VA = "0x5E66AB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x5E66AC0", Offset = "0x5E65AC0", VA = "0x5E66AC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public string Namespace
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5E67470", Offset = "0x5E66470", VA = "0x5E67470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5E674C0", Offset = "0x5E664C0", VA = "0x5E674C0")]
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
		[Address(RVA = "0x5E677E0", Offset = "0x5E667E0", VA = "0x5E677E0")]
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
		[Address(RVA = "0x5E67930", Offset = "0x5E66930", VA = "0x5E67930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x5E663E0", Offset = "0x5E653E0", VA = "0x5E663E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Index SortIndex
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x5E679C0", Offset = "0x5E669C0", VA = "0x5E679C0")]
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
		[Address(RVA = "0x5E67AA0", Offset = "0x5E66AA0", VA = "0x5E67AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	internal object this[int record]
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x5E65100", Offset = "0x5E64100", VA = "0x5E65100")]
		get
		{
			return null;
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x5E67BA0", Offset = "0x5E66BA0", VA = "0x5E67BA0")]
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
		[Address(RVA = "0x5E68010", Offset = "0x5E67010", VA = "0x5E68010")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x5E68020", Offset = "0x5E67020", VA = "0x5E68020")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	internal string XmlDataType
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x5E68620", Offset = "0x5E67620", VA = "0x5E68620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x5E68630", Offset = "0x5E67630", VA = "0x5E68630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	internal SimpleType SimpleType
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x5E68650", Offset = "0x5E67650", VA = "0x5E68650")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x5E61ED0", Offset = "0x5E60ED0", VA = "0x5E61ED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	[DefaultValue(MappingType.Element)]
	public virtual MappingType ColumnMapping
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x5E68660", Offset = "0x5E67660", VA = "0x5E68660", Slot = "16")]
		get
		{
			return default(MappingType);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x5E68670", Offset = "0x5E67670", VA = "0x5E68670", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	internal bool IsCustomType
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x5E69CB0", Offset = "0x5E68CB0", VA = "0x5E69CB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	internal bool ImplementsIXMLSerializable
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x5E69DC0", Offset = "0x5E68DC0", VA = "0x5E69DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5E619B0", Offset = "0x5E609B0", VA = "0x5E619B0")]
	public DataColumn()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x5E61D50", Offset = "0x5E60D50", VA = "0x5E61D50")]
	public DataColumn(string columnName, Type dataType)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x5E61A10", Offset = "0x5E60A10", VA = "0x5E61A10")]
	public DataColumn(string columnName, Type dataType, string expr, MappingType type)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5E61F20", Offset = "0x5E60F20", VA = "0x5E61F20")]
	private void UpdateColumnType(Type type, StorageType typeCode)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5E65060", Offset = "0x5E64060", VA = "0x5E65060")]
	internal string GetColumnValueAsString(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5E66200", Offset = "0x5E65200", VA = "0x5E66200")]
	internal void BindExpression()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5E669E0", Offset = "0x5E659E0", VA = "0x5E669E0")]
	private void SetMaxLengthSimpleType()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5E677F0", Offset = "0x5E667F0", VA = "0x5E677F0")]
	internal void SetOrdinalInternal(int ordinal)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x5E67AB0", Offset = "0x5E66AB0", VA = "0x5E67AB0")]
	internal void SetTable(DataTable table)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5E67B80", Offset = "0x5E66B80", VA = "0x5E67B80")]
	private DataRow GetDataRow(int index)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5E66800", Offset = "0x5E65800", VA = "0x5E66800")]
	internal void InitializeRecord(int record)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x5E67EB0", Offset = "0x5E66EB0", VA = "0x5E67EB0")]
	internal void SetValue(int record, object value)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5E67FE0", Offset = "0x5E66FE0", VA = "0x5E67FE0")]
	internal void FreeRecord(int record)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5E68610", Offset = "0x5E67610", VA = "0x5E68610")]
	internal void InternalUnique(bool value)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5E68BF0", Offset = "0x5E67BF0", VA = "0x5E68BF0")]
	internal void CheckColumnConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5E66FA0", Offset = "0x5E65FA0", VA = "0x5E66FA0")]
	internal bool CheckMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x5E68CC0", Offset = "0x5E67CC0", VA = "0x5E68CC0")]
	internal void CheckMaxLength(DataRow dr)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x5E62B40", Offset = "0x5E61B40", VA = "0x5E62B40")]
	protected internal void CheckNotAllowNull()
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x5E68C40", Offset = "0x5E67C40", VA = "0x5E68C40")]
	internal void CheckNullable(DataRow row)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x5E685C0", Offset = "0x5E675C0", VA = "0x5E685C0")]
	protected void CheckUnique()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x5E69170", Offset = "0x5E68170", VA = "0x5E69170")]
	internal int Compare(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x5E691A0", Offset = "0x5E681A0", VA = "0x5E691A0")]
	internal bool CompareValueTo(int record1, object value, bool checkType)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x5E69360", Offset = "0x5E68360", VA = "0x5E69360")]
	internal int CompareValueTo(int record1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x5E69390", Offset = "0x5E68390", VA = "0x5E69390")]
	internal object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x5E693C0", Offset = "0x5E683C0", VA = "0x5E693C0")]
	internal void Copy(int srcRecordNo, int dstRecordNo)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x5E693F0", Offset = "0x5E683F0", VA = "0x5E693F0")]
	internal DataColumn Clone()
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x5E69B70", Offset = "0x5E68B70", VA = "0x5E69B70")]
	internal object GetAggregateValue(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x5E68D30", Offset = "0x5E67D30", VA = "0x5E68D30")]
	private int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x5E69C20", Offset = "0x5E68C20", VA = "0x5E69C20")]
	internal void Init(int record)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x5E63260", Offset = "0x5E62260", VA = "0x5E63260")]
	internal static bool IsAutoIncrementType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x5E69D20", Offset = "0x5E68D20", VA = "0x5E69D20")]
	internal bool IsValueCustomTypeInstance(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5E65310", Offset = "0x5E64310", VA = "0x5E65310")]
	internal bool IsInRelation()
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x5E69DD0", Offset = "0x5E68DD0", VA = "0x5E69DD0")]
	internal bool IsMaxLengthViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x5E6A4C0", Offset = "0x5E694C0", VA = "0x5E6A4C0")]
	internal bool IsNotAllowDBNullViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x5E6A750", Offset = "0x5E69750", VA = "0x5E6A750")]
	internal void FinishInitInProgress()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5E6A770", Offset = "0x5E69770", VA = "0x5E6A770", Slot = "18")]
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5E64C90", Offset = "0x5E63C90", VA = "0x5E64C90")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5E6A7A0", Offset = "0x5E697A0", VA = "0x5E6A7A0")]
	private void InsureStorage()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x5E6A830", Offset = "0x5E69830", VA = "0x5E6A830")]
	internal void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5E6A8E0", Offset = "0x5E698E0", VA = "0x5E6A8E0")]
	internal void OnSetDataSet()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5E6A8F0", Offset = "0x5E698F0", VA = "0x5E6A8F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5E6A980", Offset = "0x5E69980", VA = "0x5E6A980")]
	internal object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5E6AA30", Offset = "0x5E69A30", VA = "0x5E6AA30")]
	internal object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5E65130", Offset = "0x5E64130", VA = "0x5E65130")]
	internal string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5E6AAF0", Offset = "0x5E69AF0", VA = "0x5E6AAF0")]
	internal void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5E6ABC0", Offset = "0x5E69BC0", VA = "0x5E6ABC0")]
	internal object GetEmptyColumnStore(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5E6AC60", Offset = "0x5E69C60", VA = "0x5E6AC60")]
	internal void CopyValueIntoStore(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5E6AC80", Offset = "0x5E69C80", VA = "0x5E6AC80")]
	internal void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5E6AD30", Offset = "0x5E69D30", VA = "0x5E6AD30")]
	internal void AddDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5E6AE40", Offset = "0x5E69E40", VA = "0x5E6AE40")]
	internal void RemoveDependentColumn(DataColumn expressionColumn)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x5E666B0", Offset = "0x5E656B0", VA = "0x5E666B0")]
	internal void HandleDependentColumnList(DataExpression oldExpression, DataExpression newExpression)
	{
	}
}
