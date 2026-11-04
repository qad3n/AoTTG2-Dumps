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

[Token(Token = "0x2000357")]
internal class WebResponseStream : WebConnectionStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000358")]
	[CompilerGenerated]
	private struct _003CReadAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000DAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000DAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000DB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000DB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000DB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000DB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000DB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000DB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000DB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cnbytes_003E5__3;

		[Token(Token = "0x4000DB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Exception _003CthrowMe_003E5__4;

		[Token(Token = "0x4000DB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000DB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001749")]
		[Address(RVA = "0x2806070", Offset = "0x2804670", VA = "0x182806070", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600174A")]
		[Address(RVA = "0x28069C0", Offset = "0x2804FC0", VA = "0x1828069C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200035A")]
	[CompilerGenerated]
	private struct _003CReadAllAsyncInner_003Ed__47 : IAsyncStateMachine
	{
		[Token(Token = "0x4000DBE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000DBF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<byte[]> _003C_003Et__builder;

		[Token(Token = "0x4000DC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000DC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000DC2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private long _003CmaximumSize_003E5__2;

		[Token(Token = "0x4000DC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private MemoryStream _003Cms_003E5__3;

		[Token(Token = "0x4000DC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__4;

		[Token(Token = "0x4000DC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600174F")]
		[Address(RVA = "0x2804790", Offset = "0x2802D90", VA = "0x182804790", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001750")]
		[Address(RVA = "0x2804D00", Offset = "0x2803300", VA = "0x182804D00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200035B")]
	[CompilerGenerated]
	private struct _003CReadAllAsync_003Ed__48 : IAsyncStateMachine
	{
		[Token(Token = "0x4000DC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000DC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000DC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000DC9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000DCA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool resending;

		[Token(Token = "0x4000DCB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000DCC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003CtimeoutCts_003E5__3;

		[Token(Token = "0x4000DCD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Task _003CtimeoutTask_003E5__4;

		[Token(Token = "0x4000DCE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000DCF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<byte[]>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001751")]
		[Address(RVA = "0x2804D70", Offset = "0x2803370", VA = "0x182804D70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001752")]
		[Address(RVA = "0x2805AA0", Offset = "0x28040A0", VA = "0x182805AA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200035C")]
	[CompilerGenerated]
	private struct _003CInitReadAsync_003Ed__52 : IAsyncStateMachine
	{
		[Token(Token = "0x4000DD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000DD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000DD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000DD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000DD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private BufferOffsetSize _003Cbuffer_003E5__2;

		[Token(Token = "0x4000DD5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ReadState _003Cstate_003E5__3;

		[Token(Token = "0x4000DD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		private int _003Cposition_003E5__4;

		[Token(Token = "0x4000DD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001753")]
		[Address(RVA = "0x2802750", Offset = "0x2800D50", VA = "0x182802750", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001754")]
		[Address(RVA = "0x2802DB0", Offset = "0x28013B0", VA = "0x182802DB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000DA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebReadStream innerStream;

	[Token(Token = "0x4000DA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool nextReadCalled;

	[Token(Token = "0x4000DA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool bufferedEntireContent;

	[Token(Token = "0x4000DA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebCompletionSource pendingRead;

	[Token(Token = "0x4000DA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object locker;

	[Token(Token = "0x4000DA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int nestedRead;

	[Token(Token = "0x4000DA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool read_eof;

	[Token(Token = "0x17000502")]
	public WebRequestStream RequestStream
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000503")]
	public WebHeaderCollection Headers
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600172F")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000504")]
	public HttpStatusCode StatusCode
	{
		[Token(Token = "0x6001730")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		[CompilerGenerated]
		get
		{
			return default(HttpStatusCode);
		}
		[Token(Token = "0x6001731")]
		[Address(RVA = "0xE92690", Offset = "0xE90C90", VA = "0x180E92690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000505")]
	public string StatusDescription
	{
		[Token(Token = "0x6001732")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001733")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000506")]
	public Version Version
	{
		[Token(Token = "0x6001734")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001735")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000507")]
	public bool KeepAlive
	{
		[Token(Token = "0x6001736")]
		[Address(RVA = "0x1CAC5A0", Offset = "0x1CAABA0", VA = "0x181CAC5A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001737")]
		[Address(RVA = "0x1CAC5D0", Offset = "0x1CAABD0", VA = "0x181CAC5D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000508")]
	public override bool CanRead
	{
		[Token(Token = "0x6001739")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000509")]
	public override bool CanWrite
	{
		[Token(Token = "0x600173A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050A")]
	private bool ChunkedRead
	{
		[Token(Token = "0x600173B")]
		[Address(RVA = "0x1CAC590", Offset = "0x1CAAB90", VA = "0x181CAC590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600173C")]
		[Address(RVA = "0x1CAC5C0", Offset = "0x1CAABC0", VA = "0x181CAC5C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700050B")]
	private bool ExpectContent
	{
		[Token(Token = "0x6001740")]
		[Address(RVA = "0x280EB40", Offset = "0x280D140", VA = "0x18280EB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x280EAA0", Offset = "0x280D0A0", VA = "0x18280EAA0")]
	public WebResponseStream(WebRequestStream request)
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x280E830", Offset = "0x280CE30", VA = "0x18280E830", Slot = "24")]
	[AsyncStateMachine(typeof(_003CReadAsync_003Ed__40))]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x280E360", Offset = "0x280C960", VA = "0x18280E360")]
	private Task<int> ProcessRead(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x280E970", Offset = "0x280CF70", VA = "0x18280E970", Slot = "38")]
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x280DDC0", Offset = "0x280C3C0", VA = "0x18280DDC0")]
	private void Initialize(BufferOffsetSize buffer)
	{
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x280E5E0", Offset = "0x280CBE0", VA = "0x18280E5E0")]
	[AsyncStateMachine(typeof(_003CReadAllAsyncInner_003Ed__47))]
	private Task<byte[]> ReadAllAsyncInner(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x280E710", Offset = "0x280CD10", VA = "0x18280E710")]
	[AsyncStateMachine(typeof(_003CReadAllAsync_003Ed__48))]
	internal Task ReadAllAsync(bool resending, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x280EA20", Offset = "0x280D020", VA = "0x18280EA20", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x280D170", Offset = "0x280B770", VA = "0x18280D170", Slot = "39")]
	protected override void Close_internal(ref bool disposed)
	{
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x280D210", Offset = "0x280B810", VA = "0x18280D210")]
	private WebException GetReadException(WebExceptionStatus status, Exception error, string where)
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x280DCB0", Offset = "0x280C2B0", VA = "0x18280DCB0")]
	[AsyncStateMachine(typeof(_003CInitReadAsync_003Ed__52))]
	internal Task InitReadAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x280D4D0", Offset = "0x280BAD0", VA = "0x18280D4D0")]
	private bool GetResponse(BufferOffsetSize buffer, ref int pos, ref ReadState state)
	{
		return default(bool);
	}
}
