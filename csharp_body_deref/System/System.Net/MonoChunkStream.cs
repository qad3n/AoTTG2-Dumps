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
		[Address(RVA = "0x4666540", Offset = "0x4666540", VA = "0x4666540", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x4666A80", Offset = "0x4666A80", VA = "0x4666A80", Slot = "5")]
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
		[Address(RVA = "0x4666AF0", Offset = "0x4666AF0", VA = "0x4666AF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x46671E0", Offset = "0x46671E0", VA = "0x46671E0", Slot = "5")]
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
		[Address(RVA = "0x46661B0", Offset = "0x46661B0", VA = "0x46661B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x46661C0", Offset = "0x46661C0", VA = "0x46661C0")]
	public MonoChunkStream(WebOperation operation, Stream innerStream, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x4666250", Offset = "0x4666250", VA = "0x4666250", Slot = "38")]
	[AsyncStateMachine(typeof(_003CProcessReadAsync_003Ed__7))]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x46663C0", Offset = "0x46663C0", VA = "0x46663C0", Slot = "39")]
	[AsyncStateMachine(typeof(_003CFinishReading_003Ed__8))]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x46664D0", Offset = "0x46664D0", VA = "0x46664D0")]
	private static void ThrowExpectingChunkTrailer()
	{
	}
}
