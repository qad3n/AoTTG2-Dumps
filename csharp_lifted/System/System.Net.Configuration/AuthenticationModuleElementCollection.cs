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

[Token(Token = "0x200039B")]
[ConfigurationCollection(typeof(AuthenticationModuleElement))]
public sealed class AuthenticationModuleElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x17000555")]
	public AuthenticationModuleElement this[string name]
	{
		[Token(Token = "0x600182F")]
		[Address(RVA = "0x61CF240", Offset = "0x61CE240", VA = "0x61CF240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001830")]
		[Address(RVA = "0x61CF270", Offset = "0x61CE270", VA = "0x61CF270")]
		set
		{
		}
	}

	[Token(Token = "0x600182C")]
	[Address(RVA = "0x61CF1B0", Offset = "0x61CE1B0", VA = "0x61CF1B0")]
	public AuthenticationModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x600182D")]
	[Address(RVA = "0x61CF1E0", Offset = "0x61CE1E0", VA = "0x61CF1E0")]
	public AuthenticationModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x600182E")]
	[Address(RVA = "0x61CF210", Offset = "0x61CE210", VA = "0x61CF210")]
	public void set_Item(int index, AuthenticationModuleElement value)
	{
	}

	[Token(Token = "0x6001831")]
	[Address(RVA = "0x61CF2A0", Offset = "0x61CE2A0", VA = "0x61CF2A0")]
	public void Add(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x61CF2D0", Offset = "0x61CE2D0", VA = "0x61CF2D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x61CF300", Offset = "0x61CE300", VA = "0x61CF300", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x61CF330", Offset = "0x61CE330", VA = "0x61CF330", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x61CF360", Offset = "0x61CE360", VA = "0x61CF360")]
	public int IndexOf(AuthenticationModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x61CF390", Offset = "0x61CE390", VA = "0x61CF390")]
	public void Remove(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x6001837")]
	[Address(RVA = "0x61CF3C0", Offset = "0x61CE3C0", VA = "0x61CF3C0")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001838")]
	[Address(RVA = "0x61CF3F0", Offset = "0x61CE3F0", VA = "0x61CF3F0")]
	public void RemoveAt(int index)
	{
	}
}
