// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.InGameCamera
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/InGameCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/InGameCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;
using Utility;

namespace Cameras;

[Token(Token = "0x20008EF")]
internal class InGameCamera : BaseCamera
{
	[Token(Token = "0x20008F0")]
	public enum SpecateMode
	{
		[Token(Token = "0x4002D66")]
		LiveSpectate,
		[Token(Token = "0x4002D67")]
		OrbitSpectate,
		[Token(Token = "0x4002D68")]
		FreeCam
	}

	[Token(Token = "0x4002D49")]
	[FieldOffset(Offset = "0x38")]
	public BaseCharacter _follow;

	[Token(Token = "0x4002D4A")]
	[FieldOffset(Offset = "0x40")]
	public Cycle<SpecateMode> SpecMode;

	[Token(Token = "0x4002D4B")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002D4C")]
	[FieldOffset(Offset = "0x50")]
	private InGameMenu _menu;

	[Token(Token = "0x4002D4D")]
	[FieldOffset(Offset = "0x58")]
	private GeneralInputSettings _input;

	[Token(Token = "0x4002D4E")]
	[FieldOffset(Offset = "0x60")]
	private CameraDetection _detection;

	[Token(Token = "0x4002D4F")]
	[FieldOffset(Offset = "0x68")]
	public CameraInputMode CurrentCameraMode;

	[Token(Token = "0x4002D50")]
	[FieldOffset(Offset = "0x6C")]
	public float _cameraDistance;

	[Token(Token = "0x4002D51")]
	[FieldOffset(Offset = "0x70")]
	private float _titanZoom;

	[Token(Token = "0x4002D52")]
	private const float TitanZoomStep = 0.1f;

	[Token(Token = "0x4002D53")]
	private const float MinTitanZoomDistance = 0.3f;

	[Token(Token = "0x4002D54")]
	private const float MaxTitanZoomDistance = 2f;

	[Token(Token = "0x4002D55")]
	[FieldOffset(Offset = "0x74")]
	private float _occlusionRadius;

	[Token(Token = "0x4002D56")]
	private const float OcclusionRadiusFactor = 0.45f;

	[Token(Token = "0x4002D57")]
	[FieldOffset(Offset = "0x78")]
	private float _heightDistance;

	[Token(Token = "0x4002D58")]
	[FieldOffset(Offset = "0x7C")]
	private float _anchorDistance;

	[Token(Token = "0x4002D59")]
	private const float DistanceMultiplier = 10f;

	[Token(Token = "0x4002D5A")]
	[FieldOffset(Offset = "0x80")]
	private bool _napeLock;

	[Token(Token = "0x4002D5B")]
	[FieldOffset(Offset = "0x88")]
	private BaseTitan _napeLockTitan;

	[Token(Token = "0x4002D5C")]
	[FieldOffset(Offset = "0x90")]
	private SnapshotHandler _snapshotHandler;

	[Token(Token = "0x4002D5D")]
	private const float ShakeDistance = 10f;

	[Token(Token = "0x4002D5E")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x4002D5F")]
	private const float ShakeDecay = 0.15f;

	[Token(Token = "0x4002D60")]
	[FieldOffset(Offset = "0x98")]
	private bool _shakeFlip;

	[Token(Token = "0x4002D61")]
	[FieldOffset(Offset = "0x9C")]
	private float _shakeTimeLeft;

	[Token(Token = "0x4002D62")]
	[FieldOffset(Offset = "0xA0")]
	private float _currentShakeDistance;

	[Token(Token = "0x4002D63")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _clipMask;

	[Token(Token = "0x4002D64")]
	[FieldOffset(Offset = "0xA4")]
	private float _lastChangeSpectateID;

	[Token(Token = "0x17000ECF")]
	public bool UsesMouseLook
	{
		[Token(Token = "0x60054F6")]
		[Address(RVA = "0x5CCFDF0", Offset = "0x5CCEDF0", VA = "0x5CCFDF0")]
		get
		{
			// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$get_UsesMouseLook): clean
			bool bVar1;
			uint uVar2;
			GeneralSettings pSVar3;
			BoolSetting pSVar4;
			InputSettings pSVar5;
			GeneralInputSettings pSVar6;
			KeybindSetting __this_00;
			bool bVar7;

			pSVar3 = SettingsManager.GeneralSettings;
			if ((((pSVar3 == null) ||(pSVar4 = pSVar3.OriginalCameraWOWRotation, pSVar4 == null)) ||(pSVar5 = SettingsManager.InputSettings, pSVar5 == null)) ||((pSVar6 = pSVar5.General, pSVar6 == null ||(__this_00 = pSVar6.RotateWOWCamera, __this_00 == null)))) {
				throw new NullReferenceException();
			}
			uVar2 = this.CurrentCameraMode;
			bVar1 = pSVar4._value;
			bVar7 = __this_00.GetKey(false);
			if ((uVar2 & 0xfffffffd) != 0) {
				if (!bVar7) {
					return false;
				}
				if (uVar2 != 3) {
					return uVar2 == 1 && bVar1 != false;
				}
			}
			return true;
		}
	}

	[Token(Token = "0x60054F7")]
	[Address(RVA = "0x5CCFEF0", Offset = "0x5CCEEF0", VA = "0x5CCFEF0")]
	internal static bool ShouldUseMouseLook(CameraInputMode mode, bool originalWOWRotation, bool rotateHeld)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$ShouldUseMouseLook): clean
		if ((mode & 0xfffffffdU) != 0) {
			if (!rotateHeld) {
				return false;
			}
			if (mode != 3) {
				return mode == 1 && originalWOWRotation;
			}
		}
		return true;
	}

	[Token(Token = "0x60054F8")]
	[Address(RVA = "0x5CCFF20", Offset = "0x5CCEF20", VA = "0x5CCFF20")]
	private bool CheckSpectateRateLimit()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$CheckSpectateRateLimit): clean
		float fVar1;
		float fVar2;

		fVar1 = Time.time;
		fVar1 = fVar1 - this._lastChangeSpectateID;
		if (1.0 <= fVar1) {
			fVar2 = Time.time;
			this._lastChangeSpectateID = fVar2;
		}
		return 1.0 <= fVar1;
	}

	[Token(Token = "0x60054F9")]
	[Address(RVA = "0x5CCFF80", Offset = "0x5CCEF80", VA = "0x5CCFF80")]
	public void SetCameraDistance(float distance)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$SetCameraDistance): clean
		this._cameraDistance = distance;
		return;
	}

	[Token(Token = "0x60054FA")]
	[Address(RVA = "0x5CCFF90", Offset = "0x5CCEF90", VA = "0x5CCFF90")]
	public void ApplyGraphicsSettings()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$ApplyGraphicsSettings): clean
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		Camera pUVar3;
		BoolSetting pSVar4;

		pSVar1 = SettingsManager.GraphicsSettings;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.RenderDistance, pSVar2 != null)) &&(pUVar3 = this.Camera, pUVar3 != null)) {
			pUVar3.farClipPlane = (float)pSVar2._value;
			pSVar1 = SettingsManager.GraphicsSettings;
			if (((pSVar1 != null) &&(pSVar4 = pSVar1.HDR, pSVar4 != null)) &&(pUVar3 = this.Camera, pUVar3 != null)) {
				pUVar3.allowHDR = pSVar4._value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054FB")]
	[Address(RVA = "0x5CD0050", Offset = "0x5CCF050", VA = "0x5CD0050")]
	public void ApplyGeneralSettings()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$ApplyGeneralSettings): clean
		GeneralSettings pSVar1;
		IntSetting pSVar2;

		this.ResetDistance();
		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.CameraMode, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		this.CurrentCameraMode = pSVar2._value;
		return;
	}

	[Token(Token = "0x60054FC")]
	[Address(RVA = "0x5CD00C0", Offset = "0x5CCF0C0", VA = "0x5CD00C0")]
	public void ResetDistance()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$ResetDistance): 4 lines keep C-only constructs
		float fVar1;
		GeneralSettings pSVar2;
		FloatSetting pSVar3;
		String key;
		ulong in_RAX;
		Player player;
		object value;
		ulong uStack_28;

		uStack_28 = in_RAX;
		pSVar2 = SettingsManager.GeneralSettings;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.CameraDistance, pSVar3 != null)) {
			this._cameraDistance = pSVar3._value + 0.3;
			player = PhotonNetwork.LocalPlayer;
			key = PlayerProperty.CameraDistance;
			uStack_28 = CONCAT44(this._cameraDistance, (undefined4)uStack_28);
			value = (object)(((long)&uStack_28 + 4));
			PhotonExtensions.SetCustomProperty(player, key, value);
			pSVar2 = SettingsManager.GeneralSettings;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.CameraDistance, pSVar3 != null)) {
				fVar1 = pSVar3._value;
				if ((fVar1 == 0.0) && (!NAN(fVar1))) {
					this._cameraDistance = 0.0;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054FD")]
	[Address(RVA = "0x5CD0210", Offset = "0x5CCF210", VA = "0x5CD0210")]
	public void ResetCameraMode()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$ResetCameraMode): clean
		GeneralSettings pSVar1;
		IntSetting pSVar2;

		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.CameraMode, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		this.CurrentCameraMode = pSVar2._value;
		return;
	}

	[Token(Token = "0x60054FE")]
	[Address(RVA = "0x5CD0270", Offset = "0x5CCF270", VA = "0x5CD0270")]
	private void SetCameraMode(CameraInputMode mode)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$SetCameraMode): clean
		this.CurrentCameraMode = mode;
		return;
	}

	[Token(Token = "0x60054FF")]
	[Address(RVA = "0x5CD0280", Offset = "0x5CCF280", VA = "0x5CD0280")]
	internal static CameraInputMode NextCameraMode(CameraInputMode current, CameraInputMode selected)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$NextCameraMode): clean
		if (current == 2) {
			return (uint)(selected == 3) * 3;
		}
		if (current == 1) {
			return 2;
		}
		if (current == 0) {
			return 1;
		}
		return 0;
	}

	[Token(Token = "0x6005500")]
	[Address(RVA = "0x5CD02B0", Offset = "0x5CCF2B0", VA = "0x5CD02B0")]
	public float GetCameraDistance()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetCameraDistance): clean
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		Player player;
		bool bVar4;
		float fVar5;

		pCVar1 = this._follow;
		bVar4 = ((Object)pCVar1 != null);
		if (bVar4) {
			pCVar1 = this._follow;
			if (pCVar1 != null) {
				bVar4 = pCVar1.IsMine();
				if (bVar4) goto label_05dd032c;
				pCVar1 = this._follow;
				if (((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
					player = pPVar3._Owner_k__BackingField;
					fVar5 = PhotonExtensions.GetFloatProperty(player, PlayerProperty.CameraDistance, 1.0);
					return fVar5;
				}
			}
			throw new NullReferenceException();
		}
	label_05dd032c: ;
		if (this.CurrentCameraMode != 2) {
			fVar5 = this._cameraDistance + this._titanZoom;
		}
		return fVar5;
	}

	[Token(Token = "0x6005501")]
	[Address(RVA = "0x5CD03C0", Offset = "0x5CCF3C0", VA = "0x5CD03C0")]
	public void StartShake()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$StartShake): clean
		this._shakeTimeLeft = 1.0;
		this._currentShakeDistance = 10.0;
		this._shakeFlip = false;
		return;
	}

	[Token(Token = "0x6005502")]
	[Address(RVA = "0x5CD03E0", Offset = "0x5CCF3E0", VA = "0x5CD03E0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$SetDefaultCameraPosition): clean
		uint uVar1;
		uint uVar2;
		String tag;
		BaseComponentCache pUVar3;
		bool bVar5;
		Object x;
		Transform pUVar6;
		Transform pUVar7;
		Quaternion value;
		Vector3 UVar8;

		tag = MapTags.CameraSpawnPoint;
		x = (Object)MapManager.GetRandomTag(tag);
		bVar5 = (x != null);
		pUVar3 = this.Cache;
		if (bVar5) {
			if ((pUVar3 != null) && (x != null)) {
				pUVar7 = pUVar3.Transform;
				pUVar6 = x.transform;
				if ((pUVar6 != null) &&(UVar8 = pUVar6.position, pUVar7 != null)) {
					pUVar7.position = UVar8;
					pUVar3 = this.Cache;
					if (pUVar3 != null) {
						pUVar7 = pUVar3.Transform;
						pUVar6 = x.transform;
						if ((pUVar6 != null) &&(value = (Quaternion)pUVar6.rotation, pUVar7 != null)) goto label_05dd05cc;
					}
				}
			}
		}
		else if (pUVar3 != null) {
			pUVar7 = pUVar3.Transform;
			if (pUVar7 != null) {
				UVar8.z = (Vector3.upVector).z * 100.0;
				uVar1 = (Vector3.upVector).x;
				uVar2 = (Vector3.upVector).y;
				UVar8.x = (float)uVar1 * 100.0;
				UVar8.y = (float)uVar2 * 100.0;
				pUVar7.position = UVar8;
				pUVar3 = this.Cache;
				if (pUVar3 != null) {
					pUVar7 = pUVar3.Transform;
					if (pUVar7 != null) {
						value = *(Quaternion)typeof(Quaternion).static_fields;
	label_05dd05cc: ;
						pUVar7.rotation = (Quaternion)value;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005503")]
	[Address(RVA = "0x5CD05E0", Offset = "0x5CCF5E0", VA = "0x5CD05E0")]
	public void SetFollow(BaseCharacter character, bool resetRotation = true)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$SetFollow): 63 lines keep C-only constructs
		BaseCharacter* targetAddress;
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		CameraDetection __this_00;
		InGameMenu pUVar4;
		HUDBottomHandler pUVar5;
		BaseCharacter pCVar6;
		BaseComponentCache pUVar7;
		Transform __this_01;
		PhotonView pPVar8;
		Player pPVar9;
		List<BaseUseable> pSVar10;
		BaseUseable[] __this_02;
		bool bVar11;
		bool bVar12;
		sbyte cVar13;
		int iVar14;
		Player pPVar15;
		object pIVar16;
		Transform pUVar17;
		undefined7 in_register_00000011;
		String pSVar18;
		float fVar19;
		uint uVar20;
		uint uVar21;
		float fVar22;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		float fVar23;
		float fVar24;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar25;
		Quaternion value;
		Vector3 UVar26;
		Vector3 local_98;
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[8];
		uint uStack_70;
		uint uStack_6c;
		float local_68;
		byte[] local_58 = new byte[16];
		float local_48;

		local_88._0_4_ = (int)CONCAT71(in_register_00000011, resetRotation);
		targetAddress = &this._follow;
		pCVar3 = this._follow;
		bVar11 = ((Object)pCVar3 != (Object)character);
		*targetAddress = character;
		if (bVar11) {
			CameraOcclusion.Clear();
			this._titanZoom = 0.0;
			__this_00 = this._detection;
			if (__this_00 == null) goto label_05dd0dee;
			__this_00.RefreshFollow();
		}
		pCVar3 = *targetAddress;
		bVar12 = ((Object)pCVar3 == null);
		if (bVar12) {
			pPVar15 = PhotonNetwork.LocalPlayer;
			iVar14 = PhotonExtensions.GetIntProperty(pPVar15, PlayerProperty.SpectateID, -1);
			if ((iVar14 != -1) &&(fVar19 = Time.time, 1.0 <= fVar19 - this._lastChangeSpectateID)) {
				fVar19 = Time.time;
				this._lastChangeSpectateID = fVar19;
				pPVar15 = PhotonNetwork.LocalPlayer;
				pSVar18 = PlayerProperty.SpectateID;
				local_98.x = -NAN;
				pIVar16 = (object)local_98;
				PhotonExtensions.SetCustomProperty(pPVar15, pSVar18, pIVar16);
			}
			pUVar4 = this._menu;
			if ((pUVar4 != null) &&(pUVar5 = pUVar4.HUDBottomHandler, pUVar5 != null)) {
				pUVar5.SetBottomHUD(null);
				return;
			}
			goto label_05dd0dee;
		}
		if (character == null) {
	label_05dd08bf: ;
			uVar20 = 0x3f800000;
			uVar21 = 0x3f800000;
	label_05dd08c7: ;
			this._heightDistance = (float)uVar20;
			this._anchorDistance = (float)uVar21;
			cVar13 = local_88[0];
		}
		else {
			pCVar6 = character.klass;
			bVar1 = (pCVar6._2).typeHierarchyDepth;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Human))) {
				uVar20 = 0x3f23d70a;
				uVar21 = 0x3f23d70a;
				goto label_05dd08c7;
			}
			bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseShifter))) {
				bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BasicTitan))) goto label_05dd08bf;
				pSVar10 = (*(ulong)((sbyte)character + 0x2a0));
				if ((pSVar10 == null) ||(__this_02 = (*(ulong)((sbyte)pSVar10 + 0x38)), __this_02 == null)) goto label_05dd0dee;
				UVar26 = __this_02.position;
				pUVar7 = character.Cache;
				if (pUVar7 == null) goto label_05dd0dee;
				local_58._8_4_ = extraout_XMM0_Dc_02;
				local_58._0_8_ = UVar26._0_8_;
				local_58._12_4_ = extraout_XMM0_Dd_02;
				pUVar17 = pUVar7.Transform;
				local_48 = UVar26.z;
				if (pUVar17 == null) goto label_05dd0dee;
				UVar26 = pUVar17.position;
				fVar19 = UVar26.z;
				fVar22 = UVar26.x;
				fVar23 = UVar26.y;
				uVar20 = extraout_XMM0_Dc_03;
				uVar21 = extraout_XMM0_Dd_03;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					uStack_70 = extraout_XMM0_Dc_03;
					local_78 = (byte[])UVar26._0_8_;
					uStack_6c = extraout_XMM0_Dd_03;
					local_68 = UVar26.z;
					Il2CppMethodInitialized_0753e7b7 = true;
					fVar19 = local_68;
					fVar22 = (float)local_78._0_4_;
					fVar23 = (float)local_78._4_4_;
					uVar20 = uStack_70;
					uVar21 = uStack_6c;
				}
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					local_78._4_4_ = fVar23;
					local_78._0_4_ = fVar22;
					uStack_70 = uVar20;
					uStack_6c = uVar21;
					local_68 = fVar19;
					fVar19 = local_68;
					fVar22 = (float)local_78._0_4_;
					fVar23 = (float)local_78._4_4_;
				}
				fVar19 = ((float)local_58._4_4_ - fVar23) * ((float)local_58._4_4_ - fVar23) +((float)local_58._0_4_ - fVar22) * ((float)local_58._0_4_ - fVar22) +(local_48 - fVar19) * (local_48 - fVar19);
				if (fVar19 < 0.0) {
					fVar19 = sqrtf(fVar19);
				}
				else {
					fVar19 = SQRT(fVar19);
				}
				cVar13 = local_88[0];
				in_XMM1_Dc = 0;
				in_XMM1_Dd = 0;
				this._anchorDistance = fVar19 * 0.25;
				this._occlusionRadius = fVar19 * 0.45;
				this._heightDistance = fVar19 * 1.39;
			}
			else {
				pUVar17 = character.GetCameraAnchor();
				if (pUVar17 == null) goto label_05dd0dee;
				UVar26 = pUVar17.position;
				pUVar7 = character.Cache;
				if (pUVar7 == null) goto label_05dd0dee;
				local_58._8_4_ = extraout_XMM0_Dc_00;
				local_58._0_8_ = UVar26._0_8_;
				local_58._12_4_ = extraout_XMM0_Dd_00;
				pUVar17 = pUVar7.Transform;
				local_48 = UVar26.z;
				if (pUVar17 == null) goto label_05dd0dee;
				UVar26 = pUVar17.position;
				fVar19 = UVar26.z;
				fVar22 = UVar26.x;
				fVar23 = UVar26.y;
				uVar20 = extraout_XMM0_Dc_01;
				uVar21 = extraout_XMM0_Dd_01;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					uStack_70 = extraout_XMM0_Dc_01;
					local_78 = (byte[])UVar26._0_8_;
					uStack_6c = extraout_XMM0_Dd_01;
					local_68 = UVar26.z;
					Il2CppMethodInitialized_0753e7b7 = true;
					fVar19 = local_68;
					fVar22 = (float)local_78._0_4_;
					fVar23 = (float)local_78._4_4_;
					uVar20 = uStack_70;
					uVar21 = uStack_6c;
				}
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					local_78._4_4_ = fVar23;
					local_78._0_4_ = fVar22;
					uStack_70 = uVar20;
					uStack_6c = uVar21;
					local_68 = fVar19;
					fVar19 = local_68;
					fVar22 = (float)local_78._0_4_;
					fVar23 = (float)local_78._4_4_;
				}
				fVar19 = ((float)local_58._4_4_ - fVar23) * ((float)local_58._4_4_ - fVar23) +((float)local_58._0_4_ - fVar22) * ((float)local_58._0_4_ - fVar22) +(local_48 - fVar19) * (local_48 - fVar19);
				if (fVar19 < 0.0) {
					fVar19 = sqrtf(fVar19);
				}
				else {
					fVar19 = SQRT(fVar19);
				}
				cVar13 = local_88[0];
				in_XMM1_Dc = 0;
				in_XMM1_Dd = 0;
				this._anchorDistance = fVar19 * 0.25;
				this._occlusionRadius = fVar19 * 0.45;
				this._heightDistance = fVar19 * 0.35;
			}
		}
		if (cVar13 == false) {
			if (character == null) goto label_05dd0dee;
		}
		else {
			pUVar7 = this.Cache;
			if ((pUVar7 == null) || (character == null)) goto label_05dd0dee;
			pUVar17 = pUVar7.Transform;
			bVar12 = character.IsMine();
			if (bVar12) {
				if (((*targetAddress == null) ||(pUVar7 = ((*targetAddress).fields).Cache, pUVar7 == null)) ||(__this_01 = pUVar7.Transform, __this_01 == null)) goto label_05dd0dee;
				UVar25 = __this_01.rotation;
				fVar19 = UVar25.x;
				fVar22 = UVar25.y;
				fVar23 = UVar25.z;
				fVar24 = UVar25.w;
				if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
					local_88._8_4_ = extraout_XMM0_Dc;
					local_88._0_8_ = UVar25._0_8_;
					local_88._12_4_ = extraout_XMM0_Dd;
					local_58._8_4_ = in_XMM1_Dc;
					local_58._0_8_ = UVar25._8_8_;
					local_58._12_4_ = in_XMM1_Dd;
					fVar19 = (float)local_88._0_4_;
					fVar22 = (float)local_88._4_4_;
					fVar23 = (float)local_58._0_4_;
					fVar24 = (float)local_58._4_4_;
				}
				UVar25.y = fVar22;
				UVar25.x = fVar19;
				UVar25.w = fVar24;
				UVar25.z = fVar23;
				UVar25 = Util.ConstrainedToY(UVar25);
				fVar23 = UVar25.z;
				fVar24 = UVar25.w;
				fVar19 = UVar25.x;
				fVar22 = UVar25.y;
			}
			else {
				local_98.x = 0.0;
				local_98.y = 0.0;
				local_98.z = 0.0;
				UVar25 = Quaternion.Internal_FromEulerRad(ref local_98);
				fVar23 = UVar25.z;
				fVar24 = UVar25.w;
				fVar19 = UVar25.x;
				fVar22 = UVar25.y;
			}
			if (pUVar17 == null) goto label_05dd0dee;
			value.y = fVar22;
			value.x = fVar19;
			value.w = fVar24;
			value.z = fVar23;
			pUVar17.rotation = value;
		}
		bVar12 = character.IsMine();
		pUVar4 = this._menu;
		if (bVar12) {
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.HUDBottomHandler, pUVar5 == null)) goto label_05dd0dee;
			pUVar5.SetBottomHUD(character);
			if (bVar11) {
	label_05dd0a1e: ;
				pPVar15 = PhotonNetwork.LocalPlayer;
				pSVar18 = PlayerProperty.SpectateID;
				local_98.x = -NAN;
				pIVar16 = (object)local_98;
				goto label_05dd0b81;
			}
			fVar19 = Time.time;
			if (1.0 <= fVar19 - this._lastChangeSpectateID) {
				fVar19 = Time.time;
				this._lastChangeSpectateID = fVar19;
				goto label_05dd0a1e;
			}
		}
		else {
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.HUDBottomHandler, pUVar5 == null)) goto label_05dd0dee;
			pUVar5.SetBottomHUD(null);
			if (!bVar11) {
				fVar19 = Time.time;
				if (fVar19 - this._lastChangeSpectateID < 1.0) goto label_05dd0b8b;
				fVar19 = Time.time;
				this._lastChangeSpectateID = fVar19;
			}
			pPVar15 = PhotonNetwork.LocalPlayer;
			pUVar7 = character.Cache;
			if (((pUVar7 == null) ||(pPVar8 = pUVar7.PhotonView, pPVar8 == null)) ||(pPVar9 = pPVar8._Owner_k__BackingField, pPVar9 == null)) goto label_05dd0dee;
			pSVar18 = PlayerProperty.SpectateID;
			local_98.x = (float)pPVar9.actorNumber;
			pIVar16 = (object)local_98;
	label_05dd0b81: ;
			PhotonExtensions.SetCustomProperty(pPVar15, pSVar18, pIVar16);
		}
	label_05dd0b8b: ;
		pUVar4 = this._menu;
		if (pUVar4 != null) {
			pUVar4._spectateUpdateTimeLeft = 0.0;
			return;
		}
	label_05dd0dee: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005504")]
	[Address(RVA = "0x5CD0E00", Offset = "0x5CCFE00", VA = "0x5CD0E00", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$Awake): clean
		GeneralSettings pSVar1;
		IntSetting pSVar2;
		BoolSetting pSVar3;
		GameObject __this_00;
		SnapshotHandler pUVar4;
		CameraDetection __this_01;

		this.Awake();
		this.ApplyGraphicsSettings();
		this.ResetDistance();
		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.CameraMode, pSVar2 != null)) {
			this.CurrentCameraMode = pSVar2._value;
			pSVar3 = pSVar1.SnapshotsEnabled;
			if (pSVar3 != null) {
				if (pSVar3._value != false) {
					__this_00 = this.gameObject ;
					if (__this_00 == null) goto label_05dd0f3b;
					pUVar4 = __this_00.AddComponent<SnapshotHandler>();
					this._snapshotHandler = pUVar4;
				}
				__this_01 = new CameraDetection(this);
				this._detection = __this_01;
				return;
			}
		}
	label_05dd0f3b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005505")]
	[Address(RVA = "0x5CD0F40", Offset = "0x5CCFF40", VA = "0x5CD0F40")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$TakeSnapshot): clean
		SnapshotHandler pUVar1;
		bool bVar2;

		pUVar1 = this._snapshotHandler;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return;
		}
		pUVar1 = this._snapshotHandler;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.TakeSnapshot(position, damage);
		return;
	}

	[Token(Token = "0x6005506")]
	[Address(RVA = "0x5CD0FE0", Offset = "0x5CCFFE0", VA = "0x5CD0FE0")]
	protected void Start()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$Start): 4 lines keep C-only constructs
		byte bVar1;
		InputSettings pSVar2;
		Il2CppClass pIVar3;
		InGameMenu pUVar4;

		pIVar3 = typeof(InGameManager);
		pUVar4 = (InGameMenu)SceneLoader.CurrentGameManager;
		if (pUVar4 == null) {
			this._inGameManager = null;
		}
		else {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((((InGameManager)pUVar4.klass)._2).typeHierarchyDepth < bVar1) ||((((InGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) goto label_05dd1154;
			this._inGameManager = (InGameManager)pUVar4;
			if (((((InGameManager)pUVar4.klass)._2).typeHierarchyDepth < bVar1) ||((((InGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3)) goto label_05dd1154;
		}
		pSVar2 = SettingsManager.InputSettings;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		this._input = pSVar2.General;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar4 = (InGameMenu)UIManager.CurrentMenu;
			pIVar3 = typeof(InGameMenu);
		}
		else {
			pUVar4 = (InGameMenu)UIManager.CurrentMenu;
			pIVar3 = typeof(InGameMenu);
		}
		typeof(InGameMenu) = (InGameMenu)pIVar3;
		if (pUVar4 == null) {
			this._menu = null;
	label_05dd117f: ;
			return;
		}
		bVar1 = (pIVar3._2).typeHierarchyDepth;
		if ((bVar1 <= (((InGameManager)pUVar4.klass)._2).typeHierarchyDepth) &&((((InGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
			this._menu = pUVar4;
			if ((bVar1 <= (((InGameManager)pUVar4.klass)._2).typeHierarchyDepth) &&((((InGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) goto label_05dd117f;
		}
	label_05dd1154: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x6005507")]
	[Address(RVA = "0x5CD11A0", Offset = "0x5CD01A0", VA = "0x5CD11A0")]
	public void SyncCustomPosition()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$SyncCustomPosition): clean
		uint uVar1;
		uint uVar2;
		Camera __this_00;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		float value;
		Quaternion value_00;
		Vector3 local_28;

		__this_00 = this.Camera;
		value = CustomLogicManager.CameraFOV;
		if (value <= 0.0) {
			value = 50.0;
		}
		else if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			value = CustomLogicManager.CameraFOV;
		}
		if (__this_00 != null) {
			__this_00.fieldOfView = value;
			pUVar3 = this.Cache;
			if (pUVar3 != null) {
				pUVar4 = pUVar3.Transform;
				if (pUVar4 != null) {
					pUVar4.position = (Vector3)(CustomLogicManager.CameraPosition);
					pUVar3 = this.Cache;
					if (pUVar3 != null) {
						pUVar4 = pUVar3.Transform;
						uVar1 = (CustomLogicManager.CameraRotation).x;
						uVar2 = (CustomLogicManager.CameraRotation).y;
						local_28.x = (float)uVar1 * 0.017453292;
						local_28.y = (float)uVar2 * 0.017453292;
						local_28.z = (CustomLogicManager.CameraRotation).z * 0.017453292;
						value_00 = Quaternion.Internal_FromEulerRad(ref local_28);
						if (pUVar4 != null) {
							pUVar4.rotation = value_00;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005508")]
	[Address(RVA = "0x5CD12E0", Offset = "0x5CD02E0", VA = "0x5CD12E0")]
	private void UpdateMapLights()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateMapLights): 10 lines keep C-only constructs
		int iVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		GraphicsSettings pSVar3;
		IntSetting pSVar4;
		List<MapLight> __this_01;
		bool bVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar6;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		System_Collections_Generic_List_Enumerator_T__o local_30;
		byte[] local_28 = new byte[16];

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
			UVar6 = __this_00.position;
			local_28._8_4_ = extraout_XMM0_Dc;
			local_28._0_8_ = UVar6._0_8_;
			local_28._12_4_ = extraout_XMM0_Dd;
			pSVar3 = SettingsManager.GraphicsSettings;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.LightDistance, pSVar4 != null)) {
				iVar1 = pSVar4._value;
				__this_01 = MapLoader.MapLights;
				if (__this_01 != null) {
					local_58 = __this_01.GetEnumerator();
					local_30 = &local_58;
					while(true) {
						bVar5 = local_58.MoveNext();
						if (!bVar5) {
							local_58.Dispose();
							return;
						}
						if ((MapLight)local_58._current == null) break;
						UVar6.x = (float)local_28._0_4_;
						UVar6.y = (float)local_28._4_4_;
						local_58._current.UpdateCull(UVar6, (float)iVar1);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005509")]
	[Address(RVA = "0x5CD14F0", Offset = "0x5CD04F0", VA = "0x5CD14F0")]
	protected void FixedUpdate()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$FixedUpdate): clean
		CameraDetection pCVar1;

		this.UpdateMapLights();
		pCVar1 = this._detection;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.OnFixedUpdate();
		return;
	}

	[Token(Token = "0x600550A")]
	[Address(RVA = "0x5CD1520", Offset = "0x5CD0520", VA = "0x5CD1520", Slot = "7")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$LateUpdate): 4 lines keep C-only constructs
		sbyte cVar1;
		byte bVar2;
		CustomLogic_CustomLogicManager_StaticFields pCVar3;
		InGameManager pGVar4;
		BaseCharacter pCVar5;
		GeneralInputSettings pSVar6;
		KeybindSetting __this_00;
		InGameMenu pUVar7;
		HUDBottomHandler pUVar8;
		GeneralSettings pSVar9;
		BoolSetting pSVar10;
		BaseCharacter pCVar11;
		bool bVar12;
		int iVar13;
		List<BaseCharacter> __this_01;
		BaseCharacter pCVar14;
		MethodInfo* in_RCX;
		Cycle<InGameCamera.SpecateMode> pUVar15;
		float fVar16;

		if (Il2CppMethodInitialized_07548217 == false) {
			Il2CppMethodInitialized_07548217 = true;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dd154b;
	label_05dd15f7: ;
			pCVar3 = typeof(CustomLogicManager).static_fields;
			cVar1 = pCVar3.Cutscene;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dd15f7;
	label_05dd154b: ;
			pCVar3 = typeof(CustomLogicManager).static_fields;
			cVar1 = pCVar3.Cutscene;
		}
		if (cVar1 != false) {
	label_05dd161b: ;
			this.SyncCustomPosition();
			CameraOcclusion.Clear();
			return;
		}
		if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
			cVar1 = CustomLogicManager.ManualCamera;
		}
		else {
			cVar1 = pCVar3.ManualCamera;
		}
		if (cVar1 != false) goto label_05dd161b;
		pGVar4 = this._inGameManager;
		if (pGVar4 == null) goto label_05dd1a8f;
		pCVar14 = this._follow;
		pCVar5 = pGVar4.CurrentCharacter;
		if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar12 = ((Object)pCVar14 != (Object)pCVar5);
		if (bVar12) {
			pGVar4 = this._inGameManager;
			if (pGVar4 == null) goto label_05dd1a8f;
			pCVar14 = pGVar4.CurrentCharacter;
			bVar12 = ((Object)pCVar14 != null);
			if (bVar12) {
				pGVar4 = this._inGameManager;
				if (pGVar4 == null) goto label_05dd1a8f;
				this.SetFollow(pGVar4.CurrentCharacter, true);
			}
		}
		pGVar4 = this._inGameManager;
		if (pGVar4 == null) goto label_05dd1a8f;
		pCVar14 = pGVar4.CurrentCharacter;
		bVar12 = ((Object)pCVar14 == null);
		if (bVar12) {
			bVar12 = ChatManager.IsChatActive();
			if ((!bVar12) && (bVar12 = InGameMenu.InMenu(), !bVar12)) {
				pSVar6 = this._input;
				if ((pSVar6 == null) ||(__this_00 = pSVar6.ChangeCamera, __this_00 == null)) goto label_05dd1a8f;
				bVar12 = __this_00.GetKeyDown(false);
				if (bVar12) {
					pCVar14 = this._follow;
					bVar12 = ((Object)pCVar14 == null);
					if (bVar12) {
						pUVar15 = this.SpecMode;
						if (pUVar15 == null) goto label_05dd1a8f;
						iVar13 = pUVar15.Current() ;
						if (iVar13 == 0) {
							pUVar15 = this.SpecMode;
							if (pUVar15 == null) goto label_05dd1a8f;
							iVar13 = 2;
							goto label_05dd1818;
						}
					}
					pUVar15 = this.SpecMode;
					if (pUVar15 == null) goto label_05dd1a8f;
					pUVar15.Next();
				}
			}
		}
		else {
			pUVar15 = this.SpecMode;
			if (pUVar15 == null) goto label_05dd1a8f;
			iVar13 = 0;
	label_05dd1818: ;
			pUVar15.Set(iVar13);
		}
		pUVar15 = this.SpecMode;
		if (pUVar15 == null) goto label_05dd1a8f;
		iVar13 = pUVar15.Current();
		if (iVar13 == 2) {
	label_05dd183e: ;
			pCVar14 = null;
	label_05dd18be: ;
			this.SetFollow(pCVar14, true);
		}
		else {
			pCVar14 = this._follow;
			bVar12 = ((Object)pCVar14 == null);
			if (bVar12) {
				__this_01 = this.GetSortedCharacters();
				if (__this_01 == null) goto label_05dd1a8f;
				if (__this_01._size < 1) goto label_05dd183e;
				in_RCX = &MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item;
				pCVar14 = __this_01.get_Item(0);
				goto label_05dd18be;
			}
		}
		pCVar14 = this._follow;
		bVar12 = ((Object)pCVar14 != null);
		if (bVar12) {
			pGVar4 = this._inGameManager;
			if (pGVar4 != null) {
				pCVar5 = this._follow;
				pCVar14 = pGVar4.CurrentCharacter;
				bVar12 = ((Object)pCVar5 == (Object)pCVar14);
				if (bVar12) {
					this.UpdateMain();
					pCVar5 = this._follow;
					if (pCVar5 == null) goto label_05dd1a8f;
					if (pCVar5.Dead != false) {
						pUVar7 = this._menu;
						if ((pUVar7 == null) ||(pUVar8 = pUVar7.HUDBottomHandler, pUVar8 == null)) goto label_05dd1a8f;
						pCVar14 = null;
						pUVar8.SetBottomHUD(null);
					}
				}
				else {
					this.UpdateSpectate();
				}
				pSVar9 = SettingsManager.GeneralSettings;
				if ((pSVar9 != null) &&(pSVar10 = pSVar9.CameraClipping, pSVar10 != null)) {
					if (pSVar10._value == false) {
						pCVar5 = this._follow;
						if (pCVar5 == null) goto label_05dd1a8f;
						pCVar11 = pCVar5.klass;
						bVar2 = (typeof(Human)._2).typeHierarchyDepth;
						if (((bVar2 <= (pCVar11._2).typeHierarchyDepth) &&((pCVar11._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Human))) &&(fVar16 = this.GetCameraDistance(), 0.0 < fVar16)) {
							this.UpdateObstacles();
						}
					}
					pCVar5 = this._follow;
					if (pCVar5 != null) {
						if (pCVar5.Dead != false) {
							pUVar7 = this._menu;
							if ((pUVar7 == null) ||(pUVar8 = pUVar7.HUDBottomHandler, pUVar8 == null)) goto label_05dd1a8f;
							pCVar14 = null;
							pUVar8.SetBottomHUD(null);
						}
	label_05dd1a4f: ;
						this.UpdateOcclusion();
						this.UpdateFOV();
						this.UpdateNapeLockImage();
						return;
					}
				}
			}
		}
		else {
			pUVar15 = this.SpecMode;
			if (pUVar15 != null) {
				pCVar14 = (BaseCharacter)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current;
				iVar13 = pUVar15.Current();
				if (iVar13 == 2) {
					this.UpdateFreeCam();
				}
				goto label_05dd1a4f;
			}
		}
	label_05dd1a8f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600550B")]
	[Address(RVA = "0x5CD3F00", Offset = "0x5CD2F00", VA = "0x5CD3F00")]
	private void UpdateOcclusion()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateOcclusion): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter x;
		InGameManager pGVar2;
		GeneralSettings pSVar3;
		BoolSetting pSVar4;
		Transform pUVar5;
		Camera camera;
		BaseComponentCache pUVar6;
		bool bVar7;
		BaseCharacter method_00;
		float fVar8;
		Vector3 start;
		Vector3 end;
		Vector3 groundOrigin;

		x = this._follow;
		if (x != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (x.klass._2).typeHierarchyDepth) &&((x.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				pGVar2 = this._inGameManager;
				if (pGVar2 == null) {
	label_05dd4142: ;
					throw new NullReferenceException();
				}
				method_00 = pGVar2.CurrentCharacter;
				bVar7 = ((Object)x == (Object)method_00);
				if ((bVar7) && (x.Dead == false)) {
					pSVar3 = SettingsManager.GeneralSettings;
					if ((pSVar3 == null) ||(pSVar4 = pSVar3.CameraClipping, pSVar4 == null)) goto label_05dd4142;
					if (pSVar4._value == false) {
						fVar8 = this.GetCameraDistance();
						if (0.0 < fVar8) {
							if (((*(ulong)((sbyte)x + 0x108)) != null) &&(pUVar5 = *(Transform*)((long)(*(ulong)((sbyte)x + 0x108)) + 0x38), pUVar5 != null)) {
								camera = this.Camera;
								start = pUVar5.position;
								pUVar6 = this.Cache;
								if (pUVar6 != null) {
									pUVar5 = pUVar6.Transform;
									if (pUVar5 != null) {
										end = pUVar5.position;
										pUVar6 = x.Cache;
										if (pUVar6 != null) {
											pUVar5 = pUVar6.Transform;
											if (pUVar5 != null) {
												fVar8 = this._occlusionRadius;
												groundOrigin = pUVar5.position;
												CameraOcclusion.SetCapsule(camera, start, end, fVar8, groundOrigin);
												return;
											}
										}
									}
								}
							}
							goto label_05dd4142;
						}
					}
				}
			}
		}
		CameraOcclusion.Clear();
		return;
	}

	[Token(Token = "0x600550C")]
	[Address(RVA = "0x5CD47C0", Offset = "0x5CD37C0", VA = "0x5CD47C0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$OnDestroy): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07548219 == false) {
			Il2CppMethodInitialized_07548219 = true;
			uVar1 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
			klass = typeof(CameraOcclusion);
		}
		else {
			uVar1 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
			klass = typeof(CameraOcclusion);
		}
		typeof(CameraOcclusion) = (CameraOcclusion)klass;
		if (uVar1 == 0) {
			CameraOcclusion.Clear();
			return;
		}
		CameraOcclusion.Clear();
		return;
	}

	[Token(Token = "0x600550D")]
	[Address(RVA = "0x5CD4820", Offset = "0x5CD3820", VA = "0x5CD4820")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$OnDisable): 7 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Action<T1, T2> pSVar4;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754821a == false) {
			Il2CppMethodInitialized_0754821a = true;
			uVar2 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075481fb == false) {
			Il2CppMethodInitialized_075481fb = true;
			uVar2 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = CameraOcclusion._subscribed;
			klass = typeof(CameraOcclusion);
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(CameraOcclusion)).static_fields + 0xb4);
			klass = typeof(CameraOcclusion);
		}
		if (cVar1 == false) {
			typeof(CameraOcclusion) = (CameraOcclusion)klass;
			return;
		}
		typeof(CameraOcclusion) = (CameraOcclusion)klass;
		CameraOcclusion.RestoreMaterials();
		CameraOcclusion._camera = null;
		CameraOcclusion._radius = 0.0;
		pSVar4 = new Action<ScriptableRenderContext, Camera>(null, (intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
		RenderPipelineManager.remove_beginCameraRendering((Action<ScriptableRenderContext, Camera>)pSVar4);
		pSVar4 = new Action<ScriptableRenderContext, Camera>(null, (intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
		RenderPipelineManager.remove_endCameraRendering((Action<ScriptableRenderContext, Camera>)pSVar4);
		CameraOcclusion._subscribed = false;
		return;
	}

	[Token(Token = "0x600550E")]
	[Address(RVA = "0x5CD4550", Offset = "0x5CD3550", VA = "0x5CD4550")]
	private void UpdateNapeLockImage()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateNapeLockImage): clean
		float fVar1;
		BaseCharacter pCVar2;
		InGameManager pGVar3;
		BaseCharacter y;
		BaseTitan pCVar4;
		InGameMenu pUVar5;
		GameObject pUVar6;
		BaseTitanComponentCache pCVar7;
		BaseCamera pCVar8;
		Camera __this_00;
		bool bVar9;
		Transform pUVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		Vector3 position;
		float fStack_38;
		float fStack_34;

		pCVar2 = this._follow;
		bVar9 = ((Object)pCVar2 != null);
		if (bVar9) {
			pGVar3 = this._inGameManager;
			if (pGVar3 == null) goto label_05dd47af;
			pCVar2 = this._follow;
			y = pGVar3.CurrentCharacter;
			bVar9 = ((Object)pCVar2 == (Object)y);
			if ((bVar9) && (this._napeLock != false)) {
				pCVar4 = this._napeLockTitan;
				bVar9 = ((Object)pCVar4 != null);
				if (bVar9) {
					pUVar5 = this._menu;
					if ((pUVar5 != null) &&(pUVar6 = pUVar5.NapeLock, pUVar6 != null)) {
						pUVar6.SetActive(true);
						pCVar4 = this._napeLockTitan;
						if ((pCVar4 != null) &&((pCVar7 = pCVar4.BaseTitanCache, pCVar7 != null && (pUVar10 = pCVar7.Neck, pUVar10 != null)))) {
							UVar11 = pUVar10.position;
							pCVar4 = this._napeLockTitan;
							if ((pCVar4 != null) &&(pCVar7 = pCVar4.BaseTitanCache, pCVar7 != null)) {
								pUVar10 = pCVar7.Neck;
								if (pUVar10 != null) {
									UVar12 = pUVar10.forward;
									pCVar4 = this._napeLockTitan;
									if (((pCVar4 != null) &&(pCVar8 = SceneLoader.CurrentCamera, pCVar8 != null)) &&(__this_00 = pCVar8.Camera, __this_00 != null)) {
										fVar1 = pCVar4.Size;
										fStack_38 = UVar11.x;
										fStack_34 = UVar11.y;
										position.y = fStack_34 - UVar12.y * fVar1;
										position.x = fStack_38 - UVar12.x * fVar1;
										position.z = UVar11.z - UVar12.z * fVar1;
										UVar11 = __this_00.WorldToScreenPoint(position);
										pUVar5 = this._menu;
										if (pUVar5 != null) {
											pUVar6 = pUVar5.NapeLock;
											if (pUVar6 != null) {
												pUVar10 = pUVar6.transform;
												if (pUVar10 != null) {
													pUVar10.position = UVar11;
													return;
												}
											}
										}
									}
								}
							}
						}
					}
					goto label_05dd47af;
				}
			}
		}
		pUVar5 = this._menu;
		if ((pUVar5 != null) &&(pUVar6 = pUVar5.NapeLock, pUVar6 != null)) {
			pUVar6.SetActive(false);
			return;
		}
	label_05dd47af: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600550F")]
	[Address(RVA = "0x5CD1B20", Offset = "0x5CD0B20", VA = "0x5CD1B20")]
	private void UpdateMain()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateMain): 43 lines keep C-only constructs
		BaseComponentCache* ppUVar1;
		BaseTitan* targetAddress;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		byte bVar7;
		sbyte cVar8;
		int iVar9;
		InputSettings pSVar10;
		HumanInputSettings pSVar11;
		KeybindSetting pSVar12;
		GeneralInputSettings pSVar13;
		IntSetting pSVar14;
		String pSVar15;
		Camera __this_00;
		BaseComponentCache pUVar16;
		BaseCharacter pCVar17;
		UnityEngine_Vector3_StaticFields pUVar18;
		GeneralSettings pSVar19;
		FloatSetting pSVar20;
		BoolSetting pSVar21;
		FloatSetting pSVar22;
		BaseTitanComponentCache pCVar23;
		bool bVar24;
		bool bVar25;
		bool bVar26;
		int iVar27;
		int iVar28;
		int iVar29;
		CustomLogic_CustomLogicManager_StaticFields pCVar30;
		Transform pUVar31;
		Transform __this_01;
		Transform pUVar32;
		BaseTitan pCVar33;
		MethodInfo pMVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		ulong uVar39;
		float fVar40;
		float fVar41;
		Vector3 UVar42;
		Vector3 value;
		Vector3 euler;
		Vector3 euler_00;
		Vector3 UVar43;
		Vector3 value_00;
		Vector3 worldPosition;
		Vector3 value_01;
		Vector3 value_02;
		Quaternion value_03;
		Vector3 axis;
		Vector3 axis_00;
		float local_d8;
		float fStack_d4;
		float local_b8;
		float fStack_b4;
		float fStack_94;
		float fStack_84;
		Quaternion local_68;
		Vector3 local_58;
		byte[] local_48 = new byte[16];

		local_68 = (Quaternion)ZEXT816(0);
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar24 = ChatManager.IsChatActive();
		}
		else {
			bVar24 = ChatManager.IsChatActive();
		}
		if ((!bVar24) && (bVar24 = InGameMenu.InMenu(), !bVar24)) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar30 = typeof(CustomLogicManager).static_fields;
				if ((pCVar30.CameraMode).hasValue == false) goto label_05dd1e41;
	label_05dd1c4e: ;
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
					pCVar30 = typeof(CustomLogicManager).static_fields;
				}
				pMVar34 = MethodInfo_System_Nullable_CameraInputMode_get_Value;
				iVar27 = (pCVar30.CameraMode).Value;
	label_05dd1c7c: ;
				this.CurrentCameraMode = iVar27;
			}
			else {
				pCVar30 = typeof(CustomLogicManager).static_fields;
				if ((pCVar30.CameraMode).hasValue != false) goto label_05dd1c4e;
	label_05dd1e41: ;
				pSVar13 = this._input;
				if ((pSVar13 == null) ||(pSVar12 = pSVar13.ChangeCamera, pSVar12 == null)) goto label_05dd2c08;
				pMVar34 = null;
				bVar24 = pSVar12.GetKeyDown(false);
				if (bVar24) {
					pSVar19 = SettingsManager.GeneralSettings;
					if ((pSVar19 == null) ||(pSVar14 = pSVar19.CameraMode, pSVar14 == null)) goto label_05dd2c08;
					iVar27 = this.CurrentCameraMode;
					iVar9 = pSVar14._value;
					if (iVar27 == 2) {
						iVar27 = (uint)(iVar9 == 3) * 3;
					}
					else if (iVar27 == 1) {
						iVar27 = 2;
					}
					else if (iVar27 == 0) {
						iVar27 = 1;
					}
					else {
						iVar27 = 0;
					}
					goto label_05dd1c7c;
				}
			}
			this.UpdateTitanZoom();
			pSVar10 = SettingsManager.InputSettings;
			if (((pSVar10 == null) ||(pSVar11 = pSVar10.Human, pSVar11 == null)) ||(pSVar12 = pSVar11.NapeLock, pSVar12 == null)) goto label_05dd2c08;
			method = null;
			bVar24 = pSVar12.GetKeyDown(false);
			if ((bVar24) &&(bVar24 = this._napeLock, this._napeLock = (bool)(bVar24 ^ 1), bVar24 == false) ) {
				method = (MethodInfo)this.GetNearestTitan();
				pCVar33 = null;
				bVar24 = ((Object)method == null);
				if (!bVar24) {
					pCVar17 = this._follow;
					if (((pCVar17 == null) ||(pUVar16 = pCVar17.Cache, pUVar16 == null)) ||(pUVar32 = pUVar16.Transform, pUVar32 == null)) goto label_05dd2c08;
					UVar42 = pUVar32.position;
					if ((((BaseTitan)method == null) ||(pUVar16 = (((BaseTitan)method).fields).Cache, pUVar16 == null)) ||(pUVar32 = pUVar16.Transform, pUVar32 == null)) goto label_05dd2c08;
					pCVar33 = null;
					UVar43 = pUVar32.position;
					local_b8 = UVar42.x;
					fStack_b4 = UVar42.y;
					fStack_b4 = fStack_b4 - UVar43.y;
					fVar35 = UVar42.z - UVar43.z;
					local_b8 = local_b8 - UVar43.x;
					fVar35 = fStack_b4 * fStack_b4 + local_b8 * local_b8 + fVar35 * fVar35;
					if (fVar35 < 0.0) {
						fVar35 = sqrtf(fVar35);
					}
					else {
						fVar35 = SQRT(fVar35);
					}
					if (fVar35 < 150.0) {
						this._napeLockTitan = (BaseTitan)method;
						goto label_05dd1f0e;
					}
				}
				method = (MethodInfo)pCVar33;
				this._napeLock = false;
			}
	label_05dd1f0e: ;
			if ((this._napeLock != false) &&(pCVar17 = this._follow, pCVar17 != null)) {
				bVar7 = (typeof(Human)._2).typeHierarchyDepth;
				method = (MethodInfo)(ulong)bVar7;
				if ((bVar7 <= (pCVar17.klass._2).typeHierarchyDepth) &&((pCVar17.klass._2).typeHierarchy [(long)&(((BaseTitan)((long)method + -0x2a0)).fields).field_0x28f] ==typeof(Human))) {
					pSVar15 = (*(ulong)((sbyte)pCVar17 + 0x150));
					if (pSVar15 == null) goto label_05dd2c08;
					if (*(int)&pSVar15[0x13].monitor != 0) {
						this._napeLock = false;
					}
				}
			}
		}
		fVar35 = this.GetCameraDistance();
		__this_00 = this.Camera;
		if (__this_00 == null) goto label_05dd2c08;
		fVar36 = __this_00.fieldOfView;
		if ((fVar35 != 0.0) || (NAN(fVar35))) {
			fVar36 = ((200.0 - fVar36) * fVar35) / 150.0;
			pUVar16 = this.Cache;
		}
		else {
			fVar36 = 0.1;
			pUVar16 = this.Cache;
		}
		if (pUVar16 == null) goto label_05dd2c08;
		local_48 = ZEXT416((uint)fVar36);
		pCVar17 = this._follow;
		if (pCVar17 == null) goto label_05dd2c08;
		pUVar32 = pUVar16.Transform;
		pUVar31 = pCVar17.GetCameraAnchor();
		if ((pUVar31 == null) ||(UVar42 = pUVar31.position, pUVar32 == null)) goto label_05dd2c08;
		ppUVar1 = &this.Cache;
		pUVar32.position = UVar42;
		if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
		pMVar34 = null;
		UVar42 = pUVar32.position;
		pUVar18 = typeof(Vector3).static_fields;
		uVar2 = (pUVar18.upVector).x;
		uVar5 = (pUVar18.upVector).y;
		fVar36 = (pUVar18.upVector).z;
		fVar37 = this.GetHeightDistance();
		pSVar19 = SettingsManager.GeneralSettings;
		if ((pSVar19 == null) ||(pSVar20 = pSVar19.CameraHeight, pSVar20 == null)) goto label_05dd2c08;
		fVar38 = pSVar20._value;
		local_d8 = UVar42.x;
		fStack_d4 = UVar42.y;
		UVar43.x = local_d8 + fVar38 * (float)uVar2 * fVar37;
		UVar43.y = fStack_d4 + fVar38 * (float)uVar5 * fVar37;
		UVar43.z = UVar42.z + fVar36 * fVar37 * fVar38;
		pUVar32.position = UVar43;
		if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
		bVar24 = false;
		UVar42 = pUVar32.position;
		pUVar18 = typeof(Vector3).static_fields;
		uVar3 = (pUVar18.upVector).x;
		uVar6 = (pUVar18.upVector).y;
		fVar35 = (float)(~-(uint)(fVar35 == 0.0) & (uint)(0.6 - fVar35));
		fVar36 = (pUVar18.upVector).z * fVar35;
		value.x = UVar42.x - (fVar35 * (float)uVar3 + fVar35 * (float)uVar3);
		value.y = UVar42.y - (fVar35 * (float)uVar6 + fVar35 * (float)uVar6);
		value.z = UVar42.z - (fVar36 + fVar36);
		pUVar32.position = value;
		if (this._napeLock != false) {
			pCVar33 = this._napeLockTitan;
			bVar24 = ((Object)pCVar33 != null);
		}
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar25 = ChatManager.IsChatActive();
		}
		else {
			bVar25 = ChatManager.IsChatActive();
		}
		if ((!bVar25) && (bVar25 = InGameMenu.InMenu(), !bVar25)) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				cVar8 = CustomLogicManager.CameraLocked;
			}
			else {
				cVar8 = CustomLogicManager.CameraLocked;
			}
			if (cVar8 == false) {
				pSVar19 = SettingsManager.GeneralSettings;
				if ((((pSVar19 == null) ||(pSVar20 = pSVar19.MouseSpeed, pSVar20 == null)) ||(pSVar21 = pSVar19.InvertMouse, pSVar21 == null)) ||((pMVar34 = (MethodInfo)pSVar19.OriginalCameraDeadzone, pMVar34 == null ||(pSVar22 = pSVar19.OriginalCameraSpeed, pSVar22 == null)))) goto label_05dd2c08;
				fVar35 = pSVar20._value;
				bVar25 = pSVar21._value;
				fVar36 = *(float)((long)&pMVar34.name + 4);
				fVar37 = pSVar22._value;
				bVar26 = this.UsesMouseLook;
				if ((this.CurrentCameraMode == 1) && (!bVar26)) {
					iVar28 = Screen.width;
					fVar38 = (float)iVar28;
					fVar41 = (1.0 - fVar36) * 0.5 * fVar38;
					fVar40 = (fVar36 + 1.0) * 0.5 * fVar38;
					UVar42 = CursorManager.GetInGameMousePosition();
					fVar36 = UVar42.x;
					if ((fVar36 < fVar41) || (fVar40 < fVar36)) {
						if (fVar41 <= fVar36) {
							if (fVar36 <= fVar40) goto label_05dd24d2;
							fVar41 = Time.deltaTime;
							if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
							fVar36 = fVar37 * ((fVar36 - fVar40) / fVar38) * fVar41 * fVar35 * 62.0;
						}
						else {
							fVar40 = Time.deltaTime;
							if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
							fVar36 = fVar37 * ((fVar41 - fVar36) / fVar38) * fVar40 * fVar35 * -62.0;
						}
						UVar43 = pUVar32.position;
						fVar37 = UVar43.z;
						axis._0_8_ = il2cpp_runtime_helper_05bbcf10(0);
						axis.z = fVar37;
						pUVar32.RotateAround(UVar43, axis, fVar36);
					}
	label_05dd24d2: ;
					iVar28 = Screen.height;
					iVar29 = Screen.height;
					if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
					local_68 = (Quaternion)pUVar32.rotation;
					UVar43 = Quaternion.Internal_ToEulerRad(ref local_68);
					euler.x = UVar43.x * 57.29578;
					euler.y = UVar43.y * 57.29578;
					euler.z = UVar43.z * 57.29578;
					UVar43 = Quaternion.Internal_MakePositive(euler);
					if (*ppUVar1 == null) goto label_05dd2c08;
					pUVar31 = ((*ppUVar1).fields).Transform;
					fStack_84 = UVar42.y;
					if (pUVar31 == null) goto label_05dd2c08;
					local_68 = (Quaternion)pUVar31.rotation;
					UVar42 = Quaternion.Internal_ToEulerRad(ref local_68);
					euler_00.x = UVar42.x * 57.29578;
					euler_00.y = UVar42.y * 57.29578;
					euler_00.z = UVar42.z * 57.29578;
					UVar42 = Quaternion.Internal_MakePositive(euler_00);
					fStack_94 = UVar43.y;
					local_58.y = fStack_94 * 0.017453292;
					local_58.x = ((((float)iVar28 * 0.6 - fStack_84) * 280.0 * 0.5) / (float)iVar29) * 0.017453292;
					local_58.z = UVar42.z * 0.017453292;
					value_03 = Quaternion.Internal_FromEulerRad(ref local_58);
					pUVar32.rotation = value_03;
				}
				if (bVar24 == false && bVar26) {
					fVar37 = Input.GetAxis("Mouse X");
					fVar36 = Input.GetAxis("Mouse Y");
					fVar36 = fVar36 * -10.0 * fVar35;
					if (bVar25 == false) {
						if (Il2CppMethodInitialized_0753e72c != false) goto label_05dd26cb;
	label_05dd269e: ;
						Il2CppMethodInitialized_0753e72c = true;
						pUVar16 = *ppUVar1;
					}
					else {
						fVar36 = -fVar36;
						if (Il2CppMethodInitialized_0753e72c == false) goto label_05dd269e;
	label_05dd26cb: ;
						pUVar16 = *ppUVar1;
					}
					if ((pUVar16 == null) ||(pUVar32 = pUVar16.Transform, pUVar32 == null)) goto label_05dd2c08;
					uVar4 = (Vector3.upVector).x;
					fVar38 = (Vector3.upVector).z;
					UVar42 = pUVar32.up;
					if (*ppUVar1 == null) goto label_05dd2c08;
					pUVar32 = ((*ppUVar1).fields).Transform;
					if (pUVar32 == null) goto label_05dd2c08;
					UVar43 = pUVar32.right;
					fVar38 = (float)il2cpp_runtime_helper_059fb780(uVar4, fVar38, UVar42._0_8_, UVar42.z, UVar43._0_8_, UVar43.z, 0);
					if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
					UVar42 = pUVar32.position;
					pUVar32.RotateAround(UVar42, (Vector3)(Vector3.upVector), fVar35 * fVar37 * 10.0);
					pUVar16 = *ppUVar1;
					if ((80.0 < fVar36 + fVar38) || (fVar36 + fVar38 < -80.0)) {
						if ((pUVar16 == null) ||(pUVar32 = pUVar16.Transform, pUVar32 == null)) goto label_05dd2c08;
						UVar42 = pUVar32.position;
						fVar35 = UVar42.z;
						if ((*ppUVar1 == null) ||(pUVar31 = ((*ppUVar1).fields).Transform, pUVar31 == null)) goto label_05dd2c08;
						UVar43 = pUVar31.right;
						fVar37 = UVar43.z;
						uVar39 = UVar43._0_8_;
						fVar36 = *(float)(&g_data_0100ac18 + (ulong)(0.0 <= fVar38) * 4) - fVar38;
						local_b8 = UVar42.x;
						fStack_b4 = UVar42.y;
					}
					else {
						if ((pUVar16 == null) ||(pUVar32 = pUVar16.Transform, pUVar32 == null)) goto label_05dd2c08;
						UVar42 = pUVar32.position;
						fVar35 = UVar42.z;
						if ((*ppUVar1 == null) ||(pUVar31 = ((*ppUVar1).fields).Transform, pUVar31 == null)) goto label_05dd2c08;
						UVar43 = pUVar31.right;
						fVar37 = UVar43.z;
						uVar39 = UVar43._0_8_;
						local_b8 = UVar42.x;
						fStack_b4 = UVar42.y;
					}
					UVar42.y = fStack_b4;
					UVar42.x = local_b8;
					UVar42.z = fVar35;
					axis_00.z = fVar37;
					axis_00.x = (float)(int)uVar39;
					axis_00.y = (float)(int)((ulong)uVar39 >> 0x20);
					pUVar32.RotateAround(UVar42, axis_00, fVar36);
				}
			}
		}
		if ((*ppUVar1 != null) &&(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 != null)) {
			UVar42 = pUVar32.position;
			if ((*ppUVar1 != null) &&(pUVar31 = ((*ppUVar1).fields).Transform, pUVar31 != null)) {
				UVar43 = pUVar31.forward;
				fVar35 = this._anchorDistance;
				local_d8 = UVar42.x;
				fStack_d4 = UVar42.y;
				value_00.x = UVar43.x * -10.0 * fVar35 * (float)local_48._0_4_ + local_d8;
				value_00.y = UVar43.y * -10.0 * fVar35 * (float)local_48._0_4_ + fStack_d4;
				value_00.z = UVar43.z * -10.0 * fVar35 * (float)local_48._0_4_ + UVar42.z;
				pUVar32.position = value_00;
				if (bVar24 != false) {
					if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
					UVar42 = pUVar32.eulerAngles;
					value_01.z = UVar42.z;
					pCVar33 = this._napeLockTitan;
					if ((pCVar33 == null) ||(((pCVar23 = pCVar33.BaseTitanCache, pCVar23 == null ||(*ppUVar1 == null)) ||(pCVar17 = this._follow, pCVar17 == null)))) goto label_05dd2c08;
					pUVar32 = pCVar23.Neck;
					pUVar31 = ((*ppUVar1).fields).Transform;
					__this_01 = pCVar17.GetCameraAnchor();
					if (__this_01 == null) goto label_05dd2c08;
					UVar42 = __this_01.position;
					if (pUVar32 == null) goto label_05dd2c08;
					UVar43 = pUVar32.position;
					if (pUVar31 == null) goto label_05dd2c08;
					worldPosition.z = UVar43.z * 0.2 + UVar42.z * 0.8;
					local_b8 = UVar42.x;
					fStack_b4 = UVar42.y;
					worldPosition.x = UVar43.x * 0.2 + local_b8 * 0.8;
					worldPosition.y = UVar43.y * 0.2 + fStack_b4 * 0.8;
					pUVar31.LookAt(worldPosition);
					if ((*ppUVar1 == null) ||(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 == null)) goto label_05dd2c08;
					UVar42 = pUVar32.eulerAngles;
					if ((*ppUVar1 == null) ||(pUVar31 = ((*ppUVar1).fields).Transform, pUVar31 == null)) goto label_05dd2c08;
					targetAddress = &this._napeLockTitan;
					UVar43 = pUVar31.eulerAngles;
					value_01.y = UVar43.y;
					local_b8 = UVar42.x;
					value_01.x = local_b8;
					pUVar32.localEulerAngles = value_01;
					pCVar33 = *targetAddress;
					if (pCVar33 == null) goto label_05dd2c08;
					if (pCVar33.Dead != false) {
						this._napeLockTitan = null;
						this._napeLock = false;
					}
				}
				if ((*ppUVar1 != null) &&(pUVar32 = ((*ppUVar1).fields).Transform, pUVar32 != null)) {
					UVar42 = pUVar32.position;
					if ((*ppUVar1 != null) &&(pUVar31 = ((*ppUVar1).fields).Transform, pUVar31 != null)) {
						UVar43 = pUVar31.right;
						pSVar19 = SettingsManager.GeneralSettings;
						if ((pSVar19 != null) &&(pSVar20 = pSVar19.CameraSide, pSVar20 != null)) {
							fVar35 = pSVar20._value + -1.0;
							local_b8 = UVar42.x;
							fStack_b4 = UVar42.y;
							pMVar34 = null;
							value_02.y = fStack_b4 + UVar43.y * fVar35;
							value_02.x = local_b8 + UVar43.x * fVar35;
							value_02.z = UVar42.z + UVar43.z * fVar35;
							pUVar32.position = value_02;
							this.UpdateShake();
							return;
						}
					}
				}
			}
		}
	label_05dd2c08: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005510")]
	[Address(RVA = "0x5CD2C10", Offset = "0x5CD1C10", VA = "0x5CD2C10")]
	private void UpdateSpectate()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateSpectate): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		Camera __this_00;
		Cycle<InGameCamera.SpecateMode> __this_01;
		Transform pUVar13;
		BaseComponentCache pUVar14;
		UnityEngine_Vector3_StaticFields pUVar15;
		GeneralSettings pSVar16;
		FloatSetting pSVar17;
		BoolSetting pSVar18;
		GeneralInputSettings pSVar19;
		KeybindSetting pSVar20;
		bool bVar21;
		bool bVar22;
		int iVar23;
		uint uVar24;
		int iVar25;
		BaseMovementSync pCVar26;
		Transform pUVar27;
		List<BaseCharacter> pSVar28;
		BaseCharacter pCVar29;
		MethodInfo pMVar30;
		MethodInfo* method_00;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		Quaternion UVar37;
		Vector3 UVar38;
		Vector3 value;
		Vector3 value_00;
		Vector3 euler;
		Vector3 UVar39;
		Vector3 value_01;
		Vector3 value_02;
		float local_b8;
		float fStack_b4;
		float local_88;
		float fStack_84;
		Quaternion local_58;
		Quaternion local_40;
		Quaternion local_30;

		local_58 = (Quaternion)ZEXT816(0);
		fVar32 = this.GetCameraDistance();
		__this_00 = this.Camera;
		if (__this_00 != null) {
			fVar33 = __this_00.fieldOfView;
			pCVar29 = this._follow;
			if (((pCVar29 != null) &&(pCVar26 = pCVar29.GetComponent<BaseMovementSync>(), pCVar26 != null)) &&(__this_01 = this.SpecMode, __this_01 != null)) {
				uVar1 = pCVar26._correctCamera.x;
				uVar7 = pCVar26._correctCamera.y;
				uVar2 = pCVar26._correctCamera.z;
				uVar8 = pCVar26._correctCamera.w;
				iVar23 = __this_01.Current();
				pMVar30 = (MethodInfo)this.Cache;
				if (iVar23 == 1) {
					if ((pMVar30 == null) ||(pCVar29 = this._follow, pCVar29 == null)) goto label_05dd3617;
					pUVar13 = (Transform)pMVar30.invoker_method;
					pUVar27 = pCVar29.GetCameraAnchor();
					if ((pUVar27 == null) ||(UVar38 = pUVar27.position, pUVar13 == null)) goto label_05dd3617;
					pUVar13.position = UVar38;
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
					pMVar30 = null;
					UVar38 = pUVar13.position;
					pUVar15 = typeof(Vector3).static_fields;
					uVar3 = (pUVar15.upVector).x;
					uVar9 = (pUVar15.upVector).y;
					fVar36 = (pUVar15.upVector).z;
					fVar34 = this.GetHeightDistance();
					pSVar16 = SettingsManager.GeneralSettings;
					if ((pSVar16 == null) ||(pSVar17 = pSVar16.CameraHeight, pSVar17 == null)) goto label_05dd3617;
					fVar35 = pSVar17._value;
					local_b8 = UVar38.x;
					fStack_b4 = UVar38.y;
					value.x = local_b8 + fVar35 * (float)uVar3 * fVar34;
					value.y = fStack_b4 + fVar35 * (float)uVar9 * fVar34;
					value.z = UVar38.z + fVar36 * fVar34 * fVar35;
					pUVar13.position = value;
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
					UVar38 = pUVar13.position;
					pUVar15 = typeof(Vector3).static_fields;
					uVar4 = (pUVar15.upVector).x;
					uVar10 = (pUVar15.upVector).y;
					fVar36 = (float)(~-(uint)(fVar32 == 0.0) & (uint)(0.6 - fVar32));
					fVar34 = (pUVar15.upVector).z * fVar36;
					value_00.x = UVar38.x - (fVar36 * (float)uVar4 + fVar36 * (float)uVar4);
					value_00.y = UVar38.y - (fVar36 * (float)uVar10 + fVar36 * (float)uVar10);
					value_00.z = UVar38.z - (fVar34 + fVar34);
					pUVar13.position = value_00;
					pSVar16 = SettingsManager.GeneralSettings;
					if (((pSVar16 == null) ||(pSVar17 = pSVar16.MouseSpeed, pSVar17 == null)) ||(pSVar18 = pSVar16.InvertMouse, pSVar18 == null)) goto label_05dd3617;
					fVar36 = pSVar17._value;
					bVar22 = pSVar18._value;
					bVar21 = InGameMenu.InMenu();
					fVar34 = 0.0;
					if (!bVar21) {
						fVar34 = fVar36;
					}
					fVar36 = Input.GetAxis("Mouse X");
					fVar35 = Input.GetAxis("Mouse Y");
					fVar35 = fVar35 * -10.0 * fVar34;
					if (bVar22 != false) {
						fVar35 = -fVar35;
					}
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
					UVar38 = pUVar13.position;
					pUVar13.RotateAround(UVar38, (Vector3)(Vector3.upVector), fVar34 * fVar36 * 10.0);
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
					local_58 = pUVar13.rotation;
					UVar38 = Quaternion.Internal_ToEulerRad(ref local_58);
					euler.x = UVar38.x * 57.29578;
					euler.y = UVar38.y * 57.29578;
					euler.z = UVar38.z * 57.29578;
					pMVar30 = null;
					UVar38 = Quaternion.Internal_MakePositive(euler);
					fVar36 = fmodf(UVar38.x, 360.0, pMVar30);
					fVar34 = fVar35 + fVar36;
					uVar24 = 1;
					pMVar30 = (MethodInfo)0x1;
					if ((0.0 < fVar35) &&(((260.0 <= fVar36 || (pMVar30 = null, fVar34 <= 260.0)) &&(pMVar30 = (MethodInfo)0x1, fVar36 < 80.0)))) {
						pMVar30 = (MethodInfo)(ulong)(fVar34 <= 80.0);
					}
					if (((fVar35 < 0.0) && ((fVar36 <= 280.0 || (uVar24 = 0, 280.0 <= fVar34)))) &&(uVar24 = 1, 100.0 < fVar36)) {
						uVar24 = (uint)(100.0 <= fVar34);
					}
					if ((uVar24 & (uint)pMVar30) != 0) {
						pUVar14 = this.Cache;
						if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
						UVar38 = pUVar13.position;
						pUVar14 = this.Cache;
						if ((pUVar14 == null) ||(pUVar27 = pUVar14.Transform, pUVar27 == null)) goto label_05dd3617;
						UVar39 = pUVar27.right;
						pUVar13.RotateAround(UVar38, UVar39, fVar35);
					}
				}
				else {
					if ((pMVar30 == null) ||(pUVar13 = (Transform)pMVar30.invoker_method, pUVar13 == null)) goto label_05dd3617;
					UVar37 = pUVar13.rotation;
					fVar36 = Time.deltaTime;
					local_88 = UVar37.x;
					fStack_84 = UVar37.y;
					local_30.z = UVar37.z;
					local_30.w = UVar37.w;
					local_30.x = local_88;
					local_30.y = fStack_84;
					local_40.x = (float)uVar1;
					local_40.y = (float)uVar7;
					local_40.w = (float)uVar8;
					local_40.z = (float)uVar2;
					UVar37 = Quaternion.Internal_Lerp(ref local_30, ref local_40, fVar36 * 10.0);
					pUVar13.rotation = UVar37;
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pCVar29 = this._follow, pCVar29 == null)) goto label_05dd3617;
					pUVar13 = pUVar14.Transform;
					pUVar27 = pCVar29.GetCameraAnchor();
					if ((pUVar27 == null) ||(UVar38 = pUVar27.position, pUVar13 == null)) goto label_05dd3617;
					pUVar13.position = UVar38;
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
					UVar38 = pUVar13.position;
					pUVar15 = typeof(Vector3).static_fields;
					uVar5 = (pUVar15.upVector).x;
					uVar11 = (pUVar15.upVector).y;
					fVar36 = (pUVar15.upVector).z;
					fVar34 = this.GetHeightDistance();
					pSVar16 = SettingsManager.GeneralSettings;
					if ((pSVar16 == null) ||(pSVar17 = pSVar16.CameraHeight, pSVar17 == null)) goto label_05dd3617;
					fVar35 = pSVar17._value;
					local_b8 = UVar38.x;
					fStack_b4 = UVar38.y;
					UVar39.x = local_b8 + fVar35 * (float)uVar5 * fVar34;
					UVar39.y = fStack_b4 + fVar35 * (float)uVar11 * fVar34;
					UVar39.z = UVar38.z + fVar36 * fVar34 * fVar35;
					pUVar13.position = UVar39;
					pUVar14 = this.Cache;
					if ((pUVar14 == null) ||(pUVar13 = pUVar14.Transform, pUVar13 == null)) goto label_05dd3617;
					UVar38 = pUVar13.position;
					pUVar15 = typeof(Vector3).static_fields;
					uVar6 = (pUVar15.upVector).x;
					uVar12 = (pUVar15.upVector).y;
					fVar34 = 0.6 - fVar32;
					fVar36 = (pUVar15.upVector).z * fVar34;
					value_01.x = UVar38.x - (fVar34 * (float)uVar6 + fVar34 * (float)uVar6);
					value_01.y = UVar38.y - (fVar34 * (float)uVar12 + fVar34 * (float)uVar12);
					value_01.z = UVar38.z - (fVar36 + fVar36);
					pUVar13.position = value_01;
				}
				pUVar14 = this.Cache;
				if ((pUVar14 != null) &&(pUVar13 = pUVar14.Transform, pUVar13 != null)) {
					UVar38 = pUVar13.position;
					pUVar14 = this.Cache;
					if ((pUVar14 != null) &&(pUVar27 = pUVar14.Transform, pUVar27 != null)) {
						UVar39 = pUVar27.forward;
						fVar36 = this._anchorDistance;
						if (fVar32 <= 0.3) {
							fVar32 = 0.3;
						}
						fVar32 = ((200.0 - fVar33) * fVar32) / 150.0;
						value_02.z = UVar38.z - fVar36 * UVar39.z * 10.0 * fVar32;
						local_b8 = UVar38.x;
						fStack_b4 = UVar38.y;
						value_02.x = local_b8 - fVar32 * UVar39.x * 10.0 * fVar36;
						value_02.y = fStack_b4 - fVar32 * fVar36 * UVar39.y * 10.0;
						pUVar13.position = value_02;
						bVar22 = InGameMenu.InMenu();
						if (bVar22) {
							return;
						}
						if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
							bVar22 = ChatManager.IsChatActive();
							if (bVar22) {
								return;
							}
						}
						else {
							bVar22 = ChatManager.IsChatActive();
							if (bVar22) {
								return;
							}
						}
						pSVar19 = this._input;
						if ((pSVar19 != null) &&(pSVar20 = pSVar19.SpectateNextPlayer, pSVar20 != null)) {
							bVar22 = pSVar20.GetKeyDown(false);
							if (bVar22) {
								pSVar28 = this.GetSortedCharacters();
								if (pSVar28 == null) goto label_05dd3617;
								if (0 < pSVar28._size) {
									iVar25 = this.GetSpectateIndex(pSVar28);
									iVar23 = 0;
									if (iVar25 + 1 < pSVar28._size) {
										iVar23 = iVar25 + 1;
									}
									pCVar29 = pSVar28.get_Item(iVar23);
									this.SetFollow(pCVar29, true);
								}
							}
							pSVar19 = this._input;
							if ((pSVar19 != null) &&(pSVar20 = pSVar19.SpectatePreviousPlayer, pSVar20 != null)) {
								pMVar30 = null;
								bVar22 = pSVar20.GetKeyDown(false);
								if (bVar22) {
									pSVar28 = this.GetSortedCharacters();
									if (pSVar28 == null) goto label_05dd3617;
									if (0 < pSVar28._size) {
										iVar23 = this.GetSpectateIndex(pSVar28);
										iVar23 = iVar23 + -1;
										if (iVar23 < 0) {
											iVar23 = pSVar28._size + -1;
										}
										method_00 = &MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item;
										pCVar29 = pSVar28.get_Item(iVar23);
										this.SetFollow(pCVar29, true);
									}
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05dd3617: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005511")]
	[Address(RVA = "0x5CD3920", Offset = "0x5CD2920", VA = "0x5CD3920")]
	private void UpdateFreeCam()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateFreeCam): 9 lines keep C-only constructs
		GeneralInputSettings pSVar1;
		KeybindSetting pSVar2;
		Cycle<InGameCamera.SpecateMode> __this_00;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		GeneralSettings pSVar6;
		FloatSetting pSVar7;
		Transform __this_01;
		bool bVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		ulong local_58;
		float local_38;
		float fStack_34;

		bVar8 = InGameMenu.InMenu();
		if (bVar8) {
			return;
		}
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar8 = ChatManager.IsChatActive();
			if (bVar8) {
				return;
			}
		}
		else {
			bVar8 = ChatManager.IsChatActive();
			if (bVar8) {
				return;
			}
		}
		pSVar1 = this._input;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.SpectateNextPlayer, pSVar2 == null)) goto label_05dd3ef9;
		bVar8 = pSVar2.GetKeyDown(false);
		if (!bVar8) {
			pSVar1 = this._input;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.SpectatePreviousPlayer, pSVar2 == null)) goto label_05dd3ef9;
			bVar8 = pSVar2.GetKeyDown(false);
			if (!bVar8) {
				pSVar1 = this._input;
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.Modifier, pSVar2 != null)) {
					local_58._0_4_ = (Vector3.zeroVector).x;
					local_58._4_4_ = (Vector3.zeroVector).y;
					fVar10 = (Vector3.zeroVector).z;
					bVar8 = pSVar2.GetKey(false);
					if (bVar8) {
						fVar9 = 400.0;
					}
					else {
						fVar9 = 200.0;
					}
					pSVar1 = this._input;
					if ((pSVar1 != null) &&(pSVar2 = pSVar1.Forward, pSVar2 != null)) {
						bVar8 = pSVar2.GetKey(false);
						if (bVar8) {
							pUVar4 = this.Cache;
							if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd3ef9;
							UVar12 = pUVar5.forward;
							local_58 = CONCAT44(local_58._4_4_ + UVar12.y, (float)local_58 + UVar12.x);
							fVar10 = fVar10 + UVar12.z;
						}
						else {
							pSVar1 = this._input;
							if ((pSVar1 == null) ||(pSVar2 = pSVar1.Back, pSVar2 == null)) goto label_05dd3ef9;
							bVar8 = pSVar2.GetKey(false);
							if (bVar8) {
								pUVar4 = this.Cache;
								if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd3ef9;
								UVar12 = pUVar5.forward;
								local_58 = CONCAT44(local_58._4_4_ - UVar12.y, (float)local_58 - UVar12.x);
								fVar10 = fVar10 - UVar12.z;
							}
						}
						pSVar1 = this._input;
						if ((pSVar1 != null) &&(pSVar2 = pSVar1.Right, pSVar2 != null)) {
							bVar8 = pSVar2.GetKey(false);
							if (bVar8) {
								pUVar4 = this.Cache;
								if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd3ef9;
								UVar12 = pUVar5.right;
								local_58 = CONCAT44(local_58._4_4_ + UVar12.y, (float)local_58 + UVar12.x);
								fVar10 = fVar10 + UVar12.z;
							}
							else {
								pSVar1 = this._input;
								if ((pSVar1 == null) ||(pSVar2 = pSVar1.Left, pSVar2 == null)) goto label_05dd3ef9;
								bVar8 = pSVar2.GetKey(false);
								if (bVar8) {
									pUVar4 = this.Cache;
									if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd3ef9;
									UVar12 = pUVar5.right;
									local_58 = CONCAT44(local_58._4_4_ - UVar12.y, (float)local_58 - UVar12.x);
									fVar10 = fVar10 - UVar12.z;
								}
							}
							pSVar1 = this._input;
							if ((pSVar1 != null) &&(pSVar2 = pSVar1.Up, pSVar2 != null)) {
								bVar8 = pSVar2.GetKey(false);
								if (bVar8) {
									pUVar4 = this.Cache;
									if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd3ef9;
									UVar12 = pUVar5.up;
									local_58 = CONCAT44(local_58._4_4_ + UVar12.y, (float)local_58 + UVar12.x);
									fVar10 = fVar10 + UVar12.z;
								}
								else {
									pSVar1 = this._input;
									if ((pSVar1 == null) ||(pSVar2 = pSVar1.Down, pSVar2 == null)) goto label_05dd3ef9;
									bVar8 = pSVar2.GetKey(false);
									if (bVar8) {
										pUVar4 = this.Cache;
										if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd3ef9;
										UVar12 = pUVar5.up;
										local_58 = CONCAT44(local_58._4_4_ - UVar12.y, (float)local_58 - UVar12.x);
										fVar10 = fVar10 - UVar12.z;
									}
								}
								pUVar4 = this.Cache;
								if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
									UVar12 = pUVar5.position;
									fVar11 = Time.deltaTime;
									local_38 = UVar12.x;
									fStack_34 = UVar12.y;
									UVar13.x = fVar11 * (float)local_58 * fVar9 + local_38;
									UVar13.y = fVar11 * local_58._4_4_ * fVar9 + fStack_34;
									UVar13.z = fVar10 * fVar11 * fVar9 + UVar12.z;
									pUVar5.position = UVar13;
									pSVar6 = SettingsManager.GeneralSettings;
									if ((pSVar6 != null) &&(pSVar7 = pSVar6.MouseSpeed, pSVar7 != null)) {
										fVar10 = pSVar7._value;
										fVar9 = Input.GetAxis("Mouse X");
										fVar11 = Input.GetAxis("Mouse Y");
										pUVar4 = this.Cache;
										if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
											fVar10 = fVar10 * 10.0;
											UVar12 = pUVar5.position;
											pUVar5.RotateAround(UVar12, (Vector3)(Vector3.upVector), fVar9 * fVar10);
											pUVar4 = this.Cache;
											if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
												UVar12 = pUVar5.position;
												pUVar4 = this.Cache;
												if ((pUVar4 != null) &&(__this_01 = pUVar4.Transform, __this_01 != null) ) {
													UVar13 = __this_01.right;
													pUVar5.RotateAround(UVar12, UVar13, fVar10 * -fVar11);
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
				goto label_05dd3ef9;
			}
		}
		__this_00 = this.SpecMode;
		if (__this_00 != null) {
			__this_00.Next();
			return;
		}
	label_05dd3ef9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005512")]
	[Address(RVA = "0x5CD4880", Offset = "0x5CD3880", VA = "0x5CD4880")]
	private void UpdateTitanZoom()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateTitanZoom): 1 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		BaseCharacter pCVar4;
		GeneralInputSettings pSVar5;
		KeybindSetting pSVar6;
		bool bVar7;
		float fVar8;
		float fVar9;

		pCVar3 = this._follow;
		if (pCVar3 != null) {
			pCVar4 = pCVar3.klass;
			bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar2 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseTitan))) {
				pSVar5 = this._input;
				if ((pSVar5 != null) &&(pSVar6 = pSVar5.ZoomIn, pSVar6 != null)) {
					bVar7 = pSVar6.GetKeyDown(false);
					if (bVar7) {
						fVar8 = -0.1;
					}
					else {
						fVar8 = 0.0;
					}
					pSVar5 = this._input;
					if ((pSVar5 != null) &&(pSVar6 = pSVar5.ZoomOut, pSVar6 != null)) {
						bVar7 = pSVar6.GetKeyDown(false);
						if (bVar7) {
							fVar8 = fVar8 + 0.1;
						}
						if ((fVar8 == 0.0) && (!NAN(fVar8))) {
							return;
						}
						fVar1 = this._cameraDistance;
						fVar8 = fVar8 + this._titanZoom + fVar1;
						fVar9 = 2.0;
						if (fVar8 <= 2.0) {
							fVar9 = fVar8;
						}
						this._titanZoom =(float)(~-(uint)(0.3 <= fVar8) & 0x3e99999a | (uint)fVar9 & -(uint)(0.3 <= fVar8)) - fVar1;
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6005513")]
	[Address(RVA = "0x5CD4EE0", Offset = "0x5CD3EE0", VA = "0x5CD4EE0")]
	private float GetHeightDistance()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetHeightDistance): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		BaseCharacter pCVar3;
		bool bVar4;
		float fVar5;

		fVar5 = this.GetCameraDistance();
		if ((fVar5 == 0.0) && (!NAN(fVar5))) {
			pCVar2 = this._follow;
			bVar4 = ((Object)pCVar2 != null);
			if ((bVar4) && (pCVar2 = this._follow, pCVar2 != null)) {
				pCVar3 = pCVar2.klass;
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3._2).typeHierarchyDepth) &&((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
					return 0.3;
				}
			}
		}
		return this._heightDistance;
	}

	[Token(Token = "0x6005514")]
	[Address(RVA = "0x5CD3620", Offset = "0x5CD2620", VA = "0x5CD3620")]
	private void UpdateObstacles()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateObstacles): 43 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseCharacter pCVar3;
		BaseComponentCache pUVar4;
		byte[] auVar5 = new byte[16];
		bool bVar6;
		int layerMask;
		Transform pUVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		float fVar9;
		uint uVar10;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar11;
		float fVar12;
		float fVar13;
		byte[] auVar14 = new byte[16];
		Vector3 UVar15;
		Vector3 UVar16;
		byte[] local_60 = new byte[12];
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] local_48 = new byte[56];

		local_48._32_4_ = 0.0;
		local_48._36_4_ = 0.0;
		local_48._40_4_ = 0.0;
		local_48._16_4_ = 0.0;
		local_48._20_4_ = 0.0;
		local_48._24_4_ = 0.0;
		local_48._28_4_ = 0.0;
		local_48._0_4_ = 0.0;
		local_48._4_4_ = 0.0;
		local_48._8_4_ = 0.0;
		local_48._12_4_ = 0.0;
		pCVar3 = this._follow;
		if ((pCVar3 == null) ||(pUVar7 = pCVar3.GetCameraAnchor(), pUVar7 == null)) goto label_05dd3914;
		UVar15 = pUVar7.position;
		pUVar4 = this.Cache;
		if (pUVar4 == null) goto label_05dd3914;
		fStack_50 = (float)extraout_XMM0_Dc;
		fStack_4c = (float)extraout_XMM0_Dd;
		pUVar7 = pUVar4.Transform;
		if (pUVar7 == null) goto label_05dd3914;
		UVar16 = pUVar7.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
		}
		else {
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
		}
		local_60._0_4_ = 0.0;
		local_60._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar14._0_4_ = (float)local_60._8_4_ - UVar16.x;
		auVar14._4_4_ = fStack_54 - UVar16.y;
		auVar14._8_4_ = fStack_50 - extraout_XMM0_Dc_00;
		auVar14._12_4_ = fStack_4c - extraout_XMM0_Dd_00;
		fVar13 = UVar15.z - UVar16.z;
		uVar10 = 0;
		fVar9 = fVar13 * fVar13 + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
		if (fVar9 < 0.0) {
			fVar9 = sqrtf(fVar9);
			uVar10 = extraout_XMM0_Db;
			if (1e-05 < fVar9) goto label_05dd379e;
	label_05dd375c: ;
			pUVar8 = typeof(Vector3).static_fields;
			fVar13 = (pUVar8.zeroVector).z;
		}
		else {
			fVar9 = SQRT(fVar9);
			if (fVar9 <= 1e-05) goto label_05dd375c;
	label_05dd379e: ;
			fVar13 = fVar13 / fVar9;
			auVar5._4_4_ = fVar9;
			auVar5._0_4_ = fVar9;
			auVar5._8_4_ = uVar10;
			auVar5._12_4_ = uVar10;
			auVar14 = divps(auVar14, auVar5);
			local_60._0_4_ = auVar14._0_4_;
			local_60._4_4_ = auVar14._4_4_;
			pUVar8 = (UnityEngine_Vector3_StaticFields)local_60;
		}
		uVar1 = (pUVar8.zeroVector).x;
		uVar2 = (pUVar8.zeroVector).y;
		fVar9 = this._anchorDistance;
		fVar11 = fVar9 * (float)uVar1 * -10.0 + (float)local_60._8_4_;
		fVar12 = fVar9 * (float)uVar2 * -10.0 + fStack_54;
		UVar16.z = fVar13 * -10.0 * fVar9 + UVar15.z;
		layerMask = ((LayerMask)(LayerMask)(InGameCamera._clipMask).m_Mask);
		UVar15.x = (float)local_60._8_4_;
		UVar15.y = fStack_54;
		UVar16.x = fVar11;
		UVar16.y = fVar12;
		bVar6 = Physics.Linecast(UVar15, UVar16, (RaycastHit)local_48, layerMask);
		if (!bVar6) {
			return;
		}
		pUVar4 = this.Cache;
		if (pUVar4 != null) {
			pUVar7 = pUVar4.Transform;
			UVar15 = local_48.point;
			if (pUVar7 != null) {
				pUVar7.position = UVar15;
				return;
			}
		}
	label_05dd3914: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005515")]
	[Address(RVA = "0x5CD4150", Offset = "0x5CD3150", VA = "0x5CD4150")]
	private void UpdateFOV()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateFOV): 2 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		BaseCharacter pCVar4;
		GeneralSettings pSVar5;
		FloatSetting pSVar6;
		FloatSetting pSVar7;
		bool bVar8;
		Camera pUVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Vector3 UVar15;
		float local_40;

		pCVar3 = this._follow;
		bVar8 = ((Object)pCVar3 != null);
		if ((bVar8) && (pCVar3 = this._follow, pCVar3 != null)) {
			pCVar4 = pCVar3.klass;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if (((pCVar4._2).typeHierarchyDepth < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) goto label_05dd420b;
			pSVar5 = SettingsManager.GeneralSettings;
			if (((pSVar5 == null) ||(pSVar6 = pSVar5.FOVMin, pSVar6 == null)) ||(pSVar7 = pSVar5.FOVMax, pSVar7 == null)) goto label_05dd453a;
			fVar1 = pSVar6._value;
			local_40 = pSVar7._value;
			fVar12 = this.GetCameraDistance();
			if (fVar12 <= 0.0) {
				pSVar5 = SettingsManager.GeneralSettings;
				if (((pSVar5 == null) ||(pSVar6 = pSVar5.FPSFOVMin, pSVar6 == null)) ||(pSVar7 = pSVar5.FPSFOVMax, pSVar7 == null)) goto label_05dd453a;
				fVar1 = pSVar6._value;
				local_40 = pSVar7._value;
			}
			pCVar3 = this._follow;
			if (pCVar3 == null) goto label_05dd453a;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if (((pCVar3.klass._2).typeHierarchyDepth < bVar2) ||((pCVar3.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
				throw new InvalidCastException();
			}
			UVar15 = pCVar3.GetVelocity();
			fVar12 = UVar15.z * UVar15.z + UVar15.y * UVar15.y + UVar15.x * UVar15.x;
			if (fVar12 < 0.0) {
				fVar12 = sqrtf(fVar12);
			}
			else {
				fVar12 = SQRT(fVar12);
			}
			pUVar9 = this.Camera;
			if (pUVar9 == null) goto label_05dd453a;
			fVar11 = fVar1;
			if (fVar1 <= local_40) {
				fVar11 = local_40;
			}
			fVar14 = fVar1 + fVar12 + -10.0;
			if (fVar14 <= fVar11) {
				fVar11 = fVar14;
			}
			fVar10 = pUVar9.fieldOfView;
			fVar13 = Time.deltaTime;
			fVar13 = fVar13 * 5.0;
			fVar14 = 1.0;
			if (fVar13 <= 1.0) {
				fVar14 = fVar13;
			}
			fVar10 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14) *((float)(~-(uint)(10.0 < fVar12) & (uint)fVar1 | (uint)fVar11 & -(uint)(10.0 < fVar12)) - fVar10) + fVar10;
		}
		else {
	label_05dd420b: ;
			pUVar9 = this.Camera;
			if (pUVar9 == null) goto label_05dd453a;
			fVar10 = pUVar9.fieldOfView;
			pSVar5 = SettingsManager.GeneralSettings;
			if (pSVar5 == null) goto label_05dd453a;
			pSVar6 = pSVar5.FOVMin;
			if (pSVar6 == null) goto label_05dd453a;
			fVar1 = pSVar6._value;
			fVar11 = Time.deltaTime;
			fVar11 = fVar11 * 5.0;
			fVar12 = 1.0;
			if (fVar11 <= 1.0) {
				fVar12 = fVar11;
			}
			fVar10 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar12) * (fVar1 - fVar10) + fVar10;
		}
		pUVar9.fieldOfView = fVar10;
		if (CustomLogicManager.CameraFOV <= 0.0) {
			return;
		}
		pUVar9 = this.Camera;
		if (pUVar9 != null) {
			pUVar9.fieldOfView = CustomLogicManager.CameraFOV;
			return;
		}
	label_05dd453a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005516")]
	[Address(RVA = "0x5CD1AA0", Offset = "0x5CD0AA0", VA = "0x5CD1AA0")]
	private void FindNextSpectate()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$FindNextSpectate): 2 lines keep C-only constructs
		List<BaseCharacter> __this_00;
		BaseCharacter character;
		MethodInfo* method_00;

		__this_00 = this.GetSortedCharacters();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (__this_00._size < 1) {
			this.SetFollow(null, true);
			return;
		}
		method_00 = &MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item;
		character = __this_00.get_Item(0);
		this.SetFollow(character, true);
		return;
	}

	[Token(Token = "0x6005517")]
	[Address(RVA = "0x5CD5950", Offset = "0x5CD4950", VA = "0x5CD5950")]
	private int GetSpectateIndex(List<BaseCharacter> characters)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetSpectateIndex): clean
		BaseCharacter pCVar1;
		bool bVar2;
		BaseCharacter x;
		int index;

		pCVar1 = this._follow;
		bVar2 = ((Object)pCVar1 == null);
		if (!bVar2) {
			if (characters == null) {
				throw new NullReferenceException();
			}
			if (0 < characters._size) {
				index = 0;
				do {
					x = characters.get_Item(index);
					pCVar1 = this._follow;
					bVar2 = ((Object)x == (Object)pCVar1);
					if (bVar2) {
						return index;
					}
					index = index + 1;
				} while (index < characters._size);
			}
		}
		return -1;
	}

	[Token(Token = "0x6005518")]
	[Address(RVA = "0x5CD4FA0", Offset = "0x5CD3FA0", VA = "0x5CD4FA0")]
	private float GetSensitivityDeltaTime(float sensitivity)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetSensitivityDeltaTime): clean
		float fVar1;

		fVar1 = Time.deltaTime;
		return fVar1 * sensitivity * 62.0;
	}

	[Token(Token = "0x6005519")]
	[Address(RVA = "0x5CD4FC0", Offset = "0x5CD3FC0", VA = "0x5CD4FC0")]
	private void GetLookInput(float sensitivity, int invertY, out float inputX, out float inputY)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetLookInput): clean
		float fVar1;

		fVar1 = Input.GetAxis("Mouse X");
		*inputX = fVar1 * 10.0 * sensitivity;
		fVar1 = Input.GetAxis("Mouse Y");
		*inputY = (float)invertY * fVar1 * -10.0 * sensitivity;
		return;
	}

	[Token(Token = "0x600551A")]
	[Address(RVA = "0x5CD5A50", Offset = "0x5CD4A50", VA = "0x5CD5A50")]
	private void GetFreeCamLookInput(float camSpeed, out float inputX, out float inputY)
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetFreeCamLookInput): clean
		float fVar1;

		fVar1 = Input.GetAxis("Mouse X");
		*inputX = fVar1 * camSpeed;
		fVar1 = Input.GetAxis("Mouse Y");
		*inputY = fVar1 * camSpeed;
		return;
	}

	[Token(Token = "0x600551B")]
	[Address(RVA = "0x5CD49B0", Offset = "0x5CD39B0", VA = "0x5CD49B0")]
	private BaseTitan GetNearestTitan()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetNearestTitan): 24 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameManager __this_00;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		BaseCharacter pCVar5;
		BaseTitanComponentCache pCVar6;
		BaseComponentCache pUVar7;
		Transform __this_01;
		Transform __this_02;
		bool bVar8;
		object pIVar9;
		VirtualInvokeData pVVar10;
		BaseTitan a;
		ulong uVar11;
		long lVar12;
		float fVar13;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar14;
		object local_a0;
		float local_94;
		BaseTitan local_90;
		object* local_80;
		byte[] local_78 = new byte[16];
		float local_68;
		float local_58;
		byte[] local_48 = new byte[24];

		if (Il2CppMethodInitialized_07548227 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerable<BaseCharacter>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerator<BaseCharacter>)) ;
			Il2CppMethodInitialized_07548227 = true;
		}
		local_a0 = null;
		__this_00 = this._inGameManager;
		if ((__this_00 == null) ||(pIVar9 = (object)__this_00.GetAllCharactersEnumerable(), pIVar9 == null)) {
			throw new NullReferenceException();
		}
		pIVar3 = pIVar9.klass;
		uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
		local_a0 = pIVar9.Dispose();
		local_80 = &local_a0;
		local_94 = INFINITY;
		a = null;
		do {
	label_05dd4af0: ;
			do {
				do {
					do {
						do {
							pIVar9 = local_a0;
							if (local_a0 == null) {
								throw new NullReferenceException();
							}
							pIVar3 = local_a0.klass;
							uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
							bVar8 = pIVar9.Dispose();
							pIVar9 = local_a0;
							if (!bVar8) {
								if (local_a0 == null) {
									return local_90;
								}
								pIVar3 = local_a0.klass;
								uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
								if (uVar11 == 0) goto label_05dd4dff;
								pIVar4 = (pIVar3._1).interfaceOffsets;
								lVar12 = 0;
								goto label_05dd4df0;
							}
							if (local_a0 == null) {
								throw new NullReferenceException();
							}
							pIVar3 = local_a0.klass;
							uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
							a = (BaseTitan)pIVar9.Dispose();
						} while (a == null);
						bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
					} while (((a.klass._2).typeHierarchyDepth < bVar1) ||((a.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseTitan)));
					pCVar5 = this._follow;
					bVar8 = TeamInfo.SameTeam((BaseCharacter)a, pCVar5);
				} while (bVar8);
				bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if (((a.klass._2).typeHierarchyDepth < bVar1) ||((a.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseTitan))) {
					throw new InvalidCastException();
				}
				pCVar6 = a.BaseTitanCache;
				if (pCVar6 == null) {
					throw new NullReferenceException();
				}
				pCVar5 = this._follow;
				if (pCVar5 == null) {
					throw new NullReferenceException();
				}
				pUVar7 = pCVar5.Cache;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				__this_01 = pUVar7.Transform;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_02 = pCVar6.Neck;
				UVar14 = __this_01.position;
				local_58 = UVar14.z;
				local_48._8_4_ = extraout_XMM0_Dc;
				local_48._0_8_ = UVar14._0_8_;
				local_48._12_4_ = extraout_XMM0_Dd;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				UVar14 = __this_02.position;
				local_68 = UVar14.z;
				local_78._8_4_ = extraout_XMM0_Dc_00;
				local_78._0_8_ = UVar14._0_8_;
				local_78._12_4_ = extraout_XMM0_Dd_00;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					Il2CppMethodInitialized_0753e7b7 = true;
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				fVar13 = ((float)local_48._4_4_ - (float)local_78._4_4_) *((float)local_48._4_4_ - (float)local_78._4_4_) +((float)local_48._0_4_ - (float)local_78._0_4_) *((float)local_48._0_4_ - (float)local_78._0_4_) + (local_58 - local_68) * (local_58 - local_68) ;
				if (0.0 <= fVar13) {
					fVar13 = SQRT(fVar13);
					if (fVar13 < local_94) break;
					goto label_05dd4af0;
				}
				fVar13 = sqrtf(fVar13);
			} while (local_94 <= fVar13);
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (((a.klass._2).typeHierarchyDepth < bVar1) ||(local_94 = fVar13,(a.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseTitan))) {
				throw new InvalidCastException();
			}
		} while(true);
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
	label_05dd4df0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar10 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar12);
				goto label_05dd4e1d;
			}
		}
	label_05dd4dff: ;
	label_05dd4e1d: ;
		pIVar9.Dispose();
		return local_90;
	}

	[Token(Token = "0x600551C")]
	[Address(RVA = "0x5CD5210", Offset = "0x5CD4210", VA = "0x5CD5210")]
	private List<BaseCharacter> GetSortedCharacters()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$GetSortedCharacters): 27 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		InGameManager pGVar3;
		HashSet<@object> pSVar4;
		BaseCharacter[] pCVar5;
		object @object;
		MethodInfo pMVar6;
		bool bVar7;
		List<BaseCharacter> pSVar8;
		Cameras_InGameCamera___c_StaticFields pCVar9;
		Func<BaseCharacter, int> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o source;
		byte[] local_a0 = new byte[16];
		BaseCharacter local_90;
		byte[] local_88 = new byte[8];
		ulong uStack_80;
		BaseCharacter local_78;
		byte[] local_68 = new byte[8];
		BaseCharacter local_58;
		byte[] local_48 = new byte[8];
		BaseCharacter local_38;

		if (Il2CppMethodInitialized_07548228 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_InGameCamera_c_GetSortedCharacters_b__68_0) ;
			Il2CppMethodInitialized_07548228 = true;
		}
		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		local_88 = (byte[])0x0;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		local_78 = null;
		pSVar8 = new List<BaseCharacter>();
		pGVar3 = this._inGameManager;
		if ((pGVar3 != null) &&(pSVar4 = (HashSet<@object>)pGVar3.Humans, pSVar4 != null)) {
			local_a0.GetEnumerator(pSVar4);
			local_38 = local_90;
			local_48 = (byte[])local_a0._0_8_;
			local_a0._0_8_ = null;
			local_a0._8_8_ = local_48;
			if (pSVar8 == null) {
				do {
					bVar7 = local_48.MoveNext();
					if (!bVar7) goto label_05dd54ab;
					if (local_38 == null) goto label_05dd5812;
				} while (local_38.AI != false);
	label_05dd54a6: ;
				throw new NullReferenceException();
			}
			while (true) {
				bVar7 = local_48.MoveNext();
				pMVar6 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add;
				if (!(bVar7)) break;
				if (local_38 == null) {
	label_05dd5812: ;
					throw new NullReferenceException();
				}
				if (local_38.AI == false) {
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					pCVar5 = pSVar8._items;
					if (pCVar5 == null) goto label_05dd54a6;
					uVar2 = pSVar8._size;
					if (uVar2 < (uint)pCVar5.Length) {
						pSVar8._size = uVar2 + 1;
						pCVar5[(int)uVar2] = local_38;
					}
					else {
						pSVar8.AddWithResize((object)local_38);
					}
				}
			}
	label_05dd54ab: ;
			local_48.Dispose();
			pGVar3 = this._inGameManager;
			if ((pGVar3 != null) &&(pSVar4 = (HashSet<@object>)pGVar3.Shifters, pSVar4 != null)) {
				local_a0.GetEnumerator(pSVar4);
				local_58 = local_90;
				local_68 = (byte[])local_a0._0_8_;
				local_a0._0_8_ = null;
				local_a0._8_8_ = local_68;
				if (pSVar8 == null) {
					do {
						bVar7 = local_68.MoveNext();
						if (!bVar7) goto label_05dd55eb;
						if (local_58 == null) goto label_05dd5817;
					} while (local_58.AI != false);
	label_05dd55e6: ;
					throw new NullReferenceException();
				}
				while (true) {
					bVar7 = local_68.MoveNext();
					pMVar6 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add;
					if (!(bVar7)) break;
					if (local_58 == null) {
	label_05dd5817: ;
						throw new NullReferenceException();
					}
					if (local_58.AI == false) {
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						pCVar5 = pSVar8._items;
						if (pCVar5 == null) goto label_05dd55e6;
						uVar2 = pSVar8._size;
						if (uVar2 < (uint)pCVar5.Length) {
							pSVar8._size = uVar2 + 1;
							pCVar5[(int)uVar2] = local_58;
						}
						else {
							pSVar8.AddWithResize((object)local_58);
						}
					}
				}
	label_05dd55eb: ;
				local_68.Dispose();
				pGVar3 = this._inGameManager;
				if ((pGVar3 != null) &&(pSVar4 = (HashSet<@object>)pGVar3.Titans, pSVar4 != null)) {
					local_a0.GetEnumerator(pSVar4);
					local_78 = local_90;
					local_88 = (byte[])local_a0._0_8_;
					uStack_80 = (byte)local_a0._8_8_;
					local_a0._0_8_ = null;
					local_a0._8_8_ = local_88;
					if (pSVar8 == null) {
						do {
							bVar7 = local_88.MoveNext();
							if (!bVar7) goto label_05dd572b;
							if (local_78 == null) goto label_05dd581c;
						} while (local_78.AI != false);
	label_05dd5726: ;
						throw new NullReferenceException();
					}
					do {
						do {
							bVar7 = local_88.MoveNext();
							pMVar6 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add;
							if (!bVar7) {
	label_05dd572b: ;
								local_88.Dispose();
								if ((typeof(InGameCamera.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar9 = typeof(InGameCamera.c).static_fields;
									__this_00 = pCVar9.__9__68_0;
								}
								else {
									pCVar9 = typeof(InGameCamera.c).static_fields;
									__this_00 = pCVar9.__9__68_0;
								}
								if (__this_00 == null) {
									if (((typeof(InGameCamera.c))._2).cctor_finished_or_no_cctor == 0) {
										pCVar9 = typeof(InGameCamera.c).static_fields;
									}
									@object = (object)pCVar9.__9;
									__this_00 = new Func<BaseCharacter, int>(@object, (intptr_t)MethodInfo_Cameras_InGameCamera_c_GetSortedCharacters_b__68_0);
									pCVar9 = typeof(InGameCamera.c).static_fields;
									pCVar9.__9__68_0 = __this_00;
								}
								source = Enumerable.OrderBy<BaseCharacter, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8, (System_Func_TSource__TKey__o)__this_00);
								pSVar8 = (List<BaseCharacter>)Enumerable.ToList<BaseCharacter>((System_Collections_Generic_IEnumerable_TSource__o)source);
								return pSVar8;
							}
							if (local_78 == null) {
	label_05dd581c: ;
								throw new NullReferenceException();
							}
						} while (local_78.AI != false);
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						pCVar5 = pSVar8._items;
						if (pCVar5 == null) goto label_05dd5726;
						uVar2 = pSVar8._size;
						if (uVar2 < (uint)pCVar5.Length) {
							pSVar8._size = uVar2 + 1;
							pCVar5[(int)uVar2] = local_78;
						}
						else {
							pSVar8.AddWithResize((object)local_78);
						}
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600551D")]
	[Address(RVA = "0x5CD5060", Offset = "0x5CD4060", VA = "0x5CD5060")]
	private void UpdateShake()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$UpdateShake): 2 lines keep C-only constructs
		bool pbVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		BaseComponentCache pUVar6;
		UnityEngine_Vector3_StaticFields pUVar7;
		Transform __this_00;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 UVar11;

		fVar10 = this._shakeTimeLeft;
		if (0.0 < fVar10) {
			fVar8 = Time.deltaTime;
			this._shakeTimeLeft = fVar10 - fVar8;
			pUVar6 = this.Cache;
			if (this._shakeFlip == false) {
				if ((pUVar6 == null) ||(__this_00 = pUVar6.Transform, __this_00 == null)) goto label_05dd5209;
				UVar11 = __this_00.position;
				pUVar7 = typeof(Vector3).static_fields;
				uVar3 = (pUVar7.upVector).x;
				uVar5 = (pUVar7.upVector).y;
				fVar10 = this._currentShakeDistance;
				fVar8 = UVar11.x - fVar10 * (float)uVar3;
				fVar9 = UVar11.y - fVar10 * (float)uVar5;
				fVar10 = UVar11.z - (pUVar7.upVector).z * fVar10;
			}
			else {
				if ((pUVar6 == null) ||(__this_00 = pUVar6.Transform, __this_00 == null)) {
	label_05dd5209: ;
					throw new NullReferenceException();
				}
				UVar11 = __this_00.position;
				pUVar7 = typeof(Vector3).static_fields;
				uVar2 = (pUVar7.upVector).x;
				uVar4 = (pUVar7.upVector).y;
				fVar10 = this._currentShakeDistance;
				fVar8 = UVar11.x + fVar10 * (float)uVar2;
				fVar9 = UVar11.y + fVar10 * (float)uVar4;
				fVar10 = UVar11.z + (pUVar7.upVector).z * fVar10;
			}
			UVar11.y = fVar9;
			UVar11.x = fVar8;
			UVar11.z = fVar10;
			__this_00.position = UVar11;
			pbVar1 = &this._shakeFlip;
			*pbVar1 = (bool)(*pbVar1 ^ 1);
			fVar10 = Time.deltaTime;
			this._currentShakeDistance =(fVar10 * -0.15 * 60.0 + 1.0) * this._currentShakeDistance;
		}
		return;
	}

	[Token(Token = "0x600551E")]
	[Address(RVA = "0x5CD5AD0", Offset = "0x5CD4AD0", VA = "0x5CD5AD0")]
	public InGameCamera()
	{
		// Lifted from source/cpp/Cameras/InGameCamera.c (Cameras.InGameCamera$$.ctor): clean
		Cycle<InGameCamera.SpecateMode> __this_00;

		__this_00 = new Cycle<InGameCamera.SpecateMode>();
		this.SpecMode = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Cameras/InGameCamera.c.

	// Cameras.InGameCamera$$.cctor: clean
	static InGameCamera()
	{
		int iVar1;
		LayerMask UVar3;
		Int32[] layers;

		layers = (Int32[])new int[2];
		if (layers == null) {
			throw new NullReferenceException();
		}
		iVar1 = (int)layers.Length;
		if (iVar1 != 0) {
			layers[0] = PhysicsLayer.MapObjectAll;
			if (iVar1 != 1) {
				layers[1] = PhysicsLayer.MapObjectEntities;
				UVar3 = PhysicsLayer.GetMask(layers);
				(InGameCamera._clipMask).m_Mask = (int32_t)UVar3.m_Mask;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Cameras.InGameCamera.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new InGameCamera.c();
		InGameCamera.c.__9 = (InGameCamera.c)__this;
		return;
	}

	// Cameras.InGameCamera.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Cameras.InGameCamera.<>c$$<GetSortedCharacters>b__68_0: clean
	private int c__GetSortedCharacters_b__68_0(BaseCharacter x)
	{
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Player pPVar3;

		if ((((x == null) ||(pUVar1 = x.Cache, pUVar1 == null)) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) ||(pPVar3 = pPVar2._Owner_k__BackingField, pPVar3 == null)) {
			throw new NullReferenceException();
		}
		return pPVar3.actorNumber;
	}
}
