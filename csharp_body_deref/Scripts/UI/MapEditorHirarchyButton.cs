using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200067D")]
internal class MapEditorHirarchyButton : Button
{
	[Token(Token = "0x4001FA2")]
	[FieldOffset(Offset = "0x108")]
	private UnityAction _onButtonRelease;

	[Token(Token = "0x600414D")]
	[Address(RVA = "0x4012180", Offset = "0x4012180", VA = "0x4012180")]
	public void Setup(UnityAction onButtonClick, UnityAction onButtonRelease)
	{
	}

	[Token(Token = "0x600414E")]
	[Address(RVA = "0x40121D0", Offset = "0x40121D0", VA = "0x40121D0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600414F")]
	[Address(RVA = "0x4012200", Offset = "0x4012200", VA = "0x4012200")]
	public MapEditorHirarchyButton()
	{
	}
}
