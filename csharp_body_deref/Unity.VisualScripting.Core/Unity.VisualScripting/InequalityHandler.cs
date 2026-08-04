// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InequalityHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200011A")]
public class InequalityHandler : BinaryOperatorHandler
{
	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x4D01EF0", Offset = "0x4D01EF0", VA = "0x4D01EF0")]
	public InequalityHandler()
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4D080F0", Offset = "0x4D080F0", VA = "0x4D080F0", Slot = "6")]
	protected override object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x4D08110", Offset = "0x4D08110", VA = "0x4D08110", Slot = "7")]
	protected override object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x4D08130", Offset = "0x4D08130", VA = "0x4D08130", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
