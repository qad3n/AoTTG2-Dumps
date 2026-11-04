// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.ConnectionManagementElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003E4")]
[ConfigurationCollection(typeof(ConnectionManagementElement))]
public sealed class ConnectionManagementElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x1700058D")]
	public ConnectionManagementElement this[string name]
	{
		[Token(Token = "0x6001A15")]
		[Address(RVA = "0x282A5D0", Offset = "0x2828BD0", VA = "0x18282A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A16")]
		[Address(RVA = "0x282A630", Offset = "0x2828C30", VA = "0x18282A630")]
		set
		{
		}
	}

	[Token(Token = "0x6001A12")]
	[Address(RVA = "0x282A5A0", Offset = "0x2828BA0", VA = "0x18282A5A0")]
	public ConnectionManagementElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x282A600", Offset = "0x2828C00", VA = "0x18282A600")]
	public ConnectionManagementElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x282A660", Offset = "0x2828C60", VA = "0x18282A660")]
	public void set_Item(int index, ConnectionManagementElement value)
	{
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x282A420", Offset = "0x2828A20", VA = "0x18282A420")]
	public void Add(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x282A450", Offset = "0x2828A50", VA = "0x18282A450")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x282A480", Offset = "0x2828A80", VA = "0x18282A480", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x282A4B0", Offset = "0x2828AB0", VA = "0x18282A4B0", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x282A4E0", Offset = "0x2828AE0", VA = "0x18282A4E0")]
	public int IndexOf(ConnectionManagementElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x282A570", Offset = "0x2828B70", VA = "0x18282A570")]
	public void Remove(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x282A540", Offset = "0x2828B40", VA = "0x18282A540")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x282A510", Offset = "0x2828B10", VA = "0x18282A510")]
	public void RemoveAt(int index)
	{
	}
}
