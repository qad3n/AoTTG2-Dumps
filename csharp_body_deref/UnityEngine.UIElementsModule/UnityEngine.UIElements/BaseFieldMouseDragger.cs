using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000200")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class BaseFieldMouseDragger
{
	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4D15E80", Offset = "0x4D15E80", VA = "0x4D15E80")]
	public void SetDragZone(VisualElement dragElement)
	{
	}

	[Token(Token = "0x6000CF0")]
	public abstract void SetDragZone(VisualElement dragElement, Rect hotZone);

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4D15EA0", Offset = "0x4D15EA0", VA = "0x4D15EA0")]
	protected BaseFieldMouseDragger()
	{
	}
}
