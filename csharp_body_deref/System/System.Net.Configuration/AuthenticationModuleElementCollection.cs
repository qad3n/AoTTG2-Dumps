// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.AuthenticationModuleElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48F2750", Offset = "0x48F2750", VA = "0x48F2750")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001746")]
		[Address(RVA = "0x48F2780", Offset = "0x48F2780", VA = "0x48F2780")]
		set
		{
		}
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x48F26C0", Offset = "0x48F26C0", VA = "0x48F26C0")]
	public AuthenticationModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001743")]
	[Address(RVA = "0x48F26F0", Offset = "0x48F26F0", VA = "0x48F26F0")]
	public AuthenticationModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001744")]
	[Address(RVA = "0x48F2720", Offset = "0x48F2720", VA = "0x48F2720")]
	public void set_Item(int index, AuthenticationModuleElement value)
	{
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x48F27B0", Offset = "0x48F27B0", VA = "0x48F27B0")]
	public void Add(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x48F27E0", Offset = "0x48F27E0", VA = "0x48F27E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x48F2810", Offset = "0x48F2810", VA = "0x48F2810", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x48F2840", Offset = "0x48F2840", VA = "0x48F2840", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x48F2870", Offset = "0x48F2870", VA = "0x48F2870")]
	public int IndexOf(AuthenticationModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x48F28A0", Offset = "0x48F28A0", VA = "0x48F28A0")]
	public void Remove(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x48F28D0", Offset = "0x48F28D0", VA = "0x48F28D0")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x48F2900", Offset = "0x48F2900", VA = "0x48F2900")]
	public void RemoveAt(int index)
	{
	}
}
