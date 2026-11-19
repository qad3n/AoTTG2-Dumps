// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/EmoteHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace UI;

[Token(Token = "0x200083A")]
internal class EmoteHandler : MonoBehaviour
{
	[Token(Token = "0x4002900")]
	[FieldOffset(Offset = "0x20")]
	private List<EmoteTextPopup> _emoteTextPopups;

	[Token(Token = "0x4002901")]
	[FieldOffset(Offset = "0x28")]
	private List<EmoteTextPopup> _emoteEmojiPopups;

	[Token(Token = "0x4002902")]
	[FieldOffset(Offset = "0x30")]
	private BasePopup _emoteWheelPopup;

	[Token(Token = "0x4002903")]
	[FieldOffset(Offset = "0x38")]
	private EmoteWheelState _currentEmoteWheelState;

	[Token(Token = "0x4002904")]
	[FieldOffset(Offset = "0x3C")]
	private float _currentEmoteCooldown;

	[Token(Token = "0x4002905")]
	public const float EmoteCooldown = 3f;

	[Token(Token = "0x4002906")]
	[FieldOffset(Offset = "0x40")]
	public bool IsActive;

	[Token(Token = "0x4002907")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002908")]
	protected const float Range = 500f;

	[Token(Token = "0x4002909")]
	protected const float HumanOffset = 4f;

	[Token(Token = "0x400290A")]
	protected const float HumanVoiceChatOffset = 2f;

	[Token(Token = "0x400290B")]
	protected const float TitanOffset = 25f;

	[Token(Token = "0x400290C")]
	protected const float CrawlerOffset = 15f;

	[Token(Token = "0x400290D")]
	protected const float ShifterOffset = 70f;

	[Token(Token = "0x400290E")]
	protected const float ShowTime = 3f;

	[Token(Token = "0x400290F")]
	[FieldOffset(Offset = "0x50")]
	protected LayerMask CullMask;

	[Token(Token = "0x6004E6C")]
	[Address(RVA = "0x5C1E380", Offset = "0x5C1D380", VA = "0x5C1E380")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$Awake): 11 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		List<EmoteTextPopup> pSVar4;
		EmoteTextPopup[] pUVar5;
		Il2CppClass* ppIVar6;
		InGameManager pGVar7;
		InGameManager pGVar8;
		WheelPopup pUVar9;
		Transform pUVar11;
		GameObject pUVar12;
		EmoteTextPopup item;
		EmoteEmojiPopup item_00;
		BasePopup pUVar13;
		UnityAction __this_00;
		int iVar14;

		if (Il2CppMethodInitialized_07547db9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_EmoteTextPopup) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_Add) ;
			Il2CppMethodInitialized_07547db9 = true;
		}
		iVar14 = 5;
		do {
			while(true) {
				pUVar11 = this.transform;
				pUVar12 = ElementFactory.InstantiateAndSetupPanel<EmoteTextPopup>(pUVar11, "Prefabs/InGame/EmoteTextPopup", false);
				if (pUVar12 == null) goto label_05d1e734;
				item = pUVar12.GetComponent<EmoteTextPopup>();
				pSVar4 = this._emoteTextPopups;
				if (pSVar4 == null) goto label_05d1e734;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = pSVar4._items;
				if (pUVar5 == null) goto label_05d1e734;
				uVar3 = pSVar4._size;
				if (uVar3 < (uint)pUVar5.Length) {
					pSVar4._size = uVar3 + 1;
					pUVar5[(int)uVar3] = item;
				}
				else {
					pSVar4.AddWithResize((object)item);
				}
				pUVar11 = this.transform;
				pUVar12 = ElementFactory.InstantiateAndSetupPanel<EmoteEmojiPopup>(pUVar11, "Prefabs/InGame/EmoteEmojiPopup", false);
				if (pUVar12 == null) goto label_05d1e734;
				item_00 = pUVar12.GetComponent<EmoteEmojiPopup>();
				pSVar4 = this._emoteEmojiPopups;
				if (pSVar4 == null) goto label_05d1e734;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = pSVar4._items;
				if (pUVar5 == null) goto label_05d1e734;
				uVar3 = pSVar4._size;
				if ((uint)pUVar5.Length <= uVar3) break;
				pSVar4._size = uVar3 + 1;
				pUVar5[(int)uVar3] = (EmoteTextPopup)item_00;
				iVar14 = iVar14 + -1;
				if (iVar14 == 0) goto label_05d1e5c7;
			}
			pSVar4.AddWithResize((object)item_00);
			iVar14 = iVar14 + -1;
		} while (iVar14 != 0);
	label_05d1e5c7: ;
		pUVar11 = this.transform;
		pUVar12 = ElementFactory.InstantiateAndSetupPanel<WheelPopup>(pUVar11, "Prefabs/InGame/WheelMenu", false) ;
		if (pUVar12 != null) {
			pUVar13 = pUVar12.GetComponent<BasePopup>();
			this._emoteWheelPopup = pUVar13;
			pUVar13 = this._emoteWheelPopup;
			__this_00 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_EmoteHandler_Awake_b__16_0);
			pUVar9 = typeof(WheelPopup);
			if (pUVar13 != null) {
				bVar2 = (typeof(WheelPopup)._2).typeHierarchyDepth;
				if ((((pUVar13.klass._2).typeHierarchyDepth < bVar2) ||(ppIVar6 = (pUVar13.klass._2).typeHierarchy, ppIVar6[(ulong)bVar2 - 1] != typeof(WheelPopup))) ||((*(ulong)((sbyte)pUVar13 + 0xc0)) =(CancellationTokenSource)__this_00, ppIVar6[(ulong)bVar2 - 1] != (Il2CppClass)pUVar9)) {
					throw new InvalidCastException();
				}
				pGVar8 = typeof(InGameManager);
				pGVar7 = (InGameManager)SceneLoader.CurrentGameManager;
				if (pGVar7 == null) {
					this._inGameManager = null;
	label_05d1e71a: ;
					return;
				}
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if ((bVar2 <= (pGVar7.klass._2).typeHierarchyDepth) &&((pGVar7.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(InGameManager))) {
					this._inGameManager = pGVar7;
					if ((bVar2 <= (pGVar7.klass._2).typeHierarchyDepth) &&((pGVar7.klass._2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass)pGVar8)) goto label_05d1e71a;
				}
				throw new InvalidCastException();
			}
		}
	label_05d1e734: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E6D")]
	[Address(RVA = "0x5C1E750", Offset = "0x5C1D750", VA = "0x5C1E750")]
	public static void OnEmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$OnEmoteTextRPC): clean
		BaseMenu pUVar1;
		UISettings pSVar2;
		BoolSetting pSVar3;
		HashSet<int> __this;
		BaseComponentCache pUVar4;
		PhotonView pPVar5;
		bool bVar6;
		BaseCharacter character;
		EmoteHandler __this_00;
		String text_00;

		pUVar1 = UIManager.CurrentMenu;
		bVar6 = ((Object)pUVar1 == null);
		if (!bVar6) {
			pSVar2 = SettingsManager.UISettings;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.ShowEmotes, pSVar3 == null)) {
	label_05d1e9c5: ;
				throw new NullReferenceException();
			}
			if (pSVar3._value != false) {
				if ((info.Sender == null) ||(__this = InGameManager.MuteEmote, __this == null)) goto label_05d1e9c5;
				bVar6 = __this.Contains(((info.Sender).fields).actorNumber);
				if (!bVar6) {
					character = Util.FindCharacterByViewId(viewId);
					if (((character == null) ||(pUVar4 = character.Cache, pUVar4 == null)) ||(pPVar5 = pUVar4.PhotonView, pPVar5 == null)) goto label_05d1e9c5;
					if (info.Sender == pPVar5._Owner_k__BackingField) {
						pUVar1 = UIManager.CurrentMenu;
						if (pUVar1 == null) goto label_05d1e9c5;
						__this_00 = pUVar1.GetComponent<EmoteHandler>();
						bVar6 = ((Object)character != null);
						if (bVar6) {
							bVar6 = ((Object)__this_00 != null);
							if (bVar6) {
								text_00 = EmoteHandler.SanitizeText(text);
								if (__this_00 != null) {
									__this_00.ShowEmoteText(text_00, character);
									return;
								}
								goto label_05d1e9c5;
							}
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004E6E")]
	[Address(RVA = "0x5C1EAA0", Offset = "0x5C1DAA0", VA = "0x5C1EAA0")]
	public static void OnEmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$OnEmoteEmojiRPC): clean
		BaseMenu pUVar1;
		UISettings pSVar2;
		BoolSetting pSVar3;
		HashSet<int> __this;
		BaseComponentCache pUVar4;
		PhotonView pPVar5;
		bool bVar6;
		BaseCharacter character;
		EmoteHandler __this_00;

		pUVar1 = UIManager.CurrentMenu;
		bVar6 = ((Object)pUVar1 == null);
		if (!bVar6) {
			pSVar2 = SettingsManager.UISettings;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.ShowEmotes, pSVar3 == null)) {
	label_05d1ed0d: ;
				throw new NullReferenceException();
			}
			if (pSVar3._value != false) {
				if ((info.Sender == null) ||(__this = InGameManager.MuteEmote, __this == null)) goto label_05d1ed0d;
				bVar6 = __this.Contains(((info.Sender).fields).actorNumber);
				if (!bVar6) {
					character = Util.FindCharacterByViewId(viewId);
					if (((character == null) ||(pUVar4 = character.Cache, pUVar4 == null)) ||(pPVar5 = pUVar4.PhotonView, pPVar5 == null)) goto label_05d1ed0d;
					if (info.Sender == pPVar5._Owner_k__BackingField) {
						pUVar1 = UIManager.CurrentMenu;
						if (pUVar1 == null) goto label_05d1ed0d;
						__this_00 = pUVar1.GetComponent<EmoteHandler>();
						bVar6 = ((Object)character != null);
						if (bVar6) {
							bVar6 = ((Object)__this_00 != null);
							if (bVar6) {
								if (__this_00 != null) {
									__this_00.ShowEmoteEmoji(emoji, character);
									return;
								}
								goto label_05d1ed0d;
							}
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004E6F")]
	[Address(RVA = "0x5C1EA40", Offset = "0x5C1DA40", VA = "0x5C1EA40")]
	private void ShowEmoteText(string text, BaseCharacter character)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$ShowEmoteText): clean
		EmoteTextPopup pUVar1;
		Vector3 UVar2;

		pUVar1 = this.GetAvailablePopup(this._emoteTextPopups);
		UVar2 = this.GetOffset(character);
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Load(text, 3.0, character, UVar2);
		return;
	}

	[Token(Token = "0x6004E70")]
	[Address(RVA = "0x5C1ED20", Offset = "0x5C1DD20", VA = "0x5C1ED20")]
	private void ShowEmoteEmoji(string emoji, BaseCharacter character)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$ShowEmoteEmoji): 3 lines keep C-only constructs
		byte bVar1;
		EmoteTextPopup pUVar2;
		EmoteTextPopup pUVar3;
		EmoteEmojiPopup* __this_00;
		Vector3 UVar4;

		__this_00 = (EmoteEmojiPopup*)this;
		if (g_data_07547dbc == false) {
			__this_00 = &typeof(EmoteEmojiPopup);
			g_data_07547dbc = true;
		}
		pUVar3 = __this_00.GetAvailablePopup(this._emoteEmojiPopups);
		UVar4 = __this_00.GetOffset(character);
		if (pUVar3 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar3.klass;
		bVar1 = (typeof(EmoteEmojiPopup)._2).typeHierarchyDepth;
		if (((pUVar2._2).typeHierarchyDepth < bVar1) ||((pUVar2._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(EmoteEmojiPopup))) {
			throw new InvalidCastException();
		}
		pUVar3.Load(emoji, 3.0, character, UVar4);
		return;
	}

	[Token(Token = "0x6004E71")]
	[Address(RVA = "0x5C1F200", Offset = "0x5C1E200", VA = "0x5C1F200")]
	private void ShowVoiceEmoji(string emoji, BaseCharacter character)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$ShowVoiceEmoji): 4 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		EmoteTextPopup pUVar6;
		EmoteTextPopup pUVar7;
		EmoteEmojiPopup* __this_00;
		Vector3 UVar8;

		__this_00 = (EmoteEmojiPopup*)this;
		if (g_data_07547dbd == false) {
			__this_00 = &typeof(EmoteEmojiPopup);
			g_data_07547dbd = true;
		}
		pUVar6 = __this_00.GetAvailablePopup(this._emoteEmojiPopups);
		if (pUVar6 == null) {
			throw new NullReferenceException();
		}
		pUVar7 = pUVar6.klass;
		bVar4 = (typeof(EmoteEmojiPopup)._2).typeHierarchyDepth;
		if (((pUVar7._2).typeHierarchyDepth < bVar4) ||((pUVar7._2).typeHierarchy[(ulong)bVar4 - 1] != typeof(EmoteEmojiPopup))) {
			throw new InvalidCastException();
		}
		pUVar6.infinitePopup = true;
		if (Il2CppMethodInitialized_0753e72c == false) {
			Il2CppMethodInitialized_0753e72c = true;
			pUVar7 = pUVar6.klass;
		}
		uVar2 = (Vector3.upVector).x;
		uVar3 = (Vector3.upVector).y;
		fVar1 = (Vector3.upVector).z;
		UVar8.x = (float)uVar2 + (float)uVar2;
		UVar8.y = (float)uVar3 + (float)uVar3;
		UVar8.z = fVar1 + fVar1;
		pUVar6.Load(emoji, 0.1, character, UVar8);
		return;
	}

	[Token(Token = "0x6004E72")]
	[Address(RVA = "0x5C1F2F0", Offset = "0x5C1E2F0", VA = "0x5C1F2F0")]
	private void StopInfinitePopup()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$StopInfinitePopup): 3 lines keep C-only constructs
		List<EmoteTextPopup> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		__this_00 = this._emoteEmojiPopups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar1 = SStack_38.MoveNext();
			if (!bVar1) {
				SStack_38.Dispose();
				return;
			}
			if (SStack_38._current == null) break;
			*(byte)((long)&SStack_38._current[0xd].monitor + 4) = 0;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E73")]
	[Address(RVA = "0x5C1EF70", Offset = "0x5C1DF70", VA = "0x5C1EF70")]
	private Vector3 GetOffset(BaseCharacter character)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$GetOffset): 2 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		byte bVar10;
		byte bVar11;
		UnityEngine_Vector3_StaticFields pUVar12;
		BaseCharacter pCVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		Vector3 UVar17;
		Vector3 UVar18;

		if (character == null) {
	label_05d1f039: ;
			return (Vector3)(Vector3.zeroVector);
		}
		pCVar13 = character.klass;
		bVar10 = (pCVar13._2).typeHierarchyDepth;
		bVar11 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar11 <= bVar10) &&((pCVar13._2).typeHierarchy[(ulong)bVar11 - 1] == typeof(Human))) {
			pUVar12 = typeof(Vector3).static_fields;
			uVar2 = (pUVar12.upVector).x;
			uVar6 = (pUVar12.upVector).y;
			UVar17.x = (float)uVar2 * 4.0;
			UVar17.y = (float)uVar6 * 4.0;
			UVar17.z = (pUVar12.upVector).z * 4.0;
			return (Vector3)UVar17;
		}
		bVar11 = (typeof(BasicTitan)._2).typeHierarchyDepth;
		if ((bVar10 < bVar11) ||((pCVar13._2).typeHierarchy[(ulong)bVar11 - 1] != typeof(BasicTitan))) {
			bVar11 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if ((bVar10 < bVar11) ||((pCVar13._2).typeHierarchy[(ulong)bVar11 - 1] != typeof(BaseShifter))) goto label_05d1f039;
			if (Il2CppMethodInitialized_0753e72c == false) {
				Il2CppMethodInitialized_0753e72c = true;
				pCVar13 = character.klass;
				bVar10 = (pCVar13._2).typeHierarchyDepth;
				bVar11 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			}
			if ((bVar10 < bVar11) ||((pCVar13._2).typeHierarchy[(ulong)bVar11 - 1] != typeof(BaseShifter))) {
				throw new InvalidCastException();
			}
			pUVar12 = typeof(Vector3).static_fields;
			uVar4 = (pUVar12.upVector).x;
			uVar8 = (pUVar12.upVector).y;
			fVar15 = (float)uVar4 * 70.0;
			fVar16 = (float)uVar8 * 70.0;
			fVar14 = (pUVar12.upVector).z * 70.0;
		}
		else if ((*(byte)((sbyte)character + 0x2b0)) == false) {
			pUVar12 = typeof(Vector3).static_fields;
			uVar5 = (pUVar12.upVector).x;
			uVar9 = (pUVar12.upVector).y;
			fVar14 = (pUVar12.upVector).z * 25.0;
			fVar15 = (float)uVar5 * 25.0;
			fVar16 = (float)uVar9 * 25.0;
		}
		else {
			pUVar12 = typeof(Vector3).static_fields;
			uVar3 = (pUVar12.upVector).x;
			uVar7 = (pUVar12.upVector).y;
			fVar14 = (pUVar12.upVector).z * 15.0;
			fVar15 = (float)uVar3 * 15.0;
			fVar16 = (float)uVar7 * 15.0;
		}
		fVar1 = *(float)((long)&(*(ulong)((sbyte)character + 0x138)) + 4);
		UVar18.z = fVar14 * fVar1;
		UVar18.x = fVar1 * fVar15;
		UVar18.y = fVar1 * fVar16;
		return (Vector3)UVar18;
	}

	[Token(Token = "0x6004E74")]
	[Address(RVA = "0x5C1F430", Offset = "0x5C1E430", VA = "0x5C1F430")]
	public void ToggleEmoteWheel()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$ToggleEmoteWheel): clean


		this.SetEmoteWheel(this.IsActive == false);
		return;
	}

	[Token(Token = "0x6004E75")]
	[Address(RVA = "0x5C1F440", Offset = "0x5C1E440", VA = "0x5C1F440")]
	public void SetEmoteWheel(bool enable)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$SetEmoteWheel): 7 lines keep C-only constructs
		byte bVar1;
		InputSettings pSVar2;
		InteractionInputSettings pSVar3;
		KeybindSetting pSVar4;
		WheelPopup __this_00;
		BasePopup pUVar5;
		bool bVar6;
		List<string> options;
		UnityAction __this_01;
		String title;
		WheelPopup* method_00;
		byte[] auVar7 = new byte[16];

		if (Il2CppMethodInitialized_07547dc0 == false) {
			method_00 = &typeof(WheelPopup);
			Il2CppMethodInitialized_07547dc0 = true;
		}
		if (enable) {
			bVar6 = InGameMenu.InMenu();
			if (bVar6) {
				return;
			}
			pSVar2 = SettingsManager.InputSettings;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.Interaction, pSVar3 != null)) &&(pSVar4 = pSVar3.EmoteMenu, pSVar4 != null)) {
				__this_00 = (WheelPopup)this._emoteWheelPopup;
				auVar7 = (byte[])pSVar4.ToString();
				options = this.GetEmoteWheelOptions(this._currentEmoteWheelState);
				__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
				title = Aottg2GisketchLocale.Text("Common.Emotes");
				if (__this_00 != null) {
					bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WheelPopup))) {
						throw new InvalidCastException();
					}
					__this_00.Show(auVar7._0_8_, options, __this_01, title, true);
					bVar6 = true;
					goto label_05d1f5ed;
				}
			}
		}
		else {
			pUVar5 = this._emoteWheelPopup;
			if (pUVar5 != null) {
				pUVar5.Hide();
				bVar6 = false;
	label_05d1f5ed: ;
				this.IsActive = bVar6;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E76")]
	[Address(RVA = "0x5C1FE20", Offset = "0x5C1EE20", VA = "0x5C1FE20")]
	public void NextEmoteWheel()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$NextEmoteWheel): 5 lines keep C-only constructs
		byte bVar1;
		BasePopup __this_00;
		InputSettings pSVar2;
		InteractionInputSettings pSVar3;
		KeybindSetting pSVar4;
		WheelPopup __this_01;
		bool bVar5;
		int iVar6;
		GameObject __this_02;
		List<string> options;
		UnityAction __this_03;
		String title;
		int iVar7;
		byte[] auVar8 = new byte[16];

		__this_00 = this._emoteWheelPopup;
		if ((__this_00 != null) &&(__this_02 = __this_00.gameObject, __this_02 != null)) {
			bVar5 = __this_02.activeSelf;
			if ((!bVar5) || (this.IsActive == false)) {
				return;
			}
			iVar6 = this._currentEmoteWheelState + 1;
			iVar7 = 0;
			if (iVar6 < 3) {
				iVar7 = iVar6;
			}
			this._currentEmoteWheelState = iVar7;
			pSVar2 = SettingsManager.InputSettings;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.Interaction, pSVar3 != null)) &&(pSVar4 = pSVar3.EmoteMenu, pSVar4 != null)) {
				__this_01 = (WheelPopup)this._emoteWheelPopup;
				auVar8 = (byte[])pSVar4.ToString();
				options = this.GetEmoteWheelOptions(this._currentEmoteWheelState);
				__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_EmoteHandler_NextEmoteWheel_b__26_0);
				title = Aottg2GisketchLocale.Text("Common.Emotes");
				if (__this_01 != null) {
					bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
					if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WheelPopup))) {
						throw new InvalidCastException();
					}
					__this_01.Show(auVar8._0_8_, options, __this_03, title, true);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E77")]
	[Address(RVA = "0x5C1FDC0", Offset = "0x5C1EDC0", VA = "0x5C1FDC0")]
	private string GetEmoteWheelTitle()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$GetEmoteWheelTitle): clean
		String pSVar1;

		pSVar1 = Aottg2GisketchLocale.Text("Common.Emotes");
		return pSVar1;
	}

	[Token(Token = "0x6004E78")]
	[Address(RVA = "0x5C20000", Offset = "0x5C1F000", VA = "0x5C20000")]
	private void OnEmoteWheelSelect()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$OnEmoteWheelSelect): 10 lines keep C-only constructs
		byte bVar1;
		int index;
		int iVar2;
		InGameManager pGVar3;
		BasePopup pUVar4;
		BaseCharacter x;
		EmoteSettings pSVar5;
		ListSetting<StringSetting> pSVar6;
		BaseComponentCache pUVar7;
		PhotonView pPVar8;
		BaseMenu pUVar9;
		bool bVar10;
		BaseSetting pSVar11;
		Object[] parameters;
		object pIVar12;
		object pIVar13;
		String* ppSVar14;
		List<string> pSVar15;
		String pSVar16;
		object pIVar17;
		PhotonView __this_00;
		int iStack_30;
		int iStack_2c;

		if (this._currentEmoteWheelState != 2) {
			if (this._currentEmoteCooldown <= 0.0) {
				this._currentEmoteCooldown = 3.0;
				goto label_05d200e9;
			}
			goto label_05d2051c;
		}
	label_05d200e9: ;
		pGVar3 = this._inGameManager;
		if ((pGVar3 == null) ||(pUVar4 = this._emoteWheelPopup, pUVar4 == null)) goto label_05d205a2;
		bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
		if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WheelPopup))) goto label_05d205a7;
		x = pGVar3.CurrentCharacter;
		index = *(int)((long)&(*(ulong)((sbyte)pUVar4 + 0xb0)) + 4);
		bVar10 = ((Object)x != null);
		if (bVar10) {
			iVar2 = this._currentEmoteWheelState;
			if (iVar2 == 2) {
				if (x == null) goto label_05d205a2;
				pSVar15 = x.get_EmoteActions();
				if (pSVar15 == null) goto label_05d205a2;
				if (index < pSVar15._size) {
					pSVar15 = x.get_EmoteActions();
					if (pSVar15 == null) goto label_05d205a2;
					pSVar16 = pSVar15.get_Item(index) ;
					x.Emote(pSVar16);
				}
			}
			else {
				if (iVar2 == 1) {
					pSVar5 = SettingsManager.EmoteSettings;
					if ((pSVar5 == null) ||(pSVar6 = pSVar5.EmojiEmotes, pSVar6 == null)) goto label_05d205a2;
					pSVar11 = pSVar6.GetItemAt(index);
					if (pSVar11 == null) goto label_05d205a2;
					bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
					if (((pSVar11.klass._2).typeHierarchyDepth < bVar1) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
	label_05d205ac: ;
						throw new InvalidCastException();
					}
					pIVar17 = (*(ulong)((sbyte)pSVar11 + 0x20));
					__this_00 = RPCManager.PhotonView;
					parameters = (Object[])new object[2];
					if ((x == null) ||((pUVar7 = x.Cache, pUVar7 == null ||(pPVar8 = pUVar7.PhotonView, pPVar8 == null)))) goto label_05d205a2;
					iStack_30 = pPVar8.viewIdField;
					pIVar12 = (object)iStack_30;
					if (parameters == null) goto label_05d205a2;
					if (pIVar12 != null) {
						pIVar13 = il2cpp_vm_Object_IsInst(pIVar12, (((parameters.obj).klass)._1).element_class);
						if (pIVar13 == null) goto label_05d205b9;
					}
					if ((int)parameters.Length == 0) {
	label_05d205b4: ;
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar12;
					if (pIVar17 != null) {
						pIVar12 = il2cpp_vm_Object_IsInst(pIVar17, (((parameters.obj).klass)._1).element_class);
						if (pIVar12 == null) {
	label_05d205b9: ;
							pIVar17 = new ArrayTypeMismatchException();
							throw pIVar17;
						}
					}
					if ((parameters.Length & 0xfffffffe) == 0) goto label_05d205b4;
					parameters[1] = pIVar17;
					if (__this_00 == null) goto label_05d205a2;
					ppSVar14 = &"EmoteEmojiRPC";
				}
				else {
					if (iVar2 != 0) goto label_05d2051c;
					pSVar5 = SettingsManager.EmoteSettings;
					if ((pSVar5 == null) ||(pSVar6 = pSVar5.TextEmotes, pSVar6 == null)) goto label_05d205a2;
					pSVar11 = pSVar6.GetItemAt(index);
					if (pSVar11 == null) goto label_05d205a2;
					bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
					if (((pSVar11.klass._2).typeHierarchyDepth < bVar1) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) goto label_05d205ac;
					pIVar17 = (*(ulong)((sbyte)pSVar11 + 0x20));
					__this_00 = RPCManager.PhotonView;
					parameters = (Object[])new object[2];
					if (((x == null) ||(pUVar7 = x.Cache, pUVar7 == null)) ||(pPVar8 = pUVar7.PhotonView, pPVar8 == null)) goto label_05d205a2;
					iStack_2c = pPVar8.viewIdField;
					pIVar12 = (object)iStack_2c;
					if (parameters == null) goto label_05d205a2;
					if (pIVar12 != null) {
						pIVar13 = il2cpp_vm_Object_IsInst(pIVar12, (((parameters.obj).klass)._1).element_class);
						if (pIVar13 == null) goto label_05d205b9;
					}
					if ((int)parameters.Length == 0) goto label_05d205b4;
					parameters[0] = pIVar12;
					if (pIVar17 != null) {
						pIVar12 = il2cpp_vm_Object_IsInst(pIVar17, (((parameters.obj).klass)._1).element_class);
						if (pIVar12 == null) goto label_05d205b9;
					}
					if ((parameters.Length & 0xfffffffe) == 0) goto label_05d205b4;
					parameters[1] = pIVar17;
					if (__this_00 == null) goto label_05d205a2;
					ppSVar14 = &"EmoteTextRPC";
				}
				__this_00.RPC(*ppSVar14, 0, parameters);
			}
		}
	label_05d2051c: ;
		pUVar4 = this._emoteWheelPopup;
		if (pUVar4 != null) {
			pUVar4.Hide();
			this.IsActive = false;
			pUVar9 = UIManager.CurrentMenu;
			if (pUVar9 != null) {
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if ((bVar1 <= (pUVar9.klass._2).typeHierarchyDepth) &&((pUVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
					*(byte)&(*(ulong)((sbyte)pUVar9 + 0x158)) = 1;
					return;
				}
	label_05d205a7: ;
				throw new InvalidCastException();
			}
		}
	label_05d205a2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E79")]
	[Address(RVA = "0x5C1F880", Offset = "0x5C1E880", VA = "0x5C1F880")]
	private List<string> GetEmoteWheelOptions(EmoteWheelState state)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$GetEmoteWheelOptions): 27 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		EmoteSettings pSVar3;
		ListSetting<StringSetting> pSVar4;
		List<object> pSVar5;
		String[] pSVar6;
		Il2CppClass item;
		InGameManager pGVar7;
		BaseCharacter pCVar8;
		bool bVar9;
		List<string> pSVar10;
		String item_00;
		Converter<TInput, TOutput> __this_00;
		MethodInfo pMVar11;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		byte[] local_38 = new byte[16];
		object local_28;

		if (Il2CppMethodInitialized_07547dc4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07547dc4 = true;
		}
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (state == 1) {
			pSVar10 = new List<string>();
			pSVar3 = SettingsManager.EmoteSettings;
			if (((pSVar3 != null) &&(pSVar4 = pSVar3.EmojiEmotes, pSVar4 != null)) &&(pSVar5 = (List<object>)pSVar4._value, pSVar5 != null)) {
				local_38.GetEnumerator(pSVar5) ;
				local_58._current = local_28;
				local_58._list = (List<T>)local_38._0_8_;
				local_58._index = local_38._8_4_;
				local_58._version = local_38._12_4_;
				local_38._0_8_ = null;
				local_38._8_8_ = &local_58;
				if (pSVar10 == null) {
					local_38._8_8_ = &local_58;
					bVar9 = local_58.MoveNext();
					if (bVar9) {
						if (local_58._current != null) {
	label_05d1fd10: ;
							throw new NullReferenceException();
						}
	label_05d1fd0b: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						bVar9 = local_58.MoveNext();
						pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
						if (!(bVar9)) break;
						if (local_58._current == null) goto label_05d1fd0b;
						item = local_58._current[2].klass;
						piVar1 = &pSVar10._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar10._items;
						if (pSVar6 == null) goto label_05d1fd10;
						uVar2 = pSVar10._size;
						if (uVar2 < (uint)pSVar6.Length) {
							pSVar10._size = uVar2 + 1;
							pSVar6[(int)uVar2] = (String)item;
						}
						else {
							pSVar10.AddWithResize((object)item);
						}
					}
				}
	label_05d1fcde: ;
				local_58.Dispose();
				return pSVar10;
			}
		}
		else if (state == 0) {
			pSVar10 = new List<string>();
			pSVar3 = SettingsManager.EmoteSettings;
			if (((pSVar3 != null) &&(pSVar4 = pSVar3.TextEmotes, pSVar4 != null)) &&(pSVar5 = (List<object>)pSVar4._value, pSVar5 != null)) {
				local_38.GetEnumerator(pSVar5) ;
				local_58._current = local_28;
				local_58._list = (List<T>)local_38._0_8_;
				local_58._index = local_38._8_4_;
				local_58._version = local_38._12_4_;
				local_38._0_8_ = null;
				local_38._8_8_ = &local_58;
				if (pSVar10 == null) {
					pMVar11 = MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext;
					local_38._8_8_ = &local_58;
					bVar9 = local_58.MoveNext();
					if (bVar9) {
						if (local_58._current != null) {
							EmoteHandler.SanitizeText((String)local_58._current[2].klass);
	label_05d1fd1e: ;
							throw new NullReferenceException();
						}
	label_05d1fcc3: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						pMVar11 = MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext;
						bVar9 = local_58.MoveNext();
						if (!(bVar9)) break;
						if (local_58._current == null) goto label_05d1fcc3;
						item_00 = EmoteHandler.SanitizeText((String)local_58._current[2].klass);
						pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
						piVar1 = &pSVar10._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar10._items;
						if (pSVar6 == null) goto label_05d1fd1e;
						uVar2 = pSVar10._size;
						if (uVar2 < (uint)pSVar6.Length) {
							pSVar10._size = uVar2 + 1;
							pSVar6[(int)uVar2] = item_00;
						}
						else {
							pSVar10.AddWithResize((object)item_00);
						}
					}
				}
				goto label_05d1fcde;
			}
		}
		else {
			pGVar7 = this._inGameManager;
			if (pGVar7 != null) {
				pCVar8 = pGVar7.CurrentCharacter;
				bVar9 = ((Object)pCVar8 == null);
				if (bVar9) {
					pSVar10 = new List<string>();
					return pSVar10;
				}
				pGVar7 = this._inGameManager;
				if ((pGVar7 != null) &&(pCVar8 = pGVar7.CurrentCharacter, pCVar8 != null)) {
					pSVar10 = pCVar8.get_EmoteActions();
					__this_00 = new Converter<string, string>(null, (intptr_t)MethodInfo_UI_EmoteHandler_ActionLabel);
					if (pSVar10 != null) {
						pSVar10 = (List<string>)pSVar10.ConvertAll<string>((System_Converter_T__TOutput__o)__this_00);
						return pSVar10;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E7A")]
	[Address(RVA = "0x5C205D0", Offset = "0x5C1F5D0", VA = "0x5C205D0")]
	public static string ActionLabel(string action)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$ActionLabel): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("InGame", "Emote", action, "", action);
		return pSVar1;
	}

	[Token(Token = "0x6004E7B")]
	[Address(RVA = "0x5C1EDD0", Offset = "0x5C1DDD0", VA = "0x5C1EDD0")]
	private EmoteTextPopup GetAvailablePopup(List<EmoteTextPopup> popups)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$GetAvailablePopup): 2 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		GameObject __this_00;
		EmoteTextPopup pUVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (popups == null) {
			throw new NullReferenceException();
		}
		local_48 = popups.GetEnumerator();
		local_28 = (byte)&local_48;
		do {
			bVar2 = local_48.MoveNext();
			pIVar1 = local_48._current;
			if (!bVar2) {
				local_48.Dispose();
				return pUVar3;
			}
			if ((EmoteTextPopup)local_48._current == null) {
				throw new NullReferenceException();
			}
			__this_00 = local_48._current.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.activeSelf;
		} while (bVar2);
		local_48.Dispose();
		return (EmoteTextPopup)pIVar1;
	}

	[Token(Token = "0x6004E7C")]
	[Address(RVA = "0x5C20660", Offset = "0x5C1F660", VA = "0x5C20660")]
	protected void UpdatePopup(EmoteTextPopup popup, bool inMenu)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$UpdatePopup): 43 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		BaseCamera pCVar5;
		BaseCharacter pCVar6;
		BaseComponentCache pUVar7;
		Camera pUVar8;
		byte[] auVar9 = new byte[16];
		double dVar10;
		bool bVar11;
		int layerMask;
		GameObject __this_00;
		UnityEngine_Vector3_StaticFields pUVar12;
		Transform pUVar13;
		_func_8 vtableDispatch;
		MethodInfo pMVar14;
		Il2CppClass klass;
		float fVar15;
		uint extraout_XMM0_Db;
		uint uVar16;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar17;
		float fVar18;
		float fVar19;
		byte[] auVar20 = new byte[16];
		float fVar21;
		Vector3 UVar22;
		Vector3 UVar23;
		Vector3 position;
		Vector3 origin;
		ulong local_78;
		byte[] local_40 = new byte[12];
		float fStack_34;

		if (popup == null) goto label_05d20d19;
		pCVar5 = SceneLoader.CurrentCamera;
		fVar15 = popup.ShowTimeLeft;
		if (popup.infinitePopup == false) {
			fVar17 = Time.deltaTime;
			fVar15 = fVar15 - fVar17;
			popup.ShowTimeLeft = fVar15;
		}
		if ((0.0 < fVar15) && (uVar16 = 0, !inMenu)) {
			pCVar6 = popup.Character;
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar11 = ((Object)pCVar6 == null);
			if (!bVar11) {
				pCVar6 = popup.Character;
				if (((pCVar6 == null) ||(pUVar7 = pCVar6.Cache, pUVar7 == null)) ||(pUVar13 = pUVar7.Transform, pUVar13 == null)) goto label_05d20d19;
				UVar22 = pUVar13.position;
				if (((pCVar5 == null) ||(pUVar7 = pCVar5.Cache, pUVar7 == null)) ||(pUVar13 = pUVar7.Transform, pUVar13 == null)) goto label_05d20d19;
				uVar1 = popup.Offset.x;
				uVar3 = popup.Offset.y;
				position.z = UVar22.z + popup.Offset.z;
				UVar23 = pUVar13.position;
				local_78._0_4_ = UVar22.x;
				local_78._4_4_ = UVar22.y;
				local_78._0_4_ = (float)local_78 + (float)uVar1;
				local_78._4_4_ = local_78._4_4_ + (float)uVar3;
				fVar15 = UVar23.y - local_78._4_4_;
				fVar17 = UVar23.z - position.z;
				fVar19 = UVar23.x - (float)local_78;
				fVar15 = fVar15 * fVar15 + fVar19 * fVar19 + fVar17 * fVar17;
				if (fVar15 < 0.0) {
					fVar15 = sqrtf(fVar15);
				}
				else {
					fVar15 = SQRT(fVar15);
				}
				if (500.0 < fVar15) {
					popup.Hide();
					__this_00 = popup.gameObject;
					if (__this_00 != null) {
						bVar11 = __this_00.activeSelf;
						if (!bVar11) {
							return;
						}
						pUVar13 = popup.transform;
						pUVar8 = pCVar5.Camera;
						if ((pUVar8 != null) &&(position.x = (float)local_78, position.y = local_78._4_4_, UVar22 = pUVar8.WorldToScreenPoint(position), pUVar13 != null)) {
							pUVar13.position = UVar22;
							return;
						}
					}
					goto label_05d20d19;
				}
				pUVar7 = pCVar5.Cache;
				if ((pUVar7 == null) ||(pUVar13 = pUVar7.Transform, pUVar13 == null)) goto label_05d20d19;
				UVar22 = pUVar13.position;
				local_40._0_4_ = 0.0;
				local_40._4_4_ = 0.0;
				auVar20._0_4_ = (float)local_78 - UVar22.x;
				auVar20._4_4_ = local_78._4_4_ - UVar22.y;
				auVar20._8_4_ = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
				auVar20._12_4_ = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
				fVar17 = position.z - UVar22.z;
				fVar19 = fVar17 * fVar17 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
				if (fVar19 < 0.0) {
					fVar19 = sqrtf(fVar19);
					uVar16 = extraout_XMM0_Db;
					if (1e-05 < fVar19) goto label_05d20a5b;
	label_05d20987: ;
					pUVar12 = typeof(Vector3).static_fields;
					fVar17 = (pUVar12.zeroVector).z;
				}
				else {
					fVar19 = SQRT(fVar19);
					if (fVar19 <= 1e-05) goto label_05d20987;
	label_05d20a5b: ;
					fVar17 = fVar17 / fVar19;
					auVar9._4_4_ = fVar19;
					auVar9._0_4_ = fVar19;
					auVar9._8_4_ = uVar16;
					auVar9._12_4_ = uVar16;
					auVar20 = divps(auVar20, auVar9);
					local_40._0_4_ = auVar20._0_4_;
					local_40._4_4_ = auVar20._4_4_;
					pUVar12 = (UnityEngine_Vector3_StaticFields)local_40;
				}
				pUVar7 = pCVar5.Cache;
				if ((pUVar7 == null) ||(pUVar13 = pUVar7.Transform, pUVar13 == null)) goto label_05d20d19;
				uVar2 = (pUVar12.zeroVector).x;
				uVar4 = (pUVar12.zeroVector).y;
				UVar23.y = (float)uVar4;
				UVar23.x = (float)uVar2;
				UVar22 = pUVar13.forward;
				fVar18 = UVar22.z;
				fVar19 = UVar22.x;
				fVar21 = UVar22.y;
				if (Il2CppMethodInitialized_075450a4 == false) {
					Il2CppMethodInitialized_075450a4 = true;
					fVar19 = (float)local_40._8_4_;
					fVar21 = fStack_34;
				}
				fVar21 = fVar18 * fVar18 + fVar21 * fVar21 + fVar19 * fVar19;
				fVar19 = fVar17 * fVar17 + (float)uVar4 * (float)uVar4 + (float)uVar2 * (float)uVar2;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					if (fVar19 * fVar21 < 0.0) goto label_05d20b7a;
	label_05d20b24: ;
					fVar19 = SQRT(fVar19 * fVar21);
					klass = typeof(Math);
				}
				else {
					if (0.0 <= fVar19 * fVar21) goto label_05d20b24;
	label_05d20b7a: ;
					fVar19 = sqrtf(fVar19 * fVar21);
					klass = typeof(Math);
				}
				typeof(Math) = (Math)klass;
				if (1e-15 <= fVar19) {
					fVar19 = (fVar18 * fVar17 + fStack_34 * (float)uVar4 + (float)local_40._8_4_ * (float)uVar2) / fVar19;
					fVar21 = 1.0;
					if (fVar19 <= 1.0) {
						fVar21 = fVar19;
					}
					dVar10 = acos((double)(float)(~-(uint)(-1.0 <= fVar19) & 0xbf800000 |(uint)fVar21 & -(uint)(-1.0 <= fVar19)), (MethodInfo)klass);
					if (90.0 < (float)dVar10 * 57.29578) goto label_05d2073d;
				}
				pCVar6 = popup.Character;
				if (pCVar6 == null) goto label_05d20d19;
				bVar11 = pCVar6.IsMainCharacter();
				if (!bVar11) {
					pUVar7 = pCVar5.Cache;
					if ((pUVar7 == null) ||(pUVar13 = pUVar7.Transform, pUVar13 == null)) goto label_05d20d19;
					UVar22 = pUVar13.position;
					local_40._8_4_ = UVar22.z;
					layerMask = ((LayerMask)(LayerMask)this.CullMask.m_Mask);
					origin.z = (float)local_40._8_4_;
					origin.x = UVar22.x;
					origin.y = UVar22.y;
					UVar23.z = fVar17;
					bVar11 = Physics.Raycast(origin, UVar23, fVar15, layerMask);
					if (bVar11) goto label_05d2073d;
				}
				pUVar8 = pCVar5.Camera;
				if (pUVar8 == null) {
	label_05d20d19: ;
					throw new NullReferenceException();
				}
				UVar22.z = position.z;
				UVar22.x = (float)local_78;
				UVar22.y = local_78._4_4_;
				UVar22 = pUVar8.WorldToScreenPoint(UVar22);
				pUVar13 = popup.transform;
				if (pUVar13 == null) goto label_05d20d19;
				pUVar13.position = UVar22;
				vtableDispatch = (popup.klass.vtable)._21_Show.methodPtr;
				pMVar14 = (popup.klass.vtable)._21_Show.method;
				goto label_05d2074e;
			}
		}
	label_05d2073d: ;
		vtableDispatch = (popup.klass.vtable)._58_HideImmediate.methodPtr;
		pMVar14 = (popup.klass.vtable)._58_HideImmediate.method;
	label_05d2074e: ;
		(*vtableDispatch)(popup,pMVar14);
		return;
	}

	[Token(Token = "0x6004E7D")]
	[Address(RVA = "0x5C20D20", Offset = "0x5C1FD20", VA = "0x5C20D20")]
	protected void LateUpdate()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$LateUpdate): 11 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		List<EmoteTextPopup> pSVar3;
		bool bVar4;
		MethodInfo in_RCX;
		bool inMenu;
		float fVar5;
		byte[] auStack_68 = new byte[16];
		EmoteTextPopup pUStack_58;
		float fStack_4c;
		byte[] auStack_48 = new byte[16];
		EmoteTextPopup pUStack_38;

		fStack_4c = this._currentEmoteCooldown;
		fVar5 = Time.deltaTime;
		this._currentEmoteCooldown = fStack_4c - fVar5;
		bVar4 = InGameMenu.InMenu();
		inMenu = true;
		if (!bVar4) {
			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 == null) goto label_05d20f14;
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			in_RCX = (MethodInfo)(ulong)bVar1;
			if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(long)&in_RCX[-1].field_0x57] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			inMenu = *(int)&(*(ulong)((sbyte)pGVar2 + 0x78)) == 0;
		}
		pSVar3 = this._emoteTextPopups;
		if (pSVar3 != null) {
			auStack_68.GetEnumerator((List<object>)pSVar3);
			pUStack_38 = pUStack_58;
			auStack_48._0_8_ = auStack_68._0_8_;
			auStack_48._8_8_ = auStack_68._8_8_;
			auStack_68._0_8_ = null;
			auStack_68._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
			while(true) {
				bVar4 = auStack_48.MoveNext();
				if (!bVar4) break;
				this.UpdatePopup(pUStack_38, inMenu);
			}
			auStack_48.Dispose();
			pSVar3 = this._emoteEmojiPopups;
			if (pSVar3 != null) {
				auStack_68.GetEnumerator((List<object>)pSVar3);
				pUStack_38 = pUStack_58;
				auStack_48._0_8_ = auStack_68._0_8_;
				auStack_48._8_8_ = auStack_68._8_8_;
				auStack_68._0_8_ = null;
				auStack_68._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
				while(true) {
					bVar4 = auStack_48.MoveNext();
					if (!bVar4) break;
					this.UpdatePopup(pUStack_38, inMenu);
				}
				auStack_48.Dispose();
				return;
			}
		}
	label_05d20f14: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E7E")]
	[Address(RVA = "0x5C1E9D0", Offset = "0x5C1D9D0", VA = "0x5C1E9D0")]
	public static string SanitizeText(string value)
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$SanitizeText): clean
		String pSVar1;

		pSVar1 = ChatFilter.FilterBadWords(value);
		pSVar1 = ChatFilter.FilterSizeTag(pSVar1);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if (pSVar1._stringLength < 0x15) {
			return pSVar1;
		}
		pSVar1 = pSVar1.Substring(0, 0x14);
		return pSVar1;
	}

	[Token(Token = "0x6004E7F")]
	[Address(RVA = "0x5C20FD0", Offset = "0x5C1FFD0", VA = "0x5C20FD0")]
	public EmoteHandler()
	{
		// Lifted from source/cpp/UI/EmoteHandler.c (UI.EmoteHandler$$.ctor): clean
		uint uVar1;
		LayerMask UVar3;
		List<EmoteTextPopup> pSVar4;
		Int32[] layers;

		pSVar4 = new List<EmoteTextPopup>();
		this._emoteTextPopups = pSVar4;
		pSVar4 = new List<EmoteTextPopup>();
		this._emoteEmojiPopups = pSVar4;
		layers = (Int32[])new int[3];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.MapObjectAll;
			if ((uVar1 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar1)) {
				layers[2] = PhysicsLayer.TitanMovebox;
				UVar3 = PhysicsLayer.GetMask(layers);
				this.CullMask.m_Mask = (int32_t)UVar3.m_Mask;
				base();
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/EmoteHandler.c.

	// UI.EmoteHandler$$<Awake>b__16_0: clean
	private void Awake_b__16_0()
	{
		BasePopup pUVar1;

		pUVar1 = this._emoteWheelPopup;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Hide();
		this.IsActive = false;
		return;
	}

	// UI.EmoteHandler$$<SetEmoteWheel>b__25_0: clean
	private void SetEmoteWheel_b__25_0()
	{
		this.OnEmoteWheelSelect();
		return;
	}

	// UI.EmoteHandler$$<NextEmoteWheel>b__26_0: clean
	private void NextEmoteWheel_b__26_0()
	{
		this.OnEmoteWheelSelect();
		return;
	}
}
