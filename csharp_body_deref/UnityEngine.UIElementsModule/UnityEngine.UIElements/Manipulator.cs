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
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x32AEE40", Offset = "0x32AD440", VA = "0x1832AEE40", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x60011B4")]
	protected abstract void RegisterCallbacksOnTarget();

	[Token(Token = "0x60011B5")]
	protected abstract void UnregisterCallbacksFromTarget();

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Manipulator()
	{
	}
}
