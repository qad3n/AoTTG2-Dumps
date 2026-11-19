// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IPHostEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000289")]
public class IPHostEntry
{
	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x10")]
	private string hostName;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0x18")]
	private string[] aliases;

	[Token(Token = "0x40009D0")]
	[FieldOffset(Offset = "0x20")]
	private IPAddress[] addressList;

	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0x28")]
	internal bool isTrustedHost;

	[Token(Token = "0x170003D6")]
	public string HostName
	{
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x62A5C80", Offset = "0x62A4C80", VA = "0x62A5C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x62A5C90", Offset = "0x62A4C90", VA = "0x62A5C90")]
		set
		{
		}
	}

	[Token(Token = "0x170003D7")]
	public string[] Aliases
	{
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x62A5CA0", Offset = "0x62A4CA0", VA = "0x62A5CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public IPAddress[] AddressList
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x62A5CB0", Offset = "0x62A4CB0", VA = "0x62A5CB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x62A5CC0", Offset = "0x62A4CC0", VA = "0x62A5CC0")]
		set
		{
		}
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x62A5CD0", Offset = "0x62A4CD0", VA = "0x62A5CD0")]
	public IPHostEntry()
	{
	}
}
