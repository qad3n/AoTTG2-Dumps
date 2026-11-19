// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScaleToParent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000AE")]
[ExecuteAlways]
internal sealed class GisketchScaleToParent : MonoBehaviour
{
	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x30")]
	private float _referenceWidth;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x34")]
	private float _referenceHeight;

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x527BD30", Offset = "0x527AD30", VA = "0x527BD30")]
	public void Setup(RectTransform content, float referenceWidth, float referenceHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c (Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Setup): 10 lines keep C-only constructs
		RectTransform pUVar1;
		uint in_XMM0_Db;
		byte[] auVar2 = new byte[16];
		uint in_XMM1_Db;

		pUVar1 = this.GetComponent<RectTransform>();
		this._root = pUVar1;
		this._content = content;
		auVar2._4_4_ = referenceHeight;
		auVar2._0_4_ = referenceWidth;
		auVar2._8_4_ = in_XMM0_Db;
		auVar2._12_4_ = in_XMM1_Db;
		auVar2 = maxps(_DAT_01005870, auVar2);
		this._referenceWidth = (float)auVar2._0_4_;
		this._referenceHeight = (float)auVar2._4_4_;
		this.Apply();
		return;
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x527C020", Offset = "0x527B020", VA = "0x527C020")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c (Gisketch.Aottg2UI.Building.GisketchScaleToParent$$LateUpdate): clean
		this.Apply();
		return;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x527C030", Offset = "0x527B030", VA = "0x527C030")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c (Gisketch.Aottg2UI.Building.GisketchScaleToParent$$OnRectTransformDimensionsChange): clean
		this.Apply();
		return;
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x527BDC0", Offset = "0x527ADC0", VA = "0x527BDC0")]
	private void Apply()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c (Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Apply): 5 lines keep C-only constructs
		RectTransform* targetAddress;
		Vector2 value;
		bool bVar1;
		RectTransform pUVar2;
		float fVar3;
		Vector3 value_00;
		Rect UVar4;

		pUVar2 = this._root;
		targetAddress = &this._root;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			pUVar2 = this.GetComponent<RectTransform>();
			this._root = pUVar2;
		}
		pUVar2 = *targetAddress;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			return;
		}
		pUVar2 = this._content;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			return;
		}
		pUVar2 = this._content;
		if (pUVar2 == null) goto label_0537c01a;
		pUVar2.anchorMin = (Vector2)0x3f80000000000000 ;
		pUVar2 = this._content;
		if (pUVar2 == null) goto label_0537c01a;
		pUVar2.anchorMax = (Vector2)0x3f80000000000000 ;
		pUVar2 = this._content;
		if (pUVar2 == null) goto label_0537c01a;
		pUVar2.pivot = (Vector2)0x3f80000000000000;
		pUVar2 = this._content;
		if (pUVar2 == null) goto label_0537c01a;
		pUVar2.anchoredPosition = (Vector2)(Vector2.zeroVector);
		pUVar2 = this._content;
		if (pUVar2 == null) goto label_0537c01a;
		value.x = this._referenceWidth;
		value.y = this._referenceHeight;
		pUVar2.sizeDelta = value;
		pUVar2 = this._root;
		if (pUVar2 == null) goto label_0537c01a;
		UVar4 = pUVar2.rect;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			if (0.0 < UVar4.m_Height) goto label_0537bf99;
	label_0537bfea: ;
			fVar3 = 1.0;
		}
		else {
			if (UVar4.m_Height <= 0.0) goto label_0537bfea;
	label_0537bf99: ;
			if (*targetAddress == null) goto label_0537c01a;
			UVar4 = (*targetAddress).rect;
			fVar3 = UVar4.m_Height / this._referenceHeight;
		}
		pUVar2 = this._content;
		if (pUVar2 != null) {
			value_00.y = fVar3;
			value_00.x = fVar3;
			value_00.z = 1.0;
			pUVar2.localScale = value_00;
			return;
		}
	label_0537c01a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x527C040", Offset = "0x527B040", VA = "0x527C040")]
	public GisketchScaleToParent()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c (Gisketch.Aottg2UI.Building.GisketchScaleToParent$$.ctor): clean
		this._referenceWidth = 1920.0;
		this._referenceHeight = 1080.0;
		base();
		return;
	}
}
