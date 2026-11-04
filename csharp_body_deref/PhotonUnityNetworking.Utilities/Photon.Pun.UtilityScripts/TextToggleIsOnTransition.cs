// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.TextToggleIsOnTransition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/UI/TextToggleIsOnTransition.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000033")]
[RequireComponent(typeof(Text))]
public class TextToggleIsOnTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x20")]
	public Toggle toggle;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x28")]
	private Text _text;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalOnColor;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x40")]
	public Color NormalOffColor;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x50")]
	public Color HoverOnColor;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x60")]
	public Color HoverOffColor;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x70")]
	private bool isHover;

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1D5FD00", Offset = "0x1D5E300", VA = "0x181D5FD00")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x1D5FC50", Offset = "0x1D5E250", VA = "0x181D5FC50")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1D53310", Offset = "0x1D51910", VA = "0x181D53310")]
	public void OnValueChanged(bool isOn)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1D53250", Offset = "0x1D51850", VA = "0x181D53250", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x1D532B0", Offset = "0x1D518B0", VA = "0x181D532B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1D53360", Offset = "0x1D51960", VA = "0x181D53360")]
	public TextToggleIsOnTransition()
	{
	}
}
