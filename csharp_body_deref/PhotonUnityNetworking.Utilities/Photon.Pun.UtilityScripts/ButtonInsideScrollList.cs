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

[Token(Token = "0x200002C")]
public class ButtonInsideScrollList : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect scrollRect;

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3F0CFE0", Offset = "0x3F0CFE0", VA = "0x3F0CFE0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3F0D030", Offset = "0x3F0D030", VA = "0x3F0D030", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3F0D0C0", Offset = "0x3F0D0C0", VA = "0x3F0D0C0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3F0D150", Offset = "0x3F0D150", VA = "0x3F0D150")]
	public ButtonInsideScrollList()
	{
	}
}
