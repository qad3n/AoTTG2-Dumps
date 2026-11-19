// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Gilzoide.FlexUi;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000034")]
public sealed class GisketchUIBinding : MonoBehaviour
{
	[Token(Token = "0x400010C")]
	private const string ProfileHoverBioNodeId = "public-profile-hover-bio";

	[Token(Token = "0x400010D")]
	private const float ProfileHoverBioLineHeight = 24f;

	[Token(Token = "0x400010E")]
	private const int ProfileHoverBioMaxLines = 5;

	[Token(Token = "0x400010F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIBindingDefinition _definition;

	[Token(Token = "0x4000110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchMotionDefinition _enter;

	[Token(Token = "0x4000111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchMotionDefinition _exit;

	[Token(Token = "0x4000112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GisketchUIState _state;

	[Token(Token = "0x4000113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Tween _visibilityTween;

	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _visibilityInitialized;

	[Token(Token = "0x4000115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool _targetVisible;

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x5243C90", Offset = "0x5242C90", VA = "0x5243C90")]
	public void Setup(GisketchUIBindingDefinition definition, GisketchUIState state, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$Setup): 2 lines keep C-only constructs
		GisketchUIState pGVar1;
		Action<string> __this_00;
		Action<string> pSVar3;
		Delegate obj;
		Action<string> a;
		bool bVar4;

		this._definition = definition;
		this._enter = enter;
		this._exit = exit;
		this._state = state;
		pGVar1 = this._state;
		if (pGVar1 != null) {
			__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
			a = pGVar1.Changed;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)__this_00);
				state = null;
				if (obj != null) {
					state = (GisketchUIState)((object)obj as Action<string>);
					if ((MethodInfo)state == null) {
						throw new InvalidCastException();
					}
				}
				pSVar3 = il2cpp_codegen_interlocked_compare_exchange_ref(&pGVar1.Changed, state, a);
				bVar4 = pSVar3 != a;
				a = pSVar3;
			} while (bVar4);
		}
		this.Refresh();
		return;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x5244700", Offset = "0x5243700", VA = "0x5244700")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$OnDestroy): 2 lines keep C-only constructs
		Tween t;
		GisketchUIState pGVar1;
		Action<string> __this_00;
		Action<string> pSVar3;
		Delegate obj;
		object value;
		Action<string> source;
		bool bVar4;

		t = this._visibilityTween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		pGVar1 = this._state;
		if (pGVar1 != null) {
			__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
			source = pGVar1.Changed;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)__this_00);
				value = null;
				if (obj != null) {
					value = ((object)obj as Action<string>);
					if (value == null) {
						throw new InvalidCastException();
					}
				}
				pSVar3 = il2cpp_codegen_interlocked_compare_exchange_ref(&pGVar1.Changed, value, source);
				bVar4 = pSVar3 != source;
				source = pSVar3;
			} while (bVar4);
		}
		return;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x52448B0", Offset = "0x52438B0", VA = "0x52448B0")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$OnStateChanged): 2 lines keep C-only constructs
		GisketchUIState pGVar1;
		GisketchUIBindingDefinition pGVar2;
		bool bVar4;
		Action<string> __this_00;
		Action<string> pSVar5;
		Delegate obj;
		object value;
		Action<string> source;
		MethodInfo method_00;

		bVar4 = ((Object)this == null);
		if (bVar4) {
			pGVar1 = this._state;
			if (pGVar1 != null) {
				__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_OnStateChanged);
				source = pGVar1.Changed;
				do {
					obj = Delegate.Remove((Delegate)source, (Delegate)__this_00);
					value = null;
					if ((obj != null) &&(value = ((object)obj as Action<string>), value == null)) {
						throw new InvalidCastException();
					}
					pSVar5 = il2cpp_codegen_interlocked_compare_exchange_ref(&pGVar1.Changed, value, source);
					bVar4 = pSVar5 != source;
					source = pSVar5;
				} while (bVar4);
			}
		}
		else {
			pGVar2 = this._definition;
			if (pGVar2 != null) {
				method_00 = (MethodInfo)pGVar2.text;
				bVar4 = (key == (String)method_00);
				if (!bVar4) {
					pGVar2 = this._definition;
					if (pGVar2 == null) {
	label_05344a87: ;
						throw new NullReferenceException();
					}
					method_00 = (MethodInfo)pGVar2.sprite;
					bVar4 = (key == (String)method_00);
					if (!bVar4) {
						pGVar2 = this._definition;
						if (pGVar2 == null) goto label_05344a87;
						method_00 = (MethodInfo)pGVar2.value;
						bVar4 = (key == (String)method_00);
						if (!bVar4) {
							pGVar2 = this._definition;
							if (pGVar2 == null) goto label_05344a87;
							method_00 = (MethodInfo)pGVar2.visible;
							bVar4 = (key == (String)method_00);
							if (!bVar4) {
								pGVar2 = this._definition;
								if (pGVar2 == null) goto label_05344a87;
								method_00 = (MethodInfo)pGVar2.enabled;
								bVar4 = (key == (String)method_00);
								if (!bVar4) {
									return;
								}
							}
						}
					}
				}
				this.Refresh();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x5243E80", Offset = "0x5242E80", VA = "0x5243E80")]
	public void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$Refresh): 4 lines keep C-only constructs
		uint uVar1;
		GisketchUIBindingDefinition pGVar2;
		GisketchUIState pGVar3;
		Object x;
		Dictionary<object, object> __this_00;
		Selectable __this_01;
		TMP_InputField __this_02;
		bool bVar4;
		bool bVar5;
		TextMeshProUGUI text;
		String pSVar6;
		String pSVar7;
		GameObject root;
		Image __this_03;
		Object y;
		AottgSliderControl slider;
		AottgChoiceControl pGVar8;
		Toggle pUVar9;
		CultureInfo provider;
		GisketchToggleFeedback __this_04;
		Object[] pSVar10;
		ulong uVar11;
		ulong uVar12;
		MethodInfo pMVar13;
		float local_54;
		TMP_InputField local_50;
		Toggle local_48;
		AottgChoiceControl local_40;
		String local_38;

		if (Il2CppMethodInitialized_075428c9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Image) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI) ;
			Il2CppMethodInitialized_075428c9 = true;
		}
		local_54 = 0.0;
		bVar4 = ((Object)this == null);
		if (bVar4) {
			return;
		}
		pGVar2 = this._definition;
		if (pGVar2 == null) {
			return;
		}
		if (this._state == null) {
			return;
		}
		bVar4 = String.IsNullOrEmpty(pGVar2.text);
		if (!bVar4) {
			text = this.GetComponent<TextMeshProUGUI>();
			if (text == null) {
				text = this.GetComponentInChildren<TextMeshProUGUI>();
			}
			bVar4 = ((Object)text != null);
			if (bVar4) {
				pGVar2 = this._definition;
				if ((pGVar2 == null) ||(pGVar3 = this._state, pGVar3 == null)) goto label_053446ef;
				pSVar6 = pGVar3.Get(pGVar2.text, null);
				if (pSVar6 == null) {
					if (text == null) goto label_053446ef;
					pSVar6 = text.get_text();
				}
				else {
					pSVar6 = GisketchArabicText.ToVisual(pSVar6, false);
					if (text == null) goto label_053446ef;
				}
				pSVar7 = text.get_text() ;
				bVar4 = (pSVar7 != pSVar6);
				if (bVar4) {
					text.set_text(pSVar6) ;
					pMVar13 = null;
					root = this.gameObject;
					GisketchUIBinding.RefreshButtonWidth(root);
					this.RefreshProfileHoverBioHeight(text);
				}
			}
		}
		pGVar2 = this._definition;
		if (pGVar2 == null) goto label_053446ef;
		bVar4 = String.IsNullOrEmpty(pGVar2.sprite);
		if (!bVar4) {
			__this_03 = this.GetComponent<Image>();
			if (__this_03 == null) {
				__this_03 = this.GetComponentInChildren<Image>(true);
			}
			bVar4 = ((Object)__this_03 != null);
			if (bVar4) {
				pGVar2 = this._definition;
				if ((pGVar2 == null) ||(pGVar3 = this._state, pGVar3 == null)) goto label_053446ef;
				pSVar6 = pGVar3.Get(pGVar2.sprite, (String)(*(MethodInfo*)(g_data_07556758 + 0xb8)).methodPointer);
				y = (Object)GisketchSpriteLoader.Load(pSVar6);
				if (__this_03 == null) goto label_053446ef;
				x = (Object)__this_03.m_Sprite;
				bVar4 = (x != y);
				if (bVar4) {
					__this_03.sprite = (Sprite)y;
				}
			}
		}
		pGVar2 = this._definition;
		if (pGVar2 == null) goto label_053446ef;
		bVar4 = String.IsNullOrEmpty(pGVar2.value);
		if (!bVar4) {
			slider = this.GetComponent<AottgSliderControl>();
			if (slider == null) {
				slider = this.GetComponentInChildren<AottgSliderControl>(true);
			}
			pGVar8 = this.GetComponent<AottgChoiceControl>();
			if (pGVar8 == null) {
				pGVar8 = this.GetComponentInChildren<AottgChoiceControl>(true);
			}
			local_50 = this.GetComponent<TMP_InputField>();
			if (local_50 == null) {
				local_50 = this.GetComponentInChildren<TMP_InputField>(true);
			}
			pUVar9 = this.GetComponent<Toggle>();
			if (pUVar9 == null) {
				pUVar9 = this.GetComponentInChildren<Toggle>(true);
			}
			pGVar2 = this._definition;
			local_40 = pGVar8;
			if (pGVar2 == null) goto label_053446ef;
			pGVar3 = this._state;
			pSVar6 = pGVar2.value;
			local_48 = pUVar9;
			pSVar7 = GisketchUIBinding.CurrentValue(slider, pGVar8, local_50, pUVar9);
			if (pGVar3 == null) goto label_053446ef;
			local_38 = null;
			bVar4 = String.IsNullOrEmpty(pSVar6);
			if (!bVar4) {
				__this_00 = (Dictionary<object, object>)pGVar3._values;
				if (__this_00 == null) goto label_053446ef;
				bVar4 = __this_00.TryGetValue((object)pSVar6, (object*)&local_38);
				if (bVar4) {
					pSVar7 = local_38;
				}
			}
			bVar4 = ((Object)slider != null);
			if (bVar4) {
				provider = CultureInfo.InvariantCulture;
				bVar4 = Single.TryParse(pSVar7, 0xa7, (IFormatProvider)provider, ref local_54);
				if (bVar4) {
					if (slider == null) goto label_053446ef;
					slider.SetValueWithoutNotify(local_54) ;
					goto label_0534459b;
				}
			}
			pGVar8 = local_40;
			bVar4 = ((Object)local_40 != null);
			if (bVar4) {
				if (pGVar8 == null) goto label_053446ef;
				pGVar8.SetValueWithoutNotify(pSVar7);
			}
			else {
				__this_02 = local_50;
				bVar4 = ((Object)local_50 != null);
				if (bVar4) {
					if (__this_02 == null) goto label_053446ef;
					__this_02.SetTextWithoutNotify(pSVar7);
				}
				else {
					bVar4 = ((Object)local_48 != null);
					if (bVar4) {
						bVar4 = (pSVar7 == "1");
						bVar5 = true;
						if (!bVar4) {
							bVar5 = String.Equals(pSVar7, "true", 5);
						}
						pUVar9 = local_48;
						if (local_48 == null) goto label_053446ef;
						if (bVar5 != local_48.m_IsOn) {
							local_48.SetIsOnWithoutNotify(bVar5);
							__this_04 = pUVar9.GetComponent<GisketchToggleFeedback>();
							bVar4 = ((Object)__this_04 != null);
							if (bVar4) {
								if (__this_04 == null) goto label_053446ef;
								__this_04.RefreshValue(false);
							}
						}
					}
				}
			}
		}
	label_0534459b: ;
		pGVar2 = this._definition;
		if (pGVar2 != null) {
			pMVar13 = null;
			bVar4 = String.IsNullOrEmpty(pGVar2.visible);
			if (!bVar4) {
				this.RefreshVisibility();
			}
			pGVar2 = this._definition;
			if (pGVar2 == null) goto label_053446ef;
			bVar4 = String.IsNullOrEmpty(pGVar2.enabled);
			if (bVar4) {
				return;
			}
			pSVar10 = this.GetComponentsInChildren<Selectable>(true);
			if (pSVar10 == null) goto label_053446ef;
			if (pSVar10.Length == 0) {
				bVar4 = true;
				pMVar13 = (MethodInfo)this._definition;
			}
			else {
				if ((int)pSVar10.Length == 0) goto label_053446f4;
				if (pSVar10[0] == null) goto label_053446ef;
				bVar4 = *(sbyte)&pSVar10[0][0xd].monitor != false;
				pMVar13 = (MethodInfo)this._definition;
			}
			if ((pMVar13 != null) &&(pGVar3 = this._state, pGVar3 != null)) {
				bVar4 = pGVar3.GetBool((String)pMVar13.parameters, bVar4);
				if ((int)pSVar10.Length < 1) {
					return;
				}
				uVar11 = pSVar10.Length & 0xffffffff;
				uVar12 = 0;
				while (uVar12 < uVar11) {
					__this_01 = (Selectable)pSVar10[uVar12];
					bVar5 = ((Object)__this_01 != null);
					if (bVar5) {
						if (__this_01 == null) goto label_053446ef;
						if (bVar4 != (__this_01.m_Interactable != false)) {
							__this_01.interactable = bVar4;
						}
					}
					uVar12 = uVar12 + 1;
					uVar1 = (uint)pSVar10.Length;
					uVar11 = (ulong)uVar1;
					if ((long)(int)uVar1 <= (long)uVar12) {
						return;
					}
				}
	label_053446f4: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_053446ef: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5245720", Offset = "0x5244720", VA = "0x5245720")]
	private void RefreshVisibility()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibility): 6 lines keep C-only constructs
		Tween* targetAddress;
		GisketchUIBindingDefinition pGVar1;
		GisketchUIState __this_00;
		String key;
		GisketchMotionDefinition pGVar2;
		bool bVar3;
		bool bVar4;
		GameObject pUVar5;
		TweenCallback __this_01;
		Tween pDVar6;

		pGVar1 = this._definition;
		if (pGVar1 == null) goto label_05345b44;
		__this_00 = this._state;
		key = pGVar1.visible;
		pUVar5 = this.gameObject;
		if ((pUVar5 == null) ||(bVar3 = pUVar5.activeSelf, __this_00 == null)) goto label_05345b44;
		bVar3 = __this_00.GetBool(key, bVar3);
		if (this._visibilityInitialized == false) {
			pUVar5 = this.gameObject;
			if (pUVar5 != null) {
				bVar4 = pUVar5.activeSelf;
				this._visibilityInitialized = true;
				this._targetVisible = bVar3;
				pUVar5 = this.gameObject;
				if (pUVar5 != null) {
					pUVar5.SetActive(bVar3);
					if (!bVar3) {
						return;
					}
					pUVar5 = this.gameObject;
					GisketchUIBinding.RefreshDescendantButtonWidths(pUVar5);
					this.RefreshVisibilityLayout();
					bVar3 = Application.isPlaying;
					if (!bVar3) {
						return;
					}
					if (bVar4) {
						return;
					}
					pGVar2 = this._enter;
					if (pGVar2 == null) {
						return;
					}
					bVar3 = String.IsNullOrEmpty(pGVar2.preset);
					if (bVar3) {
						return;
					}
					pUVar5 = this.gameObject;
					pGVar2 = this._enter;
					if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(GisketchMotion)) ;
					}
					pDVar6 = GisketchMotion.PlayNode(pUVar5, pGVar2, true, false);
					this._visibilityTween = pDVar6;
					goto label_05345b32;
				}
			}
			goto label_05345b44;
		}
		if (this._targetVisible == bVar3) {
			pUVar5 = this.gameObject;
			if (pUVar5 == null) goto label_05345b44;
			bVar4 = pUVar5.activeSelf;
			if (bVar3 == bVar4) {
				return;
			}
		}
		this._targetVisible = bVar3;
		targetAddress = &this._visibilityTween;
		pDVar6 = this._visibilityTween;
		if (pDVar6 != null) {
			TweenExtensions.Kill(pDVar6, false);
		}
		*targetAddress = null;
		if (bVar3) {
			pUVar5 = this.gameObject;
			if (pUVar5 != null) {
				pUVar5.SetActive(true);
				pUVar5 = this.gameObject;
				GisketchUIBinding.RefreshDescendantButtonWidths(pUVar5);
				this.RefreshVisibilityLayout();
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = Application.isPlaying;
				}
				else {
					bVar3 = Application.isPlaying;
				}
				if (((!bVar3) ||(pGVar2 = this._enter, pGVar2 == null)) ||(bVar3 = String.IsNullOrEmpty(pGVar2.preset))) {
					return;
				}
				pUVar5 = this.gameObject;
				pGVar2 = this._enter;
				pDVar6 = GisketchMotion.PlayNode(pUVar5, pGVar2, true, false) ;
				*targetAddress = pDVar6;
	label_05345b32: ;
				return;
			}
			goto label_05345b44;
		}
		if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = Application.isPlaying;
			if (bVar3) goto label_05345a08;
		}
		else {
			bVar3 = Application.isPlaying;
			if (bVar3) {
	label_05345a08: ;
				pGVar2 = this._exit;
				if ((pGVar2 != null) &&(bVar3 = String.IsNullOrEmpty(pGVar2.preset), !bVar3)) {
					pUVar5 = this.gameObject;
					pGVar2 = this._exit;
					if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(GisketchMotion)) ;
					}
					pDVar6 = GisketchMotion.PlayNode(pUVar5, pGVar2, false, false);
					*targetAddress = pDVar6;
					pDVar6 = *targetAddress;
					if (pDVar6 != null) {
						__this_01 = new TweenCallback((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_State_GisketchUIBinding_RefreshVisibility_b__14_0);
						TweenSettingsExtensions.OnComplete<Tween>((object)pDVar6, __this_01);
						return;
					}
				}
			}
		}
		pUVar5 = this.gameObject;
		if (pUVar5 != null) {
			pUVar5.SetActive(false);
			this.RefreshVisibilityLayout();
			return;
		}
	label_05345b44: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5245E60", Offset = "0x5244E60", VA = "0x5245E60")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$HasMotion): clean
		bool bVar1;

		if (motion == null) {
			return false;
		}
		bVar1 = String.IsNullOrEmpty(motion.preset);
		return !bVar1;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x5245CF0", Offset = "0x5244CF0", VA = "0x5245CF0")]
	private void RefreshVisibilityLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibilityLayout): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		RectTransform pUVar3;
		RectTransform pUVar4;
		GameObject root;
		RectTransform rect;

		pUVar3 = (RectTransform)this.transform;
		rect = null;
		if ((pUVar3 != null) &&(rect = null, pUVar3.klass == typeof(RectTransform))) {
			rect = pUVar3;
		}
		bVar2 = ((Object)rect == null);
		if (bVar2) {
			return;
		}
		if (rect != null) {
			pUVar4 = (RectTransform)rect.parent;
			pUVar3 = null;
			if ((pUVar4 != null) &&(pUVar3 = null, pUVar4.klass == typeof(RectTransform))) {
				pUVar3 = pUVar4;
			}
			bVar2 = ((Object)pUVar3 == null);
			uVar1 = (typeof(LayoutRebuilder)._2).cctor_finished_or_no_cctor;
			if (bVar2) {
				if (uVar1 == 0) {
				}
				LayoutRebuilder.MarkLayoutForRebuild(rect);
				return;
			}
			if (uVar1 == 0) {
			}
			LayoutRebuilder.MarkLayoutForRebuild(pUVar3);
			if (pUVar3 != null) {
				root = pUVar3.gameObject;
				GisketchScreenBuilder.SettleLayout(root, 1);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x5245C60", Offset = "0x5244C60", VA = "0x5245C60")]
	private static void RefreshDescendantButtonWidths(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshDescendantButtonWidths): clean
		uint uVar1;
		Object[] pSVar2;
		GameObject root_00;
		uint uVar3;

		if (root != null) {
			pSVar2 = root.GetComponentsInChildren<Button>(true);
			if (pSVar2 != null) {
				uVar1 = (uint)pSVar2.Length;
				if (0 < (int)uVar1) {
					uVar3 = 0;
					do {
						if (uVar1 <= uVar3) {
							throw new IndexOutOfRangeException();
						}
						if ((Component)pSVar2[(int)uVar3] == null) goto label_05345ce7;
						root_00 = (pSVar2[(int)uVar3]).gameObject;
						GisketchUIBinding.RefreshButtonWidth(root_00);
						uVar3 = uVar3 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar3 < (int)uVar1);
				}
				return;
			}
		}
	label_05345ce7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x5245570", Offset = "0x5244570", VA = "0x5245570")]
	private static string CurrentValue(AottgSliderControl slider, AottgChoiceControl choice, TMP_InputField input, Toggle toggle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$CurrentValue): 1 lines keep C-only constructs
		bool bVar1;
		CultureInfo provider;
		String pSVar2;
		String* ppSVar3;
		float local_2c;

		bVar1 = ((Object)slider != null);
		if (bVar1) {
			if (slider != null) {
				local_2c = slider._Value_k__BackingField;
				provider = CultureInfo.InvariantCulture;
				pSVar2 = local_2c.ToString((IFormatProvider)provider);
				return pSVar2;
			}
		}
		else {
			bVar1 = ((Object)choice != null);
			if (bVar1) {
				if (choice != null) {
					return pSVar2;
				}
			}
			else {
				bVar1 = ((Object)input != null);
				if (!bVar1) {
					bVar1 = ((Object)toggle != null);
					if (bVar1) {
						if (toggle == null) goto label_05345717;
						if (toggle.m_IsOn == false) {
							ppSVar3 = &"false";
						}
						else {
							ppSVar3 = &"true";
						}
					}
					else {
						ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
					}
					return *ppSVar3;
				}
				if (input != null) {
					return input.m_Text;
				}
			}
		}
	label_05345717: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x5244B10", Offset = "0x5243B10", VA = "0x5244B10")]
	private static void RefreshButtonWidth(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshButtonWidth): 33 lines keep C-only constructs
		uint uVar1;
		YGValue GVar2;
		RectOffset __this;
		bool bVar3;
		sbyte cVar4;
		int iVar5;
		LayoutElement rootLayout;
		GisketchButtonWidthMeasure x;
		HorizontalLayoutGroup x_00;
		FlexLayout flex;
		RectMask2D x_01;
		RectTransform pUVar6;
		Transform pUVar7;
		GameObject __this_00;
		TextMeshProUGUI pTVar8;
		String pSVar9;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_01;
		MethodInfo pMVar10;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		int index;
		RectTransform rect;
		int iVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Vector2 UVar15;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar16 = new byte[16];
		float fVar17;
		byte[] local_78 = new byte[16];

		if (Il2CppMethodInitialized_075428ce == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI) ;
			Il2CppMethodInitialized_075428ce = true;
		}
		if (root == null) goto label_053451e9;
		rootLayout = root.GetComponent<LayoutElement>();
		x = root.GetComponent<GisketchButtonWidthMeasure>();
		x_00 = root.GetComponentInChildren<HorizontalLayoutGroup>(true);
		bVar3 = ((Object)rootLayout == null);
		if (!bVar3) {
			flex = root.GetComponent<FlexLayout>();
			x_01 = root.GetComponent<RectMask2D>();
			bVar3 = ((Object)x_01 != null);
			if (bVar3) {
				bVar3 = ((Object)flex != null);
				if (bVar3) {
					if (flex == null) goto label_053451e9;
					GVar2 = flex._maxWidth;
					if ((GVar2.Unit == 1) && (fVar14 = GVar2.Value, 0.0 < fVar14)) {
						if (rootLayout == null) goto label_053451e9;
						fVar12 = rootLayout.get_preferredWidth();
						pMVar10 = extraout_RDX;
						auVar16._0_4_ = ABS(fVar12);
						auVar16._4_4_ = 0;
						auVar16._8_4_ = extraout_XMM0_Dc & 0x7fffffff;
						auVar16._12_4_ = extraout_XMM0_Dd & 0x7fffffff;
						if (auVar16._0_4_ <= ABS(fVar14)) {
							auVar16._0_4_ = ABS(fVar14);
						}
						fVar13 = auVar16._0_4_ * 1e-06;
						fVar17 = Mathf.Epsilon * 8.0;
						if (fVar13 <= fVar17) {
							fVar13 = fVar17;
						}
						if (ABS(fVar14 - fVar12) < fVar13) {
							rootLayout.get_minWidth();
							cVar4 = il2cpp_runtime_helper_03296c30(0);
							pMVar10 = extraout_RDX_01;
							if (cVar4 != false) {
								GVar2 = flex._width;
								pMVar10 = (MethodInfo)0x100000000;
								if ((((((ulong)GVar2 & 0xffffffff00000000) == 0x100000000) &&(((ulong)flex._minWidth & 0xffffffff00000000) == 0x100000000)) &&(cVar4 = il2cpp_runtime_helper_03296c30((ulong)(uint)GVar2.Value, 0), pMVar10 = extraout_RDX_02, cVar4 != false) ) && (cVar4 = il2cpp_runtime_helper_03296c30(0), pMVar10 = extraout_RDX_03, cVar4 != false)) {
									return;
								}
							}
						}
						bVar3 = GisketchUIBinding.ApplyWidth(rootLayout, flex, fVar14, fVar14) ;
						if (!bVar3) {
							return;
						}
						pUVar6 = (RectTransform)root.transform;
						goto joined_r0x053451d0;
					}
				}
			}
			bVar3 = ((Object)x_00 != null);
			if (bVar3) {
				if ((x_00 != null) &&(__this = x_00.m_Padding, __this != null)) {
					iVar11 = 0;
					iVar5 = __this.horizontal;
					pUVar7 = x_00.transform;
					if (pUVar7 != null) {
						local_78 = ZEXT416((uint)(float)iVar5);
						index = 0;
						do {
							iVar5 = pUVar7.childCount;
							if (iVar5 <= index) {
								if (1 < iVar11) {
									local_78._4_4_ = 0;
									local_78._0_4_ = (float)local_78._0_4_ + (float)(iVar11 + -1) * x_00.m_Spacing;
								}
								uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
								goto joined_r0x05345121;
							}
							pUVar7 = x_00.transform;
							if (((pUVar7 == null) ||(pUVar7 = pUVar7.GetChild(index), pUVar7 == null)) ||(__this_00 = pUVar7.gameObject, __this_00 == null)) break;
							bVar3 = __this_00.activeInHierarchy;
							if (bVar3) {
								pTVar8 = pUVar7.GetComponent<TextMeshProUGUI>();
								iVar11 = iVar11 + 1;
								bVar3 = ((Object)pTVar8 != null) ;
								if (bVar3) {
									if (pTVar8 == null) break;
									pTVar8.ForceMeshUpdate(false, false);
									pSVar9 = pTVar8.get_text();
									UVar15 = pTVar8.GetPreferredValues(pSVar9);
									fVar14 = UVar15.x;
								}
								else {
									pUVar6 = pUVar7.GetComponent<RectTransform>();
									fVar14 = LayoutUtility.GetPreferredWidth(pUVar6);
								}
								local_78._4_4_ = 0;
								local_78._0_4_ = (float)local_78._0_4_ + fVar14;
							}
							index = index + 1;
							pUVar7 = x_00.transform;
						} while (pUVar7 != null);
					}
				}
				goto label_053451e9;
			}
			pTVar8 = root.GetComponentInChildren<TextMeshProUGUI>(true);
			bVar3 = ((Object)pTVar8 == null);
			if (!bVar3) {
				bVar3 = ((Object)x == null);
				if (!bVar3) {
					if (pTVar8 != null) {
						pTVar8.ForceMeshUpdate(false, false);
						pSVar9 = pTVar8.get_text();
						UVar15 = pTVar8.GetPreferredValues(pSVar9);
						if (x != null) {
							local_78._0_4_ = UVar15.x + x._HorizontalPadding_k__BackingField;
							uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x05345121: ;
							if (uVar1 == 0) {
							}
							bVar3 = ((Object)x != null);
							if (bVar3) {
								if (x == null) goto label_053451e9;
								fVar14 = x._MinWidthFloor_k__BackingField;
								pMVar10 = extraout_RDX_04;
							}
							else {
								if (rootLayout == null) goto label_053451e9;
								fVar14 = rootLayout.get_minWidth();
								pMVar10 = extraout_RDX_05;
							}
							if (fVar14 <= (float)local_78._0_4_) {
								fVar14 = (float)local_78._0_4_;
							}
							bVar3 = GisketchUIBinding.ApplyWidth(rootLayout, flex, (float)local_78._0_4_, fVar14);
							if (!bVar3) {
								return;
							}
							pUVar6 = (RectTransform)root.transform;
	joined_r0x053451d0: ;
							if (pUVar6 == null) {
								rect = null;
							}
							else {
								rect = null;
								if (pUVar6.klass == typeof(RectTransform)) {
									rect = pUVar6;
								}
							}
							LayoutRebuilder.MarkLayoutForRebuild(rect);
							return;
						}
					}
	label_053451e9: ;
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x5245E80", Offset = "0x5244E80", VA = "0x5245E80")]
	private static bool ApplyWidth(LayoutElement rootLayout, FlexLayout flex, float preferredWidth, float minWidth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$ApplyWidth): clean
		YGValue GVar1;
		bool bVar2;
		YGValue GVar3;
		bool bVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;

		if (rootLayout == null) {
	label_05346201: ;
			throw new NullReferenceException();
		}
		fVar5 = rootLayout.get_preferredWidth();
		fVar6 = ABS(preferredWidth);
		fVar10 = ABS(fVar5);
		if (ABS(fVar5) <= fVar6) {
			fVar10 = fVar6;
		}
		fVar7 = Mathf.Epsilon * 8.0;
		fVar8 = fVar10 * 1e-06;
		if (fVar10 * 1e-06 <= fVar7) {
			fVar8 = fVar7;
		}
		bVar4 = fVar8 <= ABS(preferredWidth - fVar5);
		if (bVar4) {
			rootLayout.set_preferredWidth(preferredWidth);
		}
		fVar5 = rootLayout.get_minWidth();
		fVar8 = ABS(minWidth);
		fVar10 = ABS(fVar5);
		if (ABS(fVar5) <= fVar8) {
			fVar10 = fVar8;
		}
		fVar9 = Mathf.Epsilon * 8.0;
		fVar7 = fVar10 * 1e-06;
		if (fVar10 * 1e-06 <= fVar9) {
			fVar7 = fVar9;
		}
		if (fVar7 <= ABS(minWidth - fVar5)) {
			rootLayout.set_minWidth(minWidth);
		}
		bVar4 = fVar7 <= ABS(minWidth - fVar5) || bVar4;
		bVar2 = ((Object)flex != null);
		if (bVar2) {
			if (flex == null) goto label_05346201;
			GVar1 = flex._width;
			if (GVar1.Unit != 2) {
				fVar5 = GVar1.Value;
				fVar10 = ABS(fVar5);
				if (fVar10 <= fVar6) {
					fVar10 = fVar6;
				}
				fVar7 = Mathf.Epsilon * 8.0;
				fVar6 = fVar10 * 1e-06;
				if (fVar10 * 1e-06 <= fVar7) {
					fVar6 = fVar7;
				}
				if (fVar6 <= ABS(preferredWidth - fVar5)) {
					GVar3 = ((YGValue)preferredWidth);
					flex.Width = GVar3;
					bVar4 = true;
				}
			}
		}
		bVar2 = ((Object)flex != null);
		if (bVar2) {
			if (flex == null) goto label_05346201;
			GVar1 = flex._minWidth;
			if (GVar1.Unit != 2) {
				fVar5 = GVar1.Value;
				fVar10 = ABS(fVar5);
				if (fVar10 <= fVar8) {
					fVar10 = fVar8;
				}
				fVar8 = Mathf.Epsilon * 8.0;
				fVar6 = fVar10 * 1e-06;
				if (fVar10 * 1e-06 <= fVar8) {
					fVar6 = fVar8;
				}
				if (fVar6 <= ABS(minWidth - fVar5)) {
					GVar3 = ((YGValue)minWidth);
					flex.MinWidth = GVar3;
					bVar4 = true;
				}
			}
		}
		return bVar4;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x52451F0", Offset = "0x52441F0", VA = "0x52451F0")]
	private void RefreshProfileHoverBioHeight(TextMeshProUGUI text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshProfileHoverBioHeight): 1 lines keep C-only constructs
		YGValue GVar1;
		float fVar2;
		bool bVar3;
		float fVar4;
		Object __this_00;
		String pSVar5;
		RectTransform pUVar6;
		FlexLayout __this_01;
		YGValue value;
		float fVar7;
		Vector2 UVar8;
		float width;
		float fVar9;
		float fVar10;
		Rect UVar11;

		__this_00 = (Object)this.gameObject;
		if (__this_00 == null) goto label_0534555c;
		pSVar5 = __this_00.name;
		bVar3 = (pSVar5 != "public-profile-hover-bio");
		if (bVar3) {
			return;
		}
		if (text == null) goto label_0534555c;
		text.maxVisibleLines = 5;
		text.overflowMode = 1;
		pUVar6 = text.rectTransform;
		bVar3 = ((Object)pUVar6 != null);
		width = 0.0;
		if (bVar3) {
			if (pUVar6 == null) goto label_0534555c;
			UVar11 = pUVar6.rect;
			width = UVar11.m_Width;
			if (width <= 1.0) goto label_05345344;
		}
		else {
	label_05345344: ;
			bVar3 = ((Object)pUVar6 != null);
			if (bVar3) {
				if (pUVar6 == null) goto label_0534555c;
				pUVar6 = (RectTransform)pUVar6.parent;
				if ((pUVar6 != null) &&(pUVar6.klass == typeof(RectTransform))) {
					UVar11 = pUVar6.rect;
					width = UVar11.m_Width;
				}
			}
		}
		fVar7 = 24.0;
		if (1.0 < width) {
			pSVar5 = text.get_text();
			UVar8 = text.GetPreferredValues(pSVar5, width, 0.0);
			fVar7 = UVar8.y;
		}
		fVar7 = ceilf(fVar7);
		__this_01 = this.GetComponent<FlexLayout>();
		bVar3 = ((Object)__this_01 == null);
		if (bVar3) {
			return;
		}
		if (__this_01 != null) {
			fVar4 = 120.0;
			if (fVar7 <= 120.0) {
				fVar4 = fVar7;
			}
			fVar7 = (float)(~-(uint)(24.0 <= fVar7) & 0x41c00000 | (uint)fVar4 & -(uint)(24.0 <= fVar7));
			GVar1 = __this_01._height;
			if (GVar1.Unit == 1) {
				fVar4 = GVar1.Value;
				fVar10 = ABS(fVar4);
				if (fVar10 <= ABS(fVar7)) {
					fVar10 = ABS(fVar7);
				}
				fVar9 = Mathf.Epsilon * 8.0;
				fVar2 = fVar10 * 1e-06;
				if (fVar10 * 1e-06 <= fVar9) {
					fVar2 = fVar9;
				}
				if (ABS(fVar7 - fVar4) < fVar2) {
					return;
				}
			}
			value = ((YGValue)fVar7);
			__this_01.Height = value;
			this.RefreshVisibilityLayout();
			return;
		}
	label_0534555c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x5246210", Offset = "0x5245210", VA = "0x5246210")]
	public GisketchUIBinding()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c (Gisketch.Aottg2UI.State.GisketchUIBinding$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c.

	// Gisketch.Aottg2UI.State.GisketchUIBinding$$<RefreshVisibility>b__14_0: clean
	private void RefreshVisibility_b__14_0()
	{
		GameObject __this_00;

		if (this._targetVisible != false) {
			return;
		}
		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(false);
		this.RefreshVisibilityLayout();
		return;
	}
}
