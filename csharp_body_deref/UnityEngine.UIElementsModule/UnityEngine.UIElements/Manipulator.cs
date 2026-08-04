// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Manipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x504BF40", Offset = "0x504BF40", VA = "0x504BF40", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E1F")]
		[Address(RVA = "0x504CCD0", Offset = "0x504CCD0", VA = "0x504CCD0", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x6000E1C")]
	protected abstract void RegisterCallbacksOnTarget();

	[Token(Token = "0x6000E1D")]
	protected abstract void UnregisterCallbacksFromTarget();

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x504BD40", Offset = "0x504BD40", VA = "0x504BD40")]
	protected Manipulator()
	{
	}
}
