// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.ConnectionManagementElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200039F")]
public sealed class ConnectionManagementElement : ConfigurationElement
{
	[Token(Token = "0x1700055C")]
	public string Address
	{
		[Token(Token = "0x6001853")]
		[Address(RVA = "0x61CF900", Offset = "0x61CE900", VA = "0x61CF900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001854")]
		[Address(RVA = "0x61CF930", Offset = "0x61CE930", VA = "0x61CF930")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	public int MaxConnection
	{
		[Token(Token = "0x6001855")]
		[Address(RVA = "0x61CF960", Offset = "0x61CE960", VA = "0x61CF960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001856")]
		[Address(RVA = "0x61CF990", Offset = "0x61CE990", VA = "0x61CF990")]
		set
		{
		}
	}

	[Token(Token = "0x1700055E")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001857")]
		[Address(RVA = "0x61CF9C0", Offset = "0x61CE9C0", VA = "0x61CF9C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x61CF8A0", Offset = "0x61CE8A0", VA = "0x61CF8A0")]
	public ConnectionManagementElement()
	{
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x61CF8D0", Offset = "0x61CE8D0", VA = "0x61CF8D0")]
	public ConnectionManagementElement(string address, int maxConnection)
	{
	}
}
