// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gilzoide.FlexUi;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200009B")]
public sealed class GisketchResponsiveRowLayout : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000339")]
	public const string NodeType = "ResponsiveRowLayout";

	[Token(Token = "0x400033A")]
	public const string CompactValue = "Compact";

	[Token(Token = "0x400033B")]
	public const float WideBreakpoint = 620f;

	[Token(Token = "0x400033C")]
	private const float WideLabelWidth = 300f;

	[Token(Token = "0x400033D")]
	private const float WideLabelMinWidth = 180f;

	[Token(Token = "0x400033E")]
	private const float WideControlMinWidth = 260f;

	[Token(Token = "0x400033F")]
	private const float WideGap = 14f;

	[Token(Token = "0x4000340")]
	private const float NarrowGap = 8f;

	[Token(Token = "0x4000341")]
	private const float CompactGap = 12f;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _root;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x30")]
	private Image _background;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _normalFont;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x48")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x50")]
	private TMP_FontAsset _hoverFont;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x58")]
	private Color _hoverColor;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x68")]
	private bool? _wide;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x6A")]
	private bool _hovered;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x6B")]
	private bool _compact;

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x5270EF0", Offset = "0x526FEF0", VA = "0x5270EF0")]
	static GisketchResponsiveRowLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$.cctor): clean
		GisketchResponsiveRowLayout.RegisterFactory();
		return;
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x5270F00", Offset = "0x526FF00", VA = "0x5270F00")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$RegisterFactory): 9 lines keep C-only constructs
		byte uVar1;
		GisketchComponentRegistry pGVar2;
		Dictionary<object, object> __this;
		String value;
		MethodInfo pMVar3;
		sbyte cVar4;
		bool bVar5;
		GisketchComponentFactory value_00;
		byte puVar6;
		object ex;

		if (Il2CppMethodInitialized_07542a56 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07542a56 = true;
			if ((typeof(GisketchResponsiveRowLayout)._2).cctor_finished_or_no_cctor != 0) goto label_05370f28;
	label_05370f91: ;
			cVar4 = GisketchResponsiveRowLayout._registered;
		}
		else {
			if ((typeof(GisketchResponsiveRowLayout)._2).cctor_finished_or_no_cctor == 0) goto label_05370f91;
	label_05370f28: ;
			cVar4 = GisketchResponsiveRowLayout._registered;
		}
		if (cVar4 != false) {
			return;
		}
		if (((typeof(GisketchComponentRegistry))._2). cctor_finished_or_no_cctor == 0) {
		}
		pGVar2 = GisketchComponentRegistry.Default;
		pMVar3 = MethodInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_BuildRuntime;
		value_00.method_ptr =(intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_BuildRuntime.virtualMethodPointer;
		value_00.method = (intptr_t)pMVar3;
		value_00.m_target = null;
		uVar1 = pMVar3.parameters_count;
		value_00.method_code = (intptr_t)value_00;
		cVar4 = il2cpp_runtime_helper_030d61c0();
		if (cVar4 == false) {
			if (uVar1 != 3) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
			puVar6 = &label_02d4ba20;
	label_0537103e: ;
			value_00.invoke_impl = (intptr_t)puVar6;
			value_00.extra_arg = (intptr_t)&label_02d4b9b0;
			value = "ResponsiveRowLayout";
		}
		else {
			if (uVar1 == 4) {
				puVar6 = &label_02d4ba50;
				goto label_0537103e;
			}
			value_00.invoke_impl = value_00.method_ptr;
			value_00.method_code = (intptr_t)value_00.m_target;
			value_00.extra_arg = (intptr_t)&label_02d4b9b0;
			value = "ResponsiveRowLayout";
		}
		"ResponsiveRowLayout" = value;
		if (pGVar2 == null) {
	label_053710fc: ;
			throw new NullReferenceException();
		}
		bVar5 = String.IsNullOrEmpty(value);
		if (!bVar5) {
			__this = (Dictionary<object, object>)pGVar2._factories;
			if (__this == null) goto label_053710fc;
			__this.set_Item((object)value, (object)value_00);
		}
		GisketchResponsiveRowLayout._registered = true;
		return;
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x5271120", Offset = "0x5270120", VA = "0x5271120")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$BuildRuntime): clean
		GisketchTheme theme;
		bool bVar1;
		GisketchResponsiveRowLayout __this;

		bVar1 = ((Object)go != null);
		if (bVar1) {
			if ((go != null) &&(__this = go.AddComponent<GisketchResponsiveRowLayout>(), context != null)) {
				theme = context.Theme;
				if (node == null) {
					bVar1 = false;
				}
				else {
					bVar1 = (node.value == "Compact");
				}
				if (__this != null) {
					__this.Setup(theme, bVar1);
					return true;
				}
			}
			throw new NullReferenceException();
		}
		return true;
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x52711F0", Offset = "0x52701F0", VA = "0x52711F0")]
	public void Setup(GisketchTheme theme, bool compact = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Setup): 6 lines keep C-only constructs
		Image* targetAddress;
		Image pUVar1;
		GameObject __this_00;
		float fVar2;
		float fVar3;
		ulong uVar4;
		Color UVar5;

		this._compact = compact;
		if (theme == null) {
			fVar2 = 0.0;
			fVar3 = 0.0;
			uVar4 = 0;
		}
		else {
			UVar5 = theme.GetColor("surfaceSoft", (Color)ZEXT416(0));
			uVar4 = UVar5._8_8_;
			fVar2 = UVar5.r;
			fVar3 = UVar5.g;
		}
		this._hoverColor.r = fVar2;
		this._hoverColor.g = fVar3;
		this._hoverColor.b = (float)uVar4;
		this._hoverColor.a = (float)((ulong)uVar4 >> 0x20);
		this._hoverColor.a = 0.5;
		pUVar1 = this.GetComponent<Image>();
		if (pUVar1 == null) {
			__this_00 = this.gameObject;
			if (__this_00 == null) goto label_053712f8;
			pUVar1 = __this_00.AddComponent<Image>();
		}
		targetAddress = &this._background;
		this._background = pUVar1;
		pUVar1 = this._background;
		if (pUVar1 != null) {
			pUVar1.set_color((Color)ZEXT416(0));
			pUVar1 = *targetAddress;
			if (pUVar1 != null) {
				pUVar1.set_raycastTarget(true);
				return;
			}
		}
	label_053712f8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x5271300", Offset = "0x5270300", VA = "0x5271300")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Awake): clean
		RectTransform pUVar1;

		pUVar1 = this.GetComponent<RectTransform>();
		this._rect = pUVar1;
		return;
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x5271350", Offset = "0x5270350", VA = "0x5271350")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$LateUpdate): clean
		this.CacheLabel();
		this.ApplyForCurrentWidth();
		this.RefreshHover();
		return;
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x5271500", Offset = "0x5270500", VA = "0x5271500")]
	public void ApplyForCurrentWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyForCurrentWidth): clean
		RectTransform pUVar1;
		bool bVar2;
		float fVar3;
		Rect UVar4;

		if (this._compact != false) {
			this.ApplyCompact();
			return;
		}
		pUVar1 = this._rect;
		bVar2 = ((Object)pUVar1 != null);
		fVar3 = 0.0;
		if (bVar2) {
			pUVar1 = this._rect;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			UVar4 = pUVar1.rect;
			fVar3 = UVar4.m_Width;
			if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			}
		}
		this.Apply((bool)((-(fVar3 <= 0.0) | -(620.0 <= fVar3)) & 1));
		return;
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x5271A30", Offset = "0x5270A30", VA = "0x5271A30")]
	public void Apply(bool wide)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Apply): 7 lines keep C-only constructs
		FlexLayout* targetAddress;
		Nullable<bool> __this_00;
		bool bVar1;
		ulong in_RAX;
		FlexLayout pGVar2;
		FlexLayout label;
		FlexLayout control;
		ulong uStack_38;

		uStack_38 = in_RAX;
		pGVar2 = this._root;
		targetAddress = &this._root;
		bVar1 = ((Object)pGVar2 != null);
		if (bVar1) {
			pGVar2 = *targetAddress;
		}
		else {
			pGVar2 = this.GetComponent<FlexLayout>();
		}
		this._root = pGVar2;
		label = this.ChildFlex(0);
		control = this.ChildFlex(1);
		pGVar2 = this._root;
		bVar1 = ((Object)pGVar2 == null);
		if (!bVar1) {
			bVar1 = ((Object)label == null);
			if (!bVar1) {
				bVar1 = ((Object)control == null);
				if (!bVar1) {
					__this_00 = &this._wide;
					if ((this._wide.hasValue != false) &&(bVar1 = __this_00.Value, bVar1 == wide)) {
						return;
					}
					uStack_38 = uStack_38 & 0xffffffffffff0000;
					uStack_38 = new Nullable<bool>(wide);
					__this_00.fields = uStack_38._0_2_;
					if (wide) {
						this.ApplyWide(label, control);
					}
					else {
						this.ApplyNarrow(label, control);
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x5271C80", Offset = "0x5270C80", VA = "0x5271C80")]
	private void ApplyWide(FlexLayout label, FlexLayout control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyWide): clean
		FlexLayout pGVar1;
		YGValue GVar2;

		pGVar1 = this._root;
		if (pGVar1 != null) {
			pGVar1.FlexDirection = 2;
			pGVar1 = this._root;
			if (pGVar1 != null) {
				pGVar1.FlexWrap = 0;
				pGVar1 = this._root;
				if (pGVar1 != null) {
					pGVar1.AlignItems = 2;
					pGVar1 = this._root;
					if (pGVar1 != null) {
						pGVar1.GapColumn = 14.0;
						pGVar1 = this._root;
						if (pGVar1 != null) {
							pGVar1.GapRow = 14.0;
							GVar2 = ((YGValue)300.0);
							if (label != null) {
								label.Width = GVar2;
								GVar2 = ((YGValue)180.0);
								label.MinWidth = GVar2;
								label.FlexGrow = 0.0;
								label.FlexShrink = 1.0;
								if (control != null) {
									control.Width = (YGValue)(YGValue.Auto);
									GVar2 = ((YGValue)260.0);
									control.MinWidth = GVar2;
									control.FlexGrow = 1.0;
									control.FlexShrink = 1.0;
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

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5271E10", Offset = "0x5270E10", VA = "0x5271E10")]
	private void ApplyNarrow(FlexLayout label, FlexLayout control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyNarrow): clean
		FlexLayout pGVar1;
		YGValue GVar2;

		pGVar1 = this._root;
		if (pGVar1 != null) {
			pGVar1.FlexDirection = 0;
			pGVar1 = this._root;
			if (pGVar1 != null) {
				pGVar1.FlexWrap = 0;
				pGVar1 = this._root;
				if (pGVar1 != null) {
					pGVar1.AlignItems = 4;
					pGVar1 = this._root;
					if (pGVar1 != null) {
						pGVar1.GapColumn = 8.0;
						pGVar1 = this._root;
						if (pGVar1 != null) {
							pGVar1.GapRow = 8.0;
							GVar2 = YGValue.Percent(100.0);
							if (label != null) {
								label.Width = GVar2;
								label.MinWidth = (YGValue)(YGValue.Undefined);
								label.FlexGrow = 0.0;
								label.FlexShrink = 1.0;
								GVar2 = YGValue.Percent(100.0);
								if (control != null) {
									control.Width = GVar2;
									control.MinWidth = (YGValue)(YGValue.Undefined);
									control.FlexGrow = 0.0;
									control.FlexShrink = 1.0;
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

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5271730", Offset = "0x5270730", VA = "0x5271730")]
	private void ApplyCompact()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyCompact): 17 lines keep C-only constructs
		FlexLayout* targetAddress;
		Nullable<bool> __this_00;
		bool bVar1;
		ulong in_RAX;
		FlexLayout pGVar2;
		FlexLayout __this_01;
		FlexLayout __this_02;
		YGValue value;
		ulong uStack_38;

		uStack_38 = in_RAX;
		pGVar2 = this._root;
		targetAddress = &this._root;
		bVar1 = ((Object)pGVar2 != null);
		if (bVar1) {
			pGVar2 = *targetAddress;
		}
		else {
			pGVar2 = this.GetComponent<FlexLayout>();
		}
		this._root = pGVar2;
		__this_01 = this.ChildFlex(0);
		__this_02 = this.ChildFlex(1);
		pGVar2 = this._root;
		bVar1 = ((Object)pGVar2 == null);
		if (!bVar1) {
			bVar1 = ((Object)__this_01 == null);
			if (!bVar1) {
				bVar1 = ((Object)__this_02 == null);
				if (!bVar1) {
					__this_00 = &this._wide;
					if ((this._wide.hasValue != false) &&(bVar1 = __this_00.Value)) {
						return;
					}
					uStack_38 = uStack_38 & 0xffffffffffff0000;
					uStack_38 = new Nullable<bool>(true);
					__this_00.fields = uStack_38._0_2_;
					if (*targetAddress != null) {
						(*targetAddress).FlexDirection = 2;
						if (*targetAddress != null) {
							(*targetAddress).FlexWrap = 0;
							if (*targetAddress != null) {
								(*targetAddress).AlignItems = 2;
								if (*targetAddress != null) {
									(*targetAddress).GapColumn = 12.0;
									if (*targetAddress != null) {
										(*targetAddress).GapRow = 12.0;
										if (__this_01 != null) {
											__this_01.Width = (YGValue)(YGValue.Auto);
											value = ((YGValue)0.0);
											__this_01.MinWidth = value;
											__this_01.FlexGrow = 1.0;
											__this_01.FlexShrink = 1.0;
											if (__this_02 != null) {
												__this_02.Width = (YGValue)(YGValue.Auto);
												__this_02.MinWidth = (YGValue)(YGValue.Undefined);
												__this_02.FlexGrow = 0.0;
												__this_02.FlexShrink = 0.0;
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
			}
		}
		return;
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x5271BF0", Offset = "0x5270BF0", VA = "0x5271BF0")]
	private FlexLayout ChildFlex(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ChildFlex): clean
		int iVar1;
		Transform pUVar2;
		FlexLayout pGVar3;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			iVar1 = pUVar2.childCount;
			if (iVar1 <= index) {
				return null;
			}
			pUVar2 = this.transform;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.GetChild(index);
				if (pUVar2 != null) {
					pGVar3 = pUVar2.GetComponent<FlexLayout>();
					return pGVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x5271F90", Offset = "0x5270F90", VA = "0x5271F90", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$OnPointerEnter): clean
		this._hovered = true;
		this.RefreshHover();
		return;
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x5271FA0", Offset = "0x5270FA0", VA = "0x5271FA0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$OnPointerExit): clean
		this._hovered = false;
		this.RefreshHover();
		return;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x5271370", Offset = "0x5270370", VA = "0x5271370")]
	private void CacheLabel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$CacheLabel): 5 lines keep C-only constructs
		TextMeshProUGUI* targetAddress;
		bool bVar1;
		int iVar2;
		Transform pUVar3;
		TextMeshProUGUI pTVar4;
		String requiredText;
		TMP_FontAsset pTVar5;

		pTVar4 = this._label;
		bVar1 = ((Object)pTVar4 != null);
		if (bVar1) {
			return;
		}
		pUVar3 = this.transform;
		if (pUVar3 != null) {
			iVar2 = pUVar3.childCount;
			if (iVar2 == 0) {
				return;
			}
			pUVar3 = this.transform;
			if ((pUVar3 != null) &&(pUVar3 = pUVar3.GetChild(0), pUVar3 != null)) {
				targetAddress = &this._label;
				pTVar4 = pUVar3.GetComponentInChildren<TextMeshProUGUI>(true);
				*targetAddress = pTVar4;
				pTVar4 = *targetAddress;
				bVar1 = ((Object)pTVar4 == null);
				if (bVar1) {
					return;
				}
				if (*targetAddress != null) {
					this._normalFont = ((*targetAddress).fields).m_fontAsset;
					pTVar4 = this._label;
					if (pTVar4 != null) {
						this._normalWeight = pTVar4.m_fontWeight;
						requiredText = pTVar4.get_text();
						pTVar5 = GisketchTypography.Resolve("text", 700, requiredText);
						this._hoverFont = pTVar5;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x52715E0", Offset = "0x52705E0", VA = "0x52715E0")]
	private void RefreshHover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$RefreshHover): 8 lines keep C-only constructs
		Image pUVar1;
		TextMeshProUGUI pTVar2;
		TMP_FontAsset x;
		bool bVar3;
		TMP_FontAsset* ppTVar4;
		int value;
		ulong uVar5;
		ulong uVar6;
		Color UVar7;

		pUVar1 = this._background;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = this._background;
			if (this._hovered == false) {
				uVar5 = 0;
				uVar6 = 0;
			}
			else {
				uVar5._0_4_ = this._hoverColor.r;
				uVar5._4_4_ = this._hoverColor.g;
				uVar6._0_4_ = this._hoverColor.b;
				uVar6._4_4_ = this._hoverColor.a;
			}
			if (pUVar1 == null) goto label_0537171e;
			UVar7.b = (float)(int)uVar6;
			UVar7.a = (float)(int)((ulong)uVar6 >> 0x20);
			UVar7.r = (float)(int)uVar5;
			UVar7.g = (float)(int)((ulong)uVar5 >> 0x20);
			pUVar1.set_color(UVar7);
		}
		pTVar2 = this._label;
		bVar3 = ((Object)pTVar2 == null);
		if (bVar3) {
			return;
		}
		pTVar2 = this._label;
		if (this._hovered == false) {
	label_053716dd: ;
			ppTVar4 = &this._normalFont;
		}
		else {
			x = this._hoverFont;
			bVar3 = ((Object)x != null);
			if (!bVar3) goto label_053716dd;
			ppTVar4 = &this._hoverFont;
		}
		if (pTVar2 != null) {
			pTVar2.font = *ppTVar4;
			pTVar2 = this._label;
			value = 700;
			if (this._hovered == false) {
				value = this._normalWeight;
			}
			if (pTVar2 != null) {
				pTVar2.fontWeight = value;
				return;
			}
		}
	label_0537171e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5271FB0", Offset = "0x5270FB0", VA = "0x5271FB0")]
	public GisketchResponsiveRowLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c (Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$.ctor): clean
		base();
		return;
	}
}
