// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.BitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000618")]
public sealed class BitArray : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x2000619")]
	private class BitArrayEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001A94")]
		[FieldOffset(Offset = "0x10")]
		private BitArray bitarray;

		[Token(Token = "0x4001A95")]
		[FieldOffset(Offset = "0x18")]
		private int index;

		[Token(Token = "0x4001A96")]
		[FieldOffset(Offset = "0x1C")]
		private int version;

		[Token(Token = "0x4001A97")]
		[FieldOffset(Offset = "0x20")]
		private bool currentElement;

		[Token(Token = "0x17000778")]
		public virtual object Current
		{
			[Token(Token = "0x6002FC9")]
			[Address(RVA = "0x3C863E0", Offset = "0x3C863E0", VA = "0x3C863E0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FC6")]
		[Address(RVA = "0x3C861E0", Offset = "0x3C861E0", VA = "0x3C861E0")]
		internal BitArrayEnumeratorSimple(BitArray bitarray)
		{
		}

		[Token(Token = "0x6002FC7")]
		[Address(RVA = "0x3C86230", Offset = "0x3C86230", VA = "0x3C86230", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002FC8")]
		[Address(RVA = "0x3C86240", Offset = "0x3C86240", VA = "0x3C86240", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FCA")]
		[Address(RVA = "0x3C86530", Offset = "0x3C86530", VA = "0x3C86530", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4001A90")]
	[FieldOffset(Offset = "0x10")]
	private int[] m_array;

	[Token(Token = "0x4001A91")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x4001A92")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001A93")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x17000773")]
	public bool this[int index]
	{
		[Token(Token = "0x6002FB7")]
		[Address(RVA = "0x3C85650", Offset = "0x3C85650", VA = "0x3C85650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FB8")]
		[Address(RVA = "0x3C85730", Offset = "0x3C85730", VA = "0x3C85730")]
		set
		{
		}
	}

	[Token(Token = "0x17000774")]
	public int Length
	{
		[Token(Token = "0x6002FBD")]
		[Address(RVA = "0x3C85980", Offset = "0x3C85980", VA = "0x3C85980")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002FBE")]
		[Address(RVA = "0x3C85990", Offset = "0x3C85990", VA = "0x3C85990")]
		set
		{
		}
	}

	[Token(Token = "0x17000775")]
	public int Count
	{
		[Token(Token = "0x6002FC0")]
		[Address(RVA = "0x3C86070", Offset = "0x3C86070", VA = "0x3C86070", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000776")]
	public object SyncRoot
	{
		[Token(Token = "0x6002FC1")]
		[Address(RVA = "0x3C86080", Offset = "0x3C86080", VA = "0x3C86080", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000777")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002FC2")]
		[Address(RVA = "0x3C86100", Offset = "0x3C86100", VA = "0x3C86100", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002FB4")]
	[Address(RVA = "0x3C853D0", Offset = "0x3C853D0", VA = "0x3C853D0")]
	public BitArray(int length)
	{
	}

	[Token(Token = "0x6002FB5")]
	[Address(RVA = "0x3C853E0", Offset = "0x3C853E0", VA = "0x3C853E0")]
	public BitArray(int length, bool defaultValue)
	{
	}

	[Token(Token = "0x6002FB6")]
	[Address(RVA = "0x3C85560", Offset = "0x3C85560", VA = "0x3C85560")]
	public BitArray(BitArray bits)
	{
	}

	[Token(Token = "0x6002FB9")]
	[Address(RVA = "0x3C85660", Offset = "0x3C85660", VA = "0x3C85660")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FBA")]
	[Address(RVA = "0x3C85740", Offset = "0x3C85740", VA = "0x3C85740")]
	public void Set(int index, bool value)
	{
	}

	[Token(Token = "0x6002FBB")]
	[Address(RVA = "0x3C85820", Offset = "0x3C85820", VA = "0x3C85820")]
	public void SetAll(bool value)
	{
	}

	[Token(Token = "0x6002FBC")]
	[Address(RVA = "0x3C85880", Offset = "0x3C85880", VA = "0x3C85880")]
	public BitArray Or(BitArray value)
	{
		return null;
	}

	[Token(Token = "0x6002FBF")]
	[Address(RVA = "0x3C85B40", Offset = "0x3C85B40", VA = "0x3C85B40", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002FC3")]
	[Address(RVA = "0x3C86110", Offset = "0x3C86110", VA = "0x3C86110", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002FC4")]
	[Address(RVA = "0x3C86160", Offset = "0x3C86160", VA = "0x3C86160", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FC5")]
	[Address(RVA = "0x3C85540", Offset = "0x3C85540", VA = "0x3C85540")]
	private static int GetArrayLength(int n, int div)
	{
		return default(int);
	}
}
