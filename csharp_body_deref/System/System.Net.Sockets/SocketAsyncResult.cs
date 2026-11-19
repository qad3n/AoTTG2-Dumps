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
[Token(Token = "0x2000350")]
internal sealed class SocketAsyncResult : IOAsyncResult
{
	[Token(Token = "0x4000EA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Socket socket;

	[Token(Token = "0x4000EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public SocketOperation operation;

	[Token(Token = "0x4000EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Exception DelayedException;

	[Token(Token = "0x4000EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public EndPoint EndPoint;

	[Token(Token = "0x4000EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Memory<byte> Buffer;

	[Token(Token = "0x4000EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public int Offset;

	[Token(Token = "0x4000EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	public int Size;

	[Token(Token = "0x4000EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public SocketFlags SockFlags;

	[Token(Token = "0x4000EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public Socket AcceptSocket;

	[Token(Token = "0x4000EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public IPAddress[] Addresses;

	[Token(Token = "0x4000EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int Port;

	[Token(Token = "0x4000EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public IList<ArraySegment<byte>> Buffers;

	[Token(Token = "0x4000EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public bool ReuseSocket;

	[Token(Token = "0x4000EAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	public int CurrentAddress;

	[Token(Token = "0x4000EAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public Socket AcceptedSocket;

	[Token(Token = "0x4000EB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public int Total;

	[Token(Token = "0x4000EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	internal int error;

	[Token(Token = "0x4000EB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public int EndCalled;

	[Token(Token = "0x17000520")]
	public IntPtr Handle
	{
		[Token(Token = "0x60016FD")]
		[Address(RVA = "0x61B9860", Offset = "0x61B8860", VA = "0x61B9860")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000521")]
	public SocketError ErrorCode
	{
		[Token(Token = "0x6001701")]
		[Address(RVA = "0x61B9A10", Offset = "0x61B8A10", VA = "0x61B9A10")]
		get
		{
			return default(SocketError);
		}
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x61B9570", Offset = "0x61B8570", VA = "0x61B9570")]
	public SocketAsyncResult()
	{
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x61B9880", Offset = "0x61B8880", VA = "0x61B9880")]
	public void Init(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x61B99D0", Offset = "0x61B89D0", VA = "0x61B99D0")]
	public SocketAsyncResult(Socket socket, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x61B9A80", Offset = "0x61B8A80", VA = "0x61B9A80")]
	public void CheckIfThrowDelayedException()
	{
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x61B9B10", Offset = "0x61B8B10", VA = "0x61B9B10", Slot = "8")]
	internal override void CompleteDisposed()
	{
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x61B5F50", Offset = "0x61B4F50", VA = "0x61B5F50")]
	public void Complete()
	{
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x61B9B20", Offset = "0x61B8B20", VA = "0x61B9B20")]
	public void Complete(bool synch)
	{
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x61B6AD0", Offset = "0x61B5AD0", VA = "0x61B6AD0")]
	public void Complete(int total)
	{
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x61B9B30", Offset = "0x61B8B30", VA = "0x61B9B30")]
	public void Complete(Exception e, bool synch)
	{
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x61B56C0", Offset = "0x61B46C0", VA = "0x61B56C0")]
	public void Complete(Exception e)
	{
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x61B56E0", Offset = "0x61B46E0", VA = "0x61B56E0")]
	public void Complete(Socket s)
	{
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x61B59A0", Offset = "0x61B49A0", VA = "0x61B59A0")]
	public void Complete(Socket s, int total)
	{
	}
}
