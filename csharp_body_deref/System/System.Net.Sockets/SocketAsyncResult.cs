// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketAsyncResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000207")]
internal sealed class SocketAsyncResult : IOAsyncResult
{
	[Token(Token = "0x4000B5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Socket socket;

	[Token(Token = "0x4000B5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public SocketOperation operation;

	[Token(Token = "0x4000B5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Exception DelayedException;

	[Token(Token = "0x4000B5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public EndPoint EndPoint;

	[Token(Token = "0x4000B5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Memory<byte> Buffer;

	[Token(Token = "0x4000B5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public int Offset;

	[Token(Token = "0x4000B60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	public int Size;

	[Token(Token = "0x4000B61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public SocketFlags SockFlags;

	[Token(Token = "0x4000B62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public Socket AcceptSocket;

	[Token(Token = "0x4000B63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public IPAddress[] Addresses;

	[Token(Token = "0x4000B64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int Port;

	[Token(Token = "0x4000B65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public IList<ArraySegment<byte>> Buffers;

	[Token(Token = "0x4000B66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public bool ReuseSocket;

	[Token(Token = "0x4000B67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	public int CurrentAddress;

	[Token(Token = "0x4000B68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public Socket AcceptedSocket;

	[Token(Token = "0x4000B69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public int Total;

	[Token(Token = "0x4000B6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	internal int error;

	[Token(Token = "0x4000B6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public int EndCalled;

	[Token(Token = "0x170002F9")]
	public IntPtr Handle
	{
		[Token(Token = "0x6000CFA")]
		[Address(RVA = "0x49B97E0", Offset = "0x49B97E0", VA = "0x49B97E0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002FA")]
	public SocketError ErrorCode
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x49B9990", Offset = "0x49B9990", VA = "0x49B9990")]
		get
		{
			return default(SocketError);
		}
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x49B94F0", Offset = "0x49B94F0", VA = "0x49B94F0")]
	public SocketAsyncResult()
	{
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x49B9800", Offset = "0x49B9800", VA = "0x49B9800")]
	public void Init(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x49B9950", Offset = "0x49B9950", VA = "0x49B9950")]
	public SocketAsyncResult(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x49B9A00", Offset = "0x49B9A00", VA = "0x49B9A00")]
	public void CheckIfThrowDelayedException()
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x49B9A90", Offset = "0x49B9A90", VA = "0x49B9A90", Slot = "8")]
	internal override void CompleteDisposed()
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x49B5CF0", Offset = "0x49B5CF0", VA = "0x49B5CF0")]
	public void Complete()
	{
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x49B9AA0", Offset = "0x49B9AA0", VA = "0x49B9AA0")]
	public void Complete(bool synch)
	{
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x49B6840", Offset = "0x49B6840", VA = "0x49B6840")]
	public void Complete(int total)
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x49B9AB0", Offset = "0x49B9AB0", VA = "0x49B9AB0")]
	public void Complete(Exception e, bool synch)
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x49B53F0", Offset = "0x49B53F0", VA = "0x49B53F0")]
	public void Complete(Exception e)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x49B5410", Offset = "0x49B5410", VA = "0x49B5410")]
	public void Complete(Socket s)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x49B56F0", Offset = "0x49B56F0", VA = "0x49B56F0")]
	public void Complete(Socket s, int total)
	{
	}
}
