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
	[Token(Token = "0x600080E")]
	[Address(RVA = "0x4CE6300", Offset = "0x4CE6300", VA = "0x4CE6300")]
	public EqualityHandler()
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x4CEC500", Offset = "0x4CEC500", VA = "0x4CEC500", Slot = "6")]
	protected override object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x4CEC520", Offset = "0x4CEC520", VA = "0x4CEC520", Slot = "7")]
	protected override object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x4CEC540", Offset = "0x4CEC540", VA = "0x4CEC540", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
