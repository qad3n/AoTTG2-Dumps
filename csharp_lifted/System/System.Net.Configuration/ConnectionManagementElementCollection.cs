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

[Token(Token = "0x20003A0")]
[ConfigurationCollection(typeof(ConnectionManagementElement))]
public sealed class ConnectionManagementElementCollection : ConfigurationElementCollection
{
	[Token(Token = "0x1700055F")]
	public ConnectionManagementElement this[string name]
	{
		[Token(Token = "0x600185B")]
		[Address(RVA = "0x61CFA80", Offset = "0x61CEA80", VA = "0x61CFA80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600185C")]
		[Address(RVA = "0x61CFAB0", Offset = "0x61CEAB0", VA = "0x61CFAB0")]
		set
		{
		}
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x61CF9F0", Offset = "0x61CE9F0", VA = "0x61CF9F0")]
	public ConnectionManagementElementCollection()
	{
	}

	[SpecialName]
	[Token(Token = "0x6001859")]
	[Address(RVA = "0x61CFA20", Offset = "0x61CEA20", VA = "0x61CFA20")]
	public ConnectionManagementElement get_Item(int index)
	{
		return null;
	}

	[SpecialName]
	[Token(Token = "0x600185A")]
	[Address(RVA = "0x61CFA50", Offset = "0x61CEA50", VA = "0x61CFA50")]
	public void set_Item(int index, ConnectionManagementElement value)
	{
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x61CFAE0", Offset = "0x61CEAE0", VA = "0x61CFAE0")]
	public void Add(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x61CFB10", Offset = "0x61CEB10", VA = "0x61CFB10")]
	public void Clear()
	{
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x61CFB40", Offset = "0x61CEB40", VA = "0x61CFB40", Slot = "12")]
	protected override ConfigurationElement CreateNewElement()
	{
		return null;
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x61CFB70", Offset = "0x61CEB70", VA = "0x61CFB70", Slot = "13")]
	protected override object GetElementKey(ConfigurationElement element)
	{
		return null;
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x61CFBA0", Offset = "0x61CEBA0", VA = "0x61CFBA0")]
	public int IndexOf(ConnectionManagementElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x61CFBD0", Offset = "0x61CEBD0", VA = "0x61CFBD0")]
	public void Remove(ConnectionManagementElement element)
	{
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x61CFC00", Offset = "0x61CEC00", VA = "0x61CFC00")]
	public void Remove(string name)
	{
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x61CFC30", Offset = "0x61CEC30", VA = "0x61CFC30")]
	public void RemoveAt(int index)
	{
	}
}
