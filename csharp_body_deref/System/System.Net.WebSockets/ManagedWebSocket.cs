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

[Token(Token = "0x200020A")]
internal sealed class ManagedWebSocket : WebSocket
{
	[Token(Token = "0x200020B")]
	private sealed class Utf8MessageState
	{
		[Token(Token = "0x4000B97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal bool SequenceInProgress;

		[Token(Token = "0x4000B98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		internal int AdditionalBytesExpected;

		[Token(Token = "0x4000B99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal int ExpectedValueMin;

		[Token(Token = "0x4000B9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		internal int CurrentDecodeBits;

		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x4695020", Offset = "0x4695020", VA = "0x4695020")]
		public Utf8MessageState()
		{
		}
	}

	[Token(Token = "0x200020C")]
	private enum MessageOpcode : byte
	{
		[Token(Token = "0x4000B9C")]
		Continuation = 0,
		[Token(Token = "0x4000B9D")]
		Text = 1,
		[Token(Token = "0x4000B9E")]
		Binary = 2,
		[Token(Token = "0x4000B9F")]
		Close = 8,
		[Token(Token = "0x4000BA0")]
		Ping = 9,
		[Token(Token = "0x4000BA1")]
		Pong = 10
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200020D")]
	private struct MessageHeader
	{
		[Token(Token = "0x4000BA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal MessageOpcode Opcode;

		[Token(Token = "0x4000BA3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		internal bool Fin;

		[Token(Token = "0x4000BA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal long PayloadLength;

		[Token(Token = "0x4000BA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal int Mask;
	}

	[Token(Token = "0x200020E")]
	private interface IWebSocketReceiveResultGetter<TResult>
	{
		[Token(Token = "0x6000D39")]
		TResult GetResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeDescription);
	}

	[Token(Token = "0x200020F")]
	private readonly struct WebSocketReceiveResultGetter : IWebSocketReceiveResultGetter<WebSocketReceiveResult>
	{
		[Token(Token = "0x6000D3A")]
		[Address(RVA = "0x4698F70", Offset = "0x4698F70", VA = "0x4698F70", Slot = "4")]
		public WebSocketReceiveResult GetResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeDescription)
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000211")]
	[CompilerGenerated]
	private struct _003CWaitForWriteTaskAsync_003Ed__55 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ValueTask writeTask;

		[Token(Token = "0x4000BAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x4699350", Offset = "0x4699350", VA = "0x4699350", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x4699A20", Offset = "0x4699A20", VA = "0x4699A20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000212")]
	[CompilerGenerated]
	private struct _003CSendFrameFallbackAsync_003Ed__56 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MessageOpcode opcode;

		[Token(Token = "0x4000BB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool endOfMessage;

		[Token(Token = "0x4000BB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ReadOnlyMemory<byte> payloadBuffer;

		[Token(Token = "0x4000BB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000BB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private CancellationTokenRegistration _003C_003E7__wrap1;

		[Token(Token = "0x4000BBA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x4699A80", Offset = "0x4699A80", VA = "0x4699A80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x469A500", Offset = "0x469A500", VA = "0x469A500", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000214")]
	[CompilerGenerated]
	private struct _003CReceiveAsyncPrivate_003Ed__61<TWebSocketReceiveResultGetter, TWebSocketReceiveResult> : IAsyncStateMachine where TWebSocketReceiveResultGetter : struct, IWebSocketReceiveResultGetter<TWebSocketReceiveResult>
	{
		[Token(Token = "0x4000BBD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BBE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncValueTaskMethodBuilder<TWebSocketReceiveResult> _003C_003Et__builder;

		[Token(Token = "0x4000BBF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TWebSocketReceiveResultGetter resultGetter;

		[Token(Token = "0x4000BC2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Memory<byte> payloadBuffer;

		[Token(Token = "0x4000BC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration _003Cregistration_003E5__2;

		[Token(Token = "0x4000BC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private MessageHeader _003Cheader_003E5__3;

		[Token(Token = "0x4000BC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CtotalBytesReceived_003E5__4;

		[Token(Token = "0x4000BC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000BC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000D49")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D4A")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000215")]
	[CompilerGenerated]
	private struct _003CHandleReceivedCloseAsync_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BC9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BCA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BCB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MessageHeader header;

		[Token(Token = "0x4000BCC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BCD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private WebSocketCloseStatus _003CcloseStatus_003E5__2;

		[Token(Token = "0x4000BCE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private string _003CcloseStatusDescription_003E5__3;

		[Token(Token = "0x4000BCF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x469A560", Offset = "0x469A560", VA = "0x469A560", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x469B0E0", Offset = "0x469B0E0", VA = "0x469B0E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000216")]
	[CompilerGenerated]
	private struct _003CWaitForServerToCloseConnectionAsync_003Ed__63 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenSource _003CfinalCts_003E5__2;

		[Token(Token = "0x4000BD5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private CancellationTokenRegistration _003C_003E7__wrap2;

		[Token(Token = "0x4000BD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x469B140", Offset = "0x469B140", VA = "0x469B140", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x469B9B0", Offset = "0x469B9B0", VA = "0x469B9B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000217")]
	[CompilerGenerated]
	private struct _003CHandleReceivedPingPongAsync_003Ed__64 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BD8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BD9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MessageHeader header;

		[Token(Token = "0x4000BDA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BDB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BDC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000BDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x469BA10", Offset = "0x469BA10", VA = "0x469BA10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x469C1B0", Offset = "0x469C1B0", VA = "0x469C1B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000218")]
	[CompilerGenerated]
	private struct _003CCloseWithReceiveErrorAndThrowAsync_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BDE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4000BE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public WebSocketError error;

		[Token(Token = "0x4000BE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Exception innerException;

		[Token(Token = "0x4000BE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x469C210", Offset = "0x469C210", VA = "0x469C210", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x469C4D0", Offset = "0x469C4D0", VA = "0x469C4D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000219")]
	[CompilerGenerated]
	private struct _003CCloseAsyncPrivate_003Ed__68 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4000BE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string statusDescription;

		[Token(Token = "0x4000BEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003CcloseBuffer_003E5__2;

		[Token(Token = "0x4000BEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x469C530", Offset = "0x469C530", VA = "0x469C530", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x469CCB0", Offset = "0x469CCB0", VA = "0x469CCB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200021A")]
	[CompilerGenerated]
	private struct _003CSendCloseFrameAsync_003Ed__69 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string closeStatusDescription;

		[Token(Token = "0x4000BF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4000BF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__2;

		[Token(Token = "0x4000BF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000BF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x469CD10", Offset = "0x469CD10", VA = "0x469CD10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x469D990", Offset = "0x469D990", VA = "0x469D990", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200021B")]
	[CompilerGenerated]
	private struct _003CEnsureBufferContainsAsync_003Ed__71 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4000BF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int minimumRequiredBytes;

		[Token(Token = "0x4000BFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool throwOnPrematureClosure;

		[Token(Token = "0x4000BFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x469D9F0", Offset = "0x469D9F0", VA = "0x469D9F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x469E050", Offset = "0x469E050", VA = "0x469E050", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000B7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly RandomNumberGenerator s_random;

	[Token(Token = "0x4000B7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly UTF8Encoding s_textEncoding;

	[Token(Token = "0x4000B7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly WebSocketState[] s_validSendStates;

	[Token(Token = "0x4000B7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly WebSocketState[] s_validReceiveStates;

	[Token(Token = "0x4000B7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly WebSocketState[] s_validCloseOutputStates;

	[Token(Token = "0x4000B80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly WebSocketState[] s_validCloseStates;

	[Token(Token = "0x4000B81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly Task<WebSocketReceiveResult> s_cachedCloseTask;

	[Token(Token = "0x4000B82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Stream _stream;

	[Token(Token = "0x4000B83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly bool _isServer;

	[Token(Token = "0x4000B84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _subprotocol;

	[Token(Token = "0x4000B85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Timer _keepAliveTimer;

	[Token(Token = "0x4000B86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly CancellationTokenSource _abortSource;

	[Token(Token = "0x4000B87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Memory<byte> _receiveBuffer;

	[Token(Token = "0x4000B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Utf8MessageState _utf8TextState;

	[Token(Token = "0x4000B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly SemaphoreSlim _sendFrameAsyncLock;

	[Token(Token = "0x4000B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebSocketState _state;

	[Token(Token = "0x4000B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private bool _disposed;

	[Token(Token = "0x4000B8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5D")]
	private bool _sentCloseFrame;

	[Token(Token = "0x4000B8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5E")]
	private bool _receivedCloseFrame;

	[Token(Token = "0x4000B8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private WebSocketCloseStatus? _closeStatus;

	[Token(Token = "0x4000B8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string _closeStatusDescription;

	[Token(Token = "0x4000B90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private MessageHeader _lastReceiveHeader;

	[Token(Token = "0x4000B91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _receiveBufferOffset;

	[Token(Token = "0x4000B92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _receiveBufferCount;

	[Token(Token = "0x4000B93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _receivedMaskOffsetOffset;

	[Token(Token = "0x4000B94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private byte[] _sendBuffer;

	[Token(Token = "0x4000B95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool _lastSendWasFragment;

	[Token(Token = "0x4000B96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Task _lastReceiveAsync;

	[Token(Token = "0x170002FB")]
	private object StateUpdateLock
	{
		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x4695000", Offset = "0x4695000", VA = "0x4695000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	private object ReceiveAsyncLock
	{
		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x4695010", Offset = "0x4695010", VA = "0x4695010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FD")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x4695180", Offset = "0x4695180", VA = "0x4695180", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	public override WebSocketState State
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x4695190", Offset = "0x4695190", VA = "0x4695190", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x4694AC0", Offset = "0x4694AC0", VA = "0x4694AC0")]
	public static ManagedWebSocket CreateFromConnectedStream(Stream stream, bool isServer, string subprotocol, TimeSpan keepAliveInterval)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x4694B30", Offset = "0x4694B30", VA = "0x4694B30")]
	private ManagedWebSocket(Stream stream, bool isServer, string subprotocol, TimeSpan keepAliveInterval)
	{
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4695040", Offset = "0x4695040", VA = "0x4695040", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x4695140", Offset = "0x4695140", VA = "0x4695140")]
	private void DisposeCore()
	{
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x46951A0", Offset = "0x46951A0", VA = "0x46951A0", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x46955F0", Offset = "0x46955F0", VA = "0x46955F0")]
	private ValueTask SendPrivateAsync(ReadOnlyMemory<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x4695BD0", Offset = "0x4695BD0", VA = "0x4695BD0", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x4695F50", Offset = "0x4695F50", VA = "0x4695F50", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x4696360", Offset = "0x4696360", VA = "0x4696360", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x46965F0", Offset = "0x46965F0", VA = "0x46965F0", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x4695AC0", Offset = "0x4695AC0", VA = "0x4695AC0")]
	private ValueTask SendFrameAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4696620", Offset = "0x4696620", VA = "0x4696620")]
	private ValueTask SendFrameLockAcquiredNonCancelableAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x4697090", Offset = "0x4697090", VA = "0x4697090")]
	[AsyncStateMachine(typeof(_003CWaitForWriteTaskAsync_003Ed__55))]
	private Task WaitForWriteTaskAsync(ValueTask writeTask)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x4696BB0", Offset = "0x4696BB0", VA = "0x4696BB0")]
	[AsyncStateMachine(typeof(_003CSendFrameFallbackAsync_003Ed__56))]
	private Task SendFrameFallbackAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x4696D00", Offset = "0x4696D00", VA = "0x4696D00")]
	private int WriteFrameToSendBuffer(MessageOpcode opcode, bool endOfMessage, ReadOnlySpan<byte> payloadBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x4697590", Offset = "0x4697590", VA = "0x4697590")]
	private void SendKeepAliveFrameAsync()
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4697330", Offset = "0x4697330", VA = "0x4697330")]
	private static int WriteHeader(MessageOpcode opcode, byte[] sendBuffer, ReadOnlySpan<byte> payload, bool endOfMessage, bool useMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4697B00", Offset = "0x4697B00", VA = "0x4697B00")]
	private static void WriteRandomMask(byte[] buffer, int offset)
	{
	}

	[Token(Token = "0x6000D21")]
	[AsyncStateMachine(typeof(_003CReceiveAsyncPrivate_003Ed__61<, >))]
	private ValueTask<TWebSocketReceiveResult> ReceiveAsyncPrivate<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>(Memory<byte> payloadBuffer, CancellationToken cancellationToken, [Optional] TWebSocketReceiveResultGetter resultGetter) where TWebSocketReceiveResultGetter : struct, IWebSocketReceiveResultGetter<TWebSocketReceiveResult>
	{
		return default(ValueTask<TWebSocketReceiveResult>);
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4697BA0", Offset = "0x4697BA0", VA = "0x4697BA0")]
	[AsyncStateMachine(typeof(_003CHandleReceivedCloseAsync_003Ed__62))]
	private Task HandleReceivedCloseAsync(MessageHeader header, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4697CE0", Offset = "0x4697CE0", VA = "0x4697CE0")]
	[AsyncStateMachine(typeof(_003CWaitForServerToCloseConnectionAsync_003Ed__63))]
	private Task WaitForServerToCloseConnectionAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4697DF0", Offset = "0x4697DF0", VA = "0x4697DF0")]
	[AsyncStateMachine(typeof(_003CHandleReceivedPingPongAsync_003Ed__64))]
	private Task HandleReceivedPingPongAsync(MessageHeader header, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4697F30", Offset = "0x4697F30", VA = "0x4697F30")]
	private static bool IsValidCloseStatus(WebSocketCloseStatus closeStatus)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4697F70", Offset = "0x4697F70", VA = "0x4697F70")]
	[AsyncStateMachine(typeof(_003CCloseWithReceiveErrorAndThrowAsync_003Ed__66))]
	private Task CloseWithReceiveErrorAndThrowAsync(WebSocketCloseStatus closeStatus, WebSocketError error, [Optional] Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4698090", Offset = "0x4698090", VA = "0x4698090")]
	private bool TryParseMessageHeaderFromReceiveBuffer(out MessageHeader resultHeader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x4696230", Offset = "0x4696230", VA = "0x4696230")]
	[AsyncStateMachine(typeof(_003CCloseAsyncPrivate_003Ed__68))]
	private Task CloseAsyncPrivate(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x46964B0", Offset = "0x46964B0", VA = "0x46964B0")]
	[AsyncStateMachine(typeof(_003CSendCloseFrameAsync_003Ed__69))]
	private Task SendCloseFrameAsync(WebSocketCloseStatus closeStatus, string closeStatusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4698360", Offset = "0x4698360", VA = "0x4698360")]
	private void ConsumeFromBuffer(int count)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4698400", Offset = "0x4698400", VA = "0x4698400")]
	[AsyncStateMachine(typeof(_003CEnsureBufferContainsAsync_003Ed__71))]
	private Task EnsureBufferContainsAsync(int minimumRequiredBytes, CancellationToken cancellationToken, bool throwOnPrematureClosure = true)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4698520", Offset = "0x4698520", VA = "0x4698520")]
	private void ThrowIfEOFUnexpected(bool throwOnPrematureClosure)
	{
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x46971A0", Offset = "0x46971A0", VA = "0x46971A0")]
	private void AllocateSendBuffer(int minLength)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x46985D0", Offset = "0x46985D0", VA = "0x46985D0")]
	private void ReleaseSendBuffer()
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4698370", Offset = "0x4698370", VA = "0x4698370")]
	private static int CombineMaskBytes(Span<byte> buffer, int maskOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x46974F0", Offset = "0x46974F0", VA = "0x46974F0")]
	private static int ApplyMask(Span<byte> toMask, byte[] mask, int maskOffset, int maskOffsetIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x4698770", Offset = "0x4698770", VA = "0x4698770")]
	private static int ApplyMask(Span<byte> toMask, int mask, int maskIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4695F20", Offset = "0x4695F20", VA = "0x4695F20")]
	private void ThrowIfOperationInProgress(bool operationCompleted, [Optional][CallerMemberName] string methodName)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x46988C0", Offset = "0x46988C0", VA = "0x46988C0")]
	private void ThrowOperationInProgress(string methodName)
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x4696FF0", Offset = "0x4696FF0", VA = "0x4696FF0")]
	private static Exception CreateOperationCanceledException(Exception innerException, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4698920", Offset = "0x4698920", VA = "0x4698920")]
	private static bool TryValidateUtf8(Span<byte> span, bool endOfMessage, Utf8MessageState state)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x4698B30", Offset = "0x4698B30", VA = "0x4698B30")]
	private Task ValidateAndReceiveAsync(Task receiveTask, byte[] buffer, CancellationToken cancellationToken)
	{
		return null;
	}
}
