// ==================== AoTTG2 cross-reference ====================
// Type: UI.PerkButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PerkButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/PerkButton.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007D0")]
internal class PerkButton : Button
{
	[Token(Token = "0x4002738")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x4002739")]
	[FieldOffset(Offset = "0x110")]
	private float _offset;

	[Token(Token = "0x6004B66")]
	[Address(RVA = "0x5BE2240", Offset = "0x5BE1240", VA = "0x5BE2240")]
	private new void Awake()
	{
		// Lifted from source/cpp/UI/PerkButton.c (UI.PerkButton$$Awake): clean
		Transform pUVar1;
		Image value;

		this.transition = 1;
		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Image");
			if (pUVar1 != null) {
				value = pUVar1.GetComponent<Image>();
				this.targetGraphic = (Graphic)value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B67")]
	[Address(RVA = "0x5BE22D0", Offset = "0x5BE12D0", VA = "0x5BE22D0", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style, float offset)
	{
		// Lifted from source/cpp/UI/PerkButton.c (UI.PerkButton$$Setup): 20 lines keep C-only constructs
		String panel;
		long lVar1;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		Navigation value;
		ColorBlock value_00;
		uint uStack_90;
		uint uStack_8c;
		uint uStack_88;
		uint uStack_84;
		uint uStack_80;
		uint uStack_7c;
		uint uStack_78;
		ColorBlock UStack_70;

		this._tooltipMessage = tooltipMessage;
		this._offset = offset;
		if (style == null) {
			throw new NullReferenceException();
		}
		panel = style.ThemePanel;
		UStack_70 = UIManager.GetThemeColorBlock(panel, "DefaultButton", "", "DefaultPanel");
		value_00.m_NormalColor.b = UStack_70.m_NormalColor.b;
		value_00.m_NormalColor.a = UStack_70.m_NormalColor.a;
		value_00.m_NormalColor.r = UStack_70.m_NormalColor.r;
		value_00.m_NormalColor.g = UStack_70.m_NormalColor.g;
		value_00.m_HighlightedColor.r = UStack_70.m_HighlightedColor.r;
		value_00.m_HighlightedColor.g = UStack_70.m_HighlightedColor.g;
		value_00.m_HighlightedColor.b = UStack_70.m_HighlightedColor.b;
		value_00.m_HighlightedColor.a = UStack_70.m_HighlightedColor.a;
		value_00.m_PressedColor.r = UStack_70.m_PressedColor.r;
		value_00.m_PressedColor.g = UStack_70.m_PressedColor.g;
		value_00.m_PressedColor.b = UStack_70.m_PressedColor.b;
		value_00.m_PressedColor.a = UStack_70.m_PressedColor.a;
		value_00.m_SelectedColor.r = UStack_70.m_SelectedColor.r;
		value_00.m_SelectedColor.g = UStack_70.m_SelectedColor.g;
		value_00.m_SelectedColor.b = UStack_70.m_SelectedColor.b;
		value_00.m_SelectedColor.a = UStack_70.m_SelectedColor.a;
		value_00.m_DisabledColor.r = UStack_70.m_DisabledColor.r;
		value_00.m_DisabledColor.g = UStack_70.m_DisabledColor.g;
		value_00.m_DisabledColor.b = UStack_70.m_DisabledColor.b;
		value_00.m_DisabledColor.a = UStack_70.m_DisabledColor.a;
		value_00.m_ColorMultiplier = UStack_70.m_ColorMultiplier;
		value_00.m_FadeDuration = UStack_70.m_FadeDuration;
		this.colors = value_00;
		lVar1 = *(long)&this.m_Navigation.m_WrapAround;
		uVar2 = *(ulong)((long)&this.m_Navigation.m_SelectOnUp + 4);
		uVar3 = *(ulong)((long)&this.m_Navigation.m_SelectOnDown + 4);
		uVar4 = *(ulong)((long)&this.m_Navigation.m_SelectOnLeft + 4);
		uStack_84 = (undefined4)uVar3;
		uStack_80 = (undefined4)((ulong)uVar3 >> 0x20);
		uStack_7c = (undefined4)uVar4;
		uStack_78 = (undefined4)((ulong)uVar4 >> 0x20);
		uStack_90 = (undefined4)((ulong)lVar1 >> 0x20);
		uStack_8c = (undefined4)uVar2;
		uStack_88 = (undefined4)((ulong)uVar2 >> 0x20);
		value.m_SelectOnRight._4_4_ = *(uint)((long)&this.m_Navigation.m_SelectOnRight + 4);
		value.m_SelectOnRight._0_4_ = uStack_78;
		lVar1 = lVar1 << 0x20;
		value.m_SelectOnUp._4_4_ = uStack_8c;
		value.m_SelectOnUp._0_4_ = uStack_90;
		value.m_SelectOnDown._4_4_ = uStack_84;
		value.m_SelectOnDown._0_4_ = uStack_88;
		value.m_SelectOnLeft._4_4_ = uStack_7c;
		value.m_SelectOnLeft._0_4_ = uStack_80;
		value.m_Mode = (int)lVar1;
		value.m_WrapAround = (bool)(char)((ulong)lVar1 >> 0x20);
		value._5_3_ = (int3)((ulong)lVar1 >> 0x28);
		this.navigation = value;
		return;
	}

	[Token(Token = "0x6004B68")]
	[Address(RVA = "0x5BE2460", Offset = "0x5BE1460", VA = "0x5BE2460", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
		// Lifted from source/cpp/UI/PerkButton.c (UI.PerkButton$$DoStateTransition): clean
		BaseMenu pUVar1;
		TooltipPopup pUVar2;
		Object x;
		bool bVar3;

		this.DoStateTransition(state, instant);
		pUVar1 = UIManager.CurrentMenu;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		pUVar1 = UIManager.CurrentMenu;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.TooltipPopup;
			if (state - 1U < 2) {
				if (pUVar2 != null) {
					pUVar2.Show(this._tooltipMessage, (Component)this, this._offset);
					return;
				}
			}
			else if (pUVar2 != null) {
				x = (Object)pUVar2.Caller;
				bVar3 = (x == (Object)this);
				if (!bVar3) {
					return;
				}
				pUVar1 = UIManager.CurrentMenu;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.TooltipPopup, pUVar2 != null)) {
					pUVar2.Hide();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B69")]
	[Address(RVA = "0x5BE25E0", Offset = "0x5BE15E0", VA = "0x5BE25E0")]
	public PerkButton()
	{
		// Lifted from source/cpp/UI/PerkButton.c (UI.PerkButton$$.ctor): clean
		base();
		return;
	}
}
