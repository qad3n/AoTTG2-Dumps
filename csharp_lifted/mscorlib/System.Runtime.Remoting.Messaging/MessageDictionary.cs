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
[Token(Token = "0x20003BD")]
internal class MessageDictionary : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x20003BE")]
	private class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000EED")]
		[FieldOffset(Offset = "0x10")]
		private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary;

		[Token(Token = "0x4000EEE")]
		[FieldOffset(Offset = "0x18")]
		private IDictionaryEnumerator _hashtableEnum;

		[Token(Token = "0x4000EEF")]
		[FieldOffset(Offset = "0x20")]
		private int _posMethod;

		[Token(Token = "0x170003E1")]
		public object Current
		{
			[Token(Token = "0x6001EF9")]
			[Address(RVA = "0x5397470", Offset = "0x5396470", VA = "0x5397470", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E2")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001EFC")]
			[Address(RVA = "0x53974C0", Offset = "0x53964C0", VA = "0x53974C0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170003E3")]
		public object Key
		{
			[Token(Token = "0x6001EFD")]
			[Address(RVA = "0x5397930", Offset = "0x5396930", VA = "0x5397930", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003E4")]
		public object Value
		{
			[Token(Token = "0x6001EFE")]
			[Address(RVA = "0x5397940", Offset = "0x5396940", VA = "0x5397940", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001EF8")]
		[Address(RVA = "0x5397320", Offset = "0x5396320", VA = "0x5397320")]
		public DictionaryEnumerator(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
		{
		}

		[Token(Token = "0x6001EFA")]
		[Address(RVA = "0x5397640", Offset = "0x5396640", VA = "0x5397640", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001EFB")]
		[Address(RVA = "0x5397880", Offset = "0x5396880", VA = "0x5397880", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x10")]
	private IDictionary _internalProperties;

	[Token(Token = "0x4000EEA")]
	[FieldOffset(Offset = "0x18")]
	protected IMethodMessage _message;

	[Token(Token = "0x4000EEB")]
	[FieldOffset(Offset = "0x20")]
	private string[] _methodKeys;

	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x28")]
	private bool _ownProperties;

	[Token(Token = "0x170003D7")]
	internal IDictionary InternalDictionary
	{
		[Token(Token = "0x6001EE1")]
		[Address(RVA = "0x53901D0", Offset = "0x538F1D0", VA = "0x53901D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D8")]
	public string[] MethodKeys
	{
		[Token(Token = "0x6001EE2")]
		[Address(RVA = "0x5396090", Offset = "0x5395090", VA = "0x5396090")]
		set
		{
		}
	}

	[Token(Token = "0x170003D9")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6001EE6")]
		[Address(RVA = "0x5396160", Offset = "0x5395160", VA = "0x5396160", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6001EE7")]
		[Address(RVA = "0x5396170", Offset = "0x5395170", VA = "0x5396170", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DB")]
	public object this[object key]
	{
		[Token(Token = "0x6001EE8")]
		[Address(RVA = "0x5396180", Offset = "0x5395180", VA = "0x5396180", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EE9")]
		[Address(RVA = "0x53962B0", Offset = "0x53952B0", VA = "0x53962B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003DC")]
	public ICollection Keys
	{
		[Token(Token = "0x6001EEC")]
		[Address(RVA = "0x5396440", Offset = "0x5395440", VA = "0x5396440", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DD")]
	public ICollection Values
	{
		[Token(Token = "0x6001EED")]
		[Address(RVA = "0x5396910", Offset = "0x5395910", VA = "0x5396910", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DE")]
	public int Count
	{
		[Token(Token = "0x6001EF2")]
		[Address(RVA = "0x5397130", Offset = "0x5396130", VA = "0x5397130", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003DF")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001EF3")]
		[Address(RVA = "0x5397200", Offset = "0x5396200", VA = "0x5397200", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E0")]
	public object SyncRoot
	{
		[Token(Token = "0x6001EF4")]
		[Address(RVA = "0x5397210", Offset = "0x5396210", VA = "0x5397210", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001EDF")]
	[Address(RVA = "0x53937B0", Offset = "0x53927B0", VA = "0x53937B0")]
	public MessageDictionary(IMethodMessage message)
	{
	}

	[Token(Token = "0x6001EE0")]
	[Address(RVA = "0x53900E0", Offset = "0x538F0E0", VA = "0x53900E0")]
	internal bool HasUserData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001EE3")]
	[Address(RVA = "0x53960A0", Offset = "0x53950A0", VA = "0x53960A0", Slot = "20")]
	protected virtual IDictionary AllocInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001EE4")]
	[Address(RVA = "0x5392730", Offset = "0x5391730", VA = "0x5392730")]
	public IDictionary GetInternalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001EE5")]
	[Address(RVA = "0x53960F0", Offset = "0x53950F0", VA = "0x53960F0")]
	private bool IsOverridenKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EEA")]
	[Address(RVA = "0x5393BE0", Offset = "0x5392BE0", VA = "0x5393BE0", Slot = "21")]
	protected virtual object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001EEB")]
	[Address(RVA = "0x5394400", Offset = "0x5393400", VA = "0x5394400", Slot = "22")]
	protected virtual void SetMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001EEE")]
	[Address(RVA = "0x53962C0", Offset = "0x53952C0", VA = "0x53962C0", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6001EEF")]
	[Address(RVA = "0x5396DF0", Offset = "0x5395DF0", VA = "0x5396DF0", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001EF0")]
	[Address(RVA = "0x5396E90", Offset = "0x5395E90", VA = "0x5396E90", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EF1")]
	[Address(RVA = "0x5396FC0", Offset = "0x5395FC0", VA = "0x5396FC0", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001EF5")]
	[Address(RVA = "0x5397220", Offset = "0x5396220", VA = "0x5397220", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001EF6")]
	[Address(RVA = "0x53972D0", Offset = "0x53962D0", VA = "0x53972D0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001EF7")]
	[Address(RVA = "0x5397420", Offset = "0x5396420", VA = "0x5397420", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
