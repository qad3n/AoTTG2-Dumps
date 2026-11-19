// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputPopupButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputPopupButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000744")]
public class MobileInputPopupButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IPointerClickHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x2000745")]
	private struct SlideButton
	{
		[Token(Token = "0x40024A0")]
		[FieldOffset(Offset = "0x0")]
		public RectTransform Rect;

		[Token(Token = "0x40024A1")]
		[FieldOffset(Offset = "0x8")]
		public MobileInputButton Button;

		[Token(Token = "0x60046A3")]
		[Address(RVA = "0x5B70FF0", Offset = "0x5B6FFF0", VA = "0x5B70FF0")]
		public SlideButton(RectTransform rect, MobileInputButton button)
		{
			// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton.SlideButton$$.ctor): clean
			this.Rect = rect;
			this.Button = button;
			return;
		}
	}

	[Token(Token = "0x4002494")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<GameObject> _childObjects;

	[Token(Token = "0x4002495")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<SlideButton> _slideButtons;

	[Token(Token = "0x4002496")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputPopupMode _mode;

	[Token(Token = "0x4002497")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4002498")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x4002499")]
	[FieldOffset(Offset = "0x48")]
	private MobileInputSkin _openSkin;

	[Token(Token = "0x400249A")]
	[FieldOffset(Offset = "0x50")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x400249B")]
	[FieldOffset(Offset = "0x54")]
	private bool _open;

	[Token(Token = "0x400249C")]
	[FieldOffset(Offset = "0x58")]
	private int _pointerId;

	[Token(Token = "0x400249D")]
	[FieldOffset(Offset = "0x60")]
	private Camera _eventCamera;

	[Token(Token = "0x400249E")]
	[FieldOffset(Offset = "0x68")]
	private MobileInputButton _activeSlideButton;

	[Token(Token = "0x400249F")]
	[FieldOffset(Offset = "0x70")]
	private bool _pressed;

	[Token(Token = "0x6004690")]
	[Address(RVA = "0x5B6C720", Offset = "0x5B6B720", VA = "0x5B6C720")]
	public void Setup(MobileInputPopupMode mode, MobileInputSkin normalSkin, MobileInputSkin openSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$Setup): clean
		Image pUVar1;

		this._mode = mode;
		this._normalSkin = normalSkin;
		this._openSkin = openSkin;
		this._shape = shape;
		pUVar1 = this.GetComponent<Image>();
		this._image = pUVar1;
		this.SetOpen(false);
		return;
	}

	[Token(Token = "0x6004691")]
	[Address(RVA = "0x5B6CC50", Offset = "0x5B6BC50", VA = "0x5B6CC50")]
	public void RegisterChild(GameObject childObject, RectTransform rect, MobileInputButton button)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$RegisterChild): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		List<MobileInputPopupButton.SlideButton> __this_01;
		MobileInputPopupButton.SlideButton[] pUVar4;
		MobileInputPopupButton.SlideButton item;
		bool bVar6;
		RectTransform local_40;
		MobileInputButton local_38;

		bVar6 = ((Object)childObject == null);
		if (!bVar6) {
			bVar6 = ((Object)rect == null);
			if (!bVar6) {
				bVar6 = ((Object)button == null);
				if (!bVar6) {
					__this_00 = this._childObjects;
					if (__this_00 != null) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this_00._items;
						if (pUVar3 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pUVar3.Length) {
								__this_00._size = uVar2 + 1;
								pUVar3[(int)uVar2] = childObject;
							}
							else {
								__this_00.AddWithResize((object)childObject);
							}
							__this_01 = this._slideButtons;
							local_38 = null;
							local_40 = rect;
							local_38 = button;
							if (__this_01 != null) {
								item.Button = local_38;
								item.Rect = local_40;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pUVar4 = __this_01._items;
								if (pUVar4 != null) {
									uVar2 = __this_01._size;
									if (uVar2 < (uint)pUVar4.Length) {
										__this_01._size = uVar2 + 1;
										pUVar4[(int)uVar2].Rect = local_40;
										pUVar4[(int)uVar2].Button = local_38;
									}
									else {
										__this_01.AddWithResize(item);
									}
									if (childObject != null) {
										childObject.SetActive(this._open);
										return;
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

	[Token(Token = "0x6004692")]
	[Address(RVA = "0x5B71020", Offset = "0x5B70020", VA = "0x5B71020")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$OnDisable): clean


		this._pointerId = -0x80000000;
		this._eventCamera = null;
		this._pressed = false;
		this.SetActiveSlideButton(null);
		this.SetOpen(false);
		return;
	}

	[Token(Token = "0x6004693")]
	[Address(RVA = "0x5B71090", Offset = "0x5B70090", VA = "0x5B71090")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$Update): 1 lines keep C-only constructs
		bool bVar1;
		MobileInputButton button;
		MethodInfo method_03;
		Vector2 local_10;

		local_10.x = 0.0;
		local_10.y = 0.0;
		if ((this._pressed != false) && (this._open != false)) {
			method_03 = (MethodInfo)&local_10;
			bVar1 = MobilePlatformUtility.TryGetHeldPointerPosition(this._pointerId, (Vector2)method_03);
			if (bVar1) {
				button = this.GetSlideButton((Vector2)local_10);
				this.SetActiveSlideButton(button);
			}
			else {
				if (this._mode == 2) {
					this.TriggerActiveSlideButton();
				}
				this._pointerId = -0x80000000;
				this._eventCamera = null;
				this._pressed = false;
				this.SetActiveSlideButton(null);
				if ((this._mode & 0xfffffffdU) == 0) {
					this.SetOpen(false);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004694")]
	[Address(RVA = "0x5B711A0", Offset = "0x5B701A0", VA = "0x5B711A0", Slot = "8")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$OnInitializePotentialDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		eventData._useDragThreshold_k__BackingField = false;
		return;
	}

	[Token(Token = "0x6004695")]
	[Address(RVA = "0x5B711C0", Offset = "0x5B701C0", VA = "0x5B711C0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$OnPointerDown): clean
		MethodInfo method_00;
		MobileInputButton button;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		this._pointerId = eventData._pointerId_k__BackingField;
		method_00 = (MethodInfo)eventData.pressEventCamera;
		this._eventCamera = (Camera)method_00;
		this._pressed = true;
		if ((this._mode & 0xfffffffdU) == 0) {
			method_00 = (MethodInfo)0x1;
			this.SetOpen(true);
		}
		if (this._open == false) {
			return;
		}
		button = this.GetSlideButton((Vector2)eventData._position_k__BackingField);
		this.SetActiveSlideButton(button);
		return;
	}

	[Token(Token = "0x6004696")]
	[Address(RVA = "0x5B71250", Offset = "0x5B70250", VA = "0x5B71250", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$OnDrag): clean
		return;
	}

	[Token(Token = "0x6004697")]
	[Address(RVA = "0x5B71260", Offset = "0x5B70260", VA = "0x5B71260", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$OnPointerUp): clean


		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (eventData._pointerId_k__BackingField == this._pointerId) {
			if (this._mode == 2) {
				this.TriggerActiveSlideButton();
			}
			this._pointerId = -0x80000000;
			this._eventCamera = null;
			this._pressed = false;
			this.SetActiveSlideButton(null);
			if ((this._mode & 0xfffffffdU) == 0) {
				this.SetOpen(false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004698")]
	[Address(RVA = "0x5B71150", Offset = "0x5B70150", VA = "0x5B71150")]
	private void ReleasePointer()
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$ReleasePointer): clean


		if (this._mode == 2) {
			this.TriggerActiveSlideButton();
		}
		this._pointerId = -0x80000000;
		this._eventCamera = null;
		this._pressed = false;
		this.SetActiveSlideButton(null);
		if ((this._mode & 0xfffffffdU) == 0) {
			this.SetOpen(false);
			return;
		}
		return;
	}

	[Token(Token = "0x6004699")]
	[Address(RVA = "0x5B71380", Offset = "0x5B70380", VA = "0x5B71380", Slot = "7")]
	public void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$OnPointerClick): clean
		if (this._mode == 1) {
			this.SetOpen(this._open == false);
			return;
		}
		return;
	}

	[Token(Token = "0x600469A")]
	[Address(RVA = "0x5B70DC0", Offset = "0x5B6FDC0", VA = "0x5B70DC0")]
	private void SetOpen(bool open)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$SetOpen): 7 lines keep C-only constructs
		int shape;
		List<GameObject> __this_00;
		Image pUVar1;
		MobileInputSkin skin;
		object x;
		bool bVar2;
		byte[] local_60 = new byte[16];
		Object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		if (this._open != open) {
			this._open = open;
			__this_00 = this._childObjects;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_60.GetEnumerator((List<object>)__this_00);
			local_48._current = (object)local_50;
			local_48._list = (List<T>)local_60._0_8_;
			local_48._index = local_60._8_4_;
			local_48._version = local_60._12_4_;
			local_60._0_8_ = null;
			local_60._8_8_ = &local_48;
			while(true) {
				bVar2 = local_48.MoveNext();
				x = local_48._current;
				if (!bVar2) break;
				bVar2 = ((Object)x != null);
				if (bVar2) {
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					x.SetActive(open);
				}
			}
			local_48.Dispose() ;
			if (!open) {
				this.SetActiveSlideButton(null);
			}
			pUVar1 = this._image;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._image;
				skin = (&this._normalSkin)[open];
				shape = this._shape;
				MobileControlSkinManager.ApplySkin(pUVar1, skin, shape);
			}
		}
		return;
	}

	[Token(Token = "0x600469B")]
	[Address(RVA = "0x5B71130", Offset = "0x5B70130", VA = "0x5B71130")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$SetInputFromScreenPosition): clean
		MobileInputButton button;

		button = this.GetSlideButton(screenPosition);
		this.SetActiveSlideButton(button);
		return;
	}

	[Token(Token = "0x600469C")]
	[Address(RVA = "0x5B714E0", Offset = "0x5B704E0", VA = "0x5B714E0")]
	private MobileInputButton GetSlideButton(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$GetSlideButton): clean
		bool bVar1;
		RectTransform rectTransform;
		GameObject __this_00;
		int index;
		List<MobileInputPopupButton.SlideButton> __this_01;
		MobileInputPopupButton.SlideButton UVar2;

		__this_01 = this._slideButtons;
		if (__this_01 != null) {
			index = 0;
			do {
				if (__this_01._size <= index) {
					return null;
				}
				UVar2 = __this_01.get_Item(index);
				rectTransform = UVar2.Rect;
				bVar1 = ((Object)rectTransform != null);
				if (bVar1) {
					if ((rectTransform == null) ||(__this_00 = rectTransform.gameObject, __this_00 == null)) break;
					bVar1 = __this_00.activeInHierarchy;
					if ((bVar1) &&(bVar1 = this.ContainsScreenPoint(rectTransform, screenPosition, 18.0))) {
						return UVar2.Button;
					}
				}
				index = index + 1;
				__this_01 = this._slideButtons;
			} while (__this_01 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600469D")]
	[Address(RVA = "0x5B713A0", Offset = "0x5B703A0", VA = "0x5B713A0")]
	private void SetActiveSlideButton(MobileInputButton button)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$SetActiveSlideButton): 4 lines keep C-only constructs
		MobileInputButton* targetAddress;
		MobileInputButton pUVar1;
		bool bVar2;

		pUVar1 = this._activeSlideButton;
		bVar2 = ((Object)pUVar1 == (Object)button);
		if (!bVar2) {
			targetAddress = &this._activeSlideButton;
			pUVar1 = *targetAddress;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._activeSlideButton;
				if (this._mode == 2) {
					if (pUVar1 == null) goto label_05c714cf;
					pUVar1.SetHighlighted(false);
				}
				else {
					if (pUVar1 == null) goto label_05c714cf;
					pUVar1.SetPressed(false, null);
				}
			}
			*targetAddress = button;
			pUVar1 = *targetAddress;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._activeSlideButton;
				if (this._mode == 2) {
					if (pUVar1 != null) {
						pUVar1.SetHighlighted(true);
						return;
					}
				}
				else if (pUVar1 != null) {
					pUVar1.SetPressed(true, null);
					return;
				}
	label_05c714cf: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600469E")]
	[Address(RVA = "0x5B718D0", Offset = "0x5B708D0", VA = "0x5B718D0")]
	private void SetSlideButtonPressed(MobileInputButton button, bool pressed)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$SetSlideButtonPressed): clean


		if (this._mode == 2) {
			if (button != null) {
				button.SetHighlighted(pressed);
				return;
			}
		}
		else if (button != null) {
			button.SetPressed(pressed, null);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600469F")]
	[Address(RVA = "0x5B712D0", Offset = "0x5B702D0", VA = "0x5B712D0")]
	private void TriggerActiveSlideButton()
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$TriggerActiveSlideButton): clean
		MobileInputButton pUVar1;
		MobileInput[] pSVar2;
		bool bVar3;
		uint uVar4;
		uint uVar5;

		pUVar1 = this._activeSlideButton;
		bVar3 = ((Object)pUVar1 == null);
		if (!bVar3) {
			pUVar1 = this._activeSlideButton;
			if ((pUVar1 == null) ||(pSVar2 = pUVar1._inputs, pSVar2 == null)) {
	label_05c7136f: ;
				throw new NullReferenceException();
			}
			uVar4 = (uint)pSVar2.Length;
			if (0 < (int)uVar4) {
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					if (pSVar2[(int)uVar5] == null) goto label_05c7136f;
					(pSVar2[(int)uVar5]).PressForOneFrame();
					uVar5 = uVar5 + 1;
					uVar4 = (uint)pSVar2.Length;
				} while ((int)uVar5 < (int)uVar4);
			}
		}
		return;
	}

	[Token(Token = "0x60046A0")]
	[Address(RVA = "0x5B71600", Offset = "0x5B70600", VA = "0x5B71600")]
	private bool ContainsScreenPoint(RectTransform rectTransform, Vector2 screenPosition, float padding)
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$ContainsScreenPoint): 5 lines keep C-only constructs
		uint uVar1;
		Camera cam;
		float fVar2;
		float fVar3;
		float fVar4;
		bool bVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Rect UVar11;
		Vector2 local_50;
		byte[] local_48 = new byte[8];
		float local_38;
		float fStack_34;
		float local_28;

		local_50.x = 0.0;
		local_50.y = 0.0;
		cam = this._eventCamera;
		bVar5 = RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform, screenPosition, cam, ref local_50);
		if (bVar5) {
			if (rectTransform == null) {
				throw new NullReferenceException();
			}
			UVar11 = rectTransform.rect;
			fVar6 = UVar11.m_YMin;
			local_48 = (byte[])UVar11._8_8_;
			if (Il2CppMethodInitialized_07544d54 == false) {
				Il2CppMethodInitialized_07544d54 = true;
				uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = *(uint)((long)typeof(Rect) + 0xe4);
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_07544d55 == false) {
				Il2CppMethodInitialized_07544d55 = true;
				uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(Rect))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar7 = UVar11.m_XMin - padding;
			fVar8 = local_50.x;
			fVar9 = local_50.y;
			fVar10 = local_38;
			fVar4 = fVar6;
			fVar2 = fStack_34;
			fVar3 = local_28;
			if (g_data_0754205c == false) {
				local_38 = fVar7;
				fStack_34 = fVar6;
				g_data_0754205c = true;
				fVar7 = local_38;
				fVar10 = local_38;
				fVar4 = fStack_34;
				fVar2 = fStack_34;
				fVar3 = local_28;
			}
			fStack_34 = fVar4;
			local_38 = fVar7;
			if (local_38 <= fVar8) {
				local_28 = ((((float)local_48._0_4_ + UVar11.m_XMin) - local_38) + local_38 + padding) - local_38 ;
				if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
					fVar7 = local_38 + local_28;
				}
				else {
					fVar7 = local_38 + local_28;
					local_38 = fVar10;
					fStack_34 = fVar2;
					local_28 = fVar3;
				}
				if ((fVar8 < fVar7) && (fVar10 = fVar6 - padding, fVar10 <= fVar9)) {
					local_48._4_4_ = (float)local_48._4_4_ + fVar6;
					local_48._0_4_ = (((float)local_48._4_4_ - fVar10) + fVar10 + padding) - fVar10;
					if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
					}
					return fVar9 < fVar10 + (float)local_48._0_4_;
				}
			}
			return false;
		}
		return false;
	}

	[Token(Token = "0x60046A1")]
	[Address(RVA = "0x5B71060", Offset = "0x5B70060", VA = "0x5B71060")]
	private void ResetPress()
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$ResetPress): clean


		this._pointerId = -0x80000000;
		this._eventCamera = null;
		this._pressed = false;
		this.SetActiveSlideButton(null);
		return;
	}

	[Token(Token = "0x60046A2")]
	[Address(RVA = "0x5B71910", Offset = "0x5B70910", VA = "0x5B71910")]
	public MobileInputPopupButton()
	{
		// Lifted from source/cpp/UI/MobileInputPopupButton.c (UI.MobileInputPopupButton$$.ctor): 1 lines keep C-only constructs
		List<GameObject> __this_00;
		List<MobileInputPopupButton.SlideButton> __this_01;

		__this_00 = new List<GameObject>();
		this._childObjects = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MobileInputPopupButton.SlideButton>));
		__this_01 = new List<MobileInputPopupButton.SlideButton>();
		this._slideButtons = __this_01;
		this._pointerId = -0x80000000;
		base();
		return;
	}
}
