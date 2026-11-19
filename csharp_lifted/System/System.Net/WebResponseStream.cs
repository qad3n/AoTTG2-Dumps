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

[Token(Token = "0x2000318")]
internal class WebResponseStream : WebConnectionStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000319")]
	[CompilerGenerated]
	private struct _003CReadAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000CE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000CE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000CE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000CE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000CE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000CE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cnbytes_003E5__3;

		[Token(Token = "0x4000CE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Exception _003CthrowMe_003E5__4;

		[Token(Token = "0x4000CE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600158B")]
		[Address(RVA = "0x61A1C70", Offset = "0x61A0C70", VA = "0x61A1C70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600158C")]
		[Address(RVA = "0x61A2700", Offset = "0x61A1700", VA = "0x61A2700", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200031B")]
	[CompilerGenerated]
	private struct _003CReadAllAsyncInner_003Ed__47 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<byte[]> _003C_003Et__builder;

		[Token(Token = "0x4000CF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000CF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private long _003CmaximumSize_003E5__2;

		[Token(Token = "0x4000CF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private MemoryStream _003Cms_003E5__3;

		[Token(Token = "0x4000CF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__4;

		[Token(Token = "0x4000CF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001591")]
		[Address(RVA = "0x61A2880", Offset = "0x61A1880", VA = "0x61A2880", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001592")]
		[Address(RVA = "0x61A2EB0", Offset = "0x61A1EB0", VA = "0x61A2EB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200031C")]
	[CompilerGenerated]
	private struct _003CReadAllAsync_003Ed__48 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000CFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool resending;

		[Token(Token = "0x4000CFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000CFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003CtimeoutCts_003E5__3;

		[Token(Token = "0x4000CFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Task _003CtimeoutTask_003E5__4;

		[Token(Token = "0x4000CFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<byte[]>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001593")]
		[Address(RVA = "0x61A2F20", Offset = "0x61A1F20", VA = "0x61A2F20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001594")]
		[Address(RVA = "0x61A3B00", Offset = "0x61A2B00", VA = "0x61A3B00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200031D")]
	[CompilerGenerated]
	private struct _003CInitReadAsync_003Ed__52 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebResponseStream _003C_003E4__this;

		[Token(Token = "0x4000D04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private BufferOffsetSize _003Cbuffer_003E5__2;

		[Token(Token = "0x4000D06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ReadState _003Cstate_003E5__3;

		[Token(Token = "0x4000D07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		private int _003Cposition_003E5__4;

		[Token(Token = "0x4000D08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001595")]
		[Address(RVA = "0x61A3B60", Offset = "0x61A2B60", VA = "0x61A3B60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001596")]
		[Address(RVA = "0x61A4460", Offset = "0x61A3460", VA = "0x61A4460", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000CD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebReadStream innerStream;

	[Token(Token = "0x4000CD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool nextReadCalled;

	[Token(Token = "0x4000CD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool bufferedEntireContent;

	[Token(Token = "0x4000CD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebCompletionSource pendingRead;

	[Token(Token = "0x4000CD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object locker;

	[Token(Token = "0x4000CD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int nestedRead;

	[Token(Token = "0x4000CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool read_eof;

	[Token(Token = "0x170004D3")]
	public WebRequestStream RequestStream
	{
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x61A0090", Offset = "0x619F090", VA = "0x61A0090")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D4")]
	public WebHeaderCollection Headers
	{
		[Token(Token = "0x6001570")]
		[Address(RVA = "0x61A00A0", Offset = "0x619F0A0", VA = "0x61A00A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001571")]
		[Address(RVA = "0x61A00B0", Offset = "0x619F0B0", VA = "0x61A00B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004D5")]
	public HttpStatusCode StatusCode
	{
		[Token(Token = "0x6001572")]
		[Address(RVA = "0x61A00D0", Offset = "0x619F0D0", VA = "0x61A00D0")]
		[CompilerGenerated]
		get
		{
			return default(HttpStatusCode);
		}
		[Token(Token = "0x6001573")]
		[Address(RVA = "0x61A00E0", Offset = "0x619F0E0", VA = "0x61A00E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004D6")]
	public string StatusDescription
	{
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x61A00F0", Offset = "0x619F0F0", VA = "0x61A00F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001575")]
		[Address(RVA = "0x61A0100", Offset = "0x619F100", VA = "0x61A0100")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004D7")]
	public Version Version
	{
		[Token(Token = "0x6001576")]
		[Address(RVA = "0x61A0120", Offset = "0x619F120", VA = "0x61A0120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x61A0130", Offset = "0x619F130", VA = "0x61A0130")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004D8")]
	public bool KeepAlive
	{
		[Token(Token = "0x6001578")]
		[Address(RVA = "0x61A0150", Offset = "0x619F150", VA = "0x61A0150")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001579")]
		[Address(RVA = "0x61A0160", Offset = "0x619F160", VA = "0x61A0160")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004D9")]
	public override bool CanRead
	{
		[Token(Token = "0x600157B")]
		[Address(RVA = "0x61A0170", Offset = "0x619F170", VA = "0x61A0170", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004DA")]
	public override bool CanWrite
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x61A0180", Offset = "0x619F180", VA = "0x61A0180", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004DB")]
	private bool ChunkedRead
	{
		[Token(Token = "0x600157D")]
		[Address(RVA = "0x61A0190", Offset = "0x619F190", VA = "0x61A0190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x61A01A0", Offset = "0x619F1A0", VA = "0x61A01A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004DC")]
	private bool ExpectContent
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x61A0670", Offset = "0x619F670", VA = "0x61A0670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x619ADF0", Offset = "0x6199DF0", VA = "0x619ADF0")]
	public WebResponseStream(WebRequestStream request)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x61A01B0", Offset = "0x619F1B0", VA = "0x61A01B0", Slot = "25")]
	[AsyncStateMachine(typeof(_003CReadAsync_003Ed__40))]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x61A0320", Offset = "0x619F320", VA = "0x61A0320")]
	private Task<int> ProcessRead(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x61A05D0", Offset = "0x619F5D0", VA = "0x61A05D0", Slot = "39")]
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x61A0700", Offset = "0x619F700", VA = "0x61A0700")]
	private void Initialize(BufferOffsetSize buffer)
	{
	}

	[Token(Token = "0x6001584")]
	[Address(RVA = "0x61A0E20", Offset = "0x619FE20", VA = "0x61A0E20")]
	[AsyncStateMachine(typeof(_003CReadAllAsyncInner_003Ed__47))]
	private Task<byte[]> ReadAllAsyncInner(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x61A0F40", Offset = "0x619FF40", VA = "0x61A0F40")]
	[AsyncStateMachine(typeof(_003CReadAllAsync_003Ed__48))]
	internal Task ReadAllAsync(bool resending, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x61A1050", Offset = "0x61A0050", VA = "0x61A1050", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x61A10E0", Offset = "0x61A00E0", VA = "0x61A10E0", Slot = "40")]
	protected override void Close_internal(ref bool disposed)
	{
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x61A1170", Offset = "0x61A0170", VA = "0x61A1170")]
	private WebException GetReadException(WebExceptionStatus status, Exception error, string where)
	{
		return null;
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x619AE80", Offset = "0x6199E80", VA = "0x619AE80")]
	[AsyncStateMachine(typeof(_003CInitReadAsync_003Ed__52))]
	internal Task InitReadAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600158A")]
	[Address(RVA = "0x61A1410", Offset = "0x61A0410", VA = "0x61A1410")]
	private bool GetResponse(BufferOffsetSize buffer, ref int pos, ref ReadState state)
	{
		return default(bool);
	}
}
