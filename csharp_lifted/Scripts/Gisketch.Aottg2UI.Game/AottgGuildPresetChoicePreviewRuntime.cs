// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreviewRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000309")]
internal sealed class AottgGuildPresetChoicePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _label;

	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x30")]
	private NameEffectController _effect;

	[Token(Token = "0x17000213")]
	private TMP_Text Label
	{
		[Token(Token = "0x6001300")]
		[Address(RVA = "0x57F74E0", Offset = "0x57F64E0", VA = "0x57F74E0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$get_Label): 2 lines keep C-only constructs
			TMP_Text* targetAddress;
			bool bVar1;
			TMP_Text pTVar2;

			pTVar2 = this._label;
			targetAddress = &this._label;
			bVar1 = ((Object)pTVar2 == null);
			if (bVar1) {
				pTVar2 = this.GetComponent<TMP_Text>();
				this._label = pTVar2;
			}
			return *targetAddress;
		}
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x57F7230", Offset = "0x57F6230", VA = "0x57F7230")]
	public void Configure(string value, string text, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$Configure): 2 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		TMP_Text __this_00;
		Transform pUVar3;
		Image image;
		GameObject pUVar4;
		String pSVar5;
		Color color;
		Color color_00;
		Color color_01;
		Color UVar6;
		AottgGuildPresetDefinition local_58;

		__this_00 = this.Label;
		bVar1 = ((Object)__this_00 == null);
		if (bVar1) {
			return;
		}
		if ((__this_00 != null) &&(pUVar3 = __this_00.transform, pUVar3 != null)) {
			pUVar3 = pUVar3.parent;
			image = AottgGuildPresetVisual.EnsureImage(pUVar3, ref this._image, "AoTTG Guild Preset Preview", 31.0);
			AottgGuildPresetVisual.ApplyImage(image, value);
			if ((image != null) &&(pUVar4 = image.gameObject, pUVar4 != null)) {
				bVar1 = pUVar4.activeSelf;
				if ((bVar1) || (pSVar5 = text, text == null)) {
					pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				__this_00.set_text(pSVar5);
				if (enabled) {
					local_58.Kind = 0;
					local_58._20_4_ = 0;
					local_58.Sprite = null;
					local_58.Id = null;
					local_58.Label = null;
					local_58.ImageScale = 0.0;
					local_58._36_4_ = 0;
					bVar2 = AottgGuildPresetCatalog.TryGet(value, ref local_58);
					if (!bVar2) {
						color_01.b = 1.0;
						color_01.a = 1.0;
						color_01.r = 1.0;
						color_01.g = 1.0;
						AottgGuildPresetVisual.ClearEffect(__this_00, ref this._effect, color_01);
						NameFontCatalog.Apply(__this_00, "Aottg2");
						UVar6.b = 1.0;
						UVar6.a = 1.0;
						UVar6.r = 1.0;
						UVar6.g = 1.0;
						__this_00.set_color(UVar6);
						return;
					}
					if (bVar1) {
						return;
					}
					color.b = 1.0;
					color.a = 1.0;
					color.r = 1.0;
					color.g = 1.0;
					AottgGuildPresetVisual.ApplyText(__this_00, ref this._effect, value, text, color);
					return;
				}
				color_00.b = 0.58;
				color_00.a = 1.0;
				color_00.r = 0.58;
				color_00.g = 0.58;
				AottgGuildPresetVisual.ClearEffect(__this_00, ref this._effect, color_00);
				pUVar4 = image.gameObject;
				if (pUVar4 != null) {
					pUVar4.SetActive(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x57F78B0", Offset = "0x57F68B0", VA = "0x57F78B0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$OnDestroy): clean
		Color color;

		color.b = 1.0;
		color.a = 1.0;
		color.r = 1.0;
		color.g = 1.0;
		AottgGuildPresetVisual.ClearEffect(this._label, ref this._effect, color);
		return;
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x57F78D0", Offset = "0x57F68D0", VA = "0x57F78D0")]
	public AottgGuildPresetChoicePreviewRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$.ctor): clean
		base();
		return;
	}
}
