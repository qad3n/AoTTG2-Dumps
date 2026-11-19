// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FixedSizeReadStream
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

[Token(Token = "0x20002DE")]
internal class FixedSizeReadStream : WebReadStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002DF")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x4000B12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000B13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000B14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000B15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FixedSizeReadStream _003C_003E4__this;

		[Token(Token = "0x4000B16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000B17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000B18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x4000B19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60013C3")]
		[Address(RVA = "0x61841E0", Offset = "0x61831E0", VA = "0x61841E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x6184500", Offset = "0x6183500", VA = "0x6184500", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000B11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long position;

	[Token(Token = "0x17000458")]
	public long ContentLength
	{
		[Token(Token = "0x60013C0")]
		[Address(RVA = "0x6184060", Offset = "0x6183060", VA = "0x6184060")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x6184070", Offset = "0x6183070", VA = "0x6184070")]
	public FixedSizeReadStream(WebOperation operation, Stream innerStream, long contentLength)
	{
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x6184090", Offset = "0x6183090", VA = "0x6184090", Slot = "39")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__5))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}
}
