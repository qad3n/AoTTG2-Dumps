// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AsyncFlowControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F6")]
public struct AsyncFlowControl : IDisposable
{
	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x0")]
	private bool useEC;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x8")]
	private ExecutionContext _ec;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x10")]
	private Thread _thread;

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x3D32680", Offset = "0x3D32680", VA = "0x3D32680")]
	internal void Setup()
	{
	}

	[Token(Token = "0x6001221")]
	[Address(RVA = "0x3D327C0", Offset = "0x3D327C0", VA = "0x3D327C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x3D327D0", Offset = "0x3D327D0", VA = "0x3D327D0")]
	public void Undo()
	{
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x3D32A40", Offset = "0x3D32A40", VA = "0x3D32A40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x3D32B00", Offset = "0x3D32B00", VA = "0x3D32B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x3D32B80", Offset = "0x3D32B80", VA = "0x3D32B80")]
	public bool Equals(AsyncFlowControl obj)
	{
		return default(bool);
	}
}
