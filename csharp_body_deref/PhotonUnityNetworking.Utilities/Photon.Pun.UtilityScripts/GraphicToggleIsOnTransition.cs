// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/UI/GraphicToggleIsOnTransition.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200002C")]
[RequireComponent(typeof(Graphic))]
public class GraphicToggleIsOnTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x20")]
	public Toggle toggle;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x28")]
	private Graphic _graphic;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalOnColor;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x40")]
	public Color NormalOffColor;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x50")]
	public Color HoverOnColor;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x60")]
	public Color HoverOffColor;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x70")]
	private bool isHover;

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x1D53250", Offset = "0x1D51850", VA = "0x181D53250", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x1D532B0", Offset = "0x1D518B0", VA = "0x181D532B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x1D53130", Offset = "0x1D51730", VA = "0x181D53130")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1D53080", Offset = "0x1D51680", VA = "0x181D53080")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x1D53310", Offset = "0x1D51910", VA = "0x181D53310")]
	public void OnValueChanged(bool isOn)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x1D53360", Offset = "0x1D51960", VA = "0x181D53360")]
	public GraphicToggleIsOnTransition()
	{
	}
}
