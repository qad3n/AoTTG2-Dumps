// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000249")]
public abstract class PointerManipulator : MouseManipulator
{
	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x2C")]
	private int m_CurrentPointerId;

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x5053390", Offset = "0x5053390", VA = "0x5053390")]
	protected bool CanStartManipulation(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x50535C0", Offset = "0x50535C0", VA = "0x50535C0")]
	protected bool CanStopManipulation(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x5053680", Offset = "0x5053680", VA = "0x5053680")]
	protected PointerManipulator()
	{
	}
}
