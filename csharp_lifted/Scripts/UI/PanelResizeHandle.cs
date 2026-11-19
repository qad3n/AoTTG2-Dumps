// ==================== AoTTG2 cross-reference ====================
// Type: UI.PanelResizeHandle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PanelResizeHandle.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008E2")]
internal class PanelResizeHandle : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler
{
	[Token(Token = "0x4002CCA")]
	[FieldOffset(Offset = "0x20")]
	public bool IsRightEdge;

	[Token(Token = "0x4002CCB")]
	[FieldOffset(Offset = "0x24")]
	public float MinWidth;

	[Token(Token = "0x4002CCC")]
	[FieldOffset(Offset = "0x28")]
	public float MaxWidth;

	[Token(Token = "0x4002CCD")]
	[FieldOffset(Offset = "0x30")]
	public Action<float> OnResize;

	[Token(Token = "0x4002CCE")]
	[FieldOffset(Offset = "0x38")]
	private bool _isDragging;

	[Token(Token = "0x4002CCF")]
	[FieldOffset(Offset = "0x3C")]
	private float _dragStartScreenX;

	[Token(Token = "0x4002CD0")]
	[FieldOffset(Offset = "0x40")]
	private float _panelStartWidth;

	[Token(Token = "0x4002CD1")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _panelRT;

	[Token(Token = "0x4002CD2")]
	[FieldOffset(Offset = "0x50")]
	private Image _image;

	[Token(Token = "0x4002CD3")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _lineGO;

	[Token(Token = "0x4002CD4")]
	[FieldOffset(Offset = "0x60")]
	private RectTransform _lineRT;

	[Token(Token = "0x4002CD5")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _ghostGO;

	[Token(Token = "0x4002CD6")]
	[FieldOffset(Offset = "0x70")]
	private RectTransform _ghostRT;

	[Token(Token = "0x4002CD7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color IdleColor;

	[Token(Token = "0x4002CD8")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color HoverColor;

	[Token(Token = "0x4002CD9")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Color DragColor;

	[Token(Token = "0x4002CDA")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Color LineColor;

	[Token(Token = "0x4002CDB")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Color GhostBg;

	[Token(Token = "0x4002CDC")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Color GhostText;

	[Token(Token = "0x6005493")]
	[Address(RVA = "0x5CAA9C0", Offset = "0x5CA99C0", VA = "0x5CAA9C0")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$Awake): 3 lines keep C-only constructs
		Image* targetAddress;
		bool bVar1;
		Transform pUVar2;
		RectTransform pUVar3;
		Image pUVar4;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			pUVar3 = null;
			pUVar2 = pUVar2.parent;
			if (pUVar2 != null) {
				pUVar3 = pUVar2.GetComponent<RectTransform>();
			}
			if (this != null) {
				this._panelRT = pUVar3;
				pUVar4 = this.GetComponent<Image>();
				targetAddress = &this._image;
				this._image = pUVar4;
				pUVar4 = this._image;
				bVar1 = ((Object)pUVar4 != null);
				if (!bVar1) {
					return;
				}
				pUVar4 = *targetAddress;
				if (pUVar4 != null) {
					pUVar4.set_color((Color)(PanelResizeHandle.IdleColor));
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005494")]
	[Address(RVA = "0x5CAAB10", Offset = "0x5CA9B10", VA = "0x5CAAB10", Slot = "7")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$OnPointerEnter): clean
		Image pUVar1;
		bool bVar2;

		if (this._isDragging == false) {
			pUVar1 = this._image;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._image;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				pUVar1.set_color((Color)(PanelResizeHandle.HoverColor));
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6005495")]
	[Address(RVA = "0x5CAABD0", Offset = "0x5CA9BD0", VA = "0x5CAABD0", Slot = "8")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$OnPointerExit): clean
		Image pUVar1;
		bool bVar2;

		if (this._isDragging == false) {
			pUVar1 = this._image;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._image;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				pUVar1.set_color((Color)(PanelResizeHandle.IdleColor));
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6005496")]
	[Address(RVA = "0x5CAAC90", Offset = "0x5CA9C90", VA = "0x5CAAC90", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$OnPointerDown): clean
		RectTransform pUVar1;
		Image pUVar2;
		bool bVar3;
		float fVar4;
		Vector2 UVar5;

		this._isDragging = true;
		if (eventData == null) {
	label_05daadbe: ;
			throw new NullReferenceException();
		}
		this._dragStartScreenX = eventData._position_k__BackingField.x;
		pUVar1 = this._panelRT;
		bVar3 = ((Object)pUVar1 != null);
		fVar4 = 0.0;
		if (bVar3) {
			pUVar1 = this._panelRT;
			if (pUVar1 == null) goto label_05daadbe;
			UVar5 = pUVar1.sizeDelta;
			fVar4 = UVar5.x;
		}
		this._panelStartWidth = fVar4;
		pUVar2 = this._image;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._image;
			if (pUVar2 == null) goto label_05daadbe;
			pUVar2.set_color((Color)(PanelResizeHandle.DragColor));
		}
		this.BuildDragVisuals();
		this.UpdateDragVisuals((Vector2)eventData._position_k__BackingField);
		return;
	}

	[Token(Token = "0x6005497")]
	[Address(RVA = "0x5CAB720", Offset = "0x5CAA720", VA = "0x5CAB720", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$OnDrag): clean
		if (this._isDragging == false) {
			return;
		}
		if (eventData == null) {
			throw new NullReferenceException();
		}
		this.UpdateDragVisuals((Vector2)eventData._position_k__BackingField);
		return;
	}

	[Token(Token = "0x6005498")]
	[Address(RVA = "0x5CAB750", Offset = "0x5CAA750", VA = "0x5CAB750", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$OnPointerUp): clean
		Image pUVar1;
		Action<float> pSVar2;
		bool bVar3;

		if (this._isDragging != false) {
			this._isDragging = false;
			pUVar1 = this._image;
			bVar3 = ((Object)pUVar1 != null);
			if (bVar3) {
				pUVar1 = this._image;
				if (pUVar1 == null) goto label_05dab85a;
				pUVar1.set_color((Color)(PanelResizeHandle.IdleColor));
			}
			this.DestroyDragVisuals();
			pSVar2 = this.OnResize;
			if (pSVar2 != null) {
				if (eventData != null) {
					this.ComputeNewWidth(eventData._position_k__BackingField.x);
					(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
					return;
				}
	label_05dab85a: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6005499")]
	[Address(RVA = "0x5CAB960", Offset = "0x5CAA960", VA = "0x5CAB960")]
	private float ComputeNewWidth(float screenX)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$ComputeNewWidth): clean
		bool bVar1;
		Canvas __this_00;
		uint uVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		__this_00 = this.GetComponentInParent<Canvas>();
		bVar1 = ((Object)__this_00 != null);
		fVar4 = 1.0;
		if (bVar1) {
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			fVar3 = __this_00.scaleFactor;
			fVar4 = 1.0;
			if (0.0 < fVar3) {
				fVar4 = __this_00.scaleFactor;
			}
		}
		fVar4 = (screenX - this._dragStartScreenX) / fVar4;
		if (this.IsRightEdge == false) {
			fVar4 = -fVar4;
		}
		fVar4 = fVar4 + this._panelStartWidth;
		fVar3 = this.MinWidth;
		fVar5 = this.MaxWidth;
		if (fVar4 <= fVar5) {
			fVar5 = fVar4;
		}
		uVar2 = -(uint)(fVar3 <= fVar4);
		return (float)(~uVar2 & (uint)fVar3 | (uint)fVar5 & uVar2);
	}

	[Token(Token = "0x600549A")]
	[Address(RVA = "0x5CAADD0", Offset = "0x5CA9DD0", VA = "0x5CAADD0")]
	private void BuildDragVisuals()
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$BuildDragVisuals): 24 lines keep C-only constructs
		GameObject* ppUVar1;
		RectTransform* ppUVar2;
		Vector2 UVar3;
		uint uVar4;
		BaseMenu __this_00;
		bool bVar5;
		Canvas x;
		Transform pUVar6;
		GameObject pUVar7;
		Transform pUVar8;
		RectTransform pUVar9;
		Image pUVar10;
		Text __this_01;
		Text __this_02;
		Font value;

		x = this.GetComponentInParent<Canvas>();
		bVar5 = ((Object)x == null);
		if (bVar5) {
			return;
		}
		if (x != null) {
			pUVar6 = x.transform;
			pUVar7 = new GameObject("ResizeDragLine");
			ppUVar1 = &this._lineGO;
			this._lineGO = pUVar7;
			pUVar7 = this._lineGO;
			if ((pUVar7 != null) &&(pUVar8 = pUVar7.transform, pUVar8 != null)) {
				pUVar8.SetParent(pUVar6, false);
				if (*ppUVar1 != null) {
					pUVar9 = (*ppUVar1).AddComponent<RectTransform>();
					ppUVar2 = &this._lineRT;
					this._lineRT = pUVar9;
					pUVar9 = this._lineRT;
					if (pUVar9 != null) {
						pUVar9.anchorMin = (Vector2)0x0;
						if (*ppUVar2 != null) {
							(*ppUVar2).anchorMax = (Vector2)0x3f80000000000000;
							pUVar9 = *ppUVar2;
							if (pUVar9 != null) {
								pUVar9.offsetMin = (Vector2)(Vector2.zeroVector);
								if (*ppUVar2 != null) {
									(*ppUVar2).offsetMax = (Vector2)0x40000000;
									if (*ppUVar1 != null) {
										pUVar10 = (*ppUVar1).AddComponent<Image>();
										if (pUVar10 != null) {
											pUVar10.set_color((Color)(PanelResizeHandle.LineColor));
											pUVar10.set_raycastTarget(false);
											PanelResizeHandle.BoostSortOrder(this._lineGO, 31999);
											pUVar7 = new GameObject("ResizeDragGhost");
											ppUVar1 = &this._ghostGO;
											this._ghostGO = pUVar7;
											pUVar7 = this._ghostGO;
											if ((pUVar7 != null) &&(pUVar8 = pUVar7.transform, pUVar8 != null)) {
												pUVar8.SetParent(pUVar6, false);
												if (*ppUVar1 != null) {
													pUVar9 = (*ppUVar1).AddComponent<RectTransform>();
													ppUVar2 = &this._ghostRT;
													this._ghostRT = pUVar9;
													pUVar9 = this._ghostRT;
													if (pUVar9 != null) {
														UVar3 = (Vector2.zeroVector);
														pUVar9.anchorMax = (Vector2)UVar3;
														pUVar9.anchorMin = (Vector2)UVar3;
														if (*ppUVar2 != null) {
															(*ppUVar2).pivot = (Vector2)0x3f000000;
															if (*ppUVar2 != null) {
																(*ppUVar2).sizeDelta = (Vector2)0x41d0000042600000 ;
																if ((*ppUVar1 != null) &&(pUVar10 = (*ppUVar1).AddComponent<Image>(), pUVar10 != null)) {
																	pUVar10.set_color((Color)(PanelResizeHandle.GhostBg). fields);
																	pUVar10.set_raycastTarget(false);
																	pUVar7 = new GameObject("Label");
																	if (pUVar7 != null) {
																		pUVar6 = pUVar7.transform;
																		if ((*ppUVar1 != null) &&(pUVar8 = (*ppUVar1).transform, pUVar6 != null)) {
																			pUVar6.SetParent(pUVar8, false);
																			pUVar9 = pUVar7.AddComponent<RectTransform>();
																			if (pUVar9 != null) {
																				pUVar9.anchorMin = (Vector2)(Vector2. zeroVector);
																				pUVar9.anchorMax = (Vector2)(Vector2. oneVector);
																				UVar3 = (Vector2.zeroVector) ;
																				pUVar9.offsetMax = (Vector2)UVar3;
																				pUVar9.offsetMin = (Vector2)UVar3;
																				__this_01 = pUVar7.AddComponent<Text>();
																				if (__this_01 != null) {
																					__this_01.set_text("\xe2\x97\x84  \xe2\x96\xba");
																					__this_01.fontSize = 0x10;
																					__this_01.fontStyle = 1;
																					__this_01.alignment = 4;
																					__this_01.set_color((Color)(PanelResizeHandle.GhostText). fields);
																					__this_01.set_raycastTarget(false);
																					__this_00 = UIManager.CurrentMenu;
																					if (__this_00 == null) {
																						__this_02 = null;
																						uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor ;
																					}
																					else {
																						__this_02 = __this_00.GetComponentInChildren<Text>();
																						uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor ;
																					}
																					if (uVar4 == 0) {
																					}
																					bVar5 = ((Object)__this_02 != null);
																					if (bVar5) {
																						if (__this_02 == null) goto label_05dab4e2;
																						value = __this_02.font;
																						__this_01.font = value;
																					}
																					pUVar7 = *ppUVar1;
																					if ((typeof(PanelResizeHandle)._2).cctor_finished_or_no_cctor == 0) {
																					}
																					PanelResizeHandle.BoostSortOrder(pUVar7, 32000);
																					return;
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
					}
				}
			}
		}
	label_05dab4e2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600549B")]
	[Address(RVA = "0x5CAB4F0", Offset = "0x5CAA4F0", VA = "0x5CAB4F0")]
	private void UpdateDragVisuals(Vector2 screenPos)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$UpdateDragVisuals): clean
		uint uVar1;
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;
		bool bVar2;
		Canvas __this_00;
		RectTransform pUVar3;
		float fVar4;
		float fVar5;
		Rect UVar6;
		float fStack_38;
		float fStack_28;
		float fStack_24;

		__this_00 = this.GetComponentInParent<Canvas>();
		bVar2 = ((Object)__this_00 == null);
		if (bVar2) {
			return;
		}
		if (__this_00 != null) {
			fVar4 = __this_00.scaleFactor;
			if (fVar4 <= 0.0) {
				fVar4 = 1.0;
			}
			else {
				fVar4 = __this_00.scaleFactor;
			}
			pUVar3 = __this_00.GetComponent<RectTransform>();
			if (pUVar3 != null) {
				UVar6 = pUVar3.rect;
				fStack_28 = screenPos.x;
				fVar5 = this.ComputeNewWidth(fStack_28);
				if (this.IsRightEdge == false) {
					fStack_38 = UVar6.m_Width;
					fVar5 = fStack_38 - fVar5;
					pUVar3 = this._lineRT;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					pUVar3 = this._lineRT;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar2 = ((Object)pUVar3 != null);
				if (bVar2) {
					pUVar3 = this._lineRT;
					if (pUVar3 == null) goto label_05dab715;
					value.y = 0.0;
					value.x = fVar5 + -1.0;
					pUVar3.offsetMin = value;
					pUVar3 = this._lineRT;
					if (pUVar3 == null) goto label_05dab715;
					value_00.y = 0.0;
					value_00.x = fVar5 + 1.0;
					pUVar3.offsetMax = value_00;
				}
				pUVar3 = this._ghostRT;
				bVar2 = ((Object)pUVar3 != null);
				if (!bVar2) {
					return;
				}
				pUVar3 = this._ghostRT;
				if (pUVar3 != null) {
					fStack_24 = screenPos.y;
					value_01.y = fStack_24 / fVar4 + 18.0;
					value_01.x = fStack_28 / fVar4;
					pUVar3.anchoredPosition = value_01;
					return;
				}
			}
		}
	label_05dab715: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600549C")]
	[Address(RVA = "0x5CAB860", Offset = "0x5CAA860", VA = "0x5CAB860")]
	private void DestroyDragVisuals()
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$DestroyDragVisuals): 3 lines keep C-only constructs
		Object pUVar1;
		bool bVar2;
		GameObject* ppUVar3;

		pUVar1 = (Object)this._lineGO;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			ppUVar3 = &this._lineGO;
			pUVar1 = (Object)*ppUVar3;
			Object.Destroy(pUVar1);
			*ppUVar3 = null;
		}
		pUVar1 = (Object)this._ghostGO;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			ppUVar3 = &this._ghostGO;
			pUVar1 = (Object)*ppUVar3;
			Object.Destroy(pUVar1);
			*ppUVar3 = null;
			return;
		}
		return;
	}

	[Token(Token = "0x600549D")]
	[Address(RVA = "0x5CABA50", Offset = "0x5CAAA50", VA = "0x5CABA50")]
	private static void BoostSortOrder(GameObject go, int order)
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$BoostSortOrder): clean
		Canvas __this;
		GraphicRaycaster __this_00;

		if (go != null) {
			__this = go.AddComponent<Canvas>();
			if (__this != null) {
				__this.overrideSorting = true;
				__this.sortingOrder = order;
				__this_00 = go.AddComponent<GraphicRaycaster>();
				if (__this_00 != null) {
					__this_00.enabled = false;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600549E")]
	[Address(RVA = "0x5CABAF0", Offset = "0x5CAAAF0", VA = "0x5CABAF0")]
	public PanelResizeHandle()
	{
		// Lifted from source/cpp/UI/PanelResizeHandle.c (UI.PanelResizeHandle$$.ctor): clean
		this.MinWidth = 150.0;
		this.MaxWidth = 700.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/PanelResizeHandle.c.

	// UI.PanelResizeHandle$$.cctor: clean
	static PanelResizeHandle()
	{
		UI_PanelResizeHandle_StaticFields pUVar1;
		PanelResizeHandle pUVar2;

		pUVar1 = typeof(PanelResizeHandle).static_fields;
		(pUVar1.IdleColor).r = 1.0;
		(pUVar1.IdleColor).g = 1.0;
		(pUVar1.IdleColor).b = 1.0;
		pUVar2 = typeof(PanelResizeHandle);
		(pUVar1.IdleColor).a = 0.04;
		pUVar1 = typeof(PanelResizeHandle).static_fields;
		(pUVar1.HoverColor).r = 1.0;
		(pUVar1.HoverColor).g = 1.0;
		(pUVar1.HoverColor).b = 1.0;
		(pUVar1.HoverColor).a = 0.18;
		pUVar1 = pUVar2.static_fields;
		(pUVar1.DragColor).r = 1.0;
		(pUVar1.DragColor).g = 1.0;
		(pUVar1.DragColor).b = 1.0;
		(pUVar1.DragColor).a = 0.28;
		pUVar1 = pUVar2.static_fields;
		(pUVar1.LineColor).r = 1.0;
		(pUVar1.LineColor).g = 0.78;
		(pUVar1.LineColor).b = 0.22;
		(pUVar1.LineColor).a = 0.9;
		pUVar1 = pUVar2.static_fields;
		(pUVar1.GhostBg).r = 0.12;
		(pUVar1.GhostBg).g = 0.12;
		(pUVar1.GhostBg).b = 0.12;
		(pUVar1.GhostBg).a = 0.8;
		pUVar1 = pUVar2.static_fields;
		(pUVar1.GhostText).r = 1.0;
		(pUVar1.GhostText).g = 0.78;
		(pUVar1.GhostText).b = 0.22;
		(pUVar1.GhostText).a = 1.0;
		return;
	}
}
