using System.Collections.Generic;
using System.Net.NetworkInformation;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001EA")]
public class Socket : IDisposable
{
	[Token(Token = "0x20001EB")]
	private sealed class CachedEventArgs
	{
		[Token(Token = "0x4000A2B")]
		[FieldOffset(Offset = "0x10")]
		public TaskSocketAsyncEventArgs<Socket> TaskAccept;

		[Token(Token = "0x4000A2C")]
		[FieldOffset(Offset = "0x18")]
		public Int32TaskSocketAsyncEventArgs TaskReceive;

		[Token(Token = "0x4000A2D")]
		[FieldOffset(Offset = "0x20")]
		public Int32TaskSocketAsyncEventArgs TaskSend;

		[Token(Token = "0x4000A2E")]
		[FieldOffset(Offset = "0x28")]
		public AwaitableSocketAsyncEventArgs ValueTaskReceive;

		[Token(Token = "0x4000A2F")]
		[FieldOffset(Offset = "0x30")]
		public AwaitableSocketAsyncEventArgs ValueTaskSend;

		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x468D8D0", Offset = "0x468D8D0", VA = "0x468D8D0")]
		public CachedEventArgs()
		{
		}
	}

	[Token(Token = "0x20001EC")]
	private class TaskSocketAsyncEventArgs<TResult> : SocketAsyncEventArgs
	{
		[Token(Token = "0x4000A30")]
		[FieldOffset(Offset = "0x0")]
		internal AsyncTaskMethodBuilder<TResult> _builder;

		[Token(Token = "0x4000A31")]
		[FieldOffset(Offset = "0x0")]
		internal bool _accessed;

		[Token(Token = "0x6000C81")]
		internal TaskSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x6000C82")]
		internal AsyncTaskMethodBuilder<TResult> GetCompletionResponsibility(out bool responsibleForReturningToPool)
		{
			return default(AsyncTaskMethodBuilder<TResult>);
		}
	}

	[Token(Token = "0x20001ED")]
	private sealed class Int32TaskSocketAsyncEventArgs : TaskSocketAsyncEventArgs<int>
	{
		[Token(Token = "0x4000A32")]
		[FieldOffset(Offset = "0x99")]
		internal bool _wrapExceptionsInIOExceptions;

		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x468D890", Offset = "0x468D890", VA = "0x468D890")]
		public Int32TaskSocketAsyncEventArgs()
		{
		}
	}

	[Token(Token = "0x20001EE")]
	internal sealed class AwaitableSocketAsyncEventArgs : SocketAsyncEventArgs, IValueTaskSource, IValueTaskSource<int>
	{
		[Token(Token = "0x4000A33")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AwaitableSocketAsyncEventArgs Reserved;

		[Token(Token = "0x4000A34")]
		[FieldOffset(Offset = "0x8")]
		private static readonly Action<object> s_completedSentinel;

		[Token(Token = "0x4000A35")]
		[FieldOffset(Offset = "0x10")]
		private static readonly Action<object> s_availableSentinel;

		[Token(Token = "0x4000A36")]
		[FieldOffset(Offset = "0x80")]
		private Action<object> _continuation;

		[Token(Token = "0x4000A37")]
		[FieldOffset(Offset = "0x88")]
		private ExecutionContext _executionContext;

		[Token(Token = "0x4000A38")]
		[FieldOffset(Offset = "0x90")]
		private object _scheduler;

		[Token(Token = "0x4000A39")]
		[FieldOffset(Offset = "0x98")]
		private short _token;

		[Token(Token = "0x170002E6")]
		public bool WrapExceptionsInIOExceptions
		{
			[Token(Token = "0x6000C85")]
			[Address(RVA = "0x468D950", Offset = "0x468D950", VA = "0x468D950")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000C86")]
			[Address(RVA = "0x468D960", Offset = "0x468D960", VA = "0x468D960")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000C84")]
		[Address(RVA = "0x468D8E0", Offset = "0x468D8E0", VA = "0x468D8E0")]
		public AwaitableSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x6000C87")]
		[Address(RVA = "0x4684020", Offset = "0x4684020", VA = "0x4684020")]
		public bool Reserve()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x468D970", Offset = "0x468D970", VA = "0x468D970")]
		private void Release()
		{
		}

		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x468D9E0", Offset = "0x468D9E0", VA = "0x468D9E0", Slot = "5")]
		protected override void OnCompleted(SocketAsyncEventArgs _)
		{
		}

		[Token(Token = "0x6000C8A")]
		[Address(RVA = "0x4684090", Offset = "0x4684090", VA = "0x4684090")]
		public ValueTask<int> ReceiveAsync(Socket socket)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x46846F0", Offset = "0x46846F0", VA = "0x46846F0")]
		public ValueTask SendAsyncForNetworkStream(Socket socket)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x468E040", Offset = "0x468E040", VA = "0x468E040", Slot = "9")]
		public ValueTaskSourceStatus GetStatus(short token)
		{
			return default(ValueTaskSourceStatus);
		}

		[Token(Token = "0x6000C8D")]
		[Address(RVA = "0x468E120", Offset = "0x468E120", VA = "0x468E120", Slot = "10")]
		public void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
		{
		}

		[Token(Token = "0x6000C8E")]
		[Address(RVA = "0x468DC40", Offset = "0x468DC40", VA = "0x468DC40")]
		private void InvokeContinuation(Action<object> continuation, object state, bool forceAsync)
		{
		}

		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x468E400", Offset = "0x468E400", VA = "0x468E400", Slot = "11")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x468E4E0", Offset = "0x468E4E0", VA = "0x468E4E0", Slot = "8")]
		private void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x468E0D0", Offset = "0x468E0D0", VA = "0x468E0D0")]
		private void ThrowIncorrectTokenException()
		{
		}

		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x468E3B0", Offset = "0x468E3B0", VA = "0x468E3B0")]
		private void ThrowMultipleContinuationsException()
		{
		}

		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x468E4C0", Offset = "0x468E4C0", VA = "0x468E4C0")]
		private void ThrowException(SocketError error)
		{
		}

		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x468DF70", Offset = "0x468DF70", VA = "0x468DF70")]
		private Exception CreateException(SocketError error)
		{
			return null;
		}
	}

	[Token(Token = "0x20001F0")]
	private struct WSABUF
	{
		[Token(Token = "0x4000A3E")]
		[FieldOffset(Offset = "0x0")]
		public int len;

		[Token(Token = "0x4000A3F")]
		[FieldOffset(Offset = "0x8")]
		public IntPtr buf;
	}

	[Token(Token = "0x4000A00")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EventHandler<SocketAsyncEventArgs> AcceptCompletedHandler;

	[Token(Token = "0x4000A01")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventHandler<SocketAsyncEventArgs> ReceiveCompletedHandler;

	[Token(Token = "0x4000A02")]
	[FieldOffset(Offset = "0x10")]
	private static readonly EventHandler<SocketAsyncEventArgs> SendCompletedHandler;

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x18")]
	private static readonly TaskSocketAsyncEventArgs<Socket> s_rentedSocketSentinel;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Int32TaskSocketAsyncEventArgs s_rentedInt32Sentinel;

	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Task<int> s_zeroTask;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x10")]
	private CachedEventArgs _cachedTaskEventArgs;

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x30")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x38")]
	internal static bool s_SupportsIPv4;

	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x39")]
	internal static bool s_SupportsIPv6;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x3A")]
	internal static bool s_OSSupportsIPv6;

	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x3B")]
	internal static bool s_Initialized;

	[Token(Token = "0x4000A0C")]
	[FieldOffset(Offset = "0x3C")]
	private static bool s_LoggingEnabled;

	[Token(Token = "0x4000A0D")]
	[FieldOffset(Offset = "0x18")]
	private bool is_closed;

	[Token(Token = "0x4000A0E")]
	[FieldOffset(Offset = "0x19")]
	private bool is_listening;

	[Token(Token = "0x4000A0F")]
	[FieldOffset(Offset = "0x1C")]
	private int linger_timeout;

	[Token(Token = "0x4000A10")]
	[FieldOffset(Offset = "0x20")]
	private AddressFamily addressFamily;

	[Token(Token = "0x4000A11")]
	[FieldOffset(Offset = "0x24")]
	private SocketType socketType;

	[Token(Token = "0x4000A12")]
	[FieldOffset(Offset = "0x28")]
	private ProtocolType protocolType;

	[Token(Token = "0x4000A13")]
	[FieldOffset(Offset = "0x30")]
	internal SafeSocketHandle m_Handle;

	[Token(Token = "0x4000A14")]
	[FieldOffset(Offset = "0x38")]
	internal EndPoint seed_endpoint;

	[Token(Token = "0x4000A15")]
	[FieldOffset(Offset = "0x40")]
	internal SemaphoreSlim ReadSem;

	[Token(Token = "0x4000A16")]
	[FieldOffset(Offset = "0x48")]
	internal SemaphoreSlim WriteSem;

	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x50")]
	internal bool is_blocking;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x51")]
	internal bool is_bound;

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x52")]
	internal bool is_connected;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0x54")]
	private int m_IntCleanedUp;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0x58")]
	internal bool connect_in_progress;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x40")]
	private static AsyncCallback AcceptAsyncCallback;

	[Token(Token = "0x4000A1D")]
	[FieldOffset(Offset = "0x48")]
	private static IOAsyncCallback BeginAcceptCallback;

	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x50")]
	private static IOAsyncCallback BeginAcceptReceiveCallback;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x58")]
	private static AsyncCallback ConnectAsyncCallback;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x60")]
	private static IOAsyncCallback BeginConnectCallback;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0x68")]
	private static AsyncCallback DisconnectAsyncCallback;

	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0x70")]
	private static IOAsyncCallback BeginDisconnectCallback;

	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x78")]
	private static AsyncCallback ReceiveAsyncCallback;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x80")]
	private static IOAsyncCallback BeginReceiveCallback;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x88")]
	private static IOAsyncCallback BeginReceiveGenericCallback;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x90")]
	private static AsyncCallback ReceiveFromAsyncCallback;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x98")]
	private static IOAsyncCallback BeginReceiveFromCallback;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0xA0")]
	private static AsyncCallback SendAsyncCallback;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0xA8")]
	private static IOAsyncCallback BeginSendGenericCallback;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0xB0")]
	private static AsyncCallback SendToAsyncCallback;

	[Token(Token = "0x170002D2")]
	public static bool OSSupportsIPv4
	{
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x46859E0", Offset = "0x46859E0", VA = "0x46859E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D3")]
	public static bool OSSupportsIPv6
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x4685A30", Offset = "0x4685A30", VA = "0x4685A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D4")]
	public IntPtr Handle
	{
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x4685A80", Offset = "0x4685A80", VA = "0x4685A80")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002D5")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x4685AA0", Offset = "0x4685AA0", VA = "0x4685AA0")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170002D6")]
	public SocketType SocketType
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x4685AB0", Offset = "0x4685AB0", VA = "0x4685AB0")]
		get
		{
			return default(SocketType);
		}
	}

	[Token(Token = "0x170002D7")]
	public ProtocolType ProtocolType
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x4685AC0", Offset = "0x4685AC0", VA = "0x4685AC0")]
		get
		{
			return default(ProtocolType);
		}
	}

	[Token(Token = "0x170002D8")]
	public int ReceiveTimeout
	{
		[Token(Token = "0x6000BFC")]
		[Address(RVA = "0x4685AD0", Offset = "0x4685AD0", VA = "0x4685AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D9")]
	public int SendTimeout
	{
		[Token(Token = "0x6000BFD")]
		[Address(RVA = "0x4685C50", Offset = "0x4685C50", VA = "0x4685C50")]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	public bool DontFragment
	{
		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x4685CC0", Offset = "0x4685CC0", VA = "0x4685CC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	public bool DualMode
	{
		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x4685D40", Offset = "0x4685D40", VA = "0x4685D40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C00")]
		[Address(RVA = "0x4685E00", Offset = "0x4685E00", VA = "0x4685E00")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	private bool IsDualMode
	{
		[Token(Token = "0x6000C01")]
		[Address(RVA = "0x4685E80", Offset = "0x4685E80", VA = "0x4685E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DD")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x46882D0", Offset = "0x46882D0", VA = "0x46882D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DE")]
	internal bool CleanedUp
	{
		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x46862A0", Offset = "0x46862A0", VA = "0x46862A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DF")]
	public bool IsBound
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x4688930", Offset = "0x4688930", VA = "0x4688930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E0")]
	public EndPoint LocalEndPoint
	{
		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x4688940", Offset = "0x4688940", VA = "0x4688940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E1")]
	public bool Blocking
	{
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x4688BE0", Offset = "0x4688BE0", VA = "0x4688BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x4688BF0", Offset = "0x4688BF0", VA = "0x4688BF0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public bool Connected
	{
		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x4688DE0", Offset = "0x4688DE0", VA = "0x4688DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E3")]
	public bool NoDelay
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x46888B0", Offset = "0x46888B0", VA = "0x46888B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E4")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x4688E40", Offset = "0x4688E40", VA = "0x4688E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E5")]
	internal static int FamilyHint
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x468CF00", Offset = "0x468CF00", VA = "0x468CF00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x4683C10", Offset = "0x4683C10", VA = "0x4683C10")]
	internal Task ConnectAsync(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4682950", Offset = "0x4682950", VA = "0x4682950")]
	internal ValueTask<int> ReceiveAsync(Memory<byte> buffer, SocketFlags socketFlags, bool fromNetworkStream, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x4684160", Offset = "0x4684160", VA = "0x4684160")]
	private Task<int> ReceiveAsyncApm(Memory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x4683300", Offset = "0x4683300", VA = "0x4683300")]
	internal ValueTask SendAsyncForNetworkStream(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x4684780", Offset = "0x4684780", VA = "0x4684780")]
	private Task<int> SendAsyncApm(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x4684D40", Offset = "0x4684D40", VA = "0x4684D40")]
	private static void CompleteAccept(Socket s, TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x4685060", Offset = "0x4685060", VA = "0x4685060")]
	private static void CompleteSendReceive(Socket s, Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x4684F90", Offset = "0x4684F90", VA = "0x4684F90")]
	private static Exception GetException(SocketError error, bool wrapExceptionsInIOExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x4685230", Offset = "0x4685230", VA = "0x4685230")]
	private void ReturnSocketAsyncEventArgs(Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x4684F30", Offset = "0x4684F30", VA = "0x4684F30")]
	private void ReturnSocketAsyncEventArgs(TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x46852A0", Offset = "0x46852A0", VA = "0x46852A0")]
	public Socket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x4685E90", Offset = "0x4685E90", VA = "0x4685E90")]
	internal bool CanTryAddressFamily(AddressFamily family)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x4685EB0", Offset = "0x4685EB0", VA = "0x4685EB0")]
	public void Connect(IPAddress[] addresses, int port)
	{
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x4686660", Offset = "0x4686660", VA = "0x4686660")]
	public int Send(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x46866F0", Offset = "0x46866F0", VA = "0x46866F0")]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x4681150", Offset = "0x4681150", VA = "0x4681150")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x4687070", Offset = "0x4687070", VA = "0x4687070")]
	public int Receive(byte[] buffer, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x4687100", Offset = "0x4687100", VA = "0x4687100")]
	public int Receive(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x4680A00", Offset = "0x4680A00", VA = "0x4680A00")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x46872E0", Offset = "0x46872E0", VA = "0x46872E0")]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x4687A20", Offset = "0x4687A20", VA = "0x4687A20")]
	public int IOControl(IOControlCode ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x4685840", Offset = "0x4685840", VA = "0x4685840")]
	public void SetIPProtectionLevel(IPProtectionLevel level)
	{
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x4683D90", Offset = "0x4683D90", VA = "0x4683D90")]
	public IAsyncResult BeginConnect(IPAddress address, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x4682250", Offset = "0x4682250", VA = "0x4682250")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x4682530", Offset = "0x4682530", VA = "0x4682530")]
	public int EndSend(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x4681B90", Offset = "0x4681B90", VA = "0x4681B90")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x4681E70", Offset = "0x4681E70", VA = "0x4681E70")]
	public int EndReceive(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x4685530", Offset = "0x4685530", VA = "0x4685530")]
	internal static void InitializeSockets()
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x4688430", Offset = "0x4688430", VA = "0x4688430", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x46884A0", Offset = "0x46884A0", VA = "0x46884A0", Slot = "1")]
	~Socket()
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x46816A0", Offset = "0x46816A0", VA = "0x46816A0")]
	internal void InternalShutdown(SocketShutdown how)
	{
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x4683A40", Offset = "0x4683A40", VA = "0x4683A40")]
	internal void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue, bool silent)
	{
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x46887A0", Offset = "0x46887A0", VA = "0x46887A0")]
	internal Socket(AddressFamily family, SocketType type, ProtocolType proto, SafeSocketHandle safe_handle)
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x4685920", Offset = "0x4685920", VA = "0x4685920")]
	private void SocketDefaults()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x4685830", Offset = "0x4685830", VA = "0x4685830")]
	private static extern IntPtr Socket_icall(AddressFamily family, SocketType type, ProtocolType proto, out int error);

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x4688AA0", Offset = "0x4688AA0", VA = "0x4688AA0")]
	private static SocketAddress LocalEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x4688BD0", Offset = "0x4688BD0", VA = "0x4688BD0")]
	private static extern SocketAddress LocalEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x4688CB0", Offset = "0x4688CB0", VA = "0x4688CB0")]
	private static void Blocking_internal(SafeSocketHandle safeHandle, bool block, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x4688DD0", Offset = "0x4688DD0", VA = "0x4688DD0")]
	internal static extern void Blocking_icall(IntPtr socket, bool block, out int error);

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x4688F30", Offset = "0x4688F30", VA = "0x4688F30")]
	private static SocketAddress RemoteEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4689060", Offset = "0x4689060", VA = "0x4689060")]
	private static extern SocketAddress RemoteEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4689070", Offset = "0x4689070", VA = "0x4689070")]
	public bool Poll(int microSeconds, SelectMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x46891F0", Offset = "0x46891F0", VA = "0x46891F0")]
	private static bool Poll_internal(SafeSocketHandle safeHandle, SelectMode mode, int timeout, out int error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4689330", Offset = "0x4689330", VA = "0x4689330")]
	private static extern bool Poll_icall(IntPtr socket, SelectMode mode, int timeout, out int error);

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4689340", Offset = "0x4689340", VA = "0x4689340")]
	public Socket Accept()
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x46895D0", Offset = "0x46895D0", VA = "0x46895D0")]
	internal void Accept(Socket acceptSocket)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x46896F0", Offset = "0x46896F0", VA = "0x46896F0")]
	public IAsyncResult BeginAccept(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x46899B0", Offset = "0x46899B0", VA = "0x46899B0")]
	public Socket EndAccept(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x46899E0", Offset = "0x46899E0", VA = "0x46899E0")]
	public Socket EndAccept(out byte[] buffer, out int bytesTransferred, IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x4689480", Offset = "0x4689480", VA = "0x4689480")]
	private static SafeSocketHandle Accept_internal(SafeSocketHandle safeHandle, out int error, bool blocking)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x4689BF0", Offset = "0x4689BF0", VA = "0x4689BF0")]
	private static extern IntPtr Accept_icall(IntPtr sock, out int error, bool blocking);

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x4689C00", Offset = "0x4689C00", VA = "0x4689C00")]
	public void Bind(EndPoint localEP)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4689E20", Offset = "0x4689E20", VA = "0x4689E20")]
	private static void Bind_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4689F40", Offset = "0x4689F40", VA = "0x4689F40")]
	private static extern void Bind_icall(IntPtr sock, SocketAddress sa, out int error);

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4689F50", Offset = "0x4689F50", VA = "0x4689F50")]
	public void Listen(int backlog)
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x468A030", Offset = "0x468A030", VA = "0x468A030")]
	private static void Listen_internal(SafeSocketHandle safeHandle, int backlog, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x468A150", Offset = "0x468A150", VA = "0x468A150")]
	private static extern void Listen_icall(IntPtr sock, int backlog, out int error);

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x468A160", Offset = "0x468A160", VA = "0x468A160")]
	public void Connect(IPAddress address, int port)
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x468A1D0", Offset = "0x468A1D0", VA = "0x468A1D0")]
	public void Connect(string host, int port)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x46862B0", Offset = "0x46862B0", VA = "0x46862B0")]
	public void Connect(EndPoint remoteEP)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x468A310", Offset = "0x468A310", VA = "0x468A310")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4687BA0", Offset = "0x4687BA0", VA = "0x4687BA0")]
	public IAsyncResult BeginConnect(EndPoint remoteEP, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x468AAC0", Offset = "0x468AAC0", VA = "0x468AAC0")]
	private static bool BeginMConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x468A600", Offset = "0x468A600", VA = "0x468A600")]
	private static bool BeginSConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x468AD30", Offset = "0x468AD30", VA = "0x468AD30")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x468A200", Offset = "0x468A200", VA = "0x468A200")]
	private static void Connect_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error, bool blocking)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x468ADD0", Offset = "0x468ADD0", VA = "0x468ADD0")]
	private static extern void Connect_icall(IntPtr sock, SocketAddress sa, out int error, bool blocking);

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x468ADE0", Offset = "0x468ADE0", VA = "0x468ADE0")]
	public void Disconnect(bool reuseSocket)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x468AFE0", Offset = "0x468AFE0", VA = "0x468AFE0")]
	public void EndDisconnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x468AEC0", Offset = "0x468AEC0", VA = "0x468AEC0")]
	private static void Disconnect_internal(SafeSocketHandle safeHandle, bool reuse, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x468B080", Offset = "0x468B080", VA = "0x468B080")]
	private static extern void Disconnect_icall(IntPtr sock, bool reuse, out int error);

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4687190", Offset = "0x4687190", VA = "0x4687190")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x468B350", Offset = "0x468B350", VA = "0x468B350")]
	private int Receive(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4687340", Offset = "0x4687340", VA = "0x4687340")]
	[CLSCompliant(false)]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4680CB0", Offset = "0x4680CB0", VA = "0x4680CB0")]
	public int Receive(Span<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4681440", Offset = "0x4681440", VA = "0x4681440")]
	public int Send(ReadOnlySpan<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x468B6E0", Offset = "0x468B6E0", VA = "0x468B6E0")]
	public bool ReceiveAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4688030", Offset = "0x4688030", VA = "0x4688030")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4688200", Offset = "0x4688200", VA = "0x4688200")]
	public int EndReceive(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x468B590", Offset = "0x468B590", VA = "0x468B590")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x468B9D0", Offset = "0x468B9D0", VA = "0x468B9D0")]
	private unsafe static extern int Receive_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x468B200", Offset = "0x468B200", VA = "0x468B200")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x468B9E0", Offset = "0x468B9E0", VA = "0x468B9E0")]
	private unsafe static extern int Receive_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x468B9F0", Offset = "0x468B9F0", VA = "0x468B9F0")]
	private int ReceiveFrom(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, ref EndPoint remoteEP, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x468BE30", Offset = "0x468BE30", VA = "0x468BE30")]
	private int EndReceiveFrom_internal(SocketAsyncResult sockares, SocketAsyncEventArgs ares)
	{
		return default(int);
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x468BCD0", Offset = "0x468BCD0", VA = "0x468BCD0")]
	private unsafe static int ReceiveFrom_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x468BF10", Offset = "0x468BF10", VA = "0x468BF10")]
	private unsafe static extern int ReceiveFrom_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking);

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4686EC0", Offset = "0x4686EC0", VA = "0x4686EC0")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4686750", Offset = "0x4686750", VA = "0x4686750")]
	[CLSCompliant(false)]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x468C1C0", Offset = "0x468C1C0", VA = "0x468C1C0")]
	public bool SendAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x4687CE0", Offset = "0x4687CE0", VA = "0x4687CE0")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x468C4E0", Offset = "0x468C4E0", VA = "0x468C4E0")]
	private static void BeginSendCallback(SocketAsyncResult sockares, int sent_so_far)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4687F60", Offset = "0x4687F60", VA = "0x4687F60")]
	public int EndSend(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x468C070", Offset = "0x468C070", VA = "0x468C070")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x468C890", Offset = "0x468C890", VA = "0x468C890")]
	private unsafe static extern int Send_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x468BF20", Offset = "0x468BF20", VA = "0x468BF20")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x468C8A0", Offset = "0x468C8A0", VA = "0x468C8A0")]
	private unsafe static extern int Send_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x468C8B0", Offset = "0x468C8B0", VA = "0x468C8B0")]
	public int EndSendTo(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4680100", Offset = "0x4680100", VA = "0x4680100")]
	public object GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x468C960", Offset = "0x468C960", VA = "0x468C960")]
	private static void GetSocketOption_obj_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x468CA90", Offset = "0x468CA90", VA = "0x468CA90")]
	private static extern void GetSocketOption_obj_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error);

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x4685B40", Offset = "0x4685B40", VA = "0x4685B40")]
	public void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4688650", Offset = "0x4688650", VA = "0x4688650")]
	private static void SetSocketOption_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x468CAA0", Offset = "0x468CAA0", VA = "0x468CAA0")]
	private static extern void SetSocketOption_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error);

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4687A30", Offset = "0x4687A30", VA = "0x4687A30")]
	public int IOControl(int ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x468CAB0", Offset = "0x468CAB0", VA = "0x468CAB0")]
	private static int IOControl_internal(SafeSocketHandle safeHandle, int ioctl_code, byte[] input, byte[] output, out int error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x468CC00", Offset = "0x468CC00", VA = "0x468CC00")]
	private static extern int IOControl_icall(IntPtr sock, int ioctl_code, byte[] input, byte[] output, out int error);

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x468CC10", Offset = "0x468CC10", VA = "0x468CC10")]
	public void Close()
	{
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x4681710", Offset = "0x4681710", VA = "0x4681710")]
	public void Close(int timeout)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x468CC80", Offset = "0x468CC80", VA = "0x468CC80")]
	internal static extern void Close_icall(IntPtr socket, out int error);

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x4688530", Offset = "0x4688530", VA = "0x4688530")]
	private static void Shutdown_internal(SafeSocketHandle safeHandle, SocketShutdown how, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x468CC90", Offset = "0x468CC90", VA = "0x468CC90")]
	internal static extern void Shutdown_icall(IntPtr socket, SocketShutdown how, out int error);

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x468CCA0", Offset = "0x468CCA0", VA = "0x468CCA0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x468CCF0", Offset = "0x468CCF0", VA = "0x468CCF0")]
	private void Linger(IntPtr handle)
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x4688A20", Offset = "0x4688A20", VA = "0x4688A20")]
	private void ThrowIfDisposedAndClosed()
	{
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x468B090", Offset = "0x468B090", VA = "0x468B090")]
	private void ThrowIfBufferNull(byte[] buffer)
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x468B0E0", Offset = "0x468B0E0", VA = "0x468B0E0")]
	private void ThrowIfBufferOutOfRange(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4688DF0", Offset = "0x4688DF0", VA = "0x4688DF0")]
	private void ThrowIfUdp()
	{
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x4689AD0", Offset = "0x4689AD0", VA = "0x4689AD0")]
	private SocketAsyncResult ValidateEndIAsyncResult(IAsyncResult ares, string methodName, string argName)
	{
		return null;
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4689850", Offset = "0x4689850", VA = "0x4689850")]
	private void QueueIOSelectorJob(SemaphoreSlim sem, IntPtr handle, IOSelectorJob job)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x468B940", Offset = "0x468B940", VA = "0x468B940")]
	private void InitSocketAsyncEventArgs(SocketAsyncEventArgs e, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x468CE50", Offset = "0x468CE50", VA = "0x468CE50")]
	private SocketAsyncOperation SocketOperationToSocketAsyncOperation(SocketOperation op)
	{
		return default(SocketAsyncOperation);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4689D70", Offset = "0x4689D70", VA = "0x4689D70")]
	private IPEndPoint RemapIPEndPoint(IPEndPoint input)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x468CEF0", Offset = "0x468CEF0", VA = "0x468CEF0")]
	internal static extern void cancel_blocking_socket_operation(Thread thread);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x468D070", Offset = "0x468D070", VA = "0x468D070")]
	private static extern bool IsProtocolSupported_internal(NetworkInterfaceComponent networkInterface);

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x46883D0", Offset = "0x46883D0", VA = "0x46883D0")]
	private static bool IsProtocolSupported(NetworkInterfaceComponent networkInterface)
	{
		return default(bool);
	}
}
