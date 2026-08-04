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

[Token(Token = "0x2000388")]
public sealed class ConnectionManagementElement : ConfigurationElement
{
	[Token(Token = "0x17000520")]
	public string Address
	{
		[Token(Token = "0x6001769")]
		[Address(RVA = "0x48F2E10", Offset = "0x48F2E10", VA = "0x48F2E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176A")]
		[Address(RVA = "0x48F2E40", Offset = "0x48F2E40", VA = "0x48F2E40")]
		set
		{
		}
	}

	[Token(Token = "0x17000521")]
	public int MaxConnection
	{
		[Token(Token = "0x600176B")]
		[Address(RVA = "0x48F2E70", Offset = "0x48F2E70", VA = "0x48F2E70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x48F2EA0", Offset = "0x48F2EA0", VA = "0x48F2EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000522")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x48F2ED0", Offset = "0x48F2ED0", VA = "0x48F2ED0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x48F2DB0", Offset = "0x48F2DB0", VA = "0x48F2DB0")]
	public ConnectionManagementElement()
	{
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x48F2DE0", Offset = "0x48F2DE0", VA = "0x48F2DE0")]
	public ConnectionManagementElement(string address, int maxConnection)
	{
	}
}
