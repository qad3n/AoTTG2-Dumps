// ==================== AoTTG2 cross-reference ====================
// Type: UI.VoiceChatPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/VoiceChatPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/VoiceChatPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000876")]
internal class VoiceChatPanel : BasePanel
{
	[Token(Token = "0x4002AED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _panel;

	[Token(Token = "0x4002AEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly Dictionary<int, Text> _labels;

	[Token(Token = "0x17000E0E")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60050B4")]
		[Address(RVA = "0x5C538D0", Offset = "0x5C528D0", VA = "0x5C538D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/VoiceChatPanel.c (UI.VoiceChatPanel$$get_ThemePanel): clean
			return "VoiceChatPanel";
		}
	}

	[Token(Token = "0x60050B5")]
	[Address(RVA = "0x5C53900", Offset = "0x5C52900", VA = "0x5C53900", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/VoiceChatPanel.c (UI.VoiceChatPanel$$Setup): clean
		UISettings pSVar1;
		IntSetting pSVar2;
		Vector2 value;
		Transform pUVar3;
		GameObject pUVar4;
		LayoutElement pUVar5;
		RectTransform __this_00;

		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("Content/Panel");
			if (pUVar3 != null) {
				pUVar4 = pUVar3.gameObject;
				this._panel = pUVar4;
				pUVar3 = this.transform;
				if (pUVar3 != null) {
					pUVar3 = pUVar3.Find("Content");
					if (pUVar3 != null) {
						pUVar5 = pUVar3.GetComponent<LayoutElement>();
						if (pUVar5 != null) {
							pUVar5.set_preferredHeight(100.0);
							pUVar3 = this.transform ;
							if (pUVar3 != null) {
								__this_00 = pUVar3.GetComponent<RectTransform>();
								pSVar1 = SettingsManager.UISettings;
								if (((pSVar1 != null) &&(pSVar2 = pSVar1.ChatWidth, pSVar2 != null)) &&(__this_00 != null)) {
									value.y = 100.0;
									value.x = (float)pSVar2._value;
									__this_00.sizeDelta = value;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050B6")]
	[Address(RVA = "0x5C53A70", Offset = "0x5C52A70", VA = "0x5C53A70")]
	public void AddPlayer(Player player)
	{
		// Lifted from source/cpp/UI/VoiceChatPanel.c (UI.VoiceChatPanel$$AddPlayer): 2 lines keep C-only constructs
		int iVar1;
		Dictionary<int, object> pSVar2;
		UISettings pSVar3;
		IntSetting pSVar4;
		bool bVar5;
		bool bVar6;
		GameObject pUVar7;
		String pSVar8;
		String pSVar9;
		Transform pUVar10;
		ElementStyle __this_00;
		Text pUVar11;
		Text pUStack_38;

		if (Il2CppMethodInitialized_07547f12 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_Text_Add) ;
			Il2CppMethodInitialized_07547f12 = true;
		}
		pUStack_38 = null;
		if ((player != null) &&(pSVar2 = (Dictionary<int, object>)this._labels, pSVar2 != null)) {
			bVar5 = pSVar2.TryGetValue(player.actorNumber, (object*)&pUStack_38);
			if (bVar5) {
				if ((pUStack_38 == null) ||(pUVar7 = pUStack_38.gameObject, pUVar7 == null)) goto label_05d53d83;
				bVar6 = pUVar7.activeSelf;
				if (bVar6) {
					return;
				}
			}
			iVar1 = player.actorNumber;
			pSVar8 = ChatManager.GetIDString(iVar1, false, false);
			pSVar9 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
			pSVar8 = String.Concat(pSVar8, pSVar9);
			pUVar11 = pUStack_38;
			if (bVar5) {
				if ((typeof(LanguageFonts)._2).cctor_finished_or_no_cctor == 0) {
				}
				LanguageFonts.SetText(pUVar11, pSVar8);
				if ((((pUStack_38 != null) &&(pUVar10 = pUStack_38.transform, pUVar10 != null)) &&(pUVar10.SetAsLastSibling(), pUStack_38 != null)) &&(pUVar7 = pUStack_38.gameObject, pUVar7 != null)) {
					pUVar7.SetActive(true);
					return;
				}
			}
			else {
				pSVar3 = SettingsManager.UISettings;
				if ((pSVar3 != null) &&(pSVar4 = pSVar3.ChatFontSize, pSVar4 != null)) {
					iVar1 = pSVar4._value;
					pSVar9 = this.get_ThemePanel();
					__this_00 = new ElementStyle(iVar1, 120.0, 20.0, pSVar9);
					pUVar7 = this._panel;
					if (pUVar7 != null) {
						pUVar10 = pUVar7.transform;
						pUVar7 = ElementFactory.CreateWhiteLabel(pUVar10, __this_00, pSVar8, 0, 3);
						if (pUVar7 != null) {
							pUVar11 = pUVar7.GetComponent<Text>();
							if ((typeof(LanguageFonts)._2).cctor_finished_or_no_cctor == 0) {
							}
							LanguageFonts.SetText(pUVar11, pSVar8);
							pSVar2 = (Dictionary<int, object>)this._labels;
							if (pSVar2 != null) {
								pSVar2.Add(player.actorNumber, (object)pUVar11);
								return;
							}
						}
					}
				}
			}
		}
	label_05d53d83: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050B7")]
	[Address(RVA = "0x5C53F40", Offset = "0x5C52F40", VA = "0x5C53F40")]
	public void RemovePlayer(Player player)
	{
		// Lifted from source/cpp/UI/VoiceChatPanel.c (UI.VoiceChatPanel$$RemovePlayer): 1 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		bool bVar1;
		GameObject pUVar2;
		Component pUStack_18;

		pUStack_18 = null;
		if ((player != null) &&(__this_00 = (Dictionary<int, object>)this._labels, __this_00 != null)) {
			bVar1 = __this_00.TryGetValue(player.actorNumber, (object*)&pUStack_18);
			if (!bVar1) {
				return;
			}
			if ((pUStack_18 != null) &&(pUVar2 = pUStack_18.gameObject, pUVar2 != null)) {
				bVar1 = pUVar2.activeSelf;
				if (!bVar1) {
					return;
				}
				if ((pUStack_18 != null) &&(pUVar2 = pUStack_18.gameObject, pUVar2 != null)) {
					pUVar2.SetActive(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050B8")]
	[Address(RVA = "0x5C53FF0", Offset = "0x5C52FF0", VA = "0x5C53FF0")]
	public void ClearPlayer(int actorNumber)
	{
		// Lifted from source/cpp/UI/VoiceChatPanel.c (UI.VoiceChatPanel$$ClearPlayer): 1 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		bool bVar2;
		Object obj;
		Component pUStack_20;

		pUStack_20 = null;
		pSVar1 = (Dictionary<int, object>)this._labels;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue(actorNumber, (object*)&pUStack_20);
			if (!bVar2) {
				return;
			}
			if (pUStack_20 != null) {
				obj = (Object)pUStack_20.gameObject;
				Object.Destroy(obj);
				pSVar1 = (Dictionary<int, object>)this._labels;
				if (pSVar1 != null) {
					pSVar1.Remove(actorNumber);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050B9")]
	[Address(RVA = "0x5C540C0", Offset = "0x5C530C0", VA = "0x5C540C0")]
	public VoiceChatPanel()
	{
		// Lifted from source/cpp/UI/VoiceChatPanel.c (UI.VoiceChatPanel$$.ctor): clean
		Dictionary<int, Text> __this_00;

		__this_00 = new Dictionary<int, Text>();
		this._labels = __this_00;
		base();
		return;
	}
}
