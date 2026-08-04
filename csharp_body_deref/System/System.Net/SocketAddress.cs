// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.SocketAddress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200014B")]
public class SocketAddress
{
	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x10")]
	internal int m_Size;

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] m_Buffer;

	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x20")]
	private bool m_changed;

	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x24")]
	private int m_hash;

	[Token(Token = "0x170001BE")]
	public AddressFamily Family
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x495F100", Offset = "0x495F100", VA = "0x495F100")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170001BF")]
	public int Size
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x495F130", Offset = "0x495F130", VA = "0x495F130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C0")]
	public byte this[int offset]
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x495F140", Offset = "0x495F140", VA = "0x495F140")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x495F1B0", Offset = "0x495F1B0", VA = "0x495F1B0")]
	public SocketAddress(AddressFamily family, int size)
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x495F2C0", Offset = "0x495F2C0", VA = "0x495F2C0")]
	internal SocketAddress(IPAddress ipAddress)
	{
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x495F580", Offset = "0x495F580", VA = "0x495F580")]
	internal SocketAddress(IPAddress ipaddress, int port)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x495F5D0", Offset = "0x495F5D0", VA = "0x495F5D0")]
	internal IPAddress GetIPAddress()
	{
		return null;
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x495F7F0", Offset = "0x495F7F0", VA = "0x495F7F0")]
	internal IPEndPoint GetIPEndPoint()
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x495F880", Offset = "0x495F880", VA = "0x495F880", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x495F940", Offset = "0x495F940", VA = "0x495F940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x495FA70", Offset = "0x495FA70", VA = "0x495FA70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
