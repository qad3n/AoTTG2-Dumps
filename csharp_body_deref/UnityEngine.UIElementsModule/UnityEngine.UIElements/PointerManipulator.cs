// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002C5")]
public abstract class PointerManipulator : MouseManipulator
{
	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x20")]
	private int m_CurrentPointerId;

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x32B5660", Offset = "0x32B3C60", VA = "0x1832B5660")]
	protected bool CanStartManipulation(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x32B5850", Offset = "0x32B3E50", VA = "0x1832B5850")]
	protected bool CanStopManipulation(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x32B0E00", Offset = "0x32AF400", VA = "0x1832B0E00")]
	protected PointerManipulator()
	{
	}
}
