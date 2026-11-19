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

[Token(Token = "0x2000032")]
[RequireComponent(typeof(Text))]
public class TextButtonTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x20")]
	private Text _text;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x28")]
	public Selectable Selectable;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalColor;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x40")]
	public Color HoverColor;

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x56F8C00", Offset = "0x56F7C00", VA = "0x56F8C00")]
	public void Awake()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x56F8C50", Offset = "0x56F7C50", VA = "0x56F8C50")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x56F8C80", Offset = "0x56F7C80", VA = "0x56F8C80")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x56F8CB0", Offset = "0x56F7CB0", VA = "0x56F8CB0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x56F8D60", Offset = "0x56F7D60", VA = "0x56F8D60", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x56F8E10", Offset = "0x56F7E10", VA = "0x56F8E10")]
	public TextButtonTransition()
	{
	}
}
