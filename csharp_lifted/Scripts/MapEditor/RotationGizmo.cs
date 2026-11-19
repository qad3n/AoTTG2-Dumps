// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.RotationGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/RotationGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/RotationGIzmo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000150")]
internal class RotationGizmo : BaseGizmo
{
	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x48")]
	private Transform _circleX;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x50")]
	private Transform _circleY;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x58")]
	private Transform _circleZ;

	[Token(Token = "0x40007AC")]
	[FieldOffset(Offset = "0x60")]
	private Color SelectedColor;

	[Token(Token = "0x40007AD")]
	[FieldOffset(Offset = "0x70")]
	private Color CircleXColor;

	[Token(Token = "0x40007AE")]
	[FieldOffset(Offset = "0x80")]
	private Color CircleYColor;

	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x90")]
	private Color CircleZColor;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0xA0")]
	private Transform _activeCircle;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0xA8")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0xB4")]
	private float _currentAngle;

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x5CB2BD0", Offset = "0x5CB1BD0", VA = "0x5CB2BD0")]
	public static RotationGizmo Create()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$Create): clean
		String path;
		GameObject __this;
		RotationGizmo pMVar1;

		path = ResourcePaths.Map;
		__this = ResourceManager.InstantiateAsset<GameObject>(path, "Gizmos/RotationGizmo", false, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pMVar1 = __this.AddComponent<RotationGizmo>();
		__this.SetActive(false);
		return pMVar1;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x5CB2CC0", Offset = "0x5CB1CC0", VA = "0x5CB2CC0", Slot = "4")]
	public override bool IsActive()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$IsActive): clean
		Transform x;
		bool bVar1;

		x = this._activeCircle;
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x5CB2D10", Offset = "0x5CB1D10", VA = "0x5CB2D10", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$Awake): 1 lines keep C-only constructs
		Transform pUVar1;
		RotationGizmo __this_00;

		this.Awake();
		pUVar1 = this._transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("CircleX");
			this._circleX = pUVar1;
			pUVar1 = this._transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("CircleY");
				this._circleY = pUVar1;
				pUVar1 = this._transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("CircleZ");
					__this_00 = (RotationGizmo)&this._circleZ;
					this._circleZ = pUVar1;
					__this_00.SetCircleColor(this._circleX, (Color)this.CircleXColor);
					__this_00.SetCircleColor(this._circleY, (Color)this.CircleYColor);
					__this_00.SetCircleColor(this._circleZ, (Color)this.CircleZColor);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x5CB2E80", Offset = "0x5CB1E80", VA = "0x5CB2E80", Slot = "7")]
	public override void OnSelectionChange()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$OnSelectionChange): clean
		MapEditorGameManager pGVar1;
		HashSet<MapObject> pSVar2;
		BaseGizmo x;
		bool bVar3;
		GameObject pUVar4;
		RotationGizmo __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(pSVar2 = pGVar1.SelectedObjects, pSVar2 != null)) {
			if (0 < pSVar2._count) {
				x = pGVar1.CurrentGizmo;
				bVar3 = ((Object)x == (Object)this);
				if (bVar3) {
					pUVar4 = this.gameObject;
					if (pUVar4 != null) {
						pUVar4.SetActive(true);
						__this_00 = this;
						this.ResetCenter();
						__this_00.SetCircleColor(this._circleX, (Color)this.CircleXColor);
						__this_00.SetCircleColor(this._circleY, (Color)this.CircleYColor);
						__this_00.SetCircleColor(this._circleZ, (Color)this.CircleZColor);
						return;
					}
					goto label_05db2f98;
				}
			}
			pUVar4 = this.gameObject;
			if (pUVar4 != null) {
				pUVar4.SetActive(false);
				return;
			}
		}
	label_05db2f98: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x5CB32D0", Offset = "0x5CB22D0", VA = "0x5CB32D0", Slot = "6")]
	protected override void Update()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$Update): 101 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		InputSettings pSVar9;
		MapEditorInputSettings pSVar10;
		BaseCamera pCVar11;
		KeybindSetting selectKey;
		Camera pUVar12;
		MapEditorSettings pSVar13;
		FloatSetting pSVar14;
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		double dVar17;
		Ray ray;
		Vector3 pos;
		uint uVar18;
		uint uVar19;
		bool bVar20;
		LayerMask mask;
		int layerMask;
		Int32[] layers;
		Collider __this_00;
		Transform pUVar21;
		List<MapObject> mapObjects;
		TransformPositionRotationCommand __this_01;
		UnityEngine_Vector3_StaticFields pUVar22;
		MethodInfo method_07;
		RotationGizmo __this_02;
		MapEditorGameManager pGVar23;
		Il2CppClass klass;
		MethodInfo method_08;
		UnityEngine_Vector3_StaticFields __return_storage_ptr__;
		float fVar24;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint uVar25;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd_00;
		float fVar26;
		float fVar27;
		byte[] auVar28 = new byte[16];
		float fVar29;
		float fVar30;
		byte[] auVar31 = new byte[16];
		Vector3 UVar32;
		Vector3 from;
		Vector3 center;
		Vector3 to;
		Vector3 axis;
		float fStack_12c;
		float fStack_128;
		byte[] auStack_e0 = new byte[28];
		float fStack_c4;
		byte[] auStack_b8 = new byte[8];
		byte[] auStack_a8 = new byte[16];
		Vector3 UStack_98;
		Vector3 UStack_88;
		ulong uStack_78;
		ulong uStack_70;
		RaycastHit UStack_68;

		UStack_68.m_UV.x = 0.0;
		UStack_68.m_UV.y = 0.0;
		UStack_68.m_Collider.m_Data = (EntityId)0x0;
		UStack_68.m_Normal.y = 0.0;
		UStack_68.m_Normal.z = 0.0;
		UStack_68.m_FaceID = 0;
		UStack_68.m_Distance = 0.0;
		UStack_68.m_Point.x = 0.0;
		UStack_68.m_Point.y = 0.0;
		UStack_68.m_Point.z = 0.0;
		UStack_68.m_Normal.x = 0.0;
		UStack_88.z = 0.0;
		UStack_88.x = 0.0;
		UStack_88.y = 0.0;
		UStack_98.z = 0.0;
		UStack_98.x = 0.0;
		UStack_98.y = 0.0;
		this.Update();
		pSVar9 = SettingsManager.InputSettings;
		if ((pSVar9 == null) ||(pSVar10 = pSVar9.MapEditor, pSVar10 == null)) goto label_05db3f56;
		pCVar11 = SceneLoader.CurrentCamera;
		selectKey = pSVar10.Select;
		pUVar21 = this._activeCircle;
		__this_02 = (RotationGizmo)&this._activeCircle;
		bVar20 = ((Object)pUVar21 == null);
		if (bVar20) {
			bVar20 = this.TryGetPointerDown(selectKey, ref UStack_88);
			if (!bVar20) {
	label_05db3879: ;
				this._currentAngle = 0.0;
				return;
			}
			if ((pCVar11 != null) &&(pUVar12 = pCVar11.Camera, pUVar12 != null)) {
				UVar32.z = UStack_88.z;
				UVar32.x = UStack_88.x;
				UVar32.y = UStack_88.y;
				auStack_e0.ScreenPointToRay(pUVar12, UVar32);
				layers = (Int32[])new int[1];
				if (layers != null) {
					if ((int)layers.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					layers[0] = PhysicsLayer.MapEditorGizmo;
					mask = PhysicsLayer.GetMask(layers);
					layerMask = ((LayerMask)mask);
					ray.m_Direction.z = (float)auStack_e0._20_4_;
					ray.m_Direction.y = (float)auStack_e0._16_4_;
					ray.m_Direction.x = (float)auStack_e0._12_4_;
					ray.m_Origin.z = (float)auStack_e0._8_4_;
					ray.m_Origin.x = (float)auStack_e0._0_4_;
					ray.m_Origin.y = (float)auStack_e0._4_4_;
					bVar20 = Physics.Raycast(ray, ref UStack_68, 100000.0, layerMask);
					if (!bVar20) {
						this.CancelPointer();
						goto label_05db3879;
					}
					__this_00 = UStack_68.collider;
					if ((__this_00 != null) &&(pUVar21 = __this_00.transform, pUVar21 != null)) {
						pUVar21 = pUVar21.parent;
						this._activeCircle = pUVar21;
						__this_02.SetCircleColor(this._circleX, (Color)this.CircleXColor);
						__this_02.SetCircleColor(this._circleY, (Color)this.CircleYColor);
						__this_02.SetCircleColor(this._circleZ, (Color)this.CircleZColor);
						__this_02.SetCircleColor(this._activeCircle, (Color)this.SelectedColor);
						UVar32 = UStack_68.point;
						this._previousMousePoint.x = UVar32.x;
						this._previousMousePoint.y = UVar32.y;
						this._previousMousePoint.z = UVar32.z;
						pGVar23 = this._gameManager;
						if (pGVar23 != null) {
							pGVar23.SetupTemporaryPhysicalParenting();
							this._currentAngle = 0.0;
							return;
						}
					}
				}
			}
			goto label_05db3f56;
		}
		bVar20 = this.IsPointerHeld(selectKey, ref UStack_98);
		if (bVar20) {
			if ((pCVar11 == null) ||(pUVar12 = pCVar11.Camera, pUVar12 == null)) goto label_05db3f56;
			pos.z = UStack_98.z;
			pos.x = UStack_98.x;
			pos.y = UStack_98.y;
			__return_storage_ptr__ = (UnityEngine_Vector3_StaticFields)auStack_e0;
			__return_storage_ptr__.ScreenPointToRay(pUVar12, pos);
			uVar2 = this._previousMousePoint.x;
			uVar5 = this._previousMousePoint.y;
			uStack_78 = (Il2CppMethodPointer)auStack_e0._0_8_;
			uStack_70._0_4_ = 0.0;
			uStack_70._4_4_ = 0.0;
			fVar29 = (float)uVar2 - auStack_e0._0_4_;
			fVar30 = (float)uVar5 - auStack_e0._4_4_;
			fVar27 = this._previousMousePoint.z - (float)auStack_e0._8_4_;
			unique0x100007fb = (sbyte)CONCAT44(fVar30, fVar29);
			if (Il2CppMethodInitialized_075450a4 == false) {
				Il2CppMethodInitialized_075450a4 = true;
				fVar29 = (float)auStack_e0._24_4_;
				fVar30 = fStack_c4;
			}
			fVar24 = (float)auStack_e0._20_4_ * (float)auStack_e0._20_4_ +(float)auStack_e0._16_4_ * (float)auStack_e0._16_4_ +(float)auStack_e0._12_4_ * (float)auStack_e0._12_4_;
			auStack_a8._0_4_ = fVar27 * fVar27 + fVar30 * fVar30 + fVar29 * fVar29;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar24 = fVar24 * (float)auStack_a8._0_4_;
				fVar29 = (float)auStack_e0._24_4_;
				fVar30 = fStack_c4;
				if (0.0 <= fVar24) goto label_05db3785;
	label_05db38c7: ;
				fVar24 = sqrtf(fVar24);
				fVar29 = (float)auStack_e0._24_4_;
				fVar30 = fStack_c4;
				klass = typeof(Math);
			}
			else {
				fVar24 = fVar24 * (float)auStack_a8._0_4_;
				if (fVar24 < 0.0) goto label_05db38c7;
	label_05db3785: ;
				fVar24 = SQRT(fVar24);
				klass = typeof(Math);
			}
			fVar26 = 0.0;
			typeof(Math) = (Math)klass;
			if (1e-15 <= fVar24) {
				fVar24 = (fVar27 * (float)auStack_e0._20_4_ + fVar30 * (float)auStack_e0._16_4_ + fVar29 * (float)auStack_e0._12_4_) / fVar24;
				fVar29 = 1.0;
				if (fVar24 <= 1.0) {
					fVar29 = fVar24;
				}
				dVar17 = acos((double)(float)(~-(uint)(-1.0 <= fVar24) & 0xbf800000 |(uint)fVar29 & -(uint)(-1.0 <= fVar24)), (MethodInfo)klass);
				fVar26 = (float)dVar17 * 57.29578;
			}
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar8 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar8 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar8 == 0) {
			}
			auStack_b8._4_4_ = 0.0;
			if ((float)auStack_a8._0_4_ < 0.0) {
				auStack_b8._0_4_ = sqrtf((float)auStack_a8._0_4_);
				auStack_b8._4_4_ = extraout_XMM0_Db;
			}
			else {
				auStack_b8._0_4_ = SQRT((float)auStack_a8._0_4_);
			}
			fVar29 = cosf(fVar26 * 0.017453292);
			if (*(Transform*)__this_02 == null) goto label_05db3f56;
			method_07 = null;
			UVar32 = (*(Transform*)__this_02).position;
			auStack_a8._8_4_ = extraout_XMM0_Dc_00;
			auStack_a8._0_8_ = UVar32._0_8_;
			auStack_a8._12_4_ = extraout_XMM0_Dd_00;
			stack0xffffffffffffff38 = (sbyte)CONCAT44(fStack_c4, UVar32.z);
			pUVar1 = &this._previousMousePoint;
			fVar30 = pUVar1.x;
			fVar27 = this._previousMousePoint.y;
			uVar18 = pUVar1.x;
			uVar19 = pUVar1.y;
			fStack_128 = this._previousMousePoint.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
				fVar30 = (float)uVar18;
				fVar27 = (float)uVar19;
			}
			else {
				auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
			}
			auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			auVar31._0_4_ = fVar30 - (float)auStack_a8._0_4_;
			auVar31._4_4_ = fVar27 - (float)auStack_a8._4_4_;
			auVar31._8_4_ = 0.0 - (float)auStack_a8._8_4_;
			auVar31._12_4_ = 0.0 - (float)auStack_a8._12_4_;
			fStack_128 = fStack_128 - (float)auStack_e0._24_4_;
			uVar25 = 0;
			fVar30 = fStack_128 * fStack_128 + auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_;
			if (fVar30 < 0.0) {
				auStack_b8._0_4_ = (float)auStack_b8._0_4_ / fVar29;
				fVar30 = sqrtf(fVar30);
				uVar25 = extraout_XMM0_Db_00;
				fVar29 = (float)auStack_b8._0_4_;
			}
			else {
				fVar30 = SQRT(fVar30);
				fVar29 = (float)auStack_b8._0_4_ / fVar29;
			}
			if (fVar30 <= 1e-05) {
				pUVar22 = typeof(Vector3).static_fields;
				fStack_128 = (pUVar22.zeroVector).z;
			}
			else {
				fStack_128 = fStack_128 / fVar30;
				auVar15._4_4_ = fVar30;
				auVar15._0_4_ = fVar30;
				auVar15._8_4_ = uVar25;
				auVar15._12_4_ = uVar25;
				auVar31 = divps(auVar31, auVar15);
				auStack_e0._0_8_ = auVar31._0_8_;
				pUVar22 = (UnityEngine_Vector3_StaticFields)auStack_e0;
			}
			uVar3 = (pUVar22.zeroVector).x;
			uVar6 = (pUVar22.zeroVector).y;
			from.y = (float)uVar6;
			from.x = (float)uVar3;
			fVar30 = (float)uStack_78 + (float)auStack_e0._12_4_ * fVar29;
			fVar27 = uStack_78._4_4_ + (float)auStack_e0._16_4_ * fVar29;
			uStack_70._0_4_ = (float)uStack_70 + fVar29 * 0.0;
			uStack_70._4_4_ = uStack_70._4_4_ + fVar29 * 0.0;
			fVar26 = (float)auStack_e0._8_4_ + (float)auStack_e0._20_4_ * fVar29;
			auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
			uStack_78 = (Il2CppMethodPointer)CONCAT44(fVar27, fVar30);
			fVar29 = (float)uStack_70;
			fVar24 = uStack_70._4_4_;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				fVar30 = (float)uStack_78;
				fVar27 = uStack_78._4_4_;
				fVar29 = (float)uStack_70;
				fVar24 = uStack_70._4_4_;
			}
			auVar28._0_4_ = fVar30 - (float)auStack_a8._0_4_;
			auVar28._4_4_ = fVar27 - (float)auStack_a8._4_4_;
			auVar28._8_4_ = fVar29 - (float)auStack_a8._8_4_;
			auVar28._12_4_ = fVar24 - (float)auStack_a8._12_4_;
			fStack_12c = fVar26 - (float)auStack_e0._24_4_;
			uVar25 = 0;
			fVar29 = fStack_12c * fStack_12c + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
			if (fVar29 < 0.0) {
				fVar29 = sqrtf(fVar29);
				uVar25 = extraout_XMM0_Db_01;
				if (fVar29 <= 1e-05) goto label_05db3c16;
	label_05db3c59: ;
				fStack_12c = fStack_12c / fVar29;
				auVar16._4_4_ = fVar29;
				auVar16._0_4_ = fVar29;
				auVar16._8_4_ = uVar25;
				auVar16._12_4_ = uVar25;
				auVar31 = divps(auVar28, auVar16);
				auStack_e0._0_8_ = auVar31._0_8_;
			}
			else {
				fVar29 = SQRT(fVar29);
				if (1e-05 < fVar29) goto label_05db3c59;
	label_05db3c16: ;
				__return_storage_ptr__ = typeof(Vector3).static_fields;
				fStack_12c = (((Ray)&__return_storage_ptr__.zeroVector).m_Origin).z;
			}
			uVar4 = (__return_storage_ptr__.zeroVector).x;
			uVar7 = (__return_storage_ptr__.zeroVector).y;
			to.y = (float)uVar7;
			to.x = (float)uVar4;
			UVar32 = this.GetAxis();
			fVar29 = UVar32.x;
			fVar30 = UVar32.y;
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
				auStack_b8 = (byte[])UVar32._0_8_;
				fVar29 = (float)auStack_b8._0_4_;
				fVar30 = (float)auStack_b8._4_4_;
			}
			from.z = fStack_128;
			to.z = fStack_12c;
			axis.y = fVar30;
			axis.x = fVar29;
			axis.z = UVar32.z;
			fStack_128 = Util.SignedAngle(from, to, axis);
			pGVar23 = this._gameManager;
			if (pGVar23 == null) goto label_05db3f56;
			if (pGVar23.Snap != false) {
				pSVar13 = SettingsManager.MapEditorSettings;
				if ((pSVar13 == null) ||(pSVar14 = pSVar13.SnapRotate, pSVar14 == null)) goto label_05db3f56;
				fVar29 = pSVar14._value;
				fVar30 = fStack_128 + this._currentAngle;
				this._currentAngle = fVar30;
				fStack_128 = 0.0;
				if (fVar29 < ABS(fVar30)) {
					fVar30 = fVar30 / fVar29;
					method_08 = (MethodInfo)auStack_e0;
					dVar17 = modf((double)fVar30, (double)method_08, method_07);
					if (0.0 <= fVar30) {
						if ((dVar17 != 0.5) || (NAN(dVar17))) {
							fStack_128 = floorf(fVar30 + 0.5);
						}
						else {
							fStack_128 = (float)(double)auStack_e0._0_8_;
							if (((long)(double)auStack_e0._0_8_ & 1U) != 0) {
								fStack_128 = fStack_128 + 1.0;
							}
						}
					}
					else if ((dVar17 != -0.5) || (NAN(dVar17))) {
						fStack_128 = ceilf(fVar30 + -0.5);
					}
					else {
						fStack_128 = (float)(double)auStack_e0._0_8_;
						if (((long)(double)auStack_e0._0_8_ & 1U) != 0) {
							fStack_128 = fStack_128 + -1.0;
						}
					}
					fStack_128 = fStack_128 * fVar29;
					fVar29 = fmodf(this._currentAngle, fVar29, method_08);
					this._currentAngle = fVar29;
				}
			}
			UVar32 = this.GetAxis();
			center.z = (float)auStack_e0._24_4_;
			center.x = (float)auStack_a8._0_4_;
			center.y = (float)auStack_a8._4_4_;
			this.RotateSelectedObjects(center, UVar32, fStack_128);
			this.ResetCenter();
			*(Il2CppMethodPointer)&this._previousMousePoint = uStack_78;
			this._previousMousePoint.z = fVar26;
		}
		else {
			pGVar23 = this._gameManager;
			if (pGVar23 == null) goto label_05db3f56;
			pGVar23.TeardownTemporaryPhysicalParenting();
			pGVar23 = this._gameManager;
			if (pGVar23 == null) goto label_05db3f56;
			mapObjects = pGVar23.GetSelectedObjectsForTransformCommand();
			__this_01 = new TransformPositionRotationCommand(mapObjects);
			pGVar23.NewCommand((BaseCommand)__this_01, true);
			pGVar23.SetCircleColor(this._circleX, (Color)this.CircleXColor);
			pGVar23.SetCircleColor(this._circleY, (Color)this.CircleYColor);
			pGVar23.SetCircleColor(this._circleZ, (Color)this.CircleZColor);
			this._activeCircle = null;
		}
		pGVar23 = this._gameManager;
		if (pGVar23 != null) {
			pGVar23.IgnoreNextSelect = true;
			return;
		}
	label_05db3f56: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x5CB4040", Offset = "0x5CB3040", VA = "0x5CB4040")]
	private Vector3 GetAxis()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$GetAxis): clean
		Transform pUVar1;
		Transform pUVar2;
		bool bVar3;
		Vector3 UVar4;

		pUVar1 = this._circleX;
		pUVar2 = this._activeCircle;
		bVar3 = ((Object)pUVar2 == (Object)pUVar1);
		if (bVar3) {
			pUVar1 = this._transform;
			if (pUVar1 != null) {
				UVar4 = (Vector3)pUVar1.right;
				return (Vector3)UVar4;
			}
		}
		else {
			pUVar1 = this._circleY;
			pUVar2 = this._activeCircle;
			bVar3 = ((Object)pUVar2 == (Object)pUVar1);
			pUVar1 = this._transform;
			if (bVar3) {
				if (pUVar1 != null) {
					UVar4 = (Vector3)pUVar1.up;
					return (Vector3)UVar4;
				}
			}
			else if (pUVar1 != null) {
				UVar4 = (Vector3)pUVar1.forward;
				return (Vector3)UVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x5CB4120", Offset = "0x5CB3120", VA = "0x5CB4120")]
	private void RotateSelectedObjects(Vector3 center, Vector3 axis, float angle)
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$RotateSelectedObjects): 23 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		HashSet<MapObject> source;
		object pIVar2;
		HashSet<object> __this_00;
		GameObject __this_01;
		bool bVar3;
		MapEditor_RotationGizmo___c_StaticFields pMVar4;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> __this_03;
		Transform __this_04;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		Vector3 point;
		Vector3 axis_00;
		byte[] local_80 = new byte[16];
		MapObject local_70;
		System_Collections_Generic_HashSet_Enumerator_T__o local_68;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		axis_00.z = axis.z;
		point.z = center.z;
		local_38._8_4_ = in_XMM2_Dc;
		local_38._0_8_ = axis._0_8_;
		local_38._12_4_ = in_XMM2_Dd;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = center._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		pGVar1 = this._gameManager;
		if (pGVar1 != null) {
			source = pGVar1.SelectedObjects;
			if ((typeof(RotationGizmo.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar4 = typeof(RotationGizmo.c).static_fields;
				__this_02 = pMVar4.__9__16_0;
			}
			else {
				pMVar4 = typeof(RotationGizmo.c).static_fields;
				__this_02 = pMVar4.__9__16_0;
			}
			if (__this_02 == null) {
				if (((typeof(RotationGizmo.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar4 = typeof(RotationGizmo.c).static_fields;
				}
				pIVar2 = (object)pMVar4.__9;
				__this_02 = new Func<MapObject, int>(pIVar2, (intptr_t)MethodInfo_MapEditor_RotationGizmo_c_RotateSelectedObjects_b__16_0);
				pMVar4 = typeof(RotationGizmo.c).static_fields;
				pMVar4.__9__16_0 = __this_02;
			}
			collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_02);
			__this_03 = new HashSet<int>((IEnumerable<T>)collection);
			pGVar1 = this._gameManager;
			if ((pGVar1 != null) &&(__this_00 = (HashSet<object>)pGVar1.SelectedObjects, __this_00 != null)) {
				local_80.GetEnumerator(__this_00);
				local_68._current = (object)local_70;
				local_68._set = (HashSet<T>)local_80._0_8_;
				local_68._index = local_80._8_4_;
				local_68._version = local_80._12_4_;
				local_80._0_8_ = null;
				local_80._8_8_ = &local_68;
				while(true) {
					do {
						bVar3 = local_68.MoveNext();
						pIVar2 = local_68._current;
						if (!bVar3) {
							local_68.Dispose();
							return;
						}
						bVar3 = BaseGizmo.HasSelectedAncestor((MapObject)local_68._current, __this_03);
					} while (bVar3);
					if ((MapObject)pIVar2 == null) {
						throw new NullReferenceException();
					}
					__this_01 = ((MapObject)((long)pIVar2 + 0x10)).GameObject;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_04 = __this_01.transform;
					if (__this_04 == null) break;
					point.x = (float)local_48._0_4_;
					point.y = (float)local_48._4_4_;
					axis_00.x = (float)local_38._0_4_;
					axis_00.y = (float)local_38._4_4_;
					__this_04.RotateAround(point, axis_00, angle);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x5CB2FA0", Offset = "0x5CB1FA0", VA = "0x5CB2FA0")]
	private void ResetCenter()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$ResetCenter): 20 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		HashSet<object> __this_00;
		HashSet<MapObject> pSVar2;
		byte[] auVar3 = new byte[16];
		object pIVar4;
		bool bVar5;
		Transform __this_01;
		Transform pUVar6;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		byte[] auVar7 = new byte[16];
		float fVar8;
		Quaternion value;
		Vector3 UVar9;
		float local_6c;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_50 = new byte[16];
		object local_40;
		float local_38;
		float fStack_34;
		float fStack_30;
		float fStack_2c;

		local_68 = (byte[])0x0;
		local_58 = null;
		pUVar6 = this._transform;
		if (pUVar6 != null) {
			pUVar6.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
			pGVar1 = this._gameManager;
			if ((pGVar1 != null) &&(__this_00 = (HashSet<object>)pGVar1.SelectedObjects, __this_00 != null)) {
				local_50.GetEnumerator(__this_00);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_6c = 0.0;
				local_38 = 0.0;
				fStack_34 = 0.0;
				fStack_30 = 0.0;
				fStack_2c = 0.0;
				local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
				while(true) {
					bVar5 = local_68.MoveNext();
					pIVar4 = local_58;
					if (!bVar5) break;
					pGVar1 = this._gameManager;
					if (pGVar1 == null) {
						throw new NullReferenceException();
					}
					if (pGVar1.CurrentGizmoMode == 1) {
						pSVar2 = pGVar1.SelectedObjects;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						if (pSVar2._count != 1) goto label_05db3160;
						if (local_58 == null) {
							throw new NullReferenceException();
						}
						if (local_58[1].monitor == null) {
							throw new NullReferenceException();
						}
						pUVar6 = this._transform;
						__this_01 = local_58[1].monitor.transform;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						value = __this_01.rotation;
						if (pUVar6 == null) {
							throw new NullReferenceException();
						}
						pUVar6.rotation = value;
					}
					else {
	label_05db3160: ;
						if (local_58 == null) {
							throw new NullReferenceException();
						}
					}
					if (pIVar4[1].monitor == null) {
						throw new NullReferenceException();
					}
					pUVar6 = pIVar4[1].monitor.transform;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					UVar9 = pUVar6.position;
					local_38 = local_38 + UVar9.x;
					fStack_34 = fStack_34 + UVar9.y;
					fStack_30 = fStack_30 + extraout_XMM0_Dc;
					fStack_2c = fStack_2c + extraout_XMM0_Dd;
					local_6c = local_6c + UVar9.z;
				}
				local_68.Dispose();
				pGVar1 = this._gameManager;
				if (((pGVar1 != null) &&(pSVar2 = pGVar1.SelectedObjects, pSVar2 != null)) &&(pUVar6 = this._transform, pUVar6 != null)) {
					fVar8 = (float)pSVar2._count;
					UVar9.z = local_6c / fVar8;
					auVar3._4_4_ = fStack_34;
					auVar3._0_4_ = local_38;
					auVar3._8_4_ = fStack_30;
					auVar3._12_4_ = fStack_2c;
					auVar7._4_4_ = fVar8;
					auVar7._0_4_ = fVar8;
					auVar7._8_4_ = fVar8;
					auVar7._12_4_ = fVar8;
					auVar7 = divps(auVar3, auVar7);
					UVar9._0_8_ = auVar7._0_8_;
					pUVar6.position = UVar9;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x5CB2E30", Offset = "0x5CB1E30", VA = "0x5CB2E30")]
	private void ResetColors()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$ResetColors): clean
		RotationGizmo __this_00;

		__this_00 = this;
		this.SetCircleColor(this._circleX, (Color)this.CircleXColor);
		__this_00.SetCircleColor(this._circleY, (Color)this.CircleYColor);
		__this_00.SetCircleColor(this._circleZ, (Color)this.CircleZColor);
		return;
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x5CB3F60", Offset = "0x5CB2F60", VA = "0x5CB3F60")]
	private void SetCircleColor(Transform line, Color color)
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$SetCircleColor): clean
		Renderer __this_00;
		uint uVar1;
		Object[] pSVar2;
		Material pUVar3;
		uint uVar4;

		if (line != null) {
			pSVar2 = line.GetComponentsInChildren<Renderer>();
			if (pSVar2 != null) {
				uVar1 = (uint)pSVar2.Length;
				if (0 < (int)uVar1) {
					uVar4 = 0;
					do {
						if (uVar1 <= uVar4) {
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Renderer)pSVar2[(int)uVar4];
						if (__this_00 == null) goto label_05db4028;
						pUVar3 = __this_00.material;
						if (pUVar3 == null) goto label_05db4028;
						pUVar3.color = color;
						pUVar3 = __this_00.material;
						if (pUVar3 == null) goto label_05db4028;
						pUVar3.renderQueue = 0x1267;
						uVar4 = uVar4 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar4 < (int)uVar1);
				}
				return;
			}
		}
	label_05db4028: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x5CB4430", Offset = "0x5CB3430", VA = "0x5CB4430")]
	public RotationGizmo()
	{
		// Lifted from source/cpp/MapEditor/RotationGizmo.c (MapEditor.RotationGizmo$$.ctor): clean
		this.SelectedColor.r = 1.0;
		this.SelectedColor.g = 1.0;
		this.SelectedColor.b = 1.0;
		this.SelectedColor.a = 1.0;
		this.CircleXColor.r = 1.0;
		this.CircleXColor.g = 0.0;
		this.CircleXColor.b = 0.0;
		this.CircleXColor.a = 1.0;
		this.CircleYColor.r = 1.0;
		this.CircleYColor.g = 0.92156863;
		this.CircleYColor.b = 0.015686275;
		this.CircleYColor.a = 1.0;
		this.CircleZColor.r = 0.0;
		this.CircleZColor.g = 0.0;
		this.CircleZColor.b = 1.0;
		this.CircleZColor.a = 1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/RotationGizmo.c.

	// MapEditor.RotationGizmo.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new RotationGizmo.c();
		RotationGizmo.c.__9 = (RotationGizmo.c)__this;
		return;
	}

	// MapEditor.RotationGizmo.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MapEditor.RotationGizmo.<>c$$<RotateSelectedObjects>b__16_0: clean
	private int c__RotateSelectedObjects_b__16_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}
}
