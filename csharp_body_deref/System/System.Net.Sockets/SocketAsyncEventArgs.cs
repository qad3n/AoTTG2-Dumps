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

[Token(Token = "0x2000206")]
public class SocketAsyncEventArgs : EventArgs, IDisposable
{
	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x10")]
	private bool disposed;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x14")]
	internal int in_progress;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0x18")]
	private EndPoint remote_ep;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x20")]
	private Socket current_socket;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x28")]
	internal SocketAsyncResult socket_async_result;

	[Token(Token = "0x4000B54")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private EventHandler<SocketAsyncEventArgs> Completed;

	[Token(Token = "0x4000B55")]
	[FieldOffset(Offset = "0x58")]
	private Memory<byte> _buffer;

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x68")]
	private int _offset;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x6C")]
	private int _count;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x70")]
	private bool _bufferIsExplicitArray;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x78")]
	private IList<ArraySegment<byte>> _bufferList;

	[Token(Token = "0x170002ED")]
	public Socket AcceptSocket
	{
		[Token(Token = "0x6000CE0")]
		[Address(RVA = "0x49B93B0", Offset = "0x49B93B0", VA = "0x49B93B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x49B93C0", Offset = "0x49B93C0", VA = "0x49B93C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002EE")]
	public int BytesTransferred
	{
		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x49B93D0", Offset = "0x49B93D0", VA = "0x49B93D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x49B93E0", Offset = "0x49B93E0", VA = "0x49B93E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EF")]
	private SocketAsyncOperation LastOperation
	{
		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x49B93F0", Offset = "0x49B93F0", VA = "0x49B93F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002F0")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x49B9400", Offset = "0x49B9400", VA = "0x49B9400")]
		set
		{
		}
	}

	[Token(Token = "0x170002F1")]
	public SocketError SocketError
	{
		[Token(Token = "0x6000CE6")]
		[Address(RVA = "0x49B9410", Offset = "0x49B9410", VA = "0x49B9410")]
		[CompilerGenerated]
		get
		{
			return default(SocketError);
		}
		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x49B9420", Offset = "0x49B9420", VA = "0x49B9420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002F2")]
	public SocketFlags SocketFlags
	{
		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x49B9430", Offset = "0x49B9430", VA = "0x49B9430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002F3")]
	public object UserToken
	{
		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x49B9440", Offset = "0x49B9440", VA = "0x49B9440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x49B9450", Offset = "0x49B9450", VA = "0x49B9450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002F4")]
	internal Socket CurrentSocket
	{
		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x49B9580", Offset = "0x49B9580", VA = "0x49B9580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F5")]
	public Memory<byte> MemoryBuffer
	{
		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x49B96B0", Offset = "0x49B96B0", VA = "0x49B96B0")]
		get
		{
			return default(Memory<byte>);
		}
	}

	[Token(Token = "0x170002F6")]
	public int Offset
	{
		[Token(Token = "0x6000CF6")]
		[Address(RVA = "0x49B96C0", Offset = "0x49B96C0", VA = "0x49B96C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F7")]
	public int Count
	{
		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0x49B96D0", Offset = "0x49B96D0", VA = "0x49B96D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F8")]
	public IList<ArraySegment<byte>> BufferList
	{
		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x49B96E0", Offset = "0x49B96E0", VA = "0x49B96E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x49B9460", Offset = "0x49B9460", VA = "0x49B9460")]
	internal SocketAsyncEventArgs(bool flowExecutionContext)
	{
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x49B9500", Offset = "0x49B9500", VA = "0x49B9500", Slot = "1")]
	~SocketAsyncEventArgs()
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x49B9510", Offset = "0x49B9510", VA = "0x49B9510")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x49B9520", Offset = "0x49B9520", VA = "0x49B9520", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x49B6560", Offset = "0x49B6560", VA = "0x49B6560")]
	internal void SetBytesTransferred(int value)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x49B9590", Offset = "0x49B9590", VA = "0x49B9590")]
	internal void SetCurrentSocket(Socket socket)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x49B95A0", Offset = "0x49B95A0", VA = "0x49B95A0")]
	internal void SetLastOperation(SocketAsyncOperation op)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x49B9650", Offset = "0x49B9650", VA = "0x49B9650")]
	internal void Complete_internal()
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x49B9680", Offset = "0x49B9680", VA = "0x49B9680", Slot = "5")]
	protected virtual void OnCompleted(SocketAsyncEventArgs e)
	{
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x49B96F0", Offset = "0x49B96F0", VA = "0x49B96F0")]
	public void SetBuffer(Memory<byte> buffer)
	{
	}
}
