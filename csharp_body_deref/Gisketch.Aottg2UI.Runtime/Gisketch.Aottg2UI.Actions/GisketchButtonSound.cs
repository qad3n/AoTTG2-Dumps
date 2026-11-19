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

[Token(Token = "0x20000D8")]
public sealed class GisketchButtonSound : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x20")]
	private string _action;

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x529E880", Offset = "0x529D880", VA = "0x529E880")]
	public void Setup(string action)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x529E890", Offset = "0x529D890", VA = "0x529E890", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x528F4F0", Offset = "0x528E4F0", VA = "0x528F4F0")]
	public void PlayClick()
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x529E900", Offset = "0x529D900", VA = "0x529E900")]
	public GisketchButtonSound()
	{
	}
}
