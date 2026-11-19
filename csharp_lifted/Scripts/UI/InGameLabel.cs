// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameLabel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/InGameLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000841")]
internal sealed class InGameLabel
{
	[Token(Token = "0x4002964")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _parent;

	[Token(Token = "0x4002965")]
	[FieldOffset(Offset = "0x18")]
	private readonly ElementStyle _style;

	[Token(Token = "0x4002966")]
	[FieldOffset(Offset = "0x20")]
	private readonly TextAlignmentOptions _alignment;

	[Token(Token = "0x4002967")]
	[FieldOffset(Offset = "0x24")]
	private readonly TextAnchor _anchor;

	[Token(Token = "0x4002968")]
	[FieldOffset(Offset = "0x28")]
	private readonly Vector2 _offset;

	[Token(Token = "0x4002969")]
	[FieldOffset(Offset = "0x30")]
	private Text _legacyText;

	[Token(Token = "0x400296A")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x400296B")]
	[FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _tmpFont;

	[Token(Token = "0x400296C")]
	[FieldOffset(Offset = "0x48")]
	private GameObject _tmpRoot;

	[Token(Token = "0x400296D")]
	[FieldOffset(Offset = "0x50")]
	private Image _background;

	[Token(Token = "0x400296E")]
	[FieldOffset(Offset = "0x58")]
	private bool _legacy;

	[Token(Token = "0x17000DB4")]
	public GameObject Root
	{
		[Token(Token = "0x6004EBC")]
		[Address(RVA = "0x5C28280", Offset = "0x5C27280", VA = "0x5C28280")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$get_Root): clean
			return this._Root_k__BackingField;
		}
		[Token(Token = "0x6004EBD")]
		[Address(RVA = "0x5C28290", Offset = "0x5C27290", VA = "0x5C28290")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$set_Root): clean
			this._Root_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000DB5")]
	public Transform TextTransform
	{
		[Token(Token = "0x6004EBE")]
		[Address(RVA = "0x5C282A0", Offset = "0x5C272A0", VA = "0x5C282A0")]
		get
		{
			// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$get_TextTransform): clean
			Text __this_00;
			TextMeshProUGUI __this_01;
			Transform pUVar1;

			if (this._legacy == false) {
				__this_01 = this._tmpText;
				if (__this_01 != null) {
					return pUVar1;
				}
			}
			else {
				__this_00 = this._legacyText;
				if (__this_00 != null) {
					return pUVar1;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000DB6")]
	public string Text
	{
		[Token(Token = "0x6004EBF")]
		[Address(RVA = "0x5C282D0", Offset = "0x5C272D0", VA = "0x5C282D0")]
		get
		{
			// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$get_Text): clean
			Text pUVar1;
			TextMeshProUGUI pTVar2;
			String pSVar3;

			if (this._legacy == false) {
				pTVar2 = this._tmpText;
				if (pTVar2 != null) {
					return pSVar3;
				}
			}
			else {
				pUVar1 = this._legacyText;
				if (pUVar1 != null) {
					return pSVar3;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6004EC0")]
		[Address(RVA = "0x5C28320", Offset = "0x5C27320", VA = "0x5C28320")]
		set
		{
			// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$set_Text): clean
			sbyte cVar1;
			Text text;
			TextMeshProUGUI pTVar2;
			Image __this_00;
			bool bVar3;
			String a;
			TMP_FontAsset value_00;
			String pSVar4;

			if (Il2CppMethodInitialized_07547dec == false) {
				Il2CppMethodInitialized_07547dec = true;
				if (value != null) goto label_05d28339;
		label_05d2839e: ;
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				if (this._legacy != false) goto label_05d28340;
		label_05d283bd: ;
				pSVar4 = GisketchArabicText.ToVisual(value, false);
				pTVar2 = this._tmpText;
				if (pTVar2 == null) goto label_05d2849d;
				a = pTVar2.get_text();
				bVar3 = (a != pSVar4);
				if (bVar3) {
					pTVar2 = this._tmpText;
					value_00 = GisketchTypography.ForText(pSVar4, this._tmpFont);
					if (pTVar2 == null) goto label_05d2849d;
					pTVar2.font = value_00;
				}
				pTVar2 = this._tmpText;
				if (pTVar2 == null) goto label_05d2849d;
				pTVar2.set_text(pSVar4);
				cVar1 = this._legacy;
			}
			else {
				if (value == null) goto label_05d2839e;
		label_05d28339: ;
				if (this._legacy == false) goto label_05d283bd;
		label_05d28340: ;
				text = this._legacyText;
				LanguageFonts.SetText(text, value);
				cVar1 = this._legacy;
			}
			if (cVar1 != false) {
				return;
			}
			pTVar2 = this._tmpText;
			if (pTVar2 != null) {
				__this_00 = this._background;
				pSVar4 = pTVar2.get_text();
				bVar3 = String.IsNullOrEmpty(pSVar4);
				if (__this_00 != null) {
					__this_00.enabled = !bVar3;
					return;
				}
			}
		label_05d2849d: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x6004EC1")]
	[Address(RVA = "0x5C28500", Offset = "0x5C27500", VA = "0x5C28500")]
	public InGameLabel(Transform parent, ElementStyle style, TextAlignmentOptions alignment, TextAnchor anchor, Vector2 offset, bool legacy)
	{
		// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$.ctor): clean


		base();
		this._parent = parent;
		this._style = style;
		this._alignment = alignment;
		this._anchor = anchor;
		this._offset = offset;
		this.SetLegacy(legacy);
		return;
	}

	[Token(Token = "0x6004EC2")]
	[Address(RVA = "0x5C28580", Offset = "0x5C27580", VA = "0x5C28580")]
	public void SetLegacy(bool legacy)
	{
		// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$SetLegacy): 17 lines keep C-only constructs
		GameObject* targetAddress;
		Text* targetAddress_00;
		GameObject* targetAddress_01;
		int iVar1;
		int iVar2;
		Object pUVar3;
		bool bVar4;
		bool value;
		int index;
		String value_00;
		Transform pUVar5;
		GameObject pUVar6;
		Text pUVar7;
		TextMeshProUGUI pTVar8;
		TMP_FontAsset pTVar9;
		Image pUVar10;
		uint alignment;

		pUVar3 = (Object)this._Root_k__BackingField;
		bVar4 = (pUVar3 != null);
		if ((bVar4) && (this._legacy == legacy)) {
			return;
		}
		targetAddress = &this._Root_k__BackingField;
		pUVar3 = (Object)*targetAddress;
		bVar4 = (pUVar3 != null);
		if (bVar4) {
			if (this._legacy == false) {
				pTVar8 = this._tmpText;
				if (pTVar8 == null) goto label_05d28a1d;
				value_00 = pTVar8.get_text();
			}
			else {
				pUVar7 = this._legacyText;
				if (pUVar7 == null) goto label_05d28a1d;
				value_00 = pUVar7.get_text();
			}
		}
		else {
			value_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pUVar3 = (Object)*targetAddress;
		bVar4 = (pUVar3 == null);
		value = true;
		if (!bVar4) {
			if (*targetAddress == null) goto label_05d28a1d;
			value = (*targetAddress).activeSelf;
		}
		pUVar3 = (Object)*targetAddress;
		bVar4 = (pUVar3 != null);
		if (bVar4) {
			if (*targetAddress == null) goto label_05d28a1d;
			pUVar5 = (*targetAddress).transform;
			if (pUVar5 == null) goto label_05d28a1d;
			index = pUVar5.GetSiblingIndex();
		}
		else {
			pUVar5 = this._parent;
			if (pUVar5 == null) goto label_05d28a1d;
			index = pUVar5.childCount;
		}
		pUVar3 = (Object)*targetAddress;
		bVar4 = (pUVar3 != null);
		if (bVar4) {
			if (*targetAddress == null) goto label_05d28a1d;
			(*targetAddress).SetActive(false);
		}
		if (legacy) {
			pUVar7 = this._legacyText;
			targetAddress_00 = &this._legacyText;
			bVar4 = ((Object)pUVar7 == null);
			if (bVar4) {
				iVar1 = this._alignment;
				alignment = 3;
				if (iVar1 != 0x201) {
					alignment = iVar1 == 0x204 | 4;
				}
				pUVar6 = ElementFactory.CreateLegacyHUDLabel(this._parent, this._style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, alignment);
				if (pUVar6 == null) goto label_05d28a1d;
				pUVar7 = pUVar6.GetComponent<Text>();
				*targetAddress_00 = pUVar7;
				if (*targetAddress_00 == null) goto label_05d28a1d;
				pUVar6 = (*targetAddress_00).gameObject;
				iVar2 = this._anchor;
				ElementFactory.SetAnchor(pUVar6, iVar2, iVar2, (Vector2)this._offset);
			}
			if (*targetAddress_00 == null) goto label_05d28a1d;
			pUVar6 = (*targetAddress_00).gameObject;
		}
		else {
			pUVar3 = (Object)this._tmpRoot;
			targetAddress_01 = &this._tmpRoot;
			bVar4 = (pUVar3 == null);
			if (bVar4) {
				pUVar6 = ElementFactory.CreateHUDLabel(this._parent, this._style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, this._alignment);
				this._tmpRoot = pUVar6;
				iVar2 = this._anchor;
				ElementFactory.SetAnchor(this._tmpRoot, iVar2, iVar2, (Vector2)this._offset);
				pUVar6 = this._tmpRoot;
				if (pUVar6 == null) goto label_05d28a1d;
				pTVar8 = pUVar6.GetComponentInChildren<TextMeshProUGUI>(true);
				this._tmpText = pTVar8;
				pTVar9 = GisketchTypography.Resolve("text", 400, null);
				this._tmpFont = pTVar9;
				pUVar6 = this._tmpRoot;
				if (pUVar6 == null) goto label_05d28a1d;
				pUVar5 = pUVar6.transform;
				if (pUVar5 == null) goto label_05d28a1d;
				pUVar5 = pUVar5.Find("Background");
				if (pUVar5 == null) goto label_05d28a1d;
				pUVar10 = pUVar5.GetComponent<Image>();
				this._background = pUVar10;
			}
			pUVar6 = *targetAddress_01;
		}
		this._Root_k__BackingField = pUVar6;
		this._legacy = legacy;
		pUVar6 = this._Root_k__BackingField;
		if (pUVar6 != null) {
			pUVar5 = pUVar6.transform;
			if (pUVar5 != null) {
				pUVar5.SetSiblingIndex(index);
				this.Text = value_00;
				pUVar6 = this._Root_k__BackingField;
				if (pUVar6 != null) {
					pUVar6.SetActive(value);
					return;
				}
			}
		}
	label_05d28a1d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EC3")]
	[Address(RVA = "0x5C28A30", Offset = "0x5C27A30", VA = "0x5C28A30")]
	public void SetBackgroundColor(Color color)
	{
		// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$SetBackgroundColor): clean
		Image pUVar1;

		if (this._legacy != false) {
			return;
		}
		pUVar1 = this._background;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.set_color(color);
		return;
	}

	[Token(Token = "0x6004EC4")]
	[Address(RVA = "0x5C284B0", Offset = "0x5C274B0", VA = "0x5C284B0")]
	private void UpdateBackground()
	{
		// Lifted from source/cpp/UI/InGameLabel.c (UI.InGameLabel$$UpdateBackground): clean
		TextMeshProUGUI pTVar1;
		Image __this_00;
		bool bVar2;
		String value;

		if (this._legacy != false) {
			return;
		}
		pTVar1 = this._tmpText;
		if (pTVar1 != null) {
			__this_00 = this._background;
			value = pTVar1.get_text();
			bVar2 = String.IsNullOrEmpty(value);
			if (__this_00 != null) {
				__this_00.enabled = !bVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}
}
