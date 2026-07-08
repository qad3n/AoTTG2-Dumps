using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000195")]
internal class FixedSizeReadStream : WebReadStream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000196")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x40007CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40007CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40007CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40007CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FixedSizeReadStream _003C_003E4__this;

		[Token(Token = "0x40007CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x40007D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x40007D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x40007D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x465C910", Offset = "0x465C910", VA = "0x465C910", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x465CCB0", Offset = "0x465CCB0", VA = "0x465CCB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40007CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long position;

	[Token(Token = "0x17000232")]
	public long ContentLength
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x465C770", Offset = "0x465C770", VA = "0x465C770")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x465C780", Offset = "0x465C780", VA = "0x465C780")]
	public FixedSizeReadStream(WebOperation operation, Stream innerStream, long contentLength)
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x465C7A0", Offset = "0x465C7A0", VA = "0x465C7A0", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__5))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}
}
