// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapHover
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000230")]
internal sealed class AottgGameCreateMapHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000B90")]
	[FieldOffset(Offset = "0x20")]
	private UnityEngine.UI.Outline _outline;

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x5D98A60", Offset = "0x5D97A60", VA = "0x5D98A60")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x5D98B30", Offset = "0x5D97B30", VA = "0x5D98B30", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x5D98BC0", Offset = "0x5D97BC0", VA = "0x5D98BC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x5D98BE0", Offset = "0x5D97BE0", VA = "0x5D98BE0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x5D98C20", Offset = "0x5D97C20", VA = "0x5D98C20", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x5D98B70", Offset = "0x5D97B70", VA = "0x5D98B70")]
	private void SetHovered(bool hovered)
	{
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x5D92FE0", Offset = "0x5D91FE0", VA = "0x5D92FE0")]
	internal static Color OutlineColor(Component component)
	{
		return default(Color);
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x5D98C40", Offset = "0x5D97C40", VA = "0x5D98C40")]
	public AottgGameCreateMapHover()
	{
	}
}
