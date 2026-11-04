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

[Token(Token = "0x200031D")]
internal class FixedSizeReadStream : WebReadStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200031E")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000BE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FixedSizeReadStream _003C_003E4__this;

		[Token(Token = "0x4000BE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000BE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000BE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x4000BE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001581")]
		[Address(RVA = "0x27EED10", Offset = "0x27ED310", VA = "0x1827EED10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001582")]
		[Address(RVA = "0x27EEFC0", Offset = "0x27ED5C0", VA = "0x1827EEFC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long position;

	[Token(Token = "0x17000487")]
	public long ContentLength
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x27E12D0", Offset = "0x27DF8D0", VA = "0x1827E12D0")]
	public FixedSizeReadStream(WebOperation operation, Stream innerStream, long contentLength)
	{
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x27E1190", Offset = "0x27DF790", VA = "0x1827E1190", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__5))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}
}
