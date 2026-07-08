using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000249")]
public abstract class PointerManipulator : MouseManipulator
{
	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x2C")]
	private int m_CurrentPointerId;

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x4D2BA60", Offset = "0x4D2BA60", VA = "0x4D2BA60")]
	protected bool CanStartManipulation(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x4D2BC90", Offset = "0x4D2BC90", VA = "0x4D2BC90")]
	protected bool CanStopManipulation(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x4D2BD50", Offset = "0x4D2BD50", VA = "0x4D2BD50")]
	protected PointerManipulator()
	{
	}
}
