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

[Token(Token = "0x20003E2")]
[ConfigurationCollection(typeof(BypassElement))]
public sealed class BypassElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x17000588")]
	public BypassElement this[string name]
	{
		[Token(Token = "0x6001A00")]
		[Address(RVA = "0x282A270", Offset = "0x2828870", VA = "0x18282A270")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A01")]
		[Address(RVA = "0x282A2D0", Offset = "0x28288D0", VA = "0x18282A2D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000589")]
	protected override bool ThrowOnDuplicate
	{
		[Token(Token = "0x6001A02")]
		[Address(RVA = "0x282A2A0", Offset = "0x28288A0", VA = "0x18282A2A0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60019FD")]
	[Address(RVA = "0x282A210", Offset = "0x2828810", VA = "0x18282A210")]
	public BypassElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x60019FE")]
	[Address(RVA = "0x282A240", Offset = "0x2828840", VA = "0x18282A240")]
	public BypassElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x282A300", Offset = "0x2828900", VA = "0x18282A300")]
	public void set_Item(int index, BypassElement value)
	{
	}

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x282A090", Offset = "0x2828690", VA = "0x18282A090")]
	public void Add(BypassElement element)
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x282A0C0", Offset = "0x28286C0", VA = "0x18282A0C0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x282A0F0", Offset = "0x28286F0", VA = "0x18282A0F0", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x282A120", Offset = "0x2828720", VA = "0x18282A120", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x282A150", Offset = "0x2828750", VA = "0x18282A150")]
	public int IndexOf(BypassElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x282A1B0", Offset = "0x28287B0", VA = "0x18282A1B0")]
	public void Remove(BypassElement element)
	{
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x282A1E0", Offset = "0x28287E0", VA = "0x18282A1E0")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x282A180", Offset = "0x2828780", VA = "0x18282A180")]
	public void RemoveAt(int index)
	{
	}
}
