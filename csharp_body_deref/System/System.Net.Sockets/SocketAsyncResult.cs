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
		[Address(RVA = "0x46946E0", Offset = "0x46946E0", VA = "0x46946E0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002FA")]
	public SocketError ErrorCode
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x4694890", Offset = "0x4694890", VA = "0x4694890")]
		get
		{
			return default(SocketError);
		}
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x46943F0", Offset = "0x46943F0", VA = "0x46943F0")]
	public SocketAsyncResult()
	{
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x4694700", Offset = "0x4694700", VA = "0x4694700")]
	public void Init(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x4694850", Offset = "0x4694850", VA = "0x4694850")]
	public SocketAsyncResult(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4694900", Offset = "0x4694900", VA = "0x4694900")]
	public void CheckIfThrowDelayedException()
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4694990", Offset = "0x4694990", VA = "0x4694990", Slot = "8")]
	internal override void CompleteDisposed()
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4690BF0", Offset = "0x4690BF0", VA = "0x4690BF0")]
	public void Complete()
	{
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x46949A0", Offset = "0x46949A0", VA = "0x46949A0")]
	public void Complete(bool synch)
	{
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4691740", Offset = "0x4691740", VA = "0x4691740")]
	public void Complete(int total)
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x46949B0", Offset = "0x46949B0", VA = "0x46949B0")]
	public void Complete(Exception e, bool synch)
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x46902F0", Offset = "0x46902F0", VA = "0x46902F0")]
	public void Complete(Exception e)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4690310", Offset = "0x4690310", VA = "0x4690310")]
	public void Complete(Socket s)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x46905F0", Offset = "0x46905F0", VA = "0x46905F0")]
	public void Complete(Socket s, int total)
	{
	}
}
