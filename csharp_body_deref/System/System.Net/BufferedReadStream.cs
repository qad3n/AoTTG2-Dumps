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

[Token(Token = "0x2000312")]
internal class BufferedReadStream : WebReadStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000313")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000BC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BufferedReadStream _003C_003E4__this;

		[Token(Token = "0x4000BC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000BC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000BC9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x4000BCA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001544")]
		[Address(RVA = "0x27EE9C0", Offset = "0x27ECFC0", VA = "0x1827EE9C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001545")]
		[Address(RVA = "0x27EECA0", Offset = "0x27ED2A0", VA = "0x1827EECA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly BufferOffsetSize readBuffer;

	[Token(Token = "0x6001541")]
	[Address(RVA = "0x27DCE10", Offset = "0x27DB410", VA = "0x1827DCE10")]
	public BufferedReadStream(WebOperation operation, Stream innerStream, BufferOffsetSize readBuffer)
	{
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x27DCC30", Offset = "0x27DB230", VA = "0x1827DCC30", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__2))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001543")]
	[Address(RVA = "0x27DCD70", Offset = "0x27DB370", VA = "0x1827DCD70")]
	internal bool TryReadFromBuffer(byte[] buffer, int offset, int size, out int result)
	{
		return default(bool);
	}
}
