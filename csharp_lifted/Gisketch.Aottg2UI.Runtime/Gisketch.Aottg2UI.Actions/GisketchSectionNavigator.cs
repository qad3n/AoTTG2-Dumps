// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000F5")]
public sealed class GisketchSectionNavigator : MonoBehaviour
{
	[Token(Token = "0x40004E0")]
	private const float ScrollSeconds = 0.22f;

	[Token(Token = "0x40004E1")]
	private const float SpyMargin = 24f;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> PendingActiveSections;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x20")]
	private string[] _sectionIds;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x28")]
	private string _prefix;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x30")]
	private bool _separate;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x38")]
	private ScrollRect _scroll;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform[] _sections;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x48")]
	private GisketchBrushButtonFeedback[] _buttons;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x50")]
	private Tween _scrollTween;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x58")]
	private int _activeIndex;

	[Token(Token = "0x170000BC")]
	internal string ActiveSectionId
	{
		[Token(Token = "0x600077C")]
		[Address(RVA = "0x52A6F70", Offset = "0x52A5F70", VA = "0x52A6F70")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$get_ActiveSectionId): clean
			uint uVar1;
			uint uVar2;
			String[] pSVar3;

			pSVar3 = this._sectionIds;
			if (pSVar3 != null) {
				uVar1 = this._activeIndex;
				if ((-1 < (int)uVar1) && (uVar2 = (uint)pSVar3.Length, (int)uVar1 < (int)uVar2)) {
					if (uVar2 <= uVar1) {
						throw new IndexOutOfRangeException();
					}
					return pSVar3[uVar1];
				}
			}
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x52A6FC0", Offset = "0x52A5FC0", VA = "0x52A6FC0")]
	public void Setup(string[] sectionIds, string mode, string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Setup): clean
		bool bVar1;

		if (sectionIds == null) {
			sectionIds = (String[])new string[0];
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._sectionIds = sectionIds;
		bVar1 = String.IsNullOrEmpty(prefix);
		if (bVar1) {
			prefix = "brush-side-panel";
		}
		this._prefix = prefix;
		bVar1 = String.Equals(mode, "Separate", 5);
		this._separate = bVar1;
		return;
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x52A70B0", Offset = "0x52A60B0", VA = "0x52A70B0")]
	public static void Select(GameObject source, string sectionId, bool instant = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select): clean
		bool bVar1;
		GisketchSectionNavigator __this;

		__this = GisketchSectionNavigator.FindNavigator(source);
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Select(sectionId, instant);
			return;
		}
		return;
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x52A73D0", Offset = "0x52A63D0", VA = "0x52A73D0")]
	public static void CaptureActiveSections(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$CaptureActiveSections): clean
		uint uVar1;
		Object x;
		Dictionary<object, object> pSVar2;
		IntPtr pvVar3;
		bool bVar4;
		Object[] pSVar5;
		ulong uVar6;
		ulong puVar7;
		ulong uVar8;

		bVar4 = ((Object)root == null);
		if (!bVar4) {
			if ((root == null) ||(pSVar5 = root.GetComponentsInChildren<GisketchSectionNavigator>(true), pSVar5 == null)) {
	label_053a7620: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar5.Length) {
				uVar6 = pSVar5.Length & 0xffffffff;
				uVar8 = 0;
				do {
					if (uVar6 <= uVar8) goto label_053a7634;
					x = (Object)pSVar5[uVar8];
					bVar4 = (x == null);
					if (!bVar4) {
						if (x == null) goto label_053a7620;
						bVar4 = String.IsNullOrEmpty((String)(*(ulong)((sbyte)x + 0x28)));
						if (!bVar4) {
							pSVar2 = (Dictionary<object, object>)GisketchSectionNavigator. PendingActiveSections;
							if (pSVar2 == null) goto label_053a7620;
							pSVar2.Remove((object)(*(ulong)((sbyte)x + 0x28)));
							pvVar3 = (*(ulong)((sbyte)x + 0x20));
							if (pvVar3 == null) {
	label_053a75a0: ;
								puVar7 = *(ulong*)(g_data_07556758 + 0xb8);
							}
							else {
								uVar1 = (uint)(*(ulong)((sbyte)x + 0x58));
								if (((int)uVar1 < 0) || ((int)*(uint)((long)pvVar3 + 0x18) <= (int)uVar1)) goto label_053a75a0;
								if (*(uint)((long)pvVar3 + 0x18) <= uVar1) goto label_053a7634;
								puVar7 = (ulong)((long)pvVar3 + (ulong)uVar1 * 8 + 0x20);
							}
							bVar4 = String.IsNullOrEmpty((String)*puVar7);
							if (!bVar4) {
								pSVar2 = (Dictionary<object, object>)GisketchSectionNavigator. PendingActiveSections;
								pvVar3 = (*(ulong)((sbyte)x + 0x20));
								if (pvVar3 == null) {
	label_053a74a2: ;
									puVar7 = *(ulong*)(g_data_07556758 + 0xb8);
								}
								else {
									uVar1 = (uint)(*(ulong)((sbyte)x + 0x58));
									if (((int)uVar1 < 0) || ((int)*(uint)((long)pvVar3 + 0x18) <= (int)uVar1)) goto label_053a74a2;
									if (*(uint)((long)pvVar3 + 0x18) <= uVar1) {
	label_053a7634: ;
										throw new IndexOutOfRangeException();
									}
									puVar7 = (ulong)((long)pvVar3 + (ulong)uVar1 * 8 + 0x20);
								}
								if (pSVar2 == null) goto label_053a7620;
								pSVar2.set_Item((object)(*(ulong)((sbyte)x + 0x28)), (object)*puVar7);
							}
						}
					}
					uVar8 = uVar8 + 1;
					uVar1 = (uint)pSVar5.Length;
					uVar6 = (ulong)uVar1;
				} while ((long)uVar8 < (long)(int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x52A7280", Offset = "0x52A6280", VA = "0x52A7280")]
	public void Select(string sectionId, bool instant = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select): 2 lines keep C-only constructs
		ScrollRect pUVar1;
		RectTransform[] pUVar2;
		bool bVar3;
		String[] pSVar4;
		MethodInfo pMVar5;
		undefined7 in_register_00000011;
		uint uVar6;
		ulong uVar7;

		pMVar5 = (MethodInfo)CONCAT71(in_register_00000011, instant);
		this.EnsureSectionContent(sectionId);
		this.Resolve();
		pSVar4 = this._sectionIds;
		if (pSVar4 != null) {
			uVar7 = 0;
			do {
				uVar6 = (uint)pSVar4.Length;
				if ((long)(int)uVar6 <= (long)uVar7) {
					return;
				}
				if (uVar6 <= uVar7) {
	label_053a73bf: ;
					throw new IndexOutOfRangeException();
				}
				bVar3 = String.Equals(pSVar4[uVar7], sectionId, 5);
				if (bVar3) {
					uVar6 = (uint)uVar7;
					if ((int)uVar6 < 0) {
						return;
					}
					if (this._activeIndex == uVar6) {
						return;
					}
					this.SetActive(uVar6, this._separate);
					if (this._separate == false) {
						pUVar2 = this._sections;
						if (pUVar2 != null) {
							if (uVar6 < (uint)pUVar2.Length) {
								this.ScrollTo(pUVar2[uVar7], instant);
								return;
							}
							goto label_053a73bf;
						}
					}
					else {
						pUVar1 = this._scroll;
						bVar3 = ((Object)pUVar1 != null);
						if (!bVar3) {
							return;
						}
						this.RefreshSeparateLayout();
						pUVar1 = this._scroll;
						if (pUVar1 != null) {
							pUVar1.verticalNormalizedPosition = 1.0;
							return;
						}
					}
					break;
				}
				uVar7 = uVar7 + 1;
				pSVar4 = this._sectionIds;
			} while (pSVar4 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x52A8250", Offset = "0x52A7250", VA = "0x52A8250")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Start): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		MethodInfo value;
		String[] pSVar3;
		MethodInfo in_RCX;
		int index;
		MethodInfo pMVar4;

		value = (MethodInfo)this.ConsumePendingActiveSection();
		pMVar4 = null;
		bVar2 = String.IsNullOrEmpty((String)value);
		if (!bVar2) {
			this.EnsureSectionContent((String)value);
		}
		this.Resolve();
		bVar2 = String.IsNullOrEmpty((String)value);
		if (bVar2) {
	label_053a8291: ;
			index = (int32_t)pMVar4;
			if (this != null) {
	label_053a82ee: ;
				if (index < 1) {
					index = 0;
				}
				this.SetActive(index, false);
				return;
			}
		}
		else {
			pSVar3 = this._sectionIds;
			if (pSVar3 != null) {
				pMVar4 = null;
				do {
					uVar1 = (uint)pSVar3.Length;
					in_RCX = (MethodInfo)(ulong)uVar1;
					if ((long)(int)uVar1 <= (long)pMVar4) {
						index = -1;
						goto label_053a82ee;
					}
					if (in_RCX <= pMVar4) {
						throw new IndexOutOfRangeException();
					}
					in_RCX = null;
					bVar2 = String.Equals(pSVar3[(long)pMVar4], (String)value, 5);
					if (bVar2) goto label_053a8291;
					pMVar4 = (MethodInfo)((long)&pMVar4.methodPointer + 1);
					pSVar3 = this._sectionIds;
				} while (pSVar3 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x52A8400", Offset = "0x52A7400", VA = "0x52A8400")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$LateUpdate): clean
		int index;

		if (this._separate == false) {
			this.Resolve();
			index = this.SectionAtViewportTop();
			if ((-1 < index) && (index != this._activeIndex)) {
				this.SetActive(index, false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x52A8750", Offset = "0x52A7750", VA = "0x52A8750")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$OnDestroy): clean
		Tween t;

		t = this._scrollTween;
		if (t == null) {
			return;
		}
		TweenExtensions.Kill(t, false);
		return;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x52A7770", Offset = "0x52A6770", VA = "0x52A7770")]
	private void Resolve()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Resolve): 2 lines keep C-only constructs
		RectTransform[]* targetAddress;
		uint uVar1;
		bool bVar2;
		Transform pUVar3;
		String pSVar4;
		ScrollRect pUVar5;
		RectTransform[] pUVar6;
		GisketchBrushButtonFeedback[] pGVar7;
		String[] pSVar8;
		RectTransform pUVar9;
		GisketchBrushButtonFeedback pGVar10;
		ulong uVar11;

		bVar2 = this.IsResolved();
		if (bVar2) {
			return;
		}
		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.parent;
			pSVar4 = String.Concat(this._prefix, "-scroll");
			pUVar5 = GisketchSectionNavigator.ComponentInNamedChild<ScrollRect>(pUVar3, pSVar4);
			this._scroll = pUVar5;
			pSVar8 = this._sectionIds;
			if (pSVar8 != null) {
				pUVar6 = (RectTransform[])new RectTransform[(uint32_t)pSVar8.Length];
				targetAddress = &this._sections;
				this._sections = pUVar6;
				pSVar8 = this._sectionIds;
				if (pSVar8 != null) {
					pGVar7 = (GisketchBrushButtonFeedback[])new GisketchBrushButtonFeedback[(uint32_t)pSVar8.Length];
					this._buttons = pGVar7;
					pSVar8 = this._sectionIds;
					if (pSVar8 != null) {
						uVar11 = 0;
						do {
							uVar1 = (uint)pSVar8.Length;
							if ((long)(int)uVar1 <= (long)uVar11) {
								return;
							}
							if (uVar1 <= uVar11) {
	label_053a7a17: ;
								throw new IndexOutOfRangeException();
							}
							pUVar6 = *targetAddress;
							pSVar4 = pSVar8[uVar11];
							pSVar4 = String.Concat(this._prefix, "-section-", pSVar4);
							pUVar9 = GisketchSectionNavigator.ComponentInNamedChild<RectTransform>(pUVar3, pSVar4);
							if (pUVar6 == null) break;
							if ((uint)pUVar6.Length <= uVar11) goto label_053a7a17;
							pUVar6[uVar11] = pUVar9;
							pSVar8 = this._sectionIds;
							if (pSVar8 == null) break;
							if ((uint)pSVar8.Length <= uVar11) goto label_053a7a17;
							pGVar7 = this._buttons;
							pSVar4 = String.Concat("brush-side-panel-button-", pSVar8[uVar11]);
							pGVar10 = GisketchSectionNavigator.ComponentInNamedChild<GisketchBrushButtonFeedback>(pUVar3, pSVar4);
							if (pGVar7 == null) break;
							if ((uint)pGVar7.Length <= uVar11) goto label_053a7a17;
							pGVar7[uVar11] = pGVar10;
							uVar11 = uVar11 + 1;
							pSVar8 = this._sectionIds;
						} while (pSVar8 != null);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x52A8770", Offset = "0x52A7770", VA = "0x52A8770")]
	private bool IsResolved()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IsResolved): clean
		ScrollRect x;
		RectTransform[] pUVar1;
		RectTransform x_00;
		GisketchBrushButtonFeedback[] pGVar2;
		GisketchBrushButtonFeedback x_01;
		bool bVar3;
		String[] pSVar4;
		ulong uVar5;
		long lVar6;

		x = this._scroll;
		bVar3 = ((Object)x == null);
		if (((bVar3) || (this._sections == null)) ||(this._buttons == null)) {
			return false;
		}
		pSVar4 = this._sectionIds;
		if (pSVar4 != null) {
			uVar5 = 0;
			do {
				lVar6 = (long)(int)pSVar4.Length;
				if (lVar6 <= (long)uVar5) {
	label_053a889e: ;
					return lVar6 <= (long)uVar5;
				}
				pUVar1 = this._sections;
				if (pUVar1 == null) break;
				if ((uint)pUVar1.Length <= uVar5) {
	label_053a88b2: ;
					throw new IndexOutOfRangeException();
				}
				x_00 = pUVar1[uVar5];
				bVar3 = ((Object)x_00 == null);
				if (bVar3) goto label_053a889e;
				pGVar2 = this._buttons;
				if (pGVar2 == null) break;
				if ((uint)pGVar2.Length <= uVar5) goto label_053a88b2;
				x_01 = pGVar2[uVar5];
				bVar3 = ((Object)x_01 == null);
				if (bVar3) goto label_053a889e;
				uVar5 = uVar5 + 1;
				pSVar4 = this._sectionIds;
			} while (pSVar4 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x52A7A90", Offset = "0x52A6A90", VA = "0x52A7A90")]
	private void SetActive(int index, bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SetActive): clean
		uint uVar1;
		RectTransform[] pUVar2;
		RectTransform pUVar3;
		GisketchBrushButtonFeedback[] pGVar4;
		GisketchBrushButtonFeedback x;
		bool bVar5;
		String[] pSVar6;
		GameObject __this_00;
		ulong uVar7;

		if (index < 0) {
			return;
		}
		pSVar6 = this._sectionIds;
		if (pSVar6 != null) {
			if ((int)pSVar6.Length <= index) {
				return;
			}
			this._activeIndex = index;
			uVar7 = 0;
			do {
				if ((long)(int)pSVar6.Length <= (long)uVar7) {
					if (!animate) {
						return;
					}
					pUVar2 = this._sections;
					if (pUVar2 == null) {
						return;
					}
					if ((uint)index < (uint)pUVar2.Length) {
						pUVar3 = pUVar2[index];
						bVar5 = ((Object)pUVar3 != null);
						if (!bVar5) {
							return;
						}
						pUVar2 = this._sections;
						if (pUVar2 == null) break;
						if ((uint)index < (uint)pUVar2.Length) {
							pUVar3 = pUVar2[index];
							GisketchSectionNavigator.AnimateSection(pUVar3);
							return;
						}
					}
	label_053a7cf6: ;
					throw new IndexOutOfRangeException();
				}
				pUVar2 = this._sections;
				if ((pUVar2 != null) &&(uVar1 = (uint)pUVar2.Length, (long)uVar7 < (long)(int)uVar1)) {
					if (uVar1 <= uVar7) goto label_053a7cf6;
					pUVar3 = pUVar2[uVar7];
					bVar5 = ((Object)pUVar3 != null);
					if ((bVar5) && (this._separate != false)) {
						pUVar2 = this._sections;
						if (pUVar2 == null) break;
						if ((uint)pUVar2.Length <= uVar7) goto label_053a7cf6;
						if ((pUVar2[uVar7] == null) ||(__this_00 = (pUVar2[uVar7]).gameObject, __this_00 == null)) break;
						__this_00.SetActive((uint)index == uVar7);
					}
				}
				pGVar4 = this._buttons;
				if ((pGVar4 != null) &&(uVar1 = (uint)pGVar4.Length, (long)uVar7 < (long)(int)uVar1)) {
					if (uVar1 <= uVar7) goto label_053a7cf6;
					x = pGVar4[uVar7];
					bVar5 = ((Object)x != null);
					if (bVar5) {
						pGVar4 = this._buttons;
						if (pGVar4 == null) break;
						if ((uint)pGVar4.Length <= uVar7) goto label_053a7cf6;
						if (pGVar4[uVar7] == null) break;
						(pGVar4[uVar7]).SetForcedActive((uint)index == uVar7);
					}
				}
				uVar7 = uVar7 + 1;
				pSVar6 = this._sectionIds;
			} while (pSVar6 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x52A8170", Offset = "0x52A7170", VA = "0x52A8170")]
	private void RefreshSeparateLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$RefreshSeparateLayout): clean
		ScrollRect pUVar1;
		RectTransform pUVar2;
		bool bVar3;
		GameObject root;

		pUVar1 = this._scroll;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		pUVar1 = this._scroll;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.m_Content;
			bVar3 = ((Object)pUVar2 == null);
			if (bVar3) {
				return;
			}
			pUVar1 = this._scroll;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Content, pUVar2 != null)) {
				root = pUVar2.gameObject;
				GisketchScreenBuilder.SettleLayout(root, 2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x52A7D00", Offset = "0x52A6D00", VA = "0x52A7D00")]
	private void ScrollTo(RectTransform target, bool instant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ScrollTo): 7 lines keep C-only constructs
		Tween* targetAddress;
		ScrollRect pUVar1;
		RectTransform pUVar2;
		bool bVar3;
		GameObject root;
		DOGetter<float> __this_00;
		DOSetter<float> __this_01;
		DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o t;
		object t_00;
		Tween pDVar4;
		float fVar5;
		float fVar6;
		Rect UVar7;
		float fStack_64;
		float fStack_54;
		Bounds UStack_48;

		if (Il2CppMethodInitialized_07542bf4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_float_float_FloatOptions) ;
			Il2CppMethodInitialized_07542bf4 = true;
		}
		bVar3 = ((Object)target == null);
		if (!bVar3) {
			pUVar1 = this._scroll;
			bVar3 = ((Object)pUVar1 == null);
			if (!bVar3) {
				pUVar1 = this._scroll;
				if (pUVar1 != null) {
					pUVar2 = pUVar1.m_Viewport;
					bVar3 = ((Object)pUVar2 == null);
					if (bVar3) {
						return;
					}
					pUVar1 = this._scroll;
					if (pUVar1 != null) {
						pUVar2 = pUVar1.m_Content;
						bVar3 = ((Object)pUVar2 == null);
						if (bVar3) {
							return;
						}
						pUVar1 = this._scroll;
						if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Content, pUVar2 != null)) {
							root = pUVar2.gameObject;
							GisketchScreenBuilder.SettleLayout(root, 2);
							fVar5 = this.MaxScrollY();
							if (fVar5 <= 0.01) {
								return;
							}
							pUVar1 = this._scroll;
							if (pUVar1 != null) {
								pUVar2 = pUVar1.m_Viewport;
								UStack_48 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)pUVar2, (Transform)target);
								pUVar1 = this._scroll;
								if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Viewport, pUVar2 != null)) {
									UVar7 = pUVar2.rect;
									pUVar1 = this._scroll;
									if (pUVar1 != null) {
										fVar6 = pUVar1.verticalNormalizedPosition;
										pUVar1 = this._scroll;
										if (pUVar1 != null) {
											fStack_54 = UVar7.m_Height;
											fStack_64 = UVar7.m_YMin;
											fVar6 = fVar6 - ((fStack_54 + fStack_64) -(UStack_48.m_Center.y + UStack_48.m_Extents.y) ) / fVar5;
											fVar5 = 1.0;
											if (fVar6 <= 1.0) {
												fVar5 = fVar6;
											}
											fVar5 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar5);
											pUVar1.StopMovement();
											pDVar4 = this._scrollTween;
											if (pDVar4 != null) {
												TweenExtensions.Kill(pDVar4, false);
											}
											if (!instant) {
												bVar3 = Application.isPlaying;
												if (bVar3) {
													targetAddress = &this._scrollTween;
													__this_00 = new DOGetter<float>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_0);
													__this_01 = new DOSetter<float>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_1);
													t = DOTween.To(__this_00, __this_01, fVar5, 0.22);
													t_00 = TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)t, 9);
													pDVar4 = (Tween)TweenSettingsExtensions.SetUpdate<TweenerCore<float, float, FloatOptions>>(t_00, true);
													*targetAddress = pDVar4;
													pDVar4 = *targetAddress;
													if ((typeof(GisketchMotionDriver)._2). cctor_finished_or_no_cctor == 0) {
													}
													GisketchMotionDriver.Track(pDVar4, false) ;
													return;
												}
											}
											pUVar1 = this._scroll;
											if (pUVar1 != null) {
												pUVar1.verticalNormalizedPosition = fVar5;
												return;
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
		}
		return;
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x52A8430", Offset = "0x52A7430", VA = "0x52A8430")]
	private int SectionAtViewportTop()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionAtViewportTop): clean
		uint uVar1;
		ScrollRect pUVar2;
		RectTransform pUVar3;
		RectTransform root;
		float fVar4;
		bool bVar5;
		RectTransform[] pUVar6;
		GameObject __this_00;
		ulong uVar7;
		ulong uVar8;
		float fVar9;
		float fVar10;
		Rect UVar11;
		float local_8c;
		float fStack_84;
		float fStack_74;
		Bounds local_48;

		pUVar2 = this._scroll;
		bVar5 = ((Object)pUVar2 == null);
		if (bVar5) {
			return -1;
		}
		pUVar2 = this._scroll;
		if (pUVar2 != null) {
			pUVar3 = pUVar2.m_Viewport;
			bVar5 = ((Object)pUVar3 == null);
			if (bVar5) {
				return -1;
			}
			if (this._sections == null) {
				return -1;
			}
			pUVar2 = this._scroll;
			if ((pUVar2 != null) &&(pUVar3 = pUVar2.m_Viewport, pUVar3 != null)) {
				UVar11 = pUVar3.rect;
				pUVar6 = this._sections;
				if (pUVar6 != null) {
					fStack_74 = UVar11.m_YMin;
					fStack_84 = UVar11.m_Height;
					local_8c = 3.4028235e+38;
					uVar8 = 0xffffffff;
					uVar7 = 0;
					do {
						uVar1 = (uint)pUVar6.Length;
						if ((long)(int)uVar1 <= (long)uVar7) {
							if ((int)uVar8 < 0) {
								return this._activeIndex;
							}
							return (int)uVar8;
						}
						if (uVar1 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						pUVar3 = pUVar6[uVar7];
						bVar5 = ((Object)pUVar3 == null);
						if (!bVar5) {
							if ((pUVar3 == null) ||(__this_00 = pUVar3.gameObject, __this_00 == null)) break;
							bVar5 = __this_00.activeInHierarchy;
							if (bVar5) {
								pUVar2 = this._scroll;
								if (pUVar2 == null) break;
								root = pUVar2.m_Viewport;
								local_48 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)root, (Transform)pUVar3);
								fVar4 = local_48.m_Extents.y;
								fVar10 = local_48.m_Center.y;
								fVar9 = fVar10 + fVar4;
								if (fStack_74 <= fVar9) {
									if ((fVar10 - fVar4 <= fStack_84 + fStack_74) &&(fVar10 = ABS(fVar9 - (fStack_84 + fStack_74 + -24.0)), fVar10 < local_8c)) {
										uVar8 = uVar7 & 0xffffffff;
										local_8c = fVar10;
									}
								}
							}
						}
						uVar7 = uVar7 + 1;
						pUVar6 = this._sections;
					} while (pUVar6 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x52A8B60", Offset = "0x52A7B60", VA = "0x52A8B60")]
	private float MaxScrollY()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$MaxScrollY): clean
		ScrollRect pUVar1;
		RectTransform pUVar2;
		float fVar3;
		Rect UVar4;
		Rect UVar5;
		float fStack_14;

		pUVar1 = this._scroll;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Content, pUVar2 != null)) {
			UVar4 = pUVar2.rect;
			pUVar1 = this._scroll;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Viewport, pUVar2 != null)) {
				UVar5 = pUVar2.rect;
				fStack_14 = UVar4.m_Height;
				fStack_14 = fStack_14 - UVar5.m_Height;
				if (0.0 <= fStack_14) {
				}
				return fVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x52A7A20", Offset = "0x52A6A20", VA = "0x52A7A20")]
	private int IndexOf(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IndexOf): clean
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;

		pSVar3 = this._sectionIds;
		if (pSVar3 != null) {
			uVar4 = 0;
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((long)(int)uVar1 <= (long)uVar4) {
					uVar4 = 0xffffffff;
	label_053a7a7e: ;
					return (int32_t)uVar4;
				}
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				bVar2 = String.Equals(pSVar3[uVar4], sectionId, 5);
				if (bVar2) goto label_053a7a7e;
				uVar4 = uVar4 + 1;
				pSVar3 = this._sectionIds;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x52A8310", Offset = "0x52A7310", VA = "0x52A8310")]
	private string ConsumePendingActiveSection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ConsumePendingActiveSection): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String pSVar3;
		String local_18;

		local_18 = null;
		bVar2 = String.IsNullOrEmpty(this._prefix);
		if (!bVar2) {
			pSVar1 = (Dictionary<object, object>)GisketchSectionNavigator.PendingActiveSections ;
			if (pSVar1 == null) {
	label_053a83f5: ;
				throw new NullReferenceException();
			}
			bVar2 = pSVar1.TryGetValue((object)this._prefix, (object*)&local_18);
			if (bVar2) {
				pSVar1 = (Dictionary<object, object>)GisketchSectionNavigator. PendingActiveSections;
				if (pSVar1 == null) goto label_053a83f5;
				pSVar1.Remove((object)this._prefix);
			}
			else {
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x52A88C0", Offset = "0x52A78C0", VA = "0x52A88C0")]
	private string SectionName(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionName): clean
		String pSVar1;

		pSVar1 = String.Concat(this._prefix, "-section-", sectionId);
		return pSVar1;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x52A7640", Offset = "0x52A6640", VA = "0x52A7640")]
	private void EnsureSectionContent(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$EnsureSectionContent): 4 lines keep C-only constructs
		String prefix;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		Transform pUVar4;
		object obj;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		long lVar7;

		if (this._separate != false) {
			bVar3 = String.IsNullOrEmpty(sectionId);
			if (!bVar3) {
				pUVar4 = this.transform;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4 = pUVar4.parent;
				prefix = this._prefix;
				if ((typeof(GisketchSectionNavigator)._2).cctor_finished_or_no_cctor == 0) {
				}
				obj = (object)GisketchSectionNavigator.FindSectionContentProvider(pUVar4, prefix);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar7 = 0;
						do {
							if (*(IGisketchSectionContentProvider*)((long)&pIVar2.interfaceType + lVar7) == typeof(IGisketchSectionContentProvider)) {
								pVVar5 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar7) + 1);
								goto label_053a774a;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchSectionContentProvider), 1);
	label_053a774a: ;
					(*pVVar5.methodPtr)(obj,sectionId,pVVar5.method);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x52A8910", Offset = "0x52A7910", VA = "0x52A8910")]
	private static void AnimateSection(RectTransform section)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$AnimateSection): 3 lines keep C-only constructs
		bool bVar1;
		GisketchSectionNavigator.c__DisplayClass31_0 __this;
		CanvasGroup pUVar2;
		GameObject __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar3;
		GisketchSectionNavigator.c__DisplayClass31_0 targetAddress;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSectionNavigator.c__DisplayClass31_0));
		__this = new Object();
		if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = Application.isPlaying;
		}
		else {
			bVar1 = Application.isPlaying;
		}
		if (!bVar1) {
			return;
		}
		if ((section != null) &&(pUVar2 = section.GetComponent<CanvasGroup>(), __this != null)) {
			targetAddress = &__this.fields;
			__this.group = pUVar2;
			pUVar2 = __this.group;
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				__this_00 = section.gameObject;
				if (__this_00 == null) goto label_053a8b5a;
				pUVar2 = __this_00.AddComponent<CanvasGroup>();
				targetAddress.group = pUVar2;
			}
			if (targetAddress.group != null) {
				(targetAddress.group).alpha = 0.0;
				__this_01 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0_AnimateSection_b__0);
				pDVar3 = DOVirtual.Float(0.0, 1.0, 0.14, __this_01);
				pDVar3 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar3, 9);
				pDVar3 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar3, true);
				GisketchMotionDriver.Track((Tween)pDVar3, false);
				return;
			}
		}
	label_053a8b5a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x52A7160", Offset = "0x52A6160", VA = "0x52A7160")]
	private static GisketchSectionNavigator FindNavigator(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindNavigator): clean
		uint uVar1;
		bool bVar2;
		Transform __this;
		GisketchSectionNavigator x;

		__this = null;
		bVar2 = ((Object)source != null);
		if (bVar2) {
			if (source == null) goto label_053a726f;
			__this = source.transform;
		}
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar1 == 0) {
			}
			bVar2 = ((Object)__this != null);
			if (!bVar2) {
				return null;
			}
			if (__this == null) break;
			x = __this.GetComponentInChildren<GisketchSectionNavigator>(true);
			bVar2 = ((Object)x != null);
			if (bVar2) {
				return x;
			}
			__this = __this.parent;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
	label_053a726f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x52A8BF0", Offset = "0x52A7BF0", VA = "0x52A8BF0")]
	private static IGisketchSectionContentProvider FindSectionContentProvider(Transform root, string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindSectionContentProvider): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		Object[] pSVar5;
		ulong uVar6;
		VirtualInvokeData pVVar7;
		String a;
		object obj;
		ulong uVar8;
		long lVar9;

		bVar4 = ((Object)root == null);
		if (!bVar4) {
			if ((root == null) ||(pSVar5 = root.GetComponentsInChildren<MonoBehaviour>(true), pSVar5 == null)) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar5.Length) {
				uVar6 = pSVar5.Length & 0xffffffff;
				uVar8 = 0;
				do {
					if (uVar6 <= uVar8) {
						throw new IndexOutOfRangeException();
					}
					obj = (pSVar5[uVar8] as IGisketchSectionContentProvider);
					if (obj != null) {
						pIVar2 = obj.klass;
						uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar6 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IGisketchSectionContentProvider*)((long)&pIVar3.interfaceType + lVar9) == typeof(IGisketchSectionContentProvider)) {
									pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
									goto label_053a8cbd;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar6 * 0x10 != lVar9);
						}
						pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchSectionContentProvider), 0);
	label_053a8cbd: ;
						a = (*pVVar7.methodPtr)(obj,pVVar7.method);
						bVar4 = String.Equals(a, prefix, 5);
						if (bVar4) {
							return (IGisketchSectionContentProvider)obj;
						}
					}
					uVar8 = uVar8 + 1;
					uVar1 = (uint)pSVar5.Length;
					uVar6 = (ulong)uVar1;
				} while ((long)uVar8 < (long)(int)uVar1);
			}
		}
		return null;
	}

	[Token(Token = "0x6000792")]
	private static T ComponentInNamedChild<T>(Transform root, string name) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x52A8D90", Offset = "0x52A7D90", VA = "0x52A8D90")]
	private static Transform FindChild(Transform root, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindChild): 5 lines keep C-only constructs
		byte bVar1;
		bool bVar4;
		String a;
		Transform pUVar6;
		object pIVar7;
		object local_60;
		long local_58;
		object local_50;
		object* local_40;
		object* local_38;

		local_50 = null;
		bVar4 = ((Object)root == null);
		pUVar6 = null;
		if (!bVar4) {
			if (root == null) {
				throw new NullReferenceException();
			}
			a = root.name;
			bVar4 = (a == name);
			if (bVar4) {
				pUVar6 = root;
			}
			else {
				local_58 = 0;
				local_60 = (object)root.GetEnumerator();
				local_40 = &local_60;
				local_38 = &local_50;
				do {
					pIVar7 = local_60;
					if (local_60 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar7.Dispose();
					pIVar7 = local_60;
					if (!bVar4) {
						pUVar6 = null;
						break;
					}
					if (local_60 == null) {
						throw new NullReferenceException();
					}
					pUVar6 = (Transform)pIVar7.Dispose();
					if ((typeof(GisketchSectionNavigator)._2).cctor_finished_or_no_cctor == 0) {
					}
					if (pUVar6 != null) {
						bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
						if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
							throw new InvalidCastException();
						}
					}
					pUVar6 = GisketchSectionNavigator.FindChild(pUVar6, name);
					bVar4 = ((Object)pUVar6 != null);
				} while (!bVar4);
				pIVar7 = (local_60 as IDisposable);
				local_50 = pIVar7;
				if (pIVar7 != null) {
					pIVar7.Dispose();
				}
				if (local_58 != 0) {
					throw;
				}
			}
		}
		return pUVar6;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x52A9130", Offset = "0x52A8130", VA = "0x52A9130")]
	public GisketchSectionNavigator()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c (Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.ctor): clean
		this._activeIndex = -1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c.

	// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ComponentInNamedChild<object>: 1 lines keep C-only constructs
	private static object ComponentInNamedChild_object(Transform root, String name)
	{
		uint uVar1;
		bool bVar2;
		Transform x;
		object pIVar3;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(GisketchSectionNavigator)._2).cctor_finished_or_no_cctor;
				goto joined_r0x0363cc75;
			}
		}
		uVar1 = (typeof(GisketchSectionNavigator)._2).cctor_finished_or_no_cctor;
	joined_r0x0363cc75: ;
		if (uVar1 == 0) {
		}
		x = GisketchSectionNavigator.FindChild(root, name);
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) {
				throw new NullReferenceException();
			}
			pIVar3 = x.GetComponentInChildren<object>(true);
			return pIVar3;
		}
		return null;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass31_0$$.ctor: clean
	private void c__DisplayClass31_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.cctor: clean
	static GisketchSectionNavigator()
	{
		Dictionary<string, string> __this;

		__this = new Dictionary<string, string>();
		GisketchSectionNavigator.PendingActiveSections = __this;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__24_0: clean
	private float ScrollTo_b__24_0()
	{
		ScrollRect __this_00;
		float fVar1;

		__this_00 = this._scroll;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__24_1: clean
	private void ScrollTo_b__24_1(float value)
	{
		ScrollRect __this_00;

		__this_00 = this._scroll;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.verticalNormalizedPosition = value;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass31_0$$<AnimateSection>b__0: clean
	private void c__DisplayClass31_0__AnimateSection_b__0(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}
}
