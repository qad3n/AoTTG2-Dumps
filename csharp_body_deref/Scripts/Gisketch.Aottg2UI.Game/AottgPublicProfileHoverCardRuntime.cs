// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverCardRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000336")]
internal sealed class AottgPublicProfileHoverCardRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x400100F")]
	[FieldOffset(Offset = "0x20")]
	private AottgPublicProfileHoverRuntime _owner;

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x580DBD0", Offset = "0x580CBD0", VA = "0x580DBD0")]
	public void Setup(AottgPublicProfileHoverRuntime owner)
	{
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x580DBE0", Offset = "0x580CBE0", VA = "0x580DBE0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x580DC20", Offset = "0x580CC20", VA = "0x580DC20", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x580DC40", Offset = "0x580CC40", VA = "0x580DC40")]
	public AottgPublicProfileHoverCardRuntime()
	{
	}
}
