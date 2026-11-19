// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000183")]
internal sealed class AottgSettingsDirtyMarkerRuntime : MonoBehaviour
{
	[Token(Token = "0x40008A6")]
	public const string NodeType = "AottgSettingsDirtyMarker";

	[Token(Token = "0x40008A7")]
	private const float StripWidth = 3f;

	[Token(Token = "0x40008A8")]
	private const float StripX = -6f;

	[Token(Token = "0x40008A9")]
	private const float DotSize = 7f;

	[Token(Token = "0x40008AA")]
	private const float DotX = 10f;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40008AC")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _strip;

	[Token(Token = "0x40008AD")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _dot;

	[Token(Token = "0x40008AE")]
	[FieldOffset(Offset = "0x38")]
	private CanvasGroup _group;

	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIState _state;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x48")]
	private string _stateKey;

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x5D3B440", Offset = "0x5D3A440", VA = "0x5D3B440")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_075485ab == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_075485ab = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_Build);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgSettingsDirtyMarker", __this_00);
		return;
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x5D3B500", Offset = "0x5D3A500", VA = "0x5D3B500")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Build): clean
		AottgSettingsDirtyMarkerRuntime __this;
		String stateKey;
		GisketchUIState state;
		GisketchTheme theme;

		if (go != null) {
			__this = go.AddComponent<AottgSettingsDirtyMarkerRuntime>();
			if (context == null) {
				theme = null;
				state = null;
			}
			else {
				theme = context.Theme;
				state = context.State;
			}
			if (node == null) {
				stateKey = null;
			}
			else {
				stateKey = node.value;
			}
			if (__this != null) {
				__this.Setup(theme, state, stateKey);
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x5D3B590", Offset = "0x5D3A590", VA = "0x5D3B590")]
	private void Setup(GisketchTheme theme, GisketchUIState state, string stateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Setup): 18 lines keep C-only constructs
		CanvasGroup* targetAddress;
		GisketchUIState __this_00;
		bool bVar1;
		GameObject pUVar2;
		CanvasGroup pUVar3;
		RectTransform pUVar4;
		Action<string> __this_01;
		Color UVar5;
		Color color;
		Color color_00;
		ulong local_48;
		ulong local_38;

		this._state = state;
		this._stateKey = stateKey;
		pUVar2 = this.gameObject;
		if (pUVar2 != null) {
			pUVar3 = pUVar2.GetComponent<CanvasGroup>();
			targetAddress = &this._group;
			this._group = pUVar3;
			pUVar3 = this._group;
			bVar1 = ((Object)pUVar3 == null);
			if (bVar1) {
				pUVar2 = this.gameObject;
				if (pUVar2 == null) goto label_05e3b817;
				pUVar3 = pUVar2.AddComponent<CanvasGroup>();
				*targetAddress = pUVar3;
			}
			if (*targetAddress != null) {
				(*targetAddress).blocksRaycasts = false;
				if (*targetAddress != null) {
					(*targetAddress).interactable = false;
					if (theme == null) {
						local_38 = 0x3f5c28f63df5c28f;
						local_48 = 0x3f28f5c33f800000;
					}
					else {
						UVar5.b = (float)(int)g_data_01004fe0;
						UVar5.a = (float)g_data_01004fe0._4_4_;
						UVar5.r = 1.0;
						UVar5.g = 0.66;
						UVar5 = theme.GetColor("settingsDirty", UVar5);
						local_48 = UVar5._0_8_;
						local_38 = UVar5._8_8_;
					}
					pUVar4 = this.GetComponent<RectTransform>() ;
					this._rect = pUVar4;
					color.b = (float)(undefined4)local_38;
					color.a = (float)local_38._4_4_;
					color.r = (float)(undefined4)local_48;
					color.g = (float)local_48._4_4_;
					pUVar4 = this.CreateImage("dirty-strip", color);
					this._strip = pUVar4;
					color_00.b = (float)(undefined4)local_38;
					color_00.a = (float)local_38._4_4_;
					color_00.r = (float)(undefined4)local_48;
					color_00.g = (float)local_48._4_4_;
					__this_01 = (Action<string>)this.CreateImage("dirty-dot", color_00);
					this._dot = (RectTransform)__this_01;
					__this_00 = this._state;
					if (__this_00 != null) {
						__this_01 = new Action<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged);
						__this_00.add_Changed(__this_01);
					}
					this.Refresh();
					return;
				}
			}
		}
	label_05e3b817: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x5D3BB90", Offset = "0x5D3AB90", VA = "0x5D3BB90")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$OnDestroy): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;

		__this_00 = this._state;
		if (__this_00 == null) {
			return;
		}
		__this_01 = new Action<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged);
		__this_00.remove_Changed(__this_01);
		return;
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x5D3BC10", Offset = "0x5D3AC10", VA = "0x5D3BC10")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$OnStateChanged): clean
		CanvasGroup pUVar1;
		GisketchUIState __this_00;
		bool bVar2;
		float value;

		bVar2 = (key == this._stateKey);
		if (!bVar2) {
			return;
		}
		pUVar1 = this._group;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._group;
			__this_00 = this._state;
			if ((__this_00 == null) ||(bVar2 = __this_00.GetBool(this._stateKey, false), !bVar2)) {
				value = 0.0;
			}
			else {
				value = 1.0;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.alpha = value;
			return;
		}
		return;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x5D3BAF0", Offset = "0x5D3AAF0", VA = "0x5D3BAF0")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Refresh): clean
		CanvasGroup pUVar1;
		GisketchUIState __this_00;
		bool bVar2;
		float value;

		pUVar1 = this._group;
		bVar2 = ((Object)pUVar1 != null);
		if (!bVar2) {
			return;
		}
		pUVar1 = this._group;
		__this_00 = this._state;
		if ((__this_00 == null) ||(bVar2 = __this_00.GetBool(this._stateKey, false), !bVar2)) {
			value = 0.0;
		}
		else {
			value = 1.0;
		}
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.alpha = value;
		return;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x5D3BC40", Offset = "0x5D3AC40", VA = "0x5D3BC40")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$LateUpdate): 5 lines keep C-only constructs
		RectTransform* targetAddress;
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;
		bool bVar1;
		RectTransform pUVar2;
		RectTransform pUVar3;
		float fVar4;
		float fVar5;
		Rect UVar6;
		Rect UVar7;
		Vector3 UVar8;
		float fStack_44;

		pUVar2 = this._rect;
		targetAddress = &this._rect;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			pUVar2 = this.GetComponent<RectTransform>();
			this._rect = pUVar2;
		}
		pUVar2 = *targetAddress;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			return;
		}
		pUVar2 = this._strip;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			return;
		}
		pUVar2 = this._dot;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			return;
		}
		pUVar2 = this.RowRect();
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			if (pUVar2 == null) goto label_05e3bee1;
			pUVar3 = pUVar2;
		}
		else {
			pUVar3 = *targetAddress;
			if (pUVar3 == null) goto label_05e3bee1;
		}
		UVar6 = pUVar3.rect;
		bVar1 = ((Object)pUVar2 != null);
		fVar4 = 0.0;
		if (bVar1) {
			if (pUVar2 == null) goto label_05e3bee1;
			pUVar3 = *targetAddress;
			UVar7 = pUVar2.rect;
			UVar8.x = UVar7.m_XMin + UVar7.m_Width * 0.5;
			UVar8.y = UVar7.m_YMin + UVar7.m_Height * 0.5;
			UVar8.z = 0.0;
			UVar8 = pUVar2.TransformPoint(UVar8);
			if (pUVar3 == null) goto label_05e3bee1;
			UVar8 = pUVar3.InverseTransformPoint(UVar8);
			fVar4 = UVar8.y;
		}
		pUVar2 = this._strip;
		if (pUVar2 != null) {
			fStack_44 = UVar6.m_Height;
			fVar5 = 1.0;
			if (1.0 <= fStack_44) {
				fVar5 = fStack_44;
			}
			value.y = fVar5;
			value.x = 3.0;
			pUVar2.sizeDelta = value;
			value_00.y = fVar4;
			value_00.x = -6.0;
			pUVar2.anchoredPosition = value_00;
			pUVar2 = this._dot;
			if (pUVar2 != null) {
				pUVar2.sizeDelta = (Vector2)0x40e0000040e00000;
				value_01.y = fVar4;
				value_01.x = 10.0;
				pUVar2.anchoredPosition = value_01;
				return;
			}
		}
	label_05e3bee1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x5D3BEF0", Offset = "0x5D3AEF0", VA = "0x5D3BEF0")]
	private RectTransform RowRect()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$RowRect): 1 lines keep C-only constructs
		bool bVar1;
		Transform pUVar2;
		RectTransform pUVar3;
		RectTransform pUVar4;

		pUVar2 = this.transform;
		if (pUVar2 == null) {
	label_05e3bf99: ;
			throw new NullReferenceException();
		}
		pUVar2 = pUVar2.parent;
		bVar1 = ((Object)pUVar2 != null);
		pUVar4 = null;
		if (bVar1) {
			if (pUVar2 == null) goto label_05e3bf99;
			pUVar3 = (RectTransform)pUVar2.parent;
			pUVar4 = null;
			if ((pUVar3 != null) &&(pUVar4 = null, pUVar3.klass == typeof(RectTransform))) {
				pUVar4 = pUVar3;
			}
		}
		return pUVar4;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x5D3B820", Offset = "0x5D3A820", VA = "0x5D3B820")]
	private RectTransform CreateImage(string name, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$CreateImage): 3 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		Image pUVar3;
		RectTransform __this_02;

		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05e3bad3: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05e3badd;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e3badd;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_05e3badd: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar1;
					__this_00 = new GameObject(name, components);
					if (__this_00 != null) {
						__this_01 = __this_00.transform;
						parent = this.transform;
						if (__this_01 != null) {
							__this_01.SetParent(parent, false);
							pUVar3 = __this_00.GetComponent<Image>();
							if (pUVar3 != null) {
								pUVar3.set_color(color);
								pUVar3.set_raycastTarget(false);
								__this_02 = __this_00.GetComponent<RectTransform>();
								if (__this_02 != null) {
									__this_02.anchorMin = (Vector2)0x3f00000000000000;
									__this_02.anchorMax = (Vector2)0x3f00000000000000;
									__this_02.pivot = (Vector2)0x3f0000003f000000;
									return __this_02;
								}
							}
						}
					}
					goto label_05e3bad3;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x5D3BFA0", Offset = "0x5D3AFA0", VA = "0x5D3BFA0")]
	private static void SetRect(RectTransform rect, float width, float height, float x, float y)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$SetRect): clean
		Vector2 value;
		Vector2 value_00;

		if (rect == null) {
			throw new NullReferenceException();
		}
		value.y = height;
		value.x = width;
		rect.sizeDelta = value;
		value_00.y = y;
		value_00.x = x;
		rect.anchoredPosition = value_00;
		return;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x5D3BFE0", Offset = "0x5D3AFE0", VA = "0x5D3BFE0")]
	public AottgSettingsDirtyMarkerRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$.ctor): clean
		base();
		return;
	}
}
