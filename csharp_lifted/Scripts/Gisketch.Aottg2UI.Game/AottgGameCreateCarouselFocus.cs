// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselFocus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000219")]
internal sealed class AottgGameCreateCarouselFocus : MonoBehaviour, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x4000B21")]
	[FieldOffset(Offset = "0x20")]
	private AottgGameCreateCarouselRuntime _carousel;

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x5D8CEC0", Offset = "0x5D8BEC0", VA = "0x5D8CEC0")]
	public void Setup(AottgGameCreateCarouselRuntime carousel)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselFocus.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus$$Setup): clean
		this._carousel = carousel;
		return;
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x5D8CED0", Offset = "0x5D8BED0", VA = "0x5D8CED0", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselFocus.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus$$OnSelect): clean
		AottgGameCreateCarouselRuntime __this_00;
		RectTransform target;

		__this_00 = this._carousel;
		target = this.GetComponent<RectTransform>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Reveal(target);
		return;
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x5D8CF30", Offset = "0x5D8BF30", VA = "0x5D8CF30")]
	public AottgGameCreateCarouselFocus()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselFocus.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus$$.ctor): clean
		base();
		return;
	}
}
