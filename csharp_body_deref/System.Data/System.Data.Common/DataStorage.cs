// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DataStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Concurrent;
using System.Xml;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BD")]
internal abstract class DataStorage
{
	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_storageClassType;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x10")]
	internal readonly DataColumn _column;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x18")]
	internal readonly DataTable _table;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Type _dataType;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x28")]
	internal readonly StorageType _storageTypeCode;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x30")]
	private BitArray _dbNullBits;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x38")]
	private readonly object _defaultValue;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x40")]
	internal readonly object _nullValue;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x48")]
	internal readonly bool _isCloneable;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x49")]
	internal readonly bool _isCustomDefinedType;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x4A")]
	internal readonly bool _isStringType;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x4B")]
	internal readonly bool _isValueType;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Func<Type, Tuple<bool, bool, bool, bool>> s_inspectTypeForInterfaces;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ConcurrentDictionary<Type, Tuple<bool, bool, bool, bool>> s_typeImplementsInterface;

	[Token(Token = "0x170001A6")]
	internal DataSetDateTime DateTimeMode
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x4624CE0", Offset = "0x4624CE0", VA = "0x4624CE0")]
		get
		{
			return default(DataSetDateTime);
		}
	}

	[Token(Token = "0x170001A7")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x4621F20", Offset = "0x4621F20", VA = "0x4621F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4621660", Offset = "0x4621660", VA = "0x4621660")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4624C60", Offset = "0x4624C60", VA = "0x4624C60")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4624B00", Offset = "0x4624B00", VA = "0x4624B00")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, bool isICloneable, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4621B30", Offset = "0x4621B30", VA = "0x4621B30", Slot = "4")]
	public virtual object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4624D00", Offset = "0x4624D00", VA = "0x4624D00")]
	public object AggregateCount(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4621CA0", Offset = "0x4621CA0", VA = "0x4621CA0")]
	protected int CompareBits(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B4E")]
	public abstract int Compare(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B4F")]
	public abstract int CompareValueTo(int recordNo1, object value);

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x4624DA0", Offset = "0x4624DA0", VA = "0x4624DA0", Slot = "7")]
	public virtual object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x4621FB0", Offset = "0x4621FB0", VA = "0x4621FB0")]
	protected void CopyBits(int srcRecordNo, int dstRecordNo)
	{
	}

	[Token(Token = "0x6000B52")]
	public abstract void Copy(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B53")]
	public abstract object Get(int recordNo);

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x4622060", Offset = "0x4622060", VA = "0x4622060")]
	protected object GetBits(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x4624DB0", Offset = "0x4624DB0", VA = "0x4624DB0", Slot = "10")]
	public virtual int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x4624DC0", Offset = "0x4624DC0", VA = "0x4624DC0")]
	protected bool HasValue(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x4624DE0", Offset = "0x4624DE0", VA = "0x4624DE0", Slot = "11")]
	public virtual bool IsNull(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B58")]
	public abstract void Set(int recordNo, object value);

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x4622220", Offset = "0x4622220", VA = "0x4622220")]
	protected void SetNullBit(int recordNo, bool flag)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x4622360", Offset = "0x4622360", VA = "0x4622360", Slot = "13")]
	public virtual void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B5B")]
	public abstract object ConvertXmlToObject(string s);

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4624E00", Offset = "0x4624E00", VA = "0x4624E00", Slot = "15")]
	public virtual object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	public abstract string ConvertObjectToXml(object value);

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x4624E40", Offset = "0x4624E40", VA = "0x4624E40", Slot = "17")]
	public virtual void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x4624E80", Offset = "0x4624E80", VA = "0x4624E80")]
	public static DataStorage CreateStorage(DataColumn column, Type dataType, StorageType typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4626660", Offset = "0x4626660", VA = "0x4626660")]
	internal static StorageType GetStorageType(Type dataType)
	{
		return default(StorageType);
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4626790", Offset = "0x4626790", VA = "0x4626790")]
	internal static Type GetTypeStorage(StorageType storageType)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4626820", Offset = "0x4626820", VA = "0x4626820")]
	internal static bool IsTypeCustomType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4624C80", Offset = "0x4624C80", VA = "0x4624C80")]
	internal static bool IsTypeCustomType(StorageType typeCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4626880", Offset = "0x4626880", VA = "0x4626880")]
	internal static bool IsSqlType(StorageType storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4626890", Offset = "0x4626890", VA = "0x4626890")]
	public static bool IsSqlType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4624CA0", Offset = "0x4624CA0", VA = "0x4624CA0")]
	private static bool DetermineIfValueType(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4626990", Offset = "0x4626990", VA = "0x4626990")]
	internal static void ImplementsInterfaces(StorageType typeCode, Type dataType, out bool sqlType, out bool nullable, out bool xmlSerializable, out bool changeTracking, out bool revertibleChangeTracking)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4626B00", Offset = "0x4626B00", VA = "0x4626B00")]
	private static Tuple<bool, bool, bool, bool> InspectTypeForInterfaces(Type dataType)
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4626C90", Offset = "0x4626C90", VA = "0x4626C90")]
	internal static bool ImplementsINullableValue(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4626D40", Offset = "0x4626D40", VA = "0x4626D40")]
	public static bool IsObjectNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4626E90", Offset = "0x4626E90", VA = "0x4626E90")]
	public static bool IsObjectSqlNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4626F40", Offset = "0x4626F40", VA = "0x4626F40")]
	internal object GetEmptyStorageInternal(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4626F60", Offset = "0x4626F60", VA = "0x4626F60")]
	internal void CopyValueInternal(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4626F80", Offset = "0x4626F80", VA = "0x4626F80")]
	internal void SetStorageInternal(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x6000B6F")]
	protected abstract object GetEmptyStorage(int recordCount);

	[Token(Token = "0x6000B70")]
	protected abstract void CopyValue(int record, object store, BitArray nullbits, int storeIndex);

	[Token(Token = "0x6000B71")]
	protected abstract void SetStorage(object store, BitArray nullbits);

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4626FA0", Offset = "0x4626FA0", VA = "0x4626FA0")]
	protected void SetNullStorage(BitArray nullbits)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x4626FB0", Offset = "0x4626FB0", VA = "0x4626FB0")]
	internal static Type GetType(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x46271E0", Offset = "0x46271E0", VA = "0x46271E0")]
	internal static string GetQualifiedName(Type type)
	{
		return null;
	}
}
