// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebReadStream
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

[Token(Token = "0x200034C")]
internal abstract class WebReadStream : Stream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200034D")]
	[CompilerGenerated]
	private struct _003CReadAsync_003Ed__28 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000D56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebReadStream _003C_003E4__this;

		[Token(Token = "0x4000D57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000D59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int offset;

		[Token(Token = "0x4000D5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int size;

		[Token(Token = "0x4000D5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001704")]
		[Address(RVA = "0x2805B00", Offset = "0x2804100", VA = "0x182805B00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001705")]
		[Address(RVA = "0x2806000", Offset = "0x2804600", VA = "0x182806000", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000D53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool disposed;

	[Token(Token = "0x170004F5")]
	public WebOperation Operation
	{
		[Token(Token = "0x60016EF")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F6")]
	protected Stream InnerStream
	{
		[Token(Token = "0x60016F0")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F7")]
	public override long Length
	{
		[Token(Token = "0x60016F2")]
		[Address(RVA = "0x280BC60", Offset = "0x280A260", VA = "0x18280BC60", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170004F8")]
	public override long Position
	{
		[Token(Token = "0x60016F3")]
		[Address(RVA = "0x280BCA0", Offset = "0x280A2A0", VA = "0x18280BCA0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60016F4")]
		[Address(RVA = "0x280BCE0", Offset = "0x280A2E0", VA = "0x18280BCE0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170004F9")]
	public override bool CanSeek
	{
		[Token(Token = "0x60016F5")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FA")]
	public override bool CanRead
	{
		[Token(Token = "0x60016F6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FB")]
	public override bool CanWrite
	{
		[Token(Token = "0x60016F7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x280BBD0", Offset = "0x280A1D0", VA = "0x18280BBD0")]
	public WebReadStream(WebOperation operation, Stream innerStream)
	{
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x280BB50", Offset = "0x280A150", VA = "0x18280BB50", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x280BB10", Offset = "0x280A110", VA = "0x18280BB10", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x280BB90", Offset = "0x280A190", VA = "0x18280BB90", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x280B560", Offset = "0x2809B60", VA = "0x18280B560", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x280B5A0", Offset = "0x2809BA0", VA = "0x18280B5A0")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x280B850", Offset = "0x2809E50", VA = "0x18280B850", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x280B0D0", Offset = "0x28096D0", VA = "0x18280B0D0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x280B380", Offset = "0x2809980", VA = "0x18280B380", Slot = "23")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x280B720", Offset = "0x2809D20", VA = "0x18280B720", Slot = "24")]
	[AsyncStateMachine(typeof(_003CReadAsync_003Ed__28))]
	public sealed override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001701")]
	protected abstract Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken);

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x280B450", Offset = "0x2809A50", VA = "0x18280B450", Slot = "39")]
	internal virtual Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x280B330", Offset = "0x2809930", VA = "0x18280B330", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
