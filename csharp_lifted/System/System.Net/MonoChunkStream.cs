// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.MonoChunkStream
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

[Token(Token = "0x20002EE")]
internal class MonoChunkStream : WebReadStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002EF")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BA6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BA7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000BA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MonoChunkStream _003C_003E4__this;

		[Token(Token = "0x4000BAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000BAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int offset;

		[Token(Token = "0x4000BAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int size;

		[Token(Token = "0x4000BAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003CmoreBytes_003E5__2;

		[Token(Token = "0x4000BAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600144A")]
		[Address(RVA = "0x618D950", Offset = "0x618C950", VA = "0x618D950", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600144B")]
		[Address(RVA = "0x618DDB0", Offset = "0x618CDB0", VA = "0x618DDB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002F0")]
	[CompilerGenerated]
	private struct _003CFinishReading_003Ed__8 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoChunkStream _003C_003E4__this;

		[Token(Token = "0x4000BB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000BB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__2;

		[Token(Token = "0x4000BB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600144C")]
		[Address(RVA = "0x618DE20", Offset = "0x618CE20", VA = "0x618DE20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600144D")]
		[Address(RVA = "0x618E3E0", Offset = "0x618D3E0", VA = "0x618E3E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private readonly WebHeaderCollection _003CHeaders_003Ek__BackingField;

	[Token(Token = "0x17000486")]
	protected MonoChunkParser Decoder
	{
		[Token(Token = "0x6001444")]
		[Address(RVA = "0x618D5F0", Offset = "0x618C5F0", VA = "0x618D5F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x618D600", Offset = "0x618C600", VA = "0x618D600")]
	public MonoChunkStream(WebOperation operation, Stream innerStream, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x618D690", Offset = "0x618C690", VA = "0x618D690", Slot = "39")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__7))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x618D7E0", Offset = "0x618C7E0", VA = "0x618D7E0", Slot = "40")]
	[AsyncStateMachine(typeof(_003CFinishReading_003Ed__8))]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x618D8E0", Offset = "0x618C8E0", VA = "0x618D8E0")]
	private static void ThrowExpectingChunkTrailer()
	{
	}
}
