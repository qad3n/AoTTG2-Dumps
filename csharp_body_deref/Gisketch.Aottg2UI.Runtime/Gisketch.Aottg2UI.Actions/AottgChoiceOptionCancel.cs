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

[Token(Token = "0x20000A3")]
public sealed class AottgChoiceOptionCancel : MonoBehaviour, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _control;

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x3A8D840", Offset = "0x3A8D840", VA = "0x3A8D840")]
	public void Setup(AottgChoiceControl control)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x3A8D850", Offset = "0x3A8D850", VA = "0x3A8D850", Slot = "4")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x3A8D8F0", Offset = "0x3A8D8F0", VA = "0x3A8D8F0")]
	public AottgChoiceOptionCancel()
	{
	}
}
