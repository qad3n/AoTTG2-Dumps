// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AsyncFlowControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001FF")]
public struct AsyncFlowControl : IDisposable
{
	[Token(Token = "0x4000963")]
	[FieldOffset(Offset = "0x0")]
	private bool useEC;

	[Token(Token = "0x4000964")]
	[FieldOffset(Offset = "0x8")]
	private ExecutionContext _ec;

	[Token(Token = "0x4000965")]
	[FieldOffset(Offset = "0x10")]
	private Thread _thread;

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x55352A0", Offset = "0x55342A0", VA = "0x55352A0")]
	internal void Setup()
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x5535440", Offset = "0x5534440", VA = "0x5535440", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x5535450", Offset = "0x5534450", VA = "0x5535450")]
	public void Undo()
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x5535790", Offset = "0x5534790", VA = "0x5535790", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x5535850", Offset = "0x5534850", VA = "0x5535850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x55358D0", Offset = "0x55348D0", VA = "0x55358D0")]
	public bool Equals(AsyncFlowControl obj)
	{
		return default(bool);
	}
}
