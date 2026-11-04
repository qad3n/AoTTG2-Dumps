// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.StackGuard
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000276")]
internal class StackGuard
{
	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x10")]
	private int m_inliningDepth;

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x1BB3A60", Offset = "0x1BB2060", VA = "0x181BB3A60")]
	internal bool TryBeginInliningScope()
	{
		return default(bool);
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x1BB3A50", Offset = "0x1BB2050", VA = "0x181BB3A50")]
	internal void EndInliningScope()
	{
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public StackGuard()
	{
	}
}
