// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IPHostEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x495E070", Offset = "0x495E070", VA = "0x495E070")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x495E080", Offset = "0x495E080", VA = "0x495E080")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public string[] Aliases
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x495E090", Offset = "0x495E090", VA = "0x495E090")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	public IPAddress[] AddressList
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x495E0A0", Offset = "0x495E0A0", VA = "0x495E0A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x495E0B0", Offset = "0x495E0B0", VA = "0x495E0B0")]
		set
		{
		}
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x495E0C0", Offset = "0x495E0C0", VA = "0x495E0C0")]
	public IPHostEntry()
	{
	}
}
