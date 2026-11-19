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

[Token(Token = "0x20003BC")]
[ConfigurationCollection(typeof(WebRequestModuleElement))]
public sealed class WebRequestModuleElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x170005CA")]
	public WebRequestModuleElement this[string name]
	{
		[Token(Token = "0x600192C")]
		[Address(RVA = "0x61D21B0", Offset = "0x61D11B0", VA = "0x61D21B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600192D")]
		[Address(RVA = "0x61D21E0", Offset = "0x61D11E0", VA = "0x61D21E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x61D2120", Offset = "0x61D1120", VA = "0x61D2120")]
	public WebRequestModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x600192A")]
	[Address(RVA = "0x61D2150", Offset = "0x61D1150", VA = "0x61D2150")]
	public WebRequestModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x600192B")]
	[Address(RVA = "0x61D2180", Offset = "0x61D1180", VA = "0x61D2180")]
	public void set_Item(int index, WebRequestModuleElement value)
	{
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x61D2210", Offset = "0x61D1210", VA = "0x61D2210")]
	public void Add(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x61D2240", Offset = "0x61D1240", VA = "0x61D2240")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001930")]
	[Address(RVA = "0x61D2270", Offset = "0x61D1270", VA = "0x61D2270", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001931")]
	[Address(RVA = "0x61D22A0", Offset = "0x61D12A0", VA = "0x61D22A0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001932")]
	[Address(RVA = "0x61D22D0", Offset = "0x61D12D0", VA = "0x61D22D0")]
	public int IndexOf(WebRequestModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x61D2300", Offset = "0x61D1300", VA = "0x61D2300")]
	public void Remove(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x61D2330", Offset = "0x61D1330", VA = "0x61D2330")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x61D2360", Offset = "0x61D1360", VA = "0x61D2360")]
	public void RemoveAt(int index)
	{
	}
}
