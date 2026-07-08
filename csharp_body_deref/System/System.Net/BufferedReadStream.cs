using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200018A")]
internal class BufferedReadStream : WebReadStream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200018B")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x40007AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40007AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40007AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40007B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BufferedReadStream _003C_003E4__this;

		[Token(Token = "0x40007B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x40007B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x40007B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x40007B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000984")]
		[Address(RVA = "0x46589B0", Offset = "0x46589B0", VA = "0x46589B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000985")]
		[Address(RVA = "0x4658D30", Offset = "0x4658D30", VA = "0x4658D30", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40007AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly BufferOffsetSize readBuffer;

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x46587A0", Offset = "0x46587A0", VA = "0x46587A0")]
	public BufferedReadStream(WebOperation operation, Stream innerStream, BufferOffsetSize readBuffer)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x46587D0", Offset = "0x46587D0", VA = "0x46587D0", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__2))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x4658940", Offset = "0x4658940", VA = "0x4658940")]
	internal bool TryReadFromBuffer(byte[] buffer, int offset, int size, out int result)
	{
		return default(bool);
	}
}
