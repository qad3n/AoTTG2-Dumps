// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputJoystick
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputJoystick.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000741")]
public class MobileInputJoystick : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x4002476")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _base;

	[Token(Token = "0x4002477")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _handle;

	[Token(Token = "0x4002478")]
	[FieldOffset(Offset = "0x30")]
	private float _radius;

	[Token(Token = "0x4002479")]
	[FieldOffset(Offset = "0x34")]
	private float _reelOutActivationRadius;

	[Token(Token = "0x400247A")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _parentRect;

	[Token(Token = "0x400247B")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _restPosition;

	[Token(Token = "0x400247C")]
	[FieldOffset(Offset = "0x48")]
	private Image _image;

	[Token(Token = "0x400247D")]
	[FieldOffset(Offset = "0x50")]
	private Image _reelOutRingImage;

	[Token(Token = "0x400247E")]
	[FieldOffset(Offset = "0x58")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x400247F")]
	[FieldOffset(Offset = "0x60")]
	private MobileInputSkin _activeSkin;

	[Token(Token = "0x4002480")]
	[FieldOffset(Offset = "0x68")]
	private MobileInputSkin _reelRingSkin;

	[Token(Token = "0x4002481")]
	[FieldOffset(Offset = "0x70")]
	private MobileInputSkin _reelInSkin;

	[Token(Token = "0x4002482")]
	[FieldOffset(Offset = "0x78")]
	private MobileInputSkin _reelOutSkin;

	[Token(Token = "0x4002483")]
	[FieldOffset(Offset = "0x80")]
	private MobileInputSkin _appliedBaseSkin;

	[Token(Token = "0x4002484")]
	[FieldOffset(Offset = "0x88")]
	private MobileInputSkin _appliedRingSkin;

	[Token(Token = "0x4002485")]
	[FieldOffset(Offset = "0x90")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x4002486")]
	[FieldOffset(Offset = "0x94")]
	private int _pointerId;

	[Token(Token = "0x4002487")]
	[FieldOffset(Offset = "0x98")]
	private Camera _eventCamera;

	[Token(Token = "0x4002488")]
	[FieldOffset(Offset = "0xA0")]
	private bool _pressed;

	[Token(Token = "0x4002489")]
	[FieldOffset(Offset = "0xA4")]
	private float _reelInAngle;

	[Token(Token = "0x400248A")]
	[FieldOffset(Offset = "0xA8")]
	private float _reelOutAngle;

	[Token(Token = "0x17000C09")]
	public static MobileInputJoystick ActiveJoystick
	{
		[Token(Token = "0x6004665")]
		[Address(RVA = "0x5B6F5B0", Offset = "0x5B6E5B0", VA = "0x5B6F5B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$get_ActiveJoystick): clean
			return MobileInputJoystick._ActiveJoystick_k__BackingField;
		}
		[Token(Token = "0x6004666")]
		[Address(RVA = "0x5B6F5F0", Offset = "0x5B6E5F0", VA = "0x5B6F5F0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$set_ActiveJoystick): clean
			MobileInputJoystick._ActiveJoystick_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000C0A")]
	public bool PulledPastReelOutRing
	{
		[Token(Token = "0x6004667")]
		[Address(RVA = "0x5B6F640", Offset = "0x5B6E640", VA = "0x5B6F640")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$get_PulledPastReelOutRing): clean
			return this._PulledPastReelOutRing_k__BackingField;
		}
		[Token(Token = "0x6004668")]
		[Address(RVA = "0x5B6F650", Offset = "0x5B6E650", VA = "0x5B6F650")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$set_PulledPastReelOutRing): clean
			this._PulledPastReelOutRing_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000C0B")]
	public float ReelInAngle
	{
		[Token(Token = "0x6004669")]
		[Address(RVA = "0x5B6F660", Offset = "0x5B6E660", VA = "0x5B6F660")]
		get
		{
			// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$get_ReelInAngle): clean
			return this._reelInAngle;
		}
	}

	[Token(Token = "0x17000C0C")]
	public float ReelOutAngle
	{
		[Token(Token = "0x600466A")]
		[Address(RVA = "0x5B6F670", Offset = "0x5B6E670", VA = "0x5B6F670")]
		get
		{
			// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$get_ReelOutAngle): clean
			return this._reelOutAngle;
		}
	}

	[Token(Token = "0x600466B")]
	[Address(RVA = "0x5B68B60", Offset = "0x5B67B60", VA = "0x5B68B60")]
	public void Setup(RectTransform joystickBase, RectTransform handle, float radius, Image reelOutRingImage, float reelOutActivationRadius, MobileInputSkin normalSkin, MobileInputSkin activeSkin, MobileInputSkin reelRingSkin, MobileInputSkin reelInSkin, MobileInputSkin reelOutSkin, MobileInputControlShape shape, float reelInAngle, float reelOutAngle)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$Setup): 15 lines keep C-only constructs
		RectTransform* targetAddress;
		RectTransform pUVar1;
		RectTransform pUVar2;
		Image pUVar3;
		RectTransform* method_00;
		Vector2 UVar4;
		byte[] auVar5 = new byte[16];
		uint in_XMM2_Db;

		targetAddress = &this._base;
		this._base = joystickBase;
		this._handle = handle;
		this._radius = radius;
		this._reelOutRingImage = reelOutRingImage;
		this._reelOutActivationRadius = reelOutActivationRadius;
		auVar5._4_4_ = 180.0 - reelOutAngle;
		auVar5._0_4_ = reelInAngle;
		auVar5._8_4_ = in_XMM2_Db;
		auVar5._12_4_ = 0;
		auVar5 = minps(_DAT_01006360, auVar5);
		this._reelInAngle = (float)(-(uint)(0.0 <= reelInAngle) & auVar5._0_4_);
		this._reelOutAngle = (float)(-(uint)(0.0 <= 180.0 - reelOutAngle) & auVar5._4_4_);
		this._normalSkin = normalSkin;
		this._activeSkin = activeSkin;
		this._reelRingSkin = reelRingSkin;
		this._reelInSkin = reelInSkin;
		this._reelOutSkin = reelOutSkin;
		this._shape = shape;
		pUVar2 = this._base;
		if (pUVar2 != null) {
			pUVar2 = (RectTransform)pUVar2.parent;
			pUVar1 = typeof(RectTransform);
			if (pUVar2 == null) {
				this._parentRect = null;
			}
			else {
				method_00 = &typeof(RectTransform);
				if ((pUVar2.klass != typeof(RectTransform)) ||(this._parentRect = pUVar2, pUVar2.klass != pUVar1)) {
					throw new InvalidCastException();
				}
			}
			pUVar2 = *targetAddress;
			if (pUVar2 != null) {
				UVar4 = (Vector2)pUVar2.anchoredPosition;
				this._restPosition = UVar4;
				pUVar2 = this._base;
				if (pUVar2 != null) {
					pUVar3 = pUVar2.GetComponent<Image>();
					this._image = pUVar3;
					this.ApplyBaseSkin(this._normalSkin);
					this.SetReelRingColor(false, false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600466C")]
	[Address(RVA = "0x5B6F750", Offset = "0x5B6E750", VA = "0x5B6F750")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$OnDisable): clean
		this.ResetJoystick();
		return;
	}

	[Token(Token = "0x600466D")]
	[Address(RVA = "0x5B6F990", Offset = "0x5B6E990", VA = "0x5B6F990")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$Update): 1 lines keep C-only constructs
		bool bVar1;
		MethodInfo method_00;
		Vector2 local_10;

		local_10.x = 0.0;
		local_10.y = 0.0;
		if (this._pressed != false) {
			method_00 = (MethodInfo)&local_10;
			bVar1 = MobilePlatformUtility.TryGetHeldPointerPosition(this._pointerId, (Vector2)method_00);
			if (!bVar1) {
				this.ResetJoystick();
				return;
			}
			this.SetInputFromScreenPosition((Vector2)local_10);
		}
		return;
	}

	[Token(Token = "0x600466E")]
	[Address(RVA = "0x5B6FBA0", Offset = "0x5B6EBA0", VA = "0x5B6FBA0", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$OnInitializePotentialDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		eventData._useDragThreshold_k__BackingField = false;
		return;
	}

	[Token(Token = "0x600466F")]
	[Address(RVA = "0x5B6FBC0", Offset = "0x5B6EBC0", VA = "0x5B6FBC0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$OnPointerDown): 45 lines keep C-only constructs
		Vector2 UVar1;
		RectTransform pUVar2;
		Vector2 value;
		Vector2 localPoint;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		Camera pUVar5;
		float fVar6;
		float fVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		byte[] auVar11 = new byte[16];
		byte[] auVar12 = new byte[16];
		float fVar13;
		Vector2 UStack_50;
		byte[] auStack_48 = new byte[16];
		float fStack_38;

		UStack_50.x = 0.0;
		UStack_50.y = 0.0;
		if (eventData == null) goto label_05c6fe14;
		this._pointerId = eventData._pointerId_k__BackingField;
		pUVar5 = eventData.pressEventCamera;
		this._eventCamera = pUVar5;
		this._pressed = true;
		MobileInputJoystick._ActiveJoystick_k__BackingField = this;
		pUVar2 = this._base;
		bVar4 = ((Object)pUVar2 != null);
		if (!bVar4) {
			return;
		}
		pUVar2 = this._parentRect;
		pUVar5 = this._eventCamera;
		UVar1 = eventData._position_k__BackingField;
		RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar2, (Vector2)UVar1, pUVar5, ref UStack_50) ;
		UVar1 = this._restPosition;
		auVar12._0_4_ = UStack_50.x - UVar1.x;
		auVar12._4_4_ = UStack_50.y - UVar1.y;
		auVar12._8_8_ = 0;
		fVar7 = this._radius;
		uVar8 = 0;
		uVar9 = 0;
		uVar10 = 0;
		if (g_data_07545ca1 == false) {
			auStack_48 = ZEXT416((uint)fVar7);
			g_data_07545ca1 = true;
			fVar7 = (float)auStack_48._0_4_;
			uVar8 = auStack_48._4_4_;
			uVar9 = auStack_48._8_4_;
			uVar10 = auStack_48._12_4_;
		}
		fVar13 = auVar12._4_4_ * auVar12._4_4_;
		fVar6 = fVar13 + auVar12._0_4_ * auVar12._0_4_;
		if (fVar7 * fVar7 < fVar6) {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				auStack_48._4_4_ = uVar8;
				auStack_48._0_4_ = fVar7;
				auStack_48._8_4_ = uVar9;
				auStack_48._12_4_ = uVar10;
				fStack_38 = fVar6;
				fVar6 = fStack_38;
				fVar7 = (float)auStack_48._0_4_;
				uVar8 = auStack_48._4_4_;
				uVar9 = auStack_48._8_4_;
				uVar10 = auStack_48._12_4_;
				if (0.0 <= fStack_38) goto label_05c6fd70;
	label_05c6fd9f: ;
				auStack_48._4_4_ = uVar8;
				auStack_48._0_4_ = fVar7;
				auStack_48._8_4_ = uVar9;
				auStack_48._12_4_ = uVar10;
				fVar6 = sqrtf(fVar6);
				fVar7 = (float)auStack_48._0_4_;
			}
			else {
				if (fVar6 < 0.0) goto label_05c6fd9f;
	label_05c6fd70: ;
				fVar6 = SQRT(fVar6);
			}
			auVar11._4_4_ = fVar6;
			auVar11._0_4_ = fVar6;
			auVar11._8_4_ = fVar6;
			auVar11._12_4_ = fVar6;
			auVar11 = divps(auVar12, auVar11);
			auVar12._0_4_ = auVar11._0_4_ * fVar7;
			auVar12._4_4_ = auVar11._4_4_ * fVar7;
			auVar12._8_4_ = auVar11._8_4_ * fVar7;
			auVar12._12_4_ = auVar11._12_4_ * fVar7;
		}
		pUVar2 = this._base;
		if (pUVar2 != null) {
			fVar7 = this._radius;
			auVar3._4_4_ = fVar7;
			auVar3._0_4_ = fVar7;
			auVar3._8_4_ = fVar7;
			auVar3._12_4_ = fVar7;
			auVar12 = divps(auVar12, auVar3);
			value.y = UStack_50.y - fVar7 * auVar12._4_4_;
			value.x = UStack_50.x - fVar7 * auVar12._0_4_;
			pUVar2.anchoredPosition = value;
			fVar7 = this._radius;
			localPoint.y = fVar7 * auVar12._4_4_;
			localPoint.x = fVar7 * auVar12._0_4_;
			this.SetInput((Vector2)auVar12._0_8_, localPoint);
			return;
		}
	label_05c6fe14: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004670")]
	[Address(RVA = "0x5B6FF90", Offset = "0x5B6EF90", VA = "0x5B6FF90", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$OnDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (eventData._pointerId_k__BackingField != this._pointerId) {
			return;
		}
		MobileInputJoystick._ActiveJoystick_k__BackingField = this;
		return;
	}

	[Token(Token = "0x6004671")]
	[Address(RVA = "0x5B70000", Offset = "0x5B6F000", VA = "0x5B70000", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$OnPointerUp): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (eventData._pointerId_k__BackingField == this._pointerId) {
			this.ResetJoystick();
			return;
		}
		return;
	}

	[Token(Token = "0x6004672")]
	[Address(RVA = "0x5B6FE20", Offset = "0x5B6EE20", VA = "0x5B6FE20")]
	private void SetInput(Vector2 input, Vector2 localPoint)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$SetInput): 1 lines keep C-only constructs
		float fVar1;
		MobileInputJoystick x;
		RectTransform pUVar2;
		Vector2 value;
		bool bVar3;
		float local_48;
		float fStack_44;

		fVar1 = this._reelOutActivationRadius;
		this._PulledPastReelOutRing_k__BackingField = fVar1 * fVar1 < localPoint.y * localPoint.y + localPoint.x * localPoint.x;
		x = MobileInputJoystick._ActiveJoystick_k__BackingField;
		bVar3 = ((Object)x == (Object)this);
		if (bVar3) {
			MobileInputBridge.SetMoveVector(input);
		}
		local_48 = input.x;
		fStack_44 = input.y;
		this.ApplyBaseSkin((&this._normalSkin)[0.01 < fStack_44 * fStack_44 + local_48 * local_48]);
		pUVar2 = this._handle;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._handle;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			fVar1 = this._radius;
			value.y = fVar1 * fStack_44;
			value.x = fVar1 * local_48;
			pUVar2.anchoredPosition = value;
			return;
		}
		return;
	}

	[Token(Token = "0x6004673")]
	[Address(RVA = "0x5B6F9F0", Offset = "0x5B6E9F0", VA = "0x5B6F9F0")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$SetInputFromScreenPosition): 39 lines keep C-only constructs
		RectTransform pUVar1;
		byte[] auVar2 = new byte[16];
		Vector2 UVar3;
		bool bVar4;
		MethodInfo method_00;
		float fVar5;
		float fVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		float fVar12;
		Vector2 local_50;
		byte[] local_48 = new byte[16];
		float local_38;

		local_50.x = 0.0;
		local_50.y = 0.0;
		pUVar1 = this._base;
		bVar4 = ((Object)pUVar1 == null);
		if (bVar4) {
			return;
		}
		pUVar1 = this._base;
		method_00 = (MethodInfo)this._eventCamera;
		RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar1, screenPosition, (Camera)method_00, ref local_50);
		UVar3 = local_50;
		auVar11._8_8_ = 0;
		auVar11._0_4_ = local_50.x;
		auVar11._4_4_ = local_50.y;
		fVar6 = this._radius;
		uVar7 = 0;
		uVar8 = 0;
		uVar9 = 0;
		if (g_data_07545ca1 == false) {
			local_48 = ZEXT416((uint)fVar6);
			g_data_07545ca1 = true;
			fVar6 = (float)local_48._0_4_;
			uVar7 = local_48._4_4_;
			uVar8 = local_48._8_4_;
			uVar9 = local_48._12_4_;
		}
		fVar5 = UVar3.x;
		fVar12 = UVar3.y;
		fVar12 = fVar12 * fVar12;
		fVar5 = fVar12 + fVar5 * fVar5;
		if (fVar5 <= fVar6 * fVar6) goto label_05c6fb66;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_48._4_4_ = uVar7;
			local_48._0_4_ = fVar6;
			local_48._8_4_ = uVar8;
			local_48._12_4_ = uVar9;
			local_38 = fVar5;
			fVar5 = local_38;
			fVar6 = (float)local_48._0_4_;
			uVar7 = local_48._4_4_;
			uVar8 = local_48._8_4_;
			uVar9 = local_48._12_4_;
			if (0.0 <= local_38) goto label_05c6fb12;
	label_05c6fb41: ;
			local_48._4_4_ = uVar7;
			local_48._0_4_ = fVar6;
			local_48._8_4_ = uVar8;
			local_48._12_4_ = uVar9;
			fVar5 = sqrtf(fVar5);
			fVar6 = (float)local_48._0_4_;
		}
		else {
			if (fVar5 < 0.0) goto label_05c6fb41;
	label_05c6fb12: ;
			fVar5 = SQRT(fVar5);
		}
		auVar10._4_4_ = fVar5;
		auVar10._0_4_ = fVar5;
		auVar10._8_4_ = fVar5;
		auVar10._12_4_ = fVar5;
		auVar10 = divps(auVar11, auVar10);
		auVar11._0_4_ = auVar10._0_4_ * fVar6;
		auVar11._4_4_ = auVar10._4_4_ * fVar6;
		auVar11._8_4_ = auVar10._8_4_ * fVar6;
		auVar11._12_4_ = auVar10._12_4_ * fVar6;
	label_05c6fb66: ;
		fVar6 = this._radius;
		auVar2._4_4_ = fVar6;
		auVar2._0_4_ = fVar6;
		auVar2._8_4_ = fVar6;
		auVar2._12_4_ = fVar6;
		auVar11 = divps(auVar11, auVar2);
		this.SetInput((Vector2)auVar11._0_8_, (Vector2)local_50);
		return;
	}

	[Token(Token = "0x6004674")]
	[Address(RVA = "0x5B6F760", Offset = "0x5B6E760", VA = "0x5B6F760")]
	private void ResetJoystick()
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$ResetJoystick): clean
		Vector2 move;
		MobileInputJoystick x;
		RectTransform pUVar1;
		bool bVar2;
		bool bVar3;

		x = MobileInputJoystick._ActiveJoystick_k__BackingField;
		bVar2 = ((Object)x == (Object)this);
		this._pointerId = -0x80000000;
		this._eventCamera = null;
		this._pressed = false;
		this._PulledPastReelOutRing_k__BackingField = false;
		bVar3 = ((Object)this._base != null);
		if (bVar3) {
			pUVar1 = this._base;
			if (pUVar1 == null) goto label_05c6f989;
			pUVar1.anchoredPosition = (Vector2)this._restPosition;
		}
		this.ApplyBaseSkin(this._normalSkin);
		pUVar1 = this._handle;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = this._handle;
			if (pUVar1 == null) {
	label_05c6f989: ;
				throw new NullReferenceException();
			}
			pUVar1.anchoredPosition = (Vector2)(Vector2.zeroVector);
		}
		this.SetReelRingColor(false, false);
		if (bVar2) {
			MobileInputJoystick._ActiveJoystick_k__BackingField =null;
			move = (Vector2.zeroVector);
			MobileInputBridge.SetMoveVector((Vector2)move);
			return;
		}
		return;
	}

	[Token(Token = "0x6004675")]
	[Address(RVA = "0x5B69850", Offset = "0x5B68850", VA = "0x5B69850")]
	public void SetReelRingColor(bool reelIn, bool reelOut)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$SetReelRingColor): clean
		int shape;
		Image pUVar1;
		bool bVar2;
		MobileInputSkin skin;

		pUVar1 = this._reelOutRingImage;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			if (reelIn) {
				skin = this._reelInSkin;
				if (skin != this._appliedRingSkin) goto label_05c698e4;
			}
			else if (reelOut) {
				skin = this._reelOutSkin;
				if (skin != this._appliedRingSkin) {
	label_05c698e4: ;
					this._appliedRingSkin = skin;
					pUVar1 = this._reelOutRingImage;
					shape = this._shape;
					MobileControlSkinManager.ApplySkin(pUVar1, skin, shape);
					return;
				}
			}
			else {
				skin = this._reelRingSkin;
				if (skin != this._appliedRingSkin) goto label_05c698e4;
			}
		}
		return;
	}

	[Token(Token = "0x6004676")]
	[Address(RVA = "0x5B6F680", Offset = "0x5B6E680", VA = "0x5B6F680")]
	private void ApplyBaseSkin(MobileInputSkin skin)
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$ApplyBaseSkin): clean
		int shape;
		Image pUVar1;
		bool bVar2;

		pUVar1 = this._image;
		bVar2 = ((Object)pUVar1 == null);
		if ((bVar2) || (this._appliedBaseSkin == skin)) {
			return;
		}
		this._appliedBaseSkin = skin;
		pUVar1 = this._image;
		shape = this._shape;
		MobileControlSkinManager.ApplySkin(pUVar1, skin, shape);
		return;
	}

	[Token(Token = "0x6004677")]
	[Address(RVA = "0x5B70030", Offset = "0x5B6F030", VA = "0x5B70030")]
	public MobileInputJoystick()
	{
		// Lifted from source/cpp/UI/MobileInputJoystick.c (UI.MobileInputJoystick$$.ctor): clean
		this._pointerId = -0x80000000;
		base();
		return;
	}
}
