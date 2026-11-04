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

[Token(Token = "0x20003E3")]
public sealed class ConnectionManagementElement : ConfigurationElement
{
	[Token(Token = "0x1700058A")]
	public string Address
	{
		[Token(Token = "0x6001A0D")]
		[Address(RVA = "0x282A6F0", Offset = "0x2828CF0", VA = "0x18282A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A0E")]
		[Address(RVA = "0x282A780", Offset = "0x2828D80", VA = "0x18282A780")]
		set
		{
		}
	}

	[Token(Token = "0x1700058B")]
	public int MaxConnection
	{
		[Token(Token = "0x6001A0F")]
		[Address(RVA = "0x282A720", Offset = "0x2828D20", VA = "0x18282A720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A10")]
		[Address(RVA = "0x282A7B0", Offset = "0x2828DB0", VA = "0x18282A7B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700058C")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A11")]
		[Address(RVA = "0x282A750", Offset = "0x2828D50", VA = "0x18282A750", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x282A690", Offset = "0x2828C90", VA = "0x18282A690")]
	public ConnectionManagementElement()
	{
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x282A6C0", Offset = "0x2828CC0", VA = "0x18282A6C0")]
	public ConnectionManagementElement(string address, int maxConnection)
	{
	}
}
