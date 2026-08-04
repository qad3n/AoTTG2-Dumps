// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebResponseStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001CF")]
internal class WebResponseStream : WebConnectionStream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001D0")]
	[CompilerGenerated]
	private struct _003CReadAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000998")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000999")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x400099A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400099B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x400099C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x400099D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x400099E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x400099F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x40009A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cnbytes_003E5__3;

		[Token(Token = "0x40009A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Exception _003CthrowMe_003E5__4;

		[Token(Token = "0x40009A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40009A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x49A1830", Offset = "0x49A1830", VA = "0x49A1830", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x49A2340", Offset = "0x49A2340", VA = "0x49A2340", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001D2")]
	[CompilerGenerated]
	private struct _003CReadAllAsyncInner_003Ed__47 : IAsyncStateMachine
	{
		[Token(Token = "0x40009A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40009A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<byte[]> _003C_003Et__builder;

		[Token(Token = "0x40009AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40009AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x40009AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private long _003CmaximumSize_003E5__2;

		[Token(Token = "0x40009AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private MemoryStream _003Cms_003E5__3;

		[Token(Token = "0x40009AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__4;

		[Token(Token = "0x40009AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x49A24C0", Offset = "0x49A24C0", VA = "0x49A24C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x49A2B00", Offset = "0x49A2B00", VA = "0x49A2B00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001D3")]
	[CompilerGenerated]
	private struct _003CReadAllAsync_003Ed__48 : IAsyncStateMachine
	{
		[Token(Token = "0x40009B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40009B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40009B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x40009B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40009B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool resending;

		[Token(Token = "0x40009B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x40009B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003CtimeoutCts_003E5__3;

		[Token(Token = "0x40009B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Task _003CtimeoutTask_003E5__4;

		[Token(Token = "0x40009B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40009B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<byte[]>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x49A2B70", Offset = "0x49A2B70", VA = "0x49A2B70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x49A38B0", Offset = "0x49A38B0", VA = "0x49A38B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001D4")]
	[CompilerGenerated]
	private struct _003CInitReadAsync_003Ed__52 : IAsyncStateMachine
	{
		[Token(Token = "0x40009BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40009BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40009BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x40009BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40009BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private BufferOffsetSize _003Cbuffer_003E5__2;

		[Token(Token = "0x40009BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ReadState _003Cstate_003E5__3;

		[Token(Token = "0x40009C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		private int _003Cposition_003E5__4;

		[Token(Token = "0x40009C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B92")]
		[Address(RVA = "0x49A3910", Offset = "0x49A3910", VA = "0x49A3910", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x49A40C0", Offset = "0x49A40C0", VA = "0x49A40C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400098A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebReadStream innerStream;

	[Token(Token = "0x400098B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool nextReadCalled;

	[Token(Token = "0x400098C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool bufferedEntireContent;

	[Token(Token = "0x400098D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebCompletionSource pendingRead;

	[Token(Token = "0x400098E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object locker;

	[Token(Token = "0x400098F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int nestedRead;

	[Token(Token = "0x4000990")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool read_eof;

	[Token(Token = "0x170002AC")]
	public WebRequestStream RequestStream
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x499FBC0", Offset = "0x499FBC0", VA = "0x499FBC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AD")]
	public WebHeaderCollection Headers
	{
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x499FBD0", Offset = "0x499FBD0", VA = "0x499FBD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x499FBE0", Offset = "0x499FBE0", VA = "0x499FBE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002AE")]
	public HttpStatusCode StatusCode
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x499FC00", Offset = "0x499FC00", VA = "0x499FC00")]
		[CompilerGenerated]
		get
		{
			return default(HttpStatusCode);
		}
		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x499FC10", Offset = "0x499FC10", VA = "0x499FC10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public string StatusDescription
	{
		[Token(Token = "0x6000B71")]
		[Address(RVA = "0x499FC20", Offset = "0x499FC20", VA = "0x499FC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B72")]
		[Address(RVA = "0x499FC30", Offset = "0x499FC30", VA = "0x499FC30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public Version Version
	{
		[Token(Token = "0x6000B73")]
		[Address(RVA = "0x499FC50", Offset = "0x499FC50", VA = "0x499FC50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B74")]
		[Address(RVA = "0x499FC60", Offset = "0x499FC60", VA = "0x499FC60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002B1")]
	public bool KeepAlive
	{
		[Token(Token = "0x6000B75")]
		[Address(RVA = "0x499FC80", Offset = "0x499FC80", VA = "0x499FC80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B76")]
		[Address(RVA = "0x499FC90", Offset = "0x499FC90", VA = "0x499FC90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002B2")]
	public override bool CanRead
	{
		[Token(Token = "0x6000B78")]
		[Address(RVA = "0x499FCA0", Offset = "0x499FCA0", VA = "0x499FCA0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x499FCB0", Offset = "0x499FCB0", VA = "0x499FCB0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	private bool ChunkedRead
	{
		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x499FCC0", Offset = "0x499FCC0", VA = "0x499FCC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x499FCD0", Offset = "0x499FCD0", VA = "0x499FCD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002B5")]
	private bool ExpectContent
	{
		[Token(Token = "0x6000B7F")]
		[Address(RVA = "0x49A01B0", Offset = "0x49A01B0", VA = "0x49A01B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4999E30", Offset = "0x4999E30", VA = "0x4999E30")]
	public WebResponseStream(WebRequestStream request)
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x499FCE0", Offset = "0x499FCE0", VA = "0x499FCE0", Slot = "24")]
	[AsyncStateMachine(typeof(_003CReadAsync_003Ed__40))]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x499FE60", Offset = "0x499FE60", VA = "0x499FE60")]
	private Task<int> ProcessRead(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x49A0110", Offset = "0x49A0110", VA = "0x49A0110", Slot = "38")]
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x49A0230", Offset = "0x49A0230", VA = "0x49A0230")]
	private void Initialize(BufferOffsetSize buffer)
	{
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x49A0970", Offset = "0x49A0970", VA = "0x49A0970")]
	[AsyncStateMachine(typeof(_003CReadAllAsyncInner_003Ed__47))]
	private Task<byte[]> ReadAllAsyncInner(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x49A0A90", Offset = "0x49A0A90", VA = "0x49A0A90")]
	[AsyncStateMachine(typeof(_003CReadAllAsync_003Ed__48))]
	internal Task ReadAllAsync(bool resending, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x49A0BB0", Offset = "0x49A0BB0", VA = "0x49A0BB0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x49A0C40", Offset = "0x49A0C40", VA = "0x49A0C40", Slot = "39")]
	protected override void Close_internal(ref bool disposed)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x49A0CD0", Offset = "0x49A0CD0", VA = "0x49A0CD0")]
	private WebException GetReadException(WebExceptionStatus status, Exception error, string where)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x4999EC0", Offset = "0x4999EC0", VA = "0x4999EC0")]
	[AsyncStateMachine(typeof(_003CInitReadAsync_003Ed__52))]
	internal Task InitReadAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x49A0F60", Offset = "0x49A0F60", VA = "0x49A0F60")]
	private bool GetResponse(BufferOffsetSize buffer, ref int pos, ref ReadState state)
	{
		return default(bool);
	}
}
