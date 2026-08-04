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

[Token(Token = "0x20001A5")]
internal class MonoChunkStream : WebReadStream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001A6")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x400085F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000860")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000861")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000862")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MonoChunkStream _003C_003E4__this;

		[Token(Token = "0x4000863")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000864")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int offset;

		[Token(Token = "0x4000865")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int size;

		[Token(Token = "0x4000866")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003CmoreBytes_003E5__2;

		[Token(Token = "0x4000867")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x498B640", Offset = "0x498B640", VA = "0x498B640", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x498BB80", Offset = "0x498BB80", VA = "0x498BB80", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001A7")]
	[CompilerGenerated]
	private struct _003CFinishReading_003Ed__8 : IAsyncStateMachine
	{
		[Token(Token = "0x4000868")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000869")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400086A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoChunkStream _003C_003E4__this;

		[Token(Token = "0x400086B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400086C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400086D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__2;

		[Token(Token = "0x400086E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x498BBF0", Offset = "0x498BBF0", VA = "0x498BBF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x498C2E0", Offset = "0x498C2E0", VA = "0x498C2E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400085D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private readonly WebHeaderCollection _003CHeaders_003Ek__BackingField;

	[Token(Token = "0x1700025F")]
	protected MonoChunkParser Decoder
	{
		[Token(Token = "0x6000A41")]
		[Address(RVA = "0x498B2B0", Offset = "0x498B2B0", VA = "0x498B2B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x498B2C0", Offset = "0x498B2C0", VA = "0x498B2C0")]
	public MonoChunkStream(WebOperation operation, Stream innerStream, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x498B350", Offset = "0x498B350", VA = "0x498B350", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__7))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x498B4C0", Offset = "0x498B4C0", VA = "0x498B4C0", Slot = "39")]
	[AsyncStateMachine(typeof(_003CFinishReading_003Ed__8))]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x498B5D0", Offset = "0x498B5D0", VA = "0x498B5D0")]
	private static void ThrowExpectingChunkTrailer()
	{
	}
}
