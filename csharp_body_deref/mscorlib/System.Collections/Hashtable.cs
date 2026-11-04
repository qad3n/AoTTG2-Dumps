// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Hashtable
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005F3")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(HashtableDebugView))]
public class Hashtable : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback, ICloneable
{
	[Token(Token = "0x20005F4")]
	private struct bucket
	{
		[Token(Token = "0x40018CA")]
		[FieldOffset(Offset = "0x0")]
		public object key;

		[Token(Token = "0x40018CB")]
		[FieldOffset(Offset = "0x8")]
		public object val;

		[Token(Token = "0x40018CC")]
		[FieldOffset(Offset = "0x10")]
		public int hash_coll;
	}

	[Serializable]
	[Token(Token = "0x20005F5")]
	private class KeyCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x40018CD")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x17000727")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002D66")]
			[Address(RVA = "0x1AD59E0", Offset = "0x1AD3FE0", VA = "0x181AD59E0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000728")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002D67")]
			[Address(RVA = "0x1AD5A10", Offset = "0x1AD4010", VA = "0x181AD5A10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000729")]
		public virtual int Count
		{
			[Token(Token = "0x6002D68")]
			[Address(RVA = "0x92B6E0", Offset = "0x929CE0", VA = "0x18092B6E0", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002D63")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal KeyCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6002D64")]
		[Address(RVA = "0x1AD5710", Offset = "0x1AD3D10", VA = "0x181AD5710", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002D65")]
		[Address(RVA = "0x1AD5940", Offset = "0x1AD3F40", VA = "0x181AD5940", Slot = "10")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005F6")]
	private class ValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x40018CE")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x1700072A")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002D6C")]
			[Address(RVA = "0x1AD59E0", Offset = "0x1AD3FE0", VA = "0x181AD59E0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700072B")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002D6D")]
			[Address(RVA = "0x1AD5A10", Offset = "0x1AD4010", VA = "0x181AD5A10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700072C")]
		public virtual int Count
		{
			[Token(Token = "0x6002D6E")]
			[Address(RVA = "0x92B6E0", Offset = "0x929CE0", VA = "0x18092B6E0", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002D69")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal ValueCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6002D6A")]
		[Address(RVA = "0x1AE2A80", Offset = "0x1AE1080", VA = "0x181AE2A80", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002D6B")]
		[Address(RVA = "0x1AE2CB0", Offset = "0x1AE12B0", VA = "0x181AE2CB0", Slot = "10")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005F7")]
	private class SyncHashtable : Hashtable, IEnumerable
	{
		[Token(Token = "0x40018CF")]
		[FieldOffset(Offset = "0x50")]
		protected Hashtable _table;

		[Token(Token = "0x1700072D")]
		public override int Count
		{
			[Token(Token = "0x6002D72")]
			[Address(RVA = "0x1AE0630", Offset = "0x1ADEC30", VA = "0x181AE0630", Slot = "41")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700072E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002D73")]
			[Address(RVA = "0x1AE0690", Offset = "0x1ADEC90", VA = "0x181AE0690", Slot = "33")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700072F")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002D74")]
			[Address(RVA = "0x1AE0660", Offset = "0x1ADEC60", VA = "0x181AE0660", Slot = "34")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000730")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002D75")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "35")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000731")]
		public override object this[object key]
		{
			[Token(Token = "0x6002D76")]
			[Address(RVA = "0x1AE06C0", Offset = "0x1ADECC0", VA = "0x181AE06C0", Slot = "29")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002D77")]
			[Address(RVA = "0x1AE0900", Offset = "0x1ADEF00", VA = "0x181AE0900", Slot = "30")]
			set
			{
			}
		}

		[Token(Token = "0x17000732")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002D78")]
			[Address(RVA = "0x1AE07E0", Offset = "0x1ADEDE0", VA = "0x181AE07E0", Slot = "40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000733")]
		public override ICollection Keys
		{
			[Token(Token = "0x6002D81")]
			[Address(RVA = "0x1AE06F0", Offset = "0x1ADECF0", VA = "0x181AE06F0", Slot = "37")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000734")]
		public override ICollection Values
		{
			[Token(Token = "0x6002D82")]
			[Address(RVA = "0x1AE0810", Offset = "0x1ADEE10", VA = "0x181AE0810", Slot = "38")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D6F")]
		[Address(RVA = "0x1AE05F0", Offset = "0x1ADEBF0", VA = "0x181AE05F0")]
		internal SyncHashtable(Hashtable table)
		{
		}

		[Token(Token = "0x6002D70")]
		[Address(RVA = "0x1AE0590", Offset = "0x1ADEB90", VA = "0x181AE0590")]
		internal SyncHashtable(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6002D71")]
		[Address(RVA = "0x1AE0470", Offset = "0x1ADEA70", VA = "0x181AE0470", Slot = "42")]
		public override void GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6002D79")]
		[Address(RVA = "0x1ADFED0", Offset = "0x1ADE4D0", VA = "0x181ADFED0", Slot = "23")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6002D7A")]
		[Address(RVA = "0x1ADFFC0", Offset = "0x1ADE5C0", VA = "0x181ADFFC0", Slot = "24")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002D7B")]
		[Address(RVA = "0x1AE0320", Offset = "0x1ADE920", VA = "0x181AE0320", Slot = "26")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D7C")]
		[Address(RVA = "0x1AE0280", Offset = "0x1ADE880", VA = "0x181AE0280", Slot = "27")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D7D")]
		[Address(RVA = "0x1AE0350", Offset = "0x1ADE950", VA = "0x181AE0350", Slot = "28")]
		public override void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002D7E")]
		[Address(RVA = "0x1AE00A0", Offset = "0x1ADE6A0", VA = "0x181AE00A0", Slot = "25")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D7F")]
		[Address(RVA = "0x1AE0440", Offset = "0x1ADEA40", VA = "0x181AE0440", Slot = "19")]
		private new IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D80")]
		[Address(RVA = "0x1AE0440", Offset = "0x1ADEA40", VA = "0x181AE0440", Slot = "31")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D83")]
		[Address(RVA = "0x1AE04B0", Offset = "0x1ADEAB0", VA = "0x181AE04B0", Slot = "39")]
		public override void Remove(object key)
		{
		}

		[Token(Token = "0x6002D84")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "43")]
		public override void OnDeserialization(object sender)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005F8")]
	private class HashtableEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		[Token(Token = "0x40018D0")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x40018D1")]
		[FieldOffset(Offset = "0x18")]
		private int _bucket;

		[Token(Token = "0x40018D2")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x40018D3")]
		[FieldOffset(Offset = "0x20")]
		private bool _current;

		[Token(Token = "0x40018D4")]
		[FieldOffset(Offset = "0x24")]
		private int _getObjectRetType;

		[Token(Token = "0x40018D5")]
		[FieldOffset(Offset = "0x28")]
		private object _currentKey;

		[Token(Token = "0x40018D6")]
		[FieldOffset(Offset = "0x30")]
		private object _currentValue;

		[Token(Token = "0x17000735")]
		public virtual object Key
		{
			[Token(Token = "0x6002D87")]
			[Address(RVA = "0x1AD0F80", Offset = "0x1ACF580", VA = "0x181AD0F80", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000736")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6002D89")]
			[Address(RVA = "0x1AD0F00", Offset = "0x1ACF500", VA = "0x181AD0F00", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000737")]
		public virtual object Current
		{
			[Token(Token = "0x6002D8A")]
			[Address(RVA = "0x1AD0E30", Offset = "0x1ACF430", VA = "0x181AD0E30", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000738")]
		public virtual object Value
		{
			[Token(Token = "0x6002D8B")]
			[Address(RVA = "0x1AD0FF0", Offset = "0x1ACF5F0", VA = "0x181AD0FF0", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D85")]
		[Address(RVA = "0x1AD0DC0", Offset = "0x1ACF3C0", VA = "0x181AD0DC0")]
		internal HashtableEnumerator(Hashtable hashtable, int getObjRetType)
		{
		}

		[Token(Token = "0x6002D86")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D88")]
		[Address(RVA = "0x1AD0BA0", Offset = "0x1ACF1A0", VA = "0x181AD0BA0", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D8C")]
		[Address(RVA = "0x1AD0CF0", Offset = "0x1ACF2F0", VA = "0x181AD0CF0", Slot = "16")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x20005F9")]
	internal class HashtableDebugView
	{
	}

	[Token(Token = "0x40018BE")]
	[FieldOffset(Offset = "0x10")]
	private bucket[] _buckets;

	[Token(Token = "0x40018BF")]
	[FieldOffset(Offset = "0x18")]
	private int _count;

	[Token(Token = "0x40018C0")]
	[FieldOffset(Offset = "0x1C")]
	private int _occupancy;

	[Token(Token = "0x40018C1")]
	[FieldOffset(Offset = "0x20")]
	private int _loadsize;

	[Token(Token = "0x40018C2")]
	[FieldOffset(Offset = "0x24")]
	private float _loadFactor;

	[Token(Token = "0x40018C3")]
	[FieldOffset(Offset = "0x28")]
	private int _version;

	[Token(Token = "0x40018C4")]
	[FieldOffset(Offset = "0x2C")]
	private bool _isWriterInProgress;

	[Token(Token = "0x40018C5")]
	[FieldOffset(Offset = "0x30")]
	private ICollection _keys;

	[Token(Token = "0x40018C6")]
	[FieldOffset(Offset = "0x38")]
	private ICollection _values;

	[Token(Token = "0x40018C7")]
	[FieldOffset(Offset = "0x40")]
	private IEqualityComparer _keycomparer;

	[Token(Token = "0x40018C8")]
	[FieldOffset(Offset = "0x48")]
	private object _syncRoot;

	[Token(Token = "0x40018C9")]
	[FieldOffset(Offset = "0x0")]
	private static ConditionalWeakTable<object, SerializationInfo> s_serializationInfoTable;

	[Token(Token = "0x1700071E")]
	private static ConditionalWeakTable<object, SerializationInfo> SerializationInfoTable
	{
		[Token(Token = "0x6002D37")]
		[Address(RVA = "0x1AD3C90", Offset = "0x1AD2290", VA = "0x181AD3C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071F")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6002D4C")]
		[Address(RVA = "0x1AD39F0", Offset = "0x1AD1FF0", VA = "0x181AD39F0", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D4D")]
		[Address(RVA = "0x1AD4080", Offset = "0x1AD2680", VA = "0x181AD4080", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x17000720")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002D55")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000721")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002D56")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000722")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002D57")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000723")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6002D59")]
		[Address(RVA = "0x1AD3C10", Offset = "0x1AD2210", VA = "0x181AD3C10", Slot = "37")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000724")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6002D5A")]
		[Address(RVA = "0x1AD3D50", Offset = "0x1AD2350", VA = "0x181AD3D50", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000725")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002D5E")]
		[Address(RVA = "0x1AD3CE0", Offset = "0x1AD22E0", VA = "0x181AD3CE0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000726")]
	public virtual int Count
	{
		[Token(Token = "0x6002D5F")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D38")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal Hashtable(bool trash)
	{
	}

	[Token(Token = "0x6002D39")]
	[Address(RVA = "0x1AD3660", Offset = "0x1AD1C60", VA = "0x181AD3660")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6002D3A")]
	[Address(RVA = "0x1AD35A0", Offset = "0x1AD1BA0", VA = "0x181AD35A0")]
	public Hashtable(int capacity)
	{
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x1AD3700", Offset = "0x1AD1D00", VA = "0x181AD3700")]
	public Hashtable(int capacity, float loadFactor)
	{
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x1AD3680", Offset = "0x1AD1C80", VA = "0x181AD3680")]
	public Hashtable(int capacity, float loadFactor, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6002D3D")]
	[Address(RVA = "0x1AD3460", Offset = "0x1AD1A60", VA = "0x181AD3460")]
	[Obsolete("Please use Hashtable(IEqualityComparer) instead.")]
	public Hashtable(IHashCodeProvider hcp, IComparer comparer)
	{
	}

	[Token(Token = "0x6002D3E")]
	[Address(RVA = "0x1AD3420", Offset = "0x1AD1A20", VA = "0x181AD3420")]
	public Hashtable(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6002D3F")]
	[Address(RVA = "0x1AD36C0", Offset = "0x1AD1CC0", VA = "0x181AD36C0")]
	public Hashtable(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6002D40")]
	[Address(RVA = "0x1AD3500", Offset = "0x1AD1B00", VA = "0x181AD3500")]
	[Obsolete("Please use Hashtable(int, float, IEqualityComparer) instead.")]
	public Hashtable(int capacity, float loadFactor, IHashCodeProvider hcp, IComparer comparer)
	{
	}

	[Token(Token = "0x6002D41")]
	[Address(RVA = "0x1AD35B0", Offset = "0x1AD1BB0", VA = "0x181AD35B0")]
	protected Hashtable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002D42")]
	[Address(RVA = "0x1AD1F60", Offset = "0x1AD0560", VA = "0x181AD1F60")]
	private uint InitHash(object key, int hashsize, out uint seed, out uint incr)
	{
		return default(uint);
	}

	[Token(Token = "0x6002D43")]
	[Address(RVA = "0x1AD1060", Offset = "0x1ACF660", VA = "0x181AD1060", Slot = "23")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002D44")]
	[Address(RVA = "0x1AD1080", Offset = "0x1ACF680", VA = "0x181AD1080", Slot = "24")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002D45")]
	[Address(RVA = "0x1AD11C0", Offset = "0x1ACF7C0", VA = "0x181AD11C0", Slot = "25")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002D46")]
	[Address(RVA = "0x1AD1430", Offset = "0x1ACFA30", VA = "0x181AD1430", Slot = "26")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D47")]
	[Address(RVA = "0x1AD12C0", Offset = "0x1ACF8C0", VA = "0x181AD12C0", Slot = "27")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D48")]
	[Address(RVA = "0x1AD1530", Offset = "0x1ACFB30", VA = "0x181AD1530")]
	private void CopyKeys(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D49")]
	[Address(RVA = "0x1AD1450", Offset = "0x1ACFA50", VA = "0x181AD1450")]
	private void CopyEntries(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D4A")]
	[Address(RVA = "0x1AD15A0", Offset = "0x1ACFBA0", VA = "0x181AD15A0", Slot = "28")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D4B")]
	[Address(RVA = "0x1AD1820", Offset = "0x1ACFE20", VA = "0x181AD1820")]
	private void CopyValues(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D4E")]
	[Address(RVA = "0x1AD3980", Offset = "0x1AD1F80", VA = "0x181AD3980")]
	private void expand()
	{
	}

	[Token(Token = "0x6002D4F")]
	[Address(RVA = "0x1AD4050", Offset = "0x1AD2650", VA = "0x181AD4050")]
	private void rehash()
	{
	}

	[Token(Token = "0x6002D50")]
	[Address(RVA = "0x1AD33F0", Offset = "0x1AD19F0", VA = "0x181AD33F0")]
	private void UpdateVersion()
	{
	}

	[Token(Token = "0x6002D51")]
	[Address(RVA = "0x1AD3F10", Offset = "0x1AD2510", VA = "0x181AD3F10")]
	private void rehash(int newsize)
	{
	}

	[Token(Token = "0x6002D52")]
	[Address(RVA = "0x1AD3360", Offset = "0x1AD1960", VA = "0x181AD3360", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D53")]
	[Address(RVA = "0x1AD18A0", Offset = "0x1ACFEA0", VA = "0x181AD18A0", Slot = "31")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D54")]
	[Address(RVA = "0x1AD1930", Offset = "0x1ACFF30", VA = "0x181AD1930", Slot = "32")]
	protected virtual int GetHash(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002D58")]
	[Address(RVA = "0x1AD2550", Offset = "0x1AD0B50", VA = "0x181AD2550", Slot = "36")]
	protected virtual bool KeyEquals(object item, object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5B")]
	[Address(RVA = "0x1AD1FB0", Offset = "0x1AD05B0", VA = "0x181AD1FB0")]
	private void Insert(object key, object nvalue, bool add)
	{
	}

	[Token(Token = "0x6002D5C")]
	[Address(RVA = "0x1AD3DD0", Offset = "0x1AD23D0", VA = "0x181AD3DD0")]
	private void putEntry(bucket[] newBuckets, object key, object nvalue, int hashcode)
	{
	}

	[Token(Token = "0x6002D5D")]
	[Address(RVA = "0x1AD3000", Offset = "0x1AD1600", VA = "0x181AD3000", Slot = "39")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x6002D60")]
	[Address(RVA = "0x1AD32B0", Offset = "0x1AD18B0", VA = "0x181AD32B0")]
	public static Hashtable Synchronized(Hashtable table)
	{
		return null;
	}

	[Token(Token = "0x6002D61")]
	[Address(RVA = "0x1AD19C0", Offset = "0x1ACFFC0", VA = "0x181AD19C0", Slot = "42")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002D62")]
	[Address(RVA = "0x1AD2690", Offset = "0x1AD0C90", VA = "0x181AD2690", Slot = "43")]
	public virtual void OnDeserialization(object sender)
	{
	}
}
