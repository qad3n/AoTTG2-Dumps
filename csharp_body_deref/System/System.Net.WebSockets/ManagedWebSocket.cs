// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.ManagedWebSocket
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200035E")]
internal sealed class ManagedWebSocket : WebSocket
{
	[Token(Token = "0x200035F")]
	private sealed class Utf8MessageState
	{
		[Token(Token = "0x4000F02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal bool SequenceInProgress;

		[Token(Token = "0x4000F03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		internal int AdditionalBytesExpected;

		[Token(Token = "0x4000F04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal int ExpectedValueMin;

		[Token(Token = "0x4000F05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		internal int CurrentDecodeBits;

		[Token(Token = "0x600175E")]
		[Address(RVA = "0x61BE580", Offset = "0x61BD580", VA = "0x61BE580")]
		public Utf8MessageState()
		{
		}
	}

	[Token(Token = "0x2000360")]
	private enum MessageOpcode : byte
	{
		[Token(Token = "0x4000F07")]
		Continuation = 0,
		[Token(Token = "0x4000F08")]
		Text = 1,
		[Token(Token = "0x4000F09")]
		Binary = 2,
		[Token(Token = "0x4000F0A")]
		Close = 8,
		[Token(Token = "0x4000F0B")]
		Ping = 9,
		[Token(Token = "0x4000F0C")]
		Pong = 10
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000361")]
	private struct MessageHeader
	{
		[Token(Token = "0x4000F0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal MessageOpcode Opcode;

		[Token(Token = "0x4000F0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		internal bool Fin;

		[Token(Token = "0x4000F0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal long PayloadLength;

		[Token(Token = "0x4000F10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal int Mask;
	}

	[Token(Token = "0x2000362")]
	private interface IWebSocketReceiveResultGetter<TResult>
	{
		[Token(Token = "0x600175F")]
		TResult GetResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeDescription);
	}

	[Token(Token = "0x2000363")]
	private readonly struct WebSocketReceiveResultGetter : IWebSocketReceiveResultGetter<WebSocketReceiveResult>
	{
		[Token(Token = "0x6001760")]
		[Address(RVA = "0x61C23A0", Offset = "0x61C13A0", VA = "0x61C23A0", Slot = "4")]
		public WebSocketReceiveResult GetResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeDescription)
		{
			return null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000365")]
	[CompilerGenerated]
	private struct _003CWaitForWriteTaskAsync_003Ed__55 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ValueTask writeTask;

		[Token(Token = "0x4000F1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001768")]
		[Address(RVA = "0x61C2770", Offset = "0x61C1770", VA = "0x61C2770", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001769")]
		[Address(RVA = "0x61C2D70", Offset = "0x61C1D70", VA = "0x61C2D70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000366")]
	[CompilerGenerated]
	private struct _003CSendFrameFallbackAsync_003Ed__56 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MessageOpcode opcode;

		[Token(Token = "0x4000F20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool endOfMessage;

		[Token(Token = "0x4000F21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ReadOnlyMemory<byte> payloadBuffer;

		[Token(Token = "0x4000F22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000F24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private CancellationTokenRegistration _003C_003E7__wrap1;

		[Token(Token = "0x4000F25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600176A")]
		[Address(RVA = "0x61C2DD0", Offset = "0x61C1DD0", VA = "0x61C2DD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600176B")]
		[Address(RVA = "0x61C38C0", Offset = "0x61C28C0", VA = "0x61C38C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000368")]
	[CompilerGenerated]
	private struct _003CReceiveAsyncPrivate_003Ed__61<TWebSocketReceiveResultGetter, TWebSocketReceiveResult> : IAsyncStateMachine where TWebSocketReceiveResultGetter : struct, IWebSocketReceiveResultGetter<TWebSocketReceiveResult>
	{
		[Token(Token = "0x4000F28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncValueTaskMethodBuilder<TWebSocketReceiveResult> _003C_003Et__builder;

		[Token(Token = "0x4000F2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TWebSocketReceiveResultGetter resultGetter;

		[Token(Token = "0x4000F2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Memory<byte> payloadBuffer;

		[Token(Token = "0x4000F2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration _003Cregistration_003E5__2;

		[Token(Token = "0x4000F2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private MessageHeader _003Cheader_003E5__3;

		[Token(Token = "0x4000F30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CtotalBytesReceived_003E5__4;

		[Token(Token = "0x4000F31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000F32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600176F")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001770")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000369")]
	[CompilerGenerated]
	private struct _003CHandleReceivedCloseAsync_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MessageHeader header;

		[Token(Token = "0x4000F37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private WebSocketCloseStatus _003CcloseStatus_003E5__2;

		[Token(Token = "0x4000F39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private string _003CcloseStatusDescription_003E5__3;

		[Token(Token = "0x4000F3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001771")]
		[Address(RVA = "0x61C3920", Offset = "0x61C2920", VA = "0x61C3920", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001772")]
		[Address(RVA = "0x61C4540", Offset = "0x61C3540", VA = "0x61C4540", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200036A")]
	[CompilerGenerated]
	private struct _003CWaitForServerToCloseConnectionAsync_003Ed__63 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenSource _003CfinalCts_003E5__2;

		[Token(Token = "0x4000F40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private CancellationTokenRegistration _003C_003E7__wrap2;

		[Token(Token = "0x4000F41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001773")]
		[Address(RVA = "0x61C45A0", Offset = "0x61C35A0", VA = "0x61C45A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001774")]
		[Address(RVA = "0x61C4DE0", Offset = "0x61C3DE0", VA = "0x61C4DE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200036B")]
	[CompilerGenerated]
	private struct _003CHandleReceivedPingPongAsync_003Ed__64 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MessageHeader header;

		[Token(Token = "0x4000F45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000F48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001775")]
		[Address(RVA = "0x61C4E40", Offset = "0x61C3E40", VA = "0x61C4E40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001776")]
		[Address(RVA = "0x61C55C0", Offset = "0x61C45C0", VA = "0x61C55C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200036C")]
	[CompilerGenerated]
	private struct _003CCloseWithReceiveErrorAndThrowAsync_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4000F4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public WebSocketError error;

		[Token(Token = "0x4000F4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Exception innerException;

		[Token(Token = "0x4000F4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001777")]
		[Address(RVA = "0x61C5620", Offset = "0x61C4620", VA = "0x61C5620", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001778")]
		[Address(RVA = "0x61C5870", Offset = "0x61C4870", VA = "0x61C5870", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200036D")]
	[CompilerGenerated]
	private struct _003CCloseAsyncPrivate_003Ed__68 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4000F54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string statusDescription;

		[Token(Token = "0x4000F55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003CcloseBuffer_003E5__2;

		[Token(Token = "0x4000F57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001779")]
		[Address(RVA = "0x61C58D0", Offset = "0x61C48D0", VA = "0x61C58D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600177A")]
		[Address(RVA = "0x61C6060", Offset = "0x61C5060", VA = "0x61C6060", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200036E")]
	[CompilerGenerated]
	private struct _003CSendCloseFrameAsync_003Ed__69 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string closeStatusDescription;

		[Token(Token = "0x4000F5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4000F5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__2;

		[Token(Token = "0x4000F5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000F60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600177B")]
		[Address(RVA = "0x61C60C0", Offset = "0x61C50C0", VA = "0x61C60C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600177C")]
		[Address(RVA = "0x61C6BA0", Offset = "0x61C5BA0", VA = "0x61C6BA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200036F")]
	[CompilerGenerated]
	private struct _003CEnsureBufferContainsAsync_003Ed__71 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000F64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int minimumRequiredBytes;

		[Token(Token = "0x4000F65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool throwOnPrematureClosure;

		[Token(Token = "0x4000F67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600177D")]
		[Address(RVA = "0x61C6C00", Offset = "0x61C5C00", VA = "0x61C6C00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600177E")]
		[Address(RVA = "0x61C71B0", Offset = "0x61C61B0", VA = "0x61C71B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000EE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly RandomNumberGenerator s_random;

	[Token(Token = "0x4000EE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly UTF8Encoding s_textEncoding;

	[Token(Token = "0x4000EE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly WebSocketState[] s_validSendStates;

	[Token(Token = "0x4000EE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly WebSocketState[] s_validReceiveStates;

	[Token(Token = "0x4000EEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly WebSocketState[] s_validCloseOutputStates;

	[Token(Token = "0x4000EEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly WebSocketState[] s_validCloseStates;

	[Token(Token = "0x4000EEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly Task<WebSocketReceiveResult> s_cachedCloseTask;

	[Token(Token = "0x4000EED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Stream _stream;

	[Token(Token = "0x4000EEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly bool _isServer;

	[Token(Token = "0x4000EEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _subprotocol;

	[Token(Token = "0x4000EF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Timer _keepAliveTimer;

	[Token(Token = "0x4000EF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly CancellationTokenSource _abortSource;

	[Token(Token = "0x4000EF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Memory<byte> _receiveBuffer;

	[Token(Token = "0x4000EF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Utf8MessageState _utf8TextState;

	[Token(Token = "0x4000EF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly SemaphoreSlim _sendFrameAsyncLock;

	[Token(Token = "0x4000EF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebSocketState _state;

	[Token(Token = "0x4000EF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private bool _disposed;

	[Token(Token = "0x4000EF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5D")]
	private bool _sentCloseFrame;

	[Token(Token = "0x4000EF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5E")]
	private bool _receivedCloseFrame;

	[Token(Token = "0x4000EF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private WebSocketCloseStatus? _closeStatus;

	[Token(Token = "0x4000EFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string _closeStatusDescription;

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private MessageHeader _lastReceiveHeader;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _receiveBufferOffset;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _receiveBufferCount;

	[Token(Token = "0x4000EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _receivedMaskOffsetOffset;

	[Token(Token = "0x4000EFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private byte[] _sendBuffer;

	[Token(Token = "0x4000F00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool _lastSendWasFragment;

	[Token(Token = "0x4000F01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Task _lastReceiveAsync;

	[Token(Token = "0x17000525")]
	private object StateUpdateLock
	{
		[Token(Token = "0x6001732")]
		[Address(RVA = "0x61BE560", Offset = "0x61BD560", VA = "0x61BE560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000526")]
	private object ReceiveAsyncLock
	{
		[Token(Token = "0x6001733")]
		[Address(RVA = "0x61BE570", Offset = "0x61BD570", VA = "0x61BE570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000527")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x6001737")]
		[Address(RVA = "0x61BE6C0", Offset = "0x61BD6C0", VA = "0x61BE6C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000528")]
	public override WebSocketState State
	{
		[Token(Token = "0x6001738")]
		[Address(RVA = "0x61BE6D0", Offset = "0x61BD6D0", VA = "0x61BE6D0", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x61BE020", Offset = "0x61BD020", VA = "0x61BE020")]
	public static ManagedWebSocket CreateFromConnectedStream(Stream stream, bool isServer, string subprotocol, TimeSpan keepAliveInterval)
	{
		return null;
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x61BE090", Offset = "0x61BD090", VA = "0x61BE090")]
	private ManagedWebSocket(Stream stream, bool isServer, string subprotocol, TimeSpan keepAliveInterval)
	{
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x61BE5A0", Offset = "0x61BD5A0", VA = "0x61BE5A0", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x61BE680", Offset = "0x61BD680", VA = "0x61BE680")]
	private void DisposeCore()
	{
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x61BE6E0", Offset = "0x61BD6E0", VA = "0x61BE6E0", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x61BEB10", Offset = "0x61BDB10", VA = "0x61BEB10")]
	private ValueTask SendPrivateAsync(ReadOnlyMemory<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x61BF0B0", Offset = "0x61BE0B0", VA = "0x61BF0B0", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x61BF460", Offset = "0x61BE460", VA = "0x61BF460", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x61BF860", Offset = "0x61BE860", VA = "0x61BF860", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x61BFAE0", Offset = "0x61BEAE0", VA = "0x61BFAE0", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x61BEF90", Offset = "0x61BDF90", VA = "0x61BEF90")]
	private ValueTask SendFrameAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x61BFB10", Offset = "0x61BEB10", VA = "0x61BFB10")]
	private ValueTask SendFrameLockAcquiredNonCancelableAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x61C0580", Offset = "0x61BF580", VA = "0x61C0580")]
	[AsyncStateMachine(typeof(_003CWaitForWriteTaskAsync_003Ed__55))]
	private Task WaitForWriteTaskAsync(ValueTask writeTask)
	{
		return null;
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x61C0000", Offset = "0x61BF000", VA = "0x61C0000")]
	[AsyncStateMachine(typeof(_003CSendFrameFallbackAsync_003Ed__56))]
	private Task SendFrameFallbackAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x61C0140", Offset = "0x61BF140", VA = "0x61C0140")]
	private int WriteFrameToSendBuffer(MessageOpcode opcode, bool endOfMessage, ReadOnlySpan<byte> payloadBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x61C0A80", Offset = "0x61BFA80", VA = "0x61C0A80")]
	private void SendKeepAliveFrameAsync()
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x61C0810", Offset = "0x61BF810", VA = "0x61C0810")]
	private static int WriteHeader(MessageOpcode opcode, byte[] sendBuffer, ReadOnlySpan<byte> payload, bool endOfMessage, bool useMask)
	{
		return default(int);
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x61C0FC0", Offset = "0x61BFFC0", VA = "0x61C0FC0")]
	private static void WriteRandomMask(byte[] buffer, int offset)
	{
	}

	[Token(Token = "0x6001747")]
	[AsyncStateMachine(typeof(_003CReceiveAsyncPrivate_003Ed__61<, >))]
	private ValueTask<TWebSocketReceiveResult> ReceiveAsyncPrivate<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>(Memory<byte> payloadBuffer, CancellationToken cancellationToken, [Optional] TWebSocketReceiveResultGetter resultGetter) where TWebSocketReceiveResultGetter : struct, IWebSocketReceiveResultGetter<TWebSocketReceiveResult>
	{
		return default(ValueTask<TWebSocketReceiveResult>);
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x61C1060", Offset = "0x61C0060", VA = "0x61C1060")]
	[AsyncStateMachine(typeof(_003CHandleReceivedCloseAsync_003Ed__62))]
	private Task HandleReceivedCloseAsync(MessageHeader header, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x61C1190", Offset = "0x61C0190", VA = "0x61C1190")]
	[AsyncStateMachine(typeof(_003CWaitForServerToCloseConnectionAsync_003Ed__63))]
	private Task WaitForServerToCloseConnectionAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x61C1280", Offset = "0x61C0280", VA = "0x61C1280")]
	[AsyncStateMachine(typeof(_003CHandleReceivedPingPongAsync_003Ed__64))]
	private Task HandleReceivedPingPongAsync(MessageHeader header, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x61C13B0", Offset = "0x61C03B0", VA = "0x61C13B0")]
	private static bool IsValidCloseStatus(WebSocketCloseStatus closeStatus)
	{
		return default(bool);
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x61C13F0", Offset = "0x61C03F0", VA = "0x61C13F0")]
	[AsyncStateMachine(typeof(_003CCloseWithReceiveErrorAndThrowAsync_003Ed__66))]
	private Task CloseWithReceiveErrorAndThrowAsync(WebSocketCloseStatus closeStatus, WebSocketError error, [Optional] Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x61C1500", Offset = "0x61C0500", VA = "0x61C1500")]
	private bool TryParseMessageHeaderFromReceiveBuffer(out MessageHeader resultHeader)
	{
		return default(bool);
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x61BF740", Offset = "0x61BE740", VA = "0x61BF740")]
	[AsyncStateMachine(typeof(_003CCloseAsyncPrivate_003Ed__68))]
	private Task CloseAsyncPrivate(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x61BF9B0", Offset = "0x61BE9B0", VA = "0x61BF9B0")]
	[AsyncStateMachine(typeof(_003CSendCloseFrameAsync_003Ed__69))]
	private Task SendCloseFrameAsync(WebSocketCloseStatus closeStatus, string closeStatusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x61C17C0", Offset = "0x61C07C0", VA = "0x61C17C0")]
	private void ConsumeFromBuffer(int count)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x61C1880", Offset = "0x61C0880", VA = "0x61C1880")]
	[AsyncStateMachine(typeof(_003CEnsureBufferContainsAsync_003Ed__71))]
	private Task EnsureBufferContainsAsync(int minimumRequiredBytes, CancellationToken cancellationToken, bool throwOnPrematureClosure = true)
	{
		return null;
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x61C1990", Offset = "0x61C0990", VA = "0x61C1990")]
	private void ThrowIfEOFUnexpected(bool throwOnPrematureClosure)
	{
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x61C0680", Offset = "0x61BF680", VA = "0x61C0680")]
	private void AllocateSendBuffer(int minLength)
	{
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x61C1A40", Offset = "0x61C0A40", VA = "0x61C1A40")]
	private void ReleaseSendBuffer()
	{
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x61C17D0", Offset = "0x61C07D0", VA = "0x61C17D0")]
	private static int CombineMaskBytes(Span<byte> buffer, int maskOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6001756")]
	[Address(RVA = "0x61C09E0", Offset = "0x61BF9E0", VA = "0x61C09E0")]
	private static int ApplyMask(Span<byte> toMask, byte[] mask, int maskOffset, int maskOffsetIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001757")]
	[Address(RVA = "0x61C1BE0", Offset = "0x61C0BE0", VA = "0x61C1BE0")]
	private static int ApplyMask(Span<byte> toMask, int mask, int maskIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001758")]
	[Address(RVA = "0x61BF3E0", Offset = "0x61BE3E0", VA = "0x61BF3E0")]
	private void ThrowIfOperationInProgress(bool operationCompleted, [Optional][CallerMemberName] string methodName)
	{
	}

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x61C1CE0", Offset = "0x61C0CE0", VA = "0x61C1CE0")]
	private void ThrowOperationInProgress(string methodName)
	{
	}

	[Token(Token = "0x600175A")]
	[Address(RVA = "0x61C04E0", Offset = "0x61BF4E0", VA = "0x61C04E0")]
	private static Exception CreateOperationCanceledException(Exception innerException, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x61C1D40", Offset = "0x61C0D40", VA = "0x61C1D40")]
	private static bool TryValidateUtf8(Span<byte> span, bool endOfMessage, Utf8MessageState state)
	{
		return default(bool);
	}

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x61C1F60", Offset = "0x61C0F60", VA = "0x61C1F60")]
	private Task ValidateAndReceiveAsync(Task receiveTask, byte[] buffer, CancellationToken cancellationToken)
	{
		return null;
	}
}
