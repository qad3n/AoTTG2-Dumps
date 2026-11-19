// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BD")]
internal sealed class AottgMobileUiSafeArea : MonoBehaviour
{
	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] LayerPaths;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x20")]
	private readonly RectTransform[] _layers;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000DEA")]
	[FieldOffset(Offset = "0x30")]
	private Transform _screen;

	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x38")]
	private Image _source;

	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x40")]
	private Image _backdrop;

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasSource;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x4C")]
	private float _inset;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x50")]
	private string _screenId;

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x57C5300", Offset = "0x57C4300", VA = "0x57C5300")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$Awake): clean
		GisketchUIRoot pGVar1;

		pGVar1 = this.GetComponent<GisketchUIRoot>();
		this._root = pGVar1;
		return;
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x57C5350", Offset = "0x57C4350", VA = "0x57C5350")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$LateUpdate): 3 lines keep C-only constructs
		float fVar1;
		Vector2 value;
		GisketchUIRoot pGVar2;
		GisketchScreenRouter pGVar3;
		RectTransform[] pUVar4;
		Image x;
		String[] pSVar5;
		Vector2 value_00;
		bool bVar6;
		Transform pUVar7;
		RectTransform pUVar8;
		MethodInfo method_00;
		RectTransform* method_01;
		ulong uVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		Vector2 UStack_48;

		if (Il2CppMethodInitialized_07545407 == false) {
			method_01 = &typeof(RectTransform);
			Il2CppMethodInitialized_07545407 = true;
		}
		UStack_48.x = AottgMobileMenuSafeArea.HorizontalInset();
		pGVar2 = this._root;
		if (pGVar2 != null) {
			pGVar3 = pGVar2._Screens_k__BackingField;
			if (pGVar3 == null) {
				method_00 = null;
				pUVar4 = this._layers;
			}
			else {
				method_00 = (MethodInfo)pGVar3._activeId;
				pUVar4 = this._layers;
			}
			if (pUVar4 != null) {
				if ((int)pUVar4.Length != 0) {
					pUVar8 = pUVar4[0];
					bVar6 = ((Object)pUVar8 != null);
					if (bVar6) {
						fVar1 = this._inset;
						fVar11 = ABS(fVar1);
						if (fVar11 <= ABS(UStack_48.x)) {
							fVar11 = ABS(UStack_48.x);
						}
						fVar10 = Mathf.Epsilon * 8.0;
						fVar12 = fVar11 * 1e-06;
						if (fVar11 * 1e-06 <= fVar10) {
							fVar12 = fVar10;
						}
						if ((ABS(UStack_48.x - fVar1) < fVar12) &&(bVar6 = ((String)method_00 == this._screenId))) {
							pUVar7 = this._screen;
							bVar6 = ((Object)pUVar7 != null);
							if ((method_00 == null) || (bVar6)) {
								x = this._source;
								bVar6 = ((Object)x != null);
								if (this._hasSource == bVar6) {
									return;
								}
							}
						}
					}
					this._inset = UStack_48.x;
					this._screenId = (String)method_00;
					uVar9 = 0;
					while(true) {
						pSVar5 = AottgMobileUiSafeArea.LayerPaths;
						if (pSVar5 == null) goto label_058c5733;
						if ((long)(int)pSVar5.Length <= (long)uVar9) {
							this.UpdateBackdrop(UStack_48.x);
							return;
						}
						pUVar4 = this._layers;
						pUVar7 = this.transform;
						pSVar5 = AottgMobileUiSafeArea.LayerPaths;
						if (pSVar5 == null) goto label_058c5733;
						if ((uint)pSVar5.Length <= uVar9) break;
						if ((pUVar7 == null) ||(pUVar8 = (RectTransform)pUVar7.Find(pSVar5[uVar9]), pUVar4 == null)) goto label_058c5733;
						if ((pUVar8 == null) ||(pUVar8.klass != typeof(RectTransform))) {
							pUVar8 = null;
						}
						if ((uint)pUVar4.Length <= uVar9) break;
						pUVar4[uVar9] = pUVar8;
						pUVar4 = this._layers;
						if (pUVar4 == null) goto label_058c5733;
						if ((uint)pUVar4.Length <= uVar9) break;
						pUVar8 = pUVar4[uVar9];
						method_00 = null;
						bVar6 = ((Object)pUVar8 != null);
						if (bVar6) {
							pUVar4 = this._layers;
							if (pUVar4 == null) goto label_058c5733;
							if ((uint)pUVar4.Length <= uVar9) break;
							pUVar8 = pUVar4[uVar9];
							if (pUVar8 == null) goto label_058c5733;
							UStack_48.y = 0.0;
							pUVar8.anchorMin = UStack_48;
							value_00.y = 1.0;
							value_00.x = 1.0 - UStack_48.x;
							pUVar8.anchorMax = value_00;
							value = (Vector2.zeroVector);
							pUVar8.offsetMax = (Vector2)value;
							method_00 = null;
							pUVar8.offsetMin = (Vector2)value;
						}
						uVar9 = uVar9 + 1;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_058c5733: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x57C5740", Offset = "0x57C4740", VA = "0x57C5740")]
	private void UpdateBackdrop(float inset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$UpdateBackdrop): 22 lines keep C-only constructs
		Image* targetAddress;
		Image* targetAddress_00;
		uint uVar1;
		RectTransform[] pUVar2;
		String n;
		Image pUVar3;
		Vector2 value;
		Il2CppType handle;
		bool bVar4;
		int value_00;
		Transform pUVar5;
		Image pUVar6;
		Type[] components;
		Type pSVar7;
		object pIVar8;
		GameObject pUVar9;
		RectTransform pUVar10;
		GameObject __this_00;
		RectTransform __this_01;
		Material pUVar11;
		Vector2 value_01;
		float fVar12;
		Rect UVar13;
		Color UVar14;

		pUVar2 = this._layers;
		if (pUVar2 == null) goto label_058c5d90;
		if ((int)pUVar2.Length == 0) goto label_058c5d95;
		pUVar10 = pUVar2[0];
		pUVar5 = null;
		bVar4 = ((Object)pUVar10 != null);
		if (bVar4) {
			n = this._screenId;
			if (n == null) {
				pUVar5 = null;
			}
			else {
				pUVar2 = this._layers;
				if (pUVar2 == null) goto label_058c5d90;
				if ((int)pUVar2.Length == 0) goto label_058c5d95;
				if (pUVar2[0] == null) goto label_058c5d90;
				pUVar5 = (pUVar2[0]).Find(n);
			}
		}
		this._screen = pUVar5;
		pUVar5 = this._screen;
		pUVar6 = null;
		bVar4 = ((Object)pUVar5 != null);
		if (bVar4) {
			pUVar6 = this.FindBackground(this._screen);
		}
		targetAddress = &this._source;
		this._source = pUVar6;
		pUVar6 = this._source;
		bVar4 = ((Object)pUVar6 != null);
		this._hasSource = bVar4;
		targetAddress_00 = &this._backdrop;
		pUVar6 = this._backdrop;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar4) {
			if (uVar1 == 0) {
			}
			bVar4 = ((Object)pUVar6 == null);
			if (bVar4) {
				components = (Type[])new Type[2];
				handle = TypeRef_UnityEngine_RectTransform;
				pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components == null) goto label_058c5d90;
				if ((pSVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((components.obj).klass)._1).element_class), pIVar8 == null)) {
	label_058c5da2: ;
					pIVar8 = new ArrayTypeMismatchException();
					throw pIVar8;
				}
				if ((int)components.Length == 0) goto label_058c5d95;
				components[0] = pSVar7;
				pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
				if ((pSVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((components.obj).klass)._1).element_class), pIVar8 == null)) goto label_058c5da2;
				if ((components.Length & 0xfffffffe) == 0) goto label_058c5d95;
				components[1] = pSVar7;
				pUVar9 = new GameObject("AoTTG Safe Area Backdrop", components);
				if (pUVar9 == null) goto label_058c5d90;
				pUVar6 = pUVar9.GetComponent<Image>();
				*targetAddress_00 = pUVar6;
			}
			if ((*targetAddress_00 != null) &&(pUVar10 = (*targetAddress_00).rectTransform, pUVar10 != null)) {
				pUVar10.SetParent(this._screen, false);
				pUVar10.SetAsFirstSibling();
				pUVar9 = pUVar10.gameObject;
				pUVar5 = this._screen;
				if ((pUVar5 != null) &&((__this_00 = pUVar5.gameObject, __this_00 != null &&(value_00 = __this_00.layer, pUVar9 != null)))) {
					pUVar9.layer = value_00;
					pUVar2 = this._layers;
					if (pUVar2 != null) {
						if ((int)pUVar2.Length == 0) {
	label_058c5d95: ;
							throw new IndexOutOfRangeException();
						}
						if ((pUVar2[0] != null) &&(__this_01 = (RectTransform)(pUVar2[0]).parent, __this_01 != null)) {
							if (__this_01.klass != typeof(RectTransform)) {
								throw new InvalidCastException();
							}
							UVar13 = __this_01.rect;
							fVar12 = UVar13.m_Width * inset;
							pUVar10.anchorMin = (Vector2)(Vector2.zeroVector);
							pUVar10.anchorMax = (Vector2)(Vector2.oneVector);
							value_01.y = 0.0;
							value_01.x = -fVar12;
							pUVar10.offsetMin = value_01;
							value.y = 0.0;
							value.x = fVar12;
							pUVar10.offsetMax = value;
							if ((*targetAddress != null) &&(*targetAddress_00 != null)) {
								(*targetAddress_00).sprite = ((*targetAddress).fields).m_Sprite;
								if ((*targetAddress != null) &&(*targetAddress_00 != null)) {
									(*targetAddress_00).type = ((*targetAddress).fields).m_Type;
									pUVar6 = *targetAddress;
									if (pUVar6 != null) {
										pUVar3 = *targetAddress_00;
										UVar14 = pUVar6.get_color();
										if (pUVar3 != null) {
											pUVar3.set_color(UVar14);
											pUVar6 = *targetAddress;
											if (pUVar6 != null) {
												pUVar3 = *targetAddress_00;
												pUVar11 = pUVar6.get_material();
												if (pUVar3 != null) {
													pUVar3.set_material(pUVar11);
													if ((*targetAddress != null) &&(*targetAddress_00 != null)) {
														(*targetAddress_00).pixelsPerUnitMultiplier = ((*targetAddress).fields).m_PixelsPerUnitMultiplier;
														pUVar6 = *targetAddress;
														if (pUVar6 != null) {
															pUVar3 = *targetAddress_00;
															bVar4 = pUVar6.get_raycastTarget();
															if (pUVar3 != null) {
																pUVar3.set_raycastTarget(bVar4);
																pUVar6 = *targetAddress_00;
																if (pUVar6 != null) {
																	bVar4 = true;
																	goto label_058c5d32;
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
		}
		else {
			if (uVar1 == 0) {
			}
			bVar4 = ((Object)pUVar6 != null);
			if (!bVar4) {
				return;
			}
			pUVar6 = *targetAddress_00;
			if (pUVar6 != null) {
				bVar4 = false;
	label_058c5d32: ;
				pUVar6.enabled = bVar4;
				return;
			}
		}
	label_058c5d90: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001092")]
	[Address(RVA = "0x57C5DC0", Offset = "0x57C4DC0", VA = "0x57C5DC0")]
	private Image FindBackground(Transform screen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$FindBackground): 11 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		Image y;
		bool bVar5;
		VirtualInvokeData pVVar6;
		Component __this_00;
		object pIVar7;
		ulong uVar8;
		long lVar9;
		Image pUVar10;
		Image local_70;
		object local_68;
		object local_60;
		object local_58;
		AottgMobileUiSafeArea local_50;
		object* local_40;
		object* local_38;

		local_50 = this;
		local_58 = null;
		local_70 = null;
		local_60 = null;
		if (screen == null) {
			throw new NullReferenceException();
		}
		local_68 = (object)screen.GetEnumerator();
		local_40 = &local_68;
		local_38 = &local_60;
		if (local_68 != null) {
			do {
				pIVar7 = local_68;
				pIVar3 = local_68.klass;
				uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar5 = pIVar7.Dispose();
				pIVar7 = local_68;
				if (!bVar5) {
					pUVar10 = null;
	label_058c60b9: ;
					pIVar7 = (local_68 as IDisposable);
					if (pIVar7 == null) {
						return pUVar10;
					}
					pIVar3 = pIVar7.klass;
					uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
					local_60 = pIVar7;
					if (uVar8 == 0) goto label_058c610f;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar9 = 0;
					goto label_058c6100;
				}
				if (local_68 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = local_68.klass;
				uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
				__this_00 = (Component)pIVar7.Dispose();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar2 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				bVar5 = __this_00.TryGetComponent<FlexLayout>(ref local_58);
				if (bVar5) {
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					if ((((*(int)&local_58[2].monitor == 2) && (*(int)&local_58[4].klass == 1)) &&(fVar1 = *(float)((long)&local_58[3].monitor + 4), fVar1 == 0.0)) &&((!NAN(fVar1) &&(bVar5 = __this_00.TryGetComponent<Image>((object*)&local_70))))) {
						if (local_70 == null) {
							throw new NullReferenceException();
						}
						bVar5 = local_70.enabled;
						pUVar10 = local_70;
						if (bVar5) {
							y = local_50._backdrop;
							bVar5 = ((Object)pUVar10 != (Object)y);
							if (bVar5) {
								pUVar10 = local_70;
								goto label_058c60b9;
							}
						}
					}
				}
			} while (local_68 != null);
		}
		throw new NullReferenceException();
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar8 * 0x10 != lVar9)) break;
	label_058c6100: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar9) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar9);
				goto label_058c612d;
			}
		}
	label_058c610f: ;
	label_058c612d: ;
		pIVar7.Dispose();
		return pUVar10;
	}

	[Token(Token = "0x6001093")]
	[Address(RVA = "0x57C61E0", Offset = "0x57C51E0", VA = "0x57C61E0")]
	public AottgMobileUiSafeArea()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$.ctor): clean
		uint uVar1;
		String[] pSVar2;
		RectTransform[] pUVar3;

		if (Il2CppMethodInitialized_0754540a == false) {
			Il2CppMethodInitialized_0754540a = true;
			uVar1 = (typeof(AottgMobileUiSafeArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgMobileUiSafeArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgMobileUiSafeArea.LayerPaths;
		}
		else {
			pSVar2 = *(String[]*)(typeof(AottgMobileUiSafeArea)).static_fields;
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar3 = (RectTransform[])new RectTransform[(uint32_t)pSVar2.Length];
		this._layers = pUVar3;
		this._inset = -1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c.

	// Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea$$.cctor: clean
	static AottgMobileUiSafeArea()
	{
		String[] pSVar1;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "AoTTG UI Canvas/AoTTG Screens";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "AoTTG UI Canvas/AoTTG Toasts";
				AottgMobileUiSafeArea.LayerPaths = pSVar1;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
