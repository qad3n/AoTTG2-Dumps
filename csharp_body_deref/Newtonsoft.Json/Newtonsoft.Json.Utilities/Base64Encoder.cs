// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.Base64Encoder
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

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x2000096")]
internal class Base64Encoder
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000097")]
	[CompilerGenerated]
	private struct _003CEncodeAsync_003Ed__13 : IAsyncStateMachine
	{
		[Token(Token = "0x4000374")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000376")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Base64Encoder _003C_003E4__this;

		[Token(Token = "0x4000377")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000378")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int index;

		[Token(Token = "0x4000379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x400037A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400037B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003Cnum4_003E5__2;

		[Token(Token = "0x400037C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int _003Clength_003E5__3;

		[Token(Token = "0x400037D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x3DAA900", Offset = "0x3DAA900", VA = "0x3DAA900", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x3DAAF10", Offset = "0x3DAAF10", VA = "0x3DAAF10", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400036E")]
	private const int Base64LineSize = 76;

	[Token(Token = "0x400036F")]
	private const int LineSizeInBytes = 57;

	[Token(Token = "0x4000370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly char[] _charsLine;

	[Token(Token = "0x4000371")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly TextWriter _writer;

	[Token(Token = "0x4000372")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private byte[]? _leftOverBytes;

	[Token(Token = "0x4000373")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _leftOverBytesCount;

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x3DAA040", Offset = "0x3DAA040", VA = "0x3DAA040")]
	public Base64Encoder(TextWriter writer)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x3DAA0D0", Offset = "0x3DAA0D0", VA = "0x3DAA0D0")]
	private void ValidateEncode(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x3DAA190", Offset = "0x3DAA190", VA = "0x3DAA190")]
	public void Encode(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x3DAA440", Offset = "0x3DAA440", VA = "0x3DAA440")]
	private void StoreLeftOverBytes(byte[] buffer, int index, ref int count)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x3DAA380", Offset = "0x3DAA380", VA = "0x3DAA380")]
	private bool FulfillFromLeftover(byte[] buffer, int index, ref int count)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x3DAA540", Offset = "0x3DAA540", VA = "0x3DAA540")]
	public void Flush()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x3DAA410", Offset = "0x3DAA410", VA = "0x3DAA410")]
	private void WriteChars(char[] chars, int index, int count)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x3DAA5E0", Offset = "0x3DAA5E0", VA = "0x3DAA5E0")]
	[AsyncStateMachine(typeof(_003CEncodeAsync_003Ed__13))]
	public Task EncodeAsync(byte[] buffer, int index, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x3DAA720", Offset = "0x3DAA720", VA = "0x3DAA720")]
	private Task WriteCharsAsync(char[] chars, int index, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x3DAA790", Offset = "0x3DAA790", VA = "0x3DAA790")]
	public Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}
}
