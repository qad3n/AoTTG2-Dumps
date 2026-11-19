// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverCardRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverCardRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$Setup): clean
		this._owner = owner;
		return;
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x580DBE0", Offset = "0x580CBE0", VA = "0x580DBE0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverCardRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$OnPointerEnter): 2 lines keep C-only constructs
		Coroutine* targetAddress;
		AottgPublicProfileHoverRuntime __this_00;
		Coroutine routine;

		__this_00 = this._owner;
		if (__this_00 == null) {
			return;
		}
		__this_00._cardHover = true;
		targetAddress = &__this_00._pendingClose;
		routine = __this_00._pendingClose;
		if (routine != null) {
			__this_00.StopCoroutine(routine);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x580DC20", Offset = "0x580CC20", VA = "0x580DC20", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverCardRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$OnPointerExit): clean
		AottgPublicProfileHoverRuntime __this_00;

		__this_00 = this._owner;
		if (__this_00 == null) {
			return;
		}
		__this_00._cardHover = false;
		__this_00.EndOrDelay();
		return;
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x580DC40", Offset = "0x580CC40", VA = "0x580DC40")]
	public AottgPublicProfileHoverCardRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverCardRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$.ctor): clean
		base();
		return;
	}
}
