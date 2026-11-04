// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AsyncFlowControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000227")]
public struct AsyncFlowControl : IDisposable
{
	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x0")]
	private bool useEC;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x8")]
	private ExecutionContext _ec;

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x10")]
	private Thread _thread;

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x1B93FF0", Offset = "0x1B925F0", VA = "0x181B93FF0")]
	internal void Setup()
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x1B93E50", Offset = "0x1B92450", VA = "0x181B93E50", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x1B94060", Offset = "0x1B92660", VA = "0x181B94060")]
	public void Undo()
	{
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x1B93F20", Offset = "0x1B92520", VA = "0x181B93F20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x1B93E60", Offset = "0x1B92460", VA = "0x181B93E60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x1B93F00", Offset = "0x1B92500", VA = "0x181B93F00")]
	public bool Equals(AsyncFlowControl obj)
	{
		return default(bool);
	}
}
