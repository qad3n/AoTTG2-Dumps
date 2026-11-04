// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.ButtonInsideScrollList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/UI/ButtonInsideScrollList.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200002A")]
public class ButtonInsideScrollList : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect scrollRect;

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x1D4FC70", Offset = "0x1D4E270", VA = "0x181D4FC70")]
	private void Start()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x1D4FCC0", Offset = "0x1D4E2C0", VA = "0x181D4FCC0", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x1D4FD50", Offset = "0x1D4E350", VA = "0x181D4FD50", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ButtonInsideScrollList()
	{
	}
}
