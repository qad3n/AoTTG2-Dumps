// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputHoldControl
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputHoldControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200073E")]
public abstract class MobileInputHoldControl : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x200073F")]
	private struct SlideButton
	{
		[Token(Token = "0x400246F")]
		[FieldOffset(Offset = "0x0")]
		public RectTransform Rect;

		[Token(Token = "0x4002470")]
		[FieldOffset(Offset = "0x8")]
		public MobileInputButton Button;

		[Token(Token = "0x600465B")]
		[Address(RVA = "0x5B6E600", Offset = "0x5B6D600", VA = "0x5B6E600")]
		public SlideButton(RectTransform rect, MobileInputButton button)
		{
			// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl.SlideButton$$.ctor): clean
			this.Rect = rect;
			this.Button = button;
			return;
		}
	}

	[Token(Token = "0x4002463")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4002464")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4002465")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x4002466")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputSkin _pressedSkin;

	[Token(Token = "0x4002467")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x4002468")]
	[FieldOffset(Offset = "0x48")]
	private MobileInputButton _activeSlideButton;

	[Token(Token = "0x4002469")]
	[FieldOffset(Offset = "0x50")]
	private RectTransform _movingContent;

	[Token(Token = "0x400246A")]
	[FieldOffset(Offset = "0x58")]
	private int _pointerId;

	[Token(Token = "0x400246B")]
	[FieldOffset(Offset = "0x60")]
	private Camera _eventCamera;

	[Token(Token = "0x400246C")]
	[FieldOffset(Offset = "0x68")]
	private bool _pressed;

	[Token(Token = "0x400246D")]
	[FieldOffset(Offset = "0x69")]
	private bool _moveContentWithTouch;

	[Token(Token = "0x400246E")]
	[FieldOffset(Offset = "0x70")]
	private readonly List<SlideButton> _slideButtons;

	[Token(Token = "0x6004646")]
	[Address(RVA = "0x5B6E0C0", Offset = "0x5B6D0C0", VA = "0x5B6E0C0")]
	protected void Setup(RectTransform rect, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$Setup): 2 lines keep C-only constructs
		RectTransform* targetAddress;
		RectTransform x;
		bool bVar1;
		Image pUVar2;
		MobileInputHoldControl __this_00;

		targetAddress = &this._rect;
		this._rect = rect;
		this._normalSkin = normalSkin;
		this._pressedSkin = pressedSkin;
		this._shape = shape;
		x = this._rect;
		bVar1 = ((Object)x != null);
		__this_00 = this;
		if ((bVar1) &&(__this_00 = (MobileInputHoldControl)*targetAddress, __this_00 == null)) {
			throw new NullReferenceException();
		}
		pUVar2 = __this_00.GetComponent<Image>();
		this._image = pUVar2;
		return;
	}

	[Token(Token = "0x6004647")]
	[Address(RVA = "0x5B6E440", Offset = "0x5B6D440", VA = "0x5B6E440")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnDisable): clean
		this.ResetControl();
		return;
	}

	[Token(Token = "0x6004648")]
	[Address(RVA = "0x5B6E540", Offset = "0x5B6D540", VA = "0x5B6E540")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$Update): 1 lines keep C-only constructs
		bool bVar1;
		MethodInfo pMVar2;
		Vector2 local_20;
		Vector2 local_18;

		local_20.x = 0.0;
		local_20.y = 0.0;
		if (this._pressed != false) {
			pMVar2 = (MethodInfo)&local_20;
			bVar1 = MobilePlatformUtility.TryGetHeldPointerPosition(this._pointerId, (Vector2)pMVar2);
			if (!bVar1) {
				this.ResetControl();
				return;
			}
			local_18 = local_20;
			pMVar2 = (MethodInfo)this.GetSlideButton((Vector2)local_20);
			this.SetActiveSlideButton((MobileInputButton)pMVar2);
			this.UpdateMovingContent((Vector2)local_18);
		}
		return;
	}

	[Token(Token = "0x6004649")]
	[Address(RVA = "0x5B6E5E0", Offset = "0x5B6D5E0", VA = "0x5B6E5E0", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnInitializePotentialDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		eventData._useDragThreshold_k__BackingField = false;
		return;
	}

	[Token(Token = "0x600464A")]
	[Address(RVA = "0x5B6AD60", Offset = "0x5B69D60", VA = "0x5B6AD60")]
	public void RegisterSlideButton(RectTransform rectTransform, MobileInputButton button)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$RegisterSlideButton): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<MobileInputHoldControl.SlideButton> __this_00;
		MobileInputHoldControl.SlideButton[] pUVar3;
		MobileInputHoldControl.SlideButton item;
		bool bVar5;
		RectTransform local_30;
		MobileInputButton local_28;

		bVar5 = ((Object)rectTransform == null);
		if (!bVar5) {
			bVar5 = ((Object)button == null);
			if (!bVar5) {
				__this_00 = this._slideButtons;
				local_28 = null;
				local_30 = rectTransform;
				local_28 = button;
				if (__this_00 != null) {
					item.Button = local_28;
					item.Rect = local_30;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = __this_00._items;
					if (pUVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar3.Length) {
							__this_00._size = uVar2 + 1;
							pUVar3[(int)uVar2].Rect = local_30;
							pUVar3[(int)uVar2].Button = local_28;
							return;
						}
						__this_00.AddWithResize(item);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600464B")]
	[Address(RVA = "0x5B6A060", Offset = "0x5B69060", VA = "0x5B6A060")]
	public void SetupMovingContent(RectTransform content, bool moveContentWithTouch)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$SetupMovingContent): clean
		this._movingContent = content;
		this._moveContentWithTouch = moveContentWithTouch;
		this.ResetMovingContent();
		return;
	}

	[Token(Token = "0x600464C")]
	[Address(RVA = "0x5B6E6E0", Offset = "0x5B6D6E0", VA = "0x5B6E6E0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnPointerDown): clean
		Vector2 screenPosition;
		int shape;
		Image pUVar1;
		bool bVar2;
		Camera pUVar3;
		MethodInfo pMVar4;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		this._pointerId = eventData._pointerId_k__BackingField;
		pUVar3 = eventData.pressEventCamera;
		this._eventCamera = pUVar3;
		this._pressed = true;
		this.OnControlPressed();
		pUVar1 = this._image;
		pMVar4 = null;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._image;
			pMVar4 = (MethodInfo)this._pressedSkin;
			shape = this._shape;
			MobileControlSkinManager.ApplySkin(pUVar1, (MobileInputSkin)pMVar4, shape);
		}
		screenPosition = eventData._position_k__BackingField;
		pMVar4 = (MethodInfo)this.GetSlideButton((Vector2)screenPosition);
		this.SetActiveSlideButton((MobileInputButton)pMVar4);
		this.UpdateMovingContent((Vector2)screenPosition);
		return;
	}

	[Token(Token = "0x600464D")]
	[Address(RVA = "0x5B6E800", Offset = "0x5B6D800", VA = "0x5B6E800", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnDrag): clean
		return;
	}

	[Token(Token = "0x600464E")]
	[Address(RVA = "0x5B6E810", Offset = "0x5B6D810", VA = "0x5B6E810", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnPointerUp): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (eventData._pointerId_k__BackingField == this._pointerId) {
			this.ResetControl();
			return;
		}
		return;
	}

	[Token(Token = "0x600464F")]
	[Address(RVA = "0x5B6E5B0", Offset = "0x5B6D5B0", VA = "0x5B6E5B0")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$SetInputFromScreenPosition): clean
		MethodInfo method_00;

		method_00 = (MethodInfo)this.GetSlideButton(screenPosition);
		this.SetActiveSlideButton((MobileInputButton)method_00);
		this.UpdateMovingContent(screenPosition);
		return;
	}

	[Token(Token = "0x6004650")]
	[Address(RVA = "0x5B6EA90", Offset = "0x5B6DA90", VA = "0x5B6EA90")]
	private void UpdateMovingContent(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$UpdateMovingContent): 12 lines keep C-only constructs
		RectTransform pUVar1;
		Camera cam;
		byte[] auVar2 = new byte[16];
		bool bVar3;
		float fVar4;
		Vector2 value;
		byte[] auVar5 = new byte[16];
		float fVar6;
		Rect UVar7;
		Rect UVar8;
		float local_68;
		Vector2 local_40;
		float local_38;

		local_40.x = 0.0;
		local_40.y = 0.0;
		if (this._moveContentWithTouch != false) {
			pUVar1 = this._movingContent;
			bVar3 = ((Object)pUVar1 == null);
			if (!bVar3) {
				pUVar1 = this._rect;
				bVar3 = ((Object)pUVar1 == null);
				if (!bVar3) {
					pUVar1 = this._rect;
					cam = this._eventCamera;
					bVar3 = RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar1, screenPosition, cam, ref local_40);
					if (bVar3) {
						pUVar1 = this._rect;
						if (pUVar1 != null) {
							UVar7 = pUVar1.rect;
							pUVar1 = this._rect;
							if (pUVar1 != null) {
								UVar8 = pUVar1.rect;
								value = local_40;
								local_68 = UVar7.m_Width;
								if (UVar8.m_Height <= local_68) {
									local_68 = UVar8.m_Height;
								}
								local_68 = local_68 * 0.22;
								pUVar1 = this._movingContent;
								auVar5._8_8_ = 0;
								auVar5._0_4_ = local_40.x;
								auVar5._4_4_ = local_40.y;
								fVar6 = value.y * value.y;
								fVar4 = fVar6 + value.x * value.x;
								if (local_68 * local_68 < fVar4) {
									if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
										local_38 = fVar4;
										fVar4 = local_38;
									}
									if (fVar4 < 0.0) {
										fVar4 = sqrtf(fVar4);
									}
									else {
										fVar4 = SQRT(fVar4);
									}
									auVar2._4_4_ = fVar4;
									auVar2._0_4_ = fVar4;
									auVar2._8_4_ = fVar4;
									auVar2._12_4_ = fVar4;
									auVar5 = divps(auVar5, auVar2);
									value.x = auVar5._0_4_ * local_68;
									value.y = auVar5._4_4_ * local_68;
								}
								if (pUVar1 != null) {
									pUVar1.anchoredPosition = (Vector2)value;
									return;
								}
							}
						}
						throw new NullReferenceException();
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004651")]
	[Address(RVA = "0x5B6E630", Offset = "0x5B6D630", VA = "0x5B6E630")]
	private void ResetMovingContent()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$ResetMovingContent): clean
		RectTransform pUVar1;
		bool bVar2;

		pUVar1 = this._movingContent;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._movingContent;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.anchoredPosition = (Vector2)(Vector2.zeroVector);
			return;
		}
		return;
	}

	[Token(Token = "0x6004652")]
	[Address(RVA = "0x5B6ECD0", Offset = "0x5B6DCD0", VA = "0x5B6ECD0", Slot = "8")]
	protected virtual void OnControlPressed()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnControlPressed): clean
		return;
	}

	[Token(Token = "0x6004653")]
	[Address(RVA = "0x5B6ECE0", Offset = "0x5B6DCE0", VA = "0x5B6ECE0", Slot = "9")]
	protected virtual void OnControlReleased()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$OnControlReleased): clean
		return;
	}

	[Token(Token = "0x6004654")]
	[Address(RVA = "0x5B6ECF0", Offset = "0x5B6DCF0", VA = "0x5B6ECF0", Slot = "10")]
	protected virtual bool IsInputHeldByControl(MobileInput input)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$IsInputHeldByControl): clean
		return false;
	}

	[Token(Token = "0x6004655")]
	[Address(RVA = "0x5B6E830", Offset = "0x5B6D830", VA = "0x5B6E830")]
	private MobileInputButton GetSlideButton(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$GetSlideButton): clean
		bool bVar1;
		RectTransform rectTransform;
		GameObject __this_00;
		int index;
		List<MobileInputHoldControl.SlideButton> __this_01;
		MobileInputHoldControl.SlideButton UVar2;

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

	[Token(Token = "0x6004656")]
	[Address(RVA = "0x5B6E950", Offset = "0x5B6D950", VA = "0x5B6E950")]
	private void SetActiveSlideButton(MobileInputButton button)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$SetActiveSlideButton): 7 lines keep C-only constructs
		MobileInputButton* targetAddress;
		MobileInputButton pUVar1;
		bool bVar2;
		Func<MobileInput, bool> __this_00;

		pUVar1 = this._activeSlideButton;
		bVar2 = ((Object)pUVar1 == (Object)button);
		if (!bVar2) {
			targetAddress = &this._activeSlideButton;
			pUVar1 = *targetAddress;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._activeSlideButton;
				__this_00 = new Func<MobileInput, bool>((object)this, (intptr_t)(this.klass.vtable)._10_IsInputHeldByControl.method);
				if (pUVar1 == null) goto label_05c6ea8b;
				pUVar1.SetPressed(false, __this_00);
			}
			*targetAddress = button;
			pUVar1 = *targetAddress;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				if (*targetAddress != null) {
					(*targetAddress).SetPressed(true, null);
					return;
				}
	label_05c6ea8b: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004657")]
	[Address(RVA = "0x5B6ED00", Offset = "0x5B6DD00", VA = "0x5B6ED00")]
	private bool ContainsScreenPoint(RectTransform rectTransform, Vector2 screenPosition, float padding)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$ContainsScreenPoint): 5 lines keep C-only constructs
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

	[Token(Token = "0x6004658")]
	[Address(RVA = "0x5B6E2B0", Offset = "0x5B6D2B0", VA = "0x5B6E2B0")]
	protected static bool ContainsInput(MobileInput[] inputs, MobileInput input)
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$ContainsInput): clean
		int iVar1;
		int iVar2;
		bool bVar3;

		if ((inputs != null) && (input != null)) {
			iVar1 = (int)inputs.Length;
			if (iVar1 < 1) {
				return false;
			}
			iVar2 = 0;
			do {
				if (inputs[iVar2] == input) {
					return true;
				}
				bVar3 = iVar1 + -1 != iVar2;
				iVar2 = iVar2 + 1;
			} while (bVar3);
		}
		return false;
	}

	[Token(Token = "0x6004659")]
	[Address(RVA = "0x5B6E450", Offset = "0x5B6D450", VA = "0x5B6E450")]
	private void ResetControl()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$ResetControl): clean
		int shape;
		Image pUVar1;
		bool bVar2;
		MethodInfo method_01;

		bVar2 = this._pressed;
		this._pointerId = -0x80000000;
		this._eventCamera = null;
		this._pressed = false;
		this.SetActiveSlideButton(null);
		if (bVar2 != false) {
			this.OnControlReleased();
		}
		pUVar1 = this._image;
		method_01 = null;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._image;
			method_01 = (MethodInfo)this._normalSkin;
			shape = this._shape;
			MobileControlSkinManager.ApplySkin(pUVar1, (MobileInputSkin)method_01, shape);
		}
		this.ResetMovingContent();
		return;
	}

	[Token(Token = "0x600465A")]
	[Address(RVA = "0x5B6E3B0", Offset = "0x5B6D3B0", VA = "0x5B6E3B0")]
	protected MobileInputHoldControl()
	{
		// Lifted from source/cpp/UI/MobileInputHoldControl.c (UI.MobileInputHoldControl$$.ctor): 1 lines keep C-only constructs
		List<MobileInputHoldControl.SlideButton> __this_00;

		this._pointerId = -0x80000000;
		this._moveContentWithTouch = true;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MobileInputHoldControl.SlideButton>));
		__this_00 = new List<MobileInputHoldControl.SlideButton>();
		this._slideButtons = __this_00;
		base();
		return;
	}
}
