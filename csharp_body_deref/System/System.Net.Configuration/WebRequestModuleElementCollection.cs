// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.WebRequestModuleElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48F56C0", Offset = "0x48F56C0", VA = "0x48F56C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001843")]
		[Address(RVA = "0x48F56F0", Offset = "0x48F56F0", VA = "0x48F56F0")]
		set
		{
		}
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x48F5630", Offset = "0x48F5630", VA = "0x48F5630")]
	public WebRequestModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001840")]
	[Address(RVA = "0x48F5660", Offset = "0x48F5660", VA = "0x48F5660")]
	public WebRequestModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001841")]
	[Address(RVA = "0x48F5690", Offset = "0x48F5690", VA = "0x48F5690")]
	public void set_Item(int index, WebRequestModuleElement value)
	{
	}

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x48F5720", Offset = "0x48F5720", VA = "0x48F5720")]
	public void Add(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x48F5750", Offset = "0x48F5750", VA = "0x48F5750")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x48F5780", Offset = "0x48F5780", VA = "0x48F5780", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x48F57B0", Offset = "0x48F57B0", VA = "0x48F57B0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x48F57E0", Offset = "0x48F57E0", VA = "0x48F57E0")]
	public int IndexOf(WebRequestModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x48F5810", Offset = "0x48F5810", VA = "0x48F5810")]
	public void Remove(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x48F5840", Offset = "0x48F5840", VA = "0x48F5840")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x48F5870", Offset = "0x48F5870", VA = "0x48F5870")]
	public void RemoveAt(int index)
	{
	}
}
