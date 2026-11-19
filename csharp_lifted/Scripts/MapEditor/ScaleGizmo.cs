// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ScaleGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/ScaleGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000152")]
internal class ScaleGizmo : BaseGizmo
{
	[Token(Token = "0x40007B5")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineX;

	[Token(Token = "0x40007B6")]
	[FieldOffset(Offset = "0x50")]
	private Transform _lineY;

	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x58")]
	private Transform _lineZ;

	[Token(Token = "0x40007B8")]
	[FieldOffset(Offset = "0x60")]
	private Transform _center;

	[Token(Token = "0x40007B9")]
	[FieldOffset(Offset = "0x68")]
	private Color SelectedColor;

	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x78")]
	private Color LineXColor;

	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x88")]
	private Color LineYColor;

	[Token(Token = "0x40007BC")]
	[FieldOffset(Offset = "0x98")]
	private Color LineZColor;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0xA8")]
	private Color CenterColor;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0xB8")]
	private Transform _activeLine;

	[Token(Token = "0x40007BF")]
	[FieldOffset(Offset = "0xC0")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0xCC")]
	private Vector3 _currentScaleAmount;

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x5CB4520", Offset = "0x5CB3520", VA = "0x5CB4520")]
	public static ScaleGizmo Create()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$Create): clean
		String path;
		GameObject __this;
		ScaleGizmo pMVar1;

		path = ResourcePaths.Map;
		__this = ResourceManager.InstantiateAsset<GameObject>(path, "Gizmos/ScaleGizmo", false, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pMVar1 = __this.AddComponent<ScaleGizmo>();
		__this.SetActive(false);
		return pMVar1;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x5CB4610", Offset = "0x5CB3610", VA = "0x5CB4610", Slot = "4")]
	public override bool IsActive()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$IsActive): clean
		Transform x;
		bool bVar1;

		x = this._activeLine;
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x5CB4660", Offset = "0x5CB3660", VA = "0x5CB4660", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$Awake): 1 lines keep C-only constructs
		Transform pUVar1;
		ScaleGizmo __this_00;

		this.Awake();
		pUVar1 = this._transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("LineX");
			this._lineX = pUVar1;
			pUVar1 = this._transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("LineY");
				this._lineY = pUVar1;
				pUVar1 = this._transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("LineZ");
					this._lineZ = pUVar1;
					pUVar1 = this._transform;
					if (pUVar1 != null) {
						pUVar1 = pUVar1.Find("Center");
						__this_00 = (ScaleGizmo)&this._center;
						this._center = pUVar1;
						__this_00.SetLineColor(this._lineX, (Color)this.LineXColor, 0x1267);
						__this_00.SetLineColor(this._lineY, (Color)this.LineYColor, 0x1267);
						__this_00.SetLineColor(this._lineZ, (Color)this.LineZColor, 0x1267);
						__this_00.SetLineColor(this._center, (Color)this.CenterColor, 0x1270);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x5CB4870", Offset = "0x5CB3870", VA = "0x5CB4870", Slot = "7")]
	public override void OnSelectionChange()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$OnSelectionChange): 1 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		BaseGizmo x;
		bool bVar2;
		GameObject pUVar3;
		MethodInfo method_00;
		ScaleGizmo __this_00;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(method_00 = (MethodInfo)pGVar1.SelectedObjects, method_00 != null)) {
			if (0 < *(int)&method_00.klass) {
				x = pGVar1.CurrentGizmo;
				bVar2 = ((Object)x == (Object)this);
				if (bVar2) {
					pUVar3 = this.gameObject;
					if (pUVar3 != null) {
						pUVar3.SetActive(true);
						__this_00 = this;
						this.ResetCenter();
						__this_00.SetLineColor(this._lineX, (Color)this.LineXColor, 0x1267);
						__this_00.SetLineColor(this._lineY, (Color)this.LineYColor, 0x1267);
						__this_00.SetLineColor(this._lineZ, (Color)this.LineZColor, 0x1267);
						__this_00.SetLineColor(this._center, (Color)this.CenterColor, 0x1270);
						return;
					}
					goto label_05db49bc;
				}
			}
			pUVar3 = this.gameObject;
			if (pUVar3 != null) {
				pUVar3.SetActive(false);
				return;
			}
		}
	label_05db49bc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x5CB4C60", Offset = "0x5CB3C60", VA = "0x5CB4C60")]
	protected bool ContainsCenter(RaycastHit[] hits)
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$ContainsCenter): 2 lines keep C-only constructs
		uint uVar1;
		Transform y;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		bool bVar5;
		Collider __this_00;
		Transform x;
		ulong uVar6;
		RaycastHit pUVar7;
		ulong uVar8;
		RaycastHit local_68;

		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0x0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		if (hits == null) {
	label_05db4d6e: ;
			throw new NullReferenceException();
		}
		if (0 < (int)hits.Length) {
			uVar6 = hits.Length & 0xffffffff;
			pUVar7 = hits.m_Items;
			uVar8 = 0;
			do {
				if (uVar6 <= uVar8) {
					throw new IndexOutOfRangeException();
				}
				local_68.m_Point.x = pUVar7.m_Point.x;
				local_68.m_Point.y = pUVar7.m_Point.y;
				local_68._8_8_ = *(ulong)&pUVar7.m_Point.z;
				local_68.m_Normal.y = pUVar7.m_Normal.y;
				local_68.m_Normal.z = pUVar7.m_Normal.z;
				uVar2 = pUVar7.m_FaceID;
				uVar3 = pUVar7.m_Distance;
				uVar4 = pUVar7.m_UV.x;
				local_68._36_8_ = *(ulong)&pUVar7.m_UV.y;
				local_68.m_FaceID = uVar2;
				local_68.m_Distance = (float)uVar3;
				local_68.m_UV.x = (float)uVar4;
				__this_00 = local_68.collider;
				if (__this_00 == null) goto label_05db4d6e;
				x = __this_00.transform;
				y = this._center;
				bVar5 = ((Object)x == (Object)y);
				if (bVar5) {
					return true;
				}
				uVar8 = uVar8 + 1;
				uVar1 = (uint)hits.Length;
				uVar6 = (ulong)uVar1;
				pUVar7 = pUVar7 + 1;
			} while ((long)uVar8 < (long)(int)uVar1);
		}
		return false;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x5CB4D80", Offset = "0x5CB3D80", VA = "0x5CB4D80")]
	protected new void Update()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$Update): 102 lines keep C-only constructs
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
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		InputSettings pSVar17;
		MapEditorInputSettings pSVar18;
		BaseCamera __this_00;
		KeybindSetting selectKey;
		Camera pUVar19;
		Vector2 UVar20;
		Object x;
		MapEditorSettings pSVar21;
		FloatSetting pSVar22;
		double dVar23;
		uint uVar24;
		uint uVar25;
		Ray ray;
		Vector3 pos;
		bool bVar26;
		LayerMask mask;
		int layerMask;
		Int32[] layers;
		RaycastHit[] hits;
		Func<RaycastHit, bool> __this_01;
		List<MapObject> mapObjects;
		TransformScaleCommand __this_02;
		ulong uVar27;
		Collider pUVar28;
		Transform pUVar29;
		Transform pUVar30;
		float pfVar31;
		UnityEngine_Vector3_StaticFields pUVar32;
		MethodInfo pMVar33;
		Vector3 pUVar34;
		MapEditorGameManager pGVar35;
		Il2CppClass klass;
		ScaleGizmo pMVar36;
		RaycastHit pUVar37;
		MethodInfo pMVar38;
		ulong uVar39;
		float fVar40;
		float fVar41;
		float fVar42;
		float fVar43;
		float fVar44;
		float fVar45;
		Vector3 UVar46;
		Vector3 frameDelta;
		ulong uStack_188;
		byte[] auStack_158 = new byte[12];
		float fStack_14c;
		float fStack_148;
		float fStack_144;
		byte[] auStack_128 = new byte[16];
		float fStack_10c;
		Vector3 UStack_108;
		Vector3 UStack_f8;
		ulong uStack_e8;
		ulong uStack_e0;
		byte[] auStack_d8 = new byte[8];
		float fStack_d0;
		float fStack_cc;
		RaycastHit UStack_c8;
		byte[] auStack_98 = new byte[16];
		Il2CppMethodPointer pIStack_88;
		ulong uStack_80;
		ulong uStack_78;
		ulong uStack_58;
		float fStack_48;

		UStack_f8.z = 0.0;
		UStack_f8.x = 0.0;
		UStack_f8.y = 0.0;
		uStack_78._0_4_ = 0.0;
		uStack_78._4_4_ = 0.0;
		pIStack_88 = (Il2CppMethodPointer)0x0;
		uStack_80._0_4_ = 0.0;
		uStack_80._4_4_ = 0.0;
		UStack_c8.m_UV.x = 0.0;
		UStack_c8.m_UV.y = 0.0;
		UStack_c8.m_Collider.m_Data = (EntityId)0;
		UStack_c8.m_Normal.y = 0.0;
		UStack_c8.m_Normal.z = 0.0;
		UStack_c8.m_FaceID = 0;
		UStack_c8.m_Distance = 0.0;
		UStack_c8.m_Point.x = 0.0;
		UStack_c8.m_Point.y = 0.0;
		UStack_c8.m_Point.z = 0.0;
		UStack_c8.m_Normal.x = 0.0;
		UStack_108.z = 0.0;
		UStack_108.x = 0.0;
		UStack_108.y = 0.0;
		this.Update();
		pSVar17 = SettingsManager.InputSettings;
		if ((pSVar17 == null) ||(pSVar18 = pSVar17.MapEditor, pSVar18 == null)) goto label_05db640e;
		__this_00 = SceneLoader.CurrentCamera;
		selectKey = pSVar18.Select;
		pUVar30 = this._activeLine;
		pMVar36 = (ScaleGizmo)&this._activeLine;
		bVar26 = ((Object)pUVar30 == null);
		if (bVar26) {
			pMVar33 = null;
			bVar26 = this.TryGetPointerDown(selectKey, ref UStack_f8);
			if (!bVar26) {
	label_05db59c3: ;
				pUVar32 = typeof(Vector3).static_fields;
				fVar42 = (pUVar32.zeroVector).y;
				fVar41 = (pUVar32.zeroVector).z;
				this._currentScaleAmount.x = (pUVar32.zeroVector).x;
				this._currentScaleAmount.y = fVar42;
				this._currentScaleAmount.z = fVar41;
				return;
			}
			if ((__this_00 != null) &&(pUVar19 = __this_00.Camera, pUVar19 != null)) {
				UVar46.z = UStack_f8.z;
				UVar46.x = UStack_f8.x;
				UVar46.y = UStack_f8.y;
				auStack_158.ScreenPointToRay(pUVar19, UVar46);
				layers = (Int32[])new int[1];
				if (layers != null) {
					if ((int)layers.Length == 0) {
	label_05db6413: ;
						throw new IndexOutOfRangeException();
					}
					layers[0] = PhysicsLayer.MapEditorGizmo;
					mask = PhysicsLayer.GetMask(layers);
					layerMask = ((LayerMask)mask);
					ray.m_Direction.z = fStack_144;
					ray.m_Direction.y = fStack_148;
					ray.m_Direction.x = fStack_14c;
					ray.m_Origin.z = (float)auStack_158._8_4_;
					ray.m_Origin.x = (float)auStack_158._0_4_;
					ray.m_Origin.y = (float)auStack_158._4_4_;
					hits = Physics.RaycastAll(ray, 100000.0, layerMask);
					bVar26 = this.ContainsCenter(hits);
					auStack_128._0_8_ = pMVar36;
					if (bVar26) {
						this._activeLine = this._center;
						pMVar36.SetLineColor(this._lineX, (Color)this.LineXColor, 0x1267);
						pMVar36.SetLineColor(this._lineY, (Color)this.LineYColor, 0x1267);
						pMVar36.SetLineColor(this._lineZ, (Color)this.LineZColor, 0x1267);
						pMVar36.SetLineColor(this._center, (Color)this.CenterColor, 0x1270);
						pMVar36.SetLineColor(this._activeLine, (Color)this.SelectedColor, 0x1267);
						pMVar36.SetLineColor(this._lineX, (Color)this.SelectedColor, 0x1267);
						pMVar36.SetLineColor(this._lineY, (Color)this.SelectedColor, 0x1267);
						pMVar36.SetLineColor(this._lineZ, (Color)this.SelectedColor, 0x1267);
						__this_01 = new Func<RaycastHit, bool>((object)this, (intptr_t)MethodInfo_MapEditor_ScaleGizmo_Update_b__17_0);
						Enumerable.First<RaycastHit>((RaycastHit)auStack_158, (System_Collections_Generic_IEnumerable_TSource__o)hits, (System_Func_TSource__bool__o)__this_01);
						uStack_80._4_4_ = fStack_14c;
						uStack_80._0_4_ = (float)auStack_158._8_4_;
						uStack_78._4_4_ = fStack_144;
						uStack_78._0_4_ = fStack_148;
						pIStack_88 = (Il2CppMethodPointer)auStack_158._0_8_;
						pUVar37 = (RaycastHit)&pIStack_88;
	label_05db595a: ;
						UVar46 = pUVar37.point;
						this._previousMousePoint.x = UVar46.x;
						this._previousMousePoint.y = UVar46.y;
						this._previousMousePoint.z = UVar46.z;
						pGVar35 = this._gameManager;
						if (pGVar35 == null) goto label_05db640e;
						pGVar35.SetupTemporaryPhysicalParenting();
					}
					else {
						if (hits == null) goto label_05db640e;
						if (0 < (int)hits.Length) {
							uVar27 = hits.Length & 0xffffffff;
							pUVar37 = hits.m_Items;
							uVar39 = 0;
							do {
								if (uVar27 <= uVar39) goto label_05db6413;
								UStack_c8.m_Point.x = pUVar37.m_Point.x;
								UStack_c8.m_Point.y = pUVar37.m_Point.y;
								UStack_c8._8_8_ = *(ulong)&pUVar37.m_Point.z;
								UStack_c8.m_Normal.y = pUVar37.m_Normal.y;
								UStack_c8.m_Normal.z = pUVar37.m_Normal.z;
								uVar24 = pUVar37.m_FaceID;
								uVar25 = pUVar37.m_Distance;
								UVar20 = pUVar37.m_UV;
								UStack_c8.m_Collider.m_Data =(EntityId)pUVar37.m_Collider.m_Data;
								pMVar33 = (MethodInfo)(ulong)(uint)UStack_c8.m_Collider.m_Data;
								UStack_c8.m_UV.x = UVar20.x;
								UStack_c8.m_UV.y = UVar20.y;
								UStack_c8.m_FaceID = uVar24;
								UStack_c8.m_Distance = (float)uVar25;
								pUVar28 = UStack_c8.collider;
								if (pUVar28 == null) goto label_05db640e;
								pUVar29 = pUVar28.transform;
								pUVar30 = this._lineX;
								bVar26 = ((Object)pUVar29 == (Object)pUVar30);
								if (bVar26) {
	label_05db587f: ;
									pUVar28 = UStack_c8.collider;
									if (pUVar28 == null) goto label_05db640e;
									pUVar30 = pUVar28.transform;
									this._activeLine = pUVar30;
									pMVar36 = (ScaleGizmo)auStack_128._0_8_;
									pMVar36.SetLineColor(this._lineX, (Color)this.LineXColor, 0x1267);
									pMVar36.SetLineColor(this._lineY, (Color)this.LineYColor, 0x1267);
									pMVar36.SetLineColor(this._lineZ, (Color)this.LineZColor, 0x1267);
									pMVar36.SetLineColor(this._center, (Color)this.CenterColor, 0x1270);
									pMVar36.SetLineColor(this._activeLine, (Color)this.SelectedColor, 0x1267);
									pUVar37 = &UStack_c8;
									goto label_05db595a;
								}
								pUVar28 = UStack_c8.collider;
								if (pUVar28 == null) goto label_05db640e;
								pUVar29 = pUVar28.transform;
								pUVar30 = this._lineY;
								bVar26 = ((Object)pUVar29 == (Object)pUVar30);
								if (bVar26) goto label_05db587f;
								pUVar28 = UStack_c8.collider;
								if (pUVar28 == null) goto label_05db640e;
								pUVar29 = pUVar28.transform;
								pUVar30 = this._lineZ;
								bVar26 = ((Object)pUVar29 == (Object)pUVar30);
								if (bVar26) goto label_05db587f;
								uVar39 = uVar39 + 1;
								uVar15 = (uint)hits.Length;
								uVar27 = (ulong)uVar15;
								pUVar37 = pUVar37 + 1;
							} while ((long)uVar39 < (long)(int)uVar15);
						}
					}
					x = *(Object*)auStack_128._0_8_;
					bVar26 = (x == null);
					if (bVar26) {
						this.CancelPointer();
					}
					goto label_05db59c3;
				}
			}
			goto label_05db640e;
		}
		bVar26 = this.IsPointerHeld(selectKey, ref UStack_108);
		if (bVar26) {
			if ((__this_00 == null) ||(pUVar19 = __this_00.Camera, pUVar19 == null)) goto label_05db640e;
			pos.z = UStack_108.z;
			pos.x = UStack_108.x;
			pos.y = UStack_108.y;
			auStack_158.ScreenPointToRay(pUVar19, pos);
			uVar1 = this._previousMousePoint.x;
			uVar8 = this._previousMousePoint.y;
			uStack_e8 = (Il2CppMethodPointer)auStack_158._0_8_;
			fVar42 = (float)uVar1 - auStack_158._0_4_;
			fVar43 = (float)uVar8 - auStack_158._4_4_;
			fVar41 = this._previousMousePoint.z - (float)auStack_158._8_4_;
			fStack_48 = fStack_148;
			fVar40 = fStack_144 * fStack_144 + fStack_148 * fStack_148 + fStack_14c * fStack_14c;
			fVar44 = fVar41 * fVar41 + fVar43 * fVar43 + fVar42 * fVar42;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				auStack_98 = ZEXT416((uint)fVar40);
				fVar40 = (float)auStack_98._0_4_ * fVar44;
				if (fVar40 < 0.0) goto label_05db55c9;
	label_05db52f3: ;
				fVar40 = SQRT(fVar40);
				klass = typeof(Math);
			}
			else {
				fVar40 = fVar40 * fVar44;
				if (0.0 <= fVar40) goto label_05db52f3;
	label_05db55c9: ;
				fVar40 = sqrtf(fVar40);
				klass = typeof(Math);
			}
			fVar45 = 0.0;
			typeof(Math) = (Math)klass;
			if (1e-15 <= fVar40) {
				fVar40 = (fVar41 * fStack_144 + fVar43 * fStack_148 + fVar42 * fStack_14c) / fVar40;
				fVar41 = 1.0;
				if (fVar40 <= 1.0) {
					fVar41 = fVar40;
				}
				dVar23 = acos((double)(float)(~-(uint)(-1.0 <= fVar40) & 0xbf800000 |(uint)fVar41 & -(uint)(-1.0 <= fVar40)), (MethodInfo)klass);
				fVar45 = (float)dVar23 * 57.29578;
			}
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar16 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar16 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar16 == 0) {
			}
			if (fVar44 < 0.0) {
				fVar44 = sqrtf(fVar44);
			}
			else {
				fVar44 = SQRT(fVar44);
			}
			fStack_10c = cosf(fVar45 * 0.017453292);
			uStack_58._0_4_ = this._previousMousePoint.x;
			uStack_58._4_4_ = this._previousMousePoint.y;
			auStack_98 = ZEXT416((uint)this._previousMousePoint.z);
			pUVar30 = this._lineX;
			pUVar29 = this._activeLine;
			bVar26 = ((Object)pUVar29 == (Object)pUVar30);
			if (bVar26) {
				pUVar34 = &Vector3.rightVector;
				pfVar31 = &(Vector3.rightVector).z;
			}
			else {
				pUVar30 = this._lineY;
				pUVar29 = this._activeLine;
				bVar26 = ((Object)pUVar29 == (Object)pUVar30);
				if (bVar26) {
					pUVar34 = &Vector3.upVector;
					pfVar31 = &(Vector3.upVector).z;
				}
				else {
					pUVar30 = this._lineZ;
					pUVar29 = this._activeLine;
					bVar26 = ((Object)pUVar29 == (Object)pUVar30) ;
					if (bVar26) {
						pUVar34 = &Vector3.forwardVector;
						pfVar31 = &(Vector3.forwardVector).z;
					}
					else {
						pUVar34 = &Vector3.oneVector;
						pfVar31 = &(Vector3.oneVector).z;
					}
				}
			}
			fVar41 = *pfVar31;
			uVar2 = pUVar34.x;
			uVar9 = pUVar34.y;
			pUVar30 = this._center;
			pUVar29 = this._activeLine;
			bVar26 = ((Object)pUVar29 == (Object)pUVar30);
			if (bVar26) {
				pUVar30 = __this_00.transform;
			}
			else {
				pUVar30 = *(Transform*)pMVar36;
			}
			if (pUVar30 == null) goto label_05db640e;
			pMVar33 = null;
			UVar46 = pUVar30.right;
			pGVar35 = this._gameManager;
			if (pGVar35 == null) goto label_05db640e;
			fVar44 = fVar44 / fStack_10c;
			auStack_d8._0_4_ = (float)auStack_d8._0_4_ + fVar44 * fStack_144;
			fVar43 = (float)uStack_e8 + fVar44 * fStack_14c;
			fStack_d0 = (float)auStack_d8._4_4_ + fVar44 * 0.0;
			fVar42 = uStack_e8._4_4_ + fStack_48 * fVar44;
			uStack_e8 = (Il2CppMethodPointer)CONCAT44(uStack_e8._4_4_, fVar42);
			uStack_e0 = CONCAT44(uStack_e8._4_4_, uStack_e8._4_4_);
			auStack_d8._4_4_ = fVar43;
			fStack_cc = uStack_e8._4_4_ + fVar44 * fStack_148;
			fVar42 = UVar46.x * (fVar43 - (float)uStack_58) + UVar46.y * (fVar42 - uStack_58._4_4_) + UVar46.z * ((float)auStack_d8._0_4_ - (float)auStack_98._0_4_);
			uStack_188._0_4_ = fVar42 * (float)uVar2 * 0.1;
			uStack_188._4_4_ = fVar42 * (float)uVar9 * 0.1;
			fVar42 = fVar41 * fVar42 * 0.1;
			if (pGVar35.Snap != false) {
				pSVar21 = SettingsManager.MapEditorSettings;
				if ((pSVar21 == null) ||(pSVar22 = pSVar21.SnapScale, pSVar22 == null)) goto label_05db640e;
				fVar43 = pSVar22._value;
				uVar3 = this._currentScaleAmount.x;
				uVar10 = this._currentScaleAmount.y;
				fVar40 = this._currentScaleAmount.z;
				this._currentScaleAmount.x = (float)uStack_188 + (float)uVar3;
				this._currentScaleAmount.y = uStack_188._4_4_ + (float)uVar10;
				this._currentScaleAmount.z = fVar42 + fVar40;
				pUVar32 = typeof(Vector3).static_fields;
				uStack_188._0_4_ = (pUVar32.zeroVector).x;
				uStack_188._4_4_ = (pUVar32.zeroVector).y;
				fVar42 = (pUVar32.zeroVector).z;
				if (Il2CppMethodInitialized_07544d56 == false) {
					Il2CppMethodInitialized_07544d56 = true;
					pUVar32 = typeof(Vector3).static_fields;
				}
				uVar4 = (pUVar32.rightVector).x;
				uVar11 = (pUVar32.rightVector).y;
				fVar40 = fVar41 - (pUVar32.rightVector).z;
				if ((((float)uVar9 - (float)uVar11) * ((float)uVar9 - (float)uVar11) +((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) + fVar40 * fVar40 < 9.9999994e-11) &&(fVar40 = this._currentScaleAmount.x, fVar43 < ABS(fVar40))) {
					fVar40 = fVar40 / fVar43;
					auStack_128 = ZEXT416((uint)fVar40);
					pMVar38 = (MethodInfo)auStack_158;
					dVar23 = modf((double)fVar40, (double)pMVar38, pMVar33);
					if (0.0 <= (float)auStack_128._0_4_) {
						if ((dVar23 != 0.5) || (NAN(dVar23))) {
							fVar40 = floorf((float)auStack_128._0_4_ + 0.5);
						}
						else {
							fVar40 = (float)(double)auStack_158._0_8_;
							if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
								fVar40 = fVar40 + 1.0;
							}
						}
					}
					else if ((dVar23 != -0.5) || (NAN(dVar23))) {
						fVar40 = ceilf((float)auStack_128._0_4_ + -0.5);
					}
					else {
						fVar40 = (float)(double)auStack_158._0_8_;
						if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
							fVar40 = fVar40 + -1.0;
						}
					}
					uStack_188 = CONCAT44(uStack_188._4_4_, fVar40 * fVar43);
					fVar40 = fmodf(this._currentScaleAmount.x, fVar43, pMVar38);
					this._currentScaleAmount.x = fVar40;
				}
				pUVar32 = typeof(Vector3).static_fields;
				uVar5 = (pUVar32.upVector).x;
				uVar12 = (pUVar32.upVector).y;
				fVar40 = fVar41 - (pUVar32.upVector).z;
				if ((((float)uVar9 - (float)uVar12) * ((float)uVar9 - (float)uVar12) +((float)uVar2 - (float)uVar5) * ((float)uVar2 - (float)uVar5) + fVar40 * fVar40 < 9.9999994e-11) &&(fVar40 = this._currentScaleAmount.y, fVar43 < ABS(fVar40))) {
					fVar40 = fVar40 / fVar43;
					auStack_128 = ZEXT416((uint)fVar40);
					pMVar38 = (MethodInfo)auStack_158;
					dVar23 = modf((double)fVar40, (double)pMVar38, pMVar33);
					if (0.0 <= (float)auStack_128._0_4_) {
						if ((dVar23 != 0.5) || (NAN(dVar23))) {
							fVar40 = floorf((float)auStack_128._0_4_ + 0.5);
						}
						else {
							fVar40 = (float)(double)auStack_158._0_8_;
							if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
								fVar40 = fVar40 + 1.0;
							}
						}
					}
					else if ((dVar23 != -0.5) || (NAN(dVar23))) {
						fVar40 = ceilf((float)auStack_128._0_4_ + -0.5);
					}
					else {
						fVar40 = (float)(double)auStack_158._0_8_;
						if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
							fVar40 = fVar40 + -1.0;
						}
					}
					uStack_188 = CONCAT44(fVar40 * fVar43, (int)uStack_188);
					fVar40 = fmodf(this._currentScaleAmount.y, fVar43, pMVar38);
					this._currentScaleAmount.y = fVar40;
				}
				pUVar32 = typeof(Vector3).static_fields;
				uVar6 = (pUVar32.forwardVector).x;
				uVar13 = (pUVar32.forwardVector).y;
				fVar40 = fVar41 - (pUVar32.forwardVector).z;
				if ((((float)uVar9 - (float)uVar13) * ((float)uVar9 - (float)uVar13) +((float)uVar2 - (float)uVar6) * ((float)uVar2 - (float)uVar6) + fVar40 * fVar40 < 9.9999994e-11) &&(fVar40 = this._currentScaleAmount.z, fVar43 < ABS(fVar40))) {
					fVar40 = fVar40 / fVar43;
					pMVar38 = (MethodInfo)auStack_158;
					dVar23 = modf((double)fVar40, (double)pMVar38, pMVar33);
					if (0.0 <= fVar40) {
						if ((dVar23 != 0.5) || (NAN(dVar23))) {
							fVar42 = floorf(fVar40 + 0.5);
						}
						else {
							fVar42 = (float)(double)auStack_158._0_8_;
							if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
								fVar42 = fVar42 + 1.0;
							}
						}
					}
					else if ((dVar23 != -0.5) || (NAN(dVar23))) {
						fVar42 = ceilf(fVar40 + -0.5);
					}
					else {
						fVar42 = (float)(double)auStack_158._0_8_;
						if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
							fVar42 = fVar42 + -1.0;
						}
					}
					fVar42 = fVar42 * fVar43;
					fVar40 = fmodf(this._currentScaleAmount.z, fVar43, pMVar38);
					this._currentScaleAmount.z = fVar40;
				}
				pUVar32 = typeof(Vector3).static_fields;
				uVar7 = (pUVar32.oneVector).x;
				uVar14 = (pUVar32.oneVector).y;
				fVar41 = fVar41 - (pUVar32.oneVector).z;
				if ((((float)uVar9 - (float)uVar14) * ((float)uVar9 - (float)uVar14) +((float)uVar2 - (float)uVar7) * ((float)uVar2 - (float)uVar7) + fVar41 * fVar41 < 9.9999994e-11) &&(fVar41 = this._currentScaleAmount.x, fVar43 < ABS(fVar41))) {
					fVar41 = fVar41 / fVar43;
					dVar23 = modf((double)fVar41, (double)auStack_158, pMVar33);
					if (0.0 <= fVar41) {
						if ((dVar23 != 0.5) || (NAN(dVar23))) {
							uStack_188._0_4_ = floorf(fVar41 + 0.5);
						}
						else {
							uStack_188._0_4_ = (float)(double)auStack_158._0_8_;
							if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
								uStack_188._0_4_ = (float)uStack_188 + 1.0;
							}
						}
					}
					else if ((dVar23 != -0.5) || (NAN(dVar23))) {
						uStack_188._0_4_ = ceilf(fVar41 + -0.5);
					}
					else {
						uStack_188._0_4_ = (float)(double)auStack_158._0_8_;
						if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
							uStack_188._0_4_ = (float)uStack_188 + -1.0;
						}
					}
					uStack_188._0_4_ = (float)uStack_188 * fVar43;
					fVar41 = this._currentScaleAmount.x / fVar43;
					dVar23 = modf((double)fVar41, (double)auStack_158, pMVar33);
					if (0.0 <= fVar41) {
						if ((dVar23 != 0.5) || (NAN(dVar23))) {
							uStack_188._4_4_ = floorf(fVar41 + 0.5);
						}
						else {
							uStack_188._4_4_ = (float)(double)auStack_158._0_8_;
							if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
								uStack_188._4_4_ = uStack_188._4_4_ + 1.0;
							}
						}
					}
					else if ((dVar23 != -0.5) || (NAN(dVar23))) {
						uStack_188._4_4_ = ceilf(fVar41 + -0.5);
					}
					else {
						uStack_188._4_4_ = (float)(double)auStack_158._0_8_;
						if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
							uStack_188._4_4_ = uStack_188._4_4_ + -1.0;
						}
					}
					uStack_188._4_4_ = uStack_188._4_4_ * fVar43;
					fVar41 = this._currentScaleAmount.x / fVar43;
					pMVar38 = (MethodInfo)auStack_158;
					dVar23 = modf((double)fVar41, (double)pMVar38, pMVar33);
					if (0.0 <= fVar41) {
						if ((dVar23 != 0.5) || (NAN(dVar23))) {
							fVar42 = floorf(fVar41 + 0.5);
						}
						else {
							fVar42 = (float)(double)auStack_158._0_8_;
							if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
								fVar42 = fVar42 + 1.0;
							}
						}
					}
					else if ((dVar23 != -0.5) || (NAN(dVar23))) {
						fVar42 = ceilf(fVar41 + -0.5);
					}
					else {
						fVar42 = (float)(double)auStack_158._0_8_;
						if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
							fVar42 = fVar42 + -1.0;
						}
					}
					fVar42 = fVar42 * fVar43;
					fVar41 = fmodf(this._currentScaleAmount.x, fVar43, pMVar38);
					this._currentScaleAmount.x = fVar41;
				}
			}
			uStack_e8 = (Il2CppMethodPointer)CONCAT44((float)uStack_e8, auStack_d8._4_4_);
			uStack_e0 = CONCAT44(auStack_d8._4_4_, auStack_d8._4_4_);
			frameDelta.y = uStack_188._4_4_;
			frameDelta.x = (float)uStack_188;
			frameDelta.z = fVar42;
			this.ScaleSelectedObjects(frameDelta);
			this.ResetCenter();
			*(Il2CppMethodPointer)&this._previousMousePoint = uStack_e8;
			this._previousMousePoint.z = (float)auStack_d8._0_4_;
		}
		else {
			pGVar35 = this._gameManager;
			if (pGVar35 == null) goto label_05db640e;
			pGVar35.TeardownTemporaryPhysicalParenting();
			pGVar35 = this._gameManager;
			if (pGVar35 == null) goto label_05db640e;
			mapObjects = pGVar35.GetSelectedObjectsForTransformCommand();
			__this_02 = new TransformScaleCommand(mapObjects);
			pMVar33 = null;
			pGVar35.NewCommand((BaseCommand)__this_02, true);
			pGVar35.SetLineColor(this._lineX, (Color)this.LineXColor, 0x1267);
			pGVar35.SetLineColor(this._lineY, (Color)this.LineYColor, 0x1267);
			pGVar35.SetLineColor(this._lineZ, (Color)this.LineZColor, 0x1267);
			pGVar35.SetLineColor(this._center, (Color)this.CenterColor, 0x1270);
			this._activeLine = null;
		}
		pGVar35 = this._gameManager;
		if (pGVar35 != null) {
			pGVar35.IgnoreNextSelect = true;
			return;
		}
	label_05db640e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x5CB6500", Offset = "0x5CB5500", VA = "0x5CB6500")]
	private void ScaleSelectedObjects(Vector3 frameDelta)
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$ScaleSelectedObjects): 30 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		MapEditorGameManager pGVar4;
		HashSet<MapObject> source;
		object pIVar5;
		HashSet<object> __this_00;
		GameObject __this_01;
		bool bVar6;
		MapEditor_ScaleGizmo___c_StaticFields pMVar7;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> __this_03;
		Transform __this_04;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		Vector3 UVar8;
		Vector3 UVar9;
		Vector3 value;
		byte[] local_80 = new byte[16];
		MapObject local_70;
		byte[] local_68 = new byte[16];
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte[] local_38 = new byte[16];

		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = frameDelta._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		pGVar4 = this._gameManager;
		if (pGVar4 != null) {
			source = pGVar4.SelectedObjects;
			if ((typeof(ScaleGizmo.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar7 = typeof(ScaleGizmo.c).static_fields;
				__this_02 = pMVar7.__9__18_0;
			}
			else {
				pMVar7 = typeof(ScaleGizmo.c).static_fields;
				__this_02 = pMVar7.__9__18_0;
			}
			if (__this_02 == null) {
				if (((typeof(ScaleGizmo.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar7 = typeof(ScaleGizmo.c).static_fields;
				}
				pIVar5 = (object)pMVar7.__9;
				__this_02 = new Func<MapObject, int>(pIVar5, (intptr_t)MethodInfo_MapEditor_ScaleGizmo_c_ScaleSelectedObjects_b__18_0);
				pMVar7 = typeof(ScaleGizmo.c).static_fields;
				pMVar7.__9__18_0 = __this_02;
			}
			collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_02);
			__this_03 = new HashSet<int>((IEnumerable<T>)collection);
			pGVar4 = this._gameManager;
			if ((pGVar4 != null) &&(__this_00 = (HashSet<object>)pGVar4.SelectedObjects, __this_00 != null)) {
				local_80.GetEnumerator(__this_00);
				local_58._current = (object)local_70;
				local_58._set = (HashSet<T>)local_80._0_8_;
				local_58._index = local_80._8_4_;
				local_58._version = local_80._12_4_;
				local_80._0_8_ = null;
				local_80._8_8_ = &local_58;
				while(true) {
					do {
						bVar6 = local_58.MoveNext();
						pIVar5 = local_58._current;
						if (!bVar6) {
							local_58.Dispose();
							return;
						}
						bVar6 = BaseGizmo.HasSelectedAncestor((MapObject)local_58._current, __this_03);
					} while (bVar6);
					if ((MapObject)pIVar5 == null) break;
					uVar2 = *(float)&pIVar5[2].monitor;
					uVar3 = *(float)((long)&pIVar5[2].monitor + 4);
					local_68._4_4_ = uVar3;
					local_68._0_4_ = uVar2;
					local_68._8_8_ = 0;
					fVar1 = (((MapObject)((long)pIVar5 + 0x10)).BaseScale).z;
					UVar8.z = fVar1;
					UVar8.x = (float)local_68._0_4_;
					UVar8.y = (float)local_68._4_4_;
					UVar9.z = frameDelta.z;
					UVar9.x = (float)local_38._0_4_;
					UVar9.y = (float)local_38._4_4_;
					UVar8 = Util.MultiplyVectors(UVar8, UVar9);
					local_68._8_4_ = extraout_XMM0_Dc;
					local_68._0_8_ = UVar8._0_8_;
					local_68._12_4_ = extraout_XMM0_Dd;
					__this_01 = ((MapObject)((long)pIVar5 + 0x10)).GameObject;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_04 = __this_01.transform;
					if (__this_04 == null) {
						throw new NullReferenceException();
					}
					UVar9 = __this_04.localScale;
					value.y = (float)local_68._4_4_ + UVar9.y;
					value.x = (float)local_68._0_4_ + UVar9.x;
					value.z = UVar8.z + UVar9.z;
					__this_04.localScale = value;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x5CB49D0", Offset = "0x5CB39D0", VA = "0x5CB49D0")]
	private void ResetCenter()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$ResetCenter): 19 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		HashSet<object> __this_00;
		HashSet<MapObject> pSVar2;
		byte[] auVar3 = new byte[16];
		object pIVar4;
		bool bVar5;
		Transform pUVar6;
		Transform __this_01;
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
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				if (local_58[1].monitor == null) {
					throw new NullReferenceException();
				}
				pUVar6 = local_58[1].monitor.transform;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				UVar9 = pUVar6.position;
				local_38 = local_38 + UVar9.x;
				fStack_34 = fStack_34 + UVar9.y;
				fStack_30 = fStack_30 + extraout_XMM0_Dc;
				fStack_2c = fStack_2c + extraout_XMM0_Dd;
				local_6c = local_6c + UVar9.z;
				if (pIVar4[1].monitor == null) {
					throw new NullReferenceException();
				}
				pUVar6 = this._transform;
				__this_01 = pIVar4[1].monitor.transform;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				value = __this_01.rotation;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar6.rotation = value;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x5CB47F0", Offset = "0x5CB37F0", VA = "0x5CB47F0")]
	private void ResetColors()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$ResetColors): clean
		ScaleGizmo __this_00;

		__this_00 = this;
		this.SetLineColor(this._lineX, (Color)this.LineXColor, 0x1267);
		__this_00.SetLineColor(this._lineY, (Color)this.LineYColor, 0x1267);
		__this_00.SetLineColor(this._lineZ, (Color)this.LineZColor, 0x1267);
		__this_00.SetLineColor(this._center, (Color)this.CenterColor, 0x1270);
		return;
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x5CB6420", Offset = "0x5CB5420", VA = "0x5CB6420")]
	private void SetLineColor(Transform line, Color color, int renderQueue = 4711)
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$SetLineColor): clean
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
						if (__this_00 == null) goto label_05db64f4;
						pUVar3 = __this_00.material;
						if (pUVar3 == null) goto label_05db64f4;
						pUVar3.color = color;
						pUVar3 = __this_00.material;
						if (pUVar3 == null) goto label_05db64f4;
						pUVar3.renderQueue = renderQueue;
						uVar4 = uVar4 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar4 < (int)uVar1);
				}
				return;
			}
		}
	label_05db64f4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x5CB6880", Offset = "0x5CB5880", VA = "0x5CB6880")]
	public ScaleGizmo()
	{
		// Lifted from source/cpp/MapEditor/ScaleGizmo.c (MapEditor.ScaleGizmo$$.ctor): clean
		this.SelectedColor.r = 1.0;
		this.SelectedColor.g = 1.0;
		this.SelectedColor.b = 1.0;
		this.SelectedColor.a = 1.0;
		this.LineXColor.r = 1.0;
		this.LineXColor.g = 0.0;
		this.LineXColor.b = 0.0;
		this.LineXColor.a = 1.0;
		this.LineYColor.r = 1.0;
		this.LineYColor.g = 0.92156863;
		this.LineYColor.b = 0.015686275;
		this.LineYColor.a = 1.0;
		this.LineZColor.r = 0.0;
		this.LineZColor.g = 0.0;
		this.LineZColor.b = 1.0;
		this.LineZColor.a = 1.0;
		this.CenterColor.r = 0.47058824;
		this.CenterColor.g = 0.47058824;
		this.CenterColor.b = 0.47058824;
		this.CenterColor.a = 1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/ScaleGizmo.c.

	// MapEditor.ScaleGizmo$$<Update>b__17_0: clean
	private bool Update_b__17_0(RaycastHit hit)
	{
		Transform y;
		bool bVar1;
		Collider __this_00;
		Transform x;

		__this_00 = hit.collider;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		x = __this_00.transform;
		y = this._center;
		bVar1 = ((Object)x == (Object)y);
		return bVar1;
	}

	// MapEditor.ScaleGizmo.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ScaleGizmo.c();
		ScaleGizmo.c.__9 = (ScaleGizmo.c)__this;
		return;
	}

	// MapEditor.ScaleGizmo.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MapEditor.ScaleGizmo.<>c$$<ScaleSelectedObjects>b__18_0: clean
	private int c__ScaleSelectedObjects_b__18_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}
}
