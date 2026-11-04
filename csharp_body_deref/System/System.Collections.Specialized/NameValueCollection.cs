// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.NameValueCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000243")]
public class NameValueCollection : NameObjectCollectionBase
{
	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0x50")]
	private string[] _all;

	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x58")]
	private string[] _allKeys;

	[Token(Token = "0x17000313")]
	public string this[string name]
	{
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x243BAD0", Offset = "0x243A0D0", VA = "0x18243BAD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x28D7DB0", Offset = "0x28D63B0", VA = "0x1828D7DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000314")]
	public virtual string[] AllKeys
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x28D7C60", Offset = "0x28D6260", VA = "0x1828D7C60", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x28D7B80", Offset = "0x28D6180", VA = "0x1828D7B80")]
	public NameValueCollection()
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x28D7A90", Offset = "0x28D6090", VA = "0x1828D7A90")]
	public NameValueCollection(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x28D7B10", Offset = "0x28D6110", VA = "0x1828D7B10")]
	protected NameValueCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x28D7860", Offset = "0x28D5E60", VA = "0x1828D7860")]
	protected void InvalidateCachedArrays()
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x28D72D0", Offset = "0x28D58D0", VA = "0x1828D72D0")]
	private static string GetAsOneString(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x28D74C0", Offset = "0x28D5AC0", VA = "0x1828D74C0")]
	private static string[] GetAsStringArray(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x28D7140", Offset = "0x28D5740", VA = "0x1828D7140", Slot = "15")]
	public virtual void Add(string name, string value)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x28D77C0", Offset = "0x28D5DC0", VA = "0x1828D77C0", Slot = "16")]
	public virtual string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x28D7580", Offset = "0x28D5B80", VA = "0x1828D7580", Slot = "17")]
	public virtual string[] GetValues(string name)
	{
		return null;
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x28D78F0", Offset = "0x28D5EF0", VA = "0x1828D78F0", Slot = "18")]
	public virtual void Set(string name, string value)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x28D78A0", Offset = "0x28D5EA0", VA = "0x1828D78A0", Slot = "19")]
	public virtual void Remove(string name)
	{
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x28D76B0", Offset = "0x28D5CB0", VA = "0x1828D76B0", Slot = "20")]
	public virtual string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x28D7570", Offset = "0x28D5B70", VA = "0x1828D7570", Slot = "21")]
	public virtual string GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x28D7C10", Offset = "0x28D6210", VA = "0x1828D7C10")]
	internal NameValueCollection(DBNull dummy)
	{
	}
}
