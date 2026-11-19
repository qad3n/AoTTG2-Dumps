// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchToastManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000053")]
public sealed class GisketchToastManager
{
	[Token(Token = "0x2000054")]
	private sealed class ToastItem
	{
		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Key;

		[Token(Token = "0x40001AB")]
		[FieldOffset(Offset = "0x18")]
		public readonly GisketchView View;

		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x20")]
		public readonly RectTransform Slot;

		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0x28")]
		public float Height;

		[Token(Token = "0x40001AE")]
		[FieldOffset(Offset = "0x2C")]
		public bool LayoutDirty;

		[Token(Token = "0x6000322")]
		[Address(RVA = "0x525C880", Offset = "0x525B880", VA = "0x525C880")]
		public ToastItem(string key, GisketchView view, RectTransform slot, float height)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager.ToastItem$$.ctor): clean
			base();
			this.Key = key;
			this.View = view;
			this.Slot = slot;
			this.Height = height;
			return;
		}
	}

	[Token(Token = "0x4000199")]
	private const int MaxToasts = 3;

	[Token(Token = "0x400019A")]
	private const float ToastWidth = 560f;

	[Token(Token = "0x400019B")]
	private const float ToastBodyWidth = 520f;

	[Token(Token = "0x400019C")]
	private const float ToastMinHeight = 96f;

	[Token(Token = "0x400019D")]
	private const float ToastDismissAllHeight = 168f;

	[Token(Token = "0x400019E")]
	private const float ToastMaxHeight = 180f;

	[Token(Token = "0x400019F")]
	private const float ToastExpandedGap = 8f;

	[Token(Token = "0x40001A0")]
	private const float ToastCollapsedStep = 14f;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ToastItem> _items;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<AottgToastDefinition> _pending;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _host;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _stack;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x40")]
	private Tween _stackTween;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x48")]
	private bool _expanded;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x4C")]
	private float _expandedStackHeight;

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x5259210", Offset = "0x5258210", VA = "0x5259210")]
	private static GisketchNodeDefinition ToastNode(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastNode): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		List<GisketchNodeDefinition> __this;
		GisketchNodeDefinition pGVar4;
		String pSVar5;
		GisketchLayoutDefinition pGVar6;
		GisketchLength __this_00;
		GisketchNodeDefinition[] pGVar7;
		GisketchNodeDefinition pGVar8;
		GisketchNodeDefinition[] pGVar9;
		MethodInfo pMVar10;
		Enum local_48;

		if (toast != null) {
			local_48.klass = (Enum)typeof(AottgToastVariant);
			local_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_48.ToString();
			__this = new List<GisketchNodeDefinition>();
			pGVar4 = GisketchToastManager.ToastTitle(toast, pSVar3);
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar7 = __this._items;
				if (pGVar7 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pGVar7.Length) {
						__this._size = uVar2 + 1;
						pGVar7[(int)uVar2] = pGVar4;
					}
					else {
						__this.AddWithResize((object)pGVar4);
					}
					pGVar4.active = true;
					pGVar4 = new GisketchNodeDefinition();
					pGVar4.type = "Text";
					pGVar4.id = "toast-message";
					pGVar4.text = toast.Content;
					pGVar4.style = "toastContent";
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar7 = __this._items;
					if (pGVar7 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pGVar7.Length) {
							__this._size = uVar2 + 1;
							pGVar7[(int)uVar2] = pGVar4;
						}
						else {
							__this.AddWithResize((object)pGVar4);
						}
						pGVar4.active = true;
						pGVar4 = new GisketchNodeDefinition();
						pGVar4.type = "Button";
						pMVar10 = (MethodInfo *)"toast-close-all";
						pGVar4.id = "toast-close-all";
						pSVar5 = Aottg2GisketchLocale.Text("Common.DismissAll");
						pGVar4.text = pSVar5;
						pGVar4.textKey = "Common.DismissAll";
						pGVar4.style = "buttonQuiet";
						pGVar6.shrink = 1.0;
						pGVar6 = new GisketchLayoutDefinition();
						__this_00 = il2cpp_codegen_object_new(typeof(GisketchLength)) ;
						__this_00 = new Object();
						if (__this_00 != null) {
							__this_00.value = 100.0;
							__this_00.unit = "percent";
							pGVar6.width = __this_00;
							pGVar4.layout = pGVar6;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pGVar7 = __this._items;
							if (pGVar7 != null) {
								uVar2 = __this._size;
								if (uVar2 < (uint)pGVar7.Length) {
									__this._size = uVar2 + 1;
									pGVar7[(int)uVar2] = pGVar4;
								}
								else {
									__this.AddWithResize((object)pGVar4);
								}
								pGVar4.active = true;
								pGVar4 = new GisketchNodeDefinition();
								pGVar4.type = "Panel";
								pGVar4.id = "toast-root";
								pMVar10 = (MethodInfo)&pGVar4.style;
								pGVar4.style = "toast";
								pGVar6 = GisketchToastManager.Row(0.0);
								pGVar4.layout = pGVar6;
								pGVar7 = (GisketchNodeDefinition[])new GisketchNodeDefinition[2];
								pGVar8.active = true;
								pGVar8 = new GisketchNodeDefinition();
								pGVar8.type = "Image";
								pGVar8.id = "toast-border";
								pSVar3 = String.Concat("toastBorder", pSVar3);
								pGVar8.style = pSVar3;
								if (pGVar7 != null) {
									if ((int)pGVar7.Length != 0) {
										pGVar7[0] = pGVar8;
										pGVar8.active = true;
										pGVar8 = new GisketchNodeDefinition();
										pGVar8.type = "Panel";
										pGVar8.id = "toast-content";
										pMVar10 = (MethodInfo)&pGVar8.style;
										pGVar8.style = "toastContentPanel";
										pGVar6 = GisketchToastManager.Column(12.0);
										pGVar8.layout = pGVar6;
										pGVar9 = (GisketchNodeDefinition[])__this.ToArray();
										pGVar8.children = pGVar9;
										if ((pGVar7.Length & 0xfffffffe) != 0) {
											pGVar7[1] = pGVar8;
											pGVar4.children = pGVar7;
											return pGVar4;
										}
									}
									throw new IndexOutOfRangeException();
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x52598D0", Offset = "0x52588D0", VA = "0x52598D0")]
	private static GisketchNodeDefinition ToastTitle(AottgToastDefinition toast, string variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastTitle): 1 lines keep C-only constructs
		GisketchNodeDefinition __this;
		GisketchLayoutDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;
		GisketchNodeDefinition pGVar3;
		String pSVar4;
		MethodInfo method_00;

		__this.active = true;
		__this = new GisketchNodeDefinition();
		__this.type = "Panel";
		__this.id = "toast-title-row";
		method_00 = (MethodInfo)&__this.style;
		__this.style = "clear";
		pGVar1 = GisketchToastManager.Row(8.0);
		__this.layout = pGVar1;
		pGVar2 = (GisketchNodeDefinition[])new GisketchNodeDefinition[3];
		pGVar3.active = true;
		pGVar3 = new GisketchNodeDefinition();
		pGVar3.type = "Icon";
		pGVar3.id = "toast-icon";
		if (toast != null) {
			pGVar3.icon = toast.Icon;
			pSVar4 = String.Concat("toastIcon", variant);
			pGVar3.style = pSVar4;
			if (pGVar2 != null) {
				if ((int)pGVar2.Length != 0) {
					pGVar2[0] = pGVar3;
					pGVar3.active = true;
					pGVar3 = new GisketchNodeDefinition();
					pGVar3.type = "Text";
					pGVar3.id = "toast-title";
					pGVar3.text = toast.Title;
					pGVar3.style = "toastTitle";
					pGVar1.shrink = 1.0;
					pGVar1 = new GisketchLayoutDefinition();
					pGVar1.grow = 1.0;
					pGVar3.layout = pGVar1;
					if ((pGVar2.Length & 0xfffffffe) != 0) {
						pGVar2[1] = pGVar3;
						pGVar3.active = true;
						pGVar3 = new GisketchNodeDefinition();
						pGVar3.type = "Button";
						pGVar3.id = "toast-close";
						pGVar3.icon = "cross";
						pGVar3.hasIcon = true;
						pGVar3.style = "buttonPrimary";
						if (2 < (uint)pGVar2.Length) {
							pGVar2[2] = pGVar3;
							__this.children = pGVar2;
							return __this;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x5259F60", Offset = "0x5258F60", VA = "0x5259F60")]
	private static Button Button(GameObject root, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Button): clean
		bool bVar1;
		Transform pUVar2;
		Button pUVar3;

		pUVar2 = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_0535a033;
			pUVar2 = root.transform;
		}
		pUVar2 = GisketchToastManager.FindDeep(pUVar2, id);
		bVar1 = ((Object)pUVar2 != null);
		if (!bVar1) {
			return null;
		}
		if (pUVar2 != null) {
			pUVar3 = pUVar2.GetComponent<Button>();
			return pUVar3;
		}
	label_0535a033: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x525A040", Offset = "0x5259040", VA = "0x525A040")]
	private static Transform FindDeep(Transform root, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FindDeep): 6 lines keep C-only constructs
		byte bVar1;
		bool bVar4;
		String a;
		Transform pUVar6;
		object pIVar7;
		MethodInfo extraout_RDX;
		MethodInfo method_00;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		bVar4 = ((Object)root == null);
		pUVar6 = null;
		if (!bVar4) {
			if (root == null) {
				throw new NullReferenceException();
			}
			a = root.name;
			bVar4 = (a == id);
			if (bVar4) {
				pUVar6 = root;
			}
			else {
				local_58 = (object)root.GetEnumerator();
				local_40 = (byte)&local_58;
				local_38 = &local_50;
				do {
					pIVar7 = local_58;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar7.Dispose();
					pIVar7 = local_58;
					if (!bVar4) {
						pUVar6 = null;
						break;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pUVar6 = (Transform)pIVar7.Dispose();
					method_00 = extraout_RDX;
					if (pUVar6 != null) {
						bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
						method_00 = (MethodInfo)(ulong)bVar1;
						if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(long)&method_00[-1].field_0x57] !=typeof(Transform))) {
							throw new InvalidCastException();
						}
					}
					pUVar6 = GisketchToastManager.FindDeep(pUVar6, id);
					bVar4 = ((Object)pUVar6 != null);
				} while (!bVar4);
				pIVar7 = (local_58 as IDisposable);
				if (pIVar7 != null) {
					local_50 = pIVar7;
					pIVar7.Dispose();
				}
			}
		}
		return pUVar6;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x525A3B0", Offset = "0x52593B0", VA = "0x525A3B0")]
	private static string Key(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Key): 1 lines keep C-only constructs
		bool bVar1;
		String[] values;
		String pSVar2;
		Enum local_30;

		if (toast == null) {
			new string[7];
		}
		else {
			bVar1 = String.IsNullOrEmpty(toast.UpdateKey);
			if (!bVar1) {
				return toast.UpdateKey;
			}
			values = (String[])new string[7];
			local_30.klass = (Enum)typeof(AottgToastVariant);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = local_30.ToString();
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = pSVar2;
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = "|";
						if (2 < (uint)values.Length) {
							values[2] = toast.Icon;
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = "|";
								if (4 < (uint)values.Length) {
									values[4] = toast.Title;
									if (5 < (uint)values.Length) {
										values[5] = "|";
										if (6 < (uint)values.Length) {
											values[6] = toast.Content;
											pSVar2 = String.Concat(values);
											return pSVar2;
										}
									}
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5259E00", Offset = "0x5258E00", VA = "0x5259E00")]
	private static GisketchLayoutDefinition Row(float gap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Row): clean
		GisketchLayoutDefinition __this;

		__this.shrink = 1.0;
		__this = new GisketchLayoutDefinition();
		__this.direction = "Row";
		__this.alignItems = "Center";
		__this.gap = gap;
		return __this;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x5259EB0", Offset = "0x5258EB0", VA = "0x5259EB0")]
	private static GisketchLayoutDefinition Column(float gap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Column): clean
		GisketchLayoutDefinition __this;

		__this.shrink = 1.0;
		__this = new GisketchLayoutDefinition();
		__this.direction = "Column";
		__this.alignItems = "Stretch";
		__this.gap = gap;
		__this.grow = 1.0;
		return __this;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x525A570", Offset = "0x5259570", VA = "0x525A570")]
	private void ApplyStack(bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyStack): 9 lines keep C-only constructs
		Tween* targetAddress;
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		sbyte cVar5;
		RectTransform pUVar6;
		Tween t;
		Il2CppClass pIVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		bool bVar9;
		Sequence pDVar10;
		object pIVar11;
		int iVar13;
		List<GisketchToastManager.ToastItem> pSVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		Vector2 value;
		Vector3 value_00;
		Vector3 scale;
		Vector2 local_78;

		pUVar6 = this._stack;
		bVar9 = ((Object)pUVar6 != null);
		if (bVar9) {
			pUVar6 = this._stack;
			fVar15 = this.StackHeight();
			if (this._expanded == false) {
				this._expandedStackHeight = 0.0;
				fVar17 = fVar15;
			}
			else {
				fVar17 = this._expandedStackHeight;
				if (fVar17 <= fVar15) {
					fVar17 = fVar15;
				}
				this._expandedStackHeight = fVar17;
			}
			if (pUVar6 == null) goto label_0535aac6;
			value.y = fVar17;
			value.x = 560.0;
			pUVar6.sizeDelta = value;
		}
		targetAddress = &this._stackTween;
		t = this._stackTween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		*targetAddress = null;
		pDVar10 = null;
		if (animate) {
			pDVar10 = null;
			bVar9 = Application.isPlaying;
			if (!bVar9) goto label_0535a725;
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
				cVar5 = GisketchMotion.Enabled;
			}
			else {
				cVar5 = GisketchMotion.Enabled;
			}
			if (cVar5 != false) {
				if (((typeof(DOTween))._2).cctor_finished_or_no_cctor == 0) {
				}
				pDVar10 = DOTween.Sequence();
				pDVar10 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar10, true);
				goto label_0535a725;
			}
			pDVar10 = null;
			pSVar14 = this._items;
		}
		else {
	label_0535a725: ;
			pSVar14 = this._items;
		}
		if (pSVar14 != null) {
			iVar13 = 0;
			fVar15 = 0.0;
			do {
				if (pSVar14._size <= iVar13) {
					this._stackTween = (Tween)pDVar10;
					pSVar14 = this._items;
					if (pSVar14 != null) {
						iVar13 = pSVar14._size;
						goto label_0535aa10;
					}
					break;
				}
				pIVar11 = pSVar14.get_Item(iVar13) ;
				if (pIVar11 == null) break;
				pIVar7 = pIVar11[2].klass;
				bVar9 = ((Object)pIVar7 == null);
				if (!bVar9) {
					if (this._expanded == false) {
						if (iVar13 == 0) {
							local_78.x = 0.0;
							local_78.y = 0.0;
						}
						else {
							if (Il2CppMethodInitialized_07542976 == false) {
								il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count) ;
								Il2CppMethodInitialized_07542976 = true;
							}
							pSVar14 = this._items;
							if (pSVar14 == null) break;
							if (pSVar14._size < 1) {
								fVar17 = 0.0;
							}
							else {
								pIVar11 = pSVar14.get_Item(0);
								if (pIVar11 == null) break;
								fVar17 = *(float)&pIVar11[2].monitor + -96.0;
							}
							fVar1 = 0.0;
							if (0.0 <= fVar17) {
								fVar1 = fVar17;
							}
							local_78 = (Vector2)((ulong)(uint)((float)iVar13 * 14.0 + fVar1) << 0x20);
							if (this._expanded != false) goto label_0535a811;
						}
						pUVar8 = typeof(Vector3).static_fields;
						uVar2 = (pUVar8.oneVector).x;
						uVar4 = (pUVar8.oneVector).y;
						fVar1 = (float)iVar13 * -0.06 + 1.0;
						fVar17 = 0.82;
						if (0.82 <= fVar1) {
							fVar17 = fVar1;
						}
						fVar1 = fVar17 * (float)uVar2;
						fVar3 = fVar17 * (float)uVar4;
						fVar17 = fVar17 * (pUVar8.oneVector).z;
					}
					else {
						local_78 = (Vector2)((ulong)(uint)fVar15 << 0x20);
	label_0535a811: ;
						pUVar8 = typeof(Vector3).static_fields;
						fVar1 = (pUVar8.oneVector).x;
						fVar3 = (pUVar8.oneVector).y;
						fVar17 = (pUVar8.oneVector).z;
					}
					pSVar14 = this._items;
					if (pSVar14 == null) break;
					fVar16 = 96.0;
					if (iVar13 < pSVar14._size) {
						pIVar11 = pSVar14.get_Item(iVar13);
						if (pIVar11 == null) break;
						fVar16 = *(float)&pIVar11[2].monitor;
					}
					fVar15 = fVar15 + fVar16 + 8.0;
					if (pDVar10 == null) {
						if (pIVar7 == null) break;
						pIVar7.anchoredPosition = (Vector2)local_78;
						value_00.y = fVar3;
						value_00.x = fVar1;
						value_00.z = fVar17;
						pIVar7.localScale = value_00;
					}
					else {
						scale.y = fVar3;
						scale.x = fVar1;
						scale.z = fVar17;
						GisketchToastManager.AnimateSlot(pDVar10, (RectTransform)pIVar7, (Vector2)local_78, scale);
					}
				}
				iVar13 = iVar13 + 1;
				pSVar14 = this._items;
			} while (pSVar14 != null);
		}
	label_0535aac6: ;
		throw new NullReferenceException();
	label_0535aa10: ;
		iVar13 = iVar13 + -1;
		if (iVar13 < 0) {
			return;
		}
		pSVar14 = this._items;
		if ((pSVar14 == null) ||(pIVar11 = pSVar14.get_Item(iVar13) , pIVar11 == null)) goto label_0535aac6;
		pIVar7 = pIVar11[2].klass;
		bVar9 = ((Object)pIVar7 != null);
		if (bVar9) {
			pSVar14 = this._items;
			if (((pSVar14 == null) ||(pIVar11 = pSVar14.get_Item(iVar13), pIVar11 == null)) || (pIVar11[2].klass == null)) goto label_0535aac6;
			pIVar11[2].klass.SetAsLastSibling();
		}
		goto label_0535aa10;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x525AAD0", Offset = "0x5259AD0", VA = "0x525AAD0")]
	private float AppliedStackHeight()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AppliedStackHeight): clean
		float fVar1;
		float fVar2;

		fVar1 = this.StackHeight();
		if (this._expanded == false) {
			this._expandedStackHeight = 0.0;
			return fVar1;
		}
		fVar2 = this._expandedStackHeight;
		if (fVar2 <= fVar1) {
			fVar2 = fVar1;
		}
		this._expandedStackHeight = fVar2;
		return fVar2;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x525ADA0", Offset = "0x5259DA0", VA = "0x525ADA0")]
	private static void SetSlot(RectTransform rect, Vector2 position, Vector3 scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlot): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchoredPosition = position;
		rect.localScale = scale;
		return;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x525AC20", Offset = "0x5259C20", VA = "0x525AC20")]
	private static void AnimateSlot(Sequence sequence, RectTransform rect, Vector2 position, Vector3 scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AnimateSlot): 3 lines keep C-only constructs
		RectTransform __this;
		Vector2 UVar1;
		GisketchToastManager.c__DisplayClass10_0 __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar2;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o t;
		Tween t_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchToastManager.c__DisplayClass10_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.rect = rect;
			__this_00.position = position;
			__this = __this_00.rect;
			if (__this != null) {
				UVar1 = (Vector2)__this.anchoredPosition;
				__this_00.start = UVar1;
				__this_01 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass10_0_AnimateSlot_b__0);
				pDVar2 = DOVirtual.Float(0.0, 1.0, 0.12, __this_01);
				pDVar2 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar2, true);
				TweenSettingsExtensions.Join(sequence, (Tween)pDVar2);
				t = ShortcutExtensions.DOScale((Transform)__this_00.rect, scale, 0.12);
				t_00 = (Tween)TweenSettingsExtensions.SetUpdate<TweenerCore<Vector3, Vector3, VectorOptions>>((object)t, true);
				TweenSettingsExtensions.Join(sequence, t_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x525ADE0", Offset = "0x5259DE0", VA = "0x525ADE0")]
	private float StackHeight()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$StackHeight): 3 lines keep C-only constructs
		int iVar1;
		object pIVar2;
		int index;
		List<GisketchToastManager.ToastItem> pSVar3;
		float fVar4;
		float fVar5;
		float fVar6;

		pSVar3 = this._items;
		if (pSVar3 == null) {
	label_0535b030: ;
			throw new NullReferenceException();
		}
		if (pSVar3._size == 0) {
			fVar4 = 96.0;
		}
		else {
			if (this._expanded != false) {
				index = 0;
				fVar4 = 16.0;
				do {
					if (pSVar3._size <= index) {
						return fVar4;
					}
					pSVar3 = this._items;
					if (pSVar3 == null) break;
					fVar5 = 96.0;
					if (index < pSVar3._size) {
						pIVar2 = pSVar3.get_Item(index);
						if (pIVar2 == null) break;
						fVar5 = *(float)&pIVar2[2].monitor;
					}
					fVar6 = 0.0;
					if (index != 0) {
						fVar6 = 8.0;
					}
					fVar4 = fVar4 + fVar5 + fVar6;
					index = index + 1;
					pSVar3 = this._items;
				} while (pSVar3 != null);
				goto label_0535b030;
			}
			if (Il2CppMethodInitialized_07542976 == false) {
				Il2CppMethodInitialized_07542976 = true;
				pSVar3 = this._items;
				if (pSVar3 == null) goto label_0535b030;
			}
			if (pSVar3._size < 1) {
				fVar4 = 96.0;
				iVar1 = pSVar3._size;
			}
			else {
				pIVar2 = pSVar3.get_Item(0);
				if ((pIVar2 == null) ||(pSVar3 = this._items, pSVar3 == null)) goto label_0535b030;
				fVar4 = *(float)&pIVar2[2].monitor;
				iVar1 = pSVar3._size;
			}
			fVar5 = 96.0;
			if (0 < iVar1 + -1) {
				if (Il2CppMethodInitialized_07542976 == false) {
					Il2CppMethodInitialized_07542976 = true;
					pSVar3 = this._items;
					if (pSVar3 == null) goto label_0535b030;
				}
				fVar5 = 0.0;
				if (0 < pSVar3._size) {
					pIVar2 = pSVar3.get_Item(0);
					if (pIVar2 == null) goto label_0535b030;
					fVar5 = *(float)&pIVar2[2].monitor + -96.0;
				}
				fVar6 = 0.0;
				if (0.0 <= fVar5) {
					fVar6 = fVar5;
				}
				fVar5 = (float)(iVar1 + -1) * 14.0 + fVar6 + 96.0;
			}
			if (fVar4 <= fVar5) {
				fVar4 = fVar5;
			}
			fVar4 = fVar4 + 16.0;
		}
		return fVar4;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x525ABA0", Offset = "0x5259BA0", VA = "0x525ABA0")]
	private float HeightAt(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HeightAt): 1 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> __this_00;
		object pIVar1;
		float fVar2;

		if (-1 < index) {
			__this_00 = this._items;
			if (__this_00 == null) {
	label_0535ac0e: ;
				throw new NullReferenceException();
			}
			if (index < __this_00._size) {
				pIVar1 = __this_00.get_Item(index);
				if (pIVar1 == null) goto label_0535ac0e;
				fVar2 = *(float)&pIVar1[2].monitor;
			}
		}
		return fVar2;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x525B050", Offset = "0x525A050", VA = "0x525B050")]
	private static float ToastHeight(bool showDismissAll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastHeight): 2 lines keep C-only constructs
		undefined3 in_register_00000039;

		if (CONCAT31(in_register_00000039, showDismissAll) == 0) {
			return 96.0;
		}
		return 168.0;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x525B070", Offset = "0x525A070", VA = "0x525B070")]
	private void RefreshDismissAllButtons()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RefreshDismissAllButtons): 6 lines keep C-only constructs
		float fVar1;
		float height;
		int iVar2;
		List<AottgToastDefinition> pSVar3;
		bool bVar4;
		object pIVar5;
		Button x;
		GameObject pUVar6;
		GisketchToastManager.ToastItem item;
		uint index;
		List<GisketchToastManager.ToastItem> pSVar7;
		ulong uVar8;
		float fVar9;
		float fVar10;
		float fVar11;

		pSVar7 = this._items;
		if (pSVar7 != null) {
			index = 0;
			do {
				iVar2 = pSVar7._size;
				if (iVar2 <= (int)index) {
					return;
				}
				uVar8 = 0;
				if ((index == 0) && (uVar8 = 1, iVar2 < 2)) {
					pSVar3 = this._pending;
					if (pSVar3 == null) break;
					uVar8 = (ulong)(0 < pSVar3._size);
				}
				pIVar5 = pSVar7.get_Item(index);
				if ((pIVar5 == null) || (pIVar5[1].monitor == null)) break;
				x = GisketchToastManager.Button(*(GameObject*)((long)pIVar5[1].monitor + 0x18), "toast-close-all");
				bVar4 = ((Object)x != null);
				if (bVar4) {
					if (x == null) break;
					pUVar6 = x.gameObject;
					if (pUVar6 == null) break;
					bVar4 = pUVar6.activeSelf;
					if ((uint)uVar8 != (uint)bVar4) {
						pUVar6 = x.gameObject;
						if (pUVar6 == null) break;
						pUVar6.SetActive(SUB81(uVar8, 0));
						pSVar7 = this._items;
						if (pSVar7 == null) break;
						pIVar5 = pSVar7.get_Item(index);
						if (pIVar5 == null) break;
						*(byte)((long)&pIVar5[2].monitor + 4) = 1;
					}
				}
				pSVar7 = this._items;
				if (pSVar7 == null) break;
				pIVar5 = pSVar7.get_Item(index);
				if (pIVar5 == null) break;
				fVar1 = *(float)&pIVar5[2].monitor;
				height = *(float)(&g_data_0100ad70 + uVar8 * 4);
				fVar10 = ABS(fVar1);
				if (fVar10 <= height) {
					fVar10 = height;
				}
				fVar9 = Mathf.Epsilon * 8.0;
				fVar11 = fVar10 * 1e-06;
				if (fVar10 * 1e-06 <= fVar9) {
					fVar11 = fVar9;
				}
				if (fVar11 <= ABS(height - fVar1)) {
					pSVar7 = this._items;
					if (pSVar7 == null) break;
					pIVar5 = pSVar7.get_Item(index);
					if (pIVar5 == null) break;
					*(byte)((long)&pIVar5[2].monitor + 4) = 1;
				}
				pSVar7 = this._items;
				if (pSVar7 == null) break;
				pIVar5 = pSVar7.get_Item(index);
				if (pIVar5 == null) break;
				*(float)&pIVar5[2].monitor = height;
				pSVar7 = this._items;
				if (pSVar7 == null) break;
				item = (GisketchToastManager.ToastItem)pSVar7.get_Item(index);
				GisketchToastManager.SetSlotHeight(item, height);
				index = index + 1;
				pSVar7 = this._items;
			} while (pSVar7 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x525AB00", Offset = "0x5259B00", VA = "0x525AB00")]
	private float CollapsedY(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CollapsedY): 1 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> __this_00;
		object pIVar1;
		float fVar2;
		float fVar3;

		if (index < 1) {
			return 0.0;
		}
		__this_00 = this._items;
		if (__this_00 == null) {
	label_0535ab98: ;
			throw new NullReferenceException();
		}
		fVar2 = 0.0;
		if (0 < __this_00._size) {
			pIVar1 = __this_00.get_Item(0);
			if (pIVar1 == null) goto label_0535ab98;
			fVar2 = *(float)&pIVar1[2].monitor + -96.0;
		}
		fVar3 = 0.0;
		if (0.0 <= fVar2) {
			fVar3 = fVar2;
		}
		return (float)index * 14.0 + fVar3;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x525B320", Offset = "0x525A320", VA = "0x525B320")]
	private static void SetSlotHeight(ToastItem item, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlotHeight): clean
		GisketchView pGVar1;
		Object x;
		GameObject __this;
		Vector2 value;
		Vector2 UVar2;
		bool bVar3;
		RectTransform pUVar4;

		if (item != null) {
			pUVar4 = item.Slot;
			bVar3 = ((Object)pUVar4 != null);
			if (bVar3) {
				pUVar4 = item.Slot;
				if (pUVar4 == null) goto label_0535b46a;
				pUVar4.offsetMax = (Vector2)((ulong)(uint)height << 0x20);
			}
			pGVar1 = item.View;
			if (pGVar1 != null) {
				x = (Object)pGVar1._Root_k__BackingField;
				pUVar4 = null;
				bVar3 = (x != null);
				if (bVar3) {
					pGVar1 = item.View;
					if ((pGVar1 == null) ||(__this = pGVar1._Root_k__BackingField, __this == null)) goto label_0535b46a;
					pUVar4 = __this.GetComponent<RectTransform>();
				}
				bVar3 = ((Object)pUVar4 != null);
				if (!bVar3) {
					return;
				}
				if (pUVar4 != null) {
					UVar2 = pUVar4.sizeDelta;
					value.y = height;
					value.x = UVar2.x;
					pUVar4.sizeDelta = value;
					return;
				}
			}
		}
	label_0535b46a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x525B470", Offset = "0x525A470", VA = "0x525B470")]
	private static void DestroySlot(RectTransform slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroySlot): clean
		bool bVar1;
		Object pUVar2;

		bVar1 = ((Object)slot == null);
		if (bVar1) {
			return;
		}
		if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = Application.isPlaying;
		}
		else {
			bVar1 = Application.isPlaying;
		}
		if (bVar1) {
			if (slot != null) {
				pUVar2 = (Object)slot.gameObject;
				Object.Destroy(pUVar2);
				return;
			}
		}
		else if (slot != null) {
			pUVar2 = (Object)slot.gameObject;
			Object.DestroyImmediate(pUVar2);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x525B570", Offset = "0x525A570", VA = "0x525B570")]
	private void FinishClose(RectTransform slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FinishClose): clean
		List<GisketchToastManager.ToastItem> pSVar1;

		GisketchToastManager.DestroySlot(slot);
		pSVar1 = this._items;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if (pSVar1._size == 0) {
			this.DestroyHost();
			return;
		}
		return;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x525B730", Offset = "0x525A730", VA = "0x525B730")]
	private bool UpdateVisible(AottgToastDefinition toast, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdateVisible): 1 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> pSVar1;
		uint index;
		object pIVar2;
		GisketchToastManager.ToastItem item;

		index = GisketchToastManager.IndexOf(this._items, key) ;
		if ((int)index < 0) {
	label_0535b7fb: ;
			return -1 < (int)index;
		}
		pSVar1 = this._items;
		if (pSVar1 != null) {
			pIVar2 = pSVar1.get_Item(index);
			pSVar1 = this._items;
			if (pSVar1 != null) {
				pSVar1.RemoveAt(index);
				if (pIVar2 != null) {
					GisketchToastManager.DestroySlot((RectTransform)pIVar2[2].klass);
					pSVar1 = this._items;
					item = this.BuildToast(toast);
					if (pSVar1 != null) {
						pSVar1.Insert(index, (object)item);
						goto label_0535b7fb;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x525BBB0", Offset = "0x525ABB0", VA = "0x525BBB0")]
	private bool UpdatePending(AottgToastDefinition toast, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdatePending): clean
		List<AottgToastDefinition> __this_00;
		int index;

		index = GisketchToastManager.IndexOf(this._pending, key);
		if (-1 < index) {
			__this_00 = this._pending;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.set_Item(index, (object)toast) ;
		}
		return -1 < index;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x525A550", Offset = "0x5259550", VA = "0x525A550")]
	private static bool HasUpdateKey(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HasUpdateKey): clean
		bool bVar1;

		if (toast == null) {
			return false;
		}
		bVar1 = String.IsNullOrEmpty(toast.UpdateKey);
		return !bVar1;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x525BC20", Offset = "0x525AC20", VA = "0x525BC20")]
	private static int IndexOf(List<AottgToastDefinition> list, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf): clean
		bool bVar1;
		AottgToastDefinition toast;
		String a;
		uint index;

		if (list == null) {
			throw new NullReferenceException();
		}
		if (0 < list._size) {
			index = 0;
			do {
				toast = list.get_Item(index);
				a = GisketchToastManager.Key(toast);
				bVar1 = (a == key);
				if (bVar1) {
					return index;
				}
				index = index + 1;
			} while ((int)index < list._size);
		}
		return -1;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x525BCC0", Offset = "0x525ACC0", VA = "0x525BCC0")]
	public GisketchToastManager(Transform layer, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$.ctor): 2 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> __this_00;
		List<AottgToastDefinition> __this_01;

		if (Il2CppMethodInitialized_0754297e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<AottgToastDefinition>)) ;
			Il2CppMethodInitialized_0754297e = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchToastManager.ToastItem>));
		__this_00 = new List<object>();
		this._items = __this_00;
		__this_01 = new List<AottgToastDefinition>();
		this._pending = __this_01;
		base();
		this._layer = layer;
		this._context = context;
		return;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x525BDC0", Offset = "0x525ADC0", VA = "0x525BDC0")]
	public void Show(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Show): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GisketchToastManager.ToastItem> pSVar3;
		List<AottgToastDefinition> pSVar4;
		AottgToastDefinition[] pGVar5;
		bool bVar6;
		int index;
		String key;

		if (toast == null) {
			return;
		}
		key = GisketchToastManager.Key(toast);
		bVar6 = String.IsNullOrEmpty(toast.UpdateKey);
		if (bVar6) {
			this.RemoveVisible(key);
			GisketchToastManager.Remove(this._pending, key);
	label_0535be31: ;
			pSVar3 = this._items;
			if (pSVar3 == null) goto label_0535bf90;
			if (pSVar3._size < 3) {
				this.AddVisible(toast, 0);
			}
			else {
				pSVar4 = this._pending;
				if (pSVar4 == null) goto label_0535bf90;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pGVar5 = pSVar4._items;
				if (pGVar5 == null) goto label_0535bf90;
				uVar2 = pSVar4._size;
				if (uVar2 < (uint)pGVar5.Length) {
					pSVar4._size = uVar2 + 1;
					pGVar5[(int)uVar2] = toast;
				}
				else {
					pSVar4.AddWithResize((object)toast);
				}
			}
		}
		else {
			bVar6 = this.UpdateVisible(toast, key);
			if (!bVar6) {
				index = GisketchToastManager.IndexOf(this._pending, key);
				if (-1 < index) {
					pSVar4 = this._pending;
					if (pSVar4 != null) {
						pSVar4.set_Item(index, (object)toast);
						return;
					}
					goto label_0535bf90;
				}
				goto label_0535be31;
			}
		}
		pSVar3 = this._items;
		if (pSVar3 != null) {
			if (pSVar3._size == 0) {
				return;
			}
			this.RefreshDismissAllButtons();
			this.SettleVisibleLayouts();
			this.ApplyStack(true);
			return;
		}
	label_0535bf90: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x525C230", Offset = "0x525B230", VA = "0x525C230")]
	public void Close(bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close): 4 lines keep C-only constructs
		int piVar1;
		int length;
		List<AottgToastDefinition> pSVar2;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, animate);
		pSVar2 = this._pending;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar2._items, 0, length);
		}
		this.DestroyHost();
		return;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x525C160", Offset = "0x525B160", VA = "0x525C160")]
	private void AddVisible(AottgToastDefinition toast, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AddVisible): clean
		Object x;
		List<GisketchToastManager.ToastItem> __this_00;
		bool bVar1;
		GameObject pUVar2;
		GisketchToastManager.ToastItem item;

		x = (Object)this._host;
		bVar1 = (x == null);
		if (bVar1) {
			pUVar2 = this.Host();
			this._host = pUVar2;
		}
		__this_00 = this._items;
		item = this.BuildToast(toast);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Insert(index, (object)item);
		return;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x525B8B0", Offset = "0x525A8B0", VA = "0x525B8B0")]
	private ToastItem BuildToast(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$BuildToast): 7 lines keep C-only constructs
		GisketchBuildContext context;
		GisketchToastManager.c__DisplayClass44_0 __this_00;
		GameObject pUVar1;
		GisketchOverlayDefinition overlay;
		GisketchNodeDefinition pGVar2;
		Transform parent;
		GisketchView view;
		RectTransform pUVar3;
		GisketchToastBehaviour pGVar4;
		Action __this_01;
		String pSVar5;
		GisketchToastManager.ToastItem __this_02;
		MethodInfo pMVar6;
		AottgToastDefinition* targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchToastManager.c__DisplayClass44_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			targetAddress = &__this_00.toast;
			__this_00.toast = toast;
			pUVar1 = GisketchToastManager.Slot(this._stack, 96.0);
			overlay.modal = true;
			overlay.dismissOnBackdrop = true;
			overlay = new GisketchOverlayDefinition();
			pMVar6 = (MethodInfo *)"toast";
			overlay.id = "toast";
			overlay.modal = false;
			pGVar2 = GisketchToastManager.ToastNode(__this_00.toast);
			overlay.root = pGVar2;
			if (pUVar1 != null) {
				parent = pUVar1.transform;
				context = this._context;
				view = GisketchScreenBuilder.BuildOverlay(overlay, parent, context);
				pUVar3 = pUVar1.GetComponent<RectTransform>();
				if (view != null) {
					this.ConfigureToastRoot(view._Root_k__BackingField, 96.0);
					GisketchScreenBuilder.SettleLayout(view._Root_k__BackingField, 1);
					this.Wire(view._Root_k__BackingField, *targetAddress);
					pUVar1 = view._Root_k__BackingField;
					if (pUVar1 != null) {
						pGVar4 = pUVar1.AddComponent<GisketchToastBehaviour>();
						__this_01 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass44_0_BuildToast_b__0);
						if (pGVar4 != null) {
							pGVar4._close = __this_01;
							pGVar4._remaining = 5.0;
							GisketchMotion.PlayViewEnter(view);
							pSVar5 = GisketchToastManager.Key(*targetAddress);
							__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchToastManager.ToastItem));
							__this_02 = new Object();
							__this_02.Key = pSVar5;
							__this_02.View = view;
							__this_02.Slot = pUVar3;
							__this_02.Height = 96.0;
							return __this_02;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x525C690", Offset = "0x525B690", VA = "0x525C690")]
	private void Wire(GameObject root, AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Wire): 3 lines keep C-only constructs
		UnityEvent pUVar1;
		bool bVar2;
		GisketchToastManager.c__DisplayClass45_0 __this_00;
		Button pUVar3;
		UnityAction pUVar4;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchToastManager.c__DisplayClass45_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_0535c879;
		__this_00.__4__this = this;
		__this_00.toast = toast;
		pUVar3 = GisketchToastManager.Button(root, "toast-close");
		bVar2 = ((Object)pUVar3 != null);
		if (bVar2) {
			if (pUVar3 == null) goto label_0535c879;
			pUVar1 = (UnityEvent)pUVar3.m_OnClick;
			pUVar4 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass45_0_Wire_b__0);
			if (pUVar1 == null) goto label_0535c879;
			pUVar1.AddListener(pUVar4);
		}
		pUVar3 = GisketchToastManager.Button(root, "toast-close-all");
		bVar2 = ((Object)pUVar3 != null);
		if (!bVar2) {
			return;
		}
		if (pUVar3 != null) {
			pUVar1 = (UnityEvent)pUVar3.m_OnClick;
			pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_CloseAll);
			if (pUVar1 != null) {
				pUVar1.AddListener(pUVar4);
				return;
			}
		}
	label_0535c879: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x525C900", Offset = "0x525B900", VA = "0x525C900")]
	private void Close(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close): 9 lines keep C-only constructs
		sbyte cVar1;
		List<GisketchToastManager.ToastItem> pSVar2;
		GisketchView view;
		RectTransform slot;
		uint index;
		GisketchToastManager.c__DisplayClass46_0 __this_00;
		String key;
		GisketchToastManager.ToastItem pGVar3;
		Tween t;
		TweenCallback __this_01;
		GisketchToastManager.ToastItem* targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchToastManager.c__DisplayClass46_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pSVar2 = this._items;
			key = GisketchToastManager.Key(toast);
			index = GisketchToastManager.IndexOf(pSVar2, key);
			if ((int)index < 0) {
				return;
			}
			pSVar2 = this._items;
			if (pSVar2 != null) {
				pGVar3 = (GisketchToastManager.ToastItem)pSVar2.get_Item(index);
				targetAddress = &__this_00.item;
				__this_00.item = pGVar3;
				pSVar2 = this._items;
				if (pSVar2 != null) {
					pSVar2.RemoveAt(index);
					this.PromotePending();
					pSVar2 = this._items;
					if (pSVar2 != null) {
						if (pSVar2._size != 0) {
							this.RefreshDismissAllButtons();
							this.SettleVisibleLayouts();
							this.ApplyStack(true);
						}
						if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
							cVar1 = GisketchMotion.Enabled;
						}
						else {
							cVar1 = GisketchMotion.Enabled;
						}
						if (cVar1 != false) {
							if (*targetAddress == null) goto label_0535cb7b;
							view = ((*targetAddress).fields).View;
							if (((typeof(GisketchMotion))._2). cctor_finished_or_no_cctor == 0) {
							}
							t = GisketchMotion.PlayViewExit(view);
							if (t != null) {
								__this_01 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_c__DisplayClass46_0_Close_b__0);
								TweenSettingsExtensions.OnComplete<Tween>((object)t, __this_01);
								return;
							}
						}
						if (*targetAddress != null) {
							slot = ((*targetAddress).fields).Slot;
							if (Il2CppMethodInitialized_0754297a == false) {
								il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GisketchToastManager_ToastItem_get_Count) ;
								Il2CppMethodInitialized_0754297a = true;
							}
							GisketchToastManager.DestroySlot(slot);
							pSVar2 = this._items;
							if (pSVar2 != null) {
								if (pSVar2._size == 0) {
									this.DestroyHost();
									return;
								}
								return;
							}
						}
					}
				}
			}
		}
	label_0535cb7b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x525CC60", Offset = "0x525BC60", VA = "0x525CC60")]
	private void CloseAll()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CloseAll): clean
		List<GisketchToastManager.ToastItem> pSVar1;

		this.DestroyHost();
		this.PromotePending();
		pSVar1 = this._items;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if (pSVar1._size == 0) {
			return;
		}
		this.RefreshDismissAllButtons();
		this.SettleVisibleLayouts();
		this.ApplyStack(false);
		return;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x525CCC0", Offset = "0x525BCC0", VA = "0x525CCC0")]
	private void SetExpanded(bool expanded)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetExpanded): 7 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> __this_00;
		GameObject __this_01;
		bool bVar1;
		GisketchToastBehaviour x;
		byte[] auStack_70 = new byte[16];
		object pIStack_60;
		System_Collections_Generic_List_Enumerator_object__o SStack_58;
		GisketchToastManager pGStack_38;

		if (Il2CppMethodInitialized_07542985 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext) ;
			Il2CppMethodInitialized_07542985 = true;
		}
		this._expanded = expanded;
		__this_00 = this._items;
		pGStack_38 = this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_70.GetEnumerator((List<object>)__this_00);
		SStack_58._current = pIStack_60;
		SStack_58._list = (List<T>)auStack_70._0_8_;
		SStack_58._index = auStack_70._8_4_;
		SStack_58._version = auStack_70._12_4_;
		auStack_70._0_8_ = null;
		auStack_70._8_8_ = &SStack_58;
		while(true) {
			bVar1 = SStack_58.MoveNext();
			if (!bVar1) {
				SStack_58.Dispose() ;
				pGStack_38.ApplyStack(true);
				return;
			}
			if (SStack_58._current == null) {
				throw new NullReferenceException();
			}
			if (SStack_58._current[1].monitor == null) {
				throw new NullReferenceException();
			}
			__this_01 = *(GameObject*)((long)SStack_58._current[1].monitor + 0x18);
			if (__this_01 == null) break;
			x = __this_01.GetComponent<GisketchToastBehaviour>();
			bVar1 = ((Object)x != null);
			if (bVar1) {
				if (x == null) {
					throw new NullReferenceException();
				}
				x._paused = expanded;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x525CB90", Offset = "0x525BB90", VA = "0x525CB90")]
	private void PromotePending()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$PromotePending): clean
		List<GisketchToastManager.ToastItem> pSVar1;
		List<AottgToastDefinition> pSVar2;
		AottgToastDefinition toast;

		pSVar1 = this._items;
		while (pSVar1 != null) {
			if (2 < pSVar1._size) {
				return;
			}
			pSVar2 = this._pending;
			if (pSVar2 == null) break;
			if (pSVar2._size < 1) {
				return;
			}
			toast = pSVar2.get_Item(0);
			pSVar2 = this._pending;
			if (pSVar2 == null) break;
			pSVar2.RemoveAt(0) ;
			this.AddVisible(toast, 0);
			pSVar1 = this._items;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x525BFA0", Offset = "0x525AFA0", VA = "0x525BFA0")]
	private void ApplyCurrentLayout(bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyCurrentLayout): 2 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> pSVar1;
		undefined7 in_register_00000031;
		MethodInfo method_01;

		method_01 = (MethodInfo)CONCAT71(in_register_00000031, animate);
		pSVar1 = this._items;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if (pSVar1._size == 0) {
			return;
		}
		this.RefreshDismissAllButtons();
		this.SettleVisibleLayouts();
		this.ApplyStack(animate);
		return;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x525CEC0", Offset = "0x525BEC0", VA = "0x525CEC0")]
	private void SettleVisibleLayouts()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SettleVisibleLayouts): 9 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> __this_00;
		Object x;
		IntPtr pvVar1;
		GameObject root;
		object pIVar2;
		bool bVar3;
		byte[] local_60 = new byte[16];
		object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		if (Il2CppMethodInitialized_07542988 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchToastManager_ToastItem_MoveNext) ;
			Il2CppMethodInitialized_07542988 = true;
		}
		__this_00 = this._items;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_60.GetEnumerator((List<object>)__this_00);
		local_48._current = local_50;
		local_48._list = (List<T>)local_60._0_8_;
		local_48._index = local_60._8_4_;
		local_48._version = local_60._12_4_;
		local_60._0_8_ = null;
		local_60._8_8_ = &local_48;
		while(true) {
			bVar3 = local_48.MoveNext();
			pIVar2 = local_48._current;
			if (!bVar3) {
				local_48.Dispose() ;
				return;
			}
			if (local_48._current == null) break;
			if (*(sbyte)((long)&local_48._current[2].monitor + 4) != false) {
				if (local_48._current[1].monitor == null) {
					throw new NullReferenceException();
				}
				x = *(Object*)((long)local_48._current[1].monitor + 0x18);
				bVar3 = (x != null);
				if (bVar3) {
					pvVar1 = pIVar2[1].monitor;
					if (pvVar1 == null) {
						throw new NullReferenceException();
					}
					root = *(GameObject*)((long)pvVar1 + 0x18);
					GisketchScreenBuilder.SettleLayout(root, 1);
					*(byte)((long)&pIVar2[2].monitor + 4) = 0;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x525C290", Offset = "0x525B290", VA = "0x525C290")]
	private void EnsureHost()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$EnsureHost): clean
		Object x;
		bool bVar1;
		GameObject pUVar2;

		x = (Object)this._host;
		bVar1 = (x == null);
		if (bVar1) {
			pUVar2 = this.Host();
			this._host = pUVar2;
			return;
		}
		return;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x525C010", Offset = "0x525B010", VA = "0x525C010")]
	private void RemoveVisible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RemoveVisible): 1 lines keep C-only constructs
		List<GisketchToastManager.ToastItem> pSVar1;
		uint index;
		object pIVar2;

		index = GisketchToastManager.IndexOf(this._items, key) ;
		if ((int)index < 0) {
			return;
		}
		pSVar1 = this._items;
		if (pSVar1 != null) {
			pIVar2 = pSVar1.get_Item(index);
			pSVar1 = this._items;
			if (pSVar1 != null) {
				pSVar1.RemoveAt(index);
				if (pIVar2 != null) {
					GisketchToastManager.DestroySlot((RectTransform)pIVar2[2].klass);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x525C0B0", Offset = "0x525B0B0", VA = "0x525C0B0")]
	private static void Remove(List<AottgToastDefinition> list, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Remove): clean
		uint index;
		bool bVar1;
		AottgToastDefinition toast;
		String a;

		if (list == null) {
			throw new NullReferenceException();
		}
		index = list._size;
		while (true) {
			index = index - 1;
			if (!(-1 < (int)index)) break;
			toast = list.get_Item(index);
			a = GisketchToastManager.Key(toast);
			bVar1 = (a == key);
			if (bVar1) {
				list.RemoveAt(index);
			}
		}
		return;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x525B810", Offset = "0x525A810", VA = "0x525B810")]
	private static int IndexOf(List<ToastItem> list, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf): 1 lines keep C-only constructs
		bool bVar1;
		object pIVar2;
		int index;

		if (list == null) {
	label_0535b89d: ;
			throw new NullReferenceException();
		}
		if (0 < list._size) {
			index = 0;
			do {
				pIVar2 = list.get_Item(index);
				if (pIVar2 == null) goto label_0535b89d;
				bVar1 = ((String)pIVar2[1].klass == key);
				if (bVar1) {
					return index;
				}
				index = index + 1;
			} while (index < list._size);
		}
		return -1;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x525B5D0", Offset = "0x525A5D0", VA = "0x525B5D0")]
	private void DestroyHost()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroyHost): 4 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		Tween t;
		List<GisketchToastManager.ToastItem> pSVar3;
		Object pUVar4;
		bool bVar5;
		GameObject* targetAddress;

		t = this._stackTween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		this._stackTween = null;
		pSVar3 = this._items;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar3._items, 0, length);
		}
		this._expandedStackHeight = 0.0;
		this._expanded = false;
		this._stack = null;
		pUVar4 = (Object)this._host;
		bVar5 = (pUVar4 == null);
		if (bVar5) {
			return;
		}
		targetAddress = &this._host;
		bVar5 = Application.isPlaying;
		pUVar4 = (Object)*targetAddress;
		uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar5) {
			if (uVar2 == 0) {
			}
			Object.Destroy(pUVar4);
		}
		else {
			if (uVar2 == 0) {
			}
			Object.DestroyImmediate(pUVar4);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x525D0C0", Offset = "0x525C0C0", VA = "0x525D0C0")]
	private GameObject Host()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Host): 14 lines keep C-only constructs
		RectTransform* targetAddress;
		Il2CppType handle;
		Type[] pSVar1;
		Type pSVar2;
		object pIVar3;
		GameObject __this_00;
		Transform pUVar4;
		RectTransform pUVar5;
		GameObject __this_01;
		Transform parent;
		Image pUVar6;
		GisketchToastStackHover pGVar7;
		Action<bool> __this_02;

		pSVar1 = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 != null) {
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_0535d56b;
			}
			if ((int)pSVar1.Length == 0) {
	label_0535d566: ;
				throw new IndexOutOfRangeException();
			}
			pSVar1[0] = pSVar2;
			__this_00 = new GameObject("AoTTG Toast Host", pSVar1);
			if (__this_00 != null) {
				pUVar4 = __this_00.transform;
				if (pUVar4 != null) {
					pUVar4.SetParent(this._layer, false);
					pUVar5 = __this_00.GetComponent<RectTransform>();
					if (pUVar5 != null) {
						pUVar5.anchorMin = (Vector2)(Vector2.zeroVector);
						pUVar5.anchorMax = (Vector2)(Vector2.oneVector) ;
						pUVar5.offsetMin = (Vector2)(Vector2.zeroVector);
						pUVar5.offsetMax = (Vector2)(Vector2.zeroVector);
						pSVar1 = (Type[])new Type[1];
						pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform) ;
						if (pSVar1 != null) {
							if (pSVar2 != null) {
								pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
								if (pIVar3 == null) {
	label_0535d56b: ;
									pIVar3 = new ArrayTypeMismatchException();
									throw pIVar3;
								}
							}
							if ((int)pSVar1.Length == 0) goto label_0535d566;
							pSVar1[0] = pSVar2;
							__this_01 = new GameObject("AoTTG Toast Stack", pSVar1);
							if (__this_01 != null) {
								pUVar4 = __this_01.transform;
								parent = __this_00.transform;
								if (pUVar4 != null) {
									pUVar4.SetParent(parent, false);
									pUVar5 = __this_01.GetComponent<RectTransform>();
									targetAddress = &this._stack;
									this._stack = pUVar5;
									pUVar5 = this._stack;
									if (pUVar5 != null) {
										pUVar5.anchorMin = (Vector2)0x3f000000;
										if (*targetAddress != null) {
											(*targetAddress).anchorMax = (Vector2)0x3f000000;
											if (*targetAddress != null) {
												(*targetAddress).pivot = (Vector2)0x3f000000;
												if (*targetAddress != null) {
													(*targetAddress).anchoredPosition = (Vector2)0x4200000000000000 ;
													if (*targetAddress != null) {
														(*targetAddress).sizeDelta = (Vector2)0x42c00000440c0000;
														pUVar6 = __this_01.AddComponent<Image>();
														if (pUVar6 != null) {
															pUVar6.set_color((Color)ZEXT816(0));
															pUVar6.set_raycastTarget(true);
															pGVar7 = __this_01.AddComponent<GisketchToastStackHover>();
															__this_02 = new Action<bool>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager_SetExpanded);
															if (pGVar7 != null) {
																pGVar7._hover = __this_02;
																return __this_00;
															}
														}
													}
												}
											}
										}
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

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x525C320", Offset = "0x525B320", VA = "0x525C320")]
	private static GameObject Slot(RectTransform parent, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Slot): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject("AoTTG Toast Slot", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent((Transform)parent, false);
					__this_01 = __this.GetComponent<RectTransform>();
					if (__this_01 != null) {
						__this_01.anchorMin = (Vector2)0x0;
						__this_01.anchorMax = (Vector2)0x3f800000;
						__this_01.pivot = (Vector2)0x3f000000;
						__this_01.offsetMin = (Vector2)(Vector2.zeroVector);
						__this_01.offsetMax = (Vector2)((ulong)(uint)height << 0x20);
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x525C530", Offset = "0x525B530", VA = "0x525C530")]
	private void ConfigureToastRoot(GameObject root, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ConfigureToastRoot): clean
		Vector2 value;
		bool bVar1;
		RectTransform __this_00;
		float fVar2;

		__this_00 = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_0535c67f;
			__this_00 = root.GetComponent<RectTransform>();
		}
		bVar1 = ((Object)__this_00 == null);
		if (bVar1) {
			return;
		}
		if (__this_00 != null) {
			__this_00.anchorMin = (Vector2)0x3f000000;
			__this_00.anchorMax = (Vector2)0x3f000000;
			__this_00.pivot = (Vector2)0x3f000000;
			__this_00.anchoredPosition = (Vector2)(Vector2.zeroVector);
			fVar2 = this.ToastRootWidth();
			value.y = height;
			value.x = fVar2;
			__this_00.sizeDelta = value;
			return;
		}
	label_0535c67f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x525D580", Offset = "0x525C580", VA = "0x525D580")]
	private float ToastRootWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c (Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastRootWidth): clean
		GisketchBuildContext pGVar1;
		GisketchTheme __this_00;
		GisketchLength pGVar2;
		bool bVar3;
		GisketchStyleDefinition pGVar4;
		float fVar5;

		pGVar1 = this._context;
		if ((pGVar1 != null) &&(__this_00 = pGVar1.Theme, __this_00 != null)) {
			pGVar4 = __this_00.GetStyle("toast");
			if (pGVar4 != null) {
				pGVar2 = pGVar4.width;
				if (pGVar2 != null) {
					bVar3 = String.Equals(pGVar2.unit, "point", 5) ;
					if (bVar3) {
						pGVar2 = pGVar4.width;
						if (pGVar2 == null) goto label_0535d61e;
					}
				}
				return fVar5;
			}
		}
	label_0535d61e: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c.

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$.ctor: clean
	private void c__DisplayClass44_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$.ctor: clean
	private void c__DisplayClass45_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$.ctor: clean
	private void c__DisplayClass46_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass10_0$$<AnimateSlot>b__0: clean
	private void c__DisplayClass10_0__AnimateSlot_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		RectTransform __this_00;
		Vector2 value_00;
		float fVar3;
		float fVar4;

		__this_00 = this.rect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = this.start;
		UVar2 = this.position;
		fVar3 = UVar1.x;
		fVar4 = UVar1.y;
		value_00.y = value * (UVar2.y - fVar4) + fVar4;
		value_00.x = value * (UVar2.x - fVar3) + fVar3;
		__this_00.anchoredPosition = value_00;
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass44_0$$<BuildToast>b__0: clean
	private void c__DisplayClass44_0__BuildToast_b__0()
	{
		GisketchToastManager __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Close(this.toast);
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass45_0$$<Wire>b__0: clean
	private void c__DisplayClass45_0__Wire_b__0()
	{
		GisketchToastManager __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Close(this.toast);
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass46_0$$<Close>b__0: clean
	private void c__DisplayClass46_0__Close_b__0()
	{
		GisketchToastManager.ToastItem pGVar1;
		GisketchToastManager __this_00;
		RectTransform slot;
		List<GisketchToastManager.ToastItem> pSVar2;

		pGVar1 = this.item;
		if ((pGVar1 != null) &&(__this_00 = this.__4__this, __this_00 != null)) {
			slot = pGVar1.Slot;
			GisketchToastManager.DestroySlot(slot);
			pSVar2 = __this_00._items;
			if (pSVar2 != null) {
				if (pSVar2._size == 0) {
					__this_00.DestroyHost();
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}
}
