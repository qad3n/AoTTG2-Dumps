using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000140")]
public class IPHostEntry
{
	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x10")]
	private string hostName;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x18")]
	private string[] aliases;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x20")]
	private IPAddress[] addressList;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x28")]
	internal bool isTrustedHost;

	[Token(Token = "0x170001B0")]
	public string HostName
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x4638F70", Offset = "0x4638F70", VA = "0x4638F70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x4638F80", Offset = "0x4638F80", VA = "0x4638F80")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public string[] Aliases
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x4638F90", Offset = "0x4638F90", VA = "0x4638F90")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	public IPAddress[] AddressList
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x4638FA0", Offset = "0x4638FA0", VA = "0x4638FA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x4638FB0", Offset = "0x4638FB0", VA = "0x4638FB0")]
		set
		{
		}
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x4638FC0", Offset = "0x4638FC0", VA = "0x4638FC0")]
	public IPHostEntry()
	{
	}
}
