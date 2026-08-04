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

[Token(Token = "0x200001F")]
public class OnClickInstantiate : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x2000020")]
	public enum InstantiateOption
	{
		[Token(Token = "0x4000081")]
		Mine,
		[Token(Token = "0x4000082")]
		Scene
	}

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x20")]
	public PointerEventData.InputButton Button;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x24")]
	public KeyCode ModifierKey;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x28")]
	public GameObject Prefab;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private InstantiateOption InstantiateType;

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3F094F0", Offset = "0x3F094F0", VA = "0x3F094F0", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3F09760", Offset = "0x3F09760", VA = "0x3F09760")]
	public OnClickInstantiate()
	{
	}
}
