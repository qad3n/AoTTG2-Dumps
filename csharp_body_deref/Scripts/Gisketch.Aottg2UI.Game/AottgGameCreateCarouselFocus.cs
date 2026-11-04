// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselFocus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FE")]
internal sealed class AottgGameCreateCarouselFocus : MonoBehaviour, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x20")]
	private AottgGameCreateCarouselRuntime _carousel;

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(AottgGameCreateCarouselRuntime carousel)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x23BE670", Offset = "0x23BCC70", VA = "0x1823BE670", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGameCreateCarouselFocus()
	{
	}
}
