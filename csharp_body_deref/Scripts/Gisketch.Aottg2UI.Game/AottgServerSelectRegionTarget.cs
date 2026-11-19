// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectRegionTarget.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E2")]
internal sealed class AottgServerSelectRegionTarget : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerClickHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000E9A")]
	[FieldOffset(Offset = "0x20")]
	private AottgServerSelectMapRuntime _map;

	[Token(Token = "0x4000E9B")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x4000E9C")]
	[FieldOffset(Offset = "0x2C")]
	private bool _connectOnClick;

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x57D4870", Offset = "0x57D3870", VA = "0x57D4870")]
	public void Setup(AottgServerSelectMapRuntime map, int index, bool connectOnClick)
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x57D49B0", Offset = "0x57D39B0", VA = "0x57D49B0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x57D4A20", Offset = "0x57D3A20", VA = "0x57D4A20", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x57D4A50", Offset = "0x57D3A50", VA = "0x57D4A50", Slot = "6")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x57D4A80", Offset = "0x57D3A80", VA = "0x57D4A80", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x57D4AA0", Offset = "0x57D3AA0", VA = "0x57D4AA0", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x57D4AD0", Offset = "0x57D3AD0", VA = "0x57D4AD0")]
	public AottgServerSelectRegionTarget()
	{
	}
}
