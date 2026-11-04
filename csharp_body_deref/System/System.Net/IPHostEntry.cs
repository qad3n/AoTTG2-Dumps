// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IPHostEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002C8")]
public class IPHostEntry
{
	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x10")]
	private string hostName;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x18")]
	private string[] aliases;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x20")]
	private IPAddress[] addressList;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x28")]
	internal bool isTrustedHost;

	[Token(Token = "0x17000405")]
	public string HostName
	{
		[Token(Token = "0x6001386")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001387")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000406")]
	public string[] Aliases
	{
		[Token(Token = "0x6001388")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000407")]
	public IPAddress[] AddressList
	{
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600138A")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x18CB390", Offset = "0x18C9990", VA = "0x1818CB390")]
	public IPHostEntry()
	{
	}
}
