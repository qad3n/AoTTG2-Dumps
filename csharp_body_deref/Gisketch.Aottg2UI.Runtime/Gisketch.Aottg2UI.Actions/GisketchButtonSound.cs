// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchButtonSound
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonSound.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D2")]
public sealed class GisketchButtonSound : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x20")]
	private string _action;

	[Token(Token = "0x6000670")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(string action)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x18FCDD0", Offset = "0x18FB3D0", VA = "0x1818FCDD0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x18FCE20", Offset = "0x18FB420", VA = "0x1818FCE20")]
	public void PlayClick()
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchButtonSound()
	{
	}
}
