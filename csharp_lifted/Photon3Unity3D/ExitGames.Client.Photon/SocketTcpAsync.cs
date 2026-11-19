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
			[Address(RVA = "0x567DFC0", Offset = "0x567CFC0", VA = "0x567DFC0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000094")]
		public bool ReadingMessage
		{
			[Token(Token = "0x60002C1")]
			[Address(RVA = "0x567DFE0", Offset = "0x567CFE0", VA = "0x567DFE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000095")]
		public byte[] CurrentBuffer
		{
			[Token(Token = "0x60002C2")]
			[Address(RVA = "0x567D850", Offset = "0x567C850", VA = "0x567D850")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000096")]
		public int CurrentOffset
		{
			[Token(Token = "0x60002C3")]
			[Address(RVA = "0x567D870", Offset = "0x567C870", VA = "0x567D870")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000097")]
		public int CurrentExpected
		{
			[Token(Token = "0x60002C4")]
			[Address(RVA = "0x567D890", Offset = "0x567C890", VA = "0x567D890")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x567D7F0", Offset = "0x567C7F0", VA = "0x567D7F0")]
		public ReceiveContext(Socket socket, byte[] headerBuffer, byte[] messageBuffer)
		{
		}

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x567DFD0", Offset = "0x567CFD0", VA = "0x567DFD0")]
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
	[Address(RVA = "0x567C320", Offset = "0x567B320", VA = "0x567C320")]
	[Preserve]
	public SocketTcpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x567C460", Offset = "0x567B460", VA = "0x567C460", Slot = "1")]
	~SocketTcpAsync()
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x567C4F0", Offset = "0x567B4F0", VA = "0x567C4F0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x567C600", Offset = "0x567B600", VA = "0x567C600", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x567C780", Offset = "0x567B780", VA = "0x567C780", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x567C9A0", Offset = "0x567B9A0", VA = "0x567C9A0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x567CD40", Offset = "0x567BD40", VA = "0x567CD40", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x567CD60", Offset = "0x567BD60", VA = "0x567CD60")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x567D490", Offset = "0x567C490", VA = "0x567D490")]
	private void ReceiveAsync([Optional] ReceiveContext context)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x567D8A0", Offset = "0x567C8A0", VA = "0x567D8A0")]
	private void ReceiveAsync(IAsyncResult ar)
	{
	}
}
