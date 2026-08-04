// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MouseManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x504CF60", Offset = "0x504CF60", VA = "0x504CF60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x504CF70", Offset = "0x504CF70", VA = "0x504CF70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x504CF80", Offset = "0x504CF80", VA = "0x504CF80")]
	protected MouseManipulator()
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x504D000", Offset = "0x504D000", VA = "0x504D000")]
	protected bool CanStartManipulation(IMouseEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x504D1B0", Offset = "0x504D1B0", VA = "0x504D1B0")]
	protected bool CanStopManipulation(IMouseEvent e)
	{
		return default(bool);
	}
}
