// ==================== AoTTG2 cross-reference ====================
// Type: UI.TooltipButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TooltipButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/TooltipButton.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000802")]
internal class TooltipButton : Button
{
	[Token(Token = "0x40027E5")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x6004CBB")]
	[Address(RVA = "0x5BF94D0", Offset = "0x5BF84D0", VA = "0x5BF94D0")]
	private new void Awake()
	{
		// Lifted from source/cpp/UI/TooltipButton.c (UI.TooltipButton$$Awake): clean
		Graphic value;

		this.transition = 1;
		value = this.GetComponent<Graphic>();
		this.targetGraphic = value;
		return;
	}

	[Token(Token = "0x6004CBC")]
	[Address(RVA = "0x5BF9520", Offset = "0x5BF8520", VA = "0x5BF9520", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style)
	{
		// Lifted from source/cpp/UI/TooltipButton.c (UI.TooltipButton$$Setup): clean
		String panel;
		ColorBlock value;
		ColorBlock local_70;

		this._tooltipMessage = tooltipMessage;
		if (style == null) {
			throw new NullReferenceException();
		}
		panel = style.ThemePanel;
		local_70 = UIManager.GetThemeColorBlock(panel, "DefaultSetting", "Icon", "DefaultPanel");
		value.m_NormalColor.b = local_70.m_NormalColor.b;
		value.m_NormalColor.a = local_70.m_NormalColor.a;
		value.m_NormalColor.r = local_70.m_NormalColor.r;
		value.m_NormalColor.g = local_70.m_NormalColor.g;
		value.m_HighlightedColor.r = local_70.m_HighlightedColor.r;
		value.m_HighlightedColor.g = local_70.m_HighlightedColor.g;
		value.m_HighlightedColor.b = local_70.m_HighlightedColor.b;
		value.m_HighlightedColor.a = local_70.m_HighlightedColor.a;
		value.m_PressedColor.r = local_70.m_PressedColor.r;
		value.m_PressedColor.g = local_70.m_PressedColor.g;
		value.m_PressedColor.b = local_70.m_PressedColor.b;
		value.m_PressedColor.a = local_70.m_PressedColor.a;
		value.m_SelectedColor.r = local_70.m_SelectedColor.r;
		value.m_SelectedColor.g = local_70.m_SelectedColor.g;
		value.m_SelectedColor.b = local_70.m_SelectedColor.b;
		value.m_SelectedColor.a = local_70.m_SelectedColor.a;
		value.m_DisabledColor.r = local_70.m_DisabledColor.r;
		value.m_DisabledColor.g = local_70.m_DisabledColor.g;
		value.m_DisabledColor.b = local_70.m_DisabledColor.b;
		value.m_DisabledColor.a = local_70.m_DisabledColor.a;
		value.m_ColorMultiplier = local_70.m_ColorMultiplier;
		value.m_FadeDuration = local_70.m_FadeDuration;
		this.colors = value;
		return;
	}

	[Token(Token = "0x6004CBD")]
	[Address(RVA = "0x5BF9640", Offset = "0x5BF8640", VA = "0x5BF9640", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
		// Lifted from source/cpp/UI/TooltipButton.c (UI.TooltipButton$$DoStateTransition): clean
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
					pUVar2.Show(this._tooltipMessage, (Component)this, 40.0);
					return;
				}
			}
			else {
				if (state != 0) {
					return;
				}
				if (pUVar2 != null) {
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
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CBE")]
	[Address(RVA = "0x5BF97D0", Offset = "0x5BF87D0", VA = "0x5BF97D0")]
	public TooltipButton()
	{
		// Lifted from source/cpp/UI/TooltipButton.c (UI.TooltipButton$$.ctor): clean
		base();
		return;
	}
}
