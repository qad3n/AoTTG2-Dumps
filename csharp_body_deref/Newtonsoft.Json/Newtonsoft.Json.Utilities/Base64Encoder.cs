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
		[Address(RVA = "0x1C30BA0", Offset = "0x1C2F1A0", VA = "0x181C30BA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x1C30FF0", Offset = "0x1C2F5F0", VA = "0x181C30FF0", Slot = "5")]
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
	[Address(RVA = "0x1C17E90", Offset = "0x1C16490", VA = "0x181C17E90")]
	public Base64Encoder(TextWriter writer)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x1C17C90", Offset = "0x1C16290", VA = "0x181C17C90")]
	private void ValidateEncode(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x1C176C0", Offset = "0x1C15CC0", VA = "0x181C176C0")]
	public void Encode(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x1C17BC0", Offset = "0x1C161C0", VA = "0x181C17BC0")]
	private void StoreLeftOverBytes(byte[] buffer, int index, ref int count)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x1C17B30", Offset = "0x1C16130", VA = "0x181C17B30")]
	private bool FulfillFromLeftover(byte[] buffer, int index, ref int count)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x1C17A60", Offset = "0x1C16060", VA = "0x181C17A60")]
	public void Flush()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x1C17E60", Offset = "0x1C16460", VA = "0x181C17E60")]
	private void WriteChars(char[] chars, int index, int count)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x1C17590", Offset = "0x1C15B90", VA = "0x181C17590")]
	[AsyncStateMachine(typeof(_003CEncodeAsync_003Ed__13))]
	public Task EncodeAsync(byte[] buffer, int index, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x1C17DF0", Offset = "0x1C163F0", VA = "0x181C17DF0")]
	private Task WriteCharsAsync(char[] chars, int index, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x1C178C0", Offset = "0x1C15EC0", VA = "0x181C178C0")]
	public Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}
}
