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
[Token(Token = "0x2000204")]
public class NameValueCollection : NameObjectCollectionBase
{
	[Token(Token = "0x4000750")]
	[FieldOffset(Offset = "0x50")]
	private string[] _all;

	[Token(Token = "0x4000751")]
	[FieldOffset(Offset = "0x58")]
	private string[] _allKeys;

	[Token(Token = "0x170002E4")]
	public string this[string name]
	{
		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x62802E0", Offset = "0x627F2E0", VA = "0x62802E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x6280300", Offset = "0x627F300", VA = "0x6280300")]
		set
		{
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual string[] AllKeys
	{
		[Token(Token = "0x6000DE9")]
		[Address(RVA = "0x62805C0", Offset = "0x627F5C0", VA = "0x62805C0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x627F4D0", Offset = "0x627E4D0", VA = "0x627F4D0")]
	public NameValueCollection()
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x627F5E0", Offset = "0x627E5E0", VA = "0x627F5E0")]
	public NameValueCollection(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x627F660", Offset = "0x627E660", VA = "0x627F660")]
	protected NameValueCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x627F700", Offset = "0x627E700", VA = "0x627F700")]
	protected void InvalidateCachedArrays()
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x627F730", Offset = "0x627E730", VA = "0x627F730")]
	private static string GetAsOneString(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x627F8A0", Offset = "0x627E8A0", VA = "0x627F8A0")]
	private static string[] GetAsStringArray(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x627F920", Offset = "0x627E920", VA = "0x627F920", Slot = "15")]
	public virtual void Add(string name, string value)
	{
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x627FC30", Offset = "0x627EC30", VA = "0x627FC30", Slot = "16")]
	public virtual string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x627FCC0", Offset = "0x627ECC0", VA = "0x627FCC0", Slot = "17")]
	public virtual string[] GetValues(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x627FDD0", Offset = "0x627EDD0", VA = "0x627FDD0", Slot = "18")]
	public virtual void Set(string name, string value)
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x627FF80", Offset = "0x627EF80", VA = "0x627FF80", Slot = "19")]
	public virtual void Remove(string name)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x6280320", Offset = "0x627F320", VA = "0x6280320", Slot = "20")]
	public virtual string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x62804A0", Offset = "0x627F4A0", VA = "0x62804A0", Slot = "21")]
	public virtual string GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x62807A0", Offset = "0x627F7A0", VA = "0x62807A0")]
	internal NameValueCollection(DBNull dummy)
	{
	}
}
