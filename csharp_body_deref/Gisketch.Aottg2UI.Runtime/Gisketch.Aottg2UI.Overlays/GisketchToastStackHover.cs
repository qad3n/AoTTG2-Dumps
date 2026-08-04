// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchToastStackHover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastStackHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x200003A")]
public sealed class GisketchToastStackHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x20")]
	private Action<bool> _hover;

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x3A53D90", Offset = "0x3A53D90", VA = "0x3A53D90")]
	public void Setup(Action<bool> hover)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x3A53DA0", Offset = "0x3A53DA0", VA = "0x3A53DA0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x3A53DC0", Offset = "0x3A53DC0", VA = "0x3A53DC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x3A53DE0", Offset = "0x3A53DE0", VA = "0x3A53DE0")]
	public GisketchToastStackHover()
	{
	}
}
