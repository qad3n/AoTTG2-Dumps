// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.TextButtonTransition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/UI/TextButtonTransition.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000034")]
[RequireComponent(typeof(Text))]
public class TextButtonTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x20")]
	private Text _text;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x28")]
	public Selectable Selectable;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalColor;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x40")]
	public Color HoverColor;

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3F0DC00", Offset = "0x3F0DC00", VA = "0x3F0DC00")]
	public void Awake()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3F0DC50", Offset = "0x3F0DC50", VA = "0x3F0DC50")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3F0DC80", Offset = "0x3F0DC80", VA = "0x3F0DC80")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3F0DCB0", Offset = "0x3F0DCB0", VA = "0x3F0DCB0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3F0DD60", Offset = "0x3F0DD60", VA = "0x3F0DD60", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3F0DE10", Offset = "0x3F0DE10", VA = "0x3F0DE10")]
	public TextButtonTransition()
	{
	}
}
