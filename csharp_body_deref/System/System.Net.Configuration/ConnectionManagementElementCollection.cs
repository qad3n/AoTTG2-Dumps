using System.Configuration;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000389")]
[ConfigurationCollection(typeof(ConnectionManagementElement))]
public sealed class ConnectionManagementElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x17000523")]
	public ConnectionManagementElement this[string name]
	{
		[Token(Token = "0x6001771")]
		[Address(RVA = "0x45CDE90", Offset = "0x45CDE90", VA = "0x45CDE90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001772")]
		[Address(RVA = "0x45CDEC0", Offset = "0x45CDEC0", VA = "0x45CDEC0")]
		set
		{
		}
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x45CDE00", Offset = "0x45CDE00", VA = "0x45CDE00")]
	public ConnectionManagementElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x600176F")]
	[Address(RVA = "0x45CDE30", Offset = "0x45CDE30", VA = "0x45CDE30")]
	public ConnectionManagementElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001770")]
	[Address(RVA = "0x45CDE60", Offset = "0x45CDE60", VA = "0x45CDE60")]
	public void set_Item(int index, ConnectionManagementElement value)
	{
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x45CDEF0", Offset = "0x45CDEF0", VA = "0x45CDEF0")]
	public void Add(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x45CDF20", Offset = "0x45CDF20", VA = "0x45CDF20")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x45CDF50", Offset = "0x45CDF50", VA = "0x45CDF50", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x45CDF80", Offset = "0x45CDF80", VA = "0x45CDF80", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x45CDFB0", Offset = "0x45CDFB0", VA = "0x45CDFB0")]
	public int IndexOf(ConnectionManagementElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x45CDFE0", Offset = "0x45CDFE0", VA = "0x45CDFE0")]
	public void Remove(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x45CE010", Offset = "0x45CE010", VA = "0x45CE010")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x45CE040", Offset = "0x45CE040", VA = "0x45CE040")]
	public void RemoveAt(int index)
	{
	}
}
