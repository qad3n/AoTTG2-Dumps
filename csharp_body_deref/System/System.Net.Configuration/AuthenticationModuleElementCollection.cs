using System.Configuration;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000384")]
[ConfigurationCollection(typeof(AuthenticationModuleElement))]
public sealed class AuthenticationModuleElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x17000519")]
	public AuthenticationModuleElement this[string name]
	{
		[Token(Token = "0x6001745")]
		[Address(RVA = "0x45CD650", Offset = "0x45CD650", VA = "0x45CD650")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001746")]
		[Address(RVA = "0x45CD680", Offset = "0x45CD680", VA = "0x45CD680")]
		set
		{
		}
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x45CD5C0", Offset = "0x45CD5C0", VA = "0x45CD5C0")]
	public AuthenticationModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001743")]
	[Address(RVA = "0x45CD5F0", Offset = "0x45CD5F0", VA = "0x45CD5F0")]
	public AuthenticationModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001744")]
	[Address(RVA = "0x45CD620", Offset = "0x45CD620", VA = "0x45CD620")]
	public void set_Item(int index, AuthenticationModuleElement value)
	{
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x45CD6B0", Offset = "0x45CD6B0", VA = "0x45CD6B0")]
	public void Add(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x45CD6E0", Offset = "0x45CD6E0", VA = "0x45CD6E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x45CD710", Offset = "0x45CD710", VA = "0x45CD710", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x45CD740", Offset = "0x45CD740", VA = "0x45CD740", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x45CD770", Offset = "0x45CD770", VA = "0x45CD770")]
	public int IndexOf(AuthenticationModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x45CD7A0", Offset = "0x45CD7A0", VA = "0x45CD7A0")]
	public void Remove(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x45CD7D0", Offset = "0x45CD7D0", VA = "0x45CD7D0")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x45CD800", Offset = "0x45CD800", VA = "0x45CD800")]
	public void RemoveAt(int index)
	{
	}
}
