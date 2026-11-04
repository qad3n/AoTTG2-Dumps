// ==================== AoTTG2 cross-reference ====================
// Type: UI.RightClickHandler
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/RightClickHandler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000736")]
internal class RightClickHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x4002407")]
	[FieldOffset(Offset = "0x20")]
	private Action<PointerEventData> _onRightClick;

	[Token(Token = "0x60046D7")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(Action<PointerEventData> onRightClick)
	{
	}

	[Token(Token = "0x60046D8")]
	[Address(RVA = "0x22194E0", Offset = "0x2217AE0", VA = "0x1822194E0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60046D9")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public RightClickHandler()
	{
	}
}
