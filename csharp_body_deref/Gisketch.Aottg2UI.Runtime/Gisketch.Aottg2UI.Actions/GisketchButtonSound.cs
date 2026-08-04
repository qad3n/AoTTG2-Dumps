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

[Token(Token = "0x20000B1")]
public sealed class GisketchButtonSound : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x20")]
	private string _action;

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x3A93400", Offset = "0x3A93400", VA = "0x3A93400")]
	public void Setup(string action)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x3A93410", Offset = "0x3A93410", VA = "0x3A93410", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x3A85FF0", Offset = "0x3A85FF0", VA = "0x3A85FF0")]
	public void PlayClick()
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x3A93420", Offset = "0x3A93420", VA = "0x3A93420")]
	public GisketchButtonSound()
	{
	}
}
