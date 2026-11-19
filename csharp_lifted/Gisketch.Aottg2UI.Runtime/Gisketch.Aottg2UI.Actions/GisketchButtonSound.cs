// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchButtonSound
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonSound.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D8")]
public sealed class GisketchButtonSound : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x20")]
	private string _action;

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x529E880", Offset = "0x529D880", VA = "0x529E880")]
	public void Setup(string action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonSound.c (Gisketch.Aottg2UI.Actions.GisketchButtonSound$$Setup): clean
		this._action = action;
		return;
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x529E890", Offset = "0x529D890", VA = "0x529E890", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonSound.c (Gisketch.Aottg2UI.Actions.GisketchButtonSound$$OnPointerEnter): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07542b8d == false) {
			Il2CppMethodInitialized_07542b8d = true;
			uVar1 = (typeof(GisketchUiSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchUiSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			GisketchUiSounds.Play(2);
			return;
		}
		GisketchUiSounds.Play(2);
		return;
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x528F4F0", Offset = "0x528E4F0", VA = "0x528F4F0")]
	public void PlayClick()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonSound.c (Gisketch.Aottg2UI.Actions.GisketchButtonSound$$PlayClick): clean
		bool bVar1;

		bVar1 = (this._action == "overlay.close");
		if ((typeof(GisketchUiSounds)._2).cctor_finished_or_no_cctor == 0) {
			GisketchUiSounds.Play((uint)bVar1);
			return;
		}
		GisketchUiSounds.Play((uint)bVar1);
		return;
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x529E900", Offset = "0x529D900", VA = "0x529E900")]
	public GisketchButtonSound()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonSound.c (Gisketch.Aottg2UI.Actions.GisketchButtonSound$$.ctor): clean
		base();
		return;
	}
}
