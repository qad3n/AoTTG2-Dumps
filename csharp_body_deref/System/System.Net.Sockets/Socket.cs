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
		[Address(RVA = "0x49B29D0", Offset = "0x49B29D0", VA = "0x49B29D0")]
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
		[Address(RVA = "0x49B2990", Offset = "0x49B2990", VA = "0x49B2990")]
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
			[Address(RVA = "0x49B2A50", Offset = "0x49B2A50", VA = "0x49B2A50")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000C86")]
			[Address(RVA = "0x49B2A60", Offset = "0x49B2A60", VA = "0x49B2A60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000C84")]
		[Address(RVA = "0x49B29E0", Offset = "0x49B29E0", VA = "0x49B29E0")]
		public AwaitableSocketAsyncEventArgs()
		{
		}

		[Token(Token = "0x6000C87")]
		[Address(RVA = "0x49A9120", Offset = "0x49A9120", VA = "0x49A9120")]
		public bool Reserve()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x49B2A70", Offset = "0x49B2A70", VA = "0x49B2A70")]
		private void Release()
		{
		}

		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x49B2AE0", Offset = "0x49B2AE0", VA = "0x49B2AE0", Slot = "5")]
		protected override void OnCompleted(SocketAsyncEventArgs _)
		{
		}

		[Token(Token = "0x6000C8A")]
		[Address(RVA = "0x49A9190", Offset = "0x49A9190", VA = "0x49A9190")]
		public ValueTask<int> ReceiveAsync(Socket socket)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x49A97F0", Offset = "0x49A97F0", VA = "0x49A97F0")]
		public ValueTask SendAsyncForNetworkStream(Socket socket)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x49B3140", Offset = "0x49B3140", VA = "0x49B3140", Slot = "9")]
		public ValueTaskSourceStatus GetStatus(short token)
		{
			return default(ValueTaskSourceStatus);
		}

		[Token(Token = "0x6000C8D")]
		[Address(RVA = "0x49B3220", Offset = "0x49B3220", VA = "0x49B3220", Slot = "10")]
		public void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags)
		{
		}

		[Token(Token = "0x6000C8E")]
		[Address(RVA = "0x49B2D40", Offset = "0x49B2D40", VA = "0x49B2D40")]
		private void InvokeContinuation(Action<object> continuation, object state, bool forceAsync)
		{
		}

		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x49B3500", Offset = "0x49B3500", VA = "0x49B3500", Slot = "11")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x49B35E0", Offset = "0x49B35E0", VA = "0x49B35E0", Slot = "8")]
		private void System_002EThreading_002ETasks_002ESources_002EIValueTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x49B31D0", Offset = "0x49B31D0", VA = "0x49B31D0")]
		private void ThrowIncorrectTokenException()
		{
		}

		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x49B34B0", Offset = "0x49B34B0", VA = "0x49B34B0")]
		private void ThrowMultipleContinuationsException()
		{
		}

		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x49B35C0", Offset = "0x49B35C0", VA = "0x49B35C0")]
		private void ThrowException(SocketError error)
		{
		}

		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x49B3070", Offset = "0x49B3070", VA = "0x49B3070")]
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
		[Address(RVA = "0x49AAAE0", Offset = "0x49AAAE0", VA = "0x49AAAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D3")]
	public static bool OSSupportsIPv6
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x49AAB30", Offset = "0x49AAB30", VA = "0x49AAB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D4")]
	public IntPtr Handle
	{
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x49AAB80", Offset = "0x49AAB80", VA = "0x49AAB80")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170002D5")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x49AABA0", Offset = "0x49AABA0", VA = "0x49AABA0")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170002D6")]
	public SocketType SocketType
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x49AABB0", Offset = "0x49AABB0", VA = "0x49AABB0")]
		get
		{
			return default(SocketType);
		}
	}

	[Token(Token = "0x170002D7")]
	public ProtocolType ProtocolType
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x49AABC0", Offset = "0x49AABC0", VA = "0x49AABC0")]
		get
		{
			return default(ProtocolType);
		}
	}

	[Token(Token = "0x170002D8")]
	public int ReceiveTimeout
	{
		[Token(Token = "0x6000BFC")]
		[Address(RVA = "0x49AABD0", Offset = "0x49AABD0", VA = "0x49AABD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D9")]
	public int SendTimeout
	{
		[Token(Token = "0x6000BFD")]
		[Address(RVA = "0x49AAD50", Offset = "0x49AAD50", VA = "0x49AAD50")]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	public bool DontFragment
	{
		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x49AADC0", Offset = "0x49AADC0", VA = "0x49AADC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	public bool DualMode
	{
		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x49AAE40", Offset = "0x49AAE40", VA = "0x49AAE40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C00")]
		[Address(RVA = "0x49AAF00", Offset = "0x49AAF00", VA = "0x49AAF00")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	private bool IsDualMode
	{
		[Token(Token = "0x6000C01")]
		[Address(RVA = "0x49AAF80", Offset = "0x49AAF80", VA = "0x49AAF80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DD")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x49AD3D0", Offset = "0x49AD3D0", VA = "0x49AD3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DE")]
	internal bool CleanedUp
	{
		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x49AB3A0", Offset = "0x49AB3A0", VA = "0x49AB3A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DF")]
	public bool IsBound
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x49ADA30", Offset = "0x49ADA30", VA = "0x49ADA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E0")]
	public EndPoint LocalEndPoint
	{
		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x49ADA40", Offset = "0x49ADA40", VA = "0x49ADA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E1")]
	public bool Blocking
	{
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x49ADCE0", Offset = "0x49ADCE0", VA = "0x49ADCE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x49ADCF0", Offset = "0x49ADCF0", VA = "0x49ADCF0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public bool Connected
	{
		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x49ADEE0", Offset = "0x49ADEE0", VA = "0x49ADEE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E3")]
	public bool NoDelay
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x49AD9B0", Offset = "0x49AD9B0", VA = "0x49AD9B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E4")]
	public EndPoint RemoteEndPoint
	{
		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x49ADF40", Offset = "0x49ADF40", VA = "0x49ADF40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E5")]
	internal static int FamilyHint
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x49B2000", Offset = "0x49B2000", VA = "0x49B2000")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x49A8D10", Offset = "0x49A8D10", VA = "0x49A8D10")]
	internal Task ConnectAsync(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x49A7A50", Offset = "0x49A7A50", VA = "0x49A7A50")]
	internal ValueTask<int> ReceiveAsync(Memory<byte> buffer, SocketFlags socketFlags, bool fromNetworkStream, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x49A9260", Offset = "0x49A9260", VA = "0x49A9260")]
	private Task<int> ReceiveAsyncApm(Memory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x49A8400", Offset = "0x49A8400", VA = "0x49A8400")]
	internal ValueTask SendAsyncForNetworkStream(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x49A9880", Offset = "0x49A9880", VA = "0x49A9880")]
	private Task<int> SendAsyncApm(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags)
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x49A9E40", Offset = "0x49A9E40", VA = "0x49A9E40")]
	private static void CompleteAccept(Socket s, TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x49AA160", Offset = "0x49AA160", VA = "0x49AA160")]
	private static void CompleteSendReceive(Socket s, Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x49AA090", Offset = "0x49AA090", VA = "0x49AA090")]
	private static Exception GetException(SocketError error, bool wrapExceptionsInIOExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x49AA330", Offset = "0x49AA330", VA = "0x49AA330")]
	private void ReturnSocketAsyncEventArgs(Int32TaskSocketAsyncEventArgs saea, bool isReceive)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x49AA030", Offset = "0x49AA030", VA = "0x49AA030")]
	private void ReturnSocketAsyncEventArgs(TaskSocketAsyncEventArgs<Socket> saea)
	{
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x49AA3A0", Offset = "0x49AA3A0", VA = "0x49AA3A0")]
	public Socket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x49AAF90", Offset = "0x49AAF90", VA = "0x49AAF90")]
	internal bool CanTryAddressFamily(AddressFamily family)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x49AAFB0", Offset = "0x49AAFB0", VA = "0x49AAFB0")]
	public void Connect(IPAddress[] addresses, int port)
	{
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x49AB760", Offset = "0x49AB760", VA = "0x49AB760")]
	public int Send(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x49AB7F0", Offset = "0x49AB7F0", VA = "0x49AB7F0")]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x49A6250", Offset = "0x49A6250", VA = "0x49A6250")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x49AC170", Offset = "0x49AC170", VA = "0x49AC170")]
	public int Receive(byte[] buffer, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x49AC200", Offset = "0x49AC200", VA = "0x49AC200")]
	public int Receive(byte[] buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x49A5B00", Offset = "0x49A5B00", VA = "0x49A5B00")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x49AC3E0", Offset = "0x49AC3E0", VA = "0x49AC3E0")]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x49ACB20", Offset = "0x49ACB20", VA = "0x49ACB20")]
	public int IOControl(IOControlCode ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x49AA940", Offset = "0x49AA940", VA = "0x49AA940")]
	public void SetIPProtectionLevel(IPProtectionLevel level)
	{
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x49A8E90", Offset = "0x49A8E90", VA = "0x49A8E90")]
	public IAsyncResult BeginConnect(IPAddress address, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x49A7350", Offset = "0x49A7350", VA = "0x49A7350")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x49A7630", Offset = "0x49A7630", VA = "0x49A7630")]
	public int EndSend(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x49A6C90", Offset = "0x49A6C90", VA = "0x49A6C90")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x49A6F70", Offset = "0x49A6F70", VA = "0x49A6F70")]
	public int EndReceive(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x49AA630", Offset = "0x49AA630", VA = "0x49AA630")]
	internal static void InitializeSockets()
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x49AD530", Offset = "0x49AD530", VA = "0x49AD530", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x49AD5A0", Offset = "0x49AD5A0", VA = "0x49AD5A0", Slot = "1")]
	~Socket()
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x49A67A0", Offset = "0x49A67A0", VA = "0x49A67A0")]
	internal void InternalShutdown(SocketShutdown how)
	{
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x49A8B40", Offset = "0x49A8B40", VA = "0x49A8B40")]
	internal void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue, bool silent)
	{
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x49AD8A0", Offset = "0x49AD8A0", VA = "0x49AD8A0")]
	internal Socket(AddressFamily family, SocketType type, ProtocolType proto, SafeSocketHandle safe_handle)
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x49AAA20", Offset = "0x49AAA20", VA = "0x49AAA20")]
	private void SocketDefaults()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x49AA930", Offset = "0x49AA930", VA = "0x49AA930")]
	private static extern IntPtr Socket_icall(AddressFamily family, SocketType type, ProtocolType proto, out int error);

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x49ADBA0", Offset = "0x49ADBA0", VA = "0x49ADBA0")]
	private static SocketAddress LocalEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x49ADCD0", Offset = "0x49ADCD0", VA = "0x49ADCD0")]
	private static extern SocketAddress LocalEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x49ADDB0", Offset = "0x49ADDB0", VA = "0x49ADDB0")]
	private static void Blocking_internal(SafeSocketHandle safeHandle, bool block, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x49ADED0", Offset = "0x49ADED0", VA = "0x49ADED0")]
	internal static extern void Blocking_icall(IntPtr socket, bool block, out int error);

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x49AE030", Offset = "0x49AE030", VA = "0x49AE030")]
	private static SocketAddress RemoteEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x49AE160", Offset = "0x49AE160", VA = "0x49AE160")]
	private static extern SocketAddress RemoteEndPoint_icall(IntPtr socket, int family, out int error);

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x49AE170", Offset = "0x49AE170", VA = "0x49AE170")]
	public bool Poll(int microSeconds, SelectMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x49AE2F0", Offset = "0x49AE2F0", VA = "0x49AE2F0")]
	private static bool Poll_internal(SafeSocketHandle safeHandle, SelectMode mode, int timeout, out int error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x49AE430", Offset = "0x49AE430", VA = "0x49AE430")]
	private static extern bool Poll_icall(IntPtr socket, SelectMode mode, int timeout, out int error);

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x49AE440", Offset = "0x49AE440", VA = "0x49AE440")]
	public Socket Accept()
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x49AE6D0", Offset = "0x49AE6D0", VA = "0x49AE6D0")]
	internal void Accept(Socket acceptSocket)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x49AE7F0", Offset = "0x49AE7F0", VA = "0x49AE7F0")]
	public IAsyncResult BeginAccept(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x49AEAB0", Offset = "0x49AEAB0", VA = "0x49AEAB0")]
	public Socket EndAccept(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x49AEAE0", Offset = "0x49AEAE0", VA = "0x49AEAE0")]
	public Socket EndAccept(out byte[] buffer, out int bytesTransferred, IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x49AE580", Offset = "0x49AE580", VA = "0x49AE580")]
	private static SafeSocketHandle Accept_internal(SafeSocketHandle safeHandle, out int error, bool blocking)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x49AECF0", Offset = "0x49AECF0", VA = "0x49AECF0")]
	private static extern IntPtr Accept_icall(IntPtr sock, out int error, bool blocking);

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x49AED00", Offset = "0x49AED00", VA = "0x49AED00")]
	public void Bind(EndPoint localEP)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x49AEF20", Offset = "0x49AEF20", VA = "0x49AEF20")]
	private static void Bind_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x49AF040", Offset = "0x49AF040", VA = "0x49AF040")]
	private static extern void Bind_icall(IntPtr sock, SocketAddress sa, out int error);

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x49AF050", Offset = "0x49AF050", VA = "0x49AF050")]
	public void Listen(int backlog)
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x49AF130", Offset = "0x49AF130", VA = "0x49AF130")]
	private static void Listen_internal(SafeSocketHandle safeHandle, int backlog, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x49AF250", Offset = "0x49AF250", VA = "0x49AF250")]
	private static extern void Listen_icall(IntPtr sock, int backlog, out int error);

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x49AF260", Offset = "0x49AF260", VA = "0x49AF260")]
	public void Connect(IPAddress address, int port)
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x49AF2D0", Offset = "0x49AF2D0", VA = "0x49AF2D0")]
	public void Connect(string host, int port)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x49AB3B0", Offset = "0x49AB3B0", VA = "0x49AB3B0")]
	public void Connect(EndPoint remoteEP)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x49AF410", Offset = "0x49AF410", VA = "0x49AF410")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x49ACCA0", Offset = "0x49ACCA0", VA = "0x49ACCA0")]
	public IAsyncResult BeginConnect(EndPoint remoteEP, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x49AFBC0", Offset = "0x49AFBC0", VA = "0x49AFBC0")]
	private static bool BeginMConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x49AF700", Offset = "0x49AF700", VA = "0x49AF700")]
	private static bool BeginSConnect(SocketAsyncResult sockares)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x49AFE30", Offset = "0x49AFE30", VA = "0x49AFE30")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x49AF300", Offset = "0x49AF300", VA = "0x49AF300")]
	private static void Connect_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error, bool blocking)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x49AFED0", Offset = "0x49AFED0", VA = "0x49AFED0")]
	private static extern void Connect_icall(IntPtr sock, SocketAddress sa, out int error, bool blocking);

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x49AFEE0", Offset = "0x49AFEE0", VA = "0x49AFEE0")]
	public void Disconnect(bool reuseSocket)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x49B00E0", Offset = "0x49B00E0", VA = "0x49B00E0")]
	public void EndDisconnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x49AFFC0", Offset = "0x49AFFC0", VA = "0x49AFFC0")]
	private static void Disconnect_internal(SafeSocketHandle safeHandle, bool reuse, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x49B0180", Offset = "0x49B0180", VA = "0x49B0180")]
	private static extern void Disconnect_icall(IntPtr sock, bool reuse, out int error);

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x49AC290", Offset = "0x49AC290", VA = "0x49AC290")]
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x49B0450", Offset = "0x49B0450", VA = "0x49B0450")]
	private int Receive(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x49AC440", Offset = "0x49AC440", VA = "0x49AC440")]
	[CLSCompliant(false)]
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x49A5DB0", Offset = "0x49A5DB0", VA = "0x49A5DB0")]
	public int Receive(Span<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x49A6540", Offset = "0x49A6540", VA = "0x49A6540")]
	public int Send(ReadOnlySpan<byte> buffer, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x49B07E0", Offset = "0x49B07E0", VA = "0x49B07E0")]
	public bool ReceiveAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x49AD130", Offset = "0x49AD130", VA = "0x49AD130")]
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x49AD300", Offset = "0x49AD300", VA = "0x49AD300")]
	public int EndReceive(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x49B0690", Offset = "0x49B0690", VA = "0x49B0690")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x49B0AD0", Offset = "0x49B0AD0", VA = "0x49B0AD0")]
	private unsafe static extern int Receive_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x49B0300", Offset = "0x49B0300", VA = "0x49B0300")]
	private unsafe static int Receive_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x49B0AE0", Offset = "0x49B0AE0", VA = "0x49B0AE0")]
	private unsafe static extern int Receive_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x49B0AF0", Offset = "0x49B0AF0", VA = "0x49B0AF0")]
	private int ReceiveFrom(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, ref EndPoint remoteEP, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x49B0F30", Offset = "0x49B0F30", VA = "0x49B0F30")]
	private int EndReceiveFrom_internal(SocketAsyncResult sockares, SocketAsyncEventArgs ares)
	{
		return default(int);
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x49B0DD0", Offset = "0x49B0DD0", VA = "0x49B0DD0")]
	private unsafe static int ReceiveFrom_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x49B1010", Offset = "0x49B1010", VA = "0x49B1010")]
	private unsafe static extern int ReceiveFrom_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking);

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x49ABFC0", Offset = "0x49ABFC0", VA = "0x49ABFC0")]
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x49AB850", Offset = "0x49AB850", VA = "0x49AB850")]
	[CLSCompliant(false)]
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x49B12C0", Offset = "0x49B12C0", VA = "0x49B12C0")]
	public bool SendAsync(SocketAsyncEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x49ACDE0", Offset = "0x49ACDE0", VA = "0x49ACDE0")]
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x49B15E0", Offset = "0x49B15E0", VA = "0x49B15E0")]
	private static void BeginSendCallback(SocketAsyncResult sockares, int sent_so_far)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x49AD060", Offset = "0x49AD060", VA = "0x49AD060")]
	public int EndSend(IAsyncResult asyncResult, out SocketError errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x49B1170", Offset = "0x49B1170", VA = "0x49B1170")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x49B1990", Offset = "0x49B1990", VA = "0x49B1990")]
	private unsafe static extern int Send_array_icall(IntPtr sock, WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x49B1020", Offset = "0x49B1020", VA = "0x49B1020")]
	private unsafe static int Send_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x49B19A0", Offset = "0x49B19A0", VA = "0x49B19A0")]
	private unsafe static extern int Send_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking);

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x49B19B0", Offset = "0x49B19B0", VA = "0x49B19B0")]
	public int EndSendTo(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x49A5200", Offset = "0x49A5200", VA = "0x49A5200")]
	public object GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x49B1A60", Offset = "0x49B1A60", VA = "0x49B1A60")]
	private static void GetSocketOption_obj_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x49B1B90", Offset = "0x49B1B90", VA = "0x49B1B90")]
	private static extern void GetSocketOption_obj_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error);

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x49AAC40", Offset = "0x49AAC40", VA = "0x49AAC40")]
	public void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x49AD750", Offset = "0x49AD750", VA = "0x49AD750")]
	private static void SetSocketOption_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x49B1BA0", Offset = "0x49B1BA0", VA = "0x49B1BA0")]
	private static extern void SetSocketOption_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error);

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x49ACB30", Offset = "0x49ACB30", VA = "0x49ACB30")]
	public int IOControl(int ioControlCode, byte[] optionInValue, byte[] optionOutValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x49B1BB0", Offset = "0x49B1BB0", VA = "0x49B1BB0")]
	private static int IOControl_internal(SafeSocketHandle safeHandle, int ioctl_code, byte[] input, byte[] output, out int error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x49B1D00", Offset = "0x49B1D00", VA = "0x49B1D00")]
	private static extern int IOControl_icall(IntPtr sock, int ioctl_code, byte[] input, byte[] output, out int error);

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x49B1D10", Offset = "0x49B1D10", VA = "0x49B1D10")]
	public void Close()
	{
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x49A6810", Offset = "0x49A6810", VA = "0x49A6810")]
	public void Close(int timeout)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x49B1D80", Offset = "0x49B1D80", VA = "0x49B1D80")]
	internal static extern void Close_icall(IntPtr socket, out int error);

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x49AD630", Offset = "0x49AD630", VA = "0x49AD630")]
	private static void Shutdown_internal(SafeSocketHandle safeHandle, SocketShutdown how, out int error)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x49B1D90", Offset = "0x49B1D90", VA = "0x49B1D90")]
	internal static extern void Shutdown_icall(IntPtr socket, SocketShutdown how, out int error);

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x49B1DA0", Offset = "0x49B1DA0", VA = "0x49B1DA0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x49B1DF0", Offset = "0x49B1DF0", VA = "0x49B1DF0")]
	private void Linger(IntPtr handle)
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x49ADB20", Offset = "0x49ADB20", VA = "0x49ADB20")]
	private void ThrowIfDisposedAndClosed()
	{
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x49B0190", Offset = "0x49B0190", VA = "0x49B0190")]
	private void ThrowIfBufferNull(byte[] buffer)
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x49B01E0", Offset = "0x49B01E0", VA = "0x49B01E0")]
	private void ThrowIfBufferOutOfRange(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x49ADEF0", Offset = "0x49ADEF0", VA = "0x49ADEF0")]
	private void ThrowIfUdp()
	{
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x49AEBD0", Offset = "0x49AEBD0", VA = "0x49AEBD0")]
	private SocketAsyncResult ValidateEndIAsyncResult(IAsyncResult ares, string methodName, string argName)
	{
		return null;
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x49AE950", Offset = "0x49AE950", VA = "0x49AE950")]
	private void QueueIOSelectorJob(SemaphoreSlim sem, IntPtr handle, IOSelectorJob job)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x49B0A40", Offset = "0x49B0A40", VA = "0x49B0A40")]
	private void InitSocketAsyncEventArgs(SocketAsyncEventArgs e, AsyncCallback callback, object state, SocketOperation operation)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x49B1F50", Offset = "0x49B1F50", VA = "0x49B1F50")]
	private SocketAsyncOperation SocketOperationToSocketAsyncOperation(SocketOperation op)
	{
		return default(SocketAsyncOperation);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x49AEE70", Offset = "0x49AEE70", VA = "0x49AEE70")]
	private IPEndPoint RemapIPEndPoint(IPEndPoint input)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x49B1FF0", Offset = "0x49B1FF0", VA = "0x49B1FF0")]
	internal static extern void cancel_blocking_socket_operation(Thread thread);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x49B2170", Offset = "0x49B2170", VA = "0x49B2170")]
	private static extern bool IsProtocolSupported_internal(NetworkInterfaceComponent networkInterface);

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x49AD4D0", Offset = "0x49AD4D0", VA = "0x49AD4D0")]
	private static bool IsProtocolSupported(NetworkInterfaceComponent networkInterface)
	{
		return default(bool);
	}
}
