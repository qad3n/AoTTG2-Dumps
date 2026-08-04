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
[Token(Token = "0x20003B5")]
internal class MessageDictionary : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x20003B6")]
	private class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000F87")]
		[FieldOffset(Offset = "0x10")]
		private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary;

		[Token(Token = "0x4000F88")]
		[FieldOffset(Offset = "0x18")]
		private IDictionaryEnumerator _hashtableEnum;

		[Token(Token = "0x4000F89")]
		[FieldOffset(Offset = "0x20")]
		private int _posMethod;

		[Token(Token = "0x170003E0")]
		public object Current
		{
			[Token(Token = "0x6001EB4")]
			[Address(RVA = "0x3B8FAA0", Offset = "0x3B8FAA0", VA = "0x3B8FAA0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001EB7")]
			[Address(RVA = "0x3B8FAF0", Offset = "0x3B8FAF0", VA = "0x3B8FAF0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170003E2")]
		public object Key
		{
			[Token(Token = "0x6001EB8")]
			[Address(RVA = "0x3B8FF40", Offset = "0x3B8FF40", VA = "0x3B8FF40", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E3")]
		public object Value
		{
			[Token(Token = "0x6001EB9")]
			[Address(RVA = "0x3B8FF50", Offset = "0x3B8FF50", VA = "0x3B8FF50", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0x3B8F940", Offset = "0x3B8F940", VA = "0x3B8F940")]
		public DictionaryEnumerator(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
		{
		}

		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0x3B8FC70", Offset = "0x3B8FC70", VA = "0x3B8FC70", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x3B8FE90", Offset = "0x3B8FE90", VA = "0x3B8FE90", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000F83")]
	[FieldOffset(Offset = "0x10")]
	private IDictionary _internalProperties;

	[Token(Token = "0x4000F84")]
	[FieldOffset(Offset = "0x18")]
	protected IMethodMessage _message;

	[Token(Token = "0x4000F85")]
	[FieldOffset(Offset = "0x20")]
	private string[] _methodKeys;

	[Token(Token = "0x4000F86")]
	[FieldOffset(Offset = "0x28")]
	private bool _ownProperties;

	[Token(Token = "0x170003D6")]
	internal IDictionary InternalDictionary
	{
		[Token(Token = "0x6001E9C")]
		[Address(RVA = "0x3B88390", Offset = "0x3B88390", VA = "0x3B88390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D7")]
	public string[] MethodKeys
	{
		[Token(Token = "0x6001E9D")]
		[Address(RVA = "0x3B8E430", Offset = "0x3B8E430", VA = "0x3B8E430")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6001EA1")]
		[Address(RVA = "0x3B8E500", Offset = "0x3B8E500", VA = "0x3B8E500", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D9")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6001EA2")]
		[Address(RVA = "0x3B8E510", Offset = "0x3B8E510", VA = "0x3B8E510", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	public object this[object key]
	{
		[Token(Token = "0x6001EA3")]
		[Address(RVA = "0x3B8E520", Offset = "0x3B8E520", VA = "0x3B8E520", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EA4")]
		[Address(RVA = "0x3B8E650", Offset = "0x3B8E650", VA = "0x3B8E650", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003DB")]
	public ICollection Keys
	{
		[Token(Token = "0x6001EA7")]
		[Address(RVA = "0x3B8E7E0", Offset = "0x3B8E7E0", VA = "0x3B8E7E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public ICollection Values
	{
		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0x3B8EEB0", Offset = "0x3B8EEB0", VA = "0x3B8EEB0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DD")]
	public int Count
	{
		[Token(Token = "0x6001EAD")]
		[Address(RVA = "0x3B8F750", Offset = "0x3B8F750", VA = "0x3B8F750", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003DE")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001EAE")]
		[Address(RVA = "0x3B8F820", Offset = "0x3B8F820", VA = "0x3B8F820", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DF")]
	public object SyncRoot
	{
		[Token(Token = "0x6001EAF")]
		[Address(RVA = "0x3B8F830", Offset = "0x3B8F830", VA = "0x3B8F830", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x3B8BAD0", Offset = "0x3B8BAD0", VA = "0x3B8BAD0")]
	public MessageDictionary(IMethodMessage message)
	{
	}

	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x3B882A0", Offset = "0x3B882A0", VA = "0x3B882A0")]
	internal bool HasUserData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x3B8E440", Offset = "0x3B8E440", VA = "0x3B8E440", Slot = "20")]
	protected virtual IDictionary AllocInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x3B8A9E0", Offset = "0x3B8A9E0", VA = "0x3B8A9E0")]
	public IDictionary GetInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x3B8E490", Offset = "0x3B8E490", VA = "0x3B8E490")]
	private bool IsOverridenKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x3B8BF00", Offset = "0x3B8BF00", VA = "0x3B8BF00", Slot = "21")]
	protected virtual object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x3B8C740", Offset = "0x3B8C740", VA = "0x3B8C740", Slot = "22")]
	protected virtual void SetMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x3B8E660", Offset = "0x3B8E660", VA = "0x3B8E660", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x3B8F410", Offset = "0x3B8F410", VA = "0x3B8F410", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x3B8F4B0", Offset = "0x3B8F4B0", VA = "0x3B8F4B0", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x3B8F5E0", Offset = "0x3B8F5E0", VA = "0x3B8F5E0", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001EB0")]
	[Address(RVA = "0x3B8F840", Offset = "0x3B8F840", VA = "0x3B8F840", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001EB1")]
	[Address(RVA = "0x3B8F8F0", Offset = "0x3B8F8F0", VA = "0x3B8F8F0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001EB2")]
	[Address(RVA = "0x3B8FA50", Offset = "0x3B8FA50", VA = "0x3B8FA50", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
