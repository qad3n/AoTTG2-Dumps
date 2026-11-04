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

[Token(Token = "0x200032D")]
internal class MonoChunkStream : WebReadStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200032E")]
	[CompilerGenerated]
	private struct _003CProcessReadAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000C77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MonoChunkStream _003C_003E4__this;

		[Token(Token = "0x4000C79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000C7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int offset;

		[Token(Token = "0x4000C7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int size;

		[Token(Token = "0x4000C7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003CmoreBytes_003E5__2;

		[Token(Token = "0x4000C7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001608")]
		[Address(RVA = "0x27EF030", Offset = "0x27ED630", VA = "0x1827EF030", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001609")]
		[Address(RVA = "0x27EF420", Offset = "0x27EDA20", VA = "0x1827EF420", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200032F")]
	[CompilerGenerated]
	private struct _003CFinishReading_003Ed__8 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoChunkStream _003C_003E4__this;

		[Token(Token = "0x4000C81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private byte[] _003Cbuffer_003E5__2;

		[Token(Token = "0x4000C84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600160A")]
		[Address(RVA = "0x27EC260", Offset = "0x27EA860", VA = "0x1827EC260", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600160B")]
		[Address(RVA = "0x27EC6C0", Offset = "0x27EACC0", VA = "0x1827EC6C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private readonly WebHeaderCollection _003CHeaders_003Ek__BackingField;

	[Token(Token = "0x170004B5")]
	protected MonoChunkParser Decoder
	{
		[Token(Token = "0x6001602")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x27E7C90", Offset = "0x27E6290", VA = "0x1827E7C90")]
	public MonoChunkStream(WebOperation operation, Stream innerStream, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x27E7AD0", Offset = "0x27E60D0", VA = "0x1827E7AD0", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__7))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x27E79C0", Offset = "0x27E5FC0", VA = "0x1827E79C0", Slot = "39")]
	[AsyncStateMachine(typeof(_003CFinishReading_003Ed__8))]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x27E7C10", Offset = "0x27E6210", VA = "0x1827E7C10")]
	private static void ThrowExpectingChunkTrailer()
	{
	}
}
