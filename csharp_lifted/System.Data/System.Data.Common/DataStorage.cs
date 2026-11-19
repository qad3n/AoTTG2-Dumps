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

[Token(Token = "0x20000CA")]
internal abstract class DataStorage
{
	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_storageClassType;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x10")]
	internal readonly DataColumn _column;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x18")]
	internal readonly DataTable _table;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Type _dataType;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x28")]
	internal readonly StorageType _storageTypeCode;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x30")]
	private BitArray _dbNullBits;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x38")]
	private readonly object _defaultValue;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x40")]
	internal readonly object _nullValue;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x48")]
	internal readonly bool _isCloneable;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x49")]
	internal readonly bool _isCustomDefinedType;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x4A")]
	internal readonly bool _isStringType;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x4B")]
	internal readonly bool _isValueType;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Func<Type, Tuple<bool, bool, bool, bool>> s_inspectTypeForInterfaces;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ConcurrentDictionary<Type, Tuple<bool, bool, bool, bool>> s_typeImplementsInterface;

	[Token(Token = "0x170001A9")]
	internal DataSetDateTime DateTimeMode
	{
		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x5F2B8F0", Offset = "0x5F2A8F0", VA = "0x5F2B8F0")]
		get
		{
			return default(DataSetDateTime);
		}
	}

	[Token(Token = "0x170001AA")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x5F27FD0", Offset = "0x5F26FD0", VA = "0x5F27FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x5F26F90", Offset = "0x5F25F90", VA = "0x5F26F90")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x5F2B880", Offset = "0x5F2A880", VA = "0x5F2B880")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x5F2B730", Offset = "0x5F2A730", VA = "0x5F2B730")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, bool isICloneable, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x5F28CD0", Offset = "0x5F27CD0", VA = "0x5F28CD0", Slot = "4")]
	public virtual object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x5F2B910", Offset = "0x5F2A910", VA = "0x5F2B910")]
	public object AggregateCount(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x5F271B0", Offset = "0x5F261B0", VA = "0x5F271B0")]
	protected int CompareBits(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B88")]
	public abstract int Compare(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B89")]
	public abstract int CompareValueTo(int recordNo1, object value);

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x5F2B9A0", Offset = "0x5F2A9A0", VA = "0x5F2B9A0", Slot = "7")]
	public virtual object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x5F28080", Offset = "0x5F27080", VA = "0x5F28080")]
	protected void CopyBits(int srcRecordNo, int dstRecordNo)
	{
	}

	[Token(Token = "0x6000B8C")]
	public abstract void Copy(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B8D")]
	public abstract object Get(int recordNo);

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x5F28190", Offset = "0x5F27190", VA = "0x5F28190")]
	protected object GetBits(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x5F2B9B0", Offset = "0x5F2A9B0", VA = "0x5F2B9B0", Slot = "10")]
	public virtual int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x5F27340", Offset = "0x5F26340", VA = "0x5F27340")]
	protected bool HasValue(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x5F2B9C0", Offset = "0x5F2A9C0", VA = "0x5F2B9C0", Slot = "11")]
	public virtual bool IsNull(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B92")]
	public abstract void Set(int recordNo, object value);

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x5F28330", Offset = "0x5F27330", VA = "0x5F28330")]
	protected void SetNullBit(int recordNo, bool flag)
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x5F28470", Offset = "0x5F27470", VA = "0x5F28470", Slot = "13")]
	public virtual void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B95")]
	public abstract object ConvertXmlToObject(string s);

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x5F2B9E0", Offset = "0x5F2A9E0", VA = "0x5F2B9E0", Slot = "15")]
	public virtual object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	public abstract string ConvertObjectToXml(object value);

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x5F2BA20", Offset = "0x5F2AA20", VA = "0x5F2BA20", Slot = "17")]
	public virtual void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x5F2BA60", Offset = "0x5F2AA60", VA = "0x5F2BA60")]
	public static DataStorage CreateStorage(DataColumn column, Type dataType, StorageType typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x5F2D1F0", Offset = "0x5F2C1F0", VA = "0x5F2D1F0")]
	internal static StorageType GetStorageType(Type dataType)
	{
		return default(StorageType);
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x5F2D320", Offset = "0x5F2C320", VA = "0x5F2D320")]
	internal static Type GetTypeStorage(StorageType storageType)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x5F2D3B0", Offset = "0x5F2C3B0", VA = "0x5F2D3B0")]
	internal static bool IsTypeCustomType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x5F2B8A0", Offset = "0x5F2A8A0", VA = "0x5F2B8A0")]
	internal static bool IsTypeCustomType(StorageType typeCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x5F2D410", Offset = "0x5F2C410", VA = "0x5F2D410")]
	internal static bool IsSqlType(StorageType storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x5F2D420", Offset = "0x5F2C420", VA = "0x5F2D420")]
	public static bool IsSqlType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x5F2B8C0", Offset = "0x5F2A8C0", VA = "0x5F2B8C0")]
	private static bool DetermineIfValueType(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x5F2D510", Offset = "0x5F2C510", VA = "0x5F2D510")]
	internal static void ImplementsInterfaces(StorageType typeCode, Type dataType, out bool sqlType, out bool nullable, out bool xmlSerializable, out bool changeTracking, out bool revertibleChangeTracking)
	{
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x5F2D680", Offset = "0x5F2C680", VA = "0x5F2D680")]
	private static Tuple<bool, bool, bool, bool> InspectTypeForInterfaces(Type dataType)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x5F2D810", Offset = "0x5F2C810", VA = "0x5F2D810")]
	internal static bool ImplementsINullableValue(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x5F2D8C0", Offset = "0x5F2C8C0", VA = "0x5F2D8C0")]
	public static bool IsObjectNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x5F2DA10", Offset = "0x5F2CA10", VA = "0x5F2DA10")]
	public static bool IsObjectSqlNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x5F2DAC0", Offset = "0x5F2CAC0", VA = "0x5F2DAC0")]
	internal object GetEmptyStorageInternal(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x5F2DAE0", Offset = "0x5F2CAE0", VA = "0x5F2DAE0")]
	internal void CopyValueInternal(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x5F2DB00", Offset = "0x5F2CB00", VA = "0x5F2DB00")]
	internal void SetStorageInternal(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x6000BA9")]
	protected abstract object GetEmptyStorage(int recordCount);

	[Token(Token = "0x6000BAA")]
	protected abstract void CopyValue(int record, object store, BitArray nullbits, int storeIndex);

	[Token(Token = "0x6000BAB")]
	protected abstract void SetStorage(object store, BitArray nullbits);

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x5F2DB20", Offset = "0x5F2CB20", VA = "0x5F2DB20")]
	protected void SetNullStorage(BitArray nullbits)
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x5F2DB30", Offset = "0x5F2CB30", VA = "0x5F2DB30")]
	internal static Type GetType(string value)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x5F2DC40", Offset = "0x5F2CC40", VA = "0x5F2DC40")]
	internal static string GetQualifiedName(Type type)
	{
		return null;
	}
}
