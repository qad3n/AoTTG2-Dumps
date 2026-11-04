// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.Socket
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Net.NetworkInformation;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000377")]
public class Socket : IDisposable
{
	[Token(Token = "0x2000378")]
	private sealed class CachedEventArgs
	{
		[Token(Token = "0x4000E5A")]
		[FieldOffset(Offset = "0x10")]
		public TaskSocketAsyncEventArgs<Socket> TaskAccept;

		[Token(Token = "0x4000E5B")]
		[FieldOffset(Offset = "0x18")]
		public Int32TaskSocketAsyncEventArgs TaskReceive;

		[Token(Token = "0x4000E5C")]
		[FieldOffset(Offset = "0x20")]
		public Int32TaskSocketAsyncEventArgs TaskSend;

		[Token(Token = "0x4000E5D")]
		[FieldOffset(Offset = "0x28")]
		public AwaitableSocketAsyncEventArgs ValueTaskReceive;

		[Token(Token = "0x4000E5E")]
		[FieldOffset(Offset = "0x30")]
		public AwaitableSocketAsyncEventArgs ValueTaskSend;

		[Token(Token = "0x600183C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CachedEventArgs()
		{
		}
	}

	[Token(Token = "0x2000379")]
	private class TaskSocketAsyncEventArgs<TResult> : SocketAsyncEventArgs
	{
		[Token(Token = "0x4000E5F")]
		[FieldOffset(Offset = "0x0")]
		internal AsyncTaskMethodBuilder<TResult> _builder;

		[Token(Token = "0x4000E60")]
		[FieldOffset(Offset = "0x0")]
		internal bool _accessed;

		[Token(Token = "0x600183D")]
		internal TaskSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x600183E")]
		internal AsyncTaskMethodBuilder<TResult> GetCompletionResponsibility(out bool responsibleForReturningToPool)
		{
			return default(AsyncTaskMethodBuilder<TResult>);
		}
	}

	[Token(Token = "0x200037A")]
	private sealed class Int32TaskSocketAsyncEventArgs : TaskSocketAsyncEventArgs<int>
	{
		[Token(Token = "0x4000E61")]
		[FieldOffset(Offset = "0xA0")]
		internal bool _wrapExceptionsInIOExceptions;

		[Token(Token = "0x600183F")]
		[Address(RVA = "0x2812610", Offset = "0x2810C10", VA = "0x182812610")]
		public Int32TaskSocketAsyncEventArgs()
		{
		}
	}

	[Token(Token = "0x200037B")]
	internal sealed class AwaitableSocketAsyncEventArgs : SocketAsyncEventArgs, IValueTaskSource, IValueTaskSource<int>
	{
		[Token(Token = "0x4000E62")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AwaitableSocketAsyncEventArgs Reserved;

		[Token(Token = "0x4000E63")]
		[FieldOffset(Offset = "0x8")]
		private static readonly Action<object> s_completedSentinel;

		[Token(Token = "0x4000E64")]
		[FieldOffset(Offset = "0x10")]
		private static readonly Action<object> s_availableSentinel;

		[Token(Token = "0x4000E65")]
		[FieldOffset(Offset = "0x80")]
		private Action<object> _continuation;

		[Token(Token = "0x4000E66")]
		[FieldOffset(Offset = "0x88")]
		private ExecutionContext _executionContext;

		[Token(Token = "0x4000E67")]
		[FieldOffset(Offset = "0x90")]
		private object _scheduler;

		[Token(Token = "0x4000E68")]
		[FieldOffset(Offset = "0x98")]
		private short _token;

		[Token(Token = "0x1700053A")]
		public bool WrapExceptionsInIOExceptions
		{
			[Token(Token = "0x6001841")]
			[Address(RVA = "0x2810D30", Offset = "0x280F330", VA = "0x182810D30")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001842")]
			[Address(RVA = "0x2810D40", Offset = "0x280F340", VA = "0x182810D40")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001840")]
		[Address(RVA = "0x2810C50", Offset = "0x280F250", VA = "0x182810C50")]
		public AwaitableSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x6001843")]
		[Address(RVA = "0x28107E0", Offset = "0x280EDE0", VA = "0x1828107E0")]
		public bool Reserve()
		{
			return default(bool);
		}

		[Token(Token = "0x6001844")]
		[Address(RVA = "0x2810760", Offset = "0x280ED60", VA = "0x182810760")]
		private void Release()
		{
		}

		[Token(Token = "0x6001845")]
		[Address(RVA = "0x2810390", Offset = "0x280E990", VA = "0x182810390", Slot = "5")]
		protected override void OnCompleted(SocketAsyncEventArgs _)
		{
		}

		[Token(Token = "0x6001846")]
		[Address(RVA = "0x28105E0", Offset = "0x280EBE0", VA = "0x1828105E0")]
		public ValueTask<int> ReceiveAsync(Socket socket)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x6001847")]
		[Address(RVA = "0x2810860", Offset = "0x280EE60", VA = "0x182810860")]
		public ValueTask SendAsyncForNetworkStream(Socket socket)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x6001848")]
		[Address(RVA = "0x280FDE0", Offset = "0x280E3E0", VA = "0x18280FDE0", Slot = "9")]
		public ValueTaskSourceStatus GetStatus(short token)
		{
			return default(ValueTaskSourceStatus);
		}

		[Token(Token = "0x6001849")]
		[Address(RVA = "0x2810170", Offset = "0x280E770", VA = "0x182810170", Slot = "10")]
		public void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
		{
		}

		[Token(Token = "0x600184A")]
		[Address(RVA = "0x280FE80", Offset = "0x280E480", VA = "0x18280FE80")]
		private void InvokeContinuation(Action<object> continuation, object state, bool forceAsync)
		{
		}

		[Token(Token = "0x600184B")]
		[Address(RVA = "0x280FD80", Offset = "0x280E380", VA = "0x18280FD80", Slot = "11")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x600184C")]
		[Address(RVA = "0x2810980", Offset = "0x280EF80", VA = "0x182810980", Slot = "8")]
		private void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600184D")]
		[Address(RVA = "0x2810A00", Offset = "0x280F000", VA = "0x182810A00")]
		private void ThrowIncorrectTokenException()
		{
		}

		[Token(Token = "0x600184E")]
		[Address(RVA = "0x2810A50", Offset = "0x280F050", VA = "0x182810A50")]
		private void ThrowMultipleContinuationsException()
		{
		}

		[Token(Token = "0x600184F")]
		[Address(RVA = "0x28109D0", Offset = "0x280EFD0", VA = "0x1828109D0")]
		private void ThrowException(SocketError error)
		{
		}

		[Token(Token = "0x6001850")]
		[Address(RVA = "0x280FC90", Offset = "0x280E290", VA = "0x18280FC90")]
		private Exception CreateException(SocketError error)
		{
			return null;
		}
	}

	[Token(Token = "0x200037D")]
	private struct WSABUF
	{
		[Token(Token = "0x4000E6D")]
		[FieldOffset(Offset = "0x0")]
		public int len;

		[Token(Token = "0x4000E6E")]
		[FieldOffset(Offset = "0x8")]
		public IntPtr buf;
	}

	[Token(Token = "0x4000E2F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EventHandler<SocketAsyncEventArgs> AcceptCompletedHandler;

	[Token(Token = "0x4000E30")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventHandler<SocketAsyncEventArgs> ReceiveCompletedHandler;

	[Token(Token = "0x4000E31")]
	[FieldOffset(Offset = "0x10")]
	private static readonly EventHandler<SocketAsyncEventArgs> SendCompletedHandler;

	[Token(Token = "0x4000E32")]
	[FieldOffset(Offset = "0x18")]
	private static readonly TaskSocketAsyncEventArgs<Socket> s_rentedSocketSentinel;

	[Token(Token = "0x4000E33")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Int32TaskSocketAsyncEventArgs s_rentedInt32Sentinel;

	[Token(Token = "0x4000E34")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Task<int> s_zeroTask;

	[Token(Token = "0x4000E35")]
	[FieldOffset(Offset = "0x10")]
	private CachedEventArgs _cachedTaskEventArgs;

	[Token(Token = "0x4000E36")]
	[FieldOffset(Offset = "0x30")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000E37")]
	[FieldOffset(Offset = "0x38")]
	internal static bool s_SupportsIPv4;

	[Token(Token = "0x4000E38")]
	[FieldOffset(Offset = "0x39")]
	internal static bool s_SupportsIPv6;

	[Token(Token = "0x4000E39")]
	[FieldOffset(Offset = "0x3A")]
	internal static bool s_OSSupportsIPv6;

	[Token(Token = "0x4000E3A")]
	[FieldOffset(Offset = "0x3B")]
	internal static bool s_Initialized;

	[Token(Token = "0x4000E3B")]
	[FieldOffset(Offset = "0x3C")]
	private static bool s_LoggingEnabled;

	[Token(Token = "0x4000E3C")]
	[FieldOffset(Offset = "0x18")]
	private bool is_closed;

	[Token(Token = "0x4000E3D")]
	[FieldOffset(Offset = "0x19")]
	private bool is_listening;

	[Token(Token = "0x4000E3E")]
	[FieldOffset(Offset = "0x1C")]
	private int linger_timeout;

	[Token(Token = "0x4000E3F")]
	[FieldOffset(Offset = "0x20")]
	private AddressFamily addressFamily;

	[Token(Token = "0x4000E40")]
	[FieldOffset(Offset = "0x24")]
	private SocketType socketType;

	[Token(Token = "0x4000E41")]
	[FieldOffset(Offset = "0x28")]
	private ProtocolType protocolType;

	[Token(Token = "0x4000E42")]
	[FieldOffset(Offset = "0x30")]
	internal SafeSocketHandle m_Handle;

	[Token(Token = "0x4000E43")]
	[FieldOffset(Offset = "0x38")]
	internal EndPoint seed_endpoint;

	[Token(Token = "0x4000E44")]
	[FieldOffset(Offset = "0x40")]
	internal SemaphoreSlim ReadSem;

	[Token(Token = "0x4000E45")]
	[FieldOffset(Offset = "0x48")]
	internal SemaphoreSlim WriteSem;

	[Token(Token = "0x4000E46")]
	[FieldOffset(Offset = "0x50")]
	internal bool is_blocking;

	[Token(Token = "0x4000E47")]
	[FieldOffset(Offset = "0x51")]
	internal bool is_bound;

	[Token(Token = "0x4000E48")]
	[FieldOffset(Offset = "0x52")]
	internal bool is_connected;

	[Token(Token = "0x4000E49")]
	[FieldOffset(Offset = "0x54")]
	private int m_IntCleanedUp;

	[Token(Token = "0x4000E4A")]
	[FieldOffset(Offset = "0x58")]
	internal bool connect_in_progress;

	[Token(Token = "0x4000E4B")]
	[FieldOffset(Offset = "0x40")]
	private static AsyncCallback AcceptAsyncCallback;

	[Token(Token = "0x4000E4C")]
	[FieldOffset(Offset = "0x48")]
	private static IOAsyncCallback BeginAcceptCallback;

	[Token(Token = "0x4000E4D")]
	[FieldOffset(Offset = "0x50")]
	private static IOAsyncCallback BeginAcceptReceiveCallback;

	[Token(Token = "0x4000E4E")]
	[FieldOffset(Offset = "0x58")]
	private static AsyncCallback ConnectAsyncCallback;

	[Token(Token = "0x4000E4F")]
	[FieldOffset(Offset = "0x60")]
	private static IOAsyncCallback BeginConnectCallback;

	[Token(Token = "0x4000E50")]
	[FieldOffset(Offset = "0x68")]
	private static AsyncCallback DisconnectAsyncCallback;

	[Token(Token = "0x4000E51")]
	[FieldOffset(Offset = "0x70")]
	private static IOAsyncCallback BeginDisconnectCallback;

	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x78")]
	private static AsyncCallback ReceiveAsyncCallback;

	[Token(Token = "0x4000E53")]
	[FieldOffset(Offset = "0x80")]
	private static IOAsyncCallback BeginReceiveCallback;

	[Token(Token = "0x4000E54")]
	[FieldOffset(Offset = "0x88")]
	private static IOAsyncCallback BeginReceiveGenericCallback;

	[Token(Token = "0x4000E55")]
	[FieldOffset(Offset = "0x90")]
	private static AsyncCallback ReceiveFromAsyncCallback;

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x98")]
	private static IOAsyncCallback BeginReceiveFromCallback;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0xA0")]
	private static AsyncCallback SendAsyncCallback;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0xA8")]
	private static IOAsyncCallback BeginSendGenericCallback;

	[Token(Token = "0x4000E59")]
	[FieldOffset(Offset = "0xB0")]
	private static AsyncCallback SendToAsyncCallback;

	[Token(Token = "0x17000526")]
	public static bool OSSupportsIPv4
	{
		[Token(Token = "0x60017B2")]
		[Address(RVA = "0x2801E60", Offset = "0x2800460", VA = "0x182801E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000527")]
	public static bool OSSupportsIPv6
	{
		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x2801EC0", Offset = "0x28004C0", VA = "0x182801EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000528")]
	public IntPtr Handle
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x1F79970", Offset = "0x1F77F70", VA = "0x181F79970")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000529")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x1700052A")]
	public SocketType SocketType
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(SocketType);
		}
	}

	[Token(Token = "0x1700052B")]
	public ProtocolType ProtocolType
	{
		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(ProtocolType);
		}
	}

	[Token(Token = "0x1700052C")]
	public int ReceiveTimeout
	{
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x28022C0", Offset = "0x28008C0", VA = "0x1828022C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052D")]
	public int SendTimeout
	{
		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x2802350", Offset = "0x2800950", VA = "0x182802350")]
		set
		{
		}
	}

	[Token(Token = "0x1700052E")]
	public bool DontFragment
	{
		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x28020F0", Offset = "0x28006F0", VA = "0x1828020F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052F")]
	public bool DualMode
	{
		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x2801A10", Offset = "0x2800010", VA = "0x182801A10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x2802190", Offset = "0x2800790", VA = "0x182802190")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	private bool IsDualMode
	{
		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x2801D00", Offset = "0x2800300", VA = "0x182801D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000531")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x2801C10", Offset = "0x2800210", VA = "0x182801C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000532")]
	internal bool CleanedUp
	{
		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x2801A00", Offset = "0x2800000", VA = "0x182801A00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000533")]
	public bool IsBound
	{
		[Token(Token = "0x60017D8")]
		[Address(RVA = "0x1A08FC0", Offset = "0x1A075C0", VA = "0x181A08FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000534")]
	public EndPoint LocalEndPoint
	{
		[Token(Token = "0x60017D9")]
		[Address(RVA = "0x2801D60", Offset = "0x2800360", VA = "0x182801D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000535")]
	public bool Blocking
	{
		[Token(Token = "0x60017DC")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x2802020", Offset = "0x2800620", VA = "0x182802020")]
		set
		{
		}
	}

	[Token(Token = "0x17000536")]
	public bool Connected
	{
		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x251ECE0", Offset = "0x251D2E0", VA = "0x18251ECE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000537")]
	public bool NoDelay
	{
		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x2802230", Offset = "0x2800830", VA = "0x182802230")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x2801F20", Offset = "0x2800520", VA = "0x182801F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000539")]
	internal static int FamilyHint
	{
		[Token(Token = "0x6001838")]
		[Address(RVA = "0x2801AE0", Offset = "0x28000E0", VA = "0x182801AE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x27F94F0", Offset = "0x27F7AF0", VA = "0x1827F94F0")]
	internal Task ConnectAsync(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x27FC930", Offset = "0x27FAF30", VA = "0x1827FC930")]
	internal ValueTask<int> ReceiveAsync(Memory<byte> buffer, SocketFlags socketFlags, bool fromNetworkStream, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x27FC4F0", Offset = "0x27FAAF0", VA = "0x1827FC4F0")]
	private Task<int> ReceiveAsyncApm(Memory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x27FEAD0", Offset = "0x27FD0D0", VA = "0x1827FEAD0")]
	internal ValueTask SendAsyncForNetworkStream(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x27FE660", Offset = "0x27FCC60", VA = "0x1827FE660")]
	private Task<int> SendAsyncApm(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x27F9120", Offset = "0x27F7720", VA = "0x1827F9120")]
	private static void CompleteAccept(Socket s, TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x60017AD")]
	[Address(RVA = "0x27F9320", Offset = "0x27F7920", VA = "0x1827F9320")]
	private static void CompleteSendReceive(Socket s, Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x27FADC0", Offset = "0x27F93C0", VA = "0x1827FADC0")]
	private static Exception GetException(SocketError error, bool wrapExceptionsInIOExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x27FE5D0", Offset = "0x27FCBD0", VA = "0x1827FE5D0")]
	private void ReturnSocketAsyncEventArgs(Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x27FE560", Offset = "0x27FCB60", VA = "0x1827FE560")]
	private void ReturnSocketAsyncEventArgs(TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x2801600", Offset = "0x27FFC00", VA = "0x182801600")]
	public Socket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType)
	{
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x27F9010", Offset = "0x27F7610", VA = "0x1827F9010")]
	internal bool CanTryAddressFamily(AddressFamily family)
	{
		return default(bool);
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x27F9BB0", Offset = "0x27F81B0", VA = "0x1827F9BB0")]
	public void Connect(IPAddress[] addresses, int port)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x27FF580", Offset = "0x27FDB80", VA = "0x1827FF580")]
	public int Send(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x27FF510", Offset = "0x27FDB10", VA = "0x1827FF510")]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x27FFDF0", Offset = "0x27FE3F0", VA = "0x1827FFDF0")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x27FE090", Offset = "0x27FC690", VA = "0x1827FE090")]
	public int Receive(byte[] buffer, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x27FD7C0", Offset = "0x27FBDC0", VA = "0x1827FD7C0")]
	public int Receive(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x27FD860", Offset = "0x27FBE60", VA = "0x1827FD860")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x27FE2A0", Offset = "0x27FC8A0", VA = "0x1827FE2A0")]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x27FB340", Offset = "0x27F9940", VA = "0x1827FB340")]
	public int IOControl(IOControlCode ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x27FFFE0", Offset = "0x27FE5E0", VA = "0x1827FFFE0")]
	public void SetIPProtectionLevel(IPProtectionLevel level)
	{
	}

	[Token(Token = "0x60017C9")]
	[Address(RVA = "0x27F73B0", Offset = "0x27F59B0", VA = "0x1827F73B0")]
	public IAsyncResult BeginConnect(IPAddress address, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60017CA")]
	[Address(RVA = "0x27F8B90", Offset = "0x27F7190", VA = "0x1827F8B90")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x27FACA0", Offset = "0x27F92A0", VA = "0x1827FACA0")]
	public int EndSend(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60017CC")]
	[Address(RVA = "0x27F7E30", Offset = "0x27F6430", VA = "0x1827F7E30")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60017CD")]
	[Address(RVA = "0x27FA9D0", Offset = "0x27F8FD0", VA = "0x1827FA9D0")]
	public int EndReceive(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x27FB7E0", Offset = "0x27F9DE0", VA = "0x1827FB7E0")]
	internal static void InitializeSockets()
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x27FA450", Offset = "0x27F8A50", VA = "0x1827FA450", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~Socket()
	{
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x27FBB20", Offset = "0x27FA120", VA = "0x1827FBB20")]
	internal void InternalShutdown(SocketShutdown how)
	{
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x2800380", Offset = "0x27FE980", VA = "0x182800380")]
	internal void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue, bool silent)
	{
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x28018F0", Offset = "0x27FFEF0", VA = "0x1828018F0")]
	internal Socket(AddressFamily family, SocketType type, ProtocolType proto, SafeSocketHandle safe_handle)
	{
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x2800600", Offset = "0x27FEC00", VA = "0x182800600")]
	private void SocketDefaults()
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x2800800", Offset = "0x27FEE00", VA = "0x182800800")]
	private static extern IntPtr Socket_icall(AddressFamily family, SocketType type, ProtocolType proto, out int error);

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x27FBFA0", Offset = "0x27FA5A0", VA = "0x1827FBFA0")]
	private static SocketAddress LocalEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x27FBF90", Offset = "0x27FA590", VA = "0x1827FBF90")]
	private static extern SocketAddress LocalEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x27F8F00", Offset = "0x27F7500", VA = "0x1827F8F00")]
	private static void Blocking_internal(SafeSocketHandle safeHandle, bool block, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x27F8EF0", Offset = "0x27F74F0", VA = "0x1827F8EF0")]
	internal static extern void Blocking_icall(IntPtr socket, bool block, out int error);

	[Token(Token = "0x60017E3")]
	[Address(RVA = "0x27FE430", Offset = "0x27FCA30", VA = "0x1827FE430")]
	private static SocketAddress RemoteEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x27FE420", Offset = "0x27FCA20", VA = "0x1827FE420")]
	private static extern SocketAddress RemoteEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x27FC210", Offset = "0x27FA810", VA = "0x1827FC210")]
	public bool Poll(int microSeconds, SelectMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x27FC0E0", Offset = "0x27FA6E0", VA = "0x1827FC0E0")]
	private static bool Poll_internal(SafeSocketHandle safeHandle, SelectMode mode, int timeout, out int error)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x27FC0D0", Offset = "0x27FA6D0", VA = "0x1827FC0D0")]
	private static extern bool Poll_icall(IntPtr socket, SelectMode mode, int timeout, out int error);

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x27F6D80", Offset = "0x27F5380", VA = "0x1827F6D80")]
	public Socket Accept()
	{
		return null;
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x27F6F90", Offset = "0x27F5590", VA = "0x1827F6F90")]
	internal void Accept(Socket acceptSocket)
	{
	}

	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x27F70C0", Offset = "0x27F56C0", VA = "0x1827F70C0")]
	public IAsyncResult BeginAccept(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60017EB")]
	[Address(RVA = "0x27FA4B0", Offset = "0x27F8AB0", VA = "0x1827FA4B0")]
	public Socket EndAccept(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x27FA5A0", Offset = "0x27F8BA0", VA = "0x1827FA5A0")]
	public Socket EndAccept(out byte[] buffer, out int bytesTransferred, IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x27F6C50", Offset = "0x27F5250", VA = "0x1827F6C50")]
	private static SafeSocketHandle Accept_internal(SafeSocketHandle safeHandle, out int error, bool blocking)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x27F6C40", Offset = "0x27F5240", VA = "0x1827F6C40")]
	private static extern IntPtr Accept_icall(IntPtr sock, out int error, bool blocking);

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x27F8D50", Offset = "0x27F7350", VA = "0x1827F8D50")]
	public void Bind(EndPoint localEP)
	{
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x27F8C40", Offset = "0x27F7240", VA = "0x1827F8C40")]
	private static void Bind_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x27F8C30", Offset = "0x27F7230", VA = "0x1827F8C30")]
	private static extern void Bind_icall(IntPtr sock, SocketAddress sa, out int error);

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x27FBE80", Offset = "0x27FA480", VA = "0x1827FBE80")]
	public void Listen(int backlog)
	{
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x27FBD70", Offset = "0x27FA370", VA = "0x1827FBD70")]
	private static void Listen_internal(SafeSocketHandle safeHandle, int backlog, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x27FBD60", Offset = "0x27FA360", VA = "0x1827FBD60")]
	private static extern void Listen_icall(IntPtr sock, int backlog, out int error);

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x27F9FE0", Offset = "0x27F85E0", VA = "0x1827F9FE0")]
	public void Connect(IPAddress address, int port)
	{
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x27F9B70", Offset = "0x27F8170", VA = "0x1827F9B70")]
	public void Connect(string host, int port)
	{
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x27F9770", Offset = "0x27F7D70", VA = "0x1827F9770")]
	public void Connect(EndPoint remoteEP)
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x27F7750", Offset = "0x27F5D50", VA = "0x1827F7750")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x27F7240", Offset = "0x27F5840", VA = "0x1827F7240")]
	public IAsyncResult BeginConnect(EndPoint remoteEP, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x27F7A70", Offset = "0x27F6070", VA = "0x1827F7A70")]
	private static bool BeginMConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x27F8030", Offset = "0x27F6630", VA = "0x1827F8030")]
	private static bool BeginSConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x27FA690", Offset = "0x27F8C90", VA = "0x1827FA690")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x27F9680", Offset = "0x27F7C80", VA = "0x1827F9680")]
	private static void Connect_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error, bool blocking)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x27F9670", Offset = "0x27F7C70", VA = "0x1827F9670")]
	private static extern void Connect_icall(IntPtr sock, SocketAddress sa, out int error, bool blocking);

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x27FA170", Offset = "0x27F8770", VA = "0x1827FA170")]
	public void Disconnect(bool reuseSocket)
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x27FA740", Offset = "0x27F8D40", VA = "0x1827FA740")]
	public void EndDisconnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x27FA060", Offset = "0x27F8660", VA = "0x1827FA060")]
	private static void Disconnect_internal(SafeSocketHandle safeHandle, bool reuse, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001802")]
	[Address(RVA = "0x27FA050", Offset = "0x27F8650", VA = "0x1827FA050")]
	private static extern void Disconnect_icall(IntPtr sock, bool reuse, out int error);

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x27FE130", Offset = "0x27FC730", VA = "0x1827FE130")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x27FD8E0", Offset = "0x27FBEE0", VA = "0x1827FD8E0")]
	private int Receive(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x27FDB10", Offset = "0x27FC110", VA = "0x1827FDB10")]
	[CLSCompliant(false)]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x27FD6C0", Offset = "0x27FBCC0", VA = "0x1827FD6C0")]
	public int Receive(Span<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x27FF5C0", Offset = "0x27FDBC0", VA = "0x1827FF5C0")]
	public int Send(ReadOnlySpan<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x27FCCB0", Offset = "0x27FB2B0", VA = "0x1827FCCB0")]
	public bool ReceiveAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x27F7C30", Offset = "0x27F6230", VA = "0x1827F7C30")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x27FA8E0", Offset = "0x27F8EE0", VA = "0x1827FA8E0")]
	public int EndReceive(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x27FD5A0", Offset = "0x27FBBA0", VA = "0x1827FD5A0")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600180C")]
	[Address(RVA = "0x27FD460", Offset = "0x27FBA60", VA = "0x1827FD460")]
	private unsafe static extern int Receive_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x600180D")]
	[Address(RVA = "0x27FD480", Offset = "0x27FBA80", VA = "0x1827FD480")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600180E")]
	[Address(RVA = "0x27FD470", Offset = "0x27FBA70", VA = "0x1827FD470")]
	private unsafe static extern int Receive_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x27FD190", Offset = "0x27FB790", VA = "0x1827FD190")]
	private int ReceiveFrom(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, ref EndPoint remoteEP, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001810")]
	[Address(RVA = "0x27FA7F0", Offset = "0x27F8DF0", VA = "0x1827FA7F0")]
	private int EndReceiveFrom_internal(SocketAsyncResult sockares, SocketAsyncEventArgs ares)
	{
		return default(int);
	}

	[Token(Token = "0x6001811")]
	[Address(RVA = "0x27FD060", Offset = "0x27FB660", VA = "0x1827FD060")]
	private unsafe static int ReceiveFrom_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001812")]
	[Address(RVA = "0x27FD050", Offset = "0x27FB650", VA = "0x1827FD050")]
	private unsafe static extern int ReceiveFrom_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking);

	[Token(Token = "0x6001813")]
	[Address(RVA = "0x27FFC20", Offset = "0x27FE220", VA = "0x1827FFC20")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001814")]
	[Address(RVA = "0x27FF640", Offset = "0x27FDC40", VA = "0x1827FF640")]
	[CLSCompliant(false)]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001815")]
	[Address(RVA = "0x27FEE60", Offset = "0x27FD460", VA = "0x1827FEE60")]
	public bool SendAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001816")]
	[Address(RVA = "0x27F88E0", Offset = "0x27F6EE0", VA = "0x1827F88E0")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001817")]
	[Address(RVA = "0x27F8570", Offset = "0x27F6B70", VA = "0x1827F8570")]
	private static void BeginSendCallback(SocketAsyncResult sockares, int sent_so_far)
	{
	}

	[Token(Token = "0x6001818")]
	[Address(RVA = "0x27FABB0", Offset = "0x27F91B0", VA = "0x1827FABB0")]
	public int EndSend(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001819")]
	[Address(RVA = "0x27FF3F0", Offset = "0x27FD9F0", VA = "0x1827FF3F0")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600181A")]
	[Address(RVA = "0x27FF2B0", Offset = "0x27FD8B0", VA = "0x1827FF2B0")]
	private unsafe static extern int Send_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x27FF2D0", Offset = "0x27FD8D0", VA = "0x1827FF2D0")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600181C")]
	[Address(RVA = "0x27FF2C0", Offset = "0x27FD8C0", VA = "0x1827FF2C0")]
	private unsafe static extern int Send_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x27FAAF0", Offset = "0x27F90F0", VA = "0x1827FAAF0")]
	public int EndSendTo(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x27FAEB0", Offset = "0x27F94B0", VA = "0x1827FAEB0")]
	public object GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName)
	{
		return null;
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x27FB0C0", Offset = "0x27F96C0", VA = "0x1827FB0C0")]
	private static void GetSocketOption_obj_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001820")]
	[Address(RVA = "0x27FB0B0", Offset = "0x27F96B0", VA = "0x1827FB0B0")]
	private static extern void GetSocketOption_obj_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error);

	[Token(Token = "0x6001821")]
	[Address(RVA = "0x2800260", Offset = "0x27FE860", VA = "0x182800260")]
	public void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue)
	{
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x2800110", Offset = "0x27FE710", VA = "0x182800110")]
	private static void SetSocketOption_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001823")]
	[Address(RVA = "0x2800100", Offset = "0x27FE700", VA = "0x182800100")]
	private static extern void SetSocketOption_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error);

	[Token(Token = "0x6001824")]
	[Address(RVA = "0x27FB4C0", Offset = "0x27F9AC0", VA = "0x1827FB4C0")]
	public int IOControl(int ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x6001825")]
	[Address(RVA = "0x27FB200", Offset = "0x27F9800", VA = "0x1827FB200")]
	private static int IOControl_internal(SafeSocketHandle safeHandle, int ioctl_code, byte[] input, byte[] output, out int error)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001826")]
	[Address(RVA = "0x27FB1F0", Offset = "0x27F97F0", VA = "0x1827FB1F0")]
	private static extern int IOControl_icall(IntPtr sock, int ioctl_code, byte[] input, byte[] output, out int error);

	[Token(Token = "0x6001827")]
	[Address(RVA = "0x27F9040", Offset = "0x27F7640", VA = "0x1827F9040")]
	public void Close()
	{
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x27F90B0", Offset = "0x27F76B0", VA = "0x1827F90B0")]
	public void Close(int timeout)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001829")]
	[Address(RVA = "0x27F9030", Offset = "0x27F7630", VA = "0x1827F9030")]
	internal static extern void Close_icall(IntPtr socket, out int error);

	[Token(Token = "0x600182A")]
	[Address(RVA = "0x28004F0", Offset = "0x27FEAF0", VA = "0x1828004F0")]
	private static void Shutdown_internal(SafeSocketHandle safeHandle, SocketShutdown how, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600182B")]
	[Address(RVA = "0x28004E0", Offset = "0x27FEAE0", VA = "0x1828004E0")]
	internal static extern void Shutdown_icall(IntPtr socket, SocketShutdown how, out int error);

	[Token(Token = "0x600182C")]
	[Address(RVA = "0x27FA280", Offset = "0x27F8880", VA = "0x1827FA280", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x27FBBF0", Offset = "0x27FA1F0", VA = "0x1827FBBF0")]
	private void Linger(IntPtr handle)
	{
	}

	[Token(Token = "0x600182E")]
	[Address(RVA = "0x2800A30", Offset = "0x27FF030", VA = "0x182800A30")]
	private void ThrowIfDisposedAndClosed()
	{
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x2800810", Offset = "0x27FEE10", VA = "0x182800810")]
	private void ThrowIfBufferNull(byte[] buffer)
	{
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x2800870", Offset = "0x27FEE70", VA = "0x182800870")]
	private void ThrowIfBufferOutOfRange(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001831")]
	[Address(RVA = "0x2800AC0", Offset = "0x27FF0C0", VA = "0x182800AC0")]
	private void ThrowIfUdp()
	{
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x2800B20", Offset = "0x27FF120", VA = "0x182800B20")]
	private SocketAsyncResult ValidateEndIAsyncResult(IAsyncResult ares, string methodName, string argName)
	{
		return null;
	}

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x27FC3B0", Offset = "0x27FA9B0", VA = "0x1827FC3B0")]
	private void QueueIOSelectorJob(SemaphoreSlim sem, IntPtr handle, IOSelectorJob job)
	{
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x27FB640", Offset = "0x27F9C40", VA = "0x1827FB640")]
	private void InitSocketAsyncEventArgs(SocketAsyncEventArgs e, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x28006D0", Offset = "0x27FECD0", VA = "0x1828006D0")]
	private SocketAsyncOperation SocketOperationToSocketAsyncOperation(SocketOperation op)
	{
		return default(SocketAsyncOperation);
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x27FE310", Offset = "0x27FC910", VA = "0x1827FE310")]
	private IPEndPoint RemapIPEndPoint(IPEndPoint input)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001837")]
	[Address(RVA = "0x28019F0", Offset = "0x27FFFF0", VA = "0x1828019F0")]
	internal static extern void cancel_blocking_socket_operation(Thread thread);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001839")]
	[Address(RVA = "0x1A2A820", Offset = "0x1A28E20", VA = "0x181A2A820")]
	private static extern bool IsProtocolSupported_internal(NetworkInterfaceComponent networkInterface);

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x27FBBA0", Offset = "0x27FA1A0", VA = "0x1827FBBA0")]
	private static bool IsProtocolSupported(NetworkInterfaceComponent networkInterface)
	{
		return default(bool);
	}
}
