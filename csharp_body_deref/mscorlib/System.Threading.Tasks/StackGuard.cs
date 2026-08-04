// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.StackGuard
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000246")]
internal class StackGuard
{
	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x10")]
	private int m_inliningDepth;

	[Token(Token = "0x4000ADE")]
	private const int MAX_UNCHECKED_INLINING_DEPTH = 20;

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x3D4ADE0", Offset = "0x3D4ADE0", VA = "0x3D4ADE0")]
	internal bool TryBeginInliningScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x3D4AE20", Offset = "0x3D4AE20", VA = "0x3D4AE20")]
	internal void EndInliningScope()
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x3D423A0", Offset = "0x3D423A0", VA = "0x3D423A0")]
	public StackGuard()
	{
	}
}
