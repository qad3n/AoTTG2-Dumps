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
	[Address(RVA = "0x56F8000", Offset = "0x56F7000", VA = "0x56F8000")]
	private void Start()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x56F8050", Offset = "0x56F7050", VA = "0x56F8050", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x56F80E0", Offset = "0x56F70E0", VA = "0x56F80E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x56F8170", Offset = "0x56F7170", VA = "0x56F8170")]
	public ButtonInsideScrollList()
	{
	}
}
