// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EqualityHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000110")]
public class EqualityHandler : BinaryOperatorHandler
{
	[Token(Token = "0x6000818")]
	[Address(RVA = "0x67D46B0", Offset = "0x67D36B0", VA = "0x67D46B0")]
	public EqualityHandler()
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x67DA730", Offset = "0x67D9730", VA = "0x67DA730", Slot = "6")]
	protected override object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x67DA750", Offset = "0x67D9750", VA = "0x67DA750", Slot = "7")]
	protected override object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x67DA770", Offset = "0x67D9770", VA = "0x67DA770", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
