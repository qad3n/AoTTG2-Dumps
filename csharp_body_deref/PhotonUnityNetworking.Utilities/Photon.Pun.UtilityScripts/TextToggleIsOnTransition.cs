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

[Token(Token = "0x2000035")]
[RequireComponent(typeof(Text))]
public class TextToggleIsOnTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x20")]
	public Toggle toggle;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x28")]
	private Text _text;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalOnColor;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x40")]
	public Color NormalOffColor;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x50")]
	public Color HoverOnColor;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x60")]
	public Color HoverOffColor;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x70")]
	private bool isHover;

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3F0DE40", Offset = "0x3F0DE40", VA = "0x3F0DE40")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3F0DFB0", Offset = "0x3F0DFB0", VA = "0x3F0DFB0")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3F0DF60", Offset = "0x3F0DF60", VA = "0x3F0DF60")]
	public void OnValueChanged(bool isOn)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3F0E050", Offset = "0x3F0E050", VA = "0x3F0E050", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3F0E0B0", Offset = "0x3F0E0B0", VA = "0x3F0E0B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3F0E110", Offset = "0x3F0E110", VA = "0x3F0E110")]
	public TextToggleIsOnTransition()
	{
	}
}
