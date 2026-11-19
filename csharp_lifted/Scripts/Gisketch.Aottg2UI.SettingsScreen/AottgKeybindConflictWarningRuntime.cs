// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000165")]
internal sealed class AottgKeybindConflictWarningRuntime : MonoBehaviour
{
	[Token(Token = "0x4000836")]
	public const string NodeType = "AottgKeybindConflictWarning";

	[Token(Token = "0x4000837")]
	private const string WarningSprite = "Icons/kenney-icons/warning";

	[Token(Token = "0x4000838")]
	private const char StateKeySeparator = '\n';

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x20")]
	private GisketchTheme _theme;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x30")]
	private string _visibleStateKey;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x38")]
	private string _tooltipStateKey;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x48")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x5CC1DD0", Offset = "0x5CC0DD0", VA = "0x5CC1DD0")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_0754818a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_0754818a = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_Build);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgKeybindConflictWarning", __this_00);
		return;
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x5CC1E90", Offset = "0x5CC0E90", VA = "0x5CC1E90")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$Build): clean
		AottgKeybindConflictWarningRuntime __this;
		String stateKeys;
		GisketchUIState state;
		GisketchTheme theme;

		if (go != null) {
			__this = go.AddComponent<AottgKeybindConflictWarningRuntime>();
			if (context == null) {
				theme = null;
				state = null;
			}
			else {
				theme = context.Theme;
				state = context.State;
			}
			if (node == null) {
				stateKeys = null;
			}
			else {
				stateKeys = node.value;
			}
			if (__this != null) {
				__this.Setup(theme, state, stateKeys);
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x5CC2230", Offset = "0x5CC1230", VA = "0x5CC2230")]
	internal static string StateKeys(string visibleStateKey, string tooltipStateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$StateKeys): clean
		String pSVar1;

		if (visibleStateKey == null) {
			visibleStateKey = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (tooltipStateKey == null) {
			tooltipStateKey = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar1 = String.Concat(visibleStateKey, "\n", tooltipStateKey);
		return pSVar1;
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x5CC1F20", Offset = "0x5CC0F20", VA = "0x5CC1F20")]
	private void Setup(GisketchTheme theme, GisketchUIState state, string stateKeys)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$Setup): 7 lines keep C-only constructs
		GisketchTheme* targetAddress;
		CanvasGroup* targetAddress_00;
		GisketchTheme __this_00;
		GisketchUIState __this_01;
		bool bVar1;
		GameObject pUVar2;
		Image __this_02;
		Sprite value;
		CanvasGroup pUVar3;
		Action<string> __this_03;
		Color UVar4;

		if (Il2CppMethodInitialized_0754818d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged) ;
			Il2CppMethodInitialized_0754818d = true;
		}
		if (theme == null) {
			if (((typeof(GisketchTheme))._2).cctor_finished_or_no_cctor == 0) {
			}
			theme = GisketchTheme.Default;
		}
		if (this != null) {
			targetAddress = &this._theme;
			this._theme = theme;
			this._state = state;
			this.ReadStateKeys(stateKeys);
			pUVar2 = this.gameObject;
			if (pUVar2 != null) {
				__this_02 = pUVar2.AddComponent<Image>();
				value = GisketchSpriteLoader.Load("Icons/kenney-icons/warning");
				if (__this_02 != null) {
					__this_02.sprite = value;
					__this_00 = *targetAddress;
					if (__this_00 != null) {
						UVar4.b = 0.12;
						UVar4.a = 0.86;
						UVar4.r = 1.0;
						UVar4.g = 0.66;
						UVar4 = __this_00.GetColor("settingsDirty", UVar4);
						__this_02.set_color(UVar4);
						__this_02.set_raycastTarget(true);
						pUVar2 = this.gameObject;
						if (pUVar2 != null) {
							pUVar3 = pUVar2.GetComponent<CanvasGroup>();
							targetAddress_00 = &this._group;
							this._group = pUVar3;
							pUVar3 = this._group;
							bVar1 = ((Object)pUVar3 == null);
							if (bVar1) {
								pUVar2 = this.gameObject;
								if (pUVar2 == null) goto label_05dc222a;
								pUVar3 = pUVar2.AddComponent<CanvasGroup>();
								*targetAddress_00 = pUVar3;
							}
							pUVar2 = this.gameObject;
							if (pUVar2 != null) {
								__this_03 = (Action<string>)pUVar2.AddComponent<GisketchTooltipTrigger>();
								this._tooltip = (GisketchTooltipTrigger)__this_03;
								__this_01 = this._state;
								if (__this_01 != null) {
									__this_03 = new Action<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged);
									__this_01.add_Changed(__this_03);
								}
								this.RefreshVisibility();
								this.RefreshTooltip();
								return;
							}
						}
					}
				}
			}
		}
	label_05dc222a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x5CC2530", Offset = "0x5CC1530", VA = "0x5CC2530")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$OnDestroy): 2 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;

		if (Il2CppMethodInitialized_0754818e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged) ;
			Il2CppMethodInitialized_0754818e = true;
		}
		__this_00 = this._state;
		if (__this_00 == null) {
			return;
		}
		__this_01 = new Action<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged);
		__this_00.remove_Changed(__this_01);
		return;
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x5CC25B0", Offset = "0x5CC15B0", VA = "0x5CC25B0")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$OnStateChanged): clean
		bool bVar1;
		MethodInfo pMVar2;

		pMVar2 = (MethodInfo)this._visibleStateKey;
		bVar1 = (key == (String)pMVar2);
		if (bVar1) {
			this.RefreshVisibility();
		}
		pMVar2 = (MethodInfo)this._tooltipStateKey;
		bVar1 = (key == (String)pMVar2);
		if (bVar1) {
			this.RefreshTooltip();
			return;
		}
		return;
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x5CC22C0", Offset = "0x5CC12C0", VA = "0x5CC22C0")]
	private void ReadStateKeys(string stateKeys)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$ReadStateKeys): 3 lines keep C-only constructs
		String[] pSVar1;
		String* ppSVar2;

		if (((stateKeys != null) ||(stateKeys = (String)**(long*)(g_data_07556758 + 0xb8), stateKeys != null)) && (pSVar1 = stateKeys.Split(10, 0), pSVar1 != null )) {
			if (pSVar1.Length == 0) {
				ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				if ((int)pSVar1.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				ppSVar2 = pSVar1.m_Items;
			}
			if (this != null) {
				this._visibleStateKey = *ppSVar2;
				if ((int)pSVar1.Length < 2) {
					ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
				}
				else {
					ppSVar2 = pSVar1.m_Items + 1;
				}
				this._tooltipStateKey = *ppSVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x5CC2390", Offset = "0x5CC1390", VA = "0x5CC2390")]
	private void RefreshVisibility()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RefreshVisibility): clean
		GisketchUIState __this_00;
		CanvasGroup pUVar1;
		bool value;
		bool bVar2;
		float value_00;

		__this_00 = this._state;
		if (__this_00 == null) {
			value = false;
		}
		else {
			value = __this_00.GetBool(this._visibleStateKey, false);
		}
		pUVar1 = this._group;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return;
		}
		pUVar1 = this._group;
		if (pUVar1 != null) {
			if (value == false) {
				value_00 = 0.0;
			}
			else {
				value_00 = 1.0;
			}
			pUVar1.alpha = value_00;
			pUVar1 = this._group;
			if (pUVar1 != null) {
				pUVar1.blocksRaycasts = value;
				pUVar1 = this._group;
				if (pUVar1 != null) {
					pUVar1.interactable = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x5CC2460", Offset = "0x5CC1460", VA = "0x5CC2460")]
	private void RefreshTooltip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RefreshTooltip): clean
		GisketchTooltipTrigger pGVar1;
		GisketchUIState __this_00;
		bool bVar2;
		String text;

		pGVar1 = this._tooltip;
		bVar2 = ((Object)pGVar1 == null);
		if (bVar2) {
			return;
		}
		__this_00 = this._state;
		if (__this_00 == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pGVar1 = this._tooltip;
		}
		else {
			text = __this_00.Get(this._tooltipStateKey, (String)**(ulong*)(g_data_07556758 + 0xb8));
			pGVar1 = this._tooltip;
		}
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.Setup(text, this._theme, null);
		return;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x5CC2600", Offset = "0x5CC1600", VA = "0x5CC2600")]
	public AottgKeybindConflictWarningRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$.ctor): clean
		base();
		return;
	}
}
