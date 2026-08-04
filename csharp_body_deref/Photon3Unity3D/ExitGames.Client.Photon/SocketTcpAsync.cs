// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SocketTcpAsync
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Net.Sockets;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200003F")]
public class SocketTcpAsync : IPhotonSocket, IDisposable
{
	[Token(Token = "0x2000040")]
	private class ReceiveContext
	{
		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Socket workSocket;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public int ReceivedHeaderBytes;

		[Token(Token = "0x40001F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public byte[] HeaderBuffer;

		[Token(Token = "0x40001F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int ExpectedMessageBytes;

		[Token(Token = "0x40001FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int ReceivedMessageBytes;

		[Token(Token = "0x40001FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] MessageBuffer;

		[Token(Token = "0x17000093")]
		public bool ReadingHeader
		{
			[Token(Token = "0x60002C0")]
			[Address(RVA = "0x3E8F8D0", Offset = "0x3E8F8D0", VA = "0x3E8F8D0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000094")]
		public bool ReadingMessage
		{
			[Token(Token = "0x60002C1")]
			[Address(RVA = "0x3E8F8F0", Offset = "0x3E8F8F0", VA = "0x3E8F8F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000095")]
		public byte[] CurrentBuffer
		{
			[Token(Token = "0x60002C2")]
			[Address(RVA = "0x3E8F090", Offset = "0x3E8F090", VA = "0x3E8F090")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000096")]
		public int CurrentOffset
		{
			[Token(Token = "0x60002C3")]
			[Address(RVA = "0x3E8F0B0", Offset = "0x3E8F0B0", VA = "0x3E8F0B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000097")]
		public int CurrentExpected
		{
			[Token(Token = "0x60002C4")]
			[Address(RVA = "0x3E8F0D0", Offset = "0x3E8F0D0", VA = "0x3E8F0D0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x3E8F030", Offset = "0x3E8F030", VA = "0x3E8F030")]
		public ReceiveContext(Socket socket, byte[] headerBuffer, byte[] messageBuffer)
		{
		}

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x3E8F8E0", Offset = "0x3E8F8E0", VA = "0x3E8F8E0")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40001F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Socket sock;

	[Token(Token = "0x40001F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly object syncer;

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x3E8D890", Offset = "0x3E8D890", VA = "0x3E8D890")]
	[Preserve]
	public SocketTcpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x3E8D9D0", Offset = "0x3E8D9D0", VA = "0x3E8D9D0", Slot = "1")]
	~SocketTcpAsync()
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x3E8DA50", Offset = "0x3E8DA50", VA = "0x3E8DA50", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x3E8DB60", Offset = "0x3E8DB60", VA = "0x3E8DB60", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x3E8DD00", Offset = "0x3E8DD00", VA = "0x3E8DD00", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x3E8DF20", Offset = "0x3E8DF20", VA = "0x3E8DF20", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x3E8E410", Offset = "0x3E8E410", VA = "0x3E8E410", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3E8E430", Offset = "0x3E8E430", VA = "0x3E8E430")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x3E8EC30", Offset = "0x3E8EC30", VA = "0x3E8EC30")]
	private void ReceiveAsync([Optional] ReceiveContext context)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x3E8F0E0", Offset = "0x3E8F0E0", VA = "0x3E8F0E0")]
	private void ReceiveAsync(IAsyncResult ar)
	{
	}
}
