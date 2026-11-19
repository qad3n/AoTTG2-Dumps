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

[Token(Token = "0x2000333")]
public class Socket : IDisposable
{
	[Token(Token = "0x2000334")]
	private sealed class CachedEventArgs
	{
		[Token(Token = "0x4000D72")]
		[FieldOffset(Offset = "0x10")]
		public TaskSocketAsyncEventArgs<Socket> TaskAccept;

		[Token(Token = "0x4000D73")]
		[FieldOffset(Offset = "0x18")]
		public Int32TaskSocketAsyncEventArgs TaskReceive;

		[Token(Token = "0x4000D74")]
		[FieldOffset(Offset = "0x20")]
		public Int32TaskSocketAsyncEventArgs TaskSend;

		[Token(Token = "0x4000D75")]
		[FieldOffset(Offset = "0x28")]
		public AwaitableSocketAsyncEventArgs ValueTaskReceive;

		[Token(Token = "0x4000D76")]
		[FieldOffset(Offset = "0x30")]
		public AwaitableSocketAsyncEventArgs ValueTaskSend;

		[Token(Token = "0x6001683")]
		[Address(RVA = "0x61B2800", Offset = "0x61B1800", VA = "0x61B2800")]
		public CachedEventArgs()
		{
		}
	}

	[Token(Token = "0x2000335")]
	private class TaskSocketAsyncEventArgs<TResult> : SocketAsyncEventArgs
	{
		[Token(Token = "0x4000D77")]
		[FieldOffset(Offset = "0x0")]
		internal AsyncTaskMethodBuilder<TResult> _builder;

		[Token(Token = "0x4000D78")]
		[FieldOffset(Offset = "0x0")]
		internal bool _accessed;

		[Token(Token = "0x6001684")]
		internal TaskSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x6001685")]
		internal AsyncTaskMethodBuilder<TResult> GetCompletionResponsibility(out bool responsibleForReturningToPool)
		{
			return default(AsyncTaskMethodBuilder<TResult>);
		}
	}

	[Token(Token = "0x2000336")]
	private sealed class Int32TaskSocketAsyncEventArgs : TaskSocketAsyncEventArgs<int>
	{
		[Token(Token = "0x4000D79")]
		[FieldOffset(Offset = "0x99")]
		internal bool _wrapExceptionsInIOExceptions;

		[Token(Token = "0x6001686")]
		[Address(RVA = "0x61B2810", Offset = "0x61B1810", VA = "0x61B2810")]
		public Int32TaskSocketAsyncEventArgs()
		{
		}
	}

	[Token(Token = "0x2000337")]
	internal sealed class AwaitableSocketAsyncEventArgs : SocketAsyncEventArgs, IValueTaskSource, IValueTaskSource<int>
	{
		[Token(Token = "0x4000D7A")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AwaitableSocketAsyncEventArgs Reserved;

		[Token(Token = "0x4000D7B")]
		[FieldOffset(Offset = "0x8")]
		private static readonly Action<object> s_completedSentinel;

		[Token(Token = "0x4000D7C")]
		[FieldOffset(Offset = "0x10")]
		private static readonly Action<object> s_availableSentinel;

		[Token(Token = "0x4000D7D")]
		[FieldOffset(Offset = "0x80")]
		private Action<object> _continuation;

		[Token(Token = "0x4000D7E")]
		[FieldOffset(Offset = "0x88")]
		private ExecutionContext _executionContext;

		[Token(Token = "0x4000D7F")]
		[FieldOffset(Offset = "0x90")]
		private object _scheduler;

		[Token(Token = "0x4000D80")]
		[FieldOffset(Offset = "0x98")]
		private short _token;

		[Token(Token = "0x1700050D")]
		public bool WrapExceptionsInIOExceptions
		{
			[Token(Token = "0x6001688")]
			[Address(RVA = "0x61B2950", Offset = "0x61B1950", VA = "0x61B2950")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001689")]
			[Address(RVA = "0x61B2960", Offset = "0x61B1960", VA = "0x61B2960")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001687")]
		[Address(RVA = "0x61B2850", Offset = "0x61B1850", VA = "0x61B2850")]
		public AwaitableSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x600168A")]
		[Address(RVA = "0x61B2970", Offset = "0x61B1970", VA = "0x61B2970")]
		public bool Reserve()
		{
			return default(bool);
		}

		[Token(Token = "0x600168B")]
		[Address(RVA = "0x61B29E0", Offset = "0x61B19E0", VA = "0x61B29E0")]
		private void Release()
		{
		}

		[Token(Token = "0x600168C")]
		[Address(RVA = "0x61B2A60", Offset = "0x61B1A60", VA = "0x61B2A60", Slot = "5")]
		protected override void OnCompleted(SocketAsyncEventArgs _)
		{
		}

		[Token(Token = "0x600168D")]
		[Address(RVA = "0x61B2FE0", Offset = "0x61B1FE0", VA = "0x61B2FE0")]
		public ValueTask<int> ReceiveAsync(Socket socket)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x600168E")]
		[Address(RVA = "0x61B3280", Offset = "0x61B2280", VA = "0x61B3280")]
		public ValueTask SendAsyncForNetworkStream(Socket socket)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x600168F")]
		[Address(RVA = "0x61B33F0", Offset = "0x61B23F0", VA = "0x61B33F0", Slot = "9")]
		public ValueTaskSourceStatus GetStatus(short token)
		{
			return default(ValueTaskSourceStatus);
		}

		[Token(Token = "0x6001690")]
		[Address(RVA = "0x61B3510", Offset = "0x61B2510", VA = "0x61B3510", Slot = "10")]
		public void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
		{
		}

		[Token(Token = "0x6001691")]
		[Address(RVA = "0x61B2CB0", Offset = "0x61B1CB0", VA = "0x61B2CB0")]
		private void InvokeContinuation(Action<object> continuation, object state, bool forceAsync)
		{
		}

		[Token(Token = "0x6001692")]
		[Address(RVA = "0x61B3860", Offset = "0x61B2860", VA = "0x61B3860", Slot = "11")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x6001693")]
		[Address(RVA = "0x61B3990", Offset = "0x61B2990", VA = "0x61B3990", Slot = "8")]
		private void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6001694")]
		[Address(RVA = "0x61B34C0", Offset = "0x61B24C0", VA = "0x61B34C0")]
		private void ThrowIncorrectTokenException()
		{
		}

		[Token(Token = "0x6001695")]
		[Address(RVA = "0x61B3810", Offset = "0x61B2810", VA = "0x61B3810")]
		private void ThrowMultipleContinuationsException()
		{
		}

		[Token(Token = "0x6001696")]
		[Address(RVA = "0x61B3970", Offset = "0x61B2970", VA = "0x61B3970")]
		private void ThrowException(SocketError error)
		{
		}

		[Token(Token = "0x6001697")]
		[Address(RVA = "0x61B31B0", Offset = "0x61B21B0", VA = "0x61B31B0")]
		private Exception CreateException(SocketError error)
		{
			return null;
		}
	}

	[Token(Token = "0x2000339")]
	private struct WSABUF
	{
		[Token(Token = "0x4000D85")]
		[FieldOffset(Offset = "0x0")]
		public int len;

		[Token(Token = "0x4000D86")]
		[FieldOffset(Offset = "0x8")]
		public IntPtr buf;
	}

	[Token(Token = "0x4000D47")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EventHandler<SocketAsyncEventArgs> AcceptCompletedHandler;

	[Token(Token = "0x4000D48")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventHandler<SocketAsyncEventArgs> ReceiveCompletedHandler;

	[Token(Token = "0x4000D49")]
	[FieldOffset(Offset = "0x10")]
	private static readonly EventHandler<SocketAsyncEventArgs> SendCompletedHandler;

	[Token(Token = "0x4000D4A")]
	[FieldOffset(Offset = "0x18")]
	private static readonly TaskSocketAsyncEventArgs<Socket> s_rentedSocketSentinel;

	[Token(Token = "0x4000D4B")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Int32TaskSocketAsyncEventArgs s_rentedInt32Sentinel;

	[Token(Token = "0x4000D4C")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Task<int> s_zeroTask;

	[Token(Token = "0x4000D4D")]
	[FieldOffset(Offset = "0x10")]
	private CachedEventArgs _cachedTaskEventArgs;

	[Token(Token = "0x4000D4E")]
	[FieldOffset(Offset = "0x30")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000D4F")]
	[FieldOffset(Offset = "0x38")]
	internal static bool s_SupportsIPv4;

	[Token(Token = "0x4000D50")]
	[FieldOffset(Offset = "0x39")]
	internal static bool s_SupportsIPv6;

	[Token(Token = "0x4000D51")]
	[FieldOffset(Offset = "0x3A")]
	internal static bool s_OSSupportsIPv6;

	[Token(Token = "0x4000D52")]
	[FieldOffset(Offset = "0x3B")]
	internal static bool s_Initialized;

	[Token(Token = "0x4000D53")]
	[FieldOffset(Offset = "0x3C")]
	private static bool s_LoggingEnabled;

	[Token(Token = "0x4000D54")]
	[FieldOffset(Offset = "0x18")]
	private bool is_closed;

	[Token(Token = "0x4000D55")]
	[FieldOffset(Offset = "0x19")]
	private bool is_listening;

	[Token(Token = "0x4000D56")]
	[FieldOffset(Offset = "0x1C")]
	private int linger_timeout;

	[Token(Token = "0x4000D57")]
	[FieldOffset(Offset = "0x20")]
	private AddressFamily addressFamily;

	[Token(Token = "0x4000D58")]
	[FieldOffset(Offset = "0x24")]
	private SocketType socketType;

	[Token(Token = "0x4000D59")]
	[FieldOffset(Offset = "0x28")]
	private ProtocolType protocolType;

	[Token(Token = "0x4000D5A")]
	[FieldOffset(Offset = "0x30")]
	internal SafeSocketHandle m_Handle;

	[Token(Token = "0x4000D5B")]
	[FieldOffset(Offset = "0x38")]
	internal EndPoint seed_endpoint;

	[Token(Token = "0x4000D5C")]
	[FieldOffset(Offset = "0x40")]
	internal SemaphoreSlim ReadSem;

	[Token(Token = "0x4000D5D")]
	[FieldOffset(Offset = "0x48")]
	internal SemaphoreSlim WriteSem;

	[Token(Token = "0x4000D5E")]
	[FieldOffset(Offset = "0x50")]
	internal bool is_blocking;

	[Token(Token = "0x4000D5F")]
	[FieldOffset(Offset = "0x51")]
	internal bool is_bound;

	[Token(Token = "0x4000D60")]
	[FieldOffset(Offset = "0x52")]
	internal bool is_connected;

	[Token(Token = "0x4000D61")]
	[FieldOffset(Offset = "0x54")]
	private int m_IntCleanedUp;

	[Token(Token = "0x4000D62")]
	[FieldOffset(Offset = "0x58")]
	internal bool connect_in_progress;

	[Token(Token = "0x4000D63")]
	[FieldOffset(Offset = "0x40")]
	private static AsyncCallback AcceptAsyncCallback;

	[Token(Token = "0x4000D64")]
	[FieldOffset(Offset = "0x48")]
	private static IOAsyncCallback BeginAcceptCallback;

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x50")]
	private static IOAsyncCallback BeginAcceptReceiveCallback;

	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x58")]
	private static AsyncCallback ConnectAsyncCallback;

	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x60")]
	private static IOAsyncCallback BeginConnectCallback;

	[Token(Token = "0x4000D68")]
	[FieldOffset(Offset = "0x68")]
	private static AsyncCallback DisconnectAsyncCallback;

	[Token(Token = "0x4000D69")]
	[FieldOffset(Offset = "0x70")]
	private static IOAsyncCallback BeginDisconnectCallback;

	[Token(Token = "0x4000D6A")]
	[FieldOffset(Offset = "0x78")]
	private static AsyncCallback ReceiveAsyncCallback;

	[Token(Token = "0x4000D6B")]
	[FieldOffset(Offset = "0x80")]
	private static IOAsyncCallback BeginReceiveCallback;

	[Token(Token = "0x4000D6C")]
	[FieldOffset(Offset = "0x88")]
	private static IOAsyncCallback BeginReceiveGenericCallback;

	[Token(Token = "0x4000D6D")]
	[FieldOffset(Offset = "0x90")]
	private static AsyncCallback ReceiveFromAsyncCallback;

	[Token(Token = "0x4000D6E")]
	[FieldOffset(Offset = "0x98")]
	private static IOAsyncCallback BeginReceiveFromCallback;

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0xA0")]
	private static AsyncCallback SendAsyncCallback;

	[Token(Token = "0x4000D70")]
	[FieldOffset(Offset = "0xA8")]
	private static IOAsyncCallback BeginSendGenericCallback;

	[Token(Token = "0x4000D71")]
	[FieldOffset(Offset = "0xB0")]
	private static AsyncCallback SendToAsyncCallback;

	[Token(Token = "0x170004F9")]
	public static bool OSSupportsIPv4
	{
		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x61AAC40", Offset = "0x61A9C40", VA = "0x61AAC40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FA")]
	public static bool OSSupportsIPv6
	{
		[Token(Token = "0x60015FA")]
		[Address(RVA = "0x61AACA0", Offset = "0x61A9CA0", VA = "0x61AACA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FB")]
	public IntPtr Handle
	{
		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x61AAD00", Offset = "0x61A9D00", VA = "0x61AAD00")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170004FC")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x61AAD20", Offset = "0x61A9D20", VA = "0x61AAD20")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170004FD")]
	public SocketType SocketType
	{
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x61AAD30", Offset = "0x61A9D30", VA = "0x61AAD30")]
		get
		{
			return default(SocketType);
		}
	}

	[Token(Token = "0x170004FE")]
	public ProtocolType ProtocolType
	{
		[Token(Token = "0x60015FE")]
		[Address(RVA = "0x61AAD40", Offset = "0x61A9D40", VA = "0x61AAD40")]
		get
		{
			return default(ProtocolType);
		}
	}

	[Token(Token = "0x170004FF")]
	public int ReceiveTimeout
	{
		[Token(Token = "0x60015FF")]
		[Address(RVA = "0x61AAD50", Offset = "0x61A9D50", VA = "0x61AAD50")]
		set
		{
		}
	}

	[Token(Token = "0x17000500")]
	public int SendTimeout
	{
		[Token(Token = "0x6001600")]
		[Address(RVA = "0x61AAED0", Offset = "0x61A9ED0", VA = "0x61AAED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000501")]
	public bool DontFragment
	{
		[Token(Token = "0x6001601")]
		[Address(RVA = "0x61AAF40", Offset = "0x61A9F40", VA = "0x61AAF40")]
		set
		{
		}
	}

	[Token(Token = "0x17000502")]
	public bool DualMode
	{
		[Token(Token = "0x6001602")]
		[Address(RVA = "0x61AAFC0", Offset = "0x61A9FC0", VA = "0x61AAFC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x61AB080", Offset = "0x61AA080", VA = "0x61AB080")]
		set
		{
		}
	}

	[Token(Token = "0x17000503")]
	private bool IsDualMode
	{
		[Token(Token = "0x6001604")]
		[Address(RVA = "0x61AB100", Offset = "0x61AA100", VA = "0x61AB100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000504")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x61AD340", Offset = "0x61AC340", VA = "0x61AD340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	internal bool CleanedUp
	{
		[Token(Token = "0x6001616")]
		[Address(RVA = "0x61AB530", Offset = "0x61AA530", VA = "0x61AB530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000506")]
	public bool IsBound
	{
		[Token(Token = "0x600161F")]
		[Address(RVA = "0x61AD9A0", Offset = "0x61AC9A0", VA = "0x61AD9A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000507")]
	public EndPoint LocalEndPoint
	{
		[Token(Token = "0x6001620")]
		[Address(RVA = "0x61AD9B0", Offset = "0x61AC9B0", VA = "0x61AD9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000508")]
	public bool Blocking
	{
		[Token(Token = "0x6001623")]
		[Address(RVA = "0x61ADC50", Offset = "0x61ACC50", VA = "0x61ADC50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x61ADC60", Offset = "0x61ACC60", VA = "0x61ADC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000509")]
	public bool Connected
	{
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x61ADE50", Offset = "0x61ACE50", VA = "0x61ADE50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050A")]
	public bool NoDelay
	{
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x61AD930", Offset = "0x61AC930", VA = "0x61AD930")]
		set
		{
		}
	}

	[Token(Token = "0x1700050B")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x61ADEB0", Offset = "0x61ACEB0", VA = "0x61ADEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700050C")]
	internal static int FamilyHint
	{
		[Token(Token = "0x600167F")]
		[Address(RVA = "0x61B1EA0", Offset = "0x61B0EA0", VA = "0x61B1EA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x61A90E0", Offset = "0x61A80E0", VA = "0x61A90E0")]
	internal Task ConnectAsync(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x61A7EE0", Offset = "0x61A6EE0", VA = "0x61A7EE0")]
	internal ValueTask<int> ReceiveAsync(Memory<byte> buffer, SocketFlags socketFlags, bool fromNetworkStream, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x61A94F0", Offset = "0x61A84F0", VA = "0x61A94F0")]
	private Task<int> ReceiveAsyncApm(Memory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x61A8860", Offset = "0x61A7860", VA = "0x61A8860")]
	internal ValueTask SendAsyncForNetworkStream(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x61A9A60", Offset = "0x61A8A60", VA = "0x61A9A60")]
	private Task<int> SendAsyncApm(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x61AA010", Offset = "0x61A9010", VA = "0x61AA010")]
	private static void CompleteAccept(Socket s, TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x61AA340", Offset = "0x61A9340", VA = "0x61AA340")]
	private static void CompleteSendReceive(Socket s, Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x61AA270", Offset = "0x61A9270", VA = "0x61AA270")]
	private static Exception GetException(SocketError error, bool wrapExceptionsInIOExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x61AA4F0", Offset = "0x61A94F0", VA = "0x61AA4F0")]
	private void ReturnSocketAsyncEventArgs(Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x61AA210", Offset = "0x61A9210", VA = "0x61AA210")]
	private void ReturnSocketAsyncEventArgs(TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x61AA550", Offset = "0x61A9550", VA = "0x61AA550")]
	public Socket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType)
	{
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x61AB110", Offset = "0x61AA110", VA = "0x61AB110")]
	internal bool CanTryAddressFamily(AddressFamily family)
	{
		return default(bool);
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x61AB130", Offset = "0x61AA130", VA = "0x61AB130")]
	public void Connect(IPAddress[] addresses, int port)
	{
	}

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x61AB8B0", Offset = "0x61AA8B0", VA = "0x61AB8B0")]
	public int Send(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x61AB940", Offset = "0x61AA940", VA = "0x61AB940")]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6001609")]
	[Address(RVA = "0x61A6610", Offset = "0x61A5610", VA = "0x61A6610")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x600160A")]
	[Address(RVA = "0x61AC1C0", Offset = "0x61AB1C0", VA = "0x61AC1C0")]
	public int Receive(byte[] buffer, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x600160B")]
	[Address(RVA = "0x61AC250", Offset = "0x61AB250", VA = "0x61AC250")]
	public int Receive(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600160C")]
	[Address(RVA = "0x61A5E90", Offset = "0x61A4E90", VA = "0x61A5E90")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x600160D")]
	[Address(RVA = "0x61AC420", Offset = "0x61AB420", VA = "0x61AC420")]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x600160E")]
	[Address(RVA = "0x61ACAA0", Offset = "0x61ABAA0", VA = "0x61ACAA0")]
	public int IOControl(IOControlCode ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x600160F")]
	[Address(RVA = "0x61AAAA0", Offset = "0x61A9AA0", VA = "0x61AAAA0")]
	public void SetIPProtectionLevel(IPProtectionLevel level)
	{
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x61A9260", Offset = "0x61A8260", VA = "0x61A9260")]
	public IAsyncResult BeginConnect(IPAddress address, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001611")]
	[Address(RVA = "0x61A77A0", Offset = "0x61A67A0", VA = "0x61A77A0")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001612")]
	[Address(RVA = "0x61A7AB0", Offset = "0x61A6AB0", VA = "0x61A7AB0")]
	public int EndSend(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001613")]
	[Address(RVA = "0x61A7090", Offset = "0x61A6090", VA = "0x61A7090")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001614")]
	[Address(RVA = "0x61A73A0", Offset = "0x61A63A0", VA = "0x61A73A0")]
	public int EndReceive(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x61AA7E0", Offset = "0x61A97E0", VA = "0x61AA7E0")]
	internal static void InitializeSockets()
	{
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x61AD4A0", Offset = "0x61AC4A0", VA = "0x61AD4A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x61AD510", Offset = "0x61AC510", VA = "0x61AD510", Slot = "1")]
	~Socket()
	{
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x61A6B70", Offset = "0x61A5B70", VA = "0x61A6B70")]
	internal void InternalShutdown(SocketShutdown how)
	{
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x61A8F10", Offset = "0x61A7F10", VA = "0x61A8F10")]
	internal void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue, bool silent)
	{
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x61AD820", Offset = "0x61AC820", VA = "0x61AD820")]
	internal Socket(AddressFamily family, SocketType type, ProtocolType proto, SafeSocketHandle safe_handle)
	{
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x61AAB80", Offset = "0x61A9B80", VA = "0x61AAB80")]
	private void SocketDefaults()
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600161E")]
	[Address(RVA = "0x61AAA90", Offset = "0x61A9A90", VA = "0x61AAA90")]
	private static extern IntPtr Socket_icall(AddressFamily family, SocketType type, ProtocolType proto, out int error);

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x61ADB10", Offset = "0x61ACB10", VA = "0x61ADB10")]
	private static SocketAddress LocalEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001622")]
	[Address(RVA = "0x61ADC40", Offset = "0x61ACC40", VA = "0x61ADC40")]
	private static extern SocketAddress LocalEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x61ADD20", Offset = "0x61ACD20", VA = "0x61ADD20")]
	private static void Blocking_internal(SafeSocketHandle safeHandle, bool block, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001626")]
	[Address(RVA = "0x61ADE40", Offset = "0x61ACE40", VA = "0x61ADE40")]
	internal static extern void Blocking_icall(IntPtr socket, bool block, out int error);

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x61ADFA0", Offset = "0x61ACFA0", VA = "0x61ADFA0")]
	private static SocketAddress RemoteEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600162B")]
	[Address(RVA = "0x61AE0D0", Offset = "0x61AD0D0", VA = "0x61AE0D0")]
	private static extern SocketAddress RemoteEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x61AE0E0", Offset = "0x61AD0E0", VA = "0x61AE0E0")]
	public bool Poll(int microSeconds, SelectMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x61AE260", Offset = "0x61AD260", VA = "0x61AE260")]
	private static bool Poll_internal(SafeSocketHandle safeHandle, SelectMode mode, int timeout, out int error)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600162E")]
	[Address(RVA = "0x61AE3A0", Offset = "0x61AD3A0", VA = "0x61AE3A0")]
	private static extern bool Poll_icall(IntPtr socket, SelectMode mode, int timeout, out int error);

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x61AE3B0", Offset = "0x61AD3B0", VA = "0x61AE3B0")]
	public Socket Accept()
	{
		return null;
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x61AE640", Offset = "0x61AD640", VA = "0x61AE640")]
	internal void Accept(Socket acceptSocket)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x61AE760", Offset = "0x61AD760", VA = "0x61AE760")]
	public IAsyncResult BeginAccept(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x61AEA20", Offset = "0x61ADA20", VA = "0x61AEA20")]
	public Socket EndAccept(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x61AEA50", Offset = "0x61ADA50", VA = "0x61AEA50")]
	public Socket EndAccept(out byte[] buffer, out int bytesTransferred, IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x61AE4F0", Offset = "0x61AD4F0", VA = "0x61AE4F0")]
	private static SafeSocketHandle Accept_internal(SafeSocketHandle safeHandle, out int error, bool blocking)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001635")]
	[Address(RVA = "0x61AEC60", Offset = "0x61ADC60", VA = "0x61AEC60")]
	private static extern IntPtr Accept_icall(IntPtr sock, out int error, bool blocking);

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x61AEC70", Offset = "0x61ADC70", VA = "0x61AEC70")]
	public void Bind(EndPoint localEP)
	{
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x61AEE80", Offset = "0x61ADE80", VA = "0x61AEE80")]
	private static void Bind_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001638")]
	[Address(RVA = "0x61AEFA0", Offset = "0x61ADFA0", VA = "0x61AEFA0")]
	private static extern void Bind_icall(IntPtr sock, SocketAddress sa, out int error);

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x61AEFB0", Offset = "0x61ADFB0", VA = "0x61AEFB0")]
	public void Listen(int backlog)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x61AF090", Offset = "0x61AE090", VA = "0x61AF090")]
	private static void Listen_internal(SafeSocketHandle safeHandle, int backlog, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600163B")]
	[Address(RVA = "0x61AF1B0", Offset = "0x61AE1B0", VA = "0x61AF1B0")]
	private static extern void Listen_icall(IntPtr sock, int backlog, out int error);

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x61AF1C0", Offset = "0x61AE1C0", VA = "0x61AF1C0")]
	public void Connect(IPAddress address, int port)
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x61AF230", Offset = "0x61AE230", VA = "0x61AF230")]
	public void Connect(string host, int port)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x61AB540", Offset = "0x61AA540", VA = "0x61AB540")]
	public void Connect(EndPoint remoteEP)
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x61AF370", Offset = "0x61AE370", VA = "0x61AF370")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x61ACC10", Offset = "0x61ABC10", VA = "0x61ACC10")]
	public IAsyncResult BeginConnect(EndPoint remoteEP, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x61AFB10", Offset = "0x61AEB10", VA = "0x61AFB10")]
	private static bool BeginMConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x61AF660", Offset = "0x61AE660", VA = "0x61AF660")]
	private static bool BeginSConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x61AFD30", Offset = "0x61AED30", VA = "0x61AFD30")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x61AF260", Offset = "0x61AE260", VA = "0x61AF260")]
	private static void Connect_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error, bool blocking)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001645")]
	[Address(RVA = "0x61AFDD0", Offset = "0x61AEDD0", VA = "0x61AFDD0")]
	private static extern void Connect_icall(IntPtr sock, SocketAddress sa, out int error, bool blocking);

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x61AFDE0", Offset = "0x61AEDE0", VA = "0x61AFDE0")]
	public void Disconnect(bool reuseSocket)
	{
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x61AFFE0", Offset = "0x61AEFE0", VA = "0x61AFFE0")]
	public void EndDisconnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x61AFEC0", Offset = "0x61AEEC0", VA = "0x61AFEC0")]
	private static void Disconnect_internal(SafeSocketHandle safeHandle, bool reuse, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001649")]
	[Address(RVA = "0x61B0080", Offset = "0x61AF080", VA = "0x61B0080")]
	private static extern void Disconnect_icall(IntPtr sock, bool reuse, out int error);

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x61AC2E0", Offset = "0x61AB2E0", VA = "0x61AC2E0")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x61B0330", Offset = "0x61AF330", VA = "0x61B0330")]
	private int Receive(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x61AC480", Offset = "0x61AB480", VA = "0x61AC480")]
	[CLSCompliant(false)]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x61A6140", Offset = "0x61A5140", VA = "0x61A6140")]
	public int Receive(Span<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x61A6910", Offset = "0x61A5910", VA = "0x61A6910")]
	public int Send(ReadOnlySpan<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600164F")]
	[Address(RVA = "0x61B0680", Offset = "0x61AF680", VA = "0x61B0680")]
	public bool ReceiveAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x61AD0A0", Offset = "0x61AC0A0", VA = "0x61AD0A0")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x61AD270", Offset = "0x61AC270", VA = "0x61AD270")]
	public int EndReceive(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x61B0550", Offset = "0x61AF550", VA = "0x61B0550")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001653")]
	[Address(RVA = "0x61B09A0", Offset = "0x61AF9A0", VA = "0x61B09A0")]
	private unsafe static extern int Receive_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x61B0200", Offset = "0x61AF200", VA = "0x61B0200")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001655")]
	[Address(RVA = "0x61B09B0", Offset = "0x61AF9B0", VA = "0x61B09B0")]
	private unsafe static extern int Receive_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x61B09C0", Offset = "0x61AF9C0", VA = "0x61B09C0")]
	private int ReceiveFrom(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, ref EndPoint remoteEP, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x61B0DB0", Offset = "0x61AFDB0", VA = "0x61B0DB0")]
	private int EndReceiveFrom_internal(SocketAsyncResult sockares, SocketAsyncEventArgs ares)
	{
		return default(int);
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x61B0C80", Offset = "0x61AFC80", VA = "0x61B0C80")]
	private unsafe static int ReceiveFrom_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001659")]
	[Address(RVA = "0x61B0E90", Offset = "0x61AFE90", VA = "0x61B0E90")]
	private unsafe static extern int ReceiveFrom_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking);

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x61AC020", Offset = "0x61AB020", VA = "0x61AC020")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x61AB9A0", Offset = "0x61AA9A0", VA = "0x61AB9A0")]
	[CLSCompliant(false)]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x61B1100", Offset = "0x61B0100", VA = "0x61B1100")]
	public bool SendAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x61ACD50", Offset = "0x61ABD50", VA = "0x61ACD50")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x61B1450", Offset = "0x61B0450", VA = "0x61B1450")]
	private static void BeginSendCallback(SocketAsyncResult sockares, int sent_so_far)
	{
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x61ACFD0", Offset = "0x61ABFD0", VA = "0x61ACFD0")]
	public int EndSend(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x61B0FD0", Offset = "0x61AFFD0", VA = "0x61B0FD0")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001661")]
	[Address(RVA = "0x61B1840", Offset = "0x61B0840", VA = "0x61B1840")]
	private unsafe static extern int Send_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x61B0EA0", Offset = "0x61AFEA0", VA = "0x61B0EA0")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001663")]
	[Address(RVA = "0x61B1850", Offset = "0x61B0850", VA = "0x61B1850")]
	private unsafe static extern int Send_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x61B1860", Offset = "0x61B0860", VA = "0x61B1860")]
	public int EndSendTo(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x61A5560", Offset = "0x61A4560", VA = "0x61A5560")]
	public object GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName)
	{
		return null;
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x61B1910", Offset = "0x61B0910", VA = "0x61B1910")]
	private static void GetSocketOption_obj_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001667")]
	[Address(RVA = "0x61B1A40", Offset = "0x61B0A40", VA = "0x61B1A40")]
	private static extern void GetSocketOption_obj_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error);

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x61AADC0", Offset = "0x61A9DC0", VA = "0x61AADC0")]
	public void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue)
	{
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x61AD6D0", Offset = "0x61AC6D0", VA = "0x61AD6D0")]
	private static void SetSocketOption_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600166A")]
	[Address(RVA = "0x61B1A50", Offset = "0x61B0A50", VA = "0x61B1A50")]
	private static extern void SetSocketOption_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error);

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x61ACAB0", Offset = "0x61ABAB0", VA = "0x61ACAB0")]
	public int IOControl(int ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x61B1A60", Offset = "0x61B0A60", VA = "0x61B1A60")]
	private static int IOControl_internal(SafeSocketHandle safeHandle, int ioctl_code, byte[] input, byte[] output, out int error)
	{
		return default(int);
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600166D")]
	[Address(RVA = "0x61B1BA0", Offset = "0x61B0BA0", VA = "0x61B1BA0")]
	private static extern int IOControl_icall(IntPtr sock, int ioctl_code, byte[] input, byte[] output, out int error);

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x61B1BB0", Offset = "0x61B0BB0", VA = "0x61B1BB0")]
	public void Close()
	{
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x61A6BE0", Offset = "0x61A5BE0", VA = "0x61A6BE0")]
	public void Close(int timeout)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001670")]
	[Address(RVA = "0x61B1C20", Offset = "0x61B0C20", VA = "0x61B1C20")]
	internal static extern void Close_icall(IntPtr socket, out int error);

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x61AD5B0", Offset = "0x61AC5B0", VA = "0x61AD5B0")]
	private static void Shutdown_internal(SafeSocketHandle safeHandle, SocketShutdown how, out int error)
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001672")]
	[Address(RVA = "0x61B1C30", Offset = "0x61B0C30", VA = "0x61B1C30")]
	internal static extern void Shutdown_icall(IntPtr socket, SocketShutdown how, out int error);

	[Token(Token = "0x6001673")]
	[Address(RVA = "0x61B1C40", Offset = "0x61B0C40", VA = "0x61B1C40", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x61B1C90", Offset = "0x61B0C90", VA = "0x61B1C90")]
	private void Linger(IntPtr handle)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x61ADA90", Offset = "0x61ACA90", VA = "0x61ADA90")]
	private void ThrowIfDisposedAndClosed()
	{
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x61B0090", Offset = "0x61AF090", VA = "0x61B0090")]
	private void ThrowIfBufferNull(byte[] buffer)
	{
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x61B00E0", Offset = "0x61AF0E0", VA = "0x61B00E0")]
	private void ThrowIfBufferOutOfRange(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x61ADE60", Offset = "0x61ACE60", VA = "0x61ADE60")]
	private void ThrowIfUdp()
	{
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x61AEB40", Offset = "0x61ADB40", VA = "0x61AEB40")]
	private SocketAsyncResult ValidateEndIAsyncResult(IAsyncResult ares, string methodName, string argName)
	{
		return null;
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x61AE8C0", Offset = "0x61AD8C0", VA = "0x61AE8C0")]
	private void QueueIOSelectorJob(SemaphoreSlim sem, IntPtr handle, IOSelectorJob job)
	{
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x61B0910", Offset = "0x61AF910", VA = "0x61B0910")]
	private void InitSocketAsyncEventArgs(SocketAsyncEventArgs e, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x61B1DF0", Offset = "0x61B0DF0", VA = "0x61B1DF0")]
	private SocketAsyncOperation SocketOperationToSocketAsyncOperation(SocketOperation op)
	{
		return default(SocketAsyncOperation);
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x61AEDE0", Offset = "0x61ADDE0", VA = "0x61AEDE0")]
	private IPEndPoint RemapIPEndPoint(IPEndPoint input)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600167E")]
	[Address(RVA = "0x61B1E90", Offset = "0x61B0E90", VA = "0x61B1E90")]
	internal static extern void cancel_blocking_socket_operation(Thread thread);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001680")]
	[Address(RVA = "0x61B2010", Offset = "0x61B1010", VA = "0x61B2010")]
	private static extern bool IsProtocolSupported_internal(NetworkInterfaceComponent networkInterface);

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x61AD440", Offset = "0x61AC440", VA = "0x61AD440")]
	private static bool IsProtocolSupported(NetworkInterfaceComponent networkInterface)
	{
		return default(bool);
	}
}
