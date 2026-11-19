// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Manipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200029E")]
public abstract class Manipulator : IManipulator
{
	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x10")]
	private VisualElement m_Target;

	[Token(Token = "0x1700038D")]
	public VisualElement target
	{
		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x6CB1960", Offset = "0x6CB0960", VA = "0x6CB1960", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x6CB22C0", Offset = "0x6CB12C0", VA = "0x6CB22C0", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x60011B4")]
	protected abstract void RegisterCallbacksOnTarget();

	[Token(Token = "0x60011B5")]
	protected abstract void UnregisterCallbacksFromTarget();

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x6CB1760", Offset = "0x6CB0760", VA = "0x6CB1760")]
	protected Manipulator()
	{
	}
}
