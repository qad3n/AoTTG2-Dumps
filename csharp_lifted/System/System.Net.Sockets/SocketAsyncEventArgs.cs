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

[Token(Token = "0x200034F")]
public class SocketAsyncEventArgs : EventArgs, IDisposable
{
	[Token(Token = "0x4000E90")]
	[FieldOffset(Offset = "0x10")]
	private bool disposed;

	[Token(Token = "0x4000E91")]
	[FieldOffset(Offset = "0x14")]
	internal int in_progress;

	[Token(Token = "0x4000E92")]
	[FieldOffset(Offset = "0x18")]
	private EndPoint remote_ep;

	[Token(Token = "0x4000E93")]
	[FieldOffset(Offset = "0x20")]
	private Socket current_socket;

	[Token(Token = "0x4000E94")]
	[FieldOffset(Offset = "0x28")]
	internal SocketAsyncResult socket_async_result;

	[Token(Token = "0x4000E9B")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private EventHandler<SocketAsyncEventArgs> Completed;

	[Token(Token = "0x4000E9C")]
	[FieldOffset(Offset = "0x58")]
	private Memory<byte> _buffer;

	[Token(Token = "0x4000E9D")]
	[FieldOffset(Offset = "0x68")]
	private int _offset;

	[Token(Token = "0x4000E9E")]
	[FieldOffset(Offset = "0x6C")]
	private int _count;

	[Token(Token = "0x4000E9F")]
	[FieldOffset(Offset = "0x70")]
	private bool _bufferIsExplicitArray;

	[Token(Token = "0x4000EA0")]
	[FieldOffset(Offset = "0x78")]
	private IList<ArraySegment<byte>> _bufferList;

	[Token(Token = "0x17000514")]
	public Socket AcceptSocket
	{
		[Token(Token = "0x60016E3")]
		[Address(RVA = "0x61B94C0", Offset = "0x61B84C0", VA = "0x61B94C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016E4")]
		[Address(RVA = "0x61B94D0", Offset = "0x61B84D0", VA = "0x61B94D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000515")]
	public int BytesTransferred
	{
		[Token(Token = "0x60016E5")]
		[Address(RVA = "0x61B94E0", Offset = "0x61B84E0", VA = "0x61B94E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x61B94F0", Offset = "0x61B84F0", VA = "0x61B94F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000516")]
	private SocketAsyncOperation LastOperation
	{
		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x61B9500", Offset = "0x61B8500", VA = "0x61B9500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000517")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x60016E8")]
		[Address(RVA = "0x61B9510", Offset = "0x61B8510", VA = "0x61B9510")]
		set
		{
		}
	}

	[Token(Token = "0x17000518")]
	public SocketError SocketError
	{
		[Token(Token = "0x60016E9")]
		[Address(RVA = "0x61B9520", Offset = "0x61B8520", VA = "0x61B9520")]
		[CompilerGenerated]
		get
		{
			return default(SocketError);
		}
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x61B9530", Offset = "0x61B8530", VA = "0x61B9530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000519")]
	public SocketFlags SocketFlags
	{
		[Token(Token = "0x60016EB")]
		[Address(RVA = "0x61B9540", Offset = "0x61B8540", VA = "0x61B9540")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700051A")]
	public object UserToken
	{
		[Token(Token = "0x60016EC")]
		[Address(RVA = "0x61B9550", Offset = "0x61B8550", VA = "0x61B9550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016ED")]
		[Address(RVA = "0x61B9560", Offset = "0x61B8560", VA = "0x61B9560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700051B")]
	internal Socket CurrentSocket
	{
		[Token(Token = "0x60016F3")]
		[Address(RVA = "0x61B9600", Offset = "0x61B8600", VA = "0x61B9600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051C")]
	public Memory<byte> MemoryBuffer
	{
		[Token(Token = "0x60016F8")]
		[Address(RVA = "0x61B9730", Offset = "0x61B8730", VA = "0x61B9730")]
		get
		{
			return default(Memory<byte>);
		}
	}

	[Token(Token = "0x1700051D")]
	public int Offset
	{
		[Token(Token = "0x60016F9")]
		[Address(RVA = "0x61B9740", Offset = "0x61B8740", VA = "0x61B9740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700051E")]
	public int Count
	{
		[Token(Token = "0x60016FA")]
		[Address(RVA = "0x61B9750", Offset = "0x61B8750", VA = "0x61B9750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700051F")]
	public IList<ArraySegment<byte>> BufferList
	{
		[Token(Token = "0x60016FB")]
		[Address(RVA = "0x61B9760", Offset = "0x61B8760", VA = "0x61B9760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x61B28C0", Offset = "0x61B18C0", VA = "0x61B28C0")]
	internal SocketAsyncEventArgs(bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x61B9580", Offset = "0x61B8580", VA = "0x61B9580", Slot = "1")]
	~SocketAsyncEventArgs()
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x61B9590", Offset = "0x61B8590", VA = "0x61B9590")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x61B95A0", Offset = "0x61B85A0", VA = "0x61B95A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x61B67C0", Offset = "0x61B57C0", VA = "0x61B67C0")]
	internal void SetBytesTransferred(int value)
	{
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x61B9610", Offset = "0x61B8610", VA = "0x61B9610")]
	internal void SetCurrentSocket(Socket socket)
	{
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x61B9620", Offset = "0x61B8620", VA = "0x61B9620")]
	internal void SetLastOperation(SocketAsyncOperation op)
	{
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x61B96D0", Offset = "0x61B86D0", VA = "0x61B96D0")]
	internal void Complete_internal()
	{
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x61B9700", Offset = "0x61B8700", VA = "0x61B9700", Slot = "5")]
	protected virtual void OnCompleted(SocketAsyncEventArgs e)
	{
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x61B9770", Offset = "0x61B8770", VA = "0x61B9770")]
	public void SetBuffer(Memory<byte> buffer)
	{
	}
}
