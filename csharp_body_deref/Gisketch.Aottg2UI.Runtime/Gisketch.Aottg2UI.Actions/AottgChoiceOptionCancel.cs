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

[Token(Token = "0x20000C9")]
public sealed class AottgChoiceOptionCancel : MonoBehaviour, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _control;

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x5298070", Offset = "0x5297070", VA = "0x5298070")]
	public void Setup(AottgChoiceControl control)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x5298080", Offset = "0x5297080", VA = "0x5298080", Slot = "4")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x5298330", Offset = "0x5297330", VA = "0x5298330")]
	public AottgChoiceOptionCancel()
	{
	}
}
