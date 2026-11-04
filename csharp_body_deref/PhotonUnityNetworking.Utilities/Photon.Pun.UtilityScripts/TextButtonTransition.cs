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
	[Address(RVA = "0x1D5FA20", Offset = "0x1D5E020", VA = "0x181D5FA20")]
	public void Awake()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x1D5FA70", Offset = "0x1D5E070", VA = "0x181D5FA70")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1D5FA70", Offset = "0x1D5E070", VA = "0x181D5FA70")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1D5FAB0", Offset = "0x1D5E0B0", VA = "0x181D5FAB0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x1D5FB60", Offset = "0x1D5E160", VA = "0x181D5FB60", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x1D5FC10", Offset = "0x1D5E210", VA = "0x181D5FC10")]
	public TextButtonTransition()
	{
	}
}
