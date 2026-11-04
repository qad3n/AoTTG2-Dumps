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

[Token(Token = "0x2000400")]
[ConfigurationCollection(typeof(WebRequestModuleElement))]
public sealed class WebRequestModuleElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x170005F8")]
	public WebRequestModuleElement this[string name]
	{
		[Token(Token = "0x6001AE6")]
		[Address(RVA = "0x282CC70", Offset = "0x282B270", VA = "0x18282CC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AE7")]
		[Address(RVA = "0x282CD00", Offset = "0x282B300", VA = "0x18282CD00")]
		set
		{
		}
	}

	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x282CC40", Offset = "0x282B240", VA = "0x18282CC40")]
	public WebRequestModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x282CCA0", Offset = "0x282B2A0", VA = "0x18282CCA0")]
	public WebRequestModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x282CCD0", Offset = "0x282B2D0", VA = "0x18282CCD0")]
	public void set_Item(int index, WebRequestModuleElement value)
	{
	}

	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x282CAC0", Offset = "0x282B0C0", VA = "0x18282CAC0")]
	public void Add(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x282CAF0", Offset = "0x282B0F0", VA = "0x18282CAF0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x282CB20", Offset = "0x282B120", VA = "0x18282CB20", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x282CB50", Offset = "0x282B150", VA = "0x18282CB50", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x282CB80", Offset = "0x282B180", VA = "0x18282CB80")]
	public int IndexOf(WebRequestModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x282CBE0", Offset = "0x282B1E0", VA = "0x18282CBE0")]
	public void Remove(WebRequestModuleElement element)
	{
	}

	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x282CC10", Offset = "0x282B210", VA = "0x18282CC10")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x282CBB0", Offset = "0x282B1B0", VA = "0x18282CBB0")]
	public void RemoveAt(int index)
	{
	}
}
