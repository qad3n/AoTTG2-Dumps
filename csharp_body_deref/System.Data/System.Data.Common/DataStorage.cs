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
		[Address(RVA = "0x42E7580", Offset = "0x42E7580", VA = "0x42E7580")]
		get
		{
			return default(DataSetDateTime);
		}
	}

	[Token(Token = "0x170001A7")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x42E47C0", Offset = "0x42E47C0", VA = "0x42E47C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x42E3F00", Offset = "0x42E3F00", VA = "0x42E3F00")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x42E7500", Offset = "0x42E7500", VA = "0x42E7500")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x42E73A0", Offset = "0x42E73A0", VA = "0x42E73A0")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, bool isICloneable, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x42E43D0", Offset = "0x42E43D0", VA = "0x42E43D0", Slot = "4")]
	public virtual object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x42E75A0", Offset = "0x42E75A0", VA = "0x42E75A0")]
	public object AggregateCount(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x42E4540", Offset = "0x42E4540", VA = "0x42E4540")]
	protected int CompareBits(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B4E")]
	public abstract int Compare(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B4F")]
	public abstract int CompareValueTo(int recordNo1, object value);

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x42E7640", Offset = "0x42E7640", VA = "0x42E7640", Slot = "7")]
	public virtual object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x42E4850", Offset = "0x42E4850", VA = "0x42E4850")]
	protected void CopyBits(int srcRecordNo, int dstRecordNo)
	{
	}

	[Token(Token = "0x6000B52")]
	public abstract void Copy(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B53")]
	public abstract object Get(int recordNo);

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x42E4900", Offset = "0x42E4900", VA = "0x42E4900")]
	protected object GetBits(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x42E7650", Offset = "0x42E7650", VA = "0x42E7650", Slot = "10")]
	public virtual int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x42E7660", Offset = "0x42E7660", VA = "0x42E7660")]
	protected bool HasValue(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x42E7680", Offset = "0x42E7680", VA = "0x42E7680", Slot = "11")]
	public virtual bool IsNull(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B58")]
	public abstract void Set(int recordNo, object value);

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x42E4AC0", Offset = "0x42E4AC0", VA = "0x42E4AC0")]
	protected void SetNullBit(int recordNo, bool flag)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x42E4C00", Offset = "0x42E4C00", VA = "0x42E4C00", Slot = "13")]
	public virtual void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B5B")]
	public abstract object ConvertXmlToObject(string s);

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x42E76A0", Offset = "0x42E76A0", VA = "0x42E76A0", Slot = "15")]
	public virtual object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	public abstract string ConvertObjectToXml(object value);

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x42E76E0", Offset = "0x42E76E0", VA = "0x42E76E0", Slot = "17")]
	public virtual void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x42E7720", Offset = "0x42E7720", VA = "0x42E7720")]
	public static DataStorage CreateStorage(DataColumn column, Type dataType, StorageType typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x42E8F00", Offset = "0x42E8F00", VA = "0x42E8F00")]
	internal static StorageType GetStorageType(Type dataType)
	{
		return default(StorageType);
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x42E9030", Offset = "0x42E9030", VA = "0x42E9030")]
	internal static Type GetTypeStorage(StorageType storageType)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x42E90C0", Offset = "0x42E90C0", VA = "0x42E90C0")]
	internal static bool IsTypeCustomType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x42E7520", Offset = "0x42E7520", VA = "0x42E7520")]
	internal static bool IsTypeCustomType(StorageType typeCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x42E9120", Offset = "0x42E9120", VA = "0x42E9120")]
	internal static bool IsSqlType(StorageType storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x42E9130", Offset = "0x42E9130", VA = "0x42E9130")]
	public static bool IsSqlType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x42E7540", Offset = "0x42E7540", VA = "0x42E7540")]
	private static bool DetermineIfValueType(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x42E9230", Offset = "0x42E9230", VA = "0x42E9230")]
	internal static void ImplementsInterfaces(StorageType typeCode, Type dataType, out bool sqlType, out bool nullable, out bool xmlSerializable, out bool changeTracking, out bool revertibleChangeTracking)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x42E93A0", Offset = "0x42E93A0", VA = "0x42E93A0")]
	private static Tuple<bool, bool, bool, bool> InspectTypeForInterfaces(Type dataType)
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x42E9530", Offset = "0x42E9530", VA = "0x42E9530")]
	internal static bool ImplementsINullableValue(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x42E95E0", Offset = "0x42E95E0", VA = "0x42E95E0")]
	public static bool IsObjectNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x42E9730", Offset = "0x42E9730", VA = "0x42E9730")]
	public static bool IsObjectSqlNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x42E97E0", Offset = "0x42E97E0", VA = "0x42E97E0")]
	internal object GetEmptyStorageInternal(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x42E9800", Offset = "0x42E9800", VA = "0x42E9800")]
	internal void CopyValueInternal(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x42E9820", Offset = "0x42E9820", VA = "0x42E9820")]
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
	[Address(RVA = "0x42E9840", Offset = "0x42E9840", VA = "0x42E9840")]
	protected void SetNullStorage(BitArray nullbits)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x42E9850", Offset = "0x42E9850", VA = "0x42E9850")]
	internal static Type GetType(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x42E9A80", Offset = "0x42E9A80", VA = "0x42E9A80")]
	internal static string GetQualifiedName(Type type)
	{
		return null;
	}
}
