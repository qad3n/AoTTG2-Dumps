// ==================== AoTTG2 cross-reference ====================
// Type: UI.FeedPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/FeedPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/FeedPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200083D")]
internal class FeedPanel : BasePanel
{
	[Token(Token = "0x400291B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x400291C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private List<GameObject> _lines;

	[Token(Token = "0x400291D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Transform _horizontalLine;

	[Token(Token = "0x17000DA5")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E89")]
		[Address(RVA = "0x5C21340", Offset = "0x5C20340", VA = "0x5C21340", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$get_ThemePanel): clean
			return "ChatPanel";
		}
	}

	[Token(Token = "0x6004E8A")]
	[Address(RVA = "0x5C21370", Offset = "0x5C20370", VA = "0x5C21370", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$Setup): 3 lines keep C-only constructs
		GameObject* targetAddress;
		UISettings pSVar1;
		IntSetting pSVar2;
		Vector2 value;
		Transform pUVar3;
		GameObject pUVar4;
		LayoutElement pUVar5;
		RectTransform __this_00;
		String themePanel;
		ElementStyle __this_01;
		MethodInfo method_00;

		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("Content/Panel");
			if (pUVar3 != null) {
				pUVar4 = pUVar3.gameObject;
				targetAddress = &this._panel;
				this._panel = pUVar4;
				pUVar3 = this.transform;
				if (pUVar3 != null) {
					pUVar3 = pUVar3.Find("Content");
					if (pUVar3 != null) {
						pUVar5 = pUVar3.GetComponent<LayoutElement>();
						pSVar1 = SettingsManager.UISettings;
						if (((pSVar1 != null) &&(pSVar2 = pSVar1.ChatHeight, pSVar2 != null)) &&(pUVar5 != null)) {
							pUVar5.set_preferredHeight((float)pSVar2._value);
							pUVar3 = this.transform ;
							if (pUVar3 != null) {
								__this_00 = pUVar3.GetComponent<RectTransform>();
								pSVar1 = SettingsManager.UISettings;
								if (((pSVar1 != null) &&(pSVar2 = pSVar1.ChatWidth, pSVar2 != null)) &&(__this_00 != null)) {
									value.y = 0.0;
									value.x = (float)pSVar2._value;
									__this_00.sizeDelta = value;
									pUVar4 = *targetAddress;
									if (pUVar4 != null) {
										pUVar3 = pUVar4.transform;
										themePanel = this.get_ThemePanel();
										__this_01 = new ElementStyle(0x18, 120.0, 20.0, themePanel);
										pSVar1 = SettingsManager.UISettings;
										if ((pSVar1 != null) &&(pSVar2 = pSVar1.ChatWidth, pSVar2 != null)) {
											pUVar4 = ElementFactory.CreateHorizontalLine(pUVar3, __this_01, (float)pSVar2._value, 2.0) ;
											if (pUVar4 != null) {
												method_00 = (MethodInfo)pUVar4.transform;
												this._horizontalLine = (Transform)method_00;
												this.Sync();
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
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E8B")]
	[Address(RVA = "0x5C21600", Offset = "0x5C20600", VA = "0x5C21600")]
	public void Sync()
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$Sync): 4 lines keep C-only constructs
		int piVar1;
		uint length;
		List<GameObject> pSVar2;
		object obj;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar2 = this._lines;
		if (pSVar2 != null) {
			local_58 = pSVar2.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				obj = local_58._current;
				if (!bVar3) break;
				Object.Destroy((Object)obj);
			}
			local_58.Dispose() ;
			pSVar2 = this._lines;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < (int)length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				this.AddLines(ChatManager.FeedLines);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E8C")]
	[Address(RVA = "0x5C219A0", Offset = "0x5C209A0", VA = "0x5C219A0")]
	public void AddLine(string line)
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$AddLine): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		MethodInfo method_00;

		__this_00 = this._lines;
		method_00 = (MethodInfo)this.CreateLine(line);
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar3 = __this_00._items;
			if (pUVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pUVar3.Length) {
					__this_00._size = uVar2 + 1;
					pUVar3[(int)uVar2] = (GameObject)method_00;
				}
				else {
					__this_00.AddWithResize((object)method_00);
				}
				Canvas.ForceUpdateCanvases();
				this.ClearExcessLines();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E8D")]
	[Address(RVA = "0x5C217E0", Offset = "0x5C207E0", VA = "0x5C217E0")]
	public void AddLines(List<string> lines)
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$AddLines): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		bool bVar4;
		GameObject item;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (lines == null) {
			throw new NullReferenceException();
		}
		local_58 = lines.GetEnumerator();
		local_30 = (byte)&local_58;
		while(true) {
			bVar4 = local_58.MoveNext();
			if (!bVar4) {
				local_58.Dispose();
				Canvas.ForceUpdateCanvases();
				this.ClearExcessLines();
				return;
			}
			__this_00 = this._lines;
			item = this.CreateLine((String)local_58._current);
			if (__this_00 == null) break;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar3 = __this_00._items;
			if (pUVar3 == null) break;
			uVar2 = __this_00._size;
			if (uVar2 < (uint)pUVar3.Length) {
				__this_00._size = uVar2 + 1;
				pUVar3[(int)uVar2] = item;
			}
			else {
				__this_00.AddWithResize((object)item);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E8E")]
	[Address(RVA = "0x5C21C60", Offset = "0x5C20C60", VA = "0x5C21C60")]
	protected void ClearExcessLines()
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$ClearExcessLines): clean
		int iVar1;
		UISettings pSVar2;
		IntSetting pSVar3;
		GameObject pUVar4;
		RectTransform pUVar5;
		Object obj;
		int index;
		List<GameObject> pSVar6;
		Vector2 UVar7;
		float local_34;

		pSVar2 = SettingsManager.UISettings;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.ChatHeight, pSVar3 != null)) &&(pSVar6 = this._lines, pSVar6 != null)) {
			iVar1 = pSVar3._value;
			index = 0;
			local_34 = 0.0;
			while (index < pSVar6._size) {
				pUVar4 = pSVar6.get_Item(index);
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.GetComponent<RectTransform>(), pUVar5 == null)) goto label_05d21e78;
				UVar7 = pUVar5.sizeDelta;
				local_34 = local_34 + UVar7.y;
				index = index + 1;
				pSVar6 = this._lines;
				if (pSVar6 == null) goto label_05d21e78;
			}
			local_34 = local_34 - (float)iVar1;
			if (local_34 <= 0.0) {
				return;
			}
			pSVar6 = this._lines;
			if (pSVar6 != null) goto label_05d21dd0;
		}
		goto label_05d21e78;
		while(true) {
			UVar7 = pUVar5.sizeDelta;
			local_34 = local_34 - UVar7.y;
			if (local_34 <= 0.0) {
				return;
			}
			pSVar6 = this._lines;
			if (pSVar6 == null) break;
			obj = (Object)pSVar6.get_Item(0);
			Object.Destroy(obj);
			pSVar6 = this._lines;
			if (pSVar6 == null) break;
			pSVar6.RemoveAt(0);
			pSVar6 = this._lines;
			if (pSVar6 == null) break;
	label_05d21dd0: ;
			if (pSVar6._size < 1) {
				return;
			}
			pUVar4 = pSVar6.get_Item(0);
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.GetComponent<RectTransform>(), pUVar5 == null)) break;
		}
	label_05d21e78: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E8F")]
	[Address(RVA = "0x5C21A50", Offset = "0x5C20A50", VA = "0x5C21A50")]
	protected GameObject CreateLine(string text)
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$CreateLine): clean
		int fontSize;
		UISettings pSVar1;
		IntSetting pSVar2;
		String pSVar3;
		ElementStyle __this_00;
		Transform pUVar4;
		GameObject pUVar5;
		Text text_00;
		Color UVar6;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.ChatFontSize, pSVar2 != null)) {
			fontSize = pSVar2._value;
			pSVar3 = this.get_ThemePanel();
			__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar3);
			pUVar5 = this._panel;
			if (pUVar5 != null) {
				pUVar4 = pUVar5.transform;
				pUVar5 = ElementFactory.CreateDefaultLabel(pUVar4, __this_00, text, 0, 3);
				if (pUVar5 != null) {
					text_00 = pUVar5.GetComponent<Text>() ;
					if (__this_00 != null) {
						pSVar3 = __this_00.ThemePanel;
						UVar6 = UIManager.GetThemeColor(pSVar3, "TextColor", "Default", "DefaultPanel");
						if (text_00 != null) {
							text_00.set_color(UVar6);
							LanguageFonts.SetText(text_00, text);
							pUVar4 = this._horizontalLine;
							if (pUVar4 != null) {
								pUVar4.SetAsLastSibling();
								return pUVar5;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E90")]
	[Address(RVA = "0x5C21E90", Offset = "0x5C20E90", VA = "0x5C21E90")]
	public FeedPanel()
	{
		// Lifted from source/cpp/UI/FeedPanel.c (UI.FeedPanel$$.ctor): clean
		List<GameObject> __this_00;

		__this_00 = new List<GameObject>();
		this._lines = __this_00;
		base();
		return;
	}
}
