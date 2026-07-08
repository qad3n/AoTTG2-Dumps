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
			[Address(RVA = "0x4EA9F80", Offset = "0x4EA9F80", VA = "0x4EA9F80", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001EB7")]
			[Address(RVA = "0x4EA9FD0", Offset = "0x4EA9FD0", VA = "0x4EA9FD0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170003E2")]
		public object Key
		{
			[Token(Token = "0x6001EB8")]
			[Address(RVA = "0x4EAA420", Offset = "0x4EAA420", VA = "0x4EAA420", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E3")]
		public object Value
		{
			[Token(Token = "0x6001EB9")]
			[Address(RVA = "0x4EAA430", Offset = "0x4EAA430", VA = "0x4EAA430", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0x4EA9E20", Offset = "0x4EA9E20", VA = "0x4EA9E20")]
		public DictionaryEnumerator(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
		{
		}

		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0x4EAA150", Offset = "0x4EAA150", VA = "0x4EAA150", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x4EAA370", Offset = "0x4EAA370", VA = "0x4EAA370", Slot = "9")]
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
		[Address(RVA = "0x4EA2870", Offset = "0x4EA2870", VA = "0x4EA2870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D7")]
	public string[] MethodKeys
	{
		[Token(Token = "0x6001E9D")]
		[Address(RVA = "0x4EA8910", Offset = "0x4EA8910", VA = "0x4EA8910")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6001EA1")]
		[Address(RVA = "0x4EA89E0", Offset = "0x4EA89E0", VA = "0x4EA89E0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D9")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6001EA2")]
		[Address(RVA = "0x4EA89F0", Offset = "0x4EA89F0", VA = "0x4EA89F0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	public object this[object key]
	{
		[Token(Token = "0x6001EA3")]
		[Address(RVA = "0x4EA8A00", Offset = "0x4EA8A00", VA = "0x4EA8A00", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EA4")]
		[Address(RVA = "0x4EA8B30", Offset = "0x4EA8B30", VA = "0x4EA8B30", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003DB")]
	public ICollection Keys
	{
		[Token(Token = "0x6001EA7")]
		[Address(RVA = "0x4EA8CC0", Offset = "0x4EA8CC0", VA = "0x4EA8CC0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public ICollection Values
	{
		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0x4EA9390", Offset = "0x4EA9390", VA = "0x4EA9390", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DD")]
	public int Count
	{
		[Token(Token = "0x6001EAD")]
		[Address(RVA = "0x4EA9C30", Offset = "0x4EA9C30", VA = "0x4EA9C30", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003DE")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001EAE")]
		[Address(RVA = "0x4EA9D00", Offset = "0x4EA9D00", VA = "0x4EA9D00", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DF")]
	public object SyncRoot
	{
		[Token(Token = "0x6001EAF")]
		[Address(RVA = "0x4EA9D10", Offset = "0x4EA9D10", VA = "0x4EA9D10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x4EA5FB0", Offset = "0x4EA5FB0", VA = "0x4EA5FB0")]
	public MessageDictionary(IMethodMessage message)
	{
	}

	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x4EA2780", Offset = "0x4EA2780", VA = "0x4EA2780")]
	internal bool HasUserData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x4EA8920", Offset = "0x4EA8920", VA = "0x4EA8920", Slot = "20")]
	protected virtual IDictionary AllocInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x4EA4EC0", Offset = "0x4EA4EC0", VA = "0x4EA4EC0")]
	public IDictionary GetInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x4EA8970", Offset = "0x4EA8970", VA = "0x4EA8970")]
	private bool IsOverridenKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x4EA63E0", Offset = "0x4EA63E0", VA = "0x4EA63E0", Slot = "21")]
	protected virtual object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x4EA6C20", Offset = "0x4EA6C20", VA = "0x4EA6C20", Slot = "22")]
	protected virtual void SetMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x4EA8B40", Offset = "0x4EA8B40", VA = "0x4EA8B40", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x4EA98F0", Offset = "0x4EA98F0", VA = "0x4EA98F0", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x4EA9990", Offset = "0x4EA9990", VA = "0x4EA9990", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x4EA9AC0", Offset = "0x4EA9AC0", VA = "0x4EA9AC0", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001EB0")]
	[Address(RVA = "0x4EA9D20", Offset = "0x4EA9D20", VA = "0x4EA9D20", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001EB1")]
	[Address(RVA = "0x4EA9DD0", Offset = "0x4EA9DD0", VA = "0x4EA9DD0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001EB2")]
	[Address(RVA = "0x4EA9F30", Offset = "0x4EA9F30", VA = "0x4EA9F30", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
