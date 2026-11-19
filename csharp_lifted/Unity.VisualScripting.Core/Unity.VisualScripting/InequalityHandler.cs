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
	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x67EFD20", Offset = "0x67EED20", VA = "0x67EFD20")]
	public InequalityHandler()
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x67F5DA0", Offset = "0x67F4DA0", VA = "0x67F5DA0", Slot = "6")]
	protected override object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x67F5DC0", Offset = "0x67F4DC0", VA = "0x67F5DC0", Slot = "7")]
	protected override object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x67F5DE0", Offset = "0x67F4DE0", VA = "0x67F5DE0", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
