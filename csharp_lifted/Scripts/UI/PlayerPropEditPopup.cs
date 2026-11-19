// ==================== AoTTG2 cross-reference ====================
// Type: UI.PlayerPropEditPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PlayerPropEditPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x2000855")]
internal class PlayerPropEditPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Action<string> _onSave;

	[Token(Token = "0x4002A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Action<string, string> _onAdd;

	[Token(Token = "0x4002A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int _targetActorNumber;

	[Token(Token = "0x4002A40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private TMP_InputField _keyInput;

	[Token(Token = "0x4002A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private TMP_InputField _valueInput;

	[Token(Token = "0x4002A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private TMP_Text _statusLabel;

	[Token(Token = "0x17000DDB")]
	protected override string DialogId
	{
		[Token(Token = "0x6004FAC")]
		[Address(RVA = "0x5C3BA30", Offset = "0x5C3AA30", VA = "0x5C3BA30", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$get_DialogId): clean
			return "ingame-moderation-player-prop";
		}
	}

	[Token(Token = "0x6004FAD")]
	[Address(RVA = "0x5C3BA60", Offset = "0x5C3AA60", VA = "0x5C3BA60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$Setup): 1 lines keep C-only constructs
		GisketchView pGVar1;
		GameObject pUVar2;
		TMP_InputField pTVar3;
		TMP_Text pTVar4;

		if (Il2CppMethodInitialized_07547e71 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07547e71 = true;
		}
		this.Setup(parent);
		pGVar1 = this._Dialog_k__BackingField;
		if (pGVar1 != null) {
			pUVar2 = pGVar1.Find("ingame-moderation-player-prop-name");
			if (pUVar2 != null) {
				pTVar3 = pUVar2.GetComponent<TMP_InputField>();
				this._keyInput = pTVar3;
				pGVar1 = this._Dialog_k__BackingField;
				if (pGVar1 != null) {
					pUVar2 = pGVar1.Find("ingame-moderation-player-prop-value") ;
					if (pUVar2 != null) {
						pTVar3 = pUVar2.GetComponent<TMP_InputField>();
						this._valueInput = pTVar3;
						pGVar1 = this._Dialog_k__BackingField;
						if (pGVar1 != null) {
							pUVar2 = pGVar1.Find("ingame-moderation-player-prop-status");
							if (pUVar2 != null) {
								pTVar4 = pUVar2.GetComponent<TMP_Text>();
								this._statusLabel = pTVar4;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FAE")]
	[Address(RVA = "0x5C3BBC0", Offset = "0x5C3ABC0", VA = "0x5C3BBC0")]
	public void ShowEdit(int targetActorNumber, string key, string currentValue, Action<string> onSave)
	{
		// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$ShowEdit): clean
		this._onSave = onSave;
		this._onAdd = null;
		this.ShowForm(targetActorNumber, key, currentValue, false);
		return;
	}

	[Token(Token = "0x6004FAF")]
	[Address(RVA = "0x5C3BE00", Offset = "0x5C3AE00", VA = "0x5C3BE00")]
	public void ShowAdd(int targetActorNumber, Action<string, string> onAdd)
	{
		// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$ShowAdd): clean


		this._onSave = null;
		this._onAdd = onAdd;
		this.ShowForm(targetActorNumber, (String)**(ulong*)(g_data_07556758 + 0xb8), (String)**(ulong*)(g_data_07556758 + 0xb8), true);
		return;
	}

	[Token(Token = "0x6004FB0")]
	[Address(RVA = "0x5C3BC20", Offset = "0x5C3AC20", VA = "0x5C3BC20")]
	private void ShowForm(int targetActorNumber, string key, string value, bool addMode)
	{
		// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$ShowForm): 2 lines keep C-only constructs
		uint uVar1;
		TMP_InputField pTVar2;
		TMP_Text pTVar3;
		AottgInGameView __this_00;
		String key_00;
		String* ppSVar4;
		String value_00;

		this._targetActorNumber = targetActorNumber;
		pTVar2 = this._keyInput;
		if (pTVar2 != null) {
			pTVar2.SetTextWithoutNotify(key);
			pTVar2 = this._keyInput;
			if (pTVar2 != null) {
				pTVar2.m_ReadOnly = !addMode;
				pTVar2 = this._valueInput;
				if (value == null) {
					value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				if (pTVar2 != null) {
					pTVar2.SetTextWithoutNotify(value);
					pTVar3 = this._statusLabel;
					if (pTVar3 != null) {
						pTVar3.set_text((String)**(ulong*)(g_data_07556758 + 0xb8));
						key_00 = "ingame-moderation-player-prop-title";
						__this_00 = this._View_k__BackingField;
						uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
						if (addMode) {
							if (uVar1 == 0) {
							}
							ppSVar4 = &"AddProp";
						}
						else {
							if (uVar1 == 0) {
							}
							ppSVar4 = &"EditProp";
						}
						value_00 = UIManager.GetLocale("ScoreboardPopup", "Moderation", *ppSVar4, "", "");
						if (__this_00 != null) {
							__this_00.SetState(key_00, value_00);
							this.Show();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FB1")]
	[Address(RVA = "0x5C3BE70", Offset = "0x5C3AE70", VA = "0x5C3BE70")]
	internal void Save()
	{
		// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$Save): clean
		TMP_InputField pTVar1;
		Action<string, string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		String pSVar5;
		Room pPVar6;
		Player __this_00;
		Hashtable __this_01;
		TMP_Text pTVar7;
		String pSVar8;
		String category;

		if (this.IsActive == false) {
			return;
		}
		pTVar1 = this._keyInput;
		if ((pTVar1 != null) &&(pSVar5 = pTVar1.m_Text, pSVar5 != null)) {
			pSVar5 = pSVar5.Trim();
			pTVar1 = this._valueInput;
			if (pTVar1 != null) {
				pSVar8 = pTVar1.m_Text;
				bVar4 = String.IsNullOrEmpty(pSVar5);
				if (bVar4) {
					pTVar7 = this._statusLabel;
					pSVar5 = "";
					pSVar8 = "EmptyName";
					category = "Common";
				}
				else {
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
						pPVar6 = PhotonNetwork.CurrentRoom;
					}
					else {
						pPVar6 = PhotonNetwork.CurrentRoom;
					}
					if ((pPVar6 != null) &&(__this_00 = pPVar6.GetPlayer(this._targetActorNumber, false), __this_00 != null)) {
						__this_01 = new Hashtable();
						if (__this_01 != null) {
							__this_01.set_Item((object)pSVar5, (object)pSVar8);
							__this_00.SetCustomProperties(__this_01, null, null);
							pSVar2 = this._onAdd;
							if (pSVar2 != null) {
								(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar5,pSVar8,pSVar2.method);
							}
							pSVar3 = this._onSave;
							if (pSVar3 != null) {
								(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar8,pSVar3.method);
							}
							this.Hide();
							return;
						}
						goto label_05d3c11b;
					}
					pTVar7 = this._statusLabel;
					pSVar5 = "PlayerNotFound";
					pSVar8 = "Moderation";
					category = "ScoreboardPopup";
				}
				pSVar5 = UIManager.GetLocale(category, pSVar8, pSVar5, "", "");
				if (pTVar7 != null) {
					pTVar7.set_text(pSVar5);
					return;
				}
			}
		}
	label_05d3c11b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FB2")]
	[Address(RVA = "0x5C3C120", Offset = "0x5C3B120", VA = "0x5C3C120")]
	public PlayerPropEditPopup()
	{
		// Lifted from source/cpp/UI/PlayerPropEditPopup.c (UI.PlayerPropEditPopup$$.ctor): clean
		base();
		return;
	}
}
