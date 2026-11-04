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

[StructLayout(LayoutKind.Sequential)]
[Token(Token = "0x2000394")]
internal sealed class SocketAsyncResult : IOAsyncResult
{
	[Token(Token = "0x4000F89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Socket socket;

	[Token(Token = "0x4000F8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public SocketOperation operation;

	[Token(Token = "0x4000F8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Exception DelayedException;

	[Token(Token = "0x4000F8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public EndPoint EndPoint;

	[Token(Token = "0x4000F8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Memory<byte> Buffer;

	[Token(Token = "0x4000F8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public int Offset;

	[Token(Token = "0x4000F8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	public int Size;

	[Token(Token = "0x4000F90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public SocketFlags SockFlags;

	[Token(Token = "0x4000F91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public Socket AcceptSocket;

	[Token(Token = "0x4000F92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public IPAddress[] Addresses;

	[Token(Token = "0x4000F93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int Port;

	[Token(Token = "0x4000F94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public IList<ArraySegment<byte>> Buffers;

	[Token(Token = "0x4000F95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public bool ReuseSocket;

	[Token(Token = "0x4000F96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	public int CurrentAddress;

	[Token(Token = "0x4000F97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public Socket AcceptedSocket;

	[Token(Token = "0x4000F98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public int Total;

	[Token(Token = "0x4000F99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	internal int error;

	[Token(Token = "0x4000F9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public int EndCalled;

	[Token(Token = "0x1700054D")]
	public IntPtr Handle
	{
		[Token(Token = "0x60018B6")]
		[Address(RVA = "0x281A530", Offset = "0x2818B30", VA = "0x18281A530")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700054E")]
	public SocketError ErrorCode
	{
		[Token(Token = "0x60018BA")]
		[Address(RVA = "0x281A4A0", Offset = "0x2818AA0", VA = "0x18281A4A0")]
		get
		{
			return default(SocketError);
		}
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public SocketAsyncResult()
	{
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x281A330", Offset = "0x2818930", VA = "0x18281A330")]
	public void Init(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x281A450", Offset = "0x2818A50", VA = "0x18281A450")]
	public SocketAsyncResult(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x2819F30", Offset = "0x2818530", VA = "0x182819F30")]
	public void CheckIfThrowDelayedException()
	{
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x2819FE0", Offset = "0x28185E0", VA = "0x182819FE0", Slot = "8")]
	internal override void CompleteDisposed()
	{
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x281A0F0", Offset = "0x28186F0", VA = "0x18281A0F0")]
	public void Complete()
	{
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x2819FF0", Offset = "0x28185F0", VA = "0x182819FF0")]
	public void Complete(bool synch)
	{
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x281A0B0", Offset = "0x28186B0", VA = "0x18281A0B0")]
	public void Complete(int total)
	{
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x281A030", Offset = "0x2818630", VA = "0x18281A030")]
	public void Complete(Exception e, bool synch)
	{
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x281A000", Offset = "0x2818600", VA = "0x18281A000")]
	public void Complete(Exception e)
	{
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x281A0C0", Offset = "0x28186C0", VA = "0x18281A0C0")]
	public void Complete(Socket s)
	{
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x281A070", Offset = "0x2818670", VA = "0x18281A070")]
	public void Complete(Socket s, int total)
	{
	}
}
