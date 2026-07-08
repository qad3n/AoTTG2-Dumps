using System.Configuration;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A5")]
[ConfigurationCollection(typeof(WebRequestModuleElement))]
public sealed class WebRequestModuleElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x1700058E")]
	public WebRequestModuleElement this[string name]
	{
		[Token(Token = "0x6001842")]
		[Address(RVA = "0x45D05C0", Offset = "0x45D05C0", VA = "0x45D05C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001843")]
		[Address(RVA = "0x45D05F0", Offset = "0x45D05F0", VA = "0x45D05F0")]
		set
		{
		}
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x45D0530", Offset = "0x45D0530", VA = "0x45D0530")]
	public WebRequestModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001840")]
	[Address(RVA = "0x45D0560", Offset = "0x45D0560", VA = "0x45D0560")]
	public WebRequestModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001841")]
	[Address(RVA = "0x45D0590", Offset = "0x45D0590", VA = "0x45D0590")]
	public void set_Item(int index, WebRequestModuleElement value)
	{
	}

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x45D0620", Offset = "0x45D0620", VA = "0x45D0620")]
	public void Add(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x45D0650", Offset = "0x45D0650", VA = "0x45D0650")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x45D0680", Offset = "0x45D0680", VA = "0x45D0680", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x45D06B0", Offset = "0x45D06B0", VA = "0x45D06B0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x45D06E0", Offset = "0x45D06E0", VA = "0x45D06E0")]
	public int IndexOf(WebRequestModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x45D0710", Offset = "0x45D0710", VA = "0x45D0710")]
	public void Remove(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x45D0740", Offset = "0x45D0740", VA = "0x45D0740")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x45D0770", Offset = "0x45D0770", VA = "0x45D0770")]
	public void RemoveAt(int index)
	{
	}
}
