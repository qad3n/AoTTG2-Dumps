// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.OnClickInstantiate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Prototyping/OnClickInstantiate.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200001D")]
public class OnClickInstantiate : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x200001E")]
	public enum InstantiateOption
	{
		[Token(Token = "0x400007C")]
		Mine,
		[Token(Token = "0x400007D")]
		Scene
	}

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x20")]
	public PointerEventData.InputButton Button;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x24")]
	public KeyCode ModifierKey;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x28")]
	public GameObject Prefab;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private InstantiateOption InstantiateType;

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x1D53B00", Offset = "0x1D52100", VA = "0x181D53B00", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public OnClickInstantiate()
	{
	}
}
