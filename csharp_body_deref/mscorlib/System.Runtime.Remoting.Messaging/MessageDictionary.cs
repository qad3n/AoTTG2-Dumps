// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.MessageDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003E4")]
internal class MessageDictionary : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x20003E5")]
	private class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000F8D")]
		[FieldOffset(Offset = "0x10")]
		private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary;

		[Token(Token = "0x4000F8E")]
		[FieldOffset(Offset = "0x18")]
		private IDictionaryEnumerator _hashtableEnum;

		[Token(Token = "0x4000F8F")]
		[FieldOffset(Offset = "0x20")]
		private int _posMethod;

		[Token(Token = "0x170003E2")]
		public object Current
		{
			[Token(Token = "0x6001F23")]
			[Address(RVA = "0x19F9E90", Offset = "0x19F8490", VA = "0x1819F9E90", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E3")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001F26")]
			[Address(RVA = "0x19F9EF0", Offset = "0x19F84F0", VA = "0x1819F9EF0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170003E4")]
		public object Key
		{
			[Token(Token = "0x6001F27")]
			[Address(RVA = "0x19FA0A0", Offset = "0x19F86A0", VA = "0x1819FA0A0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E5")]
		public object Value
		{
			[Token(Token = "0x6001F28")]
			[Address(RVA = "0x19FA0C0", Offset = "0x19F86C0", VA = "0x1819FA0C0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001F22")]
		[Address(RVA = "0x19F9DF0", Offset = "0x19F83F0", VA = "0x1819F9DF0")]
		public DictionaryEnumerator(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
		{
		}

		[Token(Token = "0x6001F24")]
		[Address(RVA = "0x19F9C80", Offset = "0x19F8280", VA = "0x1819F9C80", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001F25")]
		[Address(RVA = "0x19F9D90", Offset = "0x19F8390", VA = "0x1819F9D90", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000F89")]
	[FieldOffset(Offset = "0x10")]
	private IDictionary _internalProperties;

	[Token(Token = "0x4000F8A")]
	[FieldOffset(Offset = "0x18")]
	protected IMethodMessage _message;

	[Token(Token = "0x4000F8B")]
	[FieldOffset(Offset = "0x20")]
	private string[] _methodKeys;

	[Token(Token = "0x4000F8C")]
	[FieldOffset(Offset = "0x28")]
	private bool _ownProperties;

	[Token(Token = "0x170003D8")]
	internal IDictionary InternalDictionary
	{
		[Token(Token = "0x6001F0B")]
		[Address(RVA = "0x19FFB90", Offset = "0x19FE190", VA = "0x1819FFB90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D9")]
	public string[] MethodKeys
	{
		[Token(Token = "0x6001F0C")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003DA")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6001F10")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DB")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6001F11")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DC")]
	public object this[object key]
	{
		[Token(Token = "0x6001F12")]
		[Address(RVA = "0x19FFC40", Offset = "0x19FE240", VA = "0x1819FFC40", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F13")]
		[Address(RVA = "0x19FEDA0", Offset = "0x19FD3A0", VA = "0x1819FEDA0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003DD")]
	public ICollection Keys
	{
		[Token(Token = "0x6001F16")]
		[Address(RVA = "0x19FFD50", Offset = "0x19FE350", VA = "0x1819FFD50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DE")]
	public ICollection Values
	{
		[Token(Token = "0x6001F17")]
		[Address(RVA = "0x1A000F0", Offset = "0x19FE6F0", VA = "0x181A000F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DF")]
	public int Count
	{
		[Token(Token = "0x6001F1C")]
		[Address(RVA = "0x19FFB20", Offset = "0x19FE120", VA = "0x1819FFB20", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E0")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001F1D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E1")]
	public object SyncRoot
	{
		[Token(Token = "0x6001F1E")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F09")]
	[Address(RVA = "0x19FFAE0", Offset = "0x19FE0E0", VA = "0x1819FFAE0")]
	public MessageDictionary(IMethodMessage message)
	{
	}

	[Token(Token = "0x6001F0A")]
	[Address(RVA = "0x19FF5D0", Offset = "0x19FDBD0", VA = "0x1819FF5D0")]
	internal bool HasUserData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F0D")]
	[Address(RVA = "0x19FEEF0", Offset = "0x19FD4F0", VA = "0x1819FEEF0", Slot = "20")]
	protected virtual IDictionary AllocInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001F0E")]
	[Address(RVA = "0x19FF1C0", Offset = "0x19FD7C0", VA = "0x1819FF1C0")]
	public IDictionary GetInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001F0F")]
	[Address(RVA = "0x19FF6A0", Offset = "0x19FDCA0", VA = "0x1819FF6A0")]
	private bool IsOverridenKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x19FF210", Offset = "0x19FD810", VA = "0x1819FF210", Slot = "21")]
	protected virtual object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001F15")]
	[Address(RVA = "0x19FF850", Offset = "0x19FDE50", VA = "0x1819FF850", Slot = "22")]
	protected virtual void SetMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001F18")]
	[Address(RVA = "0x19FEDA0", Offset = "0x19FD3A0", VA = "0x1819FEDA0", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6001F19")]
	[Address(RVA = "0x19FEF40", Offset = "0x19FD540", VA = "0x1819FEF40", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001F1A")]
	[Address(RVA = "0x19FEF90", Offset = "0x19FD590", VA = "0x1819FEF90", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F1B")]
	[Address(RVA = "0x19FF720", Offset = "0x19FDD20", VA = "0x1819FF720", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001F1F")]
	[Address(RVA = "0x19FF080", Offset = "0x19FD680", VA = "0x1819FF080", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001F20")]
	[Address(RVA = "0x19FFA80", Offset = "0x19FE080", VA = "0x1819FFA80", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001F21")]
	[Address(RVA = "0x19FF160", Offset = "0x19FD760", VA = "0x1819FF160", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
