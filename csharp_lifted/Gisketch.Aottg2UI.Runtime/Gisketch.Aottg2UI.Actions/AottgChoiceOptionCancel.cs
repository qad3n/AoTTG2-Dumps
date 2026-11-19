// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionCancel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionCancel.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$Setup): clean
		this._control = control;
		return;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x5298080", Offset = "0x5297080", VA = "0x5298080", Slot = "4")]
	public void OnCancel(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionCancel.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$OnCancel): clean
		AottgChoiceControl pGVar1;
		bool bVar2;
		int iVar3;

		pGVar1 = this._control;
		bVar2 = ((Object)pGVar1 == null);
		if (!bVar2) {
			if ((typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor == 0) {
				bVar2 = GisketchInputCapture.BlocksUiInput;
				if (bVar2) {
					return;
				}
			}
			else {
				bVar2 = GisketchInputCapture.BlocksUiInput;
				if (bVar2) {
					return;
				}
			}
			pGVar1 = this._control;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar1.Cancel();
			iVar3 = Time.frameCount;
			GisketchInputCapture._blockedFrame = iVar3;
			GisketchUiSounds.Play(1);
			if (eventData != null) {
				eventData.Use();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x5298330", Offset = "0x5297330", VA = "0x5298330")]
	public AottgChoiceOptionCancel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionCancel.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionCancel$$.ctor): clean
		base();
		return;
	}
}
