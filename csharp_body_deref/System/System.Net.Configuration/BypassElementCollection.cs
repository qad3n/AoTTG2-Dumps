using System.Configuration;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000387")]
[ConfigurationCollection(typeof(BypassElement))]
public sealed class BypassElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x1700051E")]
	public BypassElement this[string name]
	{
		[Token(Token = "0x600175C")]
		[Address(RVA = "0x45CDAA0", Offset = "0x45CDAA0", VA = "0x45CDAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175D")]
		[Address(RVA = "0x45CDAD0", Offset = "0x45CDAD0", VA = "0x45CDAD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051F")]
	protected override bool ThrowOnDuplicate
	{
		[Token(Token = "0x600175E")]
		[Address(RVA = "0x45CDB00", Offset = "0x45CDB00", VA = "0x45CDB00", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x45CDA10", Offset = "0x45CDA10", VA = "0x45CDA10")]
	public BypassElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x600175A")]
	[Address(RVA = "0x45CDA40", Offset = "0x45CDA40", VA = "0x45CDA40")]
	public BypassElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x600175B")]
	[Address(RVA = "0x45CDA70", Offset = "0x45CDA70", VA = "0x45CDA70")]
	public void set_Item(int index, BypassElement value)
	{
	}

	[Token(Token = "0x600175F")]
	[Address(RVA = "0x45CDB30", Offset = "0x45CDB30", VA = "0x45CDB30")]
	public void Add(BypassElement element)
	{
	}

	[Token(Token = "0x6001760")]
	[Address(RVA = "0x45CDB60", Offset = "0x45CDB60", VA = "0x45CDB60")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x45CDB90", Offset = "0x45CDB90", VA = "0x45CDB90", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x45CDBC0", Offset = "0x45CDBC0", VA = "0x45CDBC0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001763")]
	[Address(RVA = "0x45CDBF0", Offset = "0x45CDBF0", VA = "0x45CDBF0")]
	public int IndexOf(BypassElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x45CDC20", Offset = "0x45CDC20", VA = "0x45CDC20")]
	public void Remove(BypassElement element)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x45CDC50", Offset = "0x45CDC50", VA = "0x45CDC50")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x45CDC80", Offset = "0x45CDC80", VA = "0x45CDC80")]
	public void RemoveAt(int index)
	{
	}
}
