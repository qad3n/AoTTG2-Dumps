// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BaseSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/BaseSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007E9")]
internal abstract class BaseSettingElement : MonoBehaviour
{
	[Token(Token = "0x400277A")]
	[FieldOffset(Offset = "0x20")]
	protected BaseSetting _setting;

	[Token(Token = "0x400277B")]
	[FieldOffset(Offset = "0x28")]
	protected SettingType _settingType;

	[Token(Token = "0x400277C")]
	[FieldOffset(Offset = "0x30")]
	protected ElementStyle _style;

	[Token(Token = "0x17000D43")]
	protected virtual HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C10")]
		[Address(RVA = "0x5BED130", Offset = "0x5BEC130", VA = "0x5BED130", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$get_SupportedSettingTypes): clean
			HashSet<SettingType> __this_00;

			__this_00 = new HashSet<SettingType>();
			return __this_00;
		}
	}

	[Token(Token = "0x6004C11")]
	[Address(RVA = "0x5BED190", Offset = "0x5BEC190", VA = "0x5BED190", Slot = "5")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip)
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$Setup): 7 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		HashSet<SettingType> __this_00;
		Il2CppClass klass;
		ArgumentException __this_01;
		String message;
		MethodInfo lastManagedFrame;
		MethodInfo* method_00;

		this._setting = setting;
		iVar2 = SettingsUtil.GetSettingType(setting);
		this._settingType = iVar2;
		this._style = style;
		__this_00 = this.get_SupportedSettingTypes();
		if (__this_00 != null) {
			method_00 = &MethodInfo_System_Collections_Generic_HashSet_SettingType_Contains;
			bVar1 = __this_00.Contains(this._settingType);
			if (!bVar1) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
				message = il2cpp_codegen_get_runtime_metadata(&"Unsupported setting type being used for UI element.");
				__this_01 = new ArgumentException(message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BaseSettingElement_Setup);
				throw (object)__this_01;
			}
			if (style != null) {
				this.SetupTitle(title, style.FontSize, style.TitleWidth);
				this.SetupTooltip(tooltip, style);
				this.SyncElement();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C12")]
	[Address(RVA = "0x5BED550", Offset = "0x5BEC550", VA = "0x5BED550")]
	protected void SetupTooltip(string tooltip, ElementStyle style)
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$SetupTooltip): clean
		bool bVar1;
		Transform pUVar2;
		GameObject __this_00;
		TooltipButton pUVar3;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.Find("TooltipIcon");
			if (pUVar2 != null) {
				__this_00 = pUVar2.gameObject;
				bVar1 = (tooltip == (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar1) {
					if (__this_00 != null) {
						__this_00.SetActive(false);
						return;
					}
				}
				else if (__this_00 != null) {
					pUVar3 = __this_00.AddComponent<TooltipButton>();
					if (pUVar3 != null) {
						pUVar3.Setup(tooltip, style);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C13")]
	public abstract void SyncElement();

	[Token(Token = "0x6004C14")]
	[Address(RVA = "0x5BED2C0", Offset = "0x5BEC2C0", VA = "0x5BED2C0")]
	protected SettingType GetSettingType(BaseSetting setting)
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$GetSettingType): clean
		int iVar1;

		return iVar1;
	}

	[Token(Token = "0x6004C15")]
	[Address(RVA = "0x5BED2D0", Offset = "0x5BEC2D0", VA = "0x5BED2D0")]
	protected void SetupTitle(string title, int fontSize, float titleWidth)
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$SetupTitle): clean
		ElementStyle pUVar1;
		String panel;
		bool bVar2;
		GameObject pUVar3;
		Transform pUVar4;
		Text pUVar5;
		LayoutElement pUVar6;
		Color UVar7;

		pUVar3 = this.gameObject;
		if (pUVar3 != null) {
			pUVar4 = pUVar3.transform;
			if (pUVar4 != null) {
				pUVar4 = pUVar4.Find("Label");
				if (pUVar4 != null) {
					pUVar3 = pUVar4.gameObject;
					bVar2 = (title == (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (bVar2) {
						if (pUVar3 != null) {
							pUVar3.SetActive(false);
							return;
						}
					}
					else {
						if (pUVar3 != null) {
							pUVar5 = pUVar3.GetComponent<Text>();
							if (pUVar5 != null) {
								pUVar5.set_text(title);
								pUVar5.fontSize = fontSize;
								pUVar6 = pUVar3.GetComponent<LayoutElement>();
								if (pUVar6 != null) {
									pUVar6.set_preferredWidth(titleWidth);
									if (titleWidth <= 0.0) {
										pUVar6 = pUVar3.GetComponent<LayoutElement>();
										if (pUVar6 == null) goto label_05ced543;
										pUVar6.set_preferredWidth(-1.0);
									}
									pUVar5 = pUVar3.GetComponent<Text>();
									pUVar1 = this._style;
									if (pUVar1 != null) {
										panel = pUVar1.ThemePanel;
										UVar7 = UIManager.GetThemeColor(panel, "DefaultSetting", "TextColor", "DefaultPanel");
										if (pUVar5 != null) {
											pUVar5.set_color(UVar7);
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05ced543: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C16")]
	[Address(RVA = "0x5BED650", Offset = "0x5BEC650", VA = "0x5BED650")]
	protected void SetupLabel(GameObject obj, string title, int fontSize)
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$SetupLabel): clean
		Text __this_00;

		if (obj != null) {
			__this_00 = obj.GetComponent<Text>();
			if (__this_00 != null) {
				__this_00.set_text(title);
				__this_00.fontSize = fontSize;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C17")]
	[Address(RVA = "0x5BED6D0", Offset = "0x5BEC6D0", VA = "0x5BED6D0")]
	protected void SetupLabel(GameObject obj, string title)
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$SetupLabel): clean
		Text pUVar1;

		if (obj != null) {
			pUVar1 = obj.GetComponent<Text>();
			if (pUVar1 != null) {
				pUVar1.set_text(title);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C18")]
	[Address(RVA = "0x5BED740", Offset = "0x5BEC740", VA = "0x5BED740")]
	protected BaseSettingElement()
	{
		// Lifted from source/cpp/UI/BaseSettingElement.c (UI.BaseSettingElement$$.ctor): clean
		base();
		return;
	}
}
