using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000227")]
public abstract class Manipulator : IManipulator
{
	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x10")]
	private VisualElement m_Target;

	[Token(Token = "0x170002A4")]
	public VisualElement target
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x4D24610", Offset = "0x4D24610", VA = "0x4D24610", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E1F")]
		[Address(RVA = "0x4D253A0", Offset = "0x4D253A0", VA = "0x4D253A0", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x6000E1C")]
	protected abstract void RegisterCallbacksOnTarget();

	[Token(Token = "0x6000E1D")]
	protected abstract void UnregisterCallbacksFromTarget();

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x4D24410", Offset = "0x4D24410", VA = "0x4D24410")]
	protected Manipulator()
	{
	}
}
