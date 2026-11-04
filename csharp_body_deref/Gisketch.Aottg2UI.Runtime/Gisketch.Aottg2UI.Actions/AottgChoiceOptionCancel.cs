// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionCancel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C3")]
public sealed class AottgChoiceOptionCancel : MonoBehaviour, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _control;

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(AottgChoiceControl control)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x18F6ED0", Offset = "0x18F54D0", VA = "0x1818F6ED0", Slot = "4")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgChoiceOptionCancel()
	{
	}
}
