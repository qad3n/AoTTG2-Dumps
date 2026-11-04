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
			[Address(RVA = "0x1CE8150", Offset = "0x1CE6750", VA = "0x181CE8150")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000094")]
		public bool ReadingMessage
		{
			[Token(Token = "0x60002C1")]
			[Address(RVA = "0x1CE8160", Offset = "0x1CE6760", VA = "0x181CE8160")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000095")]
		public byte[] CurrentBuffer
		{
			[Token(Token = "0x60002C2")]
			[Address(RVA = "0x1CE80F0", Offset = "0x1CE66F0", VA = "0x181CE80F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000096")]
		public int CurrentOffset
		{
			[Token(Token = "0x60002C3")]
			[Address(RVA = "0x1CE8130", Offset = "0x1CE6730", VA = "0x181CE8130")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000097")]
		public int CurrentExpected
		{
			[Token(Token = "0x60002C4")]
			[Address(RVA = "0x1CE8110", Offset = "0x1CE6710", VA = "0x181CE8110")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x1CE8090", Offset = "0x1CE6690", VA = "0x181CE8090")]
		public ReceiveContext(Socket socket, byte[] headerBuffer, byte[] messageBuffer)
		{
		}

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x1CE8080", Offset = "0x1CE6680", VA = "0x181CE8080")]
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
	[Address(RVA = "0x1CE9D20", Offset = "0x1CE8320", VA = "0x181CE9D20")]
	[Preserve]
	public SocketTcpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x1CE8CF0", Offset = "0x1CE72F0", VA = "0x181CE8CF0", Slot = "1")]
	~SocketTcpAsync()
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x1CE8500", Offset = "0x1CE6B00", VA = "0x181CE8500", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x1CE81F0", Offset = "0x1CE67F0", VA = "0x181CE81F0", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x1CE8350", Offset = "0x1CE6950", VA = "0x181CE8350", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x1CE9820", Offset = "0x1CE7E20", VA = "0x181CE9820", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x1CE9800", Offset = "0x1CE7E00", VA = "0x181CE9800", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x1CE85D0", Offset = "0x1CE6BD0", VA = "0x181CE85D0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x1CE94A0", Offset = "0x1CE7AA0", VA = "0x181CE94A0")]
	private void ReceiveAsync([Optional] ReceiveContext context)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x1CE8D50", Offset = "0x1CE7350", VA = "0x181CE8D50")]
	private void ReceiveAsync(IAsyncResult ar)
	{
	}
}
