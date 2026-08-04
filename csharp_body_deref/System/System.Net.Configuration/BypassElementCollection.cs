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

[Token(Token = "0x2000387")]
[ConfigurationCollection(typeof(BypassElement))]
public sealed class BypassElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x1700051E")]
	public BypassElement this[string name]
	{
		[Token(Token = "0x600175C")]
		[Address(RVA = "0x48F2BA0", Offset = "0x48F2BA0", VA = "0x48F2BA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175D")]
		[Address(RVA = "0x48F2BD0", Offset = "0x48F2BD0", VA = "0x48F2BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051F")]
	protected override bool ThrowOnDuplicate
	{
		[Token(Token = "0x600175E")]
		[Address(RVA = "0x48F2C00", Offset = "0x48F2C00", VA = "0x48F2C00", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x48F2B10", Offset = "0x48F2B10", VA = "0x48F2B10")]
	public BypassElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x600175A")]
	[Address(RVA = "0x48F2B40", Offset = "0x48F2B40", VA = "0x48F2B40")]
	public BypassElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x600175B")]
	[Address(RVA = "0x48F2B70", Offset = "0x48F2B70", VA = "0x48F2B70")]
	public void set_Item(int index, BypassElement value)
	{
	}

	[Token(Token = "0x600175F")]
	[Address(RVA = "0x48F2C30", Offset = "0x48F2C30", VA = "0x48F2C30")]
	public void Add(BypassElement element)
	{
	}

	[Token(Token = "0x6001760")]
	[Address(RVA = "0x48F2C60", Offset = "0x48F2C60", VA = "0x48F2C60")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x48F2C90", Offset = "0x48F2C90", VA = "0x48F2C90", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x48F2CC0", Offset = "0x48F2CC0", VA = "0x48F2CC0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001763")]
	[Address(RVA = "0x48F2CF0", Offset = "0x48F2CF0", VA = "0x48F2CF0")]
	public int IndexOf(BypassElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x48F2D20", Offset = "0x48F2D20", VA = "0x48F2D20")]
	public void Remove(BypassElement element)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x48F2D50", Offset = "0x48F2D50", VA = "0x48F2D50")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x48F2D80", Offset = "0x48F2D80", VA = "0x48F2D80")]
	public void RemoveAt(int index)
	{
	}
}
