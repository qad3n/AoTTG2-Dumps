// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030C")]
internal sealed class AottgGuildPresetImageLayout : MonoBehaviour
{
	[Token(Token = "0x4000F77")]
	[FieldOffset(Offset = "0x20")]
	private LayoutElement _layout;

	[Token(Token = "0x4000F78")]
	[FieldOffset(Offset = "0x28")]
	private float _baseWidth;

	[Token(Token = "0x4000F79")]
	[FieldOffset(Offset = "0x2C")]
	private float _baseHeight;

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x57F78E0", Offset = "0x57F68E0", VA = "0x57F78E0")]
	public static void Configure(Image image, float width, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageLayout.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Configure): clean
		AottgGuildPresetImageLayout __this;

		__this = AottgGuildPresetImageLayout.Runtime(image);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._baseWidth = width;
		__this._baseHeight = height;
		__this.Apply(1.0);
		return;
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x57F7A30", Offset = "0x57F6A30", VA = "0x57F7A30")]
	public static void Scale(Image image, float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageLayout.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Scale): clean
		AottgGuildPresetImageLayout __this;

		__this = AottgGuildPresetImageLayout.Runtime(image);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Apply(scale);
		return;
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x57F7D70", Offset = "0x57F6D70", VA = "0x57F7D70")]
	private static AottgGuildPresetImageLayout Runtime(Image image)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageLayout.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Runtime): 2 lines keep C-only constructs
		LayoutElement* targetAddress;
		uint uVar1;
		bool bVar2;
		AottgGuildPresetImageLayout x;
		GameObject __this;
		LayoutElement pUVar3;
		RectTransform pUVar4;
		float fVar5;
		Rect UVar6;

		if (image == null) goto label_058f7ff3;
		x = image.GetComponent<AottgGuildPresetImageLayout>();
		bVar2 = ((Object)x == null);
		if (bVar2) {
			__this = image.gameObject;
			if (__this == null) {
	label_058f7ff3: ;
				throw new NullReferenceException();
			}
			x = __this.AddComponent<AottgGuildPresetImageLayout>();
			pUVar3 = image.GetComponent<LayoutElement>();
			bVar2 = ((Object)pUVar3 != null);
			if (bVar2) {
				if (pUVar3 == null) goto label_058f7ff3;
				fVar5 = pUVar3.get_preferredWidth();
			}
			else {
				pUVar4 = image.rectTransform;
				if (pUVar4 == null) goto label_058f7ff3;
				UVar6 = pUVar4.rect;
				fVar5 = UVar6.m_Width;
			}
			if (x == null) goto label_058f7ff3;
			x._baseWidth = fVar5;
			bVar2 = ((Object)pUVar3 != null);
			if (!bVar2) {
				pUVar4 = image.rectTransform;
				if (pUVar4 == null) goto label_058f7ff3;
				UVar6 = pUVar4.rect;
				x._baseHeight = UVar6.m_Height;
				pUVar3 = x._layout;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				goto joined_r0x058f7f47;
			}
			if (pUVar3 == null) goto label_058f7ff3;
			fVar5 = pUVar3.get_preferredHeight();
			x._baseHeight = fVar5;
		}
		else if (x == null) goto label_058f7ff3;
		pUVar3 = x._layout;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x058f7f47: ;
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			targetAddress = &x._layout;
			pUVar3 = image.GetComponent<LayoutElement>();
			*targetAddress = pUVar3;
		}
		return x;
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x57F8000", Offset = "0x57F7000", VA = "0x57F8000")]
	private void Apply(float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageLayout.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Apply): clean
		LayoutElement pUVar1;
		bool bVar2;
		Transform __this_00;

		__this_00 = this.transform;
		if (__this_00 != null) {
			__this_00.localScale = (Vector3)(Vector3.oneVector);
			pUVar1 = this._layout;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			pUVar1 = this._layout;
			if (pUVar1 != null) {
				pUVar1.set_preferredWidth(this._baseWidth * scale);
				pUVar1 = this._layout;
				if (pUVar1 != null) {
					pUVar1.set_preferredHeight(scale * this._baseHeight);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x57F8110", Offset = "0x57F7110", VA = "0x57F8110")]
	public AottgGuildPresetImageLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetImageLayout.c (Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$.ctor): clean
		base();
		return;
	}
}
