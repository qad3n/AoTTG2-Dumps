using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000338")]
public class NameValueCollection : NameObjectCollectionBase
{
	[Token(Token = "0x4000EE8")]
	[FieldOffset(Offset = "0x50")]
	private string[] _all;

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x58")]
	private string[] _allKeys;

	[Token(Token = "0x170004A4")]
	public string this[string name]
	{
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x45BE8C0", Offset = "0x45BE8C0", VA = "0x45BE8C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155E")]
		[Address(RVA = "0x45BE8E0", Offset = "0x45BE8E0", VA = "0x45BE8E0")]
		set
		{
		}
	}

	[Token(Token = "0x170004A5")]
	public virtual string[] AllKeys
	{
		[Token(Token = "0x6001561")]
		[Address(RVA = "0x45BEBA0", Offset = "0x45BEBA0", VA = "0x45BEBA0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x45BDA80", Offset = "0x45BDA80", VA = "0x45BDA80")]
	public NameValueCollection()
	{
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x45BDB90", Offset = "0x45BDB90", VA = "0x45BDB90")]
	public NameValueCollection(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x45BDC10", Offset = "0x45BDC10", VA = "0x45BDC10")]
	protected NameValueCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x45BDCB0", Offset = "0x45BDCB0", VA = "0x45BDCB0")]
	protected void InvalidateCachedArrays()
	{
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x45BDCE0", Offset = "0x45BDCE0", VA = "0x45BDCE0")]
	private static string GetAsOneString(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x45BDE60", Offset = "0x45BDE60", VA = "0x45BDE60")]
	private static string[] GetAsStringArray(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x45BDEE0", Offset = "0x45BDEE0", VA = "0x45BDEE0", Slot = "15")]
	public virtual void Add(string name, string value)
	{
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x45BE200", Offset = "0x45BE200", VA = "0x45BE200", Slot = "16")]
	public virtual string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x45BE290", Offset = "0x45BE290", VA = "0x45BE290", Slot = "17")]
	public virtual string[] GetValues(string name)
	{
		return null;
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x45BE3A0", Offset = "0x45BE3A0", VA = "0x45BE3A0", Slot = "18")]
	public virtual void Set(string name, string value)
	{
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x45BE550", Offset = "0x45BE550", VA = "0x45BE550", Slot = "19")]
	public virtual void Remove(string name)
	{
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x45BE900", Offset = "0x45BE900", VA = "0x45BE900", Slot = "20")]
	public virtual string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x45BEA80", Offset = "0x45BEA80", VA = "0x45BEA80", Slot = "21")]
	public virtual string GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x45BED80", Offset = "0x45BED80", VA = "0x45BED80")]
	internal NameValueCollection(DBNull dummy)
	{
	}
}
