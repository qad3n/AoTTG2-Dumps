// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.StackGuard
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024E")]
internal class StackGuard
{
	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x10")]
	private int m_inliningDepth;

	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x554BCC0", Offset = "0x554ACC0", VA = "0x554BCC0")]
	internal bool TryBeginInliningScope()
	{
		return default(bool);
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x554BD00", Offset = "0x554AD00", VA = "0x554BD00")]
	internal void EndInliningScope()
	{
	}

	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x5544780", Offset = "0x5543780", VA = "0x5544780")]
	public StackGuard()
	{
	}
}
