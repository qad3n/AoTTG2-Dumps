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
		[Address(RVA = "0x2587440", Offset = "0x2585A40", VA = "0x182587440")]
		get
		{
			return default(DataSetDateTime);
		}
	}

	[Token(Token = "0x170001AA")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x2587460", Offset = "0x2585A60", VA = "0x182587460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x25873B0", Offset = "0x25859B0", VA = "0x1825873B0")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x25871E0", Offset = "0x25857E0", VA = "0x1825871E0")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x2587210", Offset = "0x2585810", VA = "0x182587210")]
	protected DataStorage(DataColumn column, Type type, object defaultValue, object nullValue, bool isICloneable, StorageType storageType)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x2583D40", Offset = "0x2582340", VA = "0x182583D40", Slot = "4")]
	public virtual object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x2583CC0", Offset = "0x25822C0", VA = "0x182583CC0")]
	public object AggregateCount(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x2583DE0", Offset = "0x25823E0", VA = "0x182583DE0")]
	protected int CompareBits(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B88")]
	public abstract int Compare(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B89")]
	public abstract int CompareValueTo(int recordNo1, object value);

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "7")]
	public virtual object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x2583EF0", Offset = "0x25824F0", VA = "0x182583EF0")]
	protected void CopyBits(int srcRecordNo, int dstRecordNo)
	{
	}

	[Token(Token = "0x6000B8C")]
	public abstract void Copy(int recordNo1, int recordNo2);

	[Token(Token = "0x6000B8D")]
	public abstract object Get(int recordNo);

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x2585460", Offset = "0x2583A60", VA = "0x182585460")]
	protected object GetBits(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x2585660", Offset = "0x2583C60", VA = "0x182585660", Slot = "10")]
	public virtual int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x25857F0", Offset = "0x2583DF0", VA = "0x1825857F0")]
	protected bool HasValue(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x2585C10", Offset = "0x2584210", VA = "0x182585C10", Slot = "11")]
	public virtual bool IsNull(int recordNo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B92")]
	public abstract void Set(int recordNo, object value);

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x2586050", Offset = "0x2584650", VA = "0x182586050")]
	protected void SetNullBit(int recordNo, bool flag)
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x2585FC0", Offset = "0x25845C0", VA = "0x182585FC0", Slot = "13")]
	public virtual void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B95")]
	public abstract object ConvertXmlToObject(string s);

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x2583EA0", Offset = "0x25824A0", VA = "0x182583EA0", Slot = "15")]
	public virtual object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	public abstract string ConvertObjectToXml(object value);

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x2583E60", Offset = "0x2582460", VA = "0x182583E60", Slot = "17")]
	public virtual void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x2583F60", Offset = "0x2582560", VA = "0x182583F60")]
	public static DataStorage CreateStorage(DataColumn column, Type dataType, StorageType typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x2585530", Offset = "0x2583B30", VA = "0x182585530")]
	internal static StorageType GetStorageType(Type dataType)
	{
		return default(StorageType);
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x2585670", Offset = "0x2583C70", VA = "0x182585670")]
	internal static Type GetTypeStorage(StorageType storageType)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x2585F60", Offset = "0x2584560", VA = "0x182585F60")]
	internal static bool IsTypeCustomType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x2585F50", Offset = "0x2584550", VA = "0x182585F50")]
	internal static bool IsTypeCustomType(StorageType typeCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x2585F40", Offset = "0x2584540", VA = "0x182585F40")]
	internal static bool IsSqlType(StorageType storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x2585E30", Offset = "0x2584430", VA = "0x182585E30")]
	public static bool IsSqlType(Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x25853D0", Offset = "0x25839D0", VA = "0x1825853D0")]
	private static bool DetermineIfValueType(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x25858E0", Offset = "0x2583EE0", VA = "0x1825858E0")]
	internal static void ImplementsInterfaces(StorageType typeCode, Type dataType, out bool sqlType, out bool nullable, out bool xmlSerializable, out bool changeTracking, out bool revertibleChangeTracking)
	{
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x2585A60", Offset = "0x2584060", VA = "0x182585A60")]
	private static Tuple<bool, bool, bool, bool> InspectTypeForInterfaces(Type dataType)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x2585820", Offset = "0x2583E20", VA = "0x182585820")]
	internal static bool ImplementsINullableValue(StorageType typeCode, Type dataType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x2585C30", Offset = "0x2584230", VA = "0x182585C30")]
	public static bool IsObjectNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x2585D70", Offset = "0x2584370", VA = "0x182585D70")]
	public static bool IsObjectSqlNull(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x25854A0", Offset = "0x2583AA0", VA = "0x1825854A0")]
	internal object GetEmptyStorageInternal(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x2583F40", Offset = "0x2582540", VA = "0x182583F40")]
	internal void CopyValueInternal(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x2586070", Offset = "0x2584670", VA = "0x182586070")]
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
	[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
	protected void SetNullStorage(BitArray nullbits)
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x25856E0", Offset = "0x2583CE0", VA = "0x1825856E0")]
	internal static Type GetType(string value)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x25854C0", Offset = "0x2583AC0", VA = "0x1825854C0")]
	internal static string GetQualifiedName(Type type)
	{
		return null;
	}
}
