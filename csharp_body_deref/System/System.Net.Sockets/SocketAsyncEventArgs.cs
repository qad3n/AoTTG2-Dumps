// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketAsyncEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000393")]
public class SocketAsyncEventArgs : EventArgs, IDisposable
{
	[Token(Token = "0x4000F78")]
	[FieldOffset(Offset = "0x10")]
	private bool disposed;

	[Token(Token = "0x4000F79")]
	[FieldOffset(Offset = "0x14")]
	internal int in_progress;

	[Token(Token = "0x4000F7A")]
	[FieldOffset(Offset = "0x18")]
	private EndPoint remote_ep;

	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x20")]
	private Socket current_socket;

	[Token(Token = "0x4000F7C")]
	[FieldOffset(Offset = "0x28")]
	internal SocketAsyncResult socket_async_result;

	[Token(Token = "0x4000F83")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private EventHandler<SocketAsyncEventArgs> Completed;

	[Token(Token = "0x4000F84")]
	[FieldOffset(Offset = "0x58")]
	private Memory<byte> _buffer;

	[Token(Token = "0x4000F85")]
	[FieldOffset(Offset = "0x68")]
	private int _offset;

	[Token(Token = "0x4000F86")]
	[FieldOffset(Offset = "0x6C")]
	private int _count;

	[Token(Token = "0x4000F87")]
	[FieldOffset(Offset = "0x70")]
	private bool _bufferIsExplicitArray;

	[Token(Token = "0x4000F88")]
	[FieldOffset(Offset = "0x78")]
	private IList<ArraySegment<byte>> _bufferList;

	[Token(Token = "0x17000541")]
	public Socket AcceptSocket
	{
		[Token(Token = "0x600189C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600189D")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000542")]
	public int BytesTransferred
	{
		[Token(Token = "0x600189E")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600189F")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000543")]
	private SocketAsyncOperation LastOperation
	{
		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000544")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x60018A1")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000545")]
	public SocketError SocketError
	{
		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		[CompilerGenerated]
		get
		{
			return default(SocketError);
		}
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	public SocketFlags SocketFlags
	{
		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	public object UserToken
	{
		[Token(Token = "0x60018A5")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60018A6")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000548")]
	internal Socket CurrentSocket
	{
		[Token(Token = "0x60018AC")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000549")]
	public Memory<byte> MemoryBuffer
	{
		[Token(Token = "0x60018B1")]
		[Address(RVA = "0x18FEB30", Offset = "0x18FD130", VA = "0x1818FEB30")]
		get
		{
			return default(Memory<byte>);
		}
	}

	[Token(Token = "0x1700054A")]
	public int Offset
	{
		[Token(Token = "0x60018B2")]
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700054B")]
	public int Count
	{
		[Token(Token = "0x60018B3")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700054C")]
	public IList<ArraySegment<byte>> BufferList
	{
		[Token(Token = "0x60018B4")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x2819EA0", Offset = "0x28184A0", VA = "0x182819EA0")]
	internal SocketAsyncEventArgs(bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x2819C70", Offset = "0x2818270", VA = "0x182819C70", Slot = "1")]
	~SocketAsyncEventArgs()
	{
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x2819C60", Offset = "0x2818260", VA = "0x182819C60")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x2819C00", Offset = "0x2818200", VA = "0x182819C00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
	internal void SetBytesTransferred(int value)
	{
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	internal void SetCurrentSocket(Socket socket)
	{
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x2819DD0", Offset = "0x28183D0", VA = "0x182819DD0")]
	internal void SetLastOperation(SocketAsyncOperation op)
	{
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x2819BC0", Offset = "0x28181C0", VA = "0x182819BC0")]
	internal void Complete_internal()
	{
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x2819CB0", Offset = "0x28182B0", VA = "0x182819CB0", Slot = "5")]
	protected virtual void OnCompleted(SocketAsyncEventArgs e)
	{
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x2819CE0", Offset = "0x28182E0", VA = "0x182819CE0")]
	public void SetBuffer(Memory<byte> buffer)
	{
	}
}
