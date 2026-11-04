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

[Token(Token = "0x20003A2")]
internal sealed class ManagedWebSocket : WebSocket
{
	[Token(Token = "0x20003A3")]
	private sealed class Utf8MessageState
	{
		[Token(Token = "0x4000FEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal bool SequenceInProgress;

		[Token(Token = "0x4000FEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		internal int AdditionalBytesExpected;

		[Token(Token = "0x4000FEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal int ExpectedValueMin;

		[Token(Token = "0x4000FED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		internal int CurrentDecodeBits;

		[Token(Token = "0x6001917")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Utf8MessageState()
		{
		}
	}

	[Token(Token = "0x20003A4")]
	private enum MessageOpcode : byte
	{
		[Token(Token = "0x4000FEF")]
		Continuation = 0,
		[Token(Token = "0x4000FF0")]
		Text = 1,
		[Token(Token = "0x4000FF1")]
		Binary = 2,
		[Token(Token = "0x4000FF2")]
		Close = 8,
		[Token(Token = "0x4000FF3")]
		Ping = 9,
		[Token(Token = "0x4000FF4")]
		Pong = 10
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003A5")]
	private struct MessageHeader
	{
		[Token(Token = "0x4000FF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal MessageOpcode Opcode;

		[Token(Token = "0x4000FF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		internal bool Fin;

		[Token(Token = "0x4000FF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal long PayloadLength;

		[Token(Token = "0x4000FF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal int Mask;
	}

	[Token(Token = "0x20003A6")]
	private interface IWebSocketReceiveResultGetter<TResult>
	{
		[Token(Token = "0x6001918")]
		TResult GetResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeDescription);
	}

	[Token(Token = "0x20003A7")]
	private readonly struct WebSocketReceiveResultGetter : IWebSocketReceiveResultGetter<WebSocketReceiveResult>
	{
		[Token(Token = "0x6001919")]
		[Address(RVA = "0x28288C0", Offset = "0x2826EC0", VA = "0x1828288C0", Slot = "4")]
		public WebSocketReceiveResult GetResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeDescription)
		{
			return null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003A9")]
	[CompilerGenerated]
	private struct _003CWaitForWriteTaskAsync_003Ed__55 : IAsyncStateMachine
	{
		[Token(Token = "0x4000FFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001000")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001001")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ValueTask writeTask;

		[Token(Token = "0x4001002")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4001003")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001921")]
		[Address(RVA = "0x2826CB0", Offset = "0x28252B0", VA = "0x182826CB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001922")]
		[Address(RVA = "0x28270D0", Offset = "0x28256D0", VA = "0x1828270D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003AA")]
	[CompilerGenerated]
	private struct _003CSendFrameFallbackAsync_003Ed__56 : IAsyncStateMachine
	{
		[Token(Token = "0x4001004")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001005")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001006")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4001007")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MessageOpcode opcode;

		[Token(Token = "0x4001008")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool endOfMessage;

		[Token(Token = "0x4001009")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ReadOnlyMemory<byte> payloadBuffer;

		[Token(Token = "0x400100A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400100B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400100C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private CancellationTokenRegistration _003C_003E7__wrap1;

		[Token(Token = "0x400100D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001923")]
		[Address(RVA = "0x2822650", Offset = "0x2820C50", VA = "0x182822650", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001924")]
		[Address(RVA = "0x2822F70", Offset = "0x2821570", VA = "0x182822F70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003AC")]
	[CompilerGenerated]
	private struct _003CReceiveAsyncPrivate_003Ed__61<TWebSocketReceiveResultGetter, TWebSocketReceiveResult> : IAsyncStateMachine where TWebSocketReceiveResultGetter : struct, IWebSocketReceiveResultGetter<TWebSocketReceiveResult>
	{
		[Token(Token = "0x4001010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncValueTaskMethodBuilder<TWebSocketReceiveResult> _003C_003Et__builder;

		[Token(Token = "0x4001012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4001014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TWebSocketReceiveResultGetter resultGetter;

		[Token(Token = "0x4001015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Memory<byte> payloadBuffer;

		[Token(Token = "0x4001016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration _003Cregistration_003E5__2;

		[Token(Token = "0x4001017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private MessageHeader _003Cheader_003E5__3;

		[Token(Token = "0x4001018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CtotalBytesReceived_003E5__4;

		[Token(Token = "0x4001019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400101A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001928")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001929")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003AD")]
	[CompilerGenerated]
	private struct _003CHandleReceivedCloseAsync_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x400101B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400101C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400101D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x400101E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MessageHeader header;

		[Token(Token = "0x400101F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private WebSocketCloseStatus _003CcloseStatus_003E5__2;

		[Token(Token = "0x4001021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private string _003CcloseStatusDescription_003E5__3;

		[Token(Token = "0x4001022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600192A")]
		[Address(RVA = "0x281FCD0", Offset = "0x281E2D0", VA = "0x18281FCD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600192B")]
		[Address(RVA = "0x28206F0", Offset = "0x281ECF0", VA = "0x1828206F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003AE")]
	[CompilerGenerated]
	private struct _003CWaitForServerToCloseConnectionAsync_003Ed__63 : IAsyncStateMachine
	{
		[Token(Token = "0x4001023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4001026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenSource _003CfinalCts_003E5__2;

		[Token(Token = "0x4001028")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private CancellationTokenRegistration _003C_003E7__wrap2;

		[Token(Token = "0x4001029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600192C")]
		[Address(RVA = "0x28264D0", Offset = "0x2824AD0", VA = "0x1828264D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600192D")]
		[Address(RVA = "0x2826C50", Offset = "0x2825250", VA = "0x182826C50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003AF")]
	[CompilerGenerated]
	private struct _003CHandleReceivedPingPongAsync_003Ed__64 : IAsyncStateMachine
	{
		[Token(Token = "0x400102A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400102B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400102C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MessageHeader header;

		[Token(Token = "0x400102D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x400102E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400102F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001030")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600192E")]
		[Address(RVA = "0x2820750", Offset = "0x281ED50", VA = "0x182820750", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600192F")]
		[Address(RVA = "0x2820CD0", Offset = "0x281F2D0", VA = "0x182820CD0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B0")]
	[CompilerGenerated]
	private struct _003CCloseWithReceiveErrorAndThrowAsync_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x4001031")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001032")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001033")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4001034")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4001035")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public WebSocketError error;

		[Token(Token = "0x4001036")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Exception innerException;

		[Token(Token = "0x4001037")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001930")]
		[Address(RVA = "0x281D250", Offset = "0x281B850", VA = "0x18281D250", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001931")]
		[Address(RVA = "0x281D450", Offset = "0x281BA50", VA = "0x18281D450", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B1")]
	[CompilerGenerated]
	private struct _003CCloseAsyncPrivate_003Ed__68 : IAsyncStateMachine
	{
		[Token(Token = "0x4001038")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001039")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400103A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x400103B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x400103C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string statusDescription;

		[Token(Token = "0x400103D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400103E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003CcloseBuffer_003E5__2;

		[Token(Token = "0x400103F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001932")]
		[Address(RVA = "0x281CAE0", Offset = "0x281B0E0", VA = "0x18281CAE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001933")]
		[Address(RVA = "0x281D1F0", Offset = "0x281B7F0", VA = "0x18281D1F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B2")]
	[CompilerGenerated]
	private struct _003CSendCloseFrameAsync_003Ed__69 : IAsyncStateMachine
	{
		[Token(Token = "0x4001040")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001041")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001042")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string closeStatusDescription;

		[Token(Token = "0x4001043")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketCloseStatus closeStatus;

		[Token(Token = "0x4001044")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x4001045")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001046")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__2;

		[Token(Token = "0x4001047")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001048")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001934")]
		[Address(RVA = "0x2821CF0", Offset = "0x28202F0", VA = "0x182821CF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001935")]
		[Address(RVA = "0x28225F0", Offset = "0x2820BF0", VA = "0x1828225F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B3")]
	[CompilerGenerated]
	private struct _003CEnsureBufferContainsAsync_003Ed__71 : IAsyncStateMachine
	{
		[Token(Token = "0x4001049")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400104A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400104B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ManagedWebSocket _003C_003E4__this;

		[Token(Token = "0x400104C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int minimumRequiredBytes;

		[Token(Token = "0x400104D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400104E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool throwOnPrematureClosure;

		[Token(Token = "0x400104F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001936")]
		[Address(RVA = "0x281F6F0", Offset = "0x281DCF0", VA = "0x18281F6F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001937")]
		[Address(RVA = "0x281FC70", Offset = "0x281E270", VA = "0x18281FC70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000FCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly RandomNumberGenerator s_random;

	[Token(Token = "0x4000FCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly UTF8Encoding s_textEncoding;

	[Token(Token = "0x4000FD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly WebSocketState[] s_validSendStates;

	[Token(Token = "0x4000FD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly WebSocketState[] s_validReceiveStates;

	[Token(Token = "0x4000FD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly WebSocketState[] s_validCloseOutputStates;

	[Token(Token = "0x4000FD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly WebSocketState[] s_validCloseStates;

	[Token(Token = "0x4000FD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly Task<WebSocketReceiveResult> s_cachedCloseTask;

	[Token(Token = "0x4000FD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Stream _stream;

	[Token(Token = "0x4000FD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly bool _isServer;

	[Token(Token = "0x4000FD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _subprotocol;

	[Token(Token = "0x4000FD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Timer _keepAliveTimer;

	[Token(Token = "0x4000FD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly CancellationTokenSource _abortSource;

	[Token(Token = "0x4000FDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Memory<byte> _receiveBuffer;

	[Token(Token = "0x4000FDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Utf8MessageState _utf8TextState;

	[Token(Token = "0x4000FDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly SemaphoreSlim _sendFrameAsyncLock;

	[Token(Token = "0x4000FDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebSocketState _state;

	[Token(Token = "0x4000FDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private bool _disposed;

	[Token(Token = "0x4000FDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5D")]
	private bool _sentCloseFrame;

	[Token(Token = "0x4000FE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5E")]
	private bool _receivedCloseFrame;

	[Token(Token = "0x4000FE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private WebSocketCloseStatus? _closeStatus;

	[Token(Token = "0x4000FE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string _closeStatusDescription;

	[Token(Token = "0x4000FE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private MessageHeader _lastReceiveHeader;

	[Token(Token = "0x4000FE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _receiveBufferOffset;

	[Token(Token = "0x4000FE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _receiveBufferCount;

	[Token(Token = "0x4000FE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _receivedMaskOffsetOffset;

	[Token(Token = "0x4000FE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private byte[] _sendBuffer;

	[Token(Token = "0x4000FE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool _lastSendWasFragment;

	[Token(Token = "0x4000FE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Task _lastReceiveAsync;

	[Token(Token = "0x17000552")]
	private object StateUpdateLock
	{
		[Token(Token = "0x60018EB")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000553")]
	private object ReceiveAsyncLock
	{
		[Token(Token = "0x60018EC")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000554")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x60018F0")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000555")]
	public override WebSocketState State
	{
		[Token(Token = "0x60018F1")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x28155C0", Offset = "0x2813BC0", VA = "0x1828155C0")]
	public static ManagedWebSocket CreateFromConnectedStream(Stream stream, bool isServer, string subprotocol, TimeSpan keepAliveInterval)
	{
		return null;
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x28185C0", Offset = "0x2816BC0", VA = "0x1828185C0")]
	private ManagedWebSocket(Stream stream, bool isServer, string subprotocol, TimeSpan keepAliveInterval)
	{
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x2815740", Offset = "0x2813D40", VA = "0x182815740", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x28156F0", Offset = "0x2813CF0", VA = "0x1828156F0")]
	private void DisposeCore()
	{
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x2815F50", Offset = "0x2814550", VA = "0x182815F50", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x2816F80", Offset = "0x2815580", VA = "0x182816F80")]
	private ValueTask SendPrivateAsync(ReadOnlyMemory<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x2815BB0", Offset = "0x28141B0", VA = "0x182815BB0", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x2815120", Offset = "0x2813720", VA = "0x182815120", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x28152F0", Offset = "0x28138F0", VA = "0x1828152F0", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x2814D80", Offset = "0x2813380", VA = "0x182814D80", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x2816320", Offset = "0x2814920", VA = "0x182816320")]
	private ValueTask SendFrameAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x2816660", Offset = "0x2814C60", VA = "0x182816660")]
	private ValueTask SendFrameLockAcquiredNonCancelableAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x2817BE0", Offset = "0x28161E0", VA = "0x182817BE0")]
	[AsyncStateMachine(typeof(_003CWaitForWriteTaskAsync_003Ed__55))]
	private Task WaitForWriteTaskAsync(ValueTask writeTask)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x2816540", Offset = "0x2814B40", VA = "0x182816540")]
	[AsyncStateMachine(typeof(_003CSendFrameFallbackAsync_003Ed__56))]
	private Task SendFrameFallbackAsync(MessageOpcode opcode, bool endOfMessage, ReadOnlyMemory<byte> payloadBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x2817CF0", Offset = "0x28162F0", VA = "0x182817CF0")]
	private int WriteFrameToSendBuffer(MessageOpcode opcode, bool endOfMessage, ReadOnlySpan<byte> payloadBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x2816BA0", Offset = "0x28151A0", VA = "0x182816BA0")]
	private void SendKeepAliveFrameAsync()
	{
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x2818060", Offset = "0x2816660", VA = "0x182818060")]
	private static int WriteHeader(MessageOpcode opcode, byte[] sendBuffer, ReadOnlySpan<byte> payload, bool endOfMessage, bool useMask)
	{
		return default(int);
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x2818220", Offset = "0x2816820", VA = "0x182818220")]
	private static void WriteRandomMask(byte[] buffer, int offset)
	{
	}

	[Token(Token = "0x6001900")]
	[AsyncStateMachine(typeof(_003CReceiveAsyncPrivate_003Ed__61<, >))]
	private ValueTask<TWebSocketReceiveResult> ReceiveAsyncPrivate<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>(Memory<byte> payloadBuffer, CancellationToken cancellationToken, [Optional] TWebSocketReceiveResultGetter resultGetter) where TWebSocketReceiveResultGetter : struct, IWebSocketReceiveResultGetter<TWebSocketReceiveResult>
	{
		return default(ValueTask<TWebSocketReceiveResult>);
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x2815910", Offset = "0x2813F10", VA = "0x182815910")]
	[AsyncStateMachine(typeof(_003CHandleReceivedCloseAsync_003Ed__62))]
	private Task HandleReceivedCloseAsync(MessageHeader header, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x2817AE0", Offset = "0x28160E0", VA = "0x182817AE0")]
	[AsyncStateMachine(typeof(_003CWaitForServerToCloseConnectionAsync_003Ed__63))]
	private Task WaitForServerToCloseConnectionAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x2815A40", Offset = "0x2814040", VA = "0x182815A40")]
	[AsyncStateMachine(typeof(_003CHandleReceivedPingPongAsync_003Ed__64))]
	private Task HandleReceivedPingPongAsync(MessageHeader header, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x2815B70", Offset = "0x2814170", VA = "0x182815B70")]
	private static bool IsValidCloseStatus(WebSocketCloseStatus closeStatus)
	{
		return default(bool);
	}

	[Token(Token = "0x6001905")]
	[Address(RVA = "0x28153E0", Offset = "0x28139E0", VA = "0x1828153E0")]
	[AsyncStateMachine(typeof(_003CCloseWithReceiveErrorAndThrowAsync_003Ed__66))]
	private Task CloseWithReceiveErrorAndThrowAsync(WebSocketCloseStatus closeStatus, WebSocketError error, [Optional] Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6001906")]
	[Address(RVA = "0x2817400", Offset = "0x2815A00", VA = "0x182817400")]
	private bool TryParseMessageHeaderFromReceiveBuffer(out MessageHeader resultHeader)
	{
		return default(bool);
	}

	[Token(Token = "0x6001907")]
	[Address(RVA = "0x2815000", Offset = "0x2813600", VA = "0x182815000")]
	[AsyncStateMachine(typeof(_003CCloseAsyncPrivate_003Ed__68))]
	private Task CloseAsyncPrivate(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x2816200", Offset = "0x2814800", VA = "0x182816200")]
	[AsyncStateMachine(typeof(_003CSendCloseFrameAsync_003Ed__69))]
	private Task SendCloseFrameAsync(WebSocketCloseStatus closeStatus, string closeStatusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x28155B0", Offset = "0x2813BB0", VA = "0x1828155B0")]
	private void ConsumeFromBuffer(int count)
	{
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x2815800", Offset = "0x2813E00", VA = "0x182815800")]
	[AsyncStateMachine(typeof(_003CEnsureBufferContainsAsync_003Ed__71))]
	private Task EnsureBufferContainsAsync(int minimumRequiredBytes, CancellationToken cancellationToken, bool throwOnPrematureClosure = true)
	{
		return null;
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x28172B0", Offset = "0x28158B0", VA = "0x1828172B0")]
	private void ThrowIfEOFUnexpected(bool throwOnPrematureClosure)
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x2814DC0", Offset = "0x28133C0", VA = "0x182814DC0")]
	private void AllocateSendBuffer(int minLength)
	{
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x2815EA0", Offset = "0x28144A0", VA = "0x182815EA0")]
	private void ReleaseSendBuffer()
	{
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x28154F0", Offset = "0x2813AF0", VA = "0x1828154F0")]
	private static int CombineMaskBytes(Span<byte> buffer, int maskOffset)
	{
		return default(int);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x2814E60", Offset = "0x2813460", VA = "0x182814E60")]
	private static int ApplyMask(Span<byte> toMask, byte[] mask, int maskOffset, int maskOffsetIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x2814F10", Offset = "0x2813510", VA = "0x182814F10")]
	private static int ApplyMask(Span<byte> toMask, int mask, int maskIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x2817350", Offset = "0x2815950", VA = "0x182817350")]
	private void ThrowIfOperationInProgress(bool operationCompleted, [Optional][CallerMemberName] string methodName)
	{
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x2817390", Offset = "0x2815990", VA = "0x182817390")]
	private void ThrowOperationInProgress(string methodName)
	{
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x2815630", Offset = "0x2813C30", VA = "0x182815630")]
	private static Exception CreateOperationCanceledException(Exception innerException, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x2817770", Offset = "0x2815D70", VA = "0x182817770")]
	private static bool TryValidateUtf8(Span<byte> span, bool endOfMessage, Utf8MessageState state)
	{
		return default(bool);
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x2817940", Offset = "0x2815F40", VA = "0x182817940")]
	private Task ValidateAndReceiveAsync(Task receiveTask, byte[] buffer, CancellationToken cancellationToken)
	{
		return null;
	}
}
