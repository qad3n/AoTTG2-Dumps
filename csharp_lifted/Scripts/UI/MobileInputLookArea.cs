// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLookArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLookArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000742")]
public class MobileInputLookArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x400248D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<MobileInputLookArea> ActiveLookAreas;

	[Token(Token = "0x400248E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float _sensitivity;

	[Token(Token = "0x400248F")]
	[FieldOffset(Offset = "0x24")]
	private int _pointerId;

	[Token(Token = "0x4002490")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _lastScreenPosition;

	[Token(Token = "0x4002491")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lookVelocity;

	[Token(Token = "0x4002492")]
	[FieldOffset(Offset = "0x38")]
	private bool _pressed;

	[Token(Token = "0x4002493")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _rectTransform;

	[Token(Token = "0x6004678")]
	[Address(RVA = "0x5B70050", Offset = "0x5B6F050", VA = "0x5B70050")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$Awake): clean
		RectTransform pUVar1;

		pUVar1 = this.GetComponent<RectTransform>();
		this._rectTransform = pUVar1;
		return;
	}

	[Token(Token = "0x6004679")]
	[Address(RVA = "0x5B700A0", Offset = "0x5B6F0A0", VA = "0x5B700A0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$OnEnable): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<MobileInputLookArea> pSVar4;
		MobileInputLookArea[] pUVar5;
		bool bVar7;

		if (Il2CppMethodInitialized_075478f4 == false) {
			Il2CppMethodInitialized_075478f4 = true;
			uVar2 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar4 = MobileInputLookArea.ActiveLookAreas;
		}
		else {
			pSVar4 = *(List<MobileInputLookArea>*)(typeof(MobileInputLookArea)).static_fields;
		}
		if (pSVar4 != null) {
			bVar7 = pSVar4.Contains((object)this);
			if (bVar7) {
				return;
			}
			pSVar4 = MobileInputLookArea.ActiveLookAreas;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = pSVar4._items;
				if (pUVar5 != null) {
					uVar3 = pSVar4._size;
					if (uVar3 < (uint)pUVar5.Length) {
						pSVar4._size = uVar3 + 1;
						pUVar5[(int)uVar3] = this;
						return;
					}
					pSVar4.AddWithResize((object)this);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600467A")]
	[Address(RVA = "0x5B701E0", Offset = "0x5B6F1E0", VA = "0x5B701E0")]
	public void Setup(float sensitivity)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$Setup): clean
		this._sensitivity = sensitivity;
		return;
	}

	[Token(Token = "0x600467B")]
	[Address(RVA = "0x5B701F0", Offset = "0x5B6F1F0", VA = "0x5B701F0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$OnDisable): clean
		uint uVar1;
		List<MobileInputLookArea> __this_00;
		Vector2 pUVar2;

		if (Il2CppMethodInitialized_075478f5 == false) {
			Il2CppMethodInitialized_075478f5 = true;
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = MobileInputLookArea.ActiveLookAreas;
		}
		else {
			__this_00 = *(List<MobileInputLookArea>*)(typeof(MobileInputLookArea)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)this);
		this._pointerId = -0x80000000;
		pUVar2 = typeof(Vector2);
		this._lastScreenPosition =(Vector2.zeroVector);
		this._lookVelocity = (pUVar2.static_fields.zeroVector);
		this._pressed = false;
		return;
	}

	[Token(Token = "0x600467C")]
	[Address(RVA = "0x5B70350", Offset = "0x5B6F350", VA = "0x5B70350")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$Update): 1 lines keep C-only constructs
		Vector2 pUVar1;
		bool bVar2;
		MethodInfo method_00;
		Vector2 local_10;

		local_10.x = 0.0;
		local_10.y = 0.0;
		if (this._pressed != false) {
			method_00 = (MethodInfo)&local_10;
			bVar2 = MobilePlatformUtility.TryGetHeldPointerPosition(this._pointerId, (Vector2)method_00);
			if (!bVar2) {
				this._pointerId = -0x80000000;
				pUVar1 = typeof(Vector2);
				this._lastScreenPosition =(Vector2.zeroVector);
				this._lookVelocity = (pUVar1.static_fields.zeroVector);
				this._pressed = false;
				return;
			}
			this.SetInputFromScreenPosition((Vector2)local_10);
		}
		return;
	}

	[Token(Token = "0x600467D")]
	[Address(RVA = "0x5B70530", Offset = "0x5B6F530", VA = "0x5B70530", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$OnInitializePotentialDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		eventData._useDragThreshold_k__BackingField = false;
		return;
	}

	[Token(Token = "0x600467E")]
	[Address(RVA = "0x5B70550", Offset = "0x5B6F550", VA = "0x5B70550", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$OnPointerDown): clean
		Vector2 UVar1;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (this._pressed != false) {
			return;
		}
		UVar1 = eventData._position_k__BackingField;
		this._pointerId = eventData._pointerId_k__BackingField;
		this._lastScreenPosition = UVar1;
		this._lookVelocity = (Vector2.zeroVector);
		this._pressed = true;
		return;
	}

	[Token(Token = "0x600467F")]
	[Address(RVA = "0x5B70610", Offset = "0x5B6F610", VA = "0x5B70610", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$OnDrag): clean
		return;
	}

	[Token(Token = "0x6004680")]
	[Address(RVA = "0x5B70620", Offset = "0x5B6F620", VA = "0x5B70620", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$OnPointerUp): clean
		Vector2 pUVar1;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (eventData._pointerId_k__BackingField == this._pointerId) {
			this._pointerId = -0x80000000;
			pUVar1 = typeof(Vector2);
			this._lastScreenPosition =(Vector2.zeroVector);
			this._lookVelocity = (pUVar1.static_fields.zeroVector);
			this._pressed = false;
		}
		return;
	}

	[Token(Token = "0x6004681")]
	[Address(RVA = "0x5B70690", Offset = "0x5B6F690", VA = "0x5B70690")]
	public static void ForwardPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$ForwardPointerDown): clean
		Vector2 UVar1;
		bool bVar2;
		Camera eventCamera;
		MobileInputLookArea x;

		if (eventData == null) {
	label_05c707a0: ;
			throw new NullReferenceException();
		}
		UVar1 = eventData._position_k__BackingField;
		eventCamera = eventData.pressEventCamera;
		x = MobileInputLookArea.GetLookAreaAt((Vector2)UVar1, eventCamera);
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) goto label_05c707a0;
			if (x._pressed == false) {
				UVar1 = eventData._position_k__BackingField;
				x._pointerId = eventData._pointerId_k__BackingField;
				x._lastScreenPosition = UVar1;
				x._lookVelocity = (Vector2.zeroVector);
				x._pressed = true;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004682")]
	[Address(RVA = "0x5B70910", Offset = "0x5B6F910", VA = "0x5B70910")]
	public static void ForwardPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$ForwardPointerUp): clean
		int pointerId;
		Vector2 pUVar1;
		bool bVar2;
		MobileInputLookArea x;

		if (eventData == null) {
	label_05c709ed: ;
			throw new NullReferenceException();
		}
		pointerId = eventData._pointerId_k__BackingField;
		x = MobileInputLookArea.GetLookAreaForPointer(pointerId);
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) goto label_05c709ed;
			x._pointerId = -0x80000000;
			pUVar1 = typeof(Vector2);
			x._lastScreenPosition = (Vector2.zeroVector);
			x._lookVelocity = (pUVar1.static_fields.zeroVector);
			x._pressed = false;
		}
		return;
	}

	[Token(Token = "0x6004683")]
	[Address(RVA = "0x5B707B0", Offset = "0x5B6F7B0", VA = "0x5B707B0")]
	private static MobileInputLookArea GetLookAreaAt(Vector2 screenPosition, Camera eventCamera)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$GetLookAreaAt): clean
		uint uVar1;
		int index;
		List<MobileInputLookArea> pSVar2;
		bool bVar3;
		MobileInputLookArea __this;

		if (Il2CppMethodInitialized_075478f8 == false) {
			Il2CppMethodInitialized_075478f8 = true;
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = MobileInputLookArea.ActiveLookAreas;
		}
		else {
			pSVar2 = *(List<MobileInputLookArea>*)(typeof(MobileInputLookArea)).static_fields;
		}
		if (pSVar2 != null) {
			index = pSVar2._size;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return null;
				}
				if (((typeof(MobileInputLookArea))._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar2 = MobileInputLookArea.ActiveLookAreas;
				if (pSVar2 == null) break;
				__this = pSVar2.get_Item(index);
				bVar3 = ((Object)__this != null);
				if (bVar3) {
					if (__this == null) break;
					bVar3 = __this.IsScreenPointInside(screenPosition, eventCamera);
					if (bVar3) {
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004684")]
	[Address(RVA = "0x5B70A00", Offset = "0x5B6FA00", VA = "0x5B70A00")]
	private static MobileInputLookArea GetLookAreaForPointer(int pointerId)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$GetLookAreaForPointer): clean
		uint uVar1;
		int index;
		List<MobileInputLookArea> pSVar2;
		bool bVar3;
		MobileInputLookArea x;

		if (Il2CppMethodInitialized_075478f9 == false) {
			Il2CppMethodInitialized_075478f9 = true;
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = MobileInputLookArea.ActiveLookAreas;
		}
		else {
			pSVar2 = *(List<MobileInputLookArea>*)(typeof(MobileInputLookArea)).static_fields;
		}
		if (pSVar2 != null) {
			index = pSVar2._size;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return null;
				}
				if (((typeof(MobileInputLookArea))._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar2 = MobileInputLookArea.ActiveLookAreas;
				if (pSVar2 == null) break;
				x = pSVar2.get_Item(index);
				bVar3 = ((Object)x != null);
				if (bVar3) {
					if (x == null) break;
					if ((x._pressed != false) && (x._pointerId == pointerId)) {
						return x;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004685")]
	[Address(RVA = "0x5B70B50", Offset = "0x5B6FB50", VA = "0x5B70B50")]
	private bool IsScreenPointInside(Vector2 screenPosition, Camera eventCamera)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$IsScreenPointInside): clean
		RectTransform pUVar1;
		bool bVar2;
		GameObject __this_00;

		pUVar1 = this._rectTransform;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			__this_00 = this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.activeInHierarchy;
			if (bVar2) {
				pUVar1 = this._rectTransform;
				bVar2 = RectTransformUtility.RectangleContainsScreenPoint(pUVar1, screenPosition, eventCamera);
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x6004686")]
	[Address(RVA = "0x5B705C0", Offset = "0x5B6F5C0", VA = "0x5B705C0")]
	private void BeginLook(int pointerId, Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$BeginLook): clean
		if (this._pressed != false) {
			return;
		}
		this._pointerId = pointerId;
		this._lastScreenPosition = screenPosition;
		this._lookVelocity = (Vector2.zeroVector);
		this._pressed = true;
		return;
	}

	[Token(Token = "0x6004687")]
	[Address(RVA = "0x5B703F0", Offset = "0x5B6F3F0", VA = "0x5B703F0")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$SetInputFromScreenPosition): clean
		Vector2 UVar1;
		GeneralSettings pSVar2;
		FloatSetting pSVar3;
		Vector2 delta;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float local_28;
		float fStack_24;
		float local_18;
		float fStack_14;

		UVar1 = this._lastScreenPosition;
		fVar4 = MobileFullscreenUtility.GetResolutionInputScale();
		local_18 = screenPosition.x;
		fStack_14 = screenPosition.y;
		this._lastScreenPosition.x = local_18;
		this._lastScreenPosition.y = fStack_14;
		pSVar2 = SettingsManager.GeneralSettings;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.MobileLookStabilization, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		local_28 = UVar1.x;
		fStack_24 = UVar1.y;
		UVar1 = this._lookVelocity;
		fVar5 = 1.0 - pSVar3._value;
		fVar6 = 1.0;
		if (fVar5 <= 1.0) {
			fVar6 = fVar5;
		}
		fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
		fVar5 = UVar1.x;
		fVar7 = UVar1.y;
		fVar5 = fVar6 * (fVar4 * (local_18 - local_28) - fVar5) + fVar5;
		fVar7 = fVar6 * (fVar4 * (fStack_14 - fStack_24) - fVar7) + fVar7;
		UVar1.y = fVar7;
		UVar1.x = fVar5;
		this._lookVelocity = UVar1;
		fVar4 = this._sensitivity;
		delta.y = fVar4 * fVar7;
		delta.x = fVar4 * fVar5;
		MobileInputBridge.AddLookDelta(delta);
		return;
	}

	[Token(Token = "0x6004688")]
	[Address(RVA = "0x5B702F0", Offset = "0x5B6F2F0", VA = "0x5B702F0")]
	private void ResetLook()
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$ResetLook): clean
		Vector2 pUVar1;

		this._pointerId = -0x80000000;
		pUVar1 = typeof(Vector2);
		this._lastScreenPosition =(Vector2.zeroVector);
		this._lookVelocity = (pUVar1.static_fields.zeroVector);
		this._pressed = false;
		return;
	}

	[Token(Token = "0x6004689")]
	[Address(RVA = "0x5B70C20", Offset = "0x5B6FC20", VA = "0x5B70C20")]
	public MobileInputLookArea()
	{
		// Lifted from source/cpp/UI/MobileInputLookArea.c (UI.MobileInputLookArea$$.ctor): clean
		this._sensitivity = 1.0;
		this._pointerId = -0x80000000;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileInputLookArea.c.

	// UI.MobileInputLookArea$$.cctor: clean
	static MobileInputLookArea()
	{
		List<MobileInputLookArea> __this;

		__this = new List<MobileInputLookArea>();
		MobileInputLookArea.ActiveLookAreas = __this;
		return;
	}
}
