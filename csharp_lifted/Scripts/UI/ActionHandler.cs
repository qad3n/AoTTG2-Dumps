// ==================== AoTTG2 cross-reference ====================
// Type: UI.ActionHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ActionHandler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000805")]
internal class ActionHandler : MonoBehaviour
{
	[Token(Token = "0x40027EE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly (string Name, Action<Human> Execute)[] Actions;

	[Token(Token = "0x40027EF")]
	[FieldOffset(Offset = "0x20")]
	private WheelPopup _wheel;

	[Token(Token = "0x40027F0")]
	[FieldOffset(Offset = "0x28")]
	private InGameManager _gameManager;

	[Token(Token = "0x40027F1")]
	[FieldOffset(Offset = "0x30")]
	private Human _human;

	[Token(Token = "0x40027F2")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<(string Name, Action<Human> Execute)> _visibleActions;

	[Token(Token = "0x40027F3")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasCloak;

	[Token(Token = "0x40027F4")]
	[FieldOffset(Offset = "0x41")]
	private bool _hasHorse;

	[Token(Token = "0x40027F5")]
	[FieldOffset(Offset = "0x44")]
	private int _lastCloseFrame;

	[Token(Token = "0x17000D5A")]
	public bool IsActive
	{
		[Token(Token = "0x6004CCB")]
		[Address(RVA = "0x5BFA6D0", Offset = "0x5BF96D0", VA = "0x5BFA6D0")]
		get
		{
			// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$get_IsActive): clean
			WheelPopup pUVar1;
			bool bVar2;
			bool bVar3;

			pUVar1 = this._wheel;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._wheel;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pUVar1.IsActive != false;
			}
			return bVar3;
		}
	}

	[Token(Token = "0x17000D5B")]
	public bool BlocksInput
	{
		[Token(Token = "0x6004CCC")]
		[Address(RVA = "0x5BFA750", Offset = "0x5BF9750", VA = "0x5BFA750")]
		get
		{
			// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$get_BlocksInput): clean
			int iVar1;
			WheelPopup pUVar2;
			bool bVar3;
			int iVar4;

			pUVar2 = this._wheel;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar2 = this._wheel;
				if (pUVar2 == null) {
					throw new NullReferenceException();
				}
				if (pUVar2.IsActive != false) {
					return true;
				}
			}
			iVar1 = this._lastCloseFrame;
			iVar4 = Time.frameCount;
			return iVar1 == iVar4;
		}
	}

	[Token(Token = "0x6004CCD")]
	[Address(RVA = "0x5BFA7E0", Offset = "0x5BF97E0", VA = "0x5BFA7E0")]
	private static void ExecuteHorseCommand(Human human, Func<Horse, bool> command, string sound)
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$ExecuteHorseCommand): clean
		Horse __this;
		SoundSettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;
		sbyte cVar4;

		if (human != null) {
			__this = human.Horse;
			bVar3 = ((Object)__this == null);
			if (bVar3) {
				return;
			}
			if (command != null) {
				cVar4 = (*(code)command.invoke_impl)(command.method_code,__this,command.method);
				if (cVar4 == false) {
					return;
				}
				pSVar1 = SettingsManager.SoundSettings;
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.HorseSoundEffect, pSVar2 != null)) {
					if (pSVar2._value == false) {
						return;
					}
					if (__this != null) {
						__this.PlaySound(sound);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CCE")]
	[Address(RVA = "0x5BFA8E0", Offset = "0x5BF98E0", VA = "0x5BFA8E0")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$Awake): 3 lines keep C-only constructs
		byte bVar1;
		InGameManager pGVar2;
		InGameManager pGVar3;
		Transform parent;
		GameObject __this_00;
		WheelPopup pUVar4;
		UnityAction __this_01;

		parent = this.transform;
		__this_00 = ElementFactory.InstantiateAndSetupPanel<WheelPopup>(parent, "Prefabs/InGame/WheelMenu", false);
		if (__this_00 != null) {
			pUVar4 = __this_00.GetComponent<WheelPopup>();
			this._wheel = pUVar4;
			pUVar4 = this._wheel;
			__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ActionHandler_Awake_b__13_0);
			if (pUVar4 != null) {
				pUVar4.OnCancel = __this_01;
				pGVar3 = typeof(InGameManager);
				pGVar2 = (InGameManager)SceneLoader.CurrentGameManager;
				if (pGVar2 == null) {
					this._gameManager = null;
	label_05cfaa62: ;
					return;
				}
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
					this._gameManager = pGVar2;
					if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pGVar3)) goto label_05cfaa62;
				}
				throw new InvalidCastException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CCF")]
	[Address(RVA = "0x5BFAA80", Offset = "0x5BF9A80", VA = "0x5BFAA80")]
	public void ToggleActionWheel()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$ToggleActionWheel): clean
		WheelPopup pUVar1;
		bool bVar2;
		bool enable;

		pUVar1 = this._wheel;
		bVar2 = ((Object)pUVar1 != null);
		enable = true;
		if (bVar2) {
			pUVar1 = this._wheel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			enable = pUVar1.IsActive == false;
		}
		this.SetActionWheel(enable);
		return;
	}

	[Token(Token = "0x6004CD0")]
	[Address(RVA = "0x5BFAB00", Offset = "0x5BF9B00", VA = "0x5BFAB00")]
	public void SetActionWheel(bool enable)
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$SetActionWheel): 2 lines keep C-only constructs
		WheelPopup pUVar1;
		bool bVar2;
		int iVar3;
		undefined7 in_register_00000031;
		Human local_18;

		local_18 = null;
		if ((int)CONCAT71(in_register_00000031, enable) == 0) {
			pUVar1 = this._wheel;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._wheel;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				if (pUVar1.IsActive != false) {
					pUVar1.Hide();
					this._human = null;
					iVar3 = Time.frameCount;
					this._lastCloseFrame = iVar3;
					return;
				}
			}
		}
		else {
			bVar2 = InGameMenu.InMenu();
			if (!bVar2) {
				bVar2 = this.CanUseActions(ref local_18);
				if (bVar2) {
					this._human = local_18;
					this.ShowActions();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004CD1")]
	[Address(RVA = "0x5BFADB0", Offset = "0x5BF9DB0", VA = "0x5BFADB0")]
	private void ShowActions()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$ShowActions): 10 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		uint uVar3;
		Human pCVar4;
		HumanSetup pCVar5;
		Horse pCVar6;
		List<ValueTuple<string, Action<Human>>> pSVar7;
		System_ValueTuple_string__Action_Human___array pSVar8;
		Action<Human> pSVar9;
		System_ValueTuple_string__Action_Human___array pSVar10;
		String[] pSVar11;
		InputSettings pSVar12;
		InteractionInputSettings pSVar13;
		KeybindSetting pSVar14;
		WheelPopup __this_00;
		bool bVar16;
		bool bVar17;
		List<string> options;
		ulong uVar18;
		String pSVar19;
		UnityAction __this_01;
		String title;
		byte bVar20;
		Action<Human>* ppSVar21;
		ulong uVar22;
		System_ValueTuple_object__object__o item;

		pCVar4 = this._human;
		if (pCVar4 != null) {
			pCVar5 = pCVar4.Setup;
			bVar17 = false;
			bVar16 = ((Object)pCVar5 != null);
			if (bVar16) {
				pCVar4 = this._human;
				if ((pCVar4 == null) ||(pCVar5 = pCVar4.Setup, pCVar5 == null)) goto label_05cfb339;
				bVar17 = pCVar5.HasCloak;
			}
			this._hasCloak = bVar17;
			pCVar4 = this._human;
			if (pCVar4 != null) {
				pCVar6 = pCVar4.Horse;
				bVar20 = false;
				bVar16 = ((Object)pCVar6 != null);
				if (bVar16) {
					pCVar4 = this._human;
					if ((pCVar4 == null) ||(pCVar6 = pCVar4.Horse, pCVar6 == null)) goto label_05cfb339;
					bVar20 = pCVar6.Dead ^ 1;
				}
				this._hasHorse = (bool)bVar20;
				pSVar7 = this._visibleActions;
				if (pSVar7 != null) {
					piVar1 = &pSVar7._version;
					*piVar1 = *piVar1 + 1;
					length = pSVar7._size;
					pSVar7._size = 0;
					if (0 < length) {
						Array.Clear((Array)pSVar7._items, 0, length);
					}
					pSVar8 = ActionHandler.Actions;
					if (pSVar8 != null) {
						options = new List<string>((int32_t)pSVar8.Length);
						pSVar8 = ActionHandler.Actions;
						if (pSVar8 != null) {
							if (0 < (int)pSVar8.Length) {
								uVar18 = pSVar8.Length & 0xffffffff;
								ppSVar21 = &pSVar8[0].Item2;
								uVar22 = 0;
								do {
									if (uVar18 <= uVar22) {
										throw new IndexOutOfRangeException();
									}
									pSVar19 = ((System_ValueTuple_string__Action_Human___Fields)(ppSVar21 + -1)).Item1;
									pSVar9 = *ppSVar21;
									bVar16 = (pSVar19 == "CloakHood");
									if (((!bVar16) || (this._hasCloak != false)) &&((this._hasHorse != false ||(((bVar16 = (pSVar19 == "HorseStay"), !bVar16 &&(bVar16 = (pSVar19 == "HorseCall"), !bVar16)) &&(bVar16 = (pSVar19 == "HorseFollow"), !bVar16)))))) {
										pSVar7 = this._visibleActions;
										if (pSVar7 == null) goto label_05cfb339;
										piVar1 = &pSVar7._version;
										*piVar1 = *piVar1 + 1;
										pSVar10 = pSVar7._items;
										if (pSVar10 == null) goto label_05cfb339;
										uVar2 = pSVar7._size;
										if (uVar2 < (uint)pSVar10.Length) {
											pSVar7._size = uVar2 + 1;
											pSVar10[(int)uVar2].Item1 = pSVar19;
											pSVar10[(int)uVar2].Item2 = pSVar9;
											uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
										}
										else {
											item.Item2 = (object)pSVar9;
											item.Item1 = (object)pSVar19;
											pSVar7.AddWithResize(item);
											uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
										}
										if (uVar3 == 0) {
										}
										pSVar19 = UIManager.GetLocale("InGame", "Actions", pSVar19, "", "");
										if (options == null) goto label_05cfb339;
										piVar1 = &options._version;
										*piVar1 = *piVar1 + 1;
										pSVar11 = options._items;
										if (pSVar11 == null) goto label_05cfb339;
										uVar2 = options._size;
										if (uVar2 < (uint)pSVar11.Length) {
											options._size = uVar2 + 1;
											pSVar11[(int)uVar2] = pSVar19;
										}
										else {
											options.AddWithResize((object)pSVar19);
										}
									}
									uVar22 = uVar22 + 1;
									uVar2 = (uint)pSVar8.Length;
									uVar18 = (ulong)uVar2;
									ppSVar21 = ppSVar21 + 2;
								} while ((long)uVar22 < (long)(int)uVar2);
							}
							pSVar12 = SettingsManager.InputSettings;
							if (((pSVar12 != null) &&(pSVar13 = pSVar12.Interaction, pSVar13 != null)) &&(pSVar14 = pSVar13.ActionMenu, pSVar14 != null)) {
								__this_00 = this._wheel;
								pSVar19 = pSVar14.ToString();
								__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ActionHandler_OnSelect);
								if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
								}
								title = Aottg2GisketchLocale.Text("InGameMenu.Wheel.Actions");
								if (__this_00 != null) {
									__this_00.Show(pSVar19, options, __this_01, title, false);
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05cfb339: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CD2")]
	[Address(RVA = "0x5BFABF0", Offset = "0x5BF9BF0", VA = "0x5BFABF0")]
	private bool CanUseActions(out Human human)
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$CanUseActions): 6 lines keep C-only constructs
		byte bVar1;
		InGameManager pGVar2;
		Human pCVar3;
		bool bVar4;
		Human pCVar5;

		pGVar2 = this._gameManager;
		if (pGVar2 == null) {
	label_05cfad9d: ;
			throw new NullReferenceException();
		}
		pCVar3 = (Human)pGVar2.CurrentCharacter;
		if (pCVar3 == null) {
			*human = null;
		}
		else {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((pCVar3.klass._2).typeHierarchyDepth < bVar1) {
				pCVar5 = null;
			}
			else {
				pCVar5 = null;
				if ((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human)) {
					pCVar5 = pCVar3;
				}
			}
			*human = pCVar5;
		}
		pCVar3 = *human;
		bVar4 = ((Object)pCVar3 != null);
		if (bVar4) {
			pCVar3 = *human;
			if (pCVar3 == null) goto label_05cfad9d;
			bVar4 = pCVar3.IsMine();
			if (bVar4) {
				if (*human == null) goto label_05cfad9d;
				if (((*human).fields).Dead == false) {
					pGVar2 = this._gameManager;
					if (pGVar2 == null) goto label_05cfad9d;
					if (pGVar2.GlobalPause == false) {
						bVar4 = ChatManager.IsChatActive();
						if (bVar4) {
							return false;
						}
						return CustomLogicManager.Cutscene == false;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6004CD3")]
	[Address(RVA = "0x5BFB350", Offset = "0x5BFA350", VA = "0x5BFB350")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$LateUpdate): clean
		WheelPopup pUVar1;
		Human y;
		Human pCVar2;
		HumanSetup pCVar3;
		Horse pCVar4;
		bool bVar5;
		bool bVar6;
		bool bVar7;
		byte bVar9;
		Human pCStack_30;

		pCStack_30 = null;
		pUVar1 = this._wheel;
		bVar5 = ((Object)pUVar1 != null);
		if (bVar5) {
			pUVar1 = this._wheel;
			if (pUVar1 == null) goto label_05cfb507;
			if (pUVar1.IsActive != false) {
				bVar5 = this.CanUseActions(ref pCStack_30);
				pCVar2 = pCStack_30;
				if (bVar5) {
					y = this._human;
					bVar5 = ((Object)pCVar2 != (Object)y);
					if (!bVar5) {
						pCVar2 = this._human;
						if (pCVar2 == null) {
	label_05cfb507: ;
							throw new NullReferenceException();
						}
						bVar5 = this._hasCloak;
						pCVar3 = pCVar2.Setup;
						bVar7 = false;
						bVar6 = ((Object)pCVar3 != null);
						if (bVar6) {
							pCVar2 = this._human;
							if ((pCVar2 == null) ||(pCVar3 = pCVar2.Setup, pCVar3 == null)) goto label_05cfb507;
							bVar7 = pCVar3.HasCloak;
						}
						if (bVar7 == bVar5) {
							pCVar2 = this._human;
							if (pCVar2 == null) goto label_05cfb507;
							bVar5 = this._hasHorse;
							pCVar4 = pCVar2.Horse;
							bVar9 = 0;
							bVar6 = ((Object)pCVar4 != null);
							if (bVar6) {
								pCVar2 = this._human;
								if ((pCVar2 == null) ||(pCVar4 = pCVar2.Horse, pCVar4 == null)) goto label_05cfb507;
								bVar9 = pCVar4.Dead ^ 1;
							}
							if ((bool)bVar9 == bVar5) {
								return;
							}
						}
						this.ShowActions();
						return;
					}
				}
				this.SetActionWheel(false);
			}
		}
		return;
	}

	[Token(Token = "0x6004CD4")]
	[Address(RVA = "0x5BFB510", Offset = "0x5BFA510", VA = "0x5BFB510")]
	private void OnSelect()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$OnSelect): 3 lines keep C-only constructs
		byte bVar1;
		int index;
		WheelPopup pUVar2;
		Human y;
		BaseMenu pUVar3;
		List<ValueTuple<string, Action<Human>>> __this_00;
		HumanSetup pCVar4;
		Human x;
		bool bVar5;
		bool bVar6;
		object pIVar7;
		System_ValueTuple_object__object__o SVar8;
		Human pCStack_30;

		pCStack_30 = null;
		pUVar2 = this._wheel;
		bVar5 = ((Object)pUVar2 != null);
		if (!bVar5) {
			return;
		}
		pUVar2 = this._wheel;
		if (pUVar2 != null) {
			if (pUVar2.IsActive == false) {
				return;
			}
			index = pUVar2.SelectedItem;
			bVar5 = this.CanUseActions(ref pCStack_30);
			x = pCStack_30;
			bVar6 = false;
			if (bVar5) {
				y = this._human;
				bVar6 = ((Object)x == (Object)y);
			}
			this.SetActionWheel(false);
			pUVar3 = UIManager.CurrentMenu;
			if (pUVar3 != null) {
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
					throw new InvalidCastException();
				}
				*(byte)&(*(ulong)((sbyte)pUVar3 + 0x158)) = 1;
				if (bVar6 == false) {
					return;
				}
				if (index < 0) {
					return;
				}
				__this_00 = this._visibleActions;
				if (__this_00 != null) {
					if (__this_00._size <= index) {
						return;
					}
					SVar8 = __this_00.get_Item(index) ;
					pIVar7 = SVar8.Item2;
					bVar5 = ((String)SVar8.Item1 != "CloakHood");
					if (bVar5) {
	label_05cfb74c: ;
						if (pIVar7 == null) {
							return;
						}
						(*pIVar7[1].monitor)(pIVar7[4].klass,pCStack_30,pIVar7[2].monitor);
						return;
					}
					if (pCStack_30 != null) {
						pCVar4 = pCStack_30.Setup;
						bVar5 = ((Object)pCVar4 != null);
						if (!bVar5) {
							return;
						}
						if ((pCStack_30 != null) &&(pCVar4 = pCStack_30.Setup, pCVar4 != null)) {
							bVar5 = pCVar4.HasCloak;
							if (!bVar5) {
								return;
							}
							goto label_05cfb74c;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CD5")]
	[Address(RVA = "0x5BFB780", Offset = "0x5BFA780", VA = "0x5BFB780")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$OnDisable): clean
		WheelPopup pUVar1;
		bool bVar2;

		pUVar1 = this._wheel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._wheel;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.HideImmediate();
		}
		this._human = null;
		return;
	}

	[Token(Token = "0x6004CD6")]
	[Address(RVA = "0x5BFB810", Offset = "0x5BFA810", VA = "0x5BFB810")]
	public ActionHandler()
	{
		// Lifted from source/cpp/UI/ActionHandler.c (UI.ActionHandler$$.ctor): 1 lines keep C-only constructs
		List<ValueTuple<string, Action<Human>>> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<ValueTuple<string, Action<Human>>>));
		__this_00 = new List<ValueTuple<object, object>>();
		this._visibleActions = __this_00;
		this._lastCloseFrame = -1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ActionHandler.c.

	// UI.ActionHandler$$.cctor: 14 lines keep C-only constructs
	static ActionHandler()
	{
		object pIVar1;
		System_ValueTuple_string__Action_Human___array pSVar2;
		Action<Human> pSVar3;
		System_ValueTuple_object__object__o SStack_a8;
		System_ValueTuple_object__object__o SStack_98;
		System_ValueTuple_object__object__o SStack_88;
		System_ValueTuple_object__object__o SStack_78;
		System_ValueTuple_object__object__o SStack_68;
		System_ValueTuple_object__object__o SStack_58;
		System_ValueTuple_object__object__o SStack_48;

		pSVar2 = (System_ValueTuple_string__Action_Human___array)new ValueTuple<string, Action<Human>>[7];
		pIVar1 = (object)ActionHandler.c.__9;
		pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_0);
		SStack_48.Item1 = null;
		SStack_48.Item2 = null;
		SStack_48 = new ValueTuple<object, object>((Il2CppObject *)"BladeSheathe", (object)pSVar3);
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0].Item1 = (String)SStack_48.Item1;
			pSVar2[0].Item2 = (Action<Human>)SStack_48.Item2;
			pIVar1 = (object)ActionHandler.c.__9;
			pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_1);
			SStack_58.Item1 = null;
			SStack_58.Item2 = null;
			SStack_58 = new ValueTuple<object, object>((Il2CppObject *)"Carry", (object)pSVar3);
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1].Item1 = (String)SStack_58.Item1;
				pSVar2[1].Item2 = (Action<Human>)SStack_58.Item2;
				pIVar1 = (object)ActionHandler.c.__9;
				pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_2);
				SStack_68.Item1 = null;
				SStack_68.Item2 = null;
				SStack_68 = new ValueTuple<object, object>((Il2CppObject *)"ShareSupplies", (object)pSVar3);
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2].Item1 = (String)SStack_68.Item1;
					pSVar2[2].Item2 = (Action<Human>)SStack_68.Item2;
					pIVar1 = (object)ActionHandler.c.__9;
					pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_3);
					SStack_78.Item1 = null;
					SStack_78.Item2 = null;
					SStack_78 = new ValueTuple<object, object>((Il2CppObject *)"HorseStay", (object)pSVar3);
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3].Item1 = (String)SStack_78.Item1;
						pSVar2[3].Item2 = (Action<Human>)SStack_78.Item2;
						pIVar1 = (object)ActionHandler.c.__9;
						pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_4);
						SStack_88.Item1 = null;
						SStack_88.Item2 = null;
						SStack_88 = new ValueTuple<object, object>((Il2CppObject *)"HorseCall", (object)pSVar3);
						if (4 < (uint)pSVar2.Length) {
							pSVar2[4].Item1 = (String)SStack_88.Item1;
							pSVar2[4].Item2 = (Action<Human>)SStack_88.Item2;
							pIVar1 = (object)ActionHandler.c.__9;
							pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_5);
							SStack_98.Item1 = null;
							SStack_98.Item2 = null;
							SStack_98 = new ValueTuple<object, object>((Il2CppObject *)"HorseFollow", (object)pSVar3);
							if (5 < (uint)pSVar2.Length) {
								pSVar2[5].Item1 = (String)SStack_98.Item1;
								pSVar2[5].Item2 = (Action<Human>)SStack_98.Item2;
								pIVar1 = (object)ActionHandler.c.__9;
								pSVar3 = new Action<Human>(pIVar1, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_6);
								SStack_a8.Item1 = null;
								SStack_a8.Item2 = null;
								SStack_a8 = new ValueTuple<object, object>((Il2CppObject *)"CloakHood", (object)pSVar3);
								if (6 < (uint)pSVar2.Length) {
									pSVar2[6].Item1 = (String)SStack_a8.Item1;
									pSVar2[6].Item2 = (Action<Human>)SStack_a8.Item2;
									ActionHandler.Actions = pSVar2;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// UI.ActionHandler$$<Awake>b__13_0: clean
	private void Awake_b__13_0()
	{


		this.SetActionWheel(false);
		return;
	}

	// UI.ActionHandler.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ActionHandler.c();
		ActionHandler.c.__9 = (ActionHandler.c)__this;
		return;
	}

	// UI.ActionHandler.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_0: clean
	private void c__cctor_b__22_0(Human human)
	{
		if (human == null) {
			throw new NullReferenceException();
		}
		human.ToggleSheathe();
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_1: clean
	private void c__cctor_b__22_1(Human human)
	{
		if (human == null) {
			throw new NullReferenceException();
		}
		human.ToggleCarry();
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_2: clean
	private void c__cctor_b__22_2(Human human)
	{
		if (human == null) {
			throw new NullReferenceException();
		}
		human.ShareSupplies();
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_3: 1 lines keep C-only constructs
	private void c__cctor_b__22_3(Human human)
	{
		uint uVar1;
		String sound;
		object @object;
		UI_ActionHandler___c_StaticFields pUVar2;
		Func<Horse, bool> __this_00;

		if (Il2CppMethodInitialized_07547ce0 == false) {
			Il2CppMethodInitialized_07547ce0 = true;
			uVar1 = (typeof(ActionHandler.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ActionHandler.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pUVar2 = typeof(ActionHandler.c).static_fields;
			__this_00 = pUVar2.__9__22_7;
		}
		else {
			pUVar2 = (typeof(ActionHandler.c)).static_fields;
			__this_00 = pUVar2.__9__22_7;
		}
		if (__this_00 == null) {
			if (((typeof(ActionHandler.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(ActionHandler.c).static_fields;
			}
			@object = (object)pUVar2.__9;
			__this_00 = new Func<Horse, bool>(@object, (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_7);
			pUVar2 = typeof(ActionHandler.c).static_fields;
			pUVar2.__9__22_7 = __this_00;
			uVar1 = (typeof(HorseSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HorseSounds))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		sound = HorseSounds.Idle3;
		ActionHandler.ExecuteHorseCommand(human, __this_00, sound);
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_7: clean
	private bool c__cctor_b__22_7(Horse horse)
	{
		bool bVar1;

		if (horse == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_4: 1 lines keep C-only constructs
	private void c__cctor_b__22_4(Human human)
	{
		Human human_00;
		String sound;
		ActionHandler.c__DisplayClass22_0 __this_00;
		Func<Horse, bool> __this_01;

		__this_00 = new ActionHandler.c__DisplayClass22_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.human = human;
		human_00 = __this_00.human;
		__this_01 = new Func<Horse, bool>((object)__this_00, (intptr_t)MethodInfo_UI_ActionHandler_c__DisplayClass22_0_cctor_b__8);
		sound = HorseSounds.Idle1;
		ActionHandler.ExecuteHorseCommand(human_00, __this_01, sound);
		return;
	}

	// UI.ActionHandler.<>c__DisplayClass22_0$$.ctor: clean
	private void c__DisplayClass22_0__ctor()
	{
		base();
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_5: 1 lines keep C-only constructs
	private void c__cctor_b__22_5(Human human)
	{
		Human human_00;
		String sound;
		ActionHandler.c__DisplayClass22_1 __this_00;
		Func<Horse, bool> __this_01;

		__this_00 = new ActionHandler.c__DisplayClass22_1();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.human = human;
		human_00 = __this_00.human;
		__this_01 = new Func<Horse, bool>((object)__this_00, (intptr_t)MethodInfo_UI_ActionHandler_c__DisplayClass22_1_cctor_b__9);
		sound = HorseSounds.Idle1;
		ActionHandler.ExecuteHorseCommand(human_00, __this_01, sound);
		return;
	}

	// UI.ActionHandler.<>c__DisplayClass22_1$$.ctor: clean
	private void c__DisplayClass22_1__ctor()
	{
		base();
		return;
	}

	// UI.ActionHandler.<>c$$<.cctor>b__22_6: clean
	private void c__cctor_b__22_6(Human human)
	{
		if (human == null) {
			throw new NullReferenceException();
		}
		human.ToggleHood();
		return;
	}

	// UI.ActionHandler.<>c__DisplayClass22_0$$<.cctor>b__8: clean
	private bool c__DisplayClass22_0__cctor_b__8(Horse horse)
	{
		bool bVar1;

		if (horse == null) {
			throw new NullReferenceException();
		}
		bVar1 = horse.ComeTo((BaseCharacter)this.human, 5.0);
		return bVar1;
	}

	// UI.ActionHandler.<>c__DisplayClass22_1$$<.cctor>b__9: clean
	private bool c__DisplayClass22_1__cctor_b__9(Horse horse)
	{
		bool bVar1;

		if (horse == null) {
			throw new NullReferenceException();
		}
		bVar1 = horse.Follow((BaseCharacter)this.human, 5.0);
		return bVar1;
	}
}
