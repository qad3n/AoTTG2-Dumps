// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000168")]
internal sealed class AottgKeybindTabSearchBridge : MonoBehaviour, IGisketchSearchTargetPreparer
{
	[Token(Token = "0x400084B")]
	public const string NodeType = "AottgKeybindTabSearchBridge";

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x20")]
	private string[] _tabIds;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIRoot _root;

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x5CC3110", Offset = "0x5CC2110", VA = "0x5CC3110")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548199 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548199 = true;
		}
		if (AottgKeybindTabSearchBridge._registered != false) {
			return;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_Build);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgKeybindTabSearchBridge", __this_00);
		AottgKeybindTabSearchBridge._registered = true;
		return;
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x5CC3200", Offset = "0x5CC2200", VA = "0x5CC3200")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$Build): clean
		AottgKeybindTabSearchBridge pGVar1;
		LayoutElement pUVar2;
		String[] pSVar3;
		GisketchUIRoot pGVar4;
		GisketchUIState pGVar5;

		if (go != null) {
			pGVar1 = go.AddComponent<AottgKeybindTabSearchBridge>();
			pUVar2 = go.AddComponent<LayoutElement>() ;
			if (pUVar2 != null) {
				pUVar2.set_ignoreLayout(true);
				if ((node == null) ||(pSVar3 = node.options, pSVar3 == null)) {
					pSVar3 = (String[])new string[0];
				}
				if (pGVar1 != null) {
					pGVar1._tabIds = pSVar3;
					if (context == null) {
						pGVar5 = null;
					}
					else {
						pGVar5 = context.State;
					}
					pGVar1._state = pGVar5;
					pGVar4 = go.GetComponentInParent<GisketchUIRoot>();
					pGVar1._root = pGVar4;
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x5CC3330", Offset = "0x5CC2330", VA = "0x5CC3330", Slot = "4")]
	public bool TryPrepareSearchTarget(string targetId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$TryPrepareSearchTarget): clean
		GisketchUIRoot x;
		GisketchUIState pGVar1;
		bool bVar2;
		String value;
		String a;
		bool bVar3;

		value = this.OwningTab(targetId);
		bVar2 = String.IsNullOrEmpty(value);
		if (!bVar2) {
			if (this._state == null) {
			}
			else {
				x = this._root;
				bVar2 = ((Object)x == null);
				if (!bVar2) {
					pGVar1 = this._state;
					if (pGVar1 == null) {
	label_05dc346b: ;
						throw new NullReferenceException();
					}
					a = pGVar1.Get("settings.keybinds.selectedTab", "general");
					bVar2 = String.Equals(a, value, 5);
					if (!bVar2) {
						this.SaveScroll(a);
						pGVar1 = this._state;
						if (pGVar1 == null) goto label_05dc346b;
						pGVar1.Set("settings.keybinds.selectedTab", value);
						AottgSettingsScreen.RefreshCategory(this._root, "keybinds");
					}
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x5CC3470", Offset = "0x5CC2470", VA = "0x5CC3470")]
	private string OwningTab(string targetId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$OwningTab): clean
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		String value;
		ulong uVar4;

		bVar2 = String.IsNullOrEmpty(targetId);
		if (bVar2) {
			return null;
		}
		pSVar3 = this._tabIds;
		if (pSVar3 != null) {
			if (targetId == null) {
				if (0 < (int)pSVar3.Length) {
					String.Concat("settings-keybinds-", pSVar3[0], "-");
					throw new NullReferenceException();
				}
				return null;
			}
			uVar4 = 0;
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((long)(int)uVar1 <= (long)uVar4) {
					return null;
				}
				if (uVar1 <= uVar4) {
	label_05dc355b: ;
					throw new IndexOutOfRangeException();
				}
				value = String.Concat("settings-keybinds-", pSVar3[uVar4], "-") ;
				bVar2 = targetId.StartsWith(value, 5);
				if (bVar2) {
					pSVar3 = this._tabIds;
					if (pSVar3 != null) {
						if ((uint)uVar4 < (uint)pSVar3.Length) {
							return pSVar3[uVar4];
						}
						goto label_05dc355b;
					}
					break;
				}
				uVar4 = uVar4 + 1;
				pSVar3 = this._tabIds;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x5CC3590", Offset = "0x5CC2590", VA = "0x5CC3590")]
	private void SaveScroll(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$SaveScroll): 4 lines keep C-only constructs
		GisketchUIRoot pGVar1;
		GisketchUIState __this_00;
		bool bVar2;
		uint in_EAX;
		Transform root;
		GisketchVirtualScrollRuntime __this_01;
		String key;
		CultureInfo provider;
		String value;
		float fVar3;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		pGVar1 = this._root;
		root = null;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._root;
			if (pGVar1 == null) goto label_05dc36f6;
			root = pGVar1.transform;
		}
		__this_01 = AottgSettingsKeybindsCategory.FindActiveScroll(root);
		bVar2 = ((Object)__this_01 != null);
		if (!bVar2) {
			return;
		}
		__this_00 = this._state;
		key = AottgSettingsKeybindsCategory.ScrollStateKey(tabId);
		if (__this_01 != null) {
			fVar3 = __this_01.CurrentScrollOffset;
			uStack_38 = CONCAT44(fVar3, (uint)uStack_38);
			provider = CultureInfo.InvariantCulture;
			value = (((long)&uStack_38 + 4)).ToString((IFormatProvider)provider) ;
			if (__this_00 != null) {
				__this_00.Set(key, value);
				return;
			}
		}
	label_05dc36f6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x5CC3700", Offset = "0x5CC2700", VA = "0x5CC3700")]
	public AottgKeybindTabSearchBridge()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$.ctor): clean
		base();
		return;
	}
}
