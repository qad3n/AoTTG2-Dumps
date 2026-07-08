using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200022A")]
public abstract class MouseManipulator : Manipulator
{
	[Token(Token = "0x40007C1")]
	[FieldOffset(Offset = "0x20")]
	private ManipulatorActivationFilter m_currentActivator;

	[Token(Token = "0x170002A5")]
	public List<ManipulatorActivationFilter> activators
	{
		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x4D25630", Offset = "0x4D25630", VA = "0x4D25630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x4D25640", Offset = "0x4D25640", VA = "0x4D25640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x4D25650", Offset = "0x4D25650", VA = "0x4D25650")]
	protected MouseManipulator()
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x4D256D0", Offset = "0x4D256D0", VA = "0x4D256D0")]
	protected bool CanStartManipulation(IMouseEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x4D25880", Offset = "0x4D25880", VA = "0x4D25880")]
	protected bool CanStopManipulation(IMouseEvent e)
	{
		return default(bool);
	}
}
