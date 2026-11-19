// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BufferedReadStream
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

[Token(Token = "0x20002D3")]
internal class BufferedReadStream : WebReadStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002D4")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x4000AF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000AF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000AF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000AF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BufferedReadStream _003C_003E4__this;

		[Token(Token = "0x4000AF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000AF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000AFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x4000AFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001386")]
		[Address(RVA = "0x6180320", Offset = "0x617F320", VA = "0x6180320", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001387")]
		[Address(RVA = "0x6180640", Offset = "0x617F640", VA = "0x6180640", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly BufferOffsetSize readBuffer;

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x6180130", Offset = "0x617F130", VA = "0x6180130")]
	public BufferedReadStream(WebOperation operation, Stream innerStream, BufferOffsetSize readBuffer)
	{
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x6180160", Offset = "0x617F160", VA = "0x6180160", Slot = "39")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__2))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x61802B0", Offset = "0x617F2B0", VA = "0x61802B0")]
	internal bool TryReadFromBuffer(byte[] buffer, int offset, int size, out int result)
	{
		return default(bool);
	}
}
