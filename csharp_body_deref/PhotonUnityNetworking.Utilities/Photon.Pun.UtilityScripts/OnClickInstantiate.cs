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
	[Address(RVA = "0x3BF1020", Offset = "0x3BF1020", VA = "0x3BF1020", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3BF1290", Offset = "0x3BF1290", VA = "0x3BF1290")]
	public OnClickInstantiate()
	{
	}
}
