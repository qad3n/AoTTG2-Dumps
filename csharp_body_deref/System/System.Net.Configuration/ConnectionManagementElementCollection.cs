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

[Token(Token = "0x2000389")]
[ConfigurationCollection(typeof(ConnectionManagementElement))]
public sealed class ConnectionManagementElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x17000523")]
	public ConnectionManagementElement this[string name]
	{
		[Token(Token = "0x6001771")]
		[Address(RVA = "0x48F2F90", Offset = "0x48F2F90", VA = "0x48F2F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001772")]
		[Address(RVA = "0x48F2FC0", Offset = "0x48F2FC0", VA = "0x48F2FC0")]
		set
		{
		}
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x48F2F00", Offset = "0x48F2F00", VA = "0x48F2F00")]
	public ConnectionManagementElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x600176F")]
	[Address(RVA = "0x48F2F30", Offset = "0x48F2F30", VA = "0x48F2F30")]
	public ConnectionManagementElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x6001770")]
	[Address(RVA = "0x48F2F60", Offset = "0x48F2F60", VA = "0x48F2F60")]
	public void set_Item(int index, ConnectionManagementElement value)
	{
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x48F2FF0", Offset = "0x48F2FF0", VA = "0x48F2FF0")]
	public void Add(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x48F3020", Offset = "0x48F3020", VA = "0x48F3020")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x48F3050", Offset = "0x48F3050", VA = "0x48F3050", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x48F3080", Offset = "0x48F3080", VA = "0x48F3080", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x48F30B0", Offset = "0x48F30B0", VA = "0x48F30B0")]
	public int IndexOf(ConnectionManagementElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x48F30E0", Offset = "0x48F30E0", VA = "0x48F30E0")]
	public void Remove(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x48F3110", Offset = "0x48F3110", VA = "0x48F3110")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x48F3140", Offset = "0x48F3140", VA = "0x48F3140")]
	public void RemoveAt(int index)
	{
	}
}
