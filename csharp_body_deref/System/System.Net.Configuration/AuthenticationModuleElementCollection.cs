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

[Token(Token = "0x20003DF")]
[ConfigurationCollection(typeof(AuthenticationModuleElement))]
public sealed class AuthenticationModuleElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x17000583")]
	public AuthenticationModuleElement this[string name]
	{
		[Token(Token = "0x60019E9")]
		[Address(RVA = "0x2829DF0", Offset = "0x28283F0", VA = "0x182829DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019EA")]
		[Address(RVA = "0x2829E50", Offset = "0x2828450", VA = "0x182829E50")]
		set
		{
		}
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x2829DC0", Offset = "0x28283C0", VA = "0x182829DC0")]
	public AuthenticationModuleElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x2829E20", Offset = "0x2828420", VA = "0x182829E20")]
	public AuthenticationModuleElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x2829E80", Offset = "0x2828480", VA = "0x182829E80")]
	public void set_Item(int index, AuthenticationModuleElement value)
	{
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x2829C40", Offset = "0x2828240", VA = "0x182829C40")]
	public void Add(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x2829C70", Offset = "0x2828270", VA = "0x182829C70")]
	public void Clear()
	{
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x2829CA0", Offset = "0x28282A0", VA = "0x182829CA0", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x2829CD0", Offset = "0x28282D0", VA = "0x182829CD0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x2829D00", Offset = "0x2828300", VA = "0x182829D00")]
	public int IndexOf(AuthenticationModuleElement element)
	{
		return default(int);
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x2829D90", Offset = "0x2828390", VA = "0x182829D90")]
	public void Remove(AuthenticationModuleElement element)
	{
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x2829D60", Offset = "0x2828360", VA = "0x182829D60")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x2829D30", Offset = "0x2828330", VA = "0x182829D30")]
	public void RemoveAt(int index)
	{
	}
}
