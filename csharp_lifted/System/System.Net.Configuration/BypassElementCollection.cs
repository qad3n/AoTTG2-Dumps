// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.BypassElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200039E")]
[ConfigurationCollection(typeof(BypassElement))]
public sealed class BypassElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x1700055A")]
	public BypassElement this[string name]
	{
		[Token(Token = "0x6001846")]
		[Address(RVA = "0x61CF690", Offset = "0x61CE690", VA = "0x61CF690")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001847")]
		[Address(RVA = "0x61CF6C0", Offset = "0x61CE6C0", VA = "0x61CF6C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700055B")]
	protected override bool ThrowOnDuplicate
	{
		[Token(Token = "0x6001848")]
		[Address(RVA = "0x61CF6F0", Offset = "0x61CE6F0", VA = "0x61CF6F0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001843")]
	[Address(RVA = "0x61CF600", Offset = "0x61CE600", VA = "0x61CF600")]
	public BypassElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001844")]
	[Address(RVA = "0x61CF630", Offset = "0x61CE630", VA = "0x61CF630")]
	public BypassElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001845")]
	[Address(RVA = "0x61CF660", Offset = "0x61CE660", VA = "0x61CF660")]
	public void set_Item(int index, BypassElement value)
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x61CF720", Offset = "0x61CE720", VA = "0x61CF720")]
	public void Add(BypassElement element)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x61CF750", Offset = "0x61CE750", VA = "0x61CF750")]
	public void Clear()
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x61CF780", Offset = "0x61CE780", VA = "0x61CF780", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x61CF7B0", Offset = "0x61CE7B0", VA = "0x61CF7B0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x61CF7E0", Offset = "0x61CE7E0", VA = "0x61CF7E0")]
	public int IndexOf(BypassElement element)
	{
		return default(int);
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x61CF810", Offset = "0x61CE810", VA = "0x61CF810")]
	public void Remove(BypassElement element)
	{
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x61CF840", Offset = "0x61CE840", VA = "0x61CF840")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x61CF870", Offset = "0x61CE870", VA = "0x61CF870")]
	public void RemoveAt(int index)
	{
	}
}
