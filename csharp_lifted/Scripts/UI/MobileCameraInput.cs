// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileCameraInput
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileCameraInput.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000747")]
internal static class MobileCameraInput
{
	[Token(Token = "0x40024A8")]
	private const float CharacterEditorTouchRotationScale = 0.05f;

	[Token(Token = "0x40024A9")]
	[FieldOffset(Offset = "0x0")]
	private static bool _gyroWasEnabled;

	[Token(Token = "0x40024AA")]
	[FieldOffset(Offset = "0x4")]
	private static Vector2 _originalVirtualCursor;

	[Token(Token = "0x60046AC")]
	[Address(RVA = "0x5B71D70", Offset = "0x5B70D70", VA = "0x5B71D70")]
	public static void UpdateGyroscopeState()
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$UpdateGyroscopeState): clean
		GeneralSettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;
		bool value;
		Gyroscope __this;

		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.MobileGyroscope, pSVar2 == null)) {
	label_05c71e58: ;
			throw new NullReferenceException();
		}
		if (pSVar2._value == false) {
			value = false;
		}
		else {
			value = false;
			bVar3 = SystemInfo.supportsGyroscope;
			if (bVar3) {
				value = MobileInputBridge.Enabled;
			}
		}
		if (MobileCameraInput._gyroWasEnabled != value) {
			__this = Input.gyro;
			if (__this == null) goto label_05c71e58;
			__this.enabled = value;
			MobileCameraInput._gyroWasEnabled = value;
		}
		return;
	}

	[Token(Token = "0x60046AD")]
	[Address(RVA = "0x5B71E60", Offset = "0x5B70E60", VA = "0x5B71E60")]
	public static void GetLookInput(float sensitivity, int invertY, float mobileLookMultiplier, out float inputX, out float inputY)
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$GetLookInput): 2 lines keep C-only constructs
		GeneralSettings pSVar1;
		FloatSetting pSVar2;
		Vector2 UVar3;
		int iVar4;
		Gyroscope __this;
		MobileCameraInput* method_00;
		float fVar5;
		float fVar6;
		Vector2 UVar7;
		Vector3 UVar8;

		UVar3 = MobileInputBridge.ConsumeLookDelta();
		*inputX = UVar3.x * mobileLookMultiplier * sensitivity;
		*inputY = -UVar3.y * mobileLookMultiplier * sensitivity * (float)invertY;
		if (g_data_07547915 == false) {
			method_00 = &typeof(MobileCameraInput);
			g_data_07547915 = true;
		}
		MobileCameraInput.UpdateGyroscopeState();
		if (MobileCameraInput._gyroWasEnabled == false) {
			UVar7 = (Vector2.zeroVector);
		}
		else {
			__this = Input.gyro;
			if (__this == null) goto label_05c72085;
			UVar8 = __this.rotationRateUnbiased;
			fVar5 = Time.deltaTime;
			fVar6 = fVar5 * UVar8.x * 57.29578;
			fVar5 = fVar5 * UVar8.y * 57.29578;
			iVar4 = Screen.orientation;
			if (iVar4 == 1) {
				UVar7.x = -fVar6;
				UVar7.y = -fVar5;
			}
			else if (iVar4 == 2) {
				UVar7.y = fVar5;
				UVar7.x = fVar6;
			}
			else {
				if (iVar4 == 4) {
					fVar6 = -fVar6;
				}
				else {
					fVar5 = -fVar5;
				}
				UVar7.y = fVar6;
				UVar7.x = fVar5;
			}
		}
		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.MobileGyroscopeHorizontalSensitivity, pSVar2 != null )) {
			*inputX = UVar7.x * 10.0 * pSVar2._value + *inputX;
			pSVar2 = pSVar1.MobileGyroscopeVerticalSensitivity;
			if (pSVar2 != null) {
				*inputY = UVar7.y * -10.0 * pSVar2._value * (float)invertY + *inputY;
				return;
			}
		}
	label_05c72085: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046AE")]
	[Address(RVA = "0x5B721A0", Offset = "0x5B711A0", VA = "0x5B721A0")]
	public static void GetFreeCamLookInput(float camSpeed, out float inputX, out float inputY)
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$GetFreeCamLookInput): 2 lines keep C-only constructs
		GeneralSettings pSVar1;
		FloatSetting pSVar2;
		Vector2 UVar3;
		int iVar4;
		Gyroscope __this;
		MobileCameraInput* method_00;
		float fVar5;
		float fVar6;
		Vector2 UVar7;
		Vector3 UVar8;

		UVar3 = MobileInputBridge.ConsumeLookDelta();
		*inputX = UVar3.x * 0.1 * camSpeed;
		*inputY = UVar3.y * 0.1 * camSpeed;
		if (g_data_07547915 == false) {
			method_00 = &typeof(MobileCameraInput);
			g_data_07547915 = true;
		}
		MobileCameraInput.UpdateGyroscopeState();
		if (MobileCameraInput._gyroWasEnabled == false) {
			UVar7 = (Vector2.zeroVector);
		}
		else {
			__this = Input.gyro;
			if (__this == null) goto label_05c72397;
			UVar8 = __this.rotationRateUnbiased;
			fVar5 = Time.deltaTime;
			fVar6 = fVar5 * UVar8.x * 57.29578;
			fVar5 = fVar5 * UVar8.y * 57.29578;
			iVar4 = Screen.orientation;
			if (iVar4 == 1) {
				UVar7.x = -fVar6;
				UVar7.y = -fVar5;
			}
			else if (iVar4 == 2) {
				UVar7.y = fVar5;
				UVar7.x = fVar6;
			}
			else {
				if (iVar4 == 4) {
					fVar6 = -fVar6;
				}
				else {
					fVar5 = -fVar5;
				}
				UVar7.y = fVar6;
				UVar7.x = fVar5;
			}
		}
		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.MobileGyroscopeHorizontalSensitivity, pSVar2 != null )) {
			*inputX = UVar7.x * 0.1 * pSVar2._value + *inputX;
			pSVar2 = pSVar1.MobileGyroscopeVerticalSensitivity;
			if (pSVar2 != null) {
				*inputY = UVar7.y * -0.1 * pSVar2._value + *inputY;
				return;
			}
		}
	label_05c72397: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046AF")]
	[Address(RVA = "0x5B723A0", Offset = "0x5B713A0", VA = "0x5B723A0")]
	public static bool TryApplyOriginalRelativeMovement(Transform cameraTransform, float sensitivity, int invertY, float mobileLookMultiplier, float deadzone, float cameraSpeed)
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$TryApplyOriginalRelativeMovement): 18 lines keep C-only constructs
		Vector2 UVar1;
		UnityEngine_Vector3_StaticFields pUVar2;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		int iVar5;
		int iVar6;
		float fVar7;
		float fVar10;
		Vector2 UVar8;
		Vector2 UVar9;
		byte[] auVar11 = new byte[16];
		float fVar12;
		float fVar13;
		Quaternion value;
		Vector3 UVar14;
		Vector3 euler;
		Vector3 UVar15;
		Vector3 euler_00;
		float fStack_a4;
		float fStack_94;
		ulong uStack_58;
		Quaternion UStack_48;
		Vector3 UStack_30;

		UStack_48 = (Quaternion)ZEXT816(0);
		bVar4 = MobileInputBridge.Enabled;
		if (!bVar4) {
			return false;
		}
		bVar4 = ((Object)cameraTransform == null);
		if (bVar4) {
			return false;
		}
		iVar5 = Screen.width;
		iVar6 = Screen.height;
		fVar7 = (float)iVar5;
		fVar10 = (float)iVar6;
		UVar8 = MobileInputBridge.ConsumeLookDelta();
		UVar1 = (MobileCameraInput._originalVirtualCursor);
		UVar9.x = sensitivity * mobileLookMultiplier * UVar8.x + UVar1.x;
		UVar9.y = sensitivity * mobileLookMultiplier * (float)invertY * UVar8.y + UVar1.y;
		(MobileCameraInput._originalVirtualCursor) = UVar9;
		UVar1 = (MobileCameraInput._originalVirtualCursor);
		auVar3._4_4_ = fVar10;
		auVar3._0_4_ = fVar7;
		auVar3._8_8_ = 0;
		auVar11._8_8_ = 0;
		auVar11._0_4_ = UVar1.x;
		auVar11._4_4_ = UVar1.y;
		auVar11 = minps(auVar3, auVar11);
		fVar12 = (float)(-(uint)(0.0 <= UVar1.x) & auVar11._0_4_);
		UVar1.y = (float)(-(uint)(0.0 <= UVar1.y) & auVar11._4_4_);
		UVar1.x = fVar12;
		(MobileCameraInput._originalVirtualCursor) = UVar1;
		fVar13 = (1.0 - deadzone) * 0.5 * fVar7;
		if (fVar13 <= fVar12) {
			fVar13 = (deadzone + 1.0) * 0.5 * fVar7;
			if (fVar12 <= fVar13) {
				if (cameraTransform == null) {
	label_05c7279b: ;
					throw new NullReferenceException();
				}
				goto label_05c726a2;
			}
			if (cameraTransform == null) goto label_05c7279b;
			fVar13 = fVar12 - fVar13;
			UVar14 = cameraTransform.position;
			pUVar2 = typeof(Vector3).static_fields;
			uStack_58._0_4_ = (pUVar2.upVector).x;
			uStack_58._4_4_ = (pUVar2.upVector).y;
			fStack_a4 = (pUVar2.upVector).z;
			fVar12 = Time.deltaTime;
			fVar12 = sensitivity * fVar12 * 62.0;
		}
		else {
			if (cameraTransform == null) goto label_05c7279b;
			fVar13 = fVar13 - fVar12;
			UVar14 = cameraTransform.position;
			pUVar2 = typeof(Vector3).static_fields;
			uStack_58._0_4_ = (pUVar2.upVector).x;
			uStack_58._4_4_ = (pUVar2.upVector).y;
			fStack_a4 = (pUVar2.upVector).z;
			fVar12 = Time.deltaTime;
			fVar12 = sensitivity * fVar12 * -62.0;
		}
		UVar15.z = fStack_a4;
		UVar15.x = (float)(undefined4)uStack_58;
		UVar15.y = (float)uStack_58._4_4_;
		cameraTransform.RotateAround(UVar14, UVar15, (fVar13 / fVar7) * cameraSpeed * fVar12);
	label_05c726a2: ;
		fVar7 = (MobileCameraInput._originalVirtualCursor).y;
		UStack_48 = cameraTransform.rotation;
		UVar14 = Quaternion.Internal_ToEulerRad(ref UStack_48);
		euler.x = UVar14.x * 57.29578;
		euler.y = UVar14.y * 57.29578;
		euler.z = UVar14.z * 57.29578;
		UVar14 = Quaternion.Internal_MakePositive(euler);
		UStack_48 = cameraTransform.rotation;
		UVar15 = Quaternion.Internal_ToEulerRad(ref UStack_48);
		euler_00.x = UVar15.x * 57.29578;
		euler_00.y = UVar15.y * 57.29578;
		euler_00.z = UVar15.z * 57.29578;
		UVar15 = Quaternion.Internal_MakePositive(euler_00);
		fStack_94 = UVar14.y;
		UStack_30.x = (((fVar10 * 0.6 - fVar7) * 280.0 * 0.5) / fVar10) * 0.017453292;
		UStack_30.y = fStack_94 * 0.017453292;
		UStack_30.z = UVar15.z * 0.017453292;
		value = Quaternion.Internal_FromEulerRad(ref UStack_30) ;
		cameraTransform.rotation = value;
		return true;
	}

	[Token(Token = "0x60046B0")]
	[Address(RVA = "0x5B727C0", Offset = "0x5B717C0", VA = "0x5B727C0")]
	public static bool TryHandleTouchRotation(Transform cameraTransform, Vector3 anchorPoint, CharacterEditorMenu menu)
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$TryHandleTouchRotation): 9 lines keep C-only constructs
		Vector2 UVar1;
		ulong uVar2;
		bool bVar3;
		int iVar4;
		int iVar5;
		EventSystem pUVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar10;
		float fStack_108;
		Touch UStack_e8;
		float fStack_98;
		byte[] auStack_88 = new byte[16];
		Touch UStack_78;

		iVar4 = Input.touchCount;
		if (iVar4 != 0) {
			bVar3 = ((Object)cameraTransform == null);
			if (bVar3) goto label_05c72ab5;
			bVar3 = ((Object)menu == null);
			if (bVar3) goto label_05c72ab5;
			UStack_78 = Input.GetTouch(0);
			UStack_e8.m_AzimuthAngle = UStack_78.m_AzimuthAngle;
			UStack_e8.m_maximumPossiblePressure = UStack_78.m_maximumPossiblePressure;
			UStack_e8.m_Radius = UStack_78.m_Radius;
			UStack_e8.m_RadiusVariance = UStack_78.m_RadiusVariance;
			UStack_e8.m_AltitudeAngle = UStack_78.m_AltitudeAngle;
			UStack_e8.m_TapCount = UStack_78.m_TapCount;
			UStack_e8.m_Phase = UStack_78.m_Phase;
			UStack_e8.m_Type = UStack_78.m_Type;
			UStack_e8.m_Pressure = UStack_78.m_Pressure;
			UStack_e8.m_RawPosition.y = UStack_78.m_RawPosition.y;
			UStack_e8.m_PositionDelta.x = UStack_78.m_PositionDelta.x;
			UStack_e8.m_PositionDelta.y = UStack_78.m_PositionDelta.y;
			UStack_e8.m_TimeDelta = UStack_78.m_TimeDelta;
			UStack_e8.m_FingerId = UStack_78.m_FingerId;
			UStack_e8.m_Position.x = UStack_78.m_Position.x;
			UStack_e8.m_Position.y = UStack_78.m_Position.y;
			UStack_e8.m_RawPosition.x = UStack_78.m_RawPosition.x;
			pUVar6 = EventSystem.current;
			bVar3 = ((Object)pUVar6 != null);
			if (bVar3) {
				pUVar6 = EventSystem.current;
				iVar5 = UStack_e8.fingerId;
				if (pUVar6 == null) goto label_05c72acc;
				bVar3 = pUVar6.IsPointerOverGameObject(iVar5);
				if (bVar3) goto label_05c72ab5;
			}
			UVar1 = UStack_e8.position;
			if (menu == null) {
	label_05c72acc: ;
				throw new NullReferenceException();
			}
			fVar7 = menu.GetMinMouseX();
			fStack_108 = UVar1.x;
			if (fVar7 <= fStack_108) {
				fVar7 = fStack_108;
				fVar8 = menu.GetMaxMouseX();
				if (fStack_108 <= fVar8) {
					iVar5 = UStack_e8.phase;
					if (iVar5 == 1) {
						UVar1 = UStack_e8.deltaPosition;
						auStack_88._8_4_ = extraout_XMM0_Dc;
						auStack_88._0_4_ = UVar1.x;
						auStack_88._4_4_ = UVar1.y;
						auStack_88._12_4_ = extraout_XMM0_Dd;
						fVar8 = MobileFullscreenUtility.GetResolutionInputScale();
						fVar9 = Time.deltaTime;
						uVar2 = il2cpp_runtime_helper_05bbcf10(0);
						if (cameraTransform == null) goto label_05c72acc;
						fStack_98 = (float)auStack_88._4_4_ * fVar8;
						UVar10.z = fVar7;
						UVar10.x = (float)(int)uVar2;
						UVar10.y = (float)(int)((ulong)uVar2 >> 0x20);
						cameraTransform.RotateAround(anchorPoint, UVar10, fVar8 * (float)auStack_88._0_4_ * 0.05 * fVar9 * 200.0);
						UVar10 = cameraTransform.right;
						cameraTransform.RotateAround(anchorPoint, UVar10, fStack_98 * -0.05 * fVar9 * 200.0);
					}
				}
			}
		}
	label_05c72ab5: ;
		return iVar4 != 0;
	}

	[Token(Token = "0x60046B1")]
	[Address(RVA = "0x5B72B40", Offset = "0x5B71B40", VA = "0x5B72B40")]
	public static Vector3 GetOriginalVirtualCursorPosition()
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$GetOriginalVirtualCursorPosition): 1 lines keep C-only constructs
		Vector3 UVar1;

		UVar1.z = 0.0;
		UVar1._0_8_ = (MobileCameraInput._originalVirtualCursor);
		return (Vector3)UVar1;
	}

	[Token(Token = "0x60046B2")]
	[Address(RVA = "0x5B72B80", Offset = "0x5B71B80", VA = "0x5B72B80")]
	public static void ResetOriginalVirtualCursor()
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$ResetOriginalVirtualCursor): clean
		int iVar1;
		int iVar2;
		Vector2 UVar3;

		iVar1 = Screen.width;
		iVar2 = Screen.height;
		UVar3.x = (float)iVar1 * 0.5;
		UVar3.y = (float)iVar2 * 0.6;
		(MobileCameraInput._originalVirtualCursor) = UVar3;
		return;
	}

	[Token(Token = "0x60046B3")]
	[Address(RVA = "0x5B727A0", Offset = "0x5B717A0", VA = "0x5B727A0")]
	private static float GetSensitivityDeltaTime(float sensitivity)
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$GetSensitivityDeltaTime): clean
		float fVar1;

		fVar1 = Time.deltaTime;
		return fVar1 * sensitivity * 62.0;
	}

	[Token(Token = "0x60046B4")]
	[Address(RVA = "0x5B72AE0", Offset = "0x5B71AE0", VA = "0x5B72AE0")]
	private static bool IsInsidePreviewArea(CharacterEditorMenu menu, float screenX)
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$IsInsidePreviewArea): clean
		float fVar1;

		if (menu == null) {
			throw new NullReferenceException();
		}
		fVar1 = menu.GetMinMouseX();
		if (screenX < fVar1) {
			return false;
		}
		fVar1 = menu.GetMaxMouseX();
		return screenX <= fVar1;
	}

	[Token(Token = "0x60046B5")]
	[Address(RVA = "0x5B72090", Offset = "0x5B71090", VA = "0x5B72090")]
	private static Vector2 GetGyroscopeLookDelta()
	{
		// Lifted from source/cpp/UI/MobileCameraInput.c (UI.MobileCameraInput$$GetGyroscopeLookDelta): 5 lines keep C-only constructs
		Vector2 UVar1;
		int iVar2;
		Gyroscope __this;
		MobileCameraInput* ppUVar3;
		float fVar4;
		float fVar5;
		Vector3 UVar6;

		if (g_data_07547915 == false) {
			ppUVar3 = &typeof(MobileCameraInput);
			g_data_07547915 = true;
		}
		MobileCameraInput.UpdateGyroscopeState();
		if (MobileCameraInput._gyroWasEnabled == false) {
			return (Vector2)(Vector2.zeroVector);
		}
		__this = Input.gyro;
		if (__this == null) {
			throw new NullReferenceException();
		}
		UVar6 = __this.rotationRateUnbiased;
		fVar4 = Time.deltaTime;
		fVar5 = fVar4 * UVar6.x * 57.29578;
		fVar4 = fVar4 * UVar6.y * 57.29578;
		iVar2 = Screen.orientation;
		if (iVar2 == 1) {
			return (Vector2)(CONCAT44(fVar4, fVar5) ^ 0x8000000080000000);
		}
		if (iVar2 == 2) {
			UVar1.y = fVar4;
			UVar1.x = fVar5;
			return (Vector2)UVar1;
		}
		if (iVar2 == 4) {
			return (Vector2)(CONCAT44(fVar5, fVar4) ^ 0x8000000000000000);
		}
		return (Vector2)(CONCAT44(fVar5, fVar4) ^ 0x80000000);
	}
}
