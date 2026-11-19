// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.MapEditorBrush
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/MapEditorBrush.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200012C")]
public class MapEditorBrush
{
	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x10")]
	public bool Active;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x11")]
	public bool AssetSelectMode;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x14")]
	public BrushMode Mode;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x18")]
	public float Radius;

	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x1C")]
	public int Count;

	[Token(Token = "0x400070F")]
	[FieldOffset(Offset = "0x20")]
	public bool RandomizeEachPlacement;

	[Token(Token = "0x4000710")]
	[FieldOffset(Offset = "0x24")]
	public float SurfaceProjectionLimit;

	[Token(Token = "0x4000711")]
	[FieldOffset(Offset = "0x28")]
	public bool AlignToSurface;

	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x29")]
	public bool FlatPlane;

	[Token(Token = "0x4000713")]
	public const int MaxGridObjects = 1000;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x2C")]
	public int GridX;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x30")]
	public int GridY;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x34")]
	public int GridZ;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x38")]
	public float SpacingX;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x3C")]
	public float SpacingY;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x40")]
	public float SpacingZ;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x44")]
	public bool BoundsSnap;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x48")]
	public int CurveAxis;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x4C")]
	public float CurveAmount;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x50")]
	public List<BrushEntry> Entries;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _circleIndicator;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x60")]
	private LineRenderer _circleRenderer;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _diskIndicator;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x70")]
	private MeshFilter _diskFilter;

	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x78")]
	private Mesh _diskMesh;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x80")]
	private Material _diskMaterial;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x88")]
	private Material _circleMaterial;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x90")]
	private List<GameObject> _ghostObjects;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x98")]
	private List<Material> _ghostMaterials;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0xA0")]
	private List<string> _ghostAssets;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0xA8")]
	private List<Vector3> _ghostScales;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0xB0")]
	private List<Vector3> _ghostRotations;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0xB8")]
	private List<Vector3> _ghostLocalOffsets;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0xC0")]
	private int _ghostIdCounter;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0xC4")]
	private Vector3 _center;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0xD0")]
	private Vector3 _surfaceNormal;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0xDC")]
	private Quaternion _surfaceFrame;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0xEC")]
	private Vector3 _hitNormal;

	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0xF8")]
	private Vector3 _cameraRight;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x104")]
	private Vector3 _cameraPosition;

	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x110")]
	private bool _hasCenter;

	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x114")]
	private int _seed;

	[Token(Token = "0x170000D2")]
	public bool HasCenter
	{
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x5B7FC40", Offset = "0x5B7EC40", VA = "0x5B7FC40")]
		get
		{
			// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$get_HasCenter): clean
			return this._hasCenter;
		}
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x5B7FC50", Offset = "0x5B7EC50", VA = "0x5B7FC50")]
	public void SetActive(bool active)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetActive): 2 lines keep C-only constructs
		undefined3 in_register_00000031;
		int iVar1;

		iVar1 = CONCAT31(in_register_00000031, active);
		this.Active = active;
		this.AssetSelectMode = false;
		if (iVar1 == 0) {
			this.ClearGhosts();
			this.DestroyCircle();
			this._hasCenter = false;
			return;
		}
		this.EnsureCircle();
		this.RegenerateGhosts();
		return;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5B81340", Offset = "0x5B80340", VA = "0x5B81340")]
	public void AddEntry(string asset)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$AddEntry): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this_00;
		List<BrushEntry> pSVar3;
		BrushEntry[] pMVar4;
		bool bVar5;
		BrushEntry __this_01;
		byte[] local_58 = new byte[16];
		object local_48;
		byte[] local_40 = new byte[16];
		object local_30;

		if (Il2CppMethodInitialized_075479a1 == false) {
			Il2CppMethodInitialized_075479a1 = true;
			if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor != 0) goto label_05c81373;
	label_05c81416: ;
			__this_00 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
		}
		else {
			if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor == 0) goto label_05c81416;
	label_05c81373: ;
			__this_00 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
		}
		if (__this_00 != null) {
			bVar5 = __this_00.ContainsKey((object)asset);
			if (!bVar5) {
				if (asset == null) goto label_05c815cb;
				bVar5 = asset.StartsWith("Custom/");
				if (!bVar5) {
					return;
				}
			}
			pSVar3 = this.Entries;
			if (pSVar3 != null) {
				local_40.GetEnumerator((List<object>)pSVar3);
				local_48 = local_30;
				local_58._0_8_ = local_40._0_8_;
				local_58._8_8_ = local_40._8_8_;
				local_40._0_8_ = null;
				local_40._8_8_ = local_58;
				while(true) {
					bVar5 = local_58.MoveNext();
					if (!bVar5) break;
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					bVar5 = ((String)local_48[1].klass == asset);
					if (bVar5) {
						local_58.Dispose();
						return;
					}
				}
				local_58.Dispose();
				pSVar3 = this.Entries;
				__this_01 = new BrushEntry();
				if (__this_01 != null) {
					__this_01.AssetName = asset;
					if (pSVar3 != null) {
						piVar1 = &pSVar3._version;
						*piVar1 = *piVar1 + 1;
						pMVar4 = pSVar3._items;
						if (pMVar4 != null) {
							uVar2 = pSVar3._size;
							if (uVar2 < (uint)pMVar4.Length) {
								pSVar3._size = uVar2 + 1;
								pMVar4[(int)uVar2] = __this_01;
							}
							else {
								pSVar3.AddWithResize((object)__this_01);
							}
							this.RegenerateGhosts();
							return;
						}
					}
				}
			}
		}
	label_05c815cb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x5B81640", Offset = "0x5B80640", VA = "0x5B81640")]
	public void RemoveEntry(int index)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$RemoveEntry): clean
		List<BrushEntry> __this_00;

		if (-1 < index) {
			__this_00 = this.Entries;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			if (index < __this_00._size) {
				__this_00.RemoveAt(index);
				this.RegenerateGhosts();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x5B816B0", Offset = "0x5B806B0", VA = "0x5B816B0")]
	public void SetRadius(float radius)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetRadius): clean
		float fVar1;

		fVar1 = 500.0;
		if (radius <= 500.0) {
			fVar1 = radius;
		}
		this.Radius =(float)(~-(uint)(0.5 <= radius) & 0x3f000000 | (uint)fVar1 & -(uint)(0.5 <= radius));
		this.UpdateCircle();
		this.PositionGhosts();
		return;
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x5B82450", Offset = "0x5B81450", VA = "0x5B82450")]
	public void SetCount(int count)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetCount): clean
		int iVar1;
		int iVar2;

		iVar1 = 200;
		if (count < 200) {
			iVar1 = count;
		}
		iVar2 = 1;
		if (1 < iVar1) {
			iVar2 = iVar1;
		}
		this.Count = iVar2;
		this.RegenerateGhosts();
		return;
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x5B82480", Offset = "0x5B81480", VA = "0x5B82480")]
	public void SetGrid(int x, int y, int z)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetGrid): clean
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;

		uVar2 = (ulong)(uint)x;
		if (x < 2) {
			uVar2 = 1;
		}
		uVar1 = (ulong)(uint)y;
		if (y < 2) {
			uVar1 = 1;
		}
		uVar3 = 1;
		if (1 < z) {
			uVar3 = (ulong)(uint)z;
		}
		if ((long)(uVar3 * uVar1 * uVar2) < 0x3e9) {
			this.GridX = (int32_t)uVar2;
			this.GridY = (int32_t)uVar1;
			this.GridZ = (int32_t)uVar3;
		}
		return;
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x5B824C0", Offset = "0x5B814C0", VA = "0x5B824C0")]
	public void Reseed()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$Reseed): clean
		int iVar1;

		iVar1 = Random.Range(-0x80000000, 0x7fffffff);
		this._seed = iVar1;
		return;
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5B824E0", Offset = "0x5B814E0", VA = "0x5B824E0")]
	public void SetCenter(Vector3 center)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetCenter): clean
		this._center.x = center.x;
		this._center.y = center.y;
		this._center.z = center.z;
		this._hasCenter = true;
		this.UpdateCircle();
		this.PositionGhosts();
		return;
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x5B82510", Offset = "0x5B81510", VA = "0x5B82510")]
	public void SetCenter(Vector3 center, Vector3 surfaceNormal, Vector3 cameraRight, Vector3 cameraPosition)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetCenter): 24 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		byte[] auVar5 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar6;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar7;
		ulong in_XMM2_Qb;
		byte[] auVar8 = new byte[16];
		float fVar9;
		Vector3[] local_50 = new Vector3[2];
		Vector3[] local_38 = new Vector3[2];
		byte[] local_18 = new byte[16];

		fVar7 = surfaceNormal.z;
		local_38[1].y = cameraPosition.x;
		local_38[1].z = cameraPosition.y;
		local_38[0].x = cameraRight.x;
		local_38[0].y = cameraRight.y;
		local_18._8_4_ = in_XMM0_Dc;
		local_18._0_8_ = center._0_8_;
		local_18._12_4_ = in_XMM0_Dd;
		local_50[0].z = surfaceNormal.x;
		local_50[1].x = surfaceNormal.y;
		fVar9 = fVar7 * fVar7 + surfaceNormal.y * surfaceNormal.y + surfaceNormal.x * surfaceNormal.x;
		if (fVar9 <= 0.0001) {
			pUVar6 = typeof(Vector3).static_fields;
			uVar1 = (pUVar6.upVector).x;
			uVar3 = (pUVar6.upVector).y;
			fVar7 = (pUVar6.upVector).z;
			uVar2 = uVar1;
			uVar4 = uVar3;
			goto label_05c826d5;
		}
		local_50[1]._4_8_ = in_XMM2_Qb;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_50[0].x = 0.0;
			local_50[0].y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05c82656;
	label_05c82593: ;
			local_50[0].x = 0.0;
			local_50[0].y = 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c825aa;
	label_05c82686: ;
			if (fVar9 < 0.0) goto label_05c8269d;
	label_05c825b6: ;
			uVar2 = 0;
			fVar9 = SQRT(fVar9);
			if (fVar9 <= 1e-05) goto label_05c825d0;
	label_05c826b8: ;
			fVar7 = fVar7 / fVar9;
			auVar5._8_4_ = local_50[1].y;
			auVar5._12_4_ = local_50[1].z;
			auVar5._0_4_ = local_50[0].z;
			auVar5._4_4_ = local_50[1].x;
			auVar8._4_4_ = fVar9;
			auVar8._0_4_ = fVar9;
			auVar8._8_4_ = uVar2;
			auVar8._12_4_ = uVar2;
			auVar8 = divps(auVar5, auVar8);
			local_50[0].x = auVar8._0_4_;
			local_50[0].y = auVar8._4_4_;
			pUVar6 = (UnityEngine_Vector3_StaticFields)local_50;
		}
		else {
			local_50[0].x = 0.0;
			local_50[0].y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05c82593;
	label_05c82656: ;
			local_50[0].x = 0.0;
			local_50[0].y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c82686;
	label_05c825aa: ;
			if (0.0 <= fVar9) goto label_05c825b6;
	label_05c8269d: ;
			fVar9 = sqrtf(fVar9);
			uVar2 = extraout_XMM0_Db;
			if (1e-05 < fVar9) goto label_05c826b8;
	label_05c825d0: ;
			pUVar6 = typeof(Vector3).static_fields;
			fVar7 = (pUVar6.zeroVector).z;
		}
		uVar2 = (pUVar6.zeroVector).x;
		uVar4 = (pUVar6.zeroVector).y;
	label_05c826d5: ;
		if (this == null) {
			throw new NullReferenceException();
		}
		this._hitNormal.x = (float)uVar2;
		this._hitNormal.y = (float)uVar4;
		this._hitNormal.z = fVar7;
		this._cameraRight.x = local_38[0].x;
		this._cameraRight.y = local_38[0].y;
		this._cameraRight.z = cameraRight.z;
		this._cameraPosition.x = local_38[1].y;
		this._cameraPosition.y = local_38[1].z;
		this._cameraPosition.z = cameraPosition.z;
		this.UpdateSurfaceFrame();
		this._center.x = (float)local_18._0_4_;
		this._center.y = (float)local_18._4_4_;
		this._center.z = center.z;
		this._hasCenter = true;
		this.UpdateCircle();
		this.PositionGhosts();
		return;
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5B83040", Offset = "0x5B82040", VA = "0x5B83040")]
	public void SetAlignToSurface(bool alignToSurface)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetAlignToSurface): clean


		this.AlignToSurface = alignToSurface;
		this.UpdateSurfaceFrame();
		this.UpdateCircle();
		this.PositionGhosts() ;
		return;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x5B82770", Offset = "0x5B81770", VA = "0x5B82770")]
	private void UpdateSurfaceFrame()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$UpdateSurfaceFrame): 146 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		float fVar5;
		ulong uVar6;
		uint uVar10;
		float fVar11;
		ulong uVar7;
		uint uVar12;
		float fVar13;
		ulong uVar8;
		float fVar14;
		ulong uVar9;
		uint uVar15;
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		byte[] auVar18 = new byte[16];
		Vector3 pUVar19;
		Vector3 pUVar20;
		UnityEngine_Vector3_StaticFields pUVar21;
		uint extraout_XMM0_Db;
		uint uVar22;
		float extraout_XMM0_Db_00;
		float extraout_XMM0_Db_01;
		float extraout_XMM0_Db_02;
		float fVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		byte[] auVar27 = new byte[16];
		byte[] auVar28 = new byte[16];
		byte[] auVar29 = new byte[16];
		byte[] auVar30 = new byte[16];
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		Quaternion UVar41;
		byte[] local_b8 = new byte[8];
		float fStack_b0;
		float fStack_ac;
		Vector3 local_88;
		float local_78;
		float fStack_74;
		Vector3 UStack_70;
		float fStack_64;
		ulong uStack_60;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float local_48;
		float local_38;
		float fStack_34;
		ulong uStack_30;
		Vector3 local_28;

		if (this.AlignToSurface == false) {
			pUVar20 = &Vector3.upVector;
			pUVar19 = &(Vector3.upVector);
		}
		else {
			pUVar20 = &this._hitNormal;
			pUVar19 = &this._hitNormal;
		}
		fVar5 = pUVar19.z;
		uVar6._0_4_ = pUVar20.x;
		uVar6._4_4_ = pUVar20.y;
		this._surfaceNormal.x = (float)uVar6;
		this._surfaceNormal.y = uVar6._4_4_;
		this._surfaceNormal.z = fVar5;
		local_b8._0_4_ = this._cameraRight.x;
		local_b8._4_4_ = this._cameraRight.y;
		fVar31 = this._cameraRight.z;
		fVar14 = 0.0;
		fVar11 = 0.0;
		if (g_data_07545e2d == false) {
			UStack_70.x = 0.0;
			UStack_70.y = 0.0;
			g_data_07545e2d = true;
			uVar6._0_4_ = local_78;
			uVar6._4_4_ = fStack_74;
			fVar14 = UStack_70.x;
			fVar11 = UStack_70.y;
		}
		uVar7._4_4_ = fVar5 * fVar5 + uVar6._4_4_ * uVar6._4_4_ + (float)uVar6 * (float)uVar6;
		if (Mathf.Epsilon <= uVar7._4_4_) {
			uVar7._4_4_ = (fVar31 * fVar5 + (float)local_b8._4_4_ * uVar6._4_4_ + (float)local_b8._0_4_ * (float)uVar6 ) / uVar7._4_4_;
			local_b8._4_4_ = (float)local_b8._4_4_ - uVar7._4_4_ * uVar6._4_4_;
			local_b8._0_4_ = (float)local_b8._0_4_ - uVar7._4_4_ * (float)uVar6;
			fStack_b0 = 0.0 - uVar7._4_4_ * fVar14;
			fStack_ac = 0.0 - uVar7._4_4_ * fVar11;
			fVar31 = fVar31 - fVar5 * uVar7._4_4_;
			if (Il2CppMethodInitialized_0753e72d == false) goto label_05c82952;
	label_05c8287e: ;
			local_88.x = 0.0;
			local_88.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05c82894;
	label_05c82980: ;
			local_88.x = 0.0;
			local_88.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar15 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_0753e72d != false) goto label_05c8287e;
	label_05c82952: ;
			Il2CppMethodInitialized_0753e72d = true;
			local_88.x = 0.0;
			local_88.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05c82980;
	label_05c82894: ;
			local_88.x = 0.0;
			local_88.y = 0.0;
			uVar15 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar15 == 0) {
		}
		uVar22 = 0;
		fVar5 = fVar31 * fVar31 +(float)local_b8._4_4_ * (float)local_b8._4_4_ + (float)local_b8._0_4_ * (float)local_b8._0_4_;
		if (fVar5 < 0.0) {
			fVar5 = sqrtf(fVar5);
			uVar22 = extraout_XMM0_Db;
			if (1e-05 < fVar5) goto label_05c829cb;
	label_05c828eb: ;
			pUVar21 = typeof(Vector3).static_fields;
			fVar31 = (pUVar21.zeroVector).z;
		}
		else {
			fVar5 = SQRT(fVar5);
			if (fVar5 <= 1e-05) goto label_05c828eb;
	label_05c829cb: ;
			fVar31 = fVar31 / fVar5;
			auVar30._4_4_ = fVar5;
			auVar30._0_4_ = fVar5;
			auVar30._8_4_ = uVar22;
			auVar30._12_4_ = uVar22;
			auVar30 = divps(_local_b8, auVar30);
			local_88.x = auVar30._0_4_;
			local_88.y = auVar30._4_4_;
			pUVar21 = (UnityEngine_Vector3_StaticFields)&local_88;
		}
		uVar1 = (pUVar21.zeroVector).x;
		uVar10 = (pUVar21.zeroVector).y;
		uVar6._0_4_ = fVar31 * fVar31 + (float)uVar10 * (float)uVar10 + (float)uVar1 * (float)uVar1;
		fVar5 = (float)uVar1;
		fVar14 = (float)uVar10;
		if ((float)uVar6 < 0.0001) {
			uVar2 = this._surfaceNormal.x;
			fVar11 = this._surfaceNormal.y;
			fVar5 = this._surfaceNormal.z;
			pUVar21 = typeof(Vector3).static_fields;
			uVar7._0_4_ = (pUVar21.forwardVector).x;
			uVar7._4_4_ = (pUVar21.forwardVector).y;
			uVar6._0_4_ = (pUVar21.forwardVector).z;
			uVar6._4_4_ = (float)uVar2;
			fVar14 = 0.0;
			fVar13 = 0.0;
			uVar8._4_4_ = fVar11;
			fVar33 = fVar11;
			fVar34 = fVar11;
			fVar35 = fVar11;
			fVar36 = (float)uVar7;
			fVar37 = uVar7._4_4_;
			fVar38 = (float)uVar6;
			fVar39 = fVar5;
			fVar40 = 0.0;
			fVar32 = 0.0;
			if (Il2CppMethodInitialized_0753e72d == false) {
				fStack_74 = fVar11;
				local_78 = fVar11;
				UStack_70.y = fVar11;
				UStack_70.x = fVar11;
				uStack_60._0_4_ = 0.0;
				uStack_60._4_4_ = 0.0;
				fStack_50 = 0.0;
				fStack_4c = 0.0;
				fStack_34 = (float)uVar2;
				local_38 = uVar7._4_4_;
				uStack_30._0_4_ = 0.0;
				uStack_30._4_4_ = 0.0;
				local_58 = (float)uVar6;
				fStack_54 = fVar5;
				local_48 = uVar7._4_4_;
				Il2CppMethodInitialized_0753e72d = true;
				uVar7._4_4_ = local_38;
				uVar6._4_4_ = fStack_34;
				fVar14 = (float)uStack_30;
				fVar13 = uStack_30._4_4_;
				uVar8._4_4_ = local_78;
				fVar33 = fStack_74;
				fVar34 = UStack_70.x;
				fVar35 = UStack_70.y;
				fVar36 = UStack_70.z;
				fVar37 = local_48;
				fVar38 = local_58;
				fVar39 = fStack_54;
				fVar40 = fStack_50;
				fVar32 = fStack_4c;
			}
			local_88.x = 0.0;
			local_88.y = 0.0;
			fVar31 = uVar8._4_4_ * fVar36;
			if (Il2CppMethodInitialized_0753e729 == false) {
				fStack_74 = fVar33;
				local_78 = uVar8._4_4_ * fVar36;
				UStack_70.y = fVar35;
				UStack_70.x = fVar34;
				Il2CppMethodInitialized_0753e729 = true;
				fVar31 = local_78;
			}
			auVar27._0_4_ = fVar11 * fVar38 - fVar5 * uVar7._4_4_;
			auVar27._4_4_ = (float)uVar7 * fVar39 - (float)uVar6 * uVar6._4_4_;
			auVar27._8_4_ = fVar40 * 0.0 - fVar14 * 0.0;
			auVar27._12_4_ = fVar32 * 0.0 - fVar13 * 0.0;
			fVar31 = (float)uVar2 * fVar37 - fVar31;
			fVar5 = fVar31 * fVar31 + auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_;
			if (fVar5 < 0.0) {
				fVar5 = sqrtf(fVar5);
				fVar11 = extraout_XMM0_Db_00;
				if (1e-05 < fVar5) goto label_05c82c03;
	label_05c82bc0: ;
				pUVar21 = typeof(Vector3).static_fields;
				fVar31 = (pUVar21.zeroVector).z;
			}
			else {
				fVar5 = SQRT(fVar5);
				if (fVar5 <= 1e-05) goto label_05c82bc0;
	label_05c82c03: ;
				fVar31 = fVar31 / fVar5;
				auVar18._4_4_ = fVar5;
				auVar18._0_4_ = fVar5;
				auVar18._8_4_ = fVar11;
				auVar18._12_4_ = fVar11;
				auVar30 = divps(auVar27, auVar18);
				local_88.x = auVar30._0_4_;
				local_88.y = auVar30._4_4_;
				pUVar21 = (UnityEngine_Vector3_StaticFields)&local_88;
			}
			uVar3 = (pUVar21.zeroVector).x;
			uVar12 = (pUVar21.zeroVector).y;
			uVar6._0_4_ = fVar31 * fVar31 + (float)uVar12 * (float)uVar12 + (float)uVar3 * (float)uVar3;
			fVar5 = (float)uVar3;
			fVar14 = (float)uVar12;
		}
		if (0.0001 <= (float)uVar6) goto label_05c82e4d;
		uVar4 = this._surfaceNormal.x;
		fVar13 = this._surfaceNormal.y;
		fVar5 = this._surfaceNormal.z;
		pUVar21 = typeof(Vector3).static_fields;
		uVar8._0_4_ = (pUVar21.upVector).x;
		uVar8._4_4_ = (pUVar21.upVector).y;
		uVar6._0_4_ = (pUVar21.upVector).z;
		uVar6._4_4_ = (float)uVar4;
		fVar14 = 0.0;
		fVar11 = 0.0;
		uVar7._4_4_ = fVar13;
		fVar33 = fVar13;
		fVar34 = fVar13;
		fVar35 = fVar13;
		fVar36 = (float)uVar8;
		fVar37 = uVar8._4_4_;
		fVar38 = (float)uVar6;
		fVar39 = fVar5;
		fVar40 = 0.0;
		fVar32 = 0.0;
		if (Il2CppMethodInitialized_0753e72d == false) {
			fStack_74 = fVar13;
			local_78 = fVar13;
			UStack_70.y = fVar13;
			UStack_70.x = fVar13;
			uStack_60._0_4_ = 0.0;
			uStack_60._4_4_ = 0.0;
			fStack_50 = 0.0;
			fStack_4c = 0.0;
			fStack_34 = (float)uVar4;
			local_38 = uVar8._4_4_;
			uStack_30._0_4_ = 0.0;
			uStack_30._4_4_ = 0.0;
			local_58 = (float)uVar6;
			fStack_54 = fVar5;
			local_48 = uVar8._4_4_;
			Il2CppMethodInitialized_0753e72d = true;
			uVar8._4_4_ = local_38;
			uVar6._4_4_ = fStack_34;
			fVar14 = (float)uStack_30;
			fVar11 = uStack_30._4_4_;
			uVar7._4_4_ = local_78;
			fVar33 = fStack_74;
			fVar34 = UStack_70.x;
			fVar35 = UStack_70.y;
			fVar36 = UStack_70.z;
			fVar37 = local_48;
			fVar38 = local_58;
			fVar39 = fStack_54;
			fVar40 = fStack_50;
			fVar32 = fStack_4c;
		}
		local_88.x = 0.0;
		local_88.y = 0.0;
		fVar31 = uVar7._4_4_ * fVar36;
		if (Il2CppMethodInitialized_0753e729 == false) {
			fStack_74 = fVar33;
			local_78 = uVar7._4_4_ * fVar36;
			UStack_70.y = fVar35;
			UStack_70.x = fVar34;
			Il2CppMethodInitialized_0753e729 = true;
			fVar31 = local_78;
		}
		auVar28._0_4_ = fVar13 * fVar38 - fVar5 * uVar8._4_4_;
		auVar28._4_4_ = (float)uVar8 * fVar39 - (float)uVar6 * uVar6._4_4_;
		auVar28._8_4_ = fVar40 * 0.0 - fVar14 * 0.0;
		auVar28._12_4_ = fVar32 * 0.0 - fVar11 * 0.0;
		fVar31 = (float)uVar4 * fVar37 - fVar31;
		fVar5 = fVar31 * fVar31 + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
		if (fVar5 < 0.0) {
			fVar5 = sqrtf(fVar5);
			fVar13 = extraout_XMM0_Db_01;
			if (1e-05 < fVar5) goto label_05c82e2d;
	label_05c82dfc: ;
			pUVar21 = typeof(Vector3).static_fields;
			fVar31 = (pUVar21.zeroVector).z;
		}
		else {
			fVar5 = SQRT(fVar5);
			if (fVar5 <= 1e-05) goto label_05c82dfc;
	label_05c82e2d: ;
			fVar31 = fVar31 / fVar5;
			auVar17._4_4_ = fVar5;
			auVar17._0_4_ = fVar5;
			auVar17._8_4_ = fVar13;
			auVar17._12_4_ = fVar13;
			auVar30 = divps(auVar28, auVar17);
			local_88.x = auVar30._0_4_;
			local_88.y = auVar30._4_4_;
			pUVar21 = (UnityEngine_Vector3_StaticFields)&local_88;
		}
		fVar5 = (pUVar21.zeroVector).x;
		fVar14 = (pUVar21.zeroVector).y;
	label_05c82e4d: ;
		uVar9._0_4_ = this._surfaceNormal.x;
		uVar9._4_4_ = this._surfaceNormal.y;
		uVar6._0_4_ = this._surfaceNormal.z;
		uVar6._4_4_ = (float)uVar9;
		fVar11 = uVar9._4_4_;
		uVar7._4_4_ = 0.0;
		fVar13 = 0.0;
		uVar8._4_4_ = uVar9._4_4_;
		fVar33 = uVar9._4_4_;
		fVar34 = (float)uVar6;
		fVar35 = uVar9._4_4_;
		fVar36 = uVar9._4_4_;
		fVar37 = fVar31;
		fVar38 = fVar5;
		fVar39 = fVar31;
		fVar40 = fVar31;
		if (Il2CppMethodInitialized_0753e72d == false) {
			UStack_70.x = 0.0;
			UStack_70.y = 0.0;
			fStack_64 = fVar5;
			UStack_70.z = fVar31;
			uStack_60._4_4_ = fVar31;
			uStack_60._0_4_ = fVar31;
			local_58 = uVar9._4_4_;
			fStack_54 = (float)uVar6;
			fStack_50 = uVar9._4_4_;
			fStack_4c = uVar9._4_4_;
			local_48 = uVar9._4_4_;
			Il2CppMethodInitialized_0753e72d = true;
			uVar6._4_4_ = local_78;
			fVar11 = fStack_74;
			uVar7._4_4_ = UStack_70.x;
			fVar13 = UStack_70.y;
			uVar8._4_4_ = local_48;
			fVar33 = local_58;
			fVar34 = fStack_54;
			fVar35 = fStack_50;
			fVar36 = fStack_4c;
			fVar37 = UStack_70.z;
			fVar38 = fStack_64;
			fVar39 = (float)uStack_60;
			fVar40 = uStack_60._4_4_;
		}
		local_88.x = 0.0;
		local_88.y = 0.0;
		fVar32 = uVar6._4_4_ * fVar14;
		fVar23 = fVar37 * fVar33;
		fVar24 = fVar38 * fVar34;
		fVar25 = fVar39 * fVar35;
		fVar26 = fVar40 * fVar36;
		if (Il2CppMethodInitialized_0753e729 == false) {
			fStack_74 = fVar11;
			local_78 = uVar6._4_4_ * fVar14;
			UStack_70.y = fVar13;
			UStack_70.x = uVar7._4_4_;
			fStack_64 = fVar38 * fVar34;
			UStack_70.z = fVar37 * fVar33;
			uStack_60._4_4_ = fVar40 * fVar36;
			uStack_60._0_4_ = fVar39 * fVar35;
			Il2CppMethodInitialized_0753e729 = true;
			fVar32 = local_78;
			fVar23 = UStack_70.z;
			fVar24 = fStack_64;
			fVar25 = (float)uStack_60;
			fVar26 = uStack_60._4_4_;
		}
		auVar29._0_4_ = (float)uVar6 * fVar14 - fVar23;
		auVar29._4_4_ = (float)uVar9 * fVar31 - fVar24;
		auVar29._8_4_ = fVar14 * 0.0 - fVar25;
		auVar29._12_4_ = uVar9._4_4_ * fVar14 - fVar26;
		fVar32 = fVar5 * uVar8._4_4_ - fVar32;
		fVar5 = fVar32 * fVar32 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
		if (fVar5 < 0.0) {
			fVar5 = sqrtf(fVar5);
			fVar14 = extraout_XMM0_Db_02;
		}
		else {
			fVar5 = SQRT(fVar5);
		}
		if (1e-05 < fVar5) {
			local_88.z = fVar32 / fVar5;
			auVar16._4_4_ = fVar5;
			auVar16._0_4_ = fVar5;
			auVar16._8_4_ = fVar14;
			auVar16._12_4_ = fVar14;
			auVar30 = divps(auVar29, auVar16);
			local_88.x = auVar30._0_4_;
			local_88.y = auVar30._4_4_;
			pUVar21 = (UnityEngine_Vector3_StaticFields)&local_88;
		}
		else {
			pUVar21 = typeof(Vector3).static_fields;
			local_88.z = (pUVar21.zeroVector).z;
		}
		local_88.x = (pUVar21.zeroVector).x;
		local_88.y = (pUVar21.zeroVector).y;
		local_28.x = this._surfaceNormal.x;
		local_28.y = this._surfaceNormal.y;
		local_28.z = this._surfaceNormal.z;
		UVar41 = (Quaternion)Quaternion.Internal_LookRotation(ref local_88, ref local_28) ;
		this._surfaceFrame = UVar41;
		return;
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x5B83060", Offset = "0x5B82060", VA = "0x5B83060")]
	public bool TryProjectRayToPlane(Ray ray, out Vector3 point)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$TryProjectRayToPlane): 13 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar16;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];

		fVar1 = (Vector3.zeroVector).y;
		fVar12 = (Vector3.zeroVector).z;
		point.x = (Vector3.zeroVector).x;
		point.y = fVar1;
		point.z = fVar12;
		if (this._hasCenter != false) {
			uVar2 = this._surfaceNormal.x;
			uVar4 = this._surfaceNormal.y;
			fVar12 = this._surfaceNormal.z;
			uVar3 = this._center.x;
			uVar5 = this._center.y;
			fVar1 = this._center.z;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
			}
			fVar8 = fVar12 * fVar12 + (float)uVar4 * (float)uVar4 + (float)uVar2 * (float)uVar2;
			if (fVar8 < 0.0) {
				fVar8 = sqrtf(fVar8);
			}
			else {
				fVar8 = SQRT(fVar8);
			}
			fVar16 = 0.0;
			fVar13 = 0.0;
			fVar11 = 0.0;
			if (1e-05 < fVar8) {
				fVar11 = (float)uVar2 / fVar8;
				auVar14._4_4_ = fVar12;
				auVar14._0_4_ = uVar4;
				auVar14._8_4_ = uVar4;
				auVar14._12_4_ = uVar4;
				auVar15._4_4_ = fVar8;
				auVar15._0_4_ = fVar8;
				auVar15._8_4_ = fVar8;
				auVar15._12_4_ = fVar8;
				auVar15 = divps(auVar14, auVar15);
				fVar13 = auVar15._0_4_;
				fVar16 = auVar15._4_4_;
			}
			fVar12 = fVar16 * ray.m_Direction.z + ray.m_Direction.y * fVar13 + fVar11 * ray.m_Direction.x;
			fVar8 = ABS(fVar12);
			if (fVar8 <= 0.0) {
				fVar8 = 0.0;
			}
			fVar10 = Mathf.Epsilon * 8.0;
			fVar9 = fVar8 * 1e-06;
			if (fVar8 * 1e-06 <= fVar10) {
				fVar9 = fVar10;
			}
			if (fVar9 <= ABS(0.0 - fVar12)) {
				fVar12 = ((fVar1 * fVar16 + (float)uVar5 * fVar13 + (float)uVar3 * fVar11) -(fVar16 * ray.m_Origin.z + ray.m_Origin.y * fVar13 + fVar11 * ray.m_Origin.x)) / fVar12;
				if (0.0 < fVar12) {
					point.x = fVar12 * ray.m_Direction.x + ray.m_Origin.x;
					point.y = fVar12 * ray.m_Direction.y + ray.m_Origin.y;
					point.z = ray.m_Origin.z + ray.m_Direction.z * fVar12;
					return true;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x5B83380", Offset = "0x5B82380", VA = "0x5B83380")]
	public void ClearCenter()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ClearCenter): 2 lines keep C-only constructs
		Object pUVar1;
		LineRenderer __this_00;
		GameObject __this_01;
		List<GameObject> __this_02;
		object x;
		bool bVar2;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		this._hasCenter = false;
		pUVar1 = (Object)this._circleRenderer;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			__this_00 = this._circleRenderer;
			if (__this_00 == null) goto label_05c8351c;
			__this_00.positionCount = 0;
		}
		pUVar1 = (Object)this._diskIndicator;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			__this_01 = this._diskIndicator;
			if (__this_01 == null) goto label_05c8351c;
			__this_01.SetActive(false);
		}
		__this_02 = this._ghostObjects;
		if (__this_02 != null) {
			local_48 = __this_02.GetEnumerator();
			local_28 = (byte)&local_48;
			while(true) {
				do {
					bVar2 = local_48.MoveNext();
					x = local_48._current;
					if (!bVar2) {
						local_48.Dispose();
						return;
					}
					bVar2 = ((Object)x != null);
				} while (!bVar2);
				if ((Object)x == null) break;
				x.SetActive(false);
			}
			throw new NullReferenceException();
		}
	label_05c8351c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x5B80230", Offset = "0x5B7F230", VA = "0x5B80230")]
	private void EnsureCircle()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$EnsureCircle): 24 lines keep C-only constructs
		GameObject* targetAddress;
		LineRenderer* targetAddress_00;
		Material* ppUVar1;
		bool bVar2;
		GameObject pUVar3;
		LineRenderer pUVar4;
		Object pUVar5;
		Material pUVar6;
		MeshFilter pUVar7;
		MeshRenderer __this_00;
		Object x;
		MethodInfo method_00;
		Color UVar8;
		Color value;

		pUVar5 = (Object)this._circleIndicator;
		bVar2 = (pUVar5 != null);
		if (bVar2) {
			return;
		}
		targetAddress = &this._circleIndicator;
		pUVar3 = new GameObject("MapEditorBrushCircle");
		*targetAddress = pUVar3;
		if (*targetAddress != null) {
			pUVar4 = (*targetAddress).AddComponent<LineRenderer>();
			targetAddress_00 = &this._circleRenderer;
			this._circleRenderer = pUVar4;
			pUVar4 = this._circleRenderer;
			if (pUVar4 != null) {
				pUVar4.loop = true;
				if (*targetAddress_00 != null) {
					(*targetAddress_00).useWorldSpace = true;
					if (*targetAddress_00 != null) {
						(*targetAddress_00).widthMultiplier = 0.2;
						pUVar5 = (Object)Shader.Find("Sprites/Default");
						bVar2 = (pUVar5 == null);
						if (bVar2) {
							pUVar5 = (Object)Shader.Find("Unlit/Color") ;
						}
						pUVar6 = new Material((Shader)pUVar5);
						ppUVar1 = &this._circleMaterial;
						this._circleMaterial = pUVar6;
						pUVar6 = this._circleMaterial;
						if (pUVar6 != null) {
							UVar8.b = 1.0;
							UVar8.a = 0.9;
							UVar8.r = 0.2;
							UVar8.g = 0.8;
							pUVar6.color = UVar8;
							if ((Renderer)*targetAddress_00 != null) {
								(*targetAddress_00).sharedMaterial = *ppUVar1;
								if (*ppUVar1 != null) {
									pUVar4 = *targetAddress_00;
									UVar8 = (*ppUVar1).color;
									if (pUVar4 != null) {
										pUVar4.startColor = UVar8;
										if (*ppUVar1 != null) {
											pUVar4 = *targetAddress_00;
											UVar8 = (*ppUVar1).color;
											if (pUVar4 != null) {
												pUVar4.endColor = UVar8;
												if (*targetAddress_00 != null) {
													(*targetAddress_00).positionCount = 0;
													pUVar3 = new GameObject("MapEditorBrushDisk");
													this._diskIndicator = pUVar3;
													pUVar3 = this._diskIndicator;
													if (pUVar3 != null) {
														pUVar7 = pUVar3.AddComponent<MeshFilter>();
														this._diskFilter = pUVar7;
														pUVar3 = this._diskIndicator;
														if (pUVar3 != null) {
															__this_00 = pUVar3.AddComponent<MeshRenderer>();
															if (__this_00 != null) {
																__this_00.shadowCastingMode = 0;
																__this_00.receiveShadows = false;
																x = (Object)Shader.Find("MapEditor/BrushOverlay");
																bVar2 = (x == null);
																if (bVar2) {
																	x = pUVar5;
																}
																pUVar6 = il2cpp_codegen_object_new(typeof(Material)) ;
																pUVar6 = new Material((Shader)x);
																ppUVar1 = &this._diskMaterial;
																this._diskMaterial = pUVar6;
																pUVar6 = this._diskMaterial;
																if (pUVar6 != null) {
																	value.b = 1.0;
																	value.a = 0.25;
																	value.r = 0.2;
																	value.g = 0.8;
																	pUVar6.color = value;
																	__this_00.sharedMaterial = *ppUVar1;
																	pUVar5 = new Mesh();
																	if (pUVar5 != null) {
																		pUVar5.name = "BrushDisk" ;
																		this._diskMesh = (Mesh)pUVar5;
																		pUVar7 = this._diskFilter;
																		if (pUVar7 != null) {
																			method_00 = (MethodInfo)this._diskMesh;
																			pUVar7.mesh = (Mesh)method_00;
																			this.BuildOverlayVolume();
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x5B80070", Offset = "0x5B7F070", VA = "0x5B80070")]
	private void DestroyCircle()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$DestroyCircle): 6 lines keep C-only constructs
		GameObject* ppUVar1;
		Object pUVar2;
		Material obj;
		bool bVar3;
		Material* targetAddress;

		pUVar2 = (Object)this._circleIndicator;
		bVar3 = (pUVar2 != null);
		if (bVar3) {
			ppUVar1 = &this._circleIndicator;
			pUVar2 = (Object)*ppUVar1;
			Object.Destroy(pUVar2);
			Object.Destroy((Object)this._circleMaterial);
			this._circleIndicator = null;
			this._circleRenderer = null;
			this._circleMaterial = null;
		}
		pUVar2 = (Object)this._diskIndicator;
		bVar3 = (pUVar2 != null);
		if (bVar3) {
			ppUVar1 = &this._diskIndicator;
			pUVar2 = (Object)*ppUVar1;
			Object.Destroy(pUVar2);
			Object.Destroy((Object)this._diskMesh);
			this._diskIndicator = null;
			this._diskFilter = null;
			this._diskMesh = null;
			targetAddress = &this._diskMaterial;
			bVar3 = ((Object)this._diskMaterial != null);
			if (bVar3) {
				obj = *targetAddress;
				Object.Destroy((Object)obj);
			}
			*targetAddress = null;
			return;
		}
		return;
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x5B816F0", Offset = "0x5B806F0", VA = "0x5B816F0")]
	private void UpdateCircle()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$UpdateCircle): 21 lines keep C-only constructs
		Object pUVar1;
		LineRenderer pUVar2;
		GameObject pUVar3;
		bool bVar4;
		LayerMask mask;
		int mask_00;
		Int32[] layers;
		object pIVar5;
		IntPtr ppvVar6;
		ulong uVar7;
		MethodInfo method_00;
		float fVar8;
		Quaternion rotation;
		Vector3 UVar9;
		Vector3 planePoint;
		Vector3 planePoint_00;
		Vector3 point;
		bool local_81;
		float local_80;
		float local_7c;
		ulong local_78;
		byte[] local_68 = new byte[16];
		ulong local_58;
		ulong local_48;

		pUVar1 = (Object)this._circleRenderer;
		bVar4 = (pUVar1 == null);
		if ((bVar4) || (this._hasCenter == false)) {
			return;
		}
		if (this.Mode == 1) {
			pUVar2 = this._circleRenderer;
			if (pUVar2 != null) {
				pUVar2.positionCount = 0;
				pUVar1 = (Object)this._diskIndicator;
				bVar4 = (pUVar1 != null);
				if (!bVar4) {
					return;
				}
				pUVar3 = this._diskIndicator;
				if (pUVar3 != null) {
					pUVar3.SetActive(false);
					return;
				}
			}
		}
		else {
			pUVar1 = (Object)this._diskIndicator;
			bVar4 = (pUVar1 != null);
			if (bVar4) {
				pUVar3 = this._diskIndicator;
				if (pUVar3 == null) goto label_05c81a17;
				bVar4 = pUVar3.activeSelf;
				if (!bVar4) {
					pUVar3 = this._diskIndicator;
					if (pUVar3 == null) goto label_05c81a17;
					pUVar3.SetActive(true);
				}
			}
			layers = (Int32[])new int[1];
			if (layers != null) {
				if ((int)layers.Length != 0) {
					layers[0] = PhysicsLayer.MapEditorObject;
					mask = PhysicsLayer.GetMask(layers);
					mask_00 = ((LayerMask)mask);
					pUVar2 = this._circleRenderer;
					if (pUVar2 == null) goto label_05c81a17;
					pUVar2.positionCount = 0x60;
					pIVar5 = new Vector3[0x60];
					if (pIVar5 == null) {
						local_78._0_4_ = this._center.x;
						local_78._4_4_ = this._center.y;
						local_80 = this._center.z;
						UVar9.z = this.Radius * 0.0;
						UVar9.y = 0.0;
						UVar9.x = this.Radius;
						UVar9 = ((Quaternion)this._surfaceFrame * UVar9);
						planePoint_00.x = UVar9.x + (float)local_78;
						planePoint_00.y = UVar9.y + local_78._4_4_;
						planePoint_00.z = UVar9.z + local_80;
						this.ProjectIndicatorPoint(planePoint_00, mask_00, 0.1, ref local_81);
						throw new NullReferenceException();
					}
					ppvVar6 = &pIVar5[2].monitor;
					uVar7 = 0;
					while(true) {
						local_7c = ((float)(int)uVar7 / 96.0) * 3.1415927;
						local_7c = local_7c + local_7c;
						local_78._0_4_ = this._center.x;
						local_78._4_4_ = this._center.y;
						local_80 = this._center.z;
						local_48._0_4_ = this._surfaceFrame.x;
						local_48._4_4_ = this._surfaceFrame.y;
						local_58._0_4_ = this._surfaceFrame.z;
						local_58._4_4_ = this._surfaceFrame.w;
						fVar8 = cosf(local_7c);
						local_68 = ZEXT416((uint)(fVar8 * this.Radius));
						fVar8 = sinf(local_7c);
						point.z = fVar8 * this.Radius;
						rotation.z = (float)(undefined4)local_58;
						rotation.w = (float)local_58._4_4_;
						rotation.x = (float)(undefined4)local_48;
						rotation.y = (float)local_48._4_4_;
						point.x = (float)local_68._0_4_;
						point.y = (float)local_68._4_4_;
						UVar9 = (rotation * point);
						planePoint.x = UVar9.x + (float)local_78;
						planePoint.y = UVar9.y + local_78._4_4_;
						planePoint.z = UVar9.z + local_80;
						UVar9 = this.ProjectIndicatorPoint(planePoint, mask_00, 0.1, ref local_81);
						if (*(uint)&pIVar5[1].monitor <= uVar7) break;
						((object)(ppvVar6 + -1)).klass = UVar9._0_8_;
						*(float)ppvVar6 = UVar9.z;
						if (*(uint)&pIVar5[1].monitor <= uVar7) break;
						pUVar2 = this._circleRenderer;
						if (pUVar2 == null) goto label_05c81a17;
						method_00 = (MethodInfo)(uVar7 & 0xffffffff);
						pUVar2.SetPosition((int)uVar7, UVar9);
						uVar7 = uVar7 + 1;
						ppvVar6 = (IntPtr)((long)ppvVar6 + 0xc);
						if (uVar7 == 0x60) {
							this.UpdateDisk();
							return;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05c81a17: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x5B83590", Offset = "0x5B82590", VA = "0x5B83590")]
	private void BuildOverlayVolume()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$BuildOverlayVolume): clean
		uint uVar1;
		Mesh pUVar2;
		Vector3[] value;
		Int32[] value_00;

		pUVar2 = this._diskMesh;
		value = (Vector3[])new Vector3[8];
		if (value == null) {
	label_05c83720: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)value.Length;
		if (uVar1 != 0) {
			value[0].x = -0.5;
			value[0].y = -0.5;
			value[0].z = -0.5;
			if (uVar1 != 1) {
				value[1].x = 0.5;
				value[1].y = -0.5;
				value[1].z = -0.5;
				if (2 < uVar1) {
					value[2].x = 0.5;
					value[2].y = 0.5;
					value[2].z = -0.5;
					if (uVar1 != 3) {
						value[3].x = -0.5;
						value[3].y = 0.5;
						value[3].z = -0.5;
						if (4 < uVar1) {
							value[4].x = -0.5;
							value[4].y = -0.5;
							value[4].z = 0.5;
							if (uVar1 != 5) {
								value[5].x = 0.5;
								value[5].y = -0.5;
								value[5].z = 0.5;
								if (6 < uVar1) {
									value[6].x = 0.5;
									value[6].y = 0.5;
									value[6].z = 0.5;
									if (uVar1 != 7) {
										value[7].x = -0.5;
										value[7].y = 0.5;
										value[7].z = 0.5;
										if (pUVar2 != null) {
											pUVar2.vertices = value;
											pUVar2 = this._diskMesh;
											value_00 = (Int32[])new int[0x24];
											RuntimeHelpers.InitializeArray((Array)value_00, FieldRva_PrivateImplementationDetails_BAC1DE1D52860E9D1D326EB674384C4869F1C35998573C8EB026D0BC9D462B36);
											if (pUVar2 != null) {
												pUVar2.triangles = value_00;
												pUVar2 = this._diskMesh;
												if (pUVar2 != null) {
													pUVar2.RecalculateBounds();
													return;
												}
											}
										}
										goto label_05c83720;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x5B839F0", Offset = "0x5B829F0", VA = "0x5B839F0")]
	private void UpdateDisk()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$UpdateDisk): 4 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Object x;
		Material pUVar5;
		GameObject pUVar6;
		Quaternion UVar7;
		bool bVar8;
		Transform pUVar9;
		float value;
		float fVar10;
		Vector4 value_00;
		Vector4 value_01;
		Vector4 value_02;
		Vector4 value_03;
		Vector3 value_04;
		Vector3 value_05;

		x = (Object)this._diskIndicator;
		bVar8 = (x == null);
		if (!bVar8) {
			pUVar5 = this._diskMaterial;
			bVar8 = ((Object)pUVar5 == null);
			if (!bVar8) {
				value = this.GetUpwardProjectionLimit();
				pUVar6 = this._diskIndicator;
				if (pUVar6 != null) {
					pUVar9 = pUVar6.transform;
					if (pUVar9 != null) {
						fVar10 = (value + -2000.0) * 0.5;
						value_04.z =this._surfaceNormal.z * fVar10 + this._center.z;
						uVar1 = this._center.x;
						uVar3 = this._center.y;
						uVar2 = this._surfaceNormal.x;
						uVar4 = this._surfaceNormal.y;
						value_04.x = fVar10 * (float)uVar2 + (float)uVar1;
						value_04.y = fVar10 * (float)uVar4 + (float)uVar3;
						pUVar9.position = value_04;
						pUVar6 = this._diskIndicator;
						if (pUVar6 != null) {
							pUVar9 = pUVar6.transform;
							if (pUVar9 != null) {
								pUVar9.rotation = (Quaternion)this._surfaceFrame;
								pUVar6 = this._diskIndicator;
								if (pUVar6 != null) {
									pUVar9 = pUVar6.transform;
									if (pUVar9 != null) {
										fVar10 = this.Radius;
										value_05.z = fVar10 + fVar10;
										value_05.y = value + 2000.0;
										value_05.x = value_05.z;
										pUVar9.localScale = value_05;
										pUVar5 = this._diskMaterial;
										if (pUVar5 != null) {
											value_00.w = 0.0;
											value_00._0_12_ = this._center;
											pUVar5.SetVector("_BrushCenter", value_00);
											pUVar5 = this._diskMaterial;
											UVar7 = this._surfaceFrame;
											value_01._0_12_ = ((Quaternion)UVar7 * (Vector3)(Vector3.rightVector));
											if (pUVar5 != null) {
												value_01.w = 0.0;
												pUVar5.SetVector("_BrushRight", value_01) ;
												pUVar5 = this._diskMaterial;
												UVar7 = this._surfaceFrame;
												value_02._0_12_ = ((Quaternion)UVar7 * (Vector3)(Vector3.forwardVector));
												if (pUVar5 != null) {
													value_02.w = 0.0;
													pUVar5.SetVector("_BrushForward", value_02);
													pUVar5 = this._diskMaterial;
													if (pUVar5 != null) {
														value_03.w = 0.0;
														value_03._0_12_ = this._surfaceNormal;
														pUVar5.SetVector("_BrushNormal", value_03);
														pUVar5 = this._diskMaterial;
														if (pUVar5 != null) {
															pUVar5.SetFloat("_BrushRadius", this.Radius) ;
															pUVar5 = this._diskMaterial;
															if (pUVar5 != null) {
																pUVar5.SetFloat("_UpperLimit", value);
																pUVar5 = this._diskMaterial;
																if (pUVar5 != null) {
																	pUVar5.SetFloat("_LowerLimit", 2000.0);
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
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x5B83DD0", Offset = "0x5B82DD0", VA = "0x5B83DD0")]
	private float GetUpwardProjectionLimit()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetUpwardProjectionLimit): 9 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		List<Vector3> __this_00;
		bool bVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Quaternion rotation;
		Vector3 UVar12;
		float local_90;
		float local_88;
		byte[] local_68 = new byte[16];
		System_Collections_Generic_List_Enumerator_T__o local_58;
		float fStack_40;
		Quaternion local_38;

		local_58._current = null;
		fStack_40 = 0.0;
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		fVar10 = this.SurfaceProjectionLimit;
		if (this.Mode == 1) {
			__this_00 = this._ghostLocalOffsets;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_58 = __this_00.GetEnumerator();
			local_68._0_4_ = 0.0;
			local_68._4_4_ = 0.0;
			local_90 = 0.0;
			local_68._8_8_ = &local_58;
			while (bVar8 = local_58.MoveNext()) {
				UVar12.z = fStack_40;
				UVar12._0_8_ = local_58._current;
				UVar12 = this.ApplyCurve(UVar12, ref local_38);
				if (Il2CppMethodInitialized_0753e7b5 == false) {
					Il2CppMethodInitialized_0753e7b5 = true;
					uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar7 == 0) {
				}
				local_88 = UVar12.x;
				fVar9 = UVar12.z * UVar12.z + local_88 * local_88;
				if (fVar9 < 0.0) {
					fVar9 = sqrtf(fVar9);
				}
				else {
					fVar9 = SQRT(fVar9);
				}
				if (local_90 <= fVar9) {
					local_90 = fVar9;
				}
			}
			local_58.Dispose();
			UVar12 = this.GetAverageGhostSize();
			local_68._0_4_ = this._surfaceFrame.x;
			local_68._4_4_ = this._surfaceFrame.y;
			local_68._8_4_ = this._surfaceFrame.z;
			local_68._12_4_ = this._surfaceFrame.w;
			rotation = Quaternion.Internal_Inverse((Quaternion)local_68);
			UVar12 = (rotation * UVar12);
			if (Il2CppMethodInitialized_0753e7b5 == false) {
				Il2CppMethodInitialized_0753e7b5 = true;
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar7 == 0) {
			}
			fVar9 = UVar12.z * UVar12.z + UVar12.x * UVar12.x;
			if (fVar9 < 0.0) {
				fVar9 = sqrtf(fVar9);
			}
			else {
				fVar9 = SQRT(fVar9);
			}
			local_90 = local_90 + fVar9 * 0.5;
		}
		else {
			local_90 = this.Radius;
		}
		fVar9 = 0.01;
		if (0.01 <= fVar10) {
			fVar9 = fVar10;
		}
		if (fVar9 <= local_90) {
			fVar9 = local_90;
		}
		uVar1 = this._center.x;
		uVar4 = this._center.y;
		uVar2 = this._surfaceNormal.x;
		uVar5 = this._surfaceNormal.y;
		uVar3 = this._cameraPosition.x;
		uVar6 = this._cameraPosition.y;
		fVar11 = (this._cameraPosition.z - this._center.z) *this._surfaceNormal.z +((float)uVar6 - (float)uVar4) * (float)uVar5 + ((float)uVar3 - (float)uVar1) * (float)uVar2;
		fVar10 = 0.01;
		if (0.01 <= fVar11) {
			fVar10 = fVar11;
		}
		if (fVar10 <= fVar9) {
			fVar9 = fVar10;
		}
		return fVar9;
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x5B83730", Offset = "0x5B82730", VA = "0x5B83730")]
	private Vector3 ProjectIndicatorPoint(Vector3 planePoint, int mask, float offset, out bool valid)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ProjectIndicatorPoint): 32 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar4;
		uint uVar5;
		ulong uVar3;
		uint uVar6;
		byte[] auVar7 = new byte[16];
		bool bVar8;
		UnityEngine_Vector3_StaticFields pUVar9;
		float fVar10;
		float fVar11;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Db;
		byte[] auVar12 = new byte[16];
		float fVar13;
		Vector3 UVar14;
		float local_70;
		float local_68;
		float fStack_64;
		byte[] local_50 = new byte[8];
		RaycastHit local_48;

		fVar11 = planePoint.z;
		fStack_64 = planePoint.y;
		local_48.m_UV.x = 0.0;
		local_48.m_UV.y = 0.0;
		local_48.m_Collider.m_Data = (EntityId)0x0;
		local_48.m_Normal.y = 0.0;
		local_48.m_Normal.z = 0.0;
		local_48.m_FaceID = 0;
		local_48.m_Distance = 0.0;
		local_48.m_Point.x = 0.0;
		local_48.m_Point.y = 0.0;
		local_48.m_Point.z = 0.0;
		local_48.m_Normal.x = 0.0;
		if (this.FlatPlane != false) {
			*valid = true;
			uVar1 = this._surfaceNormal.x;
			uVar4 = this._surfaceNormal.y;
			local_70 = this._surfaceNormal.z;
			fVar10 = (float)uVar4 * offset;
			fVar13 = (float)uVar1 * offset + planePoint.x;
			goto label_05c83966;
		}
		bVar8 = this.TryFindClosestSurfaceHit(planePoint, mask, ref local_48);
		if (!bVar8) {
			*valid = false;
			uVar2 = this._surfaceNormal.x;
			uVar5 = this._surfaceNormal.y;
			local_70 = this._surfaceNormal.z;
			fVar10 = (float)uVar5 * offset;
			fVar13 = (float)uVar2 * offset + planePoint.x;
			goto label_05c83966;
		}
		UVar14 = local_48.normal;
		if (UVar14.z * UVar14.z + UVar14.y * UVar14.y + UVar14.x * UVar14.x <= 0.0001) {
			uVar3._0_4_ = this._surfaceNormal.x;
			uVar3._4_4_ = this._surfaceNormal.y;
			local_70 = this._surfaceNormal.z;
		}
		else {
			UVar14 = local_48.normal;
			local_70 = UVar14.z;
			auVar12._8_4_ = extraout_XMM0_Dc;
			auVar12._0_8_ = UVar14._0_8_;
			auVar12._12_4_ = extraout_XMM0_Dd;
			if (Il2CppMethodInitialized_0753e72d == false) {
				in_XMM1_Db = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_50._0_4_ = 0.0;
				local_50._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05c83820;
	label_05c839b0: ;
				local_50._0_4_ = 0.0;
				local_50._4_4_ = 0.0;
				in_XMM1_Db = 0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_50._0_4_ = 0.0;
				local_50._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05c839b0;
	label_05c83820: ;
				local_50._0_4_ = 0.0;
				local_50._4_4_ = 0.0;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
				in_XMM1_Db = 0;
			}
			local_68 = UVar14.x;
			fStack_64 = UVar14.y;
			fVar11 = local_70 * local_70 + fStack_64 * fStack_64 + local_68 * local_68;
			if (fVar11 < 0.0) {
				fVar11 = sqrtf(fVar11);
				in_XMM1_Db = extraout_XMM0_Db;
				if (fVar11 <= 1e-05) goto label_05c83872;
	label_05c83903: ;
				local_70 = local_70 / fVar11;
				auVar7._4_4_ = fVar11;
				auVar7._0_4_ = fVar11;
				auVar7._8_4_ = in_XMM1_Db;
				auVar7._12_4_ = in_XMM1_Db;
				auVar12 = divps(auVar12, auVar7);
				local_50._0_4_ = auVar12._0_4_;
				local_50._4_4_ = auVar12._4_4_;
				pUVar9 = (UnityEngine_Vector3_StaticFields)local_50;
			}
			else {
				fVar11 = SQRT(fVar11);
				if (1e-05 < fVar11) goto label_05c83903;
	label_05c83872: ;
				pUVar9 = typeof(Vector3).static_fields;
				local_70 = (pUVar9.zeroVector).z;
			}
			uVar3._0_4_ = (pUVar9.zeroVector).x;
			uVar3._4_4_ = (pUVar9.zeroVector).y;
		}
		*valid = true;
		UVar14 = local_48.point;
		fVar11 = UVar14.z;
		fVar10 = UVar14.y;
		local_68 = (float)uVar3;
		fStack_64 = (float)((ulong)uVar3 >> 0x20);
		fStack_64 = fStack_64 * offset;
		fVar13 = local_68 * offset + UVar14.x;
	label_05c83966: ;
		UVar14.z = local_70 * offset + fVar11;
		UVar14.y = fVar10 + fStack_64;
		UVar14.x = fVar13;
		return (Vector3)UVar14;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x5B806E0", Offset = "0x5B7F6E0", VA = "0x5B806E0")]
	public void RegenerateGhosts()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$RegenerateGhosts): 79 lines keep C-only constructs
		int piVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		int Seed;
		uint uVar6;
		uint uVar7;
		List<BrushEntry> pSVar8;
		GameObject item;
		GameObject[] pUVar9;
		List<string> __this_00;
		String[] pSVar10;
		List<Vector3> pSVar11;
		Vector3[] pUVar12;
		List<GameObject> pSVar14;
		byte[] auVar15 = new byte[16];
		Vector3 item_00;
		MethodInfo pMVar16;
		ulong uVar17;
		object x;
		bool bVar18;
		int iVar19;
		MapEditorBrush __this_01;
		BrushEntry entry;
		MapScriptSceneObject script;
		MapObject mapObject;
		ulong uVar20;
		MethodInfo pMVar21;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo pMVar22;
		MethodInfo extraout_RDX_02;
		uint uVar23;
		int gy;
		MethodInfo pMVar24;
		byte[] auVar31 = new byte[12];
		byte[] auVar32 = new byte[12];
		ulong uVar25;
		MapEditorBrush pMVar26;
		uint uVar27;
		float fVar28;
		float fVar29;
		double dVar30;
		byte[] auVar33 = new byte[16];
		byte[] auVar34 = new byte[16];
		float fVar35;
		float fVar36;
		Vector3 item_01;
		Vector3 item_02;
		Vector3 item_03;
		float local_13c;
		double local_138;
		ulong local_128;
		ulong local_118;
		byte[] local_d0 = new byte[16];
		object local_c0;
		byte[] local_b8 = new byte[8];
		object local_a8;
		byte[] local_98 = new byte[12];
		System_Collections_Generic_List_Enumerator_T__o local_88;
		ulong local_70;
		ulong local_68;
		ulong local_58;
		ulong local_48;

		local_b8 = (byte[])0x0;
		local_a8 = null;
		local_88._list = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._current = null;
		this.ClearGhosts();
		if (this.Active != false) {
			pSVar8 = this.Entries;
			if (pSVar8 == null) {
	label_05c81274: ;
				throw new NullReferenceException();
			}
			if (pSVar8._size != 0) {
				Seed = this._seed;
				__this_01 = new Random(Seed);
				pSVar8 = this.Entries;
				if (pSVar8 == null) goto label_05c81274;
				local_d0.GetEnumerator((List<object>)pSVar8);
				local_a8 = local_c0;
				local_b8 = (byte[])local_d0._0_8_;
				local_d0._0_8_ = null;
				local_13c = 0.0;
				local_d0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_b8;
				while (bVar18 = local_b8.MoveNext()) {
					if (local_a8 == null) {
						throw new NullReferenceException();
					}
					fVar36 = 0.0001;
					if (0.0001 <= *(float)&local_a8[1].monitor) {
						fVar36 = *(float)&local_a8[1].monitor;
					}
					local_13c = local_13c + fVar36;
				}
				pMVar24 = MethodInfo_System_Collections_Generic_List_Enumerator_BrushEntry_Dispose;
				local_b8.Dispose();
				iVar19 = this.Mode;
				if (iVar19 == 1) {
					uVar23 = this.GridX;
					pMVar21 = (MethodInfo)(ulong)uVar23;
					if ((int)uVar23 < 2) {
						pMVar21 = (MethodInfo)0x1;
					}
					uVar23 = this.GridY;
					uVar25 = (ulong)uVar23;
					if ((int)uVar23 < 2) {
						uVar25 = 1;
					}
					uVar23 = this.GridZ;
					pMVar24 = (MethodInfo)(ulong)uVar23;
					uVar20 = 1;
					if (1 < (int)uVar23) {
						uVar20 = (ulong)uVar23;
					}
					uVar23 = (int)uVar25 * (int)pMVar21 * (int)uVar20;
				}
				else {
					uVar23 = this.Count;
					uVar6 = this.GridX;
					pMVar21 = (MethodInfo)(ulong)uVar6;
					if ((int)uVar6 < 2) {
						pMVar21 = (MethodInfo)0x1;
					}
					uVar6 = this.GridY;
					uVar25 = (ulong)uVar6;
					if ((int)uVar6 < 2) {
						uVar25 = 1;
					}
					uVar6 = this.GridZ;
					uVar20 = 1;
					if (1 < (int)uVar6) {
						uVar20 = (ulong)uVar6;
					}
				}
				gy = (int)uVar25;
				uVar6 = (uint)pMVar21;
				if (0 < (int)uVar23) {
					uVar27 = 0;
					pMVar22 = pMVar21;
					local_70 = uVar20;
					do {
						entry = this.PickEntry((Random)__this_01, local_13c);
						if (entry == null) goto label_05c81274;
						if (entry.Advanced == false) {
							if (__this_01 == null) goto label_05c81274;
							fVar36 = entry.ScaleMin;
							fVar35 = entry.ScaleMax;
							dVar30 = __this_01.NextDouble();
							fVar28 = (float)dVar30;
							auVar31 = ZEXT812(0x3f800000);
							if (fVar28 <= auVar31._0_4_) {
								auVar31._4_8_ = auVar31._4_8_;
								auVar31._0_4_ = fVar28;
							}
							fVar36 = (fVar35 - fVar36) * (float)(-(uint)(0.0 <= fVar28) & auVar31._0_4_) + fVar36;
							local_118 = CONCAT44(fVar36, fVar36);
							fVar35 = entry.YawMin;
							fVar28 = entry.YawMax;
							pMVar26 = __this_01;
							dVar30 = __this_01.NextDouble();
							fVar29 = (float)dVar30;
							auVar32 = ZEXT812(0x3f800000);
							if (fVar29 <= auVar32._0_4_) {
								auVar32._4_8_ = auVar32._4_8_;
								auVar32._0_4_ = fVar29;
							}
							local_128 = (ulong)(uint)((fVar28 - fVar35) * (float)(-(uint)(0.0 <= fVar29) & auVar32._0_4_) + fVar35) << 0x20;
							fVar35 = 0.0;
							pMVar24 = (MethodInfo)entry.AssetName;
							script = pMVar26.CloneScript((String)pMVar24);
							pMVar22 = extraout_RDX_01;
							uVar17 = local_118;
						}
						else {
							if (__this_01 == null) goto label_05c81274;
							fVar36 = entry.ScaleXMin;
							fVar35 = entry.ScaleXMax;
							local_138 = __this_01.NextDouble();
							fVar28 = entry.ScaleYMin;
							fVar29 = entry.ScaleYMax;
							dVar30 = __this_01.NextDouble();
							auVar33._4_4_ = (float)dVar30;
							auVar33._0_4_ = (float)local_138;
							auVar33._8_8_ = 0;
							auVar33 = minps(_DAT_01005870, auVar33);
							local_118 = CONCAT44((fVar29 - fVar28) * (float)(-(uint)(0.0 <= (float)dVar30) & auVar33._4_4_) + fVar28, (fVar35 - fVar36) *(float)(-(uint)(0.0 <= (float)local_138) & auVar33._0_4_) + fVar36);
							fVar36 = entry.ScaleZMax;
							dVar30 = __this_01.NextDouble();
							fVar35 = entry.RotXMin;
							fVar28 = entry.RotXMax;
							local_58 = dVar30;
							dVar30 = __this_01.NextDouble();
							fVar29 = entry.RotYMin;
							fVar2 = entry.RotYMax;
							local_48 = dVar30;
							dVar30 = __this_01.NextDouble();
							local_98._4_4_ = local_98._0_4_;
							local_98._0_4_ = entry.RotZMin;
							local_98._8_4_ = 0;
							fVar3 = entry.RotZMax;
							pMVar26 = __this_01;
							local_68 = dVar30;
							dVar30 = __this_01.NextDouble();
							auVar34._4_4_ = (float)local_58;
							auVar34._0_4_ = (float)dVar30;
							auVar34._8_8_ = 0;
							auVar33 = minps(_DAT_01005870, auVar34);
							auVar15._4_4_ = (float)local_68;
							auVar15._0_4_ = (float)local_48;
							auVar15._8_8_ = 0;
							auVar34 = minps(_DAT_01005870, auVar15);
							local_128 = CONCAT44((fVar2 - fVar29) * (float)(-(uint)(0.0 <= (float)local_68) & auVar34._4_4_) + fVar29, (fVar28 - fVar35) *(float)(-(uint)(0.0 <= (float)local_48) & auVar34._0_4_) + fVar35);
							fVar35 = (fVar3 - (float)local_98._0_4_) * (float)(-(uint)(0.0 <= (float)dVar30) & auVar33._0_4_) + (float)local_98._0_4_;
							fVar36 = (fVar36 - (float)local_98._4_4_) *(float)(-(uint)(0.0 <= (float)local_58) & auVar33._4_4_) + (float)local_98._4_4_;
							pMVar24 = (MethodInfo)entry.AssetName;
							script = pMVar26.CloneScript((String)pMVar24);
							pMVar22 = extraout_RDX_00;
							uVar17 = local_118;
						}
						if (script != null) {
							uVar4 = script.ScaleX;
							uVar5 = script.ScaleY;
							local_118._0_4_ = (float)uVar17;
							local_118._4_4_ = (float)((ulong)uVar17 >> 0x20);
							script.ScaleX = (float)uVar4 * (float)local_118;
							script.ScaleY = (float)uVar5 * local_118._4_4_;
							script.ScaleZ = script.ScaleZ * fVar36;
							script.RotationX = (float)(int)local_128;
							script.RotationY = (float)(int)((ulong)local_128 >> 0x20);
							script.RotationZ = fVar35;
							iVar19 = this._ghostIdCounter;
							this._ghostIdCounter = iVar19 + -1;
							script.Id = iVar19;
							MapEditorBrush.ApplyEntryFields(script, entry);
							script.CollideMode = MapObjectCollideMode.None;
							script.Networked = false;
							mapObject = MapLoader.LoadObject((MapScriptBaseObject)script, true);
							MapLoader.UnregisterObject(mapObject);
							if (mapObject == null) goto label_05c81274;
							this.ApplyGhostAppearance(mapObject.GameObject);
							pMVar24 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
							pSVar14 = this._ghostObjects;
							if (pSVar14 == null) goto label_05c81274;
							item = mapObject.GameObject;
							piVar1 = &pSVar14._version;
							*piVar1 = *piVar1 + 1;
							pUVar9 = pSVar14._items;
							if (pUVar9 == null) goto label_05c81274;
							uVar7 = pSVar14._size;
							if (uVar7 < (uint)pUVar9.Length) {
								pSVar14._size = uVar7 + 1;
								pUVar9[(int)uVar7] = item;
							}
							else {
								pSVar14.AddWithResize((object)item);
							}
							pMVar22 = MethodInfo_System_Collections_Generic_List_string_Add;
							__this_00 = this._ghostAssets;
							if (__this_00 == null) goto label_05c81274;
							pMVar24 = (MethodInfo)entry.AssetName;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar10 = __this_00._items;
							if (pSVar10 == null) goto label_05c81274;
							uVar7 = __this_00._size;
							if (uVar7 < (uint)pSVar10.Length) {
								__this_00._size = uVar7 + 1;
								pSVar10[(int)uVar7] = (String)pMVar24;
							}
							else {
								__this_00.AddWithResize((object)pMVar24);
							}
							pMVar22 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
							pSVar11 = this._ghostScales;
							if (pSVar11 == null) goto label_05c81274;
							piVar1 = &pSVar11._version;
							*piVar1 = *piVar1 + 1;
							pUVar12 = pSVar11._items;
							if (pUVar12 == null) goto label_05c81274;
							uVar7 = pSVar11._size;
							if (uVar7 < (uint)pUVar12.Length) {
								pSVar11._size = uVar7 + 1;
								pUVar12[(int)uVar7].x = (float)(int)uVar17;
								pUVar12[(int)uVar7].y = (float)(int)((ulong)uVar17 >> 0x20);
								pUVar12[(int)uVar7].z = fVar36;
							}
							else {
								pMVar24 = pMVar22.klass.rgctx_data[0xe].method;
								item_01.z = fVar36;
								item_01.x = (float)(int)uVar17;
								item_01.y = (float)(int)((ulong)uVar17 >> 0x20);
								pSVar11.AddWithResize(item_01);
							}
							pMVar22 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
							pSVar11 = this._ghostRotations;
							if (pSVar11 == null) goto label_05c81274;
							piVar1 = &pSVar11._version;
							*piVar1 = *piVar1 + 1;
							pUVar12 = pSVar11._items;
							if (pUVar12 == null) goto label_05c81274;
							uVar7 = pSVar11._size;
							if (uVar7 < (uint)pUVar12.Length) {
								pSVar11._size = uVar7 + 1;
								pUVar12[(int)uVar7].x = (float)(int)local_128;
								pUVar12[(int)uVar7].y = (float)(int)((ulong)local_128 >> 0x20);
								pUVar12[(int)uVar7].z = fVar35;
								iVar19 = this.Mode;
								pMVar16 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
							}
							else {
								pMVar24 = pMVar22.klass.rgctx_data[0xe].method;
								item_02.z = fVar35;
								item_02.x = (float)(int)local_128;
								item_02.y = (float)(int)((ulong)local_128 >> 0x20);
								pSVar11.AddWithResize(item_02);
								iVar19 = this.Mode;
								pMVar16 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
							}
							MethodInfo_System_Collections_Generic_List_Vector3_Add = pMVar16;
							if (iVar19 == 1) {
								pMVar24 = (MethodInfo)(((ulong)uVar27 / (ulong)pMVar21) % uVar25);
								pSVar11 = this._ghostLocalOffsets;
								if (pSVar11 == null) goto label_05c81274;
								item_03.x =((float)(int)(uVar27 % uVar6) - (float)(int)(uVar6 - 1) * 0.5) * this.SpacingX;
								fVar36 = ((float)(int)pMVar24 - (float)(gy + -1) * 0.5) * this.SpacingY;
								item_03.z =((float)((int)uVar27 / (int)(gy * uVar6)) - (float)((int)uVar20 + -1) * 0.5) *this.SpacingZ;
								piVar1 = &pSVar11._version;
								*piVar1 = *piVar1 + 1;
								pUVar12 = pSVar11._items;
								if (pUVar12 == null) goto label_05c81274;
								uVar7 = pSVar11._size;
								pMVar22 = (MethodInfo)(long)(int)uVar7;
								if (uVar7 < (uint)pUVar12.Length) {
									pSVar11._size = uVar7 + 1;
									pUVar12[(long)pMVar22].x = item_03.x;
									pUVar12[(long)pMVar22].y = fVar36;
									pUVar12[(long)pMVar22].z = item_03.z;
								}
								else {
									pMVar24 = pMVar16.klass.rgctx_data[0xe].method;
									item_03.y = fVar36;
									pSVar11.AddWithResize(item_03);
									pMVar22 = extraout_RDX_02;
								}
							}
							else {
								pSVar11 = this._ghostLocalOffsets;
								pMVar16 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
								if (pSVar11 == null) goto label_05c81274;
								fVar35 = (Vector3.zeroVector).x;
								fVar28 = (Vector3.zeroVector).y;
								fVar36 = (Vector3.zeroVector).z;
								item_00 = (Vector3.zeroVector);
								piVar1 = &pSVar11._version;
								*piVar1 = *piVar1 + 1;
								pUVar12 = pSVar11._items;
								if (pUVar12 == null) goto label_05c81274;
								uVar7 = pSVar11._size;
								pMVar22 = (MethodInfo)(long)(int)uVar7;
								if (uVar7 < (uint)pUVar12.Length) {
									pSVar11._size = uVar7 + 1;
									pUVar12[(long)pMVar22].x = fVar35;
									pUVar12[(long)pMVar22].y = fVar28;
									pUVar12[(long)pMVar22].z = fVar36;
								}
								else {
									pMVar24 = pMVar16.klass.rgctx_data[0xe].method;
									pSVar11.AddWithResize((Vector3)item_00);
									pMVar22 = extraout_RDX;
								}
							}
						}
						uVar27 = uVar27 + 1;
					} while (uVar23 != uVar27);
					iVar19 = this.Mode;
					uVar20 = local_70;
				}
				if ((iVar19 == 1) && (this.BoundsSnap != false)) {
					this.ApplyBoundsSnappedOffsets(uVar6, gy, (int32_t)uVar20);
					pMVar24 = pMVar21;
				}
				if (this._hasCenter == false) {
					pSVar14 = this._ghostObjects;
					if (pSVar14 == null) goto label_05c81274;
					local_88 = pSVar14.GetEnumerator();
					local_d0._0_8_ = null;
					local_d0._8_8_ = &local_88;
					while(true) {
						bVar18 = local_88.MoveNext();
						x = local_88._current;
						if (!bVar18) break;
						bVar18 = ((Object)x != null);
						if (bVar18) {
							if ((Object)x == null) {
								throw new NullReferenceException();
							}
							x.SetActive(false);
						}
					}
					local_88.Dispose();
				}
				else {
					this.PositionGhosts();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x5B85580", Offset = "0x5B84580", VA = "0x5B85580")]
	private void ApplyBoundsSnappedOffsets(int gx, int gy, int gz)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ApplyBoundsSnappedOffsets): 35 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		int iVar7;
		List<Vector3> __this_00;
		MapEditorBrush.c__DisplayClass65_1 pMVar8;
		MapEditorBrush.c__DisplayClass65_3 pMVar9;
		Quaternion UVar10;
		bool bVar11;
		int iVar12;
		int iVar13;
		MapEditorBrush.c__DisplayClass65_0 pMVar14;
		Vector3[] sizes;
		Object x;
		Transform __this_01;
		MapEditorBrush.c__DisplayClass65_1 __this_02;
		MapEditorBrush.c__DisplayClass65_2 pMVar15;
		Func<int, int> pSVar16;
		MapEditorBrush.c__DisplayClass65_3 __this_03;
		MapEditorBrush.c__DisplayClass65_4 pMVar17;
		MapEditorBrush.c__DisplayClass65_5 __this_04;
		MapEditorBrush.c__DisplayClass65_6 __this_05;
		MapEditorBrush.c__DisplayClass65_5 pMVar18;
		float pfVar19;
		ulong uVar20;
		MapEditorBrush.c__DisplayClass65_1* targetAddress;
		List<GameObject> pSVar21;
		MapEditorBrush.c__DisplayClass65_3* targetAddress_00;
		float fVar22;
		float fVar24;
		float fVar25;
		byte[] auVar23 = new byte[12];
		float fVar26;
		byte[] auVar27 = new byte[16];
		Quaternion UVar28;
		Vector3 UVar29;
		Vector3 UVar30;
		Vector3 UVar31;
		Vector3 axisY;
		Vector3 axisZ;
		float local_8c;
		Vector3 local_78;
		ulong local_68;
		ulong local_58;
		ulong local_48;

		pMVar14 = new MapEditorBrush.c__DisplayClass65_0();
		if (pMVar14 != null) {
			pMVar14.gx = gx;
			pMVar14.gy = gy;
			pSVar21 = this._ghostObjects;
			if (pSVar21 != null) {
				sizes = (Vector3[])new Vector3[pSVar21._size];
				UVar10 = this._surfaceFrame;
				UVar29 = ((Quaternion)UVar10 * (Vector3)(Vector3.rightVector)) ;
				local_48 = UVar29._0_8_;
				UVar10 = this._surfaceFrame;
				UVar30 = ((Quaternion)UVar10 * (Vector3)(Vector3.upVector));
				local_58 = UVar30._0_8_;
				UVar10 = this._surfaceFrame;
				UVar31 = ((Quaternion)UVar10 * (Vector3)(Vector3.forwardVector));
				local_68 = UVar31._0_8_;
				pSVar21 = this._ghostObjects;
				if (pSVar21 != null) {
					pfVar19 = &sizes[0].z;
					uVar20 = 0;
					do {
						local_8c = UVar31.z;
						local_68 = UVar31._0_8_;
						if ((long)pSVar21._size <= (long)uVar20) {
							auVar23 = ZEXT812(0x3f800000);
							fVar22 = this.SpacingX;
							if (auVar23._0_4_ <= fVar22) {
								auVar23._4_8_ = auVar23._4_8_;
								auVar23._0_4_ = fVar22;
							}
							fVar26 = (float)(pMVar14.gx + -1) * auVar23._0_4_;
							uVar3 = this.SpacingY;
							uVar6 = this.SpacingZ;
							auVar27._4_4_ = uVar6;
							auVar27._0_4_ = uVar3;
							auVar27._8_8_ = 0;
							auVar27 = maxps(_DAT_01005870, auVar27);
							fVar22 = (float)(pMVar14.gy + -1) * auVar27._0_4_;
							fVar25 = (float)(gz + -1) * auVar27._4_4_;
							iVar12 = (fVar22 < fVar25) + 1;
							iVar13 = 0;
							if (fVar26 < fVar25) {
								iVar13 = iVar12;
							}
							if (fVar26 < fVar22) {
								iVar13 = iVar12;
							}
							if (iVar13 == 1) {
								__this_03 = new MapEditorBrush.c__DisplayClass65_3();
								if (__this_03 != null) {
									__this_03.CS___8__locals3 = pMVar14;
									__this_03.i = 0;
									pMVar14 = __this_03.CS___8__locals3;
									if (pMVar14 != null) {
										if (0 < gz) {
											iVar13 = 0;
											goto label_05c85c50;
										}
										iVar13 = 0;
										goto label_05c85ed0;
									}
								}
							}
							else if (iVar13 == 0) {
								__this_02 = new MapEditorBrush.c__DisplayClass65_1();
								if (__this_02 != null) {
									__this_02.CS___8__locals1 = pMVar14;
									__this_02.j = 0;
									pMVar14 = __this_02.CS___8__locals1;
									if (pMVar14 != null) {
										if (0 < gz) {
											iVar13 = 0;
											goto label_05c85b00;
										}
										iVar13 = 0;
										goto label_05c85e70;
									}
								}
							}
							else {
								__this_04 = new MapEditorBrush.c__DisplayClass65_5();
								if (__this_04 != null) {
									__this_04.CS___8__locals5 = pMVar14;
									__this_04.i = 0;
									pMVar14 = __this_04.CS___8__locals5;
									if (pMVar14 != null) {
										iVar12 = 0;
										goto label_05c85daa;
									}
								}
							}
							break;
						}
						x = (Object)pSVar21.get_Item((int32_t)uVar20) ;
						bVar11 = (x == null);
						if (!bVar11) {
							if (x == null) break;
							__this_01 = x.transform ;
							__this_00 = this._ghostRotations;
							if (__this_00 == null) break;
							uVar1 = this._surfaceFrame.x;
							uVar4 = this._surfaceFrame.y;
							uVar2 = this._surfaceFrame.z;
							uVar5 = this._surfaceFrame.w;
							UVar31 = __this_00.get_Item((int32_t)uVar20);
							local_78.x = UVar31.x * 0.017453292;
							local_78.y = UVar31.y * 0.017453292;
							local_78.z = UVar31.z * 0.017453292;
							UVar28 = Quaternion.Internal_FromEulerRad(ref local_78);
							fVar22 = UVar28.z;
							fVar25 = UVar28.w;
							if (__this_01 == null) break;
							fVar26 = UVar28.x;
							fVar24 = UVar28.y;
							UVar28.w =(((float)uVar5 * fVar25 - (float)uVar1 * fVar26) - (float)uVar4 * fVar24) -(float)uVar2 * fVar22;
							UVar28.z =((float)uVar2 * fVar25 + (float)uVar5 * fVar22 + fVar24 * (float)uVar1) - fVar26 * (float)uVar4;
							UVar28.y =((float)uVar5 * fVar24 + fVar25 * (float)uVar4 + (float)uVar2 * fVar26) - fVar22 * (float)uVar1;
							UVar28.x =((float)uVar5 * fVar26 + fVar25 * (float)uVar1 + (float)uVar4 * fVar22) - fVar24 * (float)uVar2;
							__this_01.rotation = UVar28;
							UVar29.x = (float)(undefined4)local_48;
							UVar29.y = (float)local_48._4_4_;
							axisY.z = UVar30.z;
							axisY.x = (float)(undefined4)local_58;
							axisY.y = (float)local_58._4_4_;
							axisZ.z = local_8c;
							axisZ.x = (float)(undefined4)local_68;
							axisZ.y = (float)local_68._4_4_;
							UVar31 = MapEditorBrush.GetProjectedBoundsSize((GameObject)x, UVar29, axisY, axisZ);
							if (sizes == null) break;
							if ((uint)sizes.Length <= uVar20) {
								throw new IndexOutOfRangeException();
							}
							((Vector3)(pfVar19 + -2)).x = UVar31.x;
							((Vector3)(pfVar19 + -2)).y = UVar31.y;
							*pfVar19 = UVar31.z;
						}
						UVar31.z = local_8c;
						UVar31.x = (float)(undefined4)local_68;
						UVar31.y = (float)local_68._4_4_;
						uVar20 = uVar20 + 1;
						pSVar21 = this._ghostObjects;
						pfVar19 = pfVar19 + 3;
					} while (pSVar21 != null);
				}
			}
		}
		goto label_05c85e5c;
		while(true) {
			pMVar17.CS___8__locals4 = __this_03;
			pMVar17.k = 0;
			iVar13 = __this_03.i + 1;
			__this_03.i = iVar13;
			pMVar14 = __this_03.CS___8__locals3;
			if (pMVar14 == null) break;
	label_05c85ed0: ;
			if (pMVar14.gx <= iVar13) {
				return;
			}
			pMVar17 = new MapEditorBrush.c__DisplayClass65_4();
			if (pMVar17 == null) break;
		}
		goto label_05c85e5c;
	label_05c85c50: ;
		if (pMVar14.gx <= iVar13) {
			return;
		}
		pMVar17 = new MapEditorBrush.c__DisplayClass65_4();
		if (pMVar17 == null) goto label_05c85e5c;
		targetAddress_00 = &pMVar17.CS___8__locals4;
		pMVar17.CS___8__locals4 = __this_03;
		pMVar17.k = 0;
		do {
			pMVar9 = *targetAddress_00;
			if ((pMVar9 == null) ||(pMVar14 = pMVar9.CS___8__locals3, pMVar14 == null)) goto label_05c85e5c;
			iVar7 = pMVar14.gy;
			pSVar16 = new Func<int, int>((object)pMVar17, (intptr_t) MethodInfo_MapEditor_MapEditorBrush_c__DisplayClass65_4_ApplyBoundsSnappedOffsets_b__1);
			this.SnapLine(iVar7, pSVar16, sizes, 1, this.SpacingY);
			iVar13 = pMVar17.k + 1;
			pMVar17.k = iVar13;
		} while (iVar13 < gz);
		iVar13 = __this_03.i + 1;
		__this_03.i = iVar13;
		pMVar14 = __this_03.CS___8__locals3;
		if (pMVar14 == null) goto label_05c85e5c;
		goto label_05c85c50;
	label_05c85daa: ;
		if (pMVar14.gx <= iVar12) {
			return;
		}
		__this_05 = new MapEditorBrush.c__DisplayClass65_6();
		if (__this_05 == null) goto label_05c85e5c;
		__this_05.CS___8__locals6 = __this_04;
		__this_05.j = 0;
		pMVar18 = __this_05.CS___8__locals6;
		if (pMVar18 == null) goto label_05c85e5c;
		iVar12 = 0;
		while(true) {
			pMVar14 = pMVar18.CS___8__locals5;
			if (pMVar14 == null) goto label_05c85e5c;
			if (pMVar14.gy <= iVar12) break;
			pSVar16 = new Func<int, int>((object)__this_05, (intptr_t) MethodInfo_MapEditor_MapEditorBrush_c__DisplayClass65_6_ApplyBoundsSnappedOffsets_b__2);
			this.SnapLine(gz, pSVar16, sizes, iVar13, this.SpacingZ);
			iVar12 = __this_05.j + 1;
			__this_05.j = iVar12;
			pMVar18 = __this_05.CS___8__locals6;
			if (pMVar18 == null) goto label_05c85e5c;
		}
		iVar12 = __this_04.i + 1;
		__this_04.i = iVar12;
		pMVar14 = __this_04.CS___8__locals5;
		if (pMVar14 == null) goto label_05c85e5c;
		goto label_05c85daa;
	label_05c85b00: ;
		if (pMVar14.gy <= iVar13) {
			return;
		}
		pMVar15 = new MapEditorBrush.c__DisplayClass65_2();
		if (pMVar15 == null) goto label_05c85e5c;
		targetAddress = &pMVar15.CS___8__locals2;
		pMVar15.CS___8__locals2 = __this_02;
		pMVar15.k = 0;
		do {
			pMVar8 = *targetAddress;
			if ((pMVar8 == null) ||(pMVar14 = pMVar8.CS___8__locals1, pMVar14 == null)) goto label_05c85e5c;
			iVar7 = pMVar14.gx;
			pSVar16 = new Func<int, int>((object)pMVar15, (intptr_t) MethodInfo_MapEditor_MapEditorBrush_c__DisplayClass65_2_ApplyBoundsSnappedOffsets_b__0);
			this.SnapLine(iVar7, pSVar16, sizes, 0, this.SpacingX);
			iVar13 = pMVar15.k + 1;
			pMVar15.k = iVar13;
		} while (iVar13 < gz);
		iVar13 = __this_02.j + 1;
		__this_02.j = iVar13;
		pMVar14 = __this_02.CS___8__locals1;
		if (pMVar14 == null) goto label_05c85e5c;
		goto label_05c85b00;
		while(true) {
			pMVar15.CS___8__locals2 = __this_02;
			pMVar15.k = 0;
			iVar13 = __this_02.j + 1;
			__this_02.j = iVar13;
			pMVar14 = __this_02.CS___8__locals1;
			if (pMVar14 == null) break;
	label_05c85e70: ;
			if (pMVar14.gy <= iVar13) {
				return;
			}
			pMVar15 = new MapEditorBrush.c__DisplayClass65_2();
			if (pMVar15 == null) break;
		}
	label_05c85e5c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x5B86570", Offset = "0x5B85570", VA = "0x5B86570")]
	private int GetBoundsSnapAxis(int gx, int gy, int gz)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetBoundsSnapAxis): 13 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		int iVar3;
		int iVar4;
		float fVar5;
		float fVar7;
		byte[] auVar6 = new byte[12];
		float fVar8;
		byte[] auVar9 = new byte[16];

		auVar6 = ZEXT812(0x3f800000);
		fVar5 = this.SpacingX;
		if (auVar6._0_4_ <= fVar5) {
			auVar6._4_8_ = auVar6._4_8_;
			auVar6._0_4_ = fVar5;
		}
		fVar8 = (float)(gx + -1) * auVar6._0_4_;
		uVar1 = this.SpacingY;
		uVar2 = this.SpacingZ;
		auVar9._4_4_ = uVar2;
		auVar9._0_4_ = uVar1;
		auVar9._8_8_ = 0;
		auVar9 = maxps(_DAT_01005870, auVar9);
		fVar5 = (float)(gy + -1) * auVar9._0_4_;
		fVar7 = (float)(gz + -1) * auVar9._4_4_;
		iVar4 = (fVar5 < fVar7) + 1;
		if (fVar8 < fVar7) {
		}
		if (fVar8 < fVar5) {
		}
		return iVar3;
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x5B86600", Offset = "0x5B85600", VA = "0x5B86600")]
	private void SnapLine(int count, Func<int, int> getIndex, Vector3[] sizes, int axis, float gap)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SnapLine): 34 lines keep C-only constructs
		ulong uVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		List<Vector3> pSVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		uint uVar10;
		uint uVar11;
		int index;
		object pIVar12;
		float pfVar13;
		ulong uVar14;
		ulong uVar15;
		ulong uVar16;
		Vector3 UVar17;
		Vector3 value;
		float local_60;
		int local_5c;
		ulong local_58;
		int local_4c;
		MapEditorBrush local_48;
		ulong local_40;
		ulong local_38;

		uVar14 = (ulong)(uint)count;
		local_5c = axis;
		local_48 = this;
		if (0 < count) {
			pIVar12 = new float[count];
			local_4c = count;
			local_40 = uVar14;
			if (count == 1) {
				if (pIVar12 == null) goto label_05c8690b;
			}
			else {
				if (getIndex == null) goto label_05c8690b;
				if (pIVar12 == null) {
					(*(code)getIndex.invoke_impl)(getIndex.method_code,0,getIndex.method);
					(*(code)getIndex.invoke_impl)(getIndex.method_code,1,getIndex.method);
					throw new NullReferenceException();
				}
				if (sizes == null) {
					(*(code)getIndex.invoke_impl)(getIndex.method_code,0,getIndex.method);
					(*(code)getIndex.invoke_impl)(getIndex.method_code,1,getIndex.method);
					UVar17.z = local_60;
					UVar17.x = (float)(undefined4)local_58;
					UVar17.y = (float)local_58._4_4_;
					if (*(int)&pIVar12[1].monitor != 0) goto label_05c8690b;
					goto label_05c86906;
				}
				local_38 = uVar14 - 1;
				uVar14 = 0;
				do {
					uVar1 = uVar14 + 1;
					uVar10 = (*(code)getIndex.invoke_impl)(getIndex.method_code,uVar14 & 0xffffffff,getIndex.method);
					uVar11 = (*(code)getIndex.invoke_impl)(getIndex.method_code,uVar1 & 0xffffffff,getIndex.method);
					UVar9.z = local_60;
					UVar9.x = (float)(undefined4)local_58;
					UVar9.y = (float)local_58._4_4_;
					UVar8.z = local_60;
					UVar8.x = (float)(undefined4)local_58;
					UVar8.y = (float)local_58._4_4_;
					UVar7.z = local_60;
					UVar7.x = (float)(undefined4)local_58;
					UVar7.y = (float)local_58._4_4_;
					UVar17.z = local_60;
					UVar17.x = (float)(undefined4)local_58;
					UVar17.y = (float)local_58._4_4_;
					if ((*(uint)&pIVar12[1].monitor <= uVar14) ||(uVar4 = (uint)sizes.Length, UVar17 = UVar7, uVar4 <= uVar10)) goto label_05c86906;
					uVar15._0_4_ = sizes[(int)uVar10].x;
					uVar15._4_4_ = sizes[(int)uVar10].y;
					if (local_5c != 0) {
						if (local_5c == 1) {
							uVar15 = uVar15 >> 0x20;
						}
						else {
							uVar15 = (ulong)(uint)sizes[(int)uVar10].z;
						}
					}
					UVar17 = UVar8;
					if (uVar4 <= uVar11) goto label_05c86906;
					uVar16._0_4_ = sizes[(int)uVar11].x;
					uVar16._4_4_ = sizes[(int)uVar11].y;
					if (local_5c != 0) {
						if (local_5c == 1) {
							uVar16 = uVar16 >> 0x20;
						}
						else {
							uVar16 = (ulong)(uint)sizes[(int)uVar11].z;
						}
					}
					UVar17 = UVar9;
					if (*(uint)&pIVar12[1].monitor <= uVar1) goto label_05c86906;
					*(float)((long)&pIVar12[2].klass + uVar14 * 4 + 4) =((float)uVar15 + (float)uVar16) * 0.5 + *(float)((long)&pIVar12[2].klass + uVar14 * 4) + gap;
					uVar14 = uVar1;
				} while (local_38 != uVar1);
			}
			UVar6.z = local_60;
			UVar6.x = (float)(undefined4)local_58;
			UVar6.y = (float)local_58._4_4_;
			UVar17.z = local_60;
			UVar17.x = (float)(undefined4)local_58;
			UVar17.y = (float)local_58._4_4_;
			if ((*(uint)&pIVar12[1].monitor == 0) ||(UVar17 = UVar6, *(uint)&pIVar12[1].monitor <= local_4c - 1U)) {
	label_05c86906: ;
				local_60 = UVar17.z;
				local_58 = UVar17._0_8_;
				throw new IndexOutOfRangeException();
			}
			if (getIndex == null) {
	label_05c8690b: ;
				throw new NullReferenceException();
			}
			fVar2 = *(float)&pIVar12[2].klass;
			fVar3 = *(float)((long)&pIVar12[2].klass + (long)(int)(local_4c - 1U) * 4);
			uVar14 = 0;
			do {
				index = (*(code)getIndex.invoke_impl)(getIndex.method_code,uVar14 & 0xffffffff,getIndex.method);
				if (-1 < index) {
					pSVar5 = local_48._ghostLocalOffsets;
					if (pSVar5 == null) goto label_05c8690b;
					if (index < pSVar5._size) {
						UVar17 = pSVar5.get_Item(index);
						local_60 = UVar17.z;
						local_58 = UVar17._0_8_;
						if (*(uint)&pIVar12[1].monitor <= uVar14) goto label_05c86906;
						pfVar13 = (float)&local_58;
						if ((local_5c != 0) && (pfVar13 = (float)((long)&local_58 + 4), local_5c != 1)) {
							pfVar13 = &local_60;
						}
						*pfVar13 = *(float)((long)&pIVar12[2].klass + uVar14 * 4) - (fVar2 + fVar3) * 0.5;
						pSVar5 = local_48._ghostLocalOffsets;
						if (pSVar5 == null) goto label_05c8690b;
						value.z = local_60;
						value.x = (float)(undefined4)local_58;
						value.y = (float)local_58._4_4_;
						pSVar5.set_Item(index, value);
					}
				}
				uVar14 = uVar14 + 1;
			} while (local_40 != uVar14);
		}
		return;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x5B86950", Offset = "0x5B85950", VA = "0x5B86950")]
	private static float GetAxis(Vector3 value, int axis)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetAxis): clean
		float fVar1;

		if (axis != 0) {
			if (axis != 1) {
				return value.z;
			}
		}
		return fVar1;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x5B86970", Offset = "0x5B85970", VA = "0x5B86970")]
	private static void SetAxis(ref Vector3 value, int axis, float component)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SetAxis): 1 lines keep C-only constructs
		if (axis != 0) {
			if (axis == 1) {
				value.y = component;
				return;
			}
			value = (Vector3)&value.z;
		}
		*(float)value = component;
		return;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x5B85F50", Offset = "0x5B84F50", VA = "0x5B85F50")]
	private static Vector3 GetProjectedBoundsSize(GameObject go, Vector3 axisX, Vector3 axisY, Vector3 axisZ)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetProjectedBoundsSize): 67 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		Object __this;
		float fVar5;
		bool bVar6;
		Object[] pSVar7;
		Object x;
		Transform __this_00;
		Object pUVar8;
		Mesh __this_01;
		uint uVar9;
		uint uVar10;
		ulong in_XMM0_Qb;
		byte[] auVar11 = new byte[16];
		ulong extraout_XMM0_Qb;
		float fVar12;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		uint uVar13;
		float in_XMM1_Dd;
		uint uVar14;
		uint uVar15;
		float fVar16;
		uint uVar17;
		ulong in_XMM2_Qb;
		float in_XMM3_Db;
		byte[] auVar18 = new byte[16];
		float fVar19;
		uint in_XMM4_Dc;
		uint in_XMM4_Dd;
		Vector3 UVar20;
		Vector3 UVar21;
		float local_124;
		float local_10c;
		float local_108;
		float fStack_104;
		Bounds local_f8;
		float local_e0;
		float local_dc;
		byte[] local_d8 = new byte[12];
		float fStack_cc;
		float local_c8;
		float fStack_c4;
		float local_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		ulong local_a8;
		ulong uStack_a0;
		byte[] local_98 = new byte[8];
		uint uStack_90;
		uint uStack_8c;
		byte[] local_88 = new byte[16];
		Object[] local_70;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[16];
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		local_e0 = axisZ.z;
		local_c8 = axisY.z;
		local_a8 = axisY._0_8_;
		local_b8 = axisX.z;
		local_58._8_4_ = in_XMM4_Dc;
		local_58._0_8_ = axisZ._0_8_;
		local_58._12_4_ = in_XMM4_Dd;
		local_108 = axisX.x;
		fStack_104 = axisX.y;
		fStack_c4 = in_XMM3_Db;
		fStack_b4 = in_XMM1_Db;
		fStack_b0 = in_XMM1_Dc;
		fStack_ac = in_XMM1_Dd;
		uStack_a0 = in_XMM2_Qb;
		if ((go == null) ||(pSVar7 = go.GetComponentsInChildren<Renderer>(), fVar16 = fStack_b4, pSVar7 == null)) {
	label_05c8655d: ;
			throw new NullReferenceException();
		}
		uVar9 = (uint)pSVar7.Length;
		if (0 < (int)uVar9) {
			fStack_b4 = local_c8;
			fStack_b0 = fVar16;
			fStack_ac = fStack_c4;
			local_68 = (float)local_a8;
			fStack_64 = fStack_104;
			fStack_60 = (float)uStack_a0;
			fStack_5c = uStack_a0._4_4_;
			local_a8 = CONCAT44(local_a8._4_4_, local_108);
			uVar10 = 0;
			local_10c = 3.4028235e+38;
			fVar16 = -3.4028235e+38;
			fVar1 = -3.4028235e+38;
			fVar2 = -3.4028235e+38;
			uVar13 = 0;
			uVar14 = 0;
			auVar18 = _DAT_01006440;
			uStack_a0 = in_XMM0_Qb;
			local_70 = pSVar7;
			do {
				if (uVar9 <= uVar10) {
					throw new IndexOutOfRangeException();
				}
				__this = (Object)local_70[(int)uVar10];
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar3 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
				local_98._4_4_ = fVar2;
				local_98._0_4_ = fVar1;
				uStack_90 = uVar13;
				uStack_8c = uVar14;
				if ((__this.klass._2).typeHierarchyDepth < bVar3) {
					pUVar8 = null;
				}
				else {
					pUVar8 = null;
					if ((__this.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(SkinnedMeshRenderer)) {
						pUVar8 = __this;
					}
				}
				local_c8 = fVar16;
				local_88 = auVar18;
				x = (Object)__this.GetComponent<MeshFilter>();
				bVar6 = (pUVar8 != null);
				if (bVar6) {
					if (pUVar8 == null) goto label_05c8655d;
					local_f8 = pUVar8.localBounds;
					x = pUVar8;
	label_05c861b4: ;
					fVar19 = local_f8.m_Extents.z;
					fVar2 = local_f8.m_Extents.y;
					fVar16 = local_f8.m_Extents.x;
					fVar1 = local_f8.m_Center.z;
					local_d8._0_8_ = local_f8.m_Center._0_8_;
					__this_00 = x.transform;
				}
				else {
					bVar6 = (x != null);
					if (bVar6) {
						if (x == null) goto label_05c8655d;
						pUVar8 = (Object)x.sharedMesh;
						bVar6 = (pUVar8 != null);
						if (bVar6) {
							__this_01 = x.sharedMesh;
							if (__this_01 != null) {
								local_f8 = __this_01.bounds;
								goto label_05c861b4;
							}
							goto label_05c8655d;
						}
					}
					local_f8 = __this.bounds;
					local_d8._0_4_ = local_f8.m_Center.x;
					local_d8._4_4_ = local_f8.m_Center.y;
					local_d8._8_4_ = 0.0;
					fStack_cc = 0.0;
					__this_00 = null;
					fVar19 = local_f8.m_Extents.z;
					fVar1 = local_f8.m_Center.z;
					fVar16 = local_f8.m_Extents.x;
					fVar2 = local_f8.m_Extents.y;
				}
				local_48 = (float)local_d8._0_4_ - fVar16;
				fStack_44 = (float)local_d8._4_4_ - fVar2;
				fStack_40 = (float)local_d8._8_4_ - 0.0;
				fStack_3c = fStack_cc - 0.0;
				local_dc = fVar1 - fVar19;
				local_d8._0_4_ = (float)local_d8._0_4_ + fVar16;
				local_d8._4_4_ = (float)local_d8._4_4_ + fVar2;
				uVar9 = 0;
				stack0xffffffffffffff30 = CONCAT44(fStack_cc + 0.0, (float)local_d8._8_4_ + 0.0);
				fVar2 = (float)local_d8._0_4_;
				fVar12 = (float)local_d8._4_4_;
				auVar18 = local_88;
				fVar16 = local_c8;
				do {
					local_124 = local_dc;
					if ((uVar9 & 4) != 0) {
						local_124 = fVar1 + fVar19;
					}
					local_c8 = fVar16;
					local_88 = auVar18;
					if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
						fVar2 = (float)local_d8._0_4_;
						fVar12 = (float)local_d8._4_4_;
					}
					fVar5 = fStack_3c;
					fVar16 = fStack_40;
					uVar15 = -(uint)((uVar9 & 1) == 0);
					uVar17 = -(uint)((uVar9 & 2) == 0);
					uVar15 = ~uVar15 & (uint)fVar2 | (uint)local_48 & uVar15;
					uVar17 = ~uVar17 & (uint)fVar12 | (uint)fStack_44 & uVar17;
					bVar6 = ((Object)__this_00 != null);
					if (bVar6) {
						UVar20.y = (float)uVar17;
						UVar20.x = (float)uVar15;
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						UVar20.z = local_124;
						UVar20 = __this_00.TransformPoint(UVar20);
						local_124 = UVar20.z;
						auVar18._0_8_ = UVar20._0_8_;
						auVar18._8_8_ = extraout_XMM0_Qb;
					}
					else {
						auVar18._4_4_ = uVar17;
						auVar18._0_4_ = uVar15;
						auVar18._8_4_ = fVar16;
						auVar18._12_4_ = fVar5;
					}
					fVar16 = auVar18._0_4_;
					fVar2 = auVar18._4_4_;
					fVar12 = local_124 * local_e0 + fVar2 * (float)local_58._4_4_ + fVar16 * (float)local_58._0_4_;
					if (fVar12 <= local_10c) {
						local_10c = fVar12;
					}
					auVar11._0_4_ = fVar16 * (float)local_a8 + fStack_64 * fVar2 + local_124 * local_b8;
					auVar11._4_4_ = fVar2 * local_a8._4_4_ + local_68 * fVar16 + local_124 * fStack_b4;
					auVar11._8_4_ = auVar18._8_4_ * (float)uStack_a0 + fStack_60 * auVar18._8_4_ + local_124 * fStack_b0;
					auVar11._12_4_ = auVar18._12_4_ * uStack_a0._4_4_ + fStack_5c * auVar18._12_4_ + local_124 * fStack_ac ;
					auVar18 = minps(local_88, auVar11);
					_local_98 = maxps(_local_98, auVar11);
					fVar16 = local_c8;
					if (local_c8 <= fVar12) {
						fVar16 = fVar12;
					}
					uVar9 = uVar9 + 1;
					fVar2 = (float)local_d8._0_4_;
					fVar12 = (float)local_d8._4_4_;
				} while (uVar9 != 8);
				uVar10 = uVar10 + 1;
				uVar9 = (uint)local_70.Length;
				fVar1 = (float)local_98._0_4_;
				fVar2 = (float)local_98._4_4_;
				uVar13 = uStack_90;
				uVar14 = uStack_8c;
			} while ((int)uVar10 < (int)uVar9);
			if (auVar18._0_4_ < 3.4028235e+38) {
				fVar1 = (float)local_98._0_4_ - auVar18._0_4_;
				fVar2 = (float)local_98._4_4_ - auVar18._4_4_;
				fVar16 = fVar16 - local_10c;
				goto label_05c864ed;
			}
		}
		fVar1 = (Vector3.zeroVector).x;
		fVar2 = (Vector3.zeroVector).y;
		fVar16 = (Vector3.zeroVector).z;
	label_05c864ed: ;
		UVar21.y = fVar2;
		UVar21.x = fVar1;
		UVar21.z = fVar16;
		return (Vector3)UVar21;
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x5B84810", Offset = "0x5B83810", VA = "0x5B84810")]
	private BrushEntry PickEntry(System.Random rand, float totalWeight)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$PickEntry): 3 lines keep C-only constructs
		float fVar1;
		List<BrushEntry> pSVar2;
		double dVar3;
		object pIVar4;
		bool bVar5;
		BrushEntry pMVar6;
		float fVar7;
		float local_4c;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		System_Collections_Generic_List_Enumerator_T__o local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (rand != null) {
			dVar3 = rand.NextDouble();
			pSVar2 = this.Entries;
			if (pSVar2 != null) {
				local_4c = (float)dVar3 * totalWeight;
				local_48 = pSVar2.GetEnumerator();
				local_28 = &local_48;
				while (true) {
					bVar5 = local_48.MoveNext();
					pIVar4 = local_48._current;
					if (!(bVar5)) break;
					if ((BrushEntry)local_48._current == null) {
						throw new NullReferenceException();
					}
					fVar1 = ((BrushEntry)((long)local_48._current + 0x10)).Weight;
					fVar7 = 0.0001;
					if (0.0001 <= fVar1) {
						fVar7 = fVar1;
					}
					local_4c = local_4c - fVar7;
					if (local_4c <= 0.0) {
						local_48.Dispose();
						return (BrushEntry)pIVar4;
					}
				}
				local_48.Dispose();
				pSVar2 = this.Entries;
				if (pSVar2 != null) {
					pMVar6 = pSVar2.get_Item(pSVar2._size + -1);
					return pMVar6;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x5B84A00", Offset = "0x5B83A00", VA = "0x5B84A00")]
	private MapScriptSceneObject CloneScript(string asset)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$CloneScript): 4 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		MapScriptBaseMaterial pMVar4;
		Dictionary<object, object> pSVar5;
		List<MapScriptBaseObject> pSVar6;
		MapScriptBaseObject[] pMVar7;
		bool bVar9;
		String[] pSVar10;
		MapScriptSceneObject pMVar11;
		MapScriptBaseObject item;
		MapScriptObjects pMVar12;
		String pSVar13;

		if (asset != null) {
			bVar9 = asset.StartsWith("Custom/");
			if (bVar9) {
				pSVar10 = asset.Split(0x2f, 0);
				pMVar11 = new MapScriptSceneObject();
				if (pMVar11 != null) {
					pMVar11.Asset = asset;
					if (pSVar10 != null) {
						if (2 < (int)pSVar10.Length) {
							asset = pSVar10[2];
						}
						pMVar11.Name = asset;
						pMVar4 = pMVar11.Material;
						if (pMVar4 != null) {
							pMVar4.Shader = MapObjectShader.DefaultNoTint;
							return pMVar11;
						}
					}
				}
			}
			else {
				pSVar5 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
				if (pSVar5 != null) {
					bVar9 = pSVar5.ContainsKey((object)asset);
					if (!bVar9) {
						return null;
					}
					pSVar5 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
					if (pSVar5 != null) {
						item = pSVar5.get_Item((object)asset);
						if (item != null) {
							bVar2 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
							if (((item.klass._2).typeHierarchyDepth < bVar2) ||((item.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapScriptSceneObject))) {
								throw new InvalidCastException();
							}
						}
						pMVar12 = new MapScriptObjects();
						if ((pMVar12 != null) &&(pSVar6 = pMVar12.Objects, pSVar6 != null)) {
							piVar1 = &pSVar6._version;
							*piVar1 = *piVar1 + 1;
							pMVar7 = pSVar6._items;
							if (pMVar7 != null) {
								uVar3 = pSVar6._size;
								if (uVar3 < (uint)pMVar7.Length) {
									pSVar6._size = uVar3 + 1;
									pMVar7[(int)uVar3] = item;
								}
								else {
									pSVar6.AddWithResize((object)item);
								}
								pSVar13 = pMVar12.Serialize();
								pMVar12 = new MapScriptObjects();
								if (pMVar12 != null) {
									pMVar12.Deserialize(pSVar13);
									pSVar6 = pMVar12.Objects;
									if (pSVar6 != null) {
										pMVar11 = (MapScriptSceneObject)pSVar6.get_Item(0);
										if (pMVar11 == null) {
											return null;
										}
										bVar2 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
										if (((((MapScriptBaseObject)pMVar11.klass)._2).typeHierarchyDepth < bVar2) ||((((MapScriptBaseObject)pMVar11.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapScriptSceneObject))) {
											throw new InvalidCastException();
										}
										return pMVar11;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x5B7FC90", Offset = "0x5B7EC90", VA = "0x5B7FC90")]
	private void ClearGhosts()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ClearGhosts): 18 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<GameObject> pSVar3;
		List<Material> pSVar4;
		List<string> pSVar5;
		List<Vector3> pSVar6;
		Object pUVar7;
		bool bVar8;
		byte[] local_80 = new byte[16];
		Object local_70;
		byte[] local_68 = new byte[8];
		Object local_58;
		byte[] local_48 = new byte[8];
		Object local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar3 = this._ghostObjects;
		if (pSVar3 != null) {
			local_80.GetEnumerator((List<object>)pSVar3);
			local_38 = local_70;
			local_48 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar8 = local_48.MoveNext();
				pUVar7 = local_38;
				if (!bVar8) break;
				bVar8 = (pUVar7 != null);
				if (bVar8) {
					Object.Destroy(pUVar7);
				}
			}
			local_48.Dispose() ;
			pSVar4 = this._ghostMaterials;
			if (pSVar4 != null) {
				local_80.GetEnumerator((List<object>)pSVar4);
				local_58 = local_70;
				local_68 = (byte[])local_80._0_8_;
				local_80._0_8_ = null;
				local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
				while(true) {
					bVar8 = local_68.MoveNext();
					pUVar7 = local_58;
					if (!bVar8) break;
					Object.Destroy(pUVar7);
				}
				local_68.Dispose() ;
				pSVar3 = this._ghostObjects;
				if (pSVar3 != null) {
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					iVar2 = pSVar3._size;
					pSVar3._size = 0;
					if (0 < iVar2) {
						Array.Clear((Array)pSVar3._items, 0, iVar2);
					}
					pSVar4 = this._ghostMaterials;
					if (pSVar4 != null) {
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						iVar2 = pSVar4._size;
						pSVar4._size = 0;
						if (0 < iVar2) {
							Array.Clear((Array)pSVar4._items, 0, iVar2);
						}
						pSVar5 = this._ghostAssets;
						if (pSVar5 != null) {
							piVar1 = &pSVar5._version;
							*piVar1 = *piVar1 + 1;
							iVar2 = pSVar5._size;
							pSVar5._size = 0;
							if (0 < iVar2) {
								Array.Clear((Array)pSVar5._items, 0, iVar2);
							}
							pSVar6 = this._ghostScales;
							if (pSVar6 != null) {
								piVar1 = &pSVar6._version;
								*piVar1 = *piVar1 + 1;
								pSVar6._size = 0;
								pSVar6 = this._ghostRotations;
								if (pSVar6 != null) {
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar6._size = 0;
									pSVar6 = this._ghostLocalOffsets;
									if (pSVar6 != null) {
										piVar1 = &pSVar6._version;
										*piVar1 = *piVar1 + 1;
										pSVar6._size = 0;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x5B851F0", Offset = "0x5B841F0", VA = "0x5B851F0")]
	private void ApplyGhostAppearance(GameObject go)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ApplyGhostAppearance): 3 lines keep C-only constructs
		int piVar1;
		Renderer __this_00;
		Object x;
		Material source;
		List<Material> __this_01;
		Material[] pUVar2;
		bool bVar4;
		uint uVar5;
		Object[] pSVar6;
		Material[] pUVar7;
		Material[] value;
		ulong uVar8;
		MethodInfo __this_02;
		object pIVar9;
		uint uVar10;
		ulong uVar12;
		long lVar13;
		Color UVar14;
		Color value_00;

		if (go != null) {
			pSVar6 = go.GetComponentsInChildren<Collider>();
			if (pSVar6 != null) {
				uVar5 = (uint)pSVar6.Length;
				if (0 < (int)uVar5) {
					uVar10 = 0;
					do {
						if (uVar5 <= uVar10) goto label_05c8555d;
						if ((Collider)pSVar6[(int)uVar10] == null) goto label_05c85558;
						(pSVar6[(int)uVar10]).enabled = false;
						uVar10 = uVar10 + 1;
						uVar5 = (uint)pSVar6.Length;
					} while ((int)uVar10 < (int)uVar5);
				}
				pSVar6 = go.GetComponentsInChildren<Renderer>();
				if (pSVar6 != null) {
					uVar5 = (uint)pSVar6.Length;
					if (0 < (int)uVar5) {
						uVar10 = 0;
						do {
							if (uVar5 <= uVar10) {
	label_05c8555d: ;
								throw new IndexOutOfRangeException();
							}
							__this_00 = (Renderer)pSVar6[(int)uVar10];
							if (__this_00 == null) goto label_05c85558;
							pUVar7 = __this_00.sharedMaterials;
							if (pUVar7 == null) goto label_05c85558;
							value = (Material[])new Material[(uint32_t)pUVar7.Length];
							if (0 < (int)pUVar7.Length) {
								uVar8 = pUVar7.Length & 0xffffffff;
								lVar13 = 0x20;
								uVar12 = 0;
								do {
									if (uVar8 <= uVar12) goto label_05c8555d;
									x = *(Object*)((long)pUVar7.m_Items + lVar13 + -0x20);
									bVar4 = (x == null);
									if (!bVar4) {
										if ((uint)pUVar7.Length <= uVar12) goto label_05c8555d;
										source = *(Material*)((long)pUVar7.m_Items + lVar13 + -0x20);
										__this_02 = new Material(source);
										__this_01 = this._ghostMaterials;
										if (__this_01 == null) goto label_05c85558;
										piVar1 = &__this_01._version;
										*piVar1 = *piVar1 + 1;
										pUVar2 = __this_01._items;
										if (pUVar2 == null) goto label_05c85558;
										uVar5 = __this_01._size;
										if (uVar5 < (uint)pUVar2.Length) {
											__this_01._size = uVar5 + 1;
											pUVar2[(int)uVar5] = (Material)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										MapEditorBrush.TryMakeTransparent((Material)__this_02);
										if (__this_02 == null) goto label_05c85558;
										bVar4 = __this_02.HasProperty("_Color");
										if (bVar4) {
											UVar14 = __this_02.color;
											value_00.r = UVar14.r + (0.6 - UVar14.r) * 0.5;
											value_00.g = UVar14.g + (0.9 - UVar14.g) * 0.5;
											value_00.a = 0.45;
											value_00.b = (1.0 - UVar14.b) * 0.5 + UVar14.b;
											__this_02.color = value_00;
										}
										if (value == null) goto label_05c85558;
										pIVar9 = il2cpp_vm_Object_IsInst((object)__this_02, (((value.obj).klass)._1).element_class);
										if (pIVar9 == null) {
											pIVar9 = new ArrayTypeMismatchException();
											throw pIVar9;
										}
										if ((uint)value.Length <= uVar12) goto label_05c8555d;
										*(MethodInfo*)((long)value.m_Items + lVar13 + -0x20) = __this_02;
									}
									uVar12 = uVar12 + 1;
									uVar5 = (uint)pUVar7.Length;
									uVar8 = (ulong)uVar5;
									lVar13 = lVar13 + 8;
								} while ((long)uVar12 < (long)(int)uVar5);
							}
							__this_00.sharedMaterials = value;
							__this_00.shadowCastingMode = 0;
							uVar10 = uVar10 + 1;
							uVar5 = (uint)pSVar6.Length;
						} while ((int)uVar10 < (int)uVar5);
					}
					return;
				}
			}
		}
	label_05c85558: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x5B86990", Offset = "0x5B85990", VA = "0x5B86990")]
	private static void TryMakeTransparent(Material m)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$TryMakeTransparent): clean
		bool bVar1;

		if (m == null) {
			throw new NullReferenceException();
		}
		bVar1 = m.HasProperty("_Mode");
		if (bVar1) {
			m.SetFloat("_Mode", 2.0);
		}
		bVar1 = m.HasProperty("_Surface");
		if (bVar1) {
			m.SetFloat("_Surface", 1.0);
		}
		m.SetOverrideTag("RenderType", "Transparent");
		bVar1 = m.HasProperty("_SrcBlend");
		if (bVar1) {
			m.SetInt("_SrcBlend", 5);
		}
		bVar1 = m.HasProperty("_DstBlend");
		if (bVar1) {
			m.SetInt("_DstBlend", 10);
		}
		bVar1 = m.HasProperty("_ZWrite");
		if (bVar1) {
			m.SetInt("_ZWrite", 0);
		}
		m.DisableKeyword("_ALPHATEST_ON");
		m.EnableKeyword("_ALPHABLEND_ON");
		m.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		m.renderQueue = 3000;
		return;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x5B81A90", Offset = "0x5B80A90", VA = "0x5B81A90")]
	private void PositionGhosts()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$PositionGhosts): 67 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		float fVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		uint uVar17;
		uint uVar18;
		int iVar19;
		List<GameObject> pSVar20;
		List<Vector3> pSVar22;
		List<string> pSVar24;
		double dVar25;
		object x;
		bool bVar26;
		LayerMask mask;
		int mask_00;
		Random __this_00;
		Int32[] layers;
		Object x_00;
		Transform pUVar27;
		MapEditorBrush __this_01;
		String pSVar28;
		BrushEntry pMVar29;
		int index;
		float fVar31;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_02;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		Quaternion UVar36;
		Quaternion value;
		Vector3 value_00;
		Vector3 UVar37;
		Vector3 value_01;
		Vector3 planePoint;
		Vector3 point;
		float local_100;
		ulong local_f8;
		Vector3 local_e8;
		ulong local_d8;
		float local_bc;
		byte[] local_b8 = new byte[8];
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[8];
		float fStack_90;
		float fStack_8c;
		byte[] local_88 = new byte[8];
		float fStack_80;
		float fStack_7c;
		Quaternion local_78;
		System_Collections_Generic_List_Enumerator_T__o local_68;
		byte[] local_48 = new byte[24];

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		local_78.x = 0.0;
		local_78.y = 0.0;
		local_78.z = 0.0;
		local_78.w = 0.0;
		local_e8.z = 0.0;
		local_e8.x = 0.0;
		local_e8.y = 0.0;
		if (this._hasCenter == false) {
			pSVar20 = this._ghostObjects;
			if (pSVar20 != null) {
				local_68 = pSVar20.GetEnumerator();
				local_a8._0_4_ = 0.0;
				local_a8._4_4_ = 0.0;
				local_a8._8_8_ = &local_68;
				while(true) {
					do {
						bVar26 = local_68.MoveNext();
						x = local_68._current;
						if (!bVar26) {
							local_68.Dispose();
							return;
						}
						bVar26 = ((Object)x != null);
					} while (!bVar26);
					if ((Object)x == null) break;
					x.SetActive(false);
				}
				throw new NullReferenceException();
			}
		}
		else {
			iVar19 = this._seed;
			__this_00 = new Random(iVar19 + 1);
			layers = (Int32[])new int[1];
			if (layers != null) {
				if ((int)layers.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				layers[0] = PhysicsLayer.MapEditorObject;
				index = 0;
				mask = PhysicsLayer.GetMask(layers);
				mask_00 = ((LayerMask)mask);
				pSVar20 = this._ghostObjects;
				while (pSVar20 != null) {
					if (pSVar20._size <= index) {
						if (this.Mode != 1) {
							return;
						}
						if (this.BoundsSnap == false) {
							return;
						}
						this.ApplyConnectedBoundsSnap(mask_00);
						return;
					}
					x_00 = (Object)pSVar20.get_Item(index);
					bVar26 = (x_00 == null);
					if (!bVar26) {
						if (x_00 == null) break;
						bVar26 = x_00.activeSelf;
						if (!bVar26) {
							x_00.SetActive(true);
						}
						uVar1 = (Vector3.zeroVector).x;
						uVar10 = (Vector3.zeroVector).y;
						local_48._4_4_ = uVar10;
						local_48._0_4_ = uVar1;
						local_48._8_8_ = 0;
						local_78.x = (Quaternion.identityQuaternion).x;
						local_78.y = (Quaternion.identityQuaternion).y;
						local_78.z = (Quaternion.identityQuaternion).z;
						local_78.w = (Quaternion.identityQuaternion).w;
						if (this.Mode == 1) {
							pSVar22 = this._ghostLocalOffsets;
							if (pSVar22 == null) break;
							if (index < pSVar22._size) {
								UVar37 = pSVar22.get_Item(index);
								fVar32 = UVar37.z;
								fVar2 = UVar37.x;
								fVar11 = UVar37.y;
							}
							else {
								fVar2 = (Vector3.zeroVector).x;
								fVar11 = (Vector3.zeroVector).y;
								fVar32 = (Vector3.zeroVector).z;
							}
							UVar37.y = fVar11;
							UVar37.x = fVar2;
							UVar37.z = fVar32;
							UVar37 = this.ApplyCurve(UVar37, ref local_78);
							fVar31 = UVar37.z;
							fVar11 = UVar37.x;
							fVar33 = UVar37.y;
							local_f8._0_4_ = this._center.x;
							local_f8._4_4_ = this._center.y;
							local_100 = this._center.z;
							uVar3 = this._surfaceFrame.x;
							uVar12 = this._surfaceFrame.y;
							uVar4 = this._surfaceFrame.z;
							uVar13 = this._surfaceFrame.w;
							local_48._8_4_ = extraout_XMM0_Dc;
							local_48._0_8_ = UVar37._0_8_;
							local_48._12_4_ = extraout_XMM0_Dd;
							fVar32 = (float)0;
							fVar2 = (float)0;
						}
						else {
							if (__this_00 == null) break;
							dVar25 = __this_00.NextDouble();
							fVar32 = (float)dVar25;
							if (fVar32 < 0.0) {
								fVar32 = sqrtf(fVar32);
							}
							else {
								fVar32 = SQRT(fVar32);
							}
							local_b8._0_4_ = fVar32 * this.Radius;
							dVar25 = __this_00.NextDouble();
							local_bc = (float)dVar25 * 3.1415927 + (float)dVar25 * 3.1415927;
							local_f8._0_4_ = this._center.x;
							local_f8._4_4_ = this._center.y;
							local_100 = this._center.z;
							local_d8._0_4_ = this._surfaceFrame.x;
							local_d8._4_4_ = this._surfaceFrame.y;
							uVar5 = this._surfaceFrame.z;
							uVar14 = this._surfaceFrame.w;
							local_88._4_4_ = uVar14;
							local_88._0_4_ = uVar5;
							local_98._0_4_ = cosf(local_bc);
							local_98._4_4_ = extraout_XMM0_Db;
							fVar31 = sinf(local_bc);
							fVar11 = (float)local_98._0_4_ * (float)local_b8._0_4_;
							fVar33 = 0.0;
							fVar31 = (float)local_b8._0_4_ * fVar31;
							uVar3 = (float)local_d8;
							uVar12 = local_d8._4_4_;
							uVar4 = local_88._0_4_;
							uVar13 = local_88._4_4_;
							fVar32 = fStack_80;
							fVar2 = fStack_7c;
						}
						UVar36.y = (float)uVar12;
						UVar36.x = (float)uVar3;
						UVar36.w = (float)uVar13;
						UVar36.z = (float)uVar4;
						point.y = fVar33;
						point.x = fVar11;
						point.z = fVar31;
						UVar37 = (UVar36 * point);
						local_b8 = (byte[])UVar37._0_8_;
						local_d8 = CONCAT44(local_d8._4_4_, UVar37.z);
						pSVar22 = this._ghostRotations;
						if (pSVar22 == null) break;
						UVar37 = pSVar22.get_Item(index);
						local_a8._4_4_ = UVar37.y * 0.017453292;
						local_a8._0_4_ = UVar37.x * 0.017453292;
						local_a8._8_4_ = UVar37.z * 0.017453292;
						UVar36 = Quaternion.Internal_FromEulerRad((Vector3)local_a8);
						fVar33 = UVar36.z;
						fStack_7c = UVar36.w;
						fVar11 = UVar36.x;
						fVar31 = UVar36.y;
						if (this.Mode == 1) {
							fVar34 = local_78.z;
							fVar35 = local_78.w;
							fVar32 = local_78.x;
							fVar2 = local_78.y;
							local_88._4_4_ = ((fStack_7c * fVar35 - fVar11 * fVar32) - fVar31 * fVar2) - fVar33 * fVar34;
							local_88._0_4_ = (fVar34 * fStack_7c + fVar35 * fVar33 + fVar31 * fVar32) - fVar11 * fVar2;
							fStack_80 = fVar34 * fStack_7c;
							local_98._4_4_ = (fVar31 * fVar35 + fStack_7c * fVar2 + fVar11 * fVar34) - fVar32 * fVar33;
							local_98._0_4_ = (fVar11 * fVar35 + fStack_7c * fVar32 + fVar2 * fVar33) - fVar34 * fVar31;
							fStack_90 = (extraout_XMM0_Dc_02 * 0.0 + fStack_7c * 0.0 + fVar2 * fStack_7c) - fVar35 * extraout_XMM0_Dc_02;
							fStack_8c = (extraout_XMM0_Dd_02 * 0.0 + fStack_7c * 0.0 + fVar31 * fVar35) - fVar2 * extraout_XMM0_Dd_02;
						}
						else {
							local_98 = (byte[])UVar36._0_8_;
							fStack_80 = fVar32;
							local_88 = (byte[])UVar36._8_8_;
							fStack_7c = fVar2;
						}
						pUVar27 = x_00.transform;
						if (pUVar27 == null) break;
						uVar6 = this._surfaceFrame.x;
						uVar15 = this._surfaceFrame.y;
						uVar7 = this._surfaceFrame.z;
						uVar16 = this._surfaceFrame.w;
						value.z =((float)uVar7 * (float)local_88._4_4_ + (float)uVar16 * (float)local_88._0_4_ +(float)local_98._4_4_ * (float)uVar6) - (float)local_98._0_4_ * (float)uVar15;
						value.x =((float)uVar16 * (float)local_98._0_4_ + (float)local_88._4_4_ * (float)uVar6 +(float)uVar15 * (float)local_88._0_4_) - (float)uVar7 * (float)local_98._4_4_;
						value.y =((float)local_98._4_4_ * (float)uVar16 + (float)local_88._4_4_ * (float)uVar15 +(float)local_98._0_4_ * (float)uVar7) - (float)uVar6 * (float)local_88._0_4_;
						value.w =(((float)local_88._4_4_ * (float)uVar16 - (float)local_98._0_4_ * (float)uVar6) -(float)local_98._4_4_ * (float)uVar15) - (float)local_88._0_4_ * (float)uVar7;
						pUVar27.rotation = value;
						__this_01 = (MapEditorBrush)x_00.transform;
						if (__this_01 == null) break;
						local_f8._0_4_ = (float)local_f8 + (float)local_b8._0_4_;
						local_f8._4_4_ = local_f8._4_4_ + (float)local_b8._4_4_;
						local_100 = local_100 + (float)local_d8;
						value_01.z = this._surfaceNormal.z * 500.0 + local_100;
						uVar8 = this._surfaceNormal.x;
						uVar17 = this._surfaceNormal.y;
						value_01.x = (float)uVar8 * 500.0 + (float)local_f8;
						value_01.y = (float)uVar17 * 500.0 + local_f8._4_4_;
						__this_01.position = value_01 ;
						if (this.FlatPlane == false) {
							planePoint.z = local_100;
							planePoint.x = (float)local_f8;
							planePoint.y = local_f8._4_4_;
							UVar37 = this.ProjectToSurface((GameObject)x_00, planePoint, mask_00, ref local_e8);
							local_100 = UVar37.z;
							local_f8._0_4_ = UVar37.x;
							local_f8._4_4_ = UVar37.y;
							if (this.Mode == 1) {
								local_f8._0_4_ = (float)local_f8 + (float)local_48._4_4_ * local_e8.x;
								local_f8._4_4_ = local_f8._4_4_ + (float)local_48._4_4_ * local_e8.y;
								local_100 = local_100 + local_e8.z * (float)local_48._4_4_;
							}
							pSVar24 = this._ghostAssets;
							if (pSVar24 == null) break;
							pSVar28 = pSVar24.get_Item(index);
							pMVar29 = this.FindEntry(pSVar28);
							if (pMVar29 != null) {
								fVar32 = pMVar29.YOffset;
								local_f8._0_4_ = (float)local_f8 + fVar32 * local_e8.x;
								local_f8._4_4_ = local_f8._4_4_ + fVar32 * local_e8.y;
								local_100 = local_100 + local_e8.z * fVar32;
							}
							pUVar27 = x_00.transform;
							if (pUVar27 == null) break;
						}
						else {
							local_b8._0_4_ = __this_01.GetSupportOffset((GameObject)x_00, (Vector3)this._surfaceNormal);
							local_b8._4_4_ = extraout_XMM0_Db_00;
							pSVar24 = this._ghostAssets;
							if (pSVar24 == null) break;
							pSVar28 = pSVar24.get_Item(index);
							pMVar29 = this.FindEntry(pSVar28);
							if (pMVar29 == null) {
								fVar32 = 0.0;
							}
							else {
								fVar32 = pMVar29.YOffset;
							}
							local_d8 = CONCAT44(local_d8._4_4_, fVar32);
							pUVar27 = x_00.transform;
							if (pUVar27 == null) break;
							fVar32 = (float)local_b8._0_4_ + (float)local_d8;
							local_100 = local_100 + this._surfaceNormal.z * fVar32;
							uVar9 = this._surfaceNormal.x;
							uVar18 = this._surfaceNormal.y;
							local_f8._0_4_ = (float)local_f8 + fVar32 * (float)uVar9;
							local_f8._4_4_ = local_f8._4_4_ + fVar32 * (float)uVar18;
						}
						value_00.y = local_f8._4_4_;
						value_00.x = (float)local_f8;
						value_00.z = local_100;
						pUVar27.position = value_00;
					}
					index = index + 1;
					pSVar20 = this._ghostObjects;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x5B883D0", Offset = "0x5B873D0", VA = "0x5B883D0")]
	private void ApplyConnectedBoundsSnap(int mask)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ApplyConnectedBoundsSnap): 26 lines keep C-only constructs
		Quaternion pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		int iVar6;
		MapEditorBrush.c__DisplayClass77_1 pMVar7;
		MapEditorBrush.c__DisplayClass77_3 pMVar8;
		bool bVar9;
		bool bVar10;
		Quaternion rotation;
		Quaternion rotation_00;
		int iVar11;
		MapEditorBrush.c__DisplayClass77_0 pMVar12;
		long lVar13;
		MapEditorBrush.c__DisplayClass77_5 __this_00;
		MapEditorBrush.c__DisplayClass77_6 __this_01;
		Func<int, int> pSVar14;
		MapEditorBrush.c__DisplayClass77_1 __this_02;
		MapEditorBrush.c__DisplayClass77_2 __this_03;
		MapEditorBrush.c__DisplayClass77_3 __this_04;
		MapEditorBrush.c__DisplayClass77_4 __this_05;
		int iVar15;
		MapEditorBrush.c__DisplayClass77_5 pMVar16;
		ulong uVar17;
		MapEditorBrush.c__DisplayClass77_1* targetAddress;
		MapEditorBrush.c__DisplayClass77_3* targetAddress_00;
		byte[] auVar18 = new byte[12];
		byte[] auVar19 = new byte[16];
		float fVar20;
		uint uVar21;
		uint uVar22;
		uint uVar23;
		uint uVar24;
		float fVar25;
		float fVar26;
		Quaternion rotation_01;
		Vector3 UVar27;

		pMVar12 = new MapEditorBrush.c__DisplayClass77_0();
		if (pMVar12 != null) {
			iVar11 = this.GridX;
			iVar15 = 1;
			if (1 < iVar11) {
				iVar15 = iVar11;
			}
			pMVar12.gx = iVar15;
			auVar18 = ZEXT812(0x3f800000);
			fVar20 = this.SpacingX;
			if (auVar18._0_4_ <= fVar20) {
				auVar18._4_8_ = auVar18._4_8_;
				auVar18._0_4_ = fVar20;
			}
			fVar20 = (float)(iVar15 + -1) * auVar18._0_4_;
			uVar22 = this.GridY;
			uVar24 = this.GridZ;
			uVar21 = -(uint)(1 < (int)uVar22);
			uVar23 = -(uint)(1 < (int)uVar24);
			uVar22 = ~uVar21 & 1 | uVar22 & uVar21;
			uVar24 = ~uVar23 & 1 | uVar24 & uVar23;
			pMVar12.gy = uVar22;
			uVar2 = this.SpacingY;
			uVar4 = this.SpacingZ;
			auVar19._4_4_ = uVar4;
			auVar19._0_4_ = uVar2;
			auVar19._8_8_ = 0;
			auVar19 = maxps(_DAT_01005870, auVar19);
			pUVar1 = &this._surfaceFrame;
			uVar17._0_4_ = pUVar1.x;
			uVar17._4_4_ = pUVar1.y;
			uVar3 = this._surfaceFrame.z;
			uVar5 = this._surfaceFrame.w;
			rotation_00 = pUVar1.fields;
			rotation = pUVar1.fields;
			fVar25 = (float)(int)(uVar22 - 1) * auVar19._0_4_;
			fVar26 = (float)(int)(uVar24 - 1) * auVar19._4_4_;
			lVar13 = 0x38;
			bVar9 = fVar20 >= fVar26;
			bVar10 = fVar20 >= fVar25;
			if (!(bVar9 && bVar10)) {
				uVar3 = 0;
				uVar5 = 0;
				uVar17 = 0;
				lVar13 = (ulong)(byte)(fVar25 < fVar26 | ~(fVar20 < fVar26 || fVar20 < fVar25)) * 4 + 0x3c;
			}
			fVar20 = *(float)((long)&this.klass + lVar13);
			if (bVar9 && bVar10) {
				rotation_01.w = (float)uVar5;
				rotation_01.z = (float)uVar3;
				rotation_01.x = (float)(int)uVar17;
				rotation_01.y = (float)(int)((ulong)uVar17 >> 0x20);
				UVar27 = (rotation_01 * (Vector3)(Vector3.rightVector)) ;
				__this_02 = new MapEditorBrush.c__DisplayClass77_1();
				if (__this_02 != null) {
					__this_02.CS___8__locals1 = pMVar12;
					__this_02.j = 0;
					pMVar12 = __this_02.CS___8__locals1;
					if (pMVar12 != null) {
						iVar11 = 0;
						while(true) {
							if (pMVar12.gy <= iVar11) {
								return;
							}
							__this_03 = new MapEditorBrush.c__DisplayClass77_2();
							if (__this_03 == null) break;
							targetAddress = &__this_03.CS___8__locals2;
							__this_03.CS___8__locals2 = __this_02;
							__this_03.k = 0;
							do {
								pMVar7 = *targetAddress;
								if ((pMVar7 == null) ||(pMVar12 = pMVar7.CS___8__locals1, pMVar12 == null)) goto label_05c88ad3;
								iVar6 = pMVar12.gx;
								pSVar14 = new Func<int, int>((object)__this_03, (intptr_t) MethodInfo_MapEditor_MapEditorBrush_c__DisplayClass77_2_ApplyConnectedBoundsSnap_b__0);
								this.SolveConnectedBoundsSnapLine(iVar6, pSVar14, UVar27, fVar20, mask);
								iVar11 = __this_03.k + 1;
								__this_03.k = iVar11;
							} while (iVar11 < (int)uVar24);
							iVar11 = __this_02.j + 1;
							__this_02.j = iVar11;
							pMVar12 = __this_02.CS___8__locals1;
							if (pMVar12 == null) break;
						}
					}
				}
			}
			else if (fVar26 <= fVar25) {
				UVar27 = ((Quaternion)rotation_00 * (Vector3)(Vector3.upVector));
				__this_04 = new MapEditorBrush.c__DisplayClass77_3();
				if (__this_04 != null) {
					__this_04.CS___8__locals3 = pMVar12;
					__this_04.i = 0;
					pMVar12 = __this_04.CS___8__locals3;
					if (pMVar12 != null) {
						iVar11 = 0;
						while(true) {
							if (pMVar12.gx <= iVar11) {
								return;
							}
							__this_05 = new MapEditorBrush.c__DisplayClass77_4();
							if (__this_05 == null) break;
							targetAddress_00 = &__this_05.CS___8__locals4;
							__this_05.CS___8__locals4 = __this_04;
							__this_05.k = 0;
							do {
								pMVar8 = *targetAddress_00;
								if ((pMVar8 == null) ||(pMVar12 = pMVar8.CS___8__locals3, pMVar12 == null)) goto label_05c88ad3;
								iVar6 = pMVar12.gy;
								pSVar14 = new Func<int, int>((object)__this_05, (intptr_t) MethodInfo_MapEditor_MapEditorBrush_c__DisplayClass77_4_ApplyConnectedBoundsSnap_b__1);
								this.SolveConnectedBoundsSnapLine(iVar6, pSVar14, UVar27, fVar20, mask);
								iVar11 = __this_05.k + 1;
								__this_05.k = iVar11;
							} while (iVar11 < (int)uVar24);
							iVar11 = __this_04.i + 1;
							__this_04.i = iVar11;
							pMVar12 = __this_04.CS___8__locals3;
							if (pMVar12 == null) break;
						}
					}
				}
			}
			else {
				UVar27 = ((Quaternion)rotation * (Vector3)(Vector3.forwardVector));
				__this_00 = new MapEditorBrush.c__DisplayClass77_5();
				if (__this_00 != null) {
					__this_00.CS___8__locals5 = pMVar12;
					__this_00.i = 0;
					pMVar12 = __this_00.CS___8__locals5;
					if (pMVar12 != null) {
						iVar11 = 0;
						while(true) {
							if (pMVar12.gx <= iVar11) {
								return;
							}
							__this_01 = new MapEditorBrush.c__DisplayClass77_6();
							if (__this_01 == null) break;
							__this_01.CS___8__locals6 = __this_00;
							__this_01.j = 0;
							pMVar16 = __this_01.CS___8__locals6;
							if (pMVar16 == null) break;
							iVar11 = 0;
							while(true) {
								pMVar12 = pMVar16.CS___8__locals5;
								if (pMVar12 == null) goto label_05c88ad3;
								if (pMVar12.gy <= iVar11) break;
								pSVar14 = new Func<int, int>((object)__this_01, (intptr_t) MethodInfo_MapEditor_MapEditorBrush_c__DisplayClass77_6_ApplyConnectedBoundsSnap_b__2);
								this.SolveConnectedBoundsSnapLine(uVar24, pSVar14, UVar27, fVar20, mask);
								iVar11 = __this_01.j + 1;
								__this_01.j = iVar11;
								pMVar16 = __this_01.CS___8__locals6;
								if (pMVar16 == null) goto label_05c88ad3;
							}
							iVar11 = __this_00.i + 1;
							__this_00.i = iVar11;
							pMVar12 = __this_00.CS___8__locals5;
							if (pMVar12 == null) break;
						}
					}
				}
			}
		}
	label_05c88ad3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x5B88B20", Offset = "0x5B87B20", VA = "0x5B88B20")]
	private void SolveConnectedBoundsSnapLine(int count, Func<int, int> getIndex, Vector3 chainDirection, float gap, int mask)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$SolveConnectedBoundsSnapLine): 163 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		sbyte cVar7;
		List<GameObject> pSVar8;
		List<Vector3> __this_00;
		byte[] auVar9 = new byte[16];
		Quaternion rotation;
		ulong uVar10;
		ulong uVar11;
		bool bVar12;
		int iVar13;
		Object pUVar14;
		Transform pUVar15;
		float pfVar16;
		Transform __this_01;
		MethodInfo method_00;
		MethodInfo* method_01;
		int iVar17;
		ulong uVar18;
		float fVar19;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		float extraout_XMM0_Dc_05;
		float extraout_XMM0_Dc_06;
		uint extraout_XMM0_Dc_07;
		uint extraout_XMM0_Dc_08;
		uint extraout_XMM0_Dc_09;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		float extraout_XMM0_Dd_05;
		float extraout_XMM0_Dd_06;
		uint extraout_XMM0_Dd_07;
		uint extraout_XMM0_Dd_08;
		uint extraout_XMM0_Dd_09;
		float fVar20;
		float fVar21;
		uint uVar22;
		uint uVar23;
		uint uVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar31;
		byte[] auVar30 = new byte[16];
		Quaternion UVar32;
		Quaternion UVar33;
		Quaternion value;
		Vector3 UVar34;
		Vector3 value_00;
		Vector3 axis;
		Vector3 UVar35;
		Vector3 value_01;
		Vector3 axis_00;
		Vector3 planePoint;
		Vector3 planePoint_00;
		Vector3 point;
		Vector3 point_00;
		Vector3 point_01;
		float local_288;
		float fStack_284;
		byte[] local_278 = new byte[8];
		float fStack_270;
		float fStack_26c;
		float local_268;
		float fStack_264;
		float local_24c;
		Quaternion local_248;
		Vector3 local_238;
		byte[] local_228 = new byte[8];
		float fStack_220;
		float fStack_21c;
		byte[] local_218 = new byte[16];
		int local_208;
		float local_204;
		float local_200;
		float local_1fc;
		byte[] local_1f8 = new byte[8];
		float fStack_1f0;
		float fStack_1ec;
		byte[] local_1e8 = new byte[8];
		ulong uStack_1e0;
		Vector3 local_1d8;
		Vector3 local_1c8;
		ulong local_1b8;
		byte[] local_1a8 = new byte[24];
		ulong local_190;
		ulong local_188;
		ulong uStack_180;
		float local_178;
		float fStack_174;
		float fStack_170;
		float fStack_16c;
		Quaternion local_168;
		Func<int, int> local_150;
		Vector3 local_148;
		Vector3 local_138;
		float local_128;
		float fStack_124;
		float fStack_120;
		float fStack_11c;
		Quaternion local_118;
		float local_108;
		float fStack_104;
		float local_f8;
		byte[] local_e8 = new byte[16];
		float local_d8;
		float fStack_d4;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		float local_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		float local_a8;
		RaycastHit local_98;
		RaycastHit local_68;

		uVar18 = (ulong)(uint)count;
		local_208 = mask;
		local_f8 = gap;
		local_168.x = 0.0;
		local_168.y = 0.0;
		local_168.z = 0.0;
		local_168.w = 0.0;
		local_1c8.z = 0.0;
		local_1c8.x = 0.0;
		local_1c8.y = 0.0;
		local_148.z = 0.0;
		local_148.x = 0.0;
		local_148.y = 0.0;
		local_238.z = 0.0;
		local_238.x = 0.0;
		local_238.y = 0.0;
		local_1d8.z = 0.0;
		local_1d8.x = 0.0;
		local_1d8.y = 0.0;
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
		local_98.m_UV.x = 0.0;
		local_98.m_UV.y = 0.0;
		local_98.m_Collider.m_Data = (EntityId)0x0;
		local_98.m_Normal.y = 0.0;
		local_98.m_Normal.z = 0.0;
		local_98.m_FaceID = 0;
		local_98.m_Distance = 0.0;
		local_98.m_Point.x = 0.0;
		local_98.m_Point.y = 0.0;
		local_98.m_Point.z = 0.0;
		local_98.m_Normal.x = 0.0;
		if (count < 2) {
			return;
		}
		if (getIndex != null) {
			pSVar8 = this._ghostObjects;
			iVar13 = (*(code)getIndex.invoke_impl)(getIndex.method_code,0,getIndex.method);
			if (pSVar8 != null) {
				pUVar14 = (Object)pSVar8.get_Item(iVar13);
				bVar12 = (pUVar14 == null);
				if (bVar12) {
					return;
				}
				__this_00 = this._ghostLocalOffsets;
				iVar13 = (*(code)getIndex.invoke_impl)(getIndex.method_code,0,getIndex.method);
				if (__this_00 != null) {
					UVar34 = __this_00.get_Item(iVar13) ;
					this.ApplyCurve(UVar34, ref local_168);
					local_1b8._0_4_ = this._surfaceFrame.x;
					local_1b8._4_4_ = this._surfaceFrame.y;
					uVar1 = this._surfaceFrame.z;
					uVar4 = this._surfaceFrame.w;
					local_1a8._4_4_ = uVar4;
					local_1a8._0_4_ = uVar1;
					fVar19 = local_1b8._4_4_ * local_168.w;
					local_1e8._0_4_ = local_168.z;
					local_1e8._4_4_ = local_168.w;
					uStack_1e0 = 0;
					local_1a8._8_8_ = 0;
					fVar21 = (float)uVar4 * local_168.y;
					local_1f8._0_4_ = local_168.x;
					local_1f8._4_4_ = local_168.y;
					fVar28 = fVar21 + fVar19;
					fVar25 = (fVar28 + (float)uVar1 * local_168.x) - (float)local_1b8 * local_168.z;
					fVar19 = (fVar28 + fVar21) - fVar19;
					local_218._4_4_ = (float)uVar4 * local_168.w;
					local_218._0_4_ = (float)uVar1 * local_168.z;
					local_218._8_8_ = 0;
					local_228._4_4_ = local_1b8._4_4_ * local_168.y;
					local_228._0_4_ = (float)local_1b8 * local_168.x;
					local_248.x = this._surfaceFrame.x;
					local_248.y = this._surfaceFrame.y;
					local_248.z = this._surfaceFrame.z;
					local_248.w = this._surfaceFrame.w;
					UVar32 = Quaternion.Internal_Inverse(ref local_248);
					fVar20 = UVar32.z;
					fVar27 = UVar32.w;
					fVar21 = UVar32.x;
					fVar28 = UVar32.y;
					fVar29 = ((float)local_1f8._4_4_ * (float)local_1b8 +(float)local_1e8._4_4_ * (float)local_1a8._0_4_ +(float)local_1a8._4_4_ * (float)local_1e8._0_4_) - local_1b8._4_4_ * (float)local_1f8._0_4_;
					fVar31 = ((float)local_1e8._0_4_ * local_1b8._4_4_ +(float)local_1f8._0_4_ * (float)local_1a8._4_4_ + (float)local_1b8 * (float)local_1e8._4_4_) - (float)local_1a8._0_4_ * (float)local_1f8._4_4_;
					fVar26 = (((float)local_218._4_4_ - (float)local_228._0_4_) - (float)local_228._4_4_) -(float)local_218._0_4_;
					local_248.y = (fVar29 * fVar21 + fVar27 * fVar25 + fVar26 * fVar28) - fVar20 * fVar31;
					local_248.x = (fVar20 * fVar25 + fVar31 * fVar27 + fVar26 * fVar21) - fVar28 * fVar29;
					local_248.w = ((fVar26 * fVar27 - fVar21 * fVar31) - fVar25 * fVar28) - fVar20 * fVar29;
					local_248.z = (fVar26 * fVar20 + fVar27 * fVar29 + fVar31 * fVar28) - fVar21 * fVar25;
					UVar32 = Quaternion.Internal_Inverse(ref local_248);
					fStack_220 = (float)extraout_XMM0_Dc;
					local_228 = (byte[])UVar32._0_8_;
					fStack_21c = (float)extraout_XMM0_Dd;
					if ((pUVar14 != null) &&(fVar21 = fVar19, fVar28 = fVar31, pUVar15 = pUVar14.transform, pUVar15 != null)) {
						UVar33 = pUVar15.rotation;
						fVar25 = UVar33.z;
						fVar26 = UVar33.w;
						fVar20 = UVar33.x;
						fVar27 = UVar33.y;
						local_268 = UVar32.z;
						fStack_264 = UVar32.w;
						local_128 = (fVar27 * (float)local_228._0_4_ + fVar26 * local_268 + fStack_264 * fVar25) -(float)local_228._4_4_ * fVar20;
						fVar29 = (fVar25 * (float)local_228._4_4_ + fVar20 * fStack_264 + (float)local_228._0_4_ * fVar26) - local_268 * fVar27;
						fStack_120 = (extraout_XMM0_Dc_00 * fStack_220 + fVar21 * fVar19 + fVar19 * fVar21) - fStack_220 * extraout_XMM0_Dc_00;
						fStack_11c = (extraout_XMM0_Dd_00 * fStack_21c + fVar28 * fVar31 + fVar31 * fVar28) - fStack_21c * extraout_XMM0_Dd_00;
						local_178 = ((fVar26 * fStack_264 - fVar20 * (float)local_228._0_4_) - fVar27 * (float)local_228._4_4_) - fVar25 * local_268;
						fVar19 = (fVar20 * local_268 + fVar26 * (float)local_228._4_4_ + fVar27 * fStack_264) - fVar25 * (float)local_228._0_4_;
						fStack_170 = ((fVar21 * fStack_264 - extraout_XMM0_Dc_00 * fStack_220) - extraout_XMM0_Dc_00 * fStack_220) - fVar25 * fStack_264;
						fStack_16c = ((fVar28 * fStack_264 - extraout_XMM0_Dd_00 * fStack_21c) - extraout_XMM0_Dd_00 * fStack_21c) - fVar25 * (float)local_228._4_4_;
						local_248.y = fVar19;
						local_248.x = fVar29;
						local_248.w = local_178;
						local_248.z = local_128;
						fStack_174 = fVar19;
						fStack_124 = fVar29;
						UVar32 = Quaternion.Internal_Inverse(ref local_248);
						UVar34 = (UVar32 * chainDirection);
						local_1a8._8_4_ = extraout_XMM0_Dc_01;
						local_1a8._0_8_ = UVar34._0_8_;
						local_1a8._12_4_ = extraout_XMM0_Dd_01;
						local_1b8 = CONCAT44(local_1b8._4_4_, UVar34.z);
						rotation = this._surfaceFrame;
						iVar17 = this.CurveAxis;
						if (iVar17 == 1) {
							method_00 = (MethodInfo)&Vector3.rightVector;
							pfVar16 = &(Vector3.rightVector).z;
						}
						else if (iVar17 == 2) {
							method_00 = (MethodInfo)&Vector3.upVector;
							pfVar16 = &(Vector3.upVector).z;
						}
						else {
							method_00 = (MethodInfo)&Vector3.forwardVector;
							pfVar16 = &(Vector3.forwardVector).z;
						}
						uVar2 = *(float)&method_00.methodPointer;
						uVar5 = *(float)((long)&method_00.methodPointer + 4);
						UVar34.y = (float)uVar5;
						UVar34.x = (float)uVar2;
						UVar34.z = *pfVar16;
						UVar34 = ((Quaternion)rotation * UVar34);
						local_200 = UVar34.z;
						local_118.z = extraout_XMM0_Dc_02;
						local_118._0_8_ = UVar34._0_8_;
						local_118.w = extraout_XMM0_Dd_02;
						if (this.CurveAxis == 0) {
							local_204 = 0.0;
							local_24c = 0.0;
						}
						else {
							local_24c = this.CurveAmount;
							local_204 = local_24c / (float)(count + -1);
							local_24c = local_24c * -0.5;
						}
						pUVar15 = pUVar14.transform;
						local_248.x = local_118.x;
						local_248.y = local_118.y;
						local_248.z = local_200;
						UVar32 = Quaternion.Internal_AngleAxis(local_24c, ref local_248);
						fVar20 = UVar32.z;
						fVar27 = UVar32.w;
						fVar21 = UVar32.x;
						fVar28 = UVar32.y;
						if (pUVar15 != null) {
							local_a8 = fStack_124;
							local_b8 = local_178;
							fStack_b4 = local_178;
							fStack_b0 = local_178;
							fStack_ac = local_178;
							UVar32.y = (fVar19 * fVar27 + local_178 * fVar28 + fVar29 * fVar20) - local_128 * fVar21;
							UVar32.x =(fVar27 * fStack_124 + local_178 * fVar21 + fVar28 * local_128) - fStack_174 * fVar20;
							UVar32.w =((fVar27 * local_178 - fStack_124 * fVar21) - fVar28 * fStack_174) - local_128 * fVar20;
							UVar32.z =(local_178 * fVar20 + local_128 * fVar27 + fStack_174 * fVar21) - fStack_124 * fVar28;
							pUVar15.rotation = UVar32;
							pUVar15 = pUVar14.transform;
							if (pUVar15 != null) {
								local_c8 = fStack_174;
								fStack_c4 = fStack_174;
								fStack_c0 = fStack_174;
								fStack_bc = fStack_174;
								UVar32 = pUVar15.rotation;
								UVar35.z = (float)local_1b8;
								UVar35.x = (float)local_1a8._0_4_;
								UVar35.y = (float)local_1a8._4_4_;
								UVar34 = (UVar32 * UVar35);
								local_288 = UVar34.z;
								fStack_270 = (float)extraout_XMM0_Dc_03;
								local_278 = UVar34._0_8_;
								fStack_26c = (float)extraout_XMM0_Dd_03;
								MapEditorBrush.GetBoundsEdgeCenters((GameObject)pUVar14, UVar34, ref local_148, ref local_1c8);
								local_d8 = local_f8;
								fStack_d4 = local_f8;
								iVar17 = 1;
								local_190 = uVar18;
								local_150 = getIndex;
								while(true) {
									iVar13 = (*(code)getIndex.invoke_impl)(getIndex.method_code,iVar17,getIndex.method);
									pSVar8 = this._ghostObjects;
									if (pSVar8 == null) break;
									method_01 = &MethodInfo_System_Collections_Generic_List_GameObject_get_Item;
									pUVar14 = (Object)pSVar8.get_Item(iVar13);
									bVar12 = (pUVar14 == null);
									if (!bVar12) {
										local_248.x = local_118.x;
										local_248.y = local_118.y;
										uVar22 = 0;
										uVar23 = 0;
										local_248.z = local_200;
										UVar32 = Quaternion.Internal_AngleAxis((float)iVar17 * local_204 + local_24c, ref local_248);
										fStack_220 = (float)uVar22;
										local_228 = (byte[])UVar32._8_8_;
										fStack_21c = (float)uVar23;
										if ((pUVar14 == null) ||(pUVar15 = pUVar14.transform, pUVar15 == null)) break;
										local_268 = UVar32.x;
										fStack_264 = UVar32.y;
										UVar33.z =(local_b8 * (float)local_228._0_4_ + (float)local_228._4_4_ * local_128 + local_c8 * local_268) - fStack_124 * fStack_264;
										UVar33.w =((fStack_b4 * (float)local_228._4_4_ - local_268 * fStack_124) - fStack_c4 * fStack_264 ) - local_128 * (float)local_228._0_4_;
										fVar21 = (fStack_b0 * fStack_220 + fStack_220 * fStack_120 + fStack_c0 * extraout_XMM0_Dc_05 ) - fStack_120 * extraout_XMM0_Dc_05;
										fVar19 = (fStack_ac * fStack_21c + fStack_21c * fStack_11c + fStack_bc * extraout_XMM0_Dd_05 ) - fStack_11c * extraout_XMM0_Dd_05;
										UVar33.x =(fStack_264 * local_128 + local_a8 * (float)local_228._4_4_ + local_268 * local_178) - local_c8 * (float)local_228._0_4_;
										UVar33.y =((float)local_228._0_4_ * fStack_124 + fStack_264 * local_178 + (float)local_228._4_4_ * fStack_174) - local_268 * local_128;
										pUVar15.rotation = UVar33;
										pUVar15 = pUVar14.transform;
										if (pUVar15 == null) break;
										UVar32 = pUVar15.rotation;
										fVar27 = UVar32.w;
										point_00.z = (float)local_1b8;
										point_00.x = (float)local_1a8._0_4_;
										point_00.y = (float)local_1a8._4_4_;
										UVar34 = (UVar32 * point_00);
										fVar20 = UVar34.z;
										fVar31 = UVar34.x;
										fVar25 = UVar34.y;
										auVar30._0_4_ = (float)local_278._0_4_ + fVar31;
										auVar30._4_4_ = (float)local_278._4_4_ + fVar25;
										auVar30._8_4_ = fStack_270 + extraout_XMM0_Dc_06;
										auVar30._12_4_ = fStack_26c + extraout_XMM0_Dd_06;
										local_288 = local_288 + fVar20;
										fVar28 = local_288 * local_288 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
										local_228._4_4_ = fVar27;
										local_228._0_4_ = fVar20;
										fStack_220 = fVar21;
										fStack_21c = fVar19;
										fVar21 = fVar31;
										fVar19 = fVar25;
										fVar27 = fVar20;
										if (0.0001 <= fVar28) {
											if (Il2CppMethodInitialized_0753e729 == false) {
												local_218._0_4_ = fVar28;
												Il2CppMethodInitialized_0753e729 = true;
												fVar20 = (float)local_228._0_4_;
												fVar28 = (float)local_218._0_4_;
												if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c8965f;
	label_05c895ed: ;
												if (0.0 <= fVar28) goto label_05c895fa;
	label_05c89691: ;
												fVar28 = sqrtf(fVar28);
												fVar20 = (float)local_228._0_4_;
											}
											else {
												if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c895ed;
	label_05c8965f: ;
												local_218._0_4_ = fVar28;
												fVar20 = (float)local_228._0_4_;
												fVar28 = (float)local_218._0_4_;
												if ((float)local_218._0_4_ < 0.0) goto label_05c89691;
	label_05c895fa: ;
												fVar28 = SQRT(fVar28);
											}
											if (1e-05 < fVar28) {
												fVar27 = local_288 / fVar28;
												auVar9._4_4_ = fVar28;
												auVar9._0_4_ = fVar28;
												auVar9._8_4_ = fVar28;
												auVar9._12_4_ = fVar28;
												auVar30 = divps(auVar30, auVar9);
												fVar21 = auVar30._0_4_;
												fVar19 = auVar30._4_4_;
											}
											else {
												fVar21 = 0.0;
												fVar19 = 0.0;
												fVar27 = 0.0;
											}
										}
										uVar10 = local_1c8._0_8_;
										local_1fc = fVar27 * local_f8 + local_1c8.z;
										axis.z = fVar20;
										axis.x = UVar34.x;
										axis.y = UVar34.y;
										MapEditorBrush.GetBoundsEdgeCenters((GameObject)pUVar14, axis, ref local_238, ref local_1d8);
										pUVar15 = pUVar14.transform;
										if (pUVar15 == null) break;
										local_278._0_4_ = SUB84(uVar10, 0);
										local_278._4_4_ = SUB84(uVar10, 4);
										fVar21 = (float)local_278._0_4_ + fVar21 * local_d8;
										fVar19 = (float)local_278._4_4_ + fVar19 * fStack_d4;
										UVar35 = pUVar15.position;
										value_01.x = UVar35.x + (fVar21 - local_238.x);
										value_01.y = UVar35.y + (fVar19 - local_238.y);
										value_01.z = UVar35.z + (local_1fc - local_238.z);
										pUVar15.position = value_01;
										axis_00.z = (float)local_228._0_4_;
										axis_00.x = UVar34.x;
										axis_00.y = UVar34.y;
										MapEditorBrush.GetBoundsEdgeCenters((GameObject)pUVar14, axis_00, ref local_238, ref local_1d8);
										uVar10 = local_238._0_8_;
										local_1e8._0_4_ = local_1d8.x;
										local_1e8._4_4_ = local_1d8.y;
										uStack_1e0._0_4_ = 0.0;
										uStack_1e0._4_4_ = 0.0;
										local_218 = ZEXT416((uint)local_238.z);
										local_1f8._4_4_ = 0.0;
										local_1f8._0_4_ = local_1d8.z;
										if (Il2CppMethodInitialized_0753e729 == false) {
											local_1e8._0_4_ = local_1d8.x;
											local_1e8._4_4_ = local_1d8.y;
											uStack_1e0 = 0;
											Il2CppMethodInitialized_0753e729 = true;
										}
										uVar18 = local_190;
										fVar28 = (float)local_1e8._0_4_;
										fVar20 = (float)local_1e8._4_4_;
										if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
											fVar28 = (float)local_1e8._0_4_;
											fVar20 = (float)local_1e8._4_4_;
										}
										local_288 = (float)uVar10;
										fStack_284 = SUB84(uVar10, 4);
										local_1e8._4_4_ = fVar20 - fStack_284;
										local_1e8._0_4_ = fVar28 - local_288;
										uStack_1e0 = CONCAT44(uStack_1e0._4_4_ - 0.0, (float)uStack_1e0 - 0.0);
										local_1f8._0_4_ = (float)local_1f8._0_4_ - (float)local_218._0_4_;
										fVar28 = fVar28 - local_288;
										fStack_1f0 = (float)local_1f8._4_4_ - (float)local_218._4_4_;
										fStack_104 = fVar28 * fVar28;
										local_108 = fStack_104 + (float)local_1e8._4_4_ * (float)local_1e8._4_4_ +(float)local_1f8._0_4_ * (float)local_1f8._0_4_;
										local_1f8._4_4_ = fVar28;
										fStack_1ec = fVar20 - fStack_284;
										if (local_108 < 0.0) {
											fVar28 = sqrtf(local_108);
											cVar7 = this.FlatPlane;
											uVar22 = extraout_XMM0_Db;
											uVar23 = extraout_XMM0_Dc_07;
											uVar24 = extraout_XMM0_Dd_07;
										}
										else {
											uVar22 = 0;
											uVar23 = 0;
											uVar24 = 0;
											fVar28 = SQRT(local_108);
											cVar7 = this.FlatPlane;
										}
										uVar11 = local_188;
										fVar20 = local_138.z;
										if (cVar7 == false) {
											local_188 = CONCAT44(uVar22, fVar28);
											uStack_180 = CONCAT44(uVar24, uVar23);
											planePoint.z = (float)local_218._0_4_;
											local_238.x = (float)uVar10;
											local_238.y = SUB84(uVar10, 4);
											planePoint.x = local_238.x;
											planePoint.y = local_238.y;
											bVar12 = this.TryFindClosestSurfaceHit(planePoint, local_208, ref local_68);
											uVar11 = local_188;
											fVar20 = local_138.z;
											if (bVar12) {
												planePoint_00.x = local_288 + (float)local_188 * fVar31;
												planePoint_00.y = fStack_284 + (float)local_188 * fVar25;
												planePoint_00.z =(float)local_218._0_4_ + (float)local_228._0_4_ * (float)local_188;
												bVar12 = this.TryFindClosestSurfaceHit(planePoint_00, local_208, ref local_98);
												uVar11 = local_188;
												fVar20 = local_138.z;
												if (bVar12) {
													UVar34 = local_98.point;
													local_218._8_4_ = extraout_XMM0_Dc_08;
													local_218._0_8_ = UVar34._0_8_;
													local_218._12_4_ = extraout_XMM0_Dd_08;
													UVar35 = local_68.point;
													local_e8._8_4_ = extraout_XMM0_Dc_09;
													local_e8._0_8_ = UVar35._0_8_;
													local_e8._12_4_ = extraout_XMM0_Dd_09;
													local_188._0_4_ = this._surfaceNormal.x;
													local_188._4_4_ = this._surfaceNormal.y;
													fVar28 = this._surfaceNormal.z;
													if (Il2CppMethodInitialized_0753e729 == false) {
														Il2CppMethodInitialized_0753e729 = true;
														if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c899fa;
	label_05c899ad: ;
														if (0.0 <= local_108) goto label_05c899be;
	label_05c89a10: ;
														fVar27 = sqrtf(local_108);
														uVar11 = local_188;
														fVar20 = local_138.z;
													}
													else {
														if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c899ad;
	label_05c899fa: ;
														if (local_108 < 0.0) goto label_05c89a10;
	label_05c899be: ;
														fVar27 = SQRT(local_108);
														uVar11 = local_188;
														fVar20 = local_138.z;
													}
													if (0.0001 < local_108) {
														local_188._0_4_ = (float)uVar11;
														local_188._4_4_ = (float)((ulong)uVar11 >> 0x20);
														fVar28 = (UVar34.z - UVar35.z) * fVar28 + local_188._4_4_ * ((float)local_218._4_4_ - (float)local_e8._4_4_) +(float)local_188 * ((float)local_218._0_4_ - (float)local_e8._0_4_);
														uVar3 = this._surfaceNormal.x;
														uVar6 = this._surfaceNormal.y;
														fVar25 = (float)uVar6 * fVar28 + fVar25 * fVar27;
														local_138.z = this._surfaceNormal.z * fVar28 + fVar27 * (float)local_228._0_4_;
														fVar28 = (float)uVar3 * fVar28 + fVar27 * fVar31;
														if (0.0001 < fVar28 * fVar28 + fVar25 * fVar25 + local_138.z * local_138.z) {
															local_248.y = (float)local_1e8._4_4_;
															local_248.x = (float)local_1f8._4_4_;
															local_248.z = (float)local_1f8._0_4_;
															local_138.y = fVar25;
															local_138.x = fVar28;
															local_188 = uVar11;
															UVar32 = Quaternion.Internal_FromToRotation(ref local_248, ref local_138);
															pUVar15 = pUVar14.transform;
															__this_01 = pUVar14.transform;
															if (__this_01 == null) break;
															UVar33 = __this_01.rotation;
															fVar27 = UVar33.z;
															fVar31 = UVar33.w;
															fVar28 = UVar33.x;
															fVar20 = UVar33.y;
															if (pUVar15 == null) break;
															local_288 = UVar32.z;
															fStack_284 = UVar32.w;
															local_268 = UVar32.x;
															fStack_264 = UVar32.y;
															value.y =(fStack_284 * fVar20 + fVar31 * fStack_264 + local_288 * fVar28) - fVar27 * local_268;
															value.x =(fStack_284 * fVar28 + fVar31 * local_268 + fStack_264 * fVar27) - fVar20 * local_288;
															value.w =((fStack_284 * fVar31 - local_268 * fVar28) - fStack_264 * fVar20) - local_288 * fVar27;
															value.z =(local_288 * fVar31 + fStack_284 * fVar27 + fVar20 * local_268) - fVar28 * fStack_264;
															pUVar15.rotation = value;
															pUVar15 = pUVar14.transform;
															if (pUVar15 == null) break;
															UVar32 = pUVar15.rotation;
															point_01.z = (float)local_1b8;
															point_01.x = (float)local_1a8._0_4_;
															point_01.y = (float)local_1a8._4_4_;
															UVar34 = (UVar32 * point_01);
															MapEditorBrush.GetBoundsEdgeCenters((GameObject)pUVar14, UVar34, ref local_238, ref local_1d8);
															pUVar15 = pUVar14.transform;
															if (pUVar15 == null) break;
															UVar34 = pUVar15.position;
															value_00.x = UVar34.x + (fVar21 - local_238.x);
															value_00.y = UVar34.y + (fVar19 - local_238.y);
															value_00.z = UVar34.z + (local_1fc - local_238.z);
															pUVar15.position = value_00;
															uVar18 = local_190;
															uVar11 = local_188;
															fVar20 = local_138.z;
														}
													}
												}
											}
										}
										local_138.z = fVar20;
										local_188 = uVar11;
										pUVar15 = pUVar14.transform;
										if (pUVar15 == null) break;
										UVar32 = pUVar15.rotation;
										point.z = (float)local_1b8;
										point.x = (float)local_1a8._0_4_;
										point.y = (float)local_1a8._4_4_;
										UVar34 = (UVar32 * point);
										local_288 = UVar34.z;
										fStack_270 = (float)extraout_XMM0_Dc_04;
										local_278 = UVar34._0_8_;
										fStack_26c = (float)extraout_XMM0_Dd_04;
										MapEditorBrush.GetBoundsEdgeCenters((GameObject)pUVar14, UVar34, ref local_238, ref local_1c8);
										getIndex = local_150;
									}
									iVar17 = iVar17 + 1;
									if ((int)uVar18 == iVar17) {
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x5B89CB0", Offset = "0x5B88CB0", VA = "0x5B89CB0")]
	private static void GetBoundsEdgeCenters(GameObject go, Vector3 axis, out Vector3 minimumCenter, out Vector3 maximumCenter)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetBoundsEdgeCenters): 73 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		uint uVar4;
		Object __this;
		ulong uVar6;
		bool bVar7;
		Object[] pSVar8;
		Object x;
		Transform pUVar9;
		Object pUVar10;
		Mesh __this_00;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		ulong uVar14;
		float fVar15;
		float fVar16;
		ulong in_XMM0_Qb;
		byte[] auVar17 = new byte[16];
		ulong extraout_XMM0_Qb;
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		uint uVar20;
		float fVar21;
		uint uVar22;
		float fVar23;
		uint uVar24;
		uint uVar25;
		uint uVar26;
		float fVar27;
		byte[] auVar28 = new byte[16];
		byte[] auVar29 = new byte[16];
		Vector3 UVar30;
		Vector3 UVar31;
		Vector3 UVar32;
		float local_118;
		float fStack_114;
		float local_100;
		float local_f8;
		float fStack_f4;
		Bounds local_e0;
		ulong local_c8;
		float local_bc;
		ulong local_b8;
		ulong uStack_b0;
		ulong local_a8;
		ulong uStack_a0;
		Vector3 local_98;
		Vector3 local_90;
		ulong local_88;
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		GameObject local_50;
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		fVar27 = axis.z;
		local_118 = axis.x;
		fStack_114 = axis.y;
		if ((go == null) ||(pSVar8 = go.GetComponentsInChildren<Renderer>(), pSVar8 == null)) goto label_05c8a47a;
		if (pSVar8.Length == 0) {
			pUVar9 = go.transform;
			if (pUVar9 == null) goto label_05c8a47a;
			UVar30 = (Vector3)pUVar9.position;
			minimumCenter.fields = UVar30;
			pUVar9 = go.transform;
			if (pUVar9 == null) goto label_05c8a47a;
			UVar31 = pUVar9.position;
			fVar21 = UVar31.z;
			fVar27 = UVar31.x;
			fVar15 = UVar31.y;
			goto label_05c8a40a;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		fVar15 = fVar27 * fVar27 + fStack_114 * fStack_114 + local_118 * local_118;
		local_100 = 0.0;
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
		}
		else {
			fVar15 = SQRT(fVar15);
		}
		local_78 = ZEXT816(0);
		if (1e-05 < fVar15) {
			local_100 = fVar27 / fVar15;
			auVar17._4_4_ = fVar15;
			auVar17._0_4_ = fVar15;
			auVar17._8_4_ = fVar15;
			auVar17._12_4_ = fVar15;
			auVar29._8_8_ = in_XMM0_Qb;
			auVar29._0_8_ = axis._0_8_;
			local_78 = divps(auVar29, auVar17);
		}
		if (Il2CppMethodInitialized_0753e4b6 == false) {
			Il2CppMethodInitialized_0753e4b6 = true;
			uVar11 = (uint)pSVar8.Length;
			if (0 < (int)uVar11) goto label_05c89e67;
	label_05c8a342: ;
			local_b8 = 0xff7fffff;
			uStack_b0 = 0;
			local_88 = 0x7f7fffff;
	label_05c8a376: ;
			pUVar9 = go.transform;
			if (pUVar9 == null) {
	label_05c8a47a: ;
				throw new NullReferenceException();
			}
			UVar32 = pUVar9.position;
		}
		else {
			uVar11 = (uint)pSVar8.Length;
			if ((int)uVar11 < 1) goto label_05c8a342;
	label_05c89e67: ;
			fVar27 = (Vector3.zeroVector).z;
			uVar1 = (Vector3.zeroVector).x;
			uVar2 = (Vector3.zeroVector).y;
			auVar28._4_4_ = (float)uVar2;
			auVar28._0_4_ = (float)uVar1;
			auVar28._8_8_ = 0;
			uVar14 = 0;
			fVar15 = -3.4028235e+38;
			local_88 = 0x7f7fffff;
			uVar12 = 0;
			uVar24 = 0;
			uVar25 = 0;
			uVar26 = 0;
			local_98 = minimumCenter;
			local_90 = maximumCenter;
			local_50 = go;
			do {
				if (uVar11 <= uVar12) {
					throw new IndexOutOfRangeException();
				}
				__this = (Object)pSVar8[(int)uVar12];
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar3 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
				local_b8 = CONCAT44(uVar24, fVar15);
				uStack_b0 = CONCAT44(uVar26, uVar25);
				if ((__this.klass._2).typeHierarchyDepth < bVar3) {
					pUVar10 = null;
				}
				else {
					pUVar10 = null;
					if ((__this.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(SkinnedMeshRenderer)) {
						pUVar10 = __this;
					}
				}
				local_c8 = uVar14;
				_local_68 = auVar28;
				x = (Object)__this.GetComponent<MeshFilter>();
				bVar7 = (pUVar10 != null);
				if (bVar7) {
					if (pUVar10 == null) goto label_05c8a47a;
					local_e0 = pUVar10.localBounds;
					fVar16 = local_e0.m_Extents.z;
					fVar21 = local_e0.m_Center.z;
					local_a8._0_4_ = local_e0.m_Center.x;
					local_a8._4_4_ = local_e0.m_Center.y;
					uStack_a0 = 0;
					local_f8 = local_e0.m_Extents.x;
					fStack_f4 = local_e0.m_Extents.y;
					pUVar9 = pUVar10.transform;
				}
				else {
					bVar7 = (x != null);
					if (bVar7) {
						if (x == null) goto label_05c8a47a;
						pUVar10 = (Object)x.sharedMesh;
						bVar7 = (pUVar10 != null);
						if (bVar7) {
							__this_00 = x.sharedMesh;
							if (__this_00 != null) {
								local_e0 = __this_00.bounds;
								fVar16 = local_e0.m_Extents.z;
								fVar21 = local_e0.m_Center.z;
								local_a8._0_4_ = local_e0.m_Center.x;
								local_a8._4_4_ = local_e0.m_Center.y;
								uStack_a0 = 0;
								local_f8 = local_e0.m_Extents.x;
								fStack_f4 = local_e0.m_Extents.y;
								pUVar9 = x.transform;
								goto label_05c8a129;
							}
							goto label_05c8a47a;
						}
					}
					local_e0 = __this.bounds;
					uStack_a0._0_4_ = 0.0;
					uStack_a0._4_4_ = 0.0;
					local_f8 = local_e0.m_Extents.x;
					fStack_f4 = local_e0.m_Extents.y;
					pUVar9 = null;
					fVar16 = local_e0.m_Extents.z;
					fVar21 = local_e0.m_Center.z;
					local_a8._0_4_ = local_e0.m_Center.x;
					local_a8._4_4_ = local_e0.m_Center.y;
				}
	label_05c8a129: ;
				local_48 = (float)local_a8 - local_f8;
				fStack_44 = local_a8._4_4_ - fStack_f4;
				fStack_40 = (float)uStack_a0 - 0.0;
				fStack_3c = uStack_a0._4_4_ - 0.0;
				local_bc = fVar21 - fVar16;
				local_a8 = CONCAT44(local_a8._4_4_ + fStack_f4, (float)local_a8 + local_f8);
				uStack_a0 = CONCAT44(uStack_a0._4_4_ + 0.0, (float)uStack_a0 + 0.0);
				uVar13 = (int)local_c8 + 8;
				uVar14 = (ulong)uVar13;
				uVar11 = 0;
				fVar15 = (float)local_b8;
				auVar28 = _local_68;
				do {
					local_118 = local_bc;
					if ((uVar11 & 4) != 0) {
						local_118 = fVar21 + fVar16;
					}
					local_b8 = CONCAT44(local_b8._4_4_, fVar15);
					_local_68 = auVar28;
					fVar23 = fStack_3c;
					fVar15 = fStack_40;
					uVar20 = -(uint)((uVar11 & 1) == 0);
					uVar22 = -(uint)((uVar11 & 2) == 0);
					uVar20 = ~uVar20 & (uint)(float)local_a8 | (uint)local_48 & uVar20;
					uVar22 = ~uVar22 & (uint)local_a8._4_4_ | (uint)fStack_44 & uVar22;
					bVar7 = ((Object)pUVar9 != null);
					if (bVar7) {
						UVar31.y = (float)uVar22;
						UVar31.x = (float)uVar20;
						if (pUVar9 == null) {
							throw new NullReferenceException();
						}
						UVar31.z = local_118;
						UVar31 = pUVar9.TransformPoint(UVar31);
						local_118 = UVar31.z;
						auVar18._0_8_ = UVar31._0_8_;
						auVar18._8_8_ = extraout_XMM0_Qb;
					}
					else {
						auVar18._4_4_ = uVar22;
						auVar18._0_4_ = uVar20;
						auVar18._8_4_ = fVar15;
						auVar18._12_4_ = fVar23;
					}
					uVar6 = local_78._0_8_;
					fVar23 = local_100 * local_118 +(float)local_78._4_4_ * auVar18._4_4_ + (float)local_78._0_4_ * auVar18._0_4_;
					if (fVar23 <= (float)local_88) {
						local_88._0_4_ = fVar23;
					}
					fVar15 = (float)local_b8;
					if ((float)local_b8 <= fVar23) {
						fVar15 = fVar23;
					}
					auVar28._0_4_ = (float)local_68._0_4_ + auVar18._0_4_;
					auVar28._4_4_ = (float)local_68._4_4_ + auVar18._4_4_;
					auVar28._8_4_ = fStack_60 + auVar18._8_4_;
					auVar28._12_4_ = fStack_5c + auVar18._12_4_;
					fVar27 = fVar27 + local_118;
					uVar11 = uVar11 + 1;
				} while (uVar11 != 8);
				uVar12 = uVar12 + 1;
				uVar11 = (uint)pSVar8.Length;
				uVar24 = local_b8._4_4_;
				uVar25 = (undefined4)uStack_b0;
				uVar26 = uStack_b0._4_4_;
			} while ((int)uVar12 < (int)uVar11);
			minimumCenter = local_98;
			maximumCenter = local_90;
			if ((int)uVar13 < 1) {
				local_b8 = CONCAT44(local_b8._4_4_, fVar15);
				go = local_50;
				goto label_05c8a376;
			}
			auVar19._0_4_ = (float)(int)uVar13;
			auVar19._4_4_ = auVar19._0_4_;
			auVar19._8_4_ = auVar19._0_4_;
			auVar19._12_4_ = auVar19._0_4_;
			auVar29 = divps(auVar28, auVar19);
			UVar32.z = fVar27 / auVar19._0_4_;
			UVar32.x = (float)auVar29._0_4_;
			UVar32.y = (float)auVar29._4_4_;
			local_b8._0_4_ = fVar15;
			local_78._0_8_ = uVar6;
		}
		fVar21 = UVar32.z;
		fVar27 = UVar32.x;
		fVar15 = UVar32.y;
		fVar16 = local_100 * fVar21 + (float)local_78._4_4_ * fVar15 + (float)local_78._0_4_ * fVar27;
		local_88._0_4_ = (float)local_88 - fVar16;
		minimumCenter.x = (float)local_88 * (float)local_78._0_4_ + fVar27;
		minimumCenter.y = (float)local_88 * (float)local_78._4_4_ + fVar15;
		minimumCenter.z = local_100 * (float)local_88 + fVar21;
		local_b8._0_4_ = (float)local_b8 - fVar16;
		fVar27 = (float)local_b8 * (float)local_78._0_4_ + fVar27;
		fVar15 = (float)local_b8 * (float)local_78._4_4_ + fVar15;
		fVar21 = local_100 * (float)local_b8 + fVar21;
	label_05c8a40a: ;
		maximumCenter.x = fVar27;
		maximumCenter.y = fVar15;
		maximumCenter.z = fVar21;
		return;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x5B84170", Offset = "0x5B83170", VA = "0x5B84170")]
	public Vector3 GetAverageGhostSize()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetAverageGhostSize): 70 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		List<GameObject> __this_00;
		UnityEngine_Vector3_StaticFields pUVar5;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[16];
		int iVar8;
		object x;
		bool bVar9;
		Object[] pSVar10;
		uint uVar11;
		long lVar12;
		float fVar13;
		Object pUVar14;
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		float fVar18;
		byte[] auVar17 = new byte[16];
		float fVar19;
		byte[] auVar20 = new byte[16];
		float fVar21;
		byte[] auVar22 = new byte[16];
		float fVar23;
		float fVar26;
		float fVar27;
		byte[] auVar24 = new byte[16];
		byte[] auVar25 = new byte[16];
		float fVar28;
		Vector3 UVar29;
		float local_c4;
		float local_c0;
		float local_bc;
		float local_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		Object local_a8;
		ulong local_a0;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		System_Collections_Generic_List_Enumerator_object__o local_60;
		byte[] local_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		ulong local_48;
		ulong uStack_40;

		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		__this_00 = this._ghostObjects;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar5 = typeof(Vector3).static_fields;
		local_c4 = (pUVar5.zeroVector).z;
		uVar1 = (pUVar5.zeroVector).x;
		uVar3 = (pUVar5.zeroVector).y;
		fStack_70 = 0.0;
		fStack_6c = 0.0;
		local_78 = (float)uVar1;
		fStack_74 = (float)uVar3;
		local_b8 = __this_00.GetEnumerator();
		local_98._current = (object)local_a8;
		local_a0 = 0;
		local_60 = &local_98;
		while(true) {
			do {
				do {
					bVar9 = local_98.MoveNext();
					x = local_98._current;
					if (!bVar9) {
						local_98.Dispose();
						if ((int)local_a0 == 0) {
							pUVar5 = typeof(Vector3).static_fields;
							uVar2 = (pUVar5.oneVector).x;
							uVar4 = (pUVar5.oneVector).y;
							local_c4 = (pUVar5.oneVector).z;
						}
						else {
							fVar13 = (float)(int)local_a0;
							local_c4 = local_c4 / fVar13;
							auVar25._4_4_ = fStack_74;
							auVar25._0_4_ = local_78;
							auVar25._8_4_ = fStack_70;
							auVar25._12_4_ = fStack_6c;
							auVar16._4_4_ = fVar13;
							auVar16._0_4_ = fVar13;
							auVar16._8_4_ = fVar13;
							auVar16._12_4_ = fVar13;
							auVar16 = divps(auVar25, auVar16);
							uVar2 = auVar16._0_4_;
							uVar4 = auVar16._4_4_;
						}
						UVar29.y = (float)uVar4;
						UVar29.x = (float)uVar2;
						UVar29.z = local_c4;
						return (Vector3)UVar29;
					}
					bVar9 = ((Object)x == null);
				} while (bVar9);
				if ((Object)x == null) {
					throw new NullReferenceException();
				}
				pSVar10 = x.GetComponentsInChildren<Renderer>();
				if (pSVar10 == null) {
					throw new NullReferenceException();
				}
			} while (pSVar10.Length == 0);
			if ((int)pSVar10.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if ((Renderer)pSVar10[0] == null) break;
			local_b8 = (pSVar10[0]).bounds;
			uVar11 = (uint)pSVar10.Length;
			local_c0 = fStack_ac;
			pUVar14 = local_a8;
			if (1 < (int)uVar11) {
				local_58 = (byte[])local_a8;
				local_bc = local_b8;
				local_48 = CONCAT44(fStack_b0, fStack_b4);
				uStack_40 = 0;
				lVar12 = 5;
				do {
					iVar8 = (int)lVar12;
					if (uVar11 <= iVar8 - 4U) {
						throw new IndexOutOfRangeException();
					}
					if ((Renderer)pSVar10[lVar12 + -4] == null) {
						throw new NullReferenceException();
					}
					local_b8 = (pSVar10[lVar12 + -4]).bounds;
					fVar21 = local_b8 - fStack_ac;
					fVar19 = local_b8 + fStack_ac;
					auVar15._0_4_ = (float)local_48 - (float)local_58._0_4_;
					auVar15._4_4_ = local_48._4_4_ - (float)local_58._4_4_;
					auVar15._8_4_ = (float)uStack_40 - fStack_50;
					auVar15._12_4_ = uStack_40._4_4_ - fStack_4c;
					fVar13 = local_bc - local_c0;
					if (fVar21 <= local_bc - local_c0) {
						fVar13 = fVar21;
					}
					auVar24._0_4_ = (float)local_48 + (float)local_58._0_4_;
					auVar24._4_4_ = local_48._4_4_ + (float)local_58._4_4_;
					auVar24._8_4_ = (float)uStack_40 + fStack_50;
					auVar24._12_4_ = uStack_40._4_4_ + fStack_4c;
					fVar18 = local_c0 + local_bc;
					if (local_c0 + local_bc <= fVar21) {
						fVar18 = fVar21;
					}
					fVar21 = (fVar18 - fVar13) * 0.5;
					local_bc = (fVar13 + fVar21) - fVar21;
					if (fVar19 <= local_bc) {
						local_bc = fVar19;
					}
					fVar21 = fVar13 + fVar21 + fVar21;
					if (fVar21 <= fVar19) {
						fVar21 = fVar19;
					}
					local_c0 = (fVar21 - local_bc) * 0.5;
					fVar19 = fStack_b4 - SUB84(local_a8, 0);
					fVar13 = (float)((ulong)local_a8 >> 0x20);
					fVar21 = fStack_b0 - fVar13;
					auVar20._0_4_ = fStack_b4 + SUB84(local_a8, 0);
					auVar20._4_4_ = fStack_b0 + fVar13;
					auVar20._8_8_ = 0;
					auVar6._4_4_ = fVar21;
					auVar6._0_4_ = fVar19;
					auVar6._8_8_ = 0;
					auVar16 = minps(auVar15, auVar6);
					auVar7._4_4_ = fVar21;
					auVar7._0_4_ = fVar19;
					auVar7._8_8_ = 0;
					auVar25 = maxps(auVar24, auVar7);
					fVar23 = (auVar25._0_4_ - auVar16._0_4_) * 0.5;
					fVar26 = (auVar25._4_4_ - auVar16._4_4_) * 0.5;
					fVar27 = (auVar25._8_4_ - auVar16._8_4_) * 0.0;
					fVar28 = (auVar25._12_4_ - auVar16._12_4_) * 0.0;
					fVar13 = auVar16._0_4_ + fVar23;
					fVar19 = auVar16._4_4_ + fVar26;
					fVar21 = auVar16._8_4_ + fVar27;
					fVar18 = auVar16._12_4_ + fVar28;
					auVar22._0_4_ = fVar13 - fVar23;
					auVar22._4_4_ = fVar19 - fVar26;
					auVar22._8_4_ = fVar21 - fVar27;
					auVar22._12_4_ = fVar18 - fVar28;
					auVar25 = minps(auVar22, auVar20);
					auVar17._0_4_ = fVar13 + fVar23;
					auVar17._4_4_ = fVar19 + fVar26;
					auVar17._8_4_ = fVar21 + fVar27;
					auVar17._12_4_ = fVar18 + fVar28;
					auVar16 = maxps(auVar17, auVar20);
					fVar13 = (auVar16._0_4_ - auVar25._0_4_) * 0.5;
					fVar19 = (auVar16._4_4_ - auVar25._4_4_) * 0.5;
					local_58 = (byte[])CONCAT44(fVar19, fVar13);
					fStack_50 = (auVar16._8_4_ - auVar25._8_4_) * 0.0;
					fStack_4c = (auVar16._12_4_ - auVar25._12_4_) * 0.0;
					local_bc = local_bc + local_c0;
					uVar11 = (uint)pSVar10.Length;
					lVar12 = lVar12 + 1;
					local_48 = CONCAT44(auVar25._4_4_ + fVar19, auVar25._0_4_ + fVar13);
					uStack_40 = CONCAT44(auVar25._12_4_ + fStack_4c, auVar25._8_4_ + fStack_50);
					pUVar14 = (Object)local_58;
				} while (iVar8 + -3 < (int)uVar11);
			}
			fVar13 = (float)((ulong)pUVar14 >> 0x20);
			local_78 = local_78 + local_c0 + local_c0;
			fStack_74 = fStack_74 + SUB84(pUVar14, 0) + SUB84(pUVar14, 0);
			fStack_70 = fStack_70 + 0.0;
			fStack_6c = fStack_6c + fVar13 + fVar13;
			local_c4 = local_c4 + fVar13 + fVar13;
			local_a0 = (ulong)((int)local_a0 + 1);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x5B84150", Offset = "0x5B83150", VA = "0x5B84150")]
	private Vector3 ApplyCurve(Vector3 local)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ApplyCurve): clean
		Vector3 UVar1;
		Quaternion UStack_10;

		UVar1 = (Vector3)this.ApplyCurve(local, ref UStack_10);
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x5B86B80", Offset = "0x5B85B80", VA = "0x5B86B80")]
	private Vector3 ApplyCurve(Vector3 local, out Quaternion tangent)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ApplyCurve): 67 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		float fVar5;
		ulong uVar4;
		uint uVar6;
		int iVar7;
		byte[] auVar9 = new byte[16];
		Vector3 pUVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		float pfVar12;
		Vector3 pUVar13;
		int iVar14;
		int iVar15;
		int iVar16;
		int iVar17;
		float extraout_XMM0_Db;
		float in_XMM0_Dc;
		float fVar18;
		float in_XMM0_Dd;
		float fVar19;
		float fVar20;
		float fVar21;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		float fVar22;
		float fVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		byte[] auVar36 = new byte[16];
		float fVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		float fVar41;
		float fVar42;
		float fVar43;
		float fVar44;
		float fVar45;
		float fVar46;
		Quaternion UVar47;
		Vector3 UVar48;
		UnityEngine_Vector3_StaticFields local_c8;
		float fStack_50;
		float fStack_4c;
		ulong local_48;
		byte[] local_38 = new byte[16];

		fVar21 = local.z;
		fVar46 = local.x;
		fVar45 = local.y;
		fVar30 = (Quaternion.identityQuaternion).y;
		fVar31 = (Quaternion.identityQuaternion).z;
		uVar4._4_4_ = (Quaternion.identityQuaternion).w;
		tangent.x = (Quaternion.identityQuaternion).x;
		tangent.y = fVar30;
		tangent.z = fVar31;
		tangent.w = uVar4._4_4_;
		iVar16 = this.CurveAxis;
		if ((iVar16 == 0) || (ABS(this.CurveAmount) < 0.0001)) goto label_05c87342;
		iVar17 = this.GridX;
		iVar14 = this.GridY;
		if (iVar17 < 2) {
			iVar17 = 1;
		}
		if (iVar14 < 2) {
			iVar14 = 1;
		}
		iVar7 = this.GridZ;
		iVar15 = 1;
		if (1 < iVar7) {
			iVar15 = iVar7;
		}
		if (iVar16 == 1) {
			pUVar13 = &Vector3.rightVector;
			pUVar10 = &Vector3.rightVector;
			iVar16 = this.CurveAxis;
	joined_r0x05c86cf7: ;
			pfVar12 = &pUVar10.z;
			if (iVar16 != 1) goto label_05c86cfd;
	label_05c86d88: ;
			fVar31 = (float)(iVar14 + -1) * this.SpacingY;
			fVar30 = 0.0;
	label_05c86d98: ;
			uVar4._4_4_ = (float)(iVar15 + -1) * this.SpacingZ;
		}
		else {
			if (iVar16 != 2) {
				pUVar13 = &Vector3.forwardVector;
				pUVar10 = &Vector3.forwardVector;
				iVar16 = this.CurveAxis;
				goto joined_r0x05c86cf7;
			}
			pUVar13 = &Vector3.upVector;
			pfVar12 = &(Vector3.upVector).z;
			iVar16 = this.CurveAxis;
			if (iVar16 == 1) goto label_05c86d88;
	label_05c86cfd: ;
			fVar30 = (float)(iVar17 + -1) * this.SpacingX;
			fVar31 = 0.0;
			if (iVar16 == 2) goto label_05c86d98;
			fVar31 = (float)(iVar14 + -1) * this.SpacingY;
			uVar4._4_4_ = 0.0;
			if (iVar16 != 3) goto label_05c86d98;
		}
		fVar1 = *pfVar12;
		fVar2 = pUVar13.x;
		fVar5 = pUVar13.y;
		fVar18 = 0.0;
		fVar19 = 0.0;
		local_c8.oneVector.y = fVar2;
		local_c8.oneVector.z = fVar5;
		local_c8.upVector.x = 0.0;
		local_c8.upVector.y = 0.0;
		if ((fVar30 < fVar31) || (fVar30 < uVar4._4_4_)) {
			if (fVar31 <= uVar4._4_4_) {
				if (Il2CppMethodInitialized_0753e72e == false) {
					Il2CppMethodInitialized_0753e72e = true;
					fVar2 = local_c8.oneVector.y;
					fVar5 = local_c8.oneVector.z;
					fVar18 = local_c8.upVector.x;
					fVar19 = local_c8.upVector.y;
				}
				pUVar13 = &Vector3.forwardVector;
				pUVar10 = &Vector3.forwardVector;
				local_c8.upVector.z = fVar21;
				fVar30 = uVar4._4_4_;
				local_c8.downVector.x = in_XMM1_Db;
				local_c8.downVector.y = in_XMM1_Dc;
				local_c8.downVector.z = in_XMM1_Dd;
				fVar31 = local_c8.negativeInfinityVector.y;
			}
			else {
				if (Il2CppMethodInitialized_0753e72c == false) {
					Il2CppMethodInitialized_0753e72c = true;
					fVar2 = local_c8.oneVector.y;
					fVar5 = local_c8.oneVector.z;
					fVar18 = local_c8.upVector.x;
					fVar19 = local_c8.upVector.y;
				}
				pUVar13 = &Vector3.upVector;
				pUVar10 = &Vector3.upVector;
				local_c8.upVector.z = fVar45;
				local_c8.downVector.x = fVar45;
				local_c8.downVector.y = fVar45;
				local_c8.downVector.z = fVar45;
				fVar30 = fVar31;
				fVar31 = local_c8.negativeInfinityVector.y;
			}
		}
		else {
			if (Il2CppMethodInitialized_07544d56 == false) {
				Il2CppMethodInitialized_07544d56 = true;
				fVar2 = local_c8.oneVector.y;
				fVar5 = local_c8.oneVector.z;
				fVar18 = local_c8.upVector.x;
				fVar19 = local_c8.upVector.y;
			}
			pUVar13 = &Vector3.rightVector;
			pUVar10 = &Vector3.rightVector;
			local_c8.upVector.z = fVar46;
			local_c8.downVector.x = fVar45;
			local_c8.downVector.y = in_XMM0_Dc;
			local_c8.downVector.z = in_XMM0_Dd;
			fVar31 = local_c8.negativeInfinityVector.y;
		}
		if (fVar30 < 0.0001) goto label_05c87342;
		local_c8.negativeInfinityVector.y = pUVar10.z;
		uVar4._0_4_ = pUVar13.x;
		uVar4._4_4_ = pUVar13.y;
		local_38 = ZEXT416((uint)local_c8.negativeInfinityVector.y);
		local_48 = uVar4;
		fVar20 = (float)(undefined4)uVar4;
		fVar22 = local_c8.negativeInfinityVector.y;
		fVar23 = fVar1;
		fVar24 = 0.0;
		fVar25 = 0.0;
		fVar26 = fVar5;
		fVar27 = fVar5;
		fVar28 = fVar5;
		fVar29 = fVar5;
		fVar32 = uVar4._4_4_;
		fVar33 = fVar2;
		fVar34 = 0.0;
		fVar35 = 0.0;
		fVar37 = fVar1;
		fVar39 = local_c8.negativeInfinityVector.y;
		fVar41 = 0.0;
		fVar43 = 0.0;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_c8.leftVector.y = local_c8.negativeInfinityVector.y;
			local_c8.leftVector.x = fVar1;
			local_c8._56_8_ = 0;
			fStack_50 = 0.0;
			fStack_4c = 0.0;
			local_c8.positiveInfinityVector.y = fVar2;
			local_c8.positiveInfinityVector.x = uVar4._4_4_;
			local_c8.positiveInfinityVector.z = 0.0;
			local_c8.negativeInfinityVector.x = 0.0;
			local_c8.rightVector.y = fVar5;
			local_c8.rightVector.z = fVar5;
			local_c8.forwardVector.x = fVar5;
			local_c8.forwardVector.y = fVar5;
			local_c8.negativeInfinityVector.z = fVar1;
			Il2CppMethodInitialized_0753e72d = true;
			fVar2 = local_c8.oneVector.y;
			fVar20 = (float)local_48;
			fVar22 = local_c8.negativeInfinityVector.y;
			fVar23 = local_c8.negativeInfinityVector.z;
			fVar24 = fStack_50;
			fVar25 = fStack_4c;
			fVar26 = local_c8.rightVector.y;
			fVar27 = local_c8.rightVector.z;
			fVar28 = local_c8.forwardVector.x;
			fVar29 = local_c8.forwardVector.y;
			fVar32 = local_c8.positiveInfinityVector.x;
			fVar33 = local_c8.positiveInfinityVector.y;
			fVar34 = local_c8.positiveInfinityVector.z;
			fVar35 = local_c8.negativeInfinityVector.x;
			fVar37 = local_c8.leftVector.x;
			fVar39 = local_c8.leftVector.y;
			fVar41 = local_c8.leftVector.z;
			fVar43 = local_c8.rightVector.x;
			fVar31 = local_c8.negativeInfinityVector.y;
		}
		local_c8.negativeInfinityVector.y = fVar31;
		local_c8.zeroVector.x = 0.0;
		local_c8.zeroVector.y = 0.0;
		fVar31 = fVar26 * fVar20;
		fVar38 = fVar37 * fVar32;
		fVar40 = fVar39 * fVar33;
		fVar42 = fVar41 * fVar34;
		fVar44 = fVar43 * fVar35;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_c8.leftVector.y = fVar39 * fVar33;
			local_c8.leftVector.x = fVar37 * fVar32;
			local_c8.leftVector.z = fVar41 * fVar34;
			local_c8.rightVector.x = fVar43 * fVar35;
			local_c8.rightVector.y = fVar26 * fVar20;
			local_c8.rightVector.z = fVar27;
			local_c8.forwardVector.x = fVar28;
			local_c8.forwardVector.y = fVar29;
			Il2CppMethodInitialized_0753e729 = true;
			fVar31 = local_c8.rightVector.y;
			fVar38 = local_c8.leftVector.x;
			fVar40 = local_c8.leftVector.y;
			fVar42 = local_c8.leftVector.z;
			fVar44 = local_c8.rightVector.x;
		}
		auVar36._0_4_ = fVar5 * fVar22 - fVar38;
		auVar36._4_4_ = (float)(undefined4)uVar4 * fVar23 - fVar40;
		auVar36._8_4_ = fVar18 * fVar24 - fVar42;
		auVar36._12_4_ = fVar19 * fVar25 - fVar44;
		fVar31 = uVar4._4_4_ * fVar2 - fVar31;
		fVar2 = fVar31 * fVar31 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
		if (fVar2 < 0.0) {
			fVar2 = sqrtf(fVar2);
			fVar5 = extraout_XMM0_Db;
			if (fVar2 <= 1e-05) goto label_05c870f0;
	label_05c87134: ;
			fVar31 = fVar31 / fVar2;
			auVar9._4_4_ = fVar2;
			auVar9._0_4_ = fVar2;
			auVar9._8_4_ = fVar5;
			auVar9._12_4_ = fVar5;
			auVar36 = divps(auVar36, auVar9);
			local_c8.zeroVector.x = auVar36._0_4_;
			local_c8.zeroVector.y = auVar36._4_4_;
			pUVar11 = &local_c8;
		}
		else {
			fVar2 = SQRT(fVar2);
			fVar5 = uVar4._4_4_;
			if (1e-05 < fVar2) goto label_05c87134;
	label_05c870f0: ;
			pUVar11 = typeof(Vector3).static_fields;
			fVar31 = (pUVar11.zeroVector).z;
			uVar4._4_4_ = 0.0;
		}
		uVar3 = (pUVar11.zeroVector).x;
		uVar6 = (pUVar11.zeroVector).y;
		fVar30 = fVar30 / (this.CurveAmount * 0.017453292);
		local_c8.upVector.z = local_c8.upVector.z / fVar30;
		local_c8.rightVector.y = fVar31 * fVar21 + (float)uVar6 * fVar45 + (float)uVar3 * fVar46;
		local_c8.leftVector.y = (float)uVar6;
		local_c8.leftVector.x = (float)uVar3 * local_c8.rightVector.y;
		local_c8.leftVector.z = 0.0;
		local_c8.rightVector.x = 0.0;
		local_c8.positiveInfinityVector.x = fVar31 * local_c8.rightVector.y;
		local_c8.rightVector.z = uVar4._4_4_;
		local_c8.forwardVector.x = uVar4._4_4_;
		local_c8.forwardVector.y = uVar4._4_4_;
		uVar4._4_4_ = sinf(local_c8.upVector.z);
		local_c8.negativeInfinityVector.y = uVar4._4_4_ * fVar30;
		local_c8.forwardVector.z = (float)local_48 * local_c8.negativeInfinityVector.y;
		local_38._0_4_ = (float)local_38._0_4_ * local_c8.negativeInfinityVector.y;
		uVar4._4_4_ = cosf(local_c8.upVector.z);
		fVar30 = (1.0 - uVar4._4_4_) * fVar30;
		local_c8.forwardVector.z = (float)uVar3 * fVar30 + local_c8.forwardVector.z;
		local_c8.backVector.y = 0.0;
		local_c8.backVector.z = 0.0;
		fVar31 = fVar31 * fVar30 + (float)local_38._0_4_ + local_c8.positiveInfinityVector.x;
		local_c8.zeroVector.x = local_c8.oneVector.y;
		local_c8.zeroVector.y = local_c8.oneVector.z;
		local_c8.zeroVector.z = fVar1;
		local_c8.backVector.x = (float)uVar6;
		UVar47 = (Quaternion)Quaternion.Internal_AngleAxis(local_c8.upVector.z * 57.29578, ref local_c8.zeroVector);
		tangent.fields = UVar47;
		fVar45 = local_c8.oneVector.z * fVar45 + local_c8.oneVector.y * fVar46 + fVar21 * fVar1;
		fVar21 = fVar1 * fVar45 + fVar31;
		fVar46 = local_c8.forwardVector.z + local_c8.leftVector.x + fVar45 * local_c8.oneVector.y;
		fVar45 = fVar30 * (float)uVar6 + local_c8.negativeInfinityVector.y * local_48._4_4_ + local_c8.rightVector.y * (float)uVar6 + fVar45 * local_c8.oneVector.z;
	label_05c87342: ;
		UVar48.y = fVar45;
		UVar48.x = fVar46;
		UVar48.z = fVar21;
		return (Vector3)UVar48;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x5B87360", Offset = "0x5B86360", VA = "0x5B87360")]
	private float GetSupportOffset(GameObject go, Vector3 normal)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$GetSupportOffset): 107 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Object __this_00;
		ulong uVar3;
		ulong uVar4;
		bool bVar5;
		Object[] pSVar6;
		Object x;
		Transform pUVar7;
		Transform pUVar8;
		il2cpp_array_size_t iVar9;
		Object pUVar10;
		Mesh __this_01;
		long lVar11;
		float fVar12;
		uint uVar13;
		uint in_XMM0_Dc;
		uint uVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		uint extraout_XMM0_Dc_06;
		uint extraout_XMM0_Dc_07;
		uint extraout_XMM0_Dc_08;
		uint extraout_XMM0_Dc_09;
		uint extraout_XMM0_Dc_10;
		uint extraout_XMM0_Dc_11;
		uint extraout_XMM0_Dc_12;
		uint in_XMM0_Dd;
		uint uVar15;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		uint extraout_XMM0_Dd_06;
		uint extraout_XMM0_Dd_07;
		uint extraout_XMM0_Dd_08;
		uint extraout_XMM0_Dd_09;
		uint extraout_XMM0_Dd_10;
		uint extraout_XMM0_Dd_11;
		uint extraout_XMM0_Dd_12;
		float fVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 position;
		Vector3 UVar19;
		Vector3 position_00;
		Vector3 position_01;
		Vector3 UVar20;
		Vector3 position_02;
		Vector3 UVar21;
		ulong local_228;
		float local_218;
		float fStack_214;
		ulong local_208;
		float local_1d8;
		float fStack_1d4;
		Bounds local_1c8;
		float local_1b0;
		float local_1ac;
		float local_1a8;
		float local_1a4;
		float local_1a0;
		float local_19c;
		float local_198;
		float local_194;
		float local_190;
		float local_18c;
		byte[] local_188 = new byte[16];
		byte[] local_178 = new byte[8];
		uint uStack_170;
		uint uStack_16c;
		float local_168;
		float local_158;
		uint uStack_154;
		uint uStack_150;
		uint uStack_14c;
		float local_148;
		float local_138;
		float fStack_134;
		float fStack_124;
		float local_118;
		uint uStack_110;
		uint uStack_10c;
		byte[] local_108 = new byte[16];
		byte[] local_f8 = new byte[16];
		byte[] local_e8 = new byte[16];
		byte[] local_d8 = new byte[16];
		byte[] local_c8 = new byte[16];
		byte[] local_b8 = new byte[16];
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[24];

		local_168 = normal.z;
		uStack_170 = in_XMM0_Dc;
		local_178 = normal._0_8_;
		uStack_16c = in_XMM0_Dd;
		if ((go == null) ||(pSVar6 = go.GetComponentsInChildren<Renderer>(), pSVar6 == null)) {
	label_05c87d9c: ;
			throw new NullReferenceException();
		}
		iVar9 = pSVar6.Length;
		if (iVar9 == 0) {
			fVar12 = 0.0;
		}
		else {
			if ((int)iVar9 < 1) {
				fVar12 = 3.4028235e+38;
			}
			else {
				local_118 = ABS((float)local_178._0_4_);
				uStack_110 = uStack_170 & 0x7fffffff;
				uStack_10c = uStack_16c & 0x7fffffff;
				local_138 = ABS((float)local_178._4_4_);
				fStack_124 = ABS(local_168);
				fVar12 = 3.4028235e+38;
				lVar11 = 0;
				uVar13 = 0;
				uVar14 = 0;
				uVar15 = 0;
				fStack_134 = local_138;
				do {
					while(true) {
						if ((uint)iVar9 <= (uint)lVar11) {
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Object)pSVar6[lVar11];
						if (__this_00 == null) goto label_05c87cfa;
						bVar1 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
						if ((__this_00.klass._2).typeHierarchyDepth < bVar1) {
							pUVar10 = null;
						}
						else {
							pUVar10 = null;
							if ((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SkinnedMeshRenderer)) {
								pUVar10 = __this_00;
							}
						}
						local_158 = fVar12;
						uStack_154 = uVar13;
						uStack_150 = uVar14;
						uStack_14c = uVar15;
						x = (Object)__this_00.GetComponent<MeshFilter>();
						bVar5 = (pUVar10 != null);
						if (bVar5) break;
						bVar5 = (x != null);
						if (bVar5) {
							if (x == null) goto label_05c87cfa;
							pUVar10 = (Object)x.sharedMesh;
							bVar5 = (pUVar10 != null);
							if (bVar5) {
								__this_01 = x.sharedMesh;
								if (__this_01 == null) goto label_05c87cfa;
								local_1c8 = __this_01.bounds;
								local_188._0_4_ = local_1c8.m_Center.z;
								goto label_05c8756e;
							}
						}
						local_1c8 = __this_00.bounds;
						fVar16 = local_1c8.m_Extents.z;
						uVar4 = local_1c8.m_Extents._0_8_;
						fVar12 = local_1c8.m_Center.z;
						uVar3 = local_1c8.m_Center._0_8_;
						pUVar7 = go.transform;
						if (pUVar7 == null) {
	label_05c87cfa: ;
							throw new NullReferenceException();
						}
						UVar17 = pUVar7.position;
						local_218 = (float)uVar3;
						fStack_214 = SUB84(uVar3, 4);
						local_228._0_4_ = (float)uVar4;
						local_228._4_4_ = SUB84(uVar4, 4);
						fVar16 = (local_168 * (fVar12 - UVar17.z) +(fStack_214 - UVar17.y) * (float)local_178._4_4_ +(local_218 - UVar17.x) * (float)local_178._0_4_) -(fVar16 * fStack_124 + fStack_134 * local_228._4_4_ + local_118 * (float)local_228);
						fVar12 = local_158;
						if (fVar16 <= local_158) {
							fVar12 = fVar16;
						}
						uVar2 = (uint)pSVar6.Length;
						iVar9 = (il2cpp_array_size_t)uVar2;
						lVar11 = lVar11 + 1;
						uVar13 = uStack_154;
						uVar14 = uStack_150;
						uVar15 = uStack_14c;
						if ((int)uVar2 <= (int)lVar11) goto label_05c87ccf;
					}
					if (pUVar10 == null) goto label_05c87cfa;
					local_1c8 = pUVar10.localBounds;
					local_188._0_4_ = local_1c8.m_Center.z;
					x = pUVar10;
	label_05c8756e: ;
					fVar12 = local_1c8.m_Extents.z;
					uVar4 = local_1c8.m_Extents._0_8_;
					uVar3 = local_1c8.m_Center._0_8_;
					pUVar7 = x.transform;
					if (pUVar7 == null) goto label_05c87cfa;
					local_1d8 = (float)uVar3;
					fStack_1d4 = SUB84(uVar3, 4);
					local_208._0_4_ = (float)uVar4;
					local_208._4_4_ = SUB84(uVar4, 4);
					UVar20.x = local_1d8 - (float)local_208;
					UVar20.y = fStack_1d4 - local_208._4_4_;
					UVar20.z = (float)local_188._0_4_ - fVar12;
					UVar17 = pUVar7.TransformPoint(UVar20);
					local_48._8_4_ = extraout_XMM0_Dc;
					local_48._0_8_ = UVar17._0_8_;
					local_48._12_4_ = extraout_XMM0_Dd;
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					UVar21.x = (float)local_208 + local_1d8;
					position.y = local_208._4_4_ + fStack_1d4;
					UVar18 = pUVar8.position;
					local_190 = UVar18.z;
					local_68._8_4_ = extraout_XMM0_Dc_00;
					local_68._0_8_ = UVar18._0_8_;
					local_68._12_4_ = extraout_XMM0_Dd_00;
					UVar21.y = UVar20.y;
					UVar21.z = UVar20.z;
					UVar18 = pUVar7.TransformPoint(UVar21);
					local_18c = UVar18.z;
					local_58._8_4_ = extraout_XMM0_Dc_01;
					local_58._0_8_ = UVar18._0_8_;
					local_58._12_4_ = extraout_XMM0_Dd_01;
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					UVar18 = pUVar8.position;
					local_198 = UVar18.z;
					local_88._8_4_ = extraout_XMM0_Dc_02;
					local_88._0_8_ = UVar18._0_8_;
					local_88._12_4_ = extraout_XMM0_Dd_02;
					position.x = UVar20.x;
					position.z = UVar20.z;
					local_148 = UVar20.x;
					UVar18 = pUVar7.TransformPoint(position);
					local_194 = UVar18.z;
					local_78._8_4_ = extraout_XMM0_Dc_03;
					local_78._0_8_ = UVar18._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd_03;
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					UVar18 = pUVar8.position;
					local_19c = UVar18.z;
					local_a8._8_4_ = extraout_XMM0_Dc_04;
					local_a8._0_8_ = UVar18._0_8_;
					local_a8._12_4_ = extraout_XMM0_Dd_04;
					UVar18.z = UVar20.z;
					UVar18.x = UVar21.x;
					UVar18.y = position.y;
					UVar18 = pUVar7.TransformPoint(UVar18);
					local_148 = UVar18.z;
					local_98._8_4_ = extraout_XMM0_Dc_05;
					local_98._0_8_ = UVar18._0_8_;
					local_98._12_4_ = extraout_XMM0_Dd_05;
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					fVar12 = fVar12 + (float)local_188._0_4_;
					UVar18 = pUVar8.position;
					local_1a0 = UVar18.z;
					local_b8._8_4_ = extraout_XMM0_Dc_06;
					local_b8._0_8_ = UVar18._0_8_;
					local_b8._12_4_ = extraout_XMM0_Dd_06;
					UVar19.z = fVar12;
					UVar19.x = UVar20.x;
					UVar19.y = UVar20.y;
					UVar18 = pUVar7.TransformPoint(UVar19);
					local_188._8_4_ = extraout_XMM0_Dc_07;
					local_188._0_8_ = UVar18._0_8_;
					local_188._12_4_ = extraout_XMM0_Dd_07;
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					UVar19 = pUVar8.position;
					local_1a8 = UVar19.z;
					local_d8._8_4_ = extraout_XMM0_Dc_08;
					local_d8._0_8_ = UVar19._0_8_;
					local_d8._12_4_ = extraout_XMM0_Dd_08;
					position_00.y = UVar20.y;
					position_00.x = UVar21.x;
					position_00.z = fVar12;
					UVar19 = pUVar7.TransformPoint(position_00);
					local_1a4 = UVar19.z;
					local_c8._8_4_ = extraout_XMM0_Dc_09;
					local_c8._0_8_ = UVar19._0_8_;
					local_c8._12_4_ = extraout_XMM0_Dd_09;
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					UVar19 = pUVar8.position;
					local_1ac = UVar19.z;
					local_e8._8_4_ = extraout_XMM0_Dc_10;
					local_e8._0_8_ = UVar19._0_8_;
					local_e8._12_4_ = extraout_XMM0_Dd_10;
					position_01.y = position.y;
					position_01.x = UVar20.x;
					position_01.z = fVar12;
					UVar20 = pUVar7.TransformPoint(position_01);
					pUVar8 = go.transform;
					if (pUVar8 == null) goto label_05c87d9c;
					UVar19 = pUVar8.position;
					local_1b0 = UVar19.z;
					local_108._8_4_ = extraout_XMM0_Dc_11;
					local_108._0_8_ = UVar19._0_8_;
					local_108._12_4_ = extraout_XMM0_Dd_11;
					position_02.z = fVar12;
					position_02.x = UVar21.x;
					position_02.y = position.y;
					UVar21 = pUVar7.TransformPoint(position_02);
					local_f8._8_4_ = extraout_XMM0_Dc_12;
					local_f8._0_8_ = UVar21._0_8_;
					local_f8._12_4_ = extraout_XMM0_Dd_12;
					pUVar7 = go.transform;
					if (pUVar7 == null) goto label_05c87d9c;
					fVar12 = ((float)local_48._4_4_ - (float)local_68._4_4_) * (float)local_178._4_4_ +((float)local_48._0_4_ - (float)local_68._0_4_) * (float)local_178._0_4_ +(UVar17.z - local_190) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					fVar12 = ((float)local_58._4_4_ - (float)local_88._4_4_) * (float)local_178._4_4_ +((float)local_58._0_4_ - (float)local_88._0_4_) * (float)local_178._0_4_ +(local_18c - local_198) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					fVar12 = ((float)local_78._4_4_ - (float)local_a8._4_4_) * (float)local_178._4_4_ +((float)local_78._0_4_ - (float)local_a8._0_4_) * (float)local_178._0_4_ +(local_194 - local_19c) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					fVar12 = ((float)local_98._4_4_ - (float)local_b8._4_4_) * (float)local_178._4_4_ +((float)local_98._0_4_ - (float)local_b8._0_4_) * (float)local_178._0_4_ +(local_148 - local_1a0) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					fVar12 = ((float)local_188._4_4_ - (float)local_d8._4_4_) * (float)local_178._4_4_ +((float)local_188._0_4_ - (float)local_d8._0_4_) * (float)local_178._0_4_ +(UVar18.z - local_1a8) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					fVar12 = ((float)local_c8._4_4_ - (float)local_e8._4_4_) * (float)local_178._4_4_ +((float)local_c8._0_4_ - (float)local_e8._0_4_) * (float)local_178._0_4_ +(local_1a4 - local_1ac) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					local_1d8 = UVar20.x;
					fStack_1d4 = UVar20.y;
					fVar12 = (fStack_1d4 - (float)local_108._4_4_) * (float)local_178._4_4_ +(local_1d8 - (float)local_108._0_4_) * (float)local_178._0_4_ +(UVar20.z - local_1b0) * local_168;
					if (fVar12 <= local_158) {
						local_158 = fVar12;
					}
					UVar17 = pUVar7.position;
					fVar16 = (UVar21.z - UVar17.z) * local_168 +((float)local_f8._4_4_ - UVar17.y) * (float)local_178._4_4_ +((float)local_f8._0_4_ - UVar17.x) * (float)local_178._0_4_;
					fVar12 = local_158;
					if (fVar16 <= local_158) {
						fVar12 = fVar16;
					}
					uVar2 = (uint)pSVar6.Length;
					iVar9 = (il2cpp_array_size_t)uVar2;
					lVar11 = lVar11 + 1;
					uVar13 = uStack_154;
					uVar14 = uStack_150;
					uVar15 = uStack_14c;
				} while ((int)lVar11 < (int)uVar2);
			}
	label_05c87ccf: ;
			fVar12 = (float)(-(uint)(fVar12 < 3.4028235e+38) & (uint)-fVar12);
		}
		return fVar12;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x5B87F20", Offset = "0x5B86F20", VA = "0x5B87F20")]
	private Vector3 ProjectToSurface(GameObject go, Vector3 planePoint, int mask, out Vector3 hitNormal)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ProjectToSurface): 28 lines keep C-only constructs
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
		byte[] auVar12 = new byte[16];
		bool bVar13;
		Transform __this_00;
		Transform __this_01;
		UnityEngine_Vector3_StaticFields pUVar14;
		MapEditorBrush __this_02;
		float fVar15;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar16;
		float fVar17;
		float fVar18;
		byte[] auVar19 = new byte[16];
		Quaternion UVar20;
		Quaternion UVar21;
		Vector3 UVar22;
		Vector3 value;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		Vector3 local_88;
		float local_78;
		Vector3 local_68;
		byte[] local_58 = new byte[48];

		local_58._32_4_ = 0.0;
		local_58._36_4_ = 0.0;
		local_58._40_4_ = 0.0;
		local_58._16_4_ = 0.0;
		local_58._20_4_ = 0.0;
		local_58._24_4_ = 0.0;
		local_58._28_4_ = 0.0;
		local_58._0_4_ = 0.0;
		local_58._4_4_ = 0.0;
		local_58._8_4_ = 0.0;
		local_58._12_4_ = 0.0;
		local_78 = this.GetSupportOffset(go, (Vector3)this._surfaceNormal);
		uVar3 = 0;
		bVar13 = this.TryFindClosestSurfaceHit(planePoint, mask, (RaycastHit)local_58);
		if (!bVar13) {
			fVar17 = this._surfaceNormal.x;
			fVar15 = this._surfaceNormal.y;
			hitNormal.z = this._surfaceNormal.z;
			hitNormal.x = fVar17;
			hitNormal.y = fVar15;
			uVar1 = this._surfaceNormal.x;
			uVar6 = this._surfaceNormal.y;
			local_98 = planePoint.x;
			fStack_94 = planePoint.y;
			local_98 = local_78 * (float)uVar1 + local_98;
			fStack_94 = local_78 * (float)uVar6 + fStack_94;
			fVar17 = this._surfaceNormal.z * local_78 + planePoint.z;
			goto label_05c8833d;
		}
		UVar22 = local_58.normal;
		if (UVar22.z * UVar22.z + UVar22.y * UVar22.y + UVar22.x * UVar22.x <= 0.0001) {
			uVar2 = this._surfaceNormal.x;
			uVar7 = this._surfaceNormal.y;
			fVar17 = this._surfaceNormal.z;
			uVar3 = uVar2;
			uVar8 = uVar7;
			if (this.AlignToSurface == false) goto label_05c88250;
	label_05c880c3: ;
			hitNormal.x = (float)uVar3;
			hitNormal.y = (float)uVar8;
			hitNormal.z = fVar17;
			if (this.AlignToSurface == false) goto label_05c8829b;
	label_05c880d7: ;
			if (go == null) goto label_05c883bc;
			__this_00 = go.transform;
			local_88.x = this._surfaceNormal.x;
			local_88.y = this._surfaceNormal.y;
			local_88.z = this._surfaceNormal.z;
			local_68.x = hitNormal.x;
			local_68.y = hitNormal.y;
			local_68.z = hitNormal.z;
			UVar20 = Quaternion.Internal_FromToRotation(ref local_88, ref local_68);
			__this_01 = go.transform;
			if (__this_01 == null) goto label_05c883bc;
			UVar21 = __this_01.rotation;
			fVar16 = UVar21.z;
			fVar18 = UVar21.w;
			fVar17 = UVar21.x;
			fVar15 = UVar21.y;
			if (__this_00 == null) goto label_05c883bc;
			local_a8 = UVar20.z;
			fStack_a4 = UVar20.w;
			local_98 = UVar20.x;
			fStack_94 = UVar20.y;
			UVar20.w = ((fStack_a4 * fVar18 - local_98 * fVar17) - fStack_94 * fVar15) - local_a8 * fVar16;
			UVar20.z = (local_a8 * fVar18 + fStack_a4 * fVar16 + fVar15 * local_98) - fVar17 * fStack_94;
			UVar20.y = (fStack_a4 * fVar15 + fVar18 * fStack_94 + local_a8 * fVar17) - fVar16 * local_98;
			UVar20.x = (fStack_a4 * fVar17 + fVar18 * local_98 + fStack_94 * fVar16) - fVar15 * local_a8;
			__this_00.rotation = UVar20;
		}
		else {
			UVar22 = local_58.normal;
			fVar17 = UVar22.z;
			auVar19._8_4_ = extraout_XMM0_Dc;
			auVar19._0_8_ = UVar22._0_8_;
			auVar19._12_4_ = extraout_XMM0_Dd;
			if (Il2CppMethodInitialized_0753e72d == false) {
				uVar3 = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_88.x = 0.0;
				local_88.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05c87ff9;
	label_05c8837e: ;
				local_88.x = 0.0;
				local_88.y = 0.0;
				uVar3 = 0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_88.x = 0.0;
				local_88.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05c8837e;
	label_05c87ff9: ;
				local_88.x = 0.0;
				local_88.y = 0.0;
				uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar11 == 0) {
				uVar3 = 0;
			}
			local_98 = UVar22.x;
			fStack_94 = UVar22.y;
			fVar15 = fVar17 * fVar17 + fStack_94 * fStack_94 + local_98 * local_98;
			if (fVar15 < 0.0) {
				fVar15 = sqrtf(fVar15);
				uVar3 = extraout_XMM0_Db;
				if (fVar15 <= 1e-05) goto label_05c8804b;
	label_05c88229: ;
				fVar17 = fVar17 / fVar15;
				auVar12._4_4_ = fVar15;
				auVar12._0_4_ = fVar15;
				auVar12._8_4_ = uVar3;
				auVar12._12_4_ = uVar3;
				auVar19 = divps(auVar19, auVar12);
				local_88.x = auVar19._0_4_;
				local_88.y = auVar19._4_4_;
				pUVar14 = (UnityEngine_Vector3_StaticFields)&local_88;
			}
			else {
				fVar15 = SQRT(fVar15);
				if (1e-05 < fVar15) goto label_05c88229;
	label_05c8804b: ;
				pUVar14 = typeof(Vector3).static_fields;
				fVar17 = (pUVar14.zeroVector).z;
			}
			uVar3 = (pUVar14.zeroVector).x;
			uVar8 = (pUVar14.zeroVector).y;
			if (this.AlignToSurface != false) goto label_05c880c3;
	label_05c88250: ;
			pUVar14 = typeof(Vector3).static_fields;
			fVar15 = (pUVar14.upVector).y;
			fVar17 = (pUVar14.upVector).z;
			hitNormal.x = (pUVar14.upVector).x;
			hitNormal.y = fVar15;
			hitNormal.z = fVar17;
			if (this.AlignToSurface != false) goto label_05c880d7;
	label_05c8829b: ;
			if (go == null) goto label_05c883bc;
		}
		__this_02 = (MapEditorBrush)go.transform;
		UVar22 = local_58.point;
		if (__this_02 != null) {
			value.z = UVar22.z + hitNormal.z * 500.0;
			uVar4 = hitNormal.x;
			uVar9 = hitNormal.y;
			value.x = UVar22.x + (float)uVar4 * 500.0;
			value.y = UVar22.y + (float)uVar9 * 500.0;
			__this_02.position = value;
			local_78 = __this_02.GetSupportOffset(go, (Vector3)hitNormal.fields);
			UVar22 = local_58.point;
			uVar5 = hitNormal.x;
			uVar10 = hitNormal.y;
			local_98 = local_78 * (float)uVar5 + UVar22.x;
			fStack_94 = local_78 * (float)uVar10 + UVar22.y;
			fVar17 = hitNormal.z * local_78 + UVar22.z;
	label_05c8833d: ;
			UVar22.y = fStack_94;
			UVar22.x = local_98;
			UVar22.z = fVar17;
			return (Vector3)UVar22;
		}
	label_05c883bc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x5B845F0", Offset = "0x5B835F0", VA = "0x5B845F0")]
	private bool TryFindClosestSurfaceHit(Vector3 planePoint, int mask, out RaycastHit closestHit)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$TryFindClosestSurfaceHit): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		Vector2 UVar6;
		uint uVar7;
		uint uVar8;
		RaycastHit[] pUVar9;
		ulong uVar10;
		RaycastHit pUVar11;
		uint in_register_00000034;
		MethodInfo method_00;
		ulong uVar12;
		bool bVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		Vector3 UVar21;
		Vector3 direction;
		float local_c8;
		RaycastHit local_b8;
		byte[] local_88 = new byte[8];
		float fStack_80;
		float fStack_7c;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float local_68;
		float local_58;
		float local_48;
		float fStack_44;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, mask);
		fStack_80 = (float)in_XMM0_Dc;
		local_88 = planePoint._0_8_;
		fStack_7c = (float)in_XMM0_Dd;
		local_b8.m_UV.x = 0.0;
		local_b8.m_UV.y = 0.0;
		local_b8.m_Collider.m_Data = (EntityId)0;
		local_b8.m_Normal.y = 0.0;
		local_b8.m_Normal.z = 0.0;
		local_b8.m_FaceID = 0;
		local_b8.m_Distance = 0.0;
		local_b8.m_Point.x = 0.0;
		local_b8.m_Point.y = 0.0;
		local_b8.m_Point.z = 0.0;
		local_b8.m_Normal.x = 0.0;
		closestHit.m_Distance = 0.0;
		closestHit.m_UV.x = 0.0;
		*(ulong)&closestHit.m_UV.y = 0;
		closestHit.m_Normal.y = 0.0;
		closestHit.m_Normal.z = 0.0;
		closestHit.m_FaceID = 0;
		closestHit.m_Distance = 0.0;
		closestHit.m_Point.x = 0.0;
		closestHit.m_Point.y = 0.0;
		*(ulong)&closestHit.m_Point.z = 0;
		fVar14 = this.GetUpwardProjectionLimit();
		uVar1 = this._surfaceNormal.x;
		uVar3 = this._surfaceNormal.y;
		fVar20 = this._surfaceNormal.z;
		fVar15 = fVar14 * (float)uVar1 + (float)local_88._0_4_;
		fVar16 = fVar14 * (float)uVar3 + (float)local_88._4_4_;
		fVar17 = fVar14 * fVar20 + planePoint.z;
		fVar20 = -fVar20;
		fVar18 = -(float)uVar1;
		fVar19 = -(float)uVar3;
		if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
			local_78 = fVar15;
			fStack_74 = fVar16;
			fStack_70 = fVar14 * 0.0 + fStack_80;
			fStack_6c = fVar14 * 0.0 + fStack_7c;
			local_68 = fVar17;
			local_58 = fVar20;
			local_48 = -(float)uVar1;
			fStack_44 = -(float)uVar3;
			fVar15 = local_78;
			fVar16 = fStack_74;
			fVar17 = local_68;
			fVar18 = local_48;
			fVar19 = fStack_44;
			fVar20 = local_58;
		}
		UVar21.y = fVar16;
		UVar21.x = fVar15;
		UVar21.z = fVar17;
		direction.y = fVar19;
		direction.x = fVar18;
		direction.z = fVar20;
		pUVar9 = Physics.RaycastAll(UVar21, direction, fVar14 + 2000.0, mask);
		if (pUVar9 == null) {
			throw new NullReferenceException();
		}
		if ((int)pUVar9.Length < 1) {
		}
		else {
			uVar10 = pUVar9.Length & 0xffffffff;
			pUVar11 = pUVar9.m_Items;
			local_c8 = 3.4028235e+38;
			uVar12 = 0;
			do {
				if (uVar10 <= uVar12) {
					throw new IndexOutOfRangeException();
				}
				local_b8.m_Point.x = pUVar11.m_Point.x;
				local_b8.m_Point.y = pUVar11.m_Point.y;
				local_b8._8_8_ = *(ulong)&pUVar11.m_Point.z;
				local_b8.m_Normal.y = pUVar11.m_Normal.y;
				local_b8.m_Normal.z = pUVar11.m_Normal.z;
				uVar7 = pUVar11.m_FaceID;
				uVar8 = pUVar11.m_Distance;
				UVar6 = pUVar11.m_UV;
				local_b8.m_Collider.m_Data =(EntityId)pUVar11.m_Collider.m_Data;
				local_b8.m_UV.x = UVar6.x;
				local_b8.m_UV.y = UVar6.y;
				local_b8.m_FaceID = uVar7;
				local_b8.m_Distance = (float)uVar8;
				UVar21 = local_b8.point;
				uVar2 = this._surfaceNormal.x;
				uVar4 = this._surfaceNormal.y;
				fVar20 = ABS((UVar21.z - planePoint.z) * this._surfaceNormal.z +(UVar21.y - (float)local_88._4_4_) * (float)uVar4 +(UVar21.x - (float)local_88._0_4_) * (float)uVar2);
				if (fVar20 < local_c8) {
					closestHit.m_Distance = local_b8.m_Distance;
					closestHit.m_UV.x = local_b8.m_UV.x;
					*(ulong)&closestHit.m_UV.y = CONCAT44(local_b8.m_Collider.m_Data, local_b8.m_UV.y);
					closestHit.m_Normal.y = local_b8.m_Normal.y;
					closestHit.m_Normal.z = local_b8.m_Normal.z;
					closestHit.m_FaceID = local_b8.m_FaceID;
					closestHit.m_Distance = local_b8.m_Distance;
					closestHit.m_Point.x = local_b8.m_Point.x;
					closestHit.m_Point.y = local_b8.m_Point.y;
					*(ulong)&closestHit.m_Point.z = local_b8._8_8_;
					local_c8 = fVar20;
				}
				uVar12 = uVar12 + 1;
				uVar5 = (uint)pUVar9.Length;
				uVar10 = (ulong)uVar5;
				pUVar11 = pUVar11 + 1;
			} while ((long)uVar12 < (long)(int)uVar5);
		}
		return bVar13;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x5B8A480", Offset = "0x5B89480", VA = "0x5B8A480")]
	public List<MapScriptBaseObject> BuildPlacements()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$BuildPlacements): 2 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		List<string> __this_00;
		List<Vector3> pSVar4;
		MapScriptBaseObject[] pMVar5;
		bool bVar7;
		List<MapScriptBaseObject> __this_01;
		Object x;
		String pSVar8;
		BrushEntry entry;
		MapScriptSceneObject script;
		Transform pUVar9;
		List<GameObject> __this_02;
		MapEditorBrush __this_03;
		int index;
		Quaternion rotation;
		Vector3 UVar10;

		__this_01 = new List<MapScriptBaseObject>();
		__this_02 = this._ghostObjects;
		if (__this_02 != null) {
			index = 0;
			do {
				if (__this_02._size <= index) {
					return __this_01;
				}
				x = (Object)__this_02.get_Item(index);
				bVar7 = (x == null);
				if (!bVar7) {
					__this_00 = this._ghostAssets;
					if (__this_00 == null) break;
					pSVar8 = __this_00.get_Item(index);
					entry = this.FindEntry(pSVar8);
					__this_03 = (MapEditorBrush)this._ghostAssets;
					if (__this_03 == null) break;
					pSVar8 = __this_03.get_Item(index);
					script = __this_03.CloneScript(pSVar8);
					if (script != null) {
						pSVar4 = this._ghostScales;
						if (pSVar4 == null) break;
						fVar2 = script.ScaleX;
						UVar10 = pSVar4.get_Item(index);
						script.ScaleX = UVar10.x * fVar2;
						pSVar4 = this._ghostScales;
						if (pSVar4 == null) break;
						fVar2 = script.ScaleY;
						UVar10 = pSVar4.get_Item(index);
						script.ScaleY = UVar10.y * fVar2;
						pSVar4 = this._ghostScales;
						if (pSVar4 == null) break;
						fVar2 = script.ScaleZ;
						UVar10 = pSVar4.get_Item(index);
						script.ScaleZ = UVar10.z * fVar2;
						if (x == null) break;
						pUVar9 = x.transform;
						if (pUVar9 == null) break;
						UVar10 = pUVar9.position;
						script.SetPosition(UVar10);
						pUVar9 = x.transform;
						if (pUVar9 == null) break;
						rotation = pUVar9.rotation;
						script.SetRotation(rotation);
						if (entry != null) {
							MapEditorBrush.ApplyEntryFields(script, entry);
						}
						if (__this_01 == null) break;
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pMVar5 = __this_01._items;
						if (pMVar5 == null) break;
						uVar3 = __this_01._size;
						if (uVar3 < (uint)pMVar5.Length) {
							__this_01._size = uVar3 + 1;
							pMVar5[(int)uVar3] = (MapScriptBaseObject)script;
						}
						else {
							__this_01.AddWithResize((object)script);
						}
					}
				}
				index = index + 1;
				__this_02 = this._ghostObjects;
			} while (__this_02 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x5B87DB0", Offset = "0x5B86DB0", VA = "0x5B87DB0")]
	private BrushEntry FindEntry(string asset)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$FindEntry): 2 lines keep C-only constructs
		List<BrushEntry> __this_00;
		bool bVar1;
		BrushEntry pMVar2;
		int iVar4;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_00 = this.Entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		local_30 = (byte)&local_58;
		do {
			bVar1 = local_58.MoveNext();
			if (!bVar1) {
				iVar4 = 5;
				goto label_05c87e8a;
			}
			if ((BrushEntry)local_58._current == null) {
				throw new NullReferenceException();
			}
			bVar1 = (((BrushEntry)((long)local_58._current + 0x10)).AssetName == asset);
		} while (!bVar1);
		iVar4 = 4;
	label_05c87e8a: ;
		local_58.Dispose();
		if (iVar4 == 4) {
		}
		return pMVar2;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x5B84D70", Offset = "0x5B83D70", VA = "0x5B84D70")]
	private static void ApplyEntryFields(MapScriptSceneObject script, BrushEntry entry)
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$ApplyEntryFields): 8 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		MapScriptBaseMaterial pMVar3;
		String pSVar4;
		MapScriptBaseMaterial pMVar5;
		bool bVar6;
		MapScriptReflectiveMaterial __this;
		MapScriptBaseMaterial* targetAddress;

		if ((entry == null) || (script == null)) goto label_05c851e0;
		script.Active = entry.Active;
		script.Static = entry.Static;
		script.Visible = entry.Visible;
		script.CollideMode = entry.CollideMode;
		script.CollideWith = entry.CollideWith;
		script.PhysicsMaterial = entry.PhysicsMaterial;
		pMVar3 = script.Material;
		targetAddress = &script.Material;
		if ((pMVar3 == null) ||(bVar6 = (pMVar3.Shader != entry.Shader))) {
			pSVar4 = entry.Shader;
			bVar6 = (pSVar4 == MapObjectShader.Default);
			if (bVar6) {
	label_05c84ed0: ;
				__this = new MapScriptBasicMaterial();
			}
			else {
				pSVar4 = entry.Shader;
				bVar6 = (pSVar4 == MapObjectShader.DefaultNoTint);
				if (bVar6) goto label_05c84ed0;
				pSVar4 = entry.Shader;
				bVar6 = (pSVar4 == MapObjectShader.DefaultTiled);
				if (bVar6) {
					__this = new MapScriptBasicMaterial();
				}
				else {
					pSVar4 = entry.Shader;
					bVar6 = (pSVar4 == MapObjectShader.Basic);
					if (!bVar6) {
						pSVar4 = entry.Shader;
						bVar6 = (pSVar4 == MapObjectShader.Transparent);
						if (!bVar6) {
							pSVar4 = entry.Shader;
							bVar6 = (pSVar4 == MapObjectShader.Reflective);
							if (bVar6) {
								__this = new MapScriptBasicMaterial();
							}
							else {
								pSVar4 = entry.Shader;
								bVar6 = MapObjectShader.IsLegacyShader(pSVar4);
								if (!bVar6) goto label_05c84ed0;
								__this = new MapScriptBasicMaterial();
							}
							goto label_05c84eec;
						}
					}
					__this = new MapScriptBasicMaterial();
				}
			}
	label_05c84eec: ;
			*targetAddress = (MapScriptBaseMaterial)__this;
			pMVar3 = *targetAddress;
			if (pMVar3 == null) goto label_05c851e0;
			pMVar3.Shader = entry.Shader;
		}
		pMVar3 = *targetAddress;
		if (pMVar3 != null) {
			pMVar3.Color = entry.Color;
			pMVar3 = *targetAddress;
			if (pMVar3 != null) {
				pMVar5 = pMVar3.klass;
				bVar1 = (pMVar5._2).typeHierarchyDepth;
				bVar2 = (typeof(MapScriptLegacyMaterial)._2).typeHierarchyDepth;
				if (((bVar1 < bVar2) ||((pMVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(MapScriptLegacyMaterial) )) && ((bVar2 = (typeof(MapScriptDefaultTiledMaterial)._2).typeHierarchyDepth, bVar1 < bVar2 || ((pMVar5._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapScriptDefaultTiledMaterial))))) {
					bVar2 = (typeof(MapScriptBasicMaterial)._2).typeHierarchyDepth;
					if (bVar1 < bVar2) {
						return;
					}
					if ((pMVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(MapScriptBasicMaterial) ) {
						return;
					}
					(*(ulong)((sbyte)pMVar3 + 0x20)) = (MapScriptBaseMaterial)entry.Texture;
					(*(ulong)((sbyte)pMVar3 + 0x28)) = (IntPtr)entry.Tiling;
					(*(ulong)((sbyte)pMVar3 + 0x30)) = (String)entry.Offset;
					bVar1 = (typeof(MapScriptReflectiveMaterial)._2).typeHierarchyDepth;
					if ((pMVar3.klass._2).typeHierarchyDepth < bVar1) {
						return;
					}
					if ((pMVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapScriptReflectiveMaterial)) {
						(*(ulong)((sbyte)pMVar3 + 0x38)) = entry.ReflectColor;
						return;
					}
					return;
				}
				(*(ulong)((sbyte)pMVar3 + 0x20)) = (MapScriptBaseMaterial)entry.Tiling;
			}
			return;
		}
	label_05c851e0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x5B8A790", Offset = "0x5B89790", VA = "0x5B8A790")]
	public MapEditorBrush()
	{
		// Lifted from source/cpp/MapEditor/MapEditorBrush.c (MapEditor.MapEditorBrush$$.ctor): clean
		float fVar1;
		UnityEngine_Vector3_StaticFields pUVar2;
		UnityEngine_Quaternion_StaticFields pUVar3;
		float fVar4;
		float fVar5;
		List<BrushEntry> __this_00;
		List<GameObject> __this_01;
		List<Material> __this_02;
		List<string> __this_03;
		List<Vector3> pSVar6;
		Vector3 pUVar7;
		bool bVar8;

		this.Radius = 10.0;
		this.Count = 8;
		this.RandomizeEachPlacement = true;
		this.SurfaceProjectionLimit = 5.0;
		this.GridX = 3;
		this.GridY = 1;
		this.GridZ = 3;
		this.SpacingX = 5.0;
		this.SpacingY = 5.0;
		this.SpacingZ = 5.0;
		__this_00 = new List<BrushEntry>();
		this.Entries = __this_00;
		__this_01 = new List<GameObject>();
		this._ghostObjects = __this_01;
		__this_02 = new List<Material>();
		this._ghostMaterials = __this_02;
		__this_03 = new List<string>();
		this._ghostAssets = __this_03;
		pSVar6 = new List<Vector3>();
		this._ghostScales = pSVar6;
		pSVar6 = new List<Vector3>();
		this._ghostRotations = pSVar6;
		pSVar6 = new List<Vector3>();
		this._ghostLocalOffsets = pSVar6;
		this._ghostIdCounter = -100000;
		pUVar2 = typeof(Vector3).static_fields;
		fVar4 = (pUVar2.upVector).y;
		fVar1 = (pUVar2.upVector).z;
		this._surfaceNormal.x = (pUVar2.upVector).x;
		this._surfaceNormal.y = fVar4;
		this._surfaceNormal.z = fVar1;
		if (Il2CppMethodInitialized_0753e72b == false) {
			Il2CppMethodInitialized_0753e72b = true;
			bVar8 = Il2CppMethodInitialized_0753e72c == false;
			pUVar3 = typeof(Quaternion).static_fields;
			fVar1 = (pUVar3.identityQuaternion).y;
			fVar4 = (pUVar3.identityQuaternion).z;
			fVar5 = (pUVar3.identityQuaternion).w;
			this._surfaceFrame.x = (pUVar3.identityQuaternion).x;
			this._surfaceFrame.y = fVar1;
			this._surfaceFrame.z = fVar4;
			this._surfaceFrame.w = fVar5;
			if (bVar8) {
				Il2CppMethodInitialized_0753e72c = true;
			}
		}
		else {
			pUVar3 = typeof(Quaternion).static_fields;
			fVar1 = (pUVar3.identityQuaternion).y;
			fVar4 = (pUVar3.identityQuaternion).z;
			fVar5 = (pUVar3.identityQuaternion).w;
			this._surfaceFrame.x = (pUVar3.identityQuaternion).x;
			this._surfaceFrame.y = fVar1;
			this._surfaceFrame.z = fVar4;
			this._surfaceFrame.w = fVar5;
		}
		pUVar7 = typeof(Vector3);
		pUVar2 = typeof(Vector3).static_fields;
		fVar4 = (pUVar2.upVector).y;
		fVar1 = (pUVar2.upVector).z;
		this._hitNormal.x = (pUVar2.upVector).x;
		this._hitNormal.y = fVar4;
		this._hitNormal.z = fVar1;
		if (Il2CppMethodInitialized_07544d56 == false) {
			Il2CppMethodInitialized_07544d56 = true;
			pUVar7 = typeof(Vector3);
		}
		pUVar2 = pUVar7.static_fields;
		fVar4 = (pUVar2.rightVector).y;
		fVar1 = (pUVar2.rightVector).z;
		this._cameraRight.x = (pUVar2.rightVector).x;
		this._cameraRight.y = fVar4;
		this._cameraRight.z = fVar1;
		this._seed = 0x3039;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/MapEditorBrush.c.

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_0$$.ctor: clean
	private void c__DisplayClass65_0__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_1$$.ctor: clean
	private void c__DisplayClass65_1__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_2$$.ctor: clean
	private void c__DisplayClass65_2__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_3$$.ctor: clean
	private void c__DisplayClass65_3__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_4$$.ctor: clean
	private void c__DisplayClass65_4__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_5$$.ctor: clean
	private void c__DisplayClass65_5__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_6$$.ctor: clean
	private void c__DisplayClass65_6__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_0$$.ctor: clean
	private void c__DisplayClass77_0__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_1$$.ctor: clean
	private void c__DisplayClass77_1__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_2$$.ctor: clean
	private void c__DisplayClass77_2__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_3$$.ctor: clean
	private void c__DisplayClass77_3__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_4$$.ctor: clean
	private void c__DisplayClass77_4__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_5$$.ctor: clean
	private void c__DisplayClass77_5__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_6$$.ctor: clean
	private void c__DisplayClass77_6__ctor()
	{
		base();
		return;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_2$$<ApplyBoundsSnappedOffsets>b__0: clean
	private int c__DisplayClass65_2__ApplyBoundsSnappedOffsets_b__0(int i)
	{
		MapEditorBrush.c__DisplayClass65_1 pMVar1;
		MapEditorBrush.c__DisplayClass65_0 pMVar2;

		pMVar1 = this.CS___8__locals2;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.CS___8__locals1, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (this.k * pMVar2.gy + pMVar1.j) * pMVar2.gx + i;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_4$$<ApplyBoundsSnappedOffsets>b__1: clean
	private int c__DisplayClass65_4__ApplyBoundsSnappedOffsets_b__1(int j)
	{
		MapEditorBrush.c__DisplayClass65_3 pMVar1;
		MapEditorBrush.c__DisplayClass65_0 pMVar2;

		pMVar1 = this.CS___8__locals4;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.CS___8__locals3, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (this.k * pMVar2.gy + j) * pMVar2.gx + pMVar1.i;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass65_6$$<ApplyBoundsSnappedOffsets>b__2: clean
	private int c__DisplayClass65_6__ApplyBoundsSnappedOffsets_b__2(int k)
	{
		MapEditorBrush.c__DisplayClass65_5 pMVar1;
		MapEditorBrush.c__DisplayClass65_0 pMVar2;

		pMVar1 = this.CS___8__locals6;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.CS___8__locals5, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (k * pMVar2.gy + this.j) * pMVar2.gx + pMVar1.i;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_2$$<ApplyConnectedBoundsSnap>b__0: clean
	private int c__DisplayClass77_2__ApplyConnectedBoundsSnap_b__0(int i)
	{
		MapEditorBrush.c__DisplayClass77_1 pMVar1;
		MapEditorBrush.c__DisplayClass77_0 pMVar2;

		pMVar1 = this.CS___8__locals2;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.CS___8__locals1, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (this.k * pMVar2.gy + pMVar1.j) * pMVar2.gx + i;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_4$$<ApplyConnectedBoundsSnap>b__1: clean
	private int c__DisplayClass77_4__ApplyConnectedBoundsSnap_b__1(int j)
	{
		MapEditorBrush.c__DisplayClass77_3 pMVar1;
		MapEditorBrush.c__DisplayClass77_0 pMVar2;

		pMVar1 = this.CS___8__locals4;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.CS___8__locals3, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (this.k * pMVar2.gy + j) * pMVar2.gx + pMVar1.i;
	}

	// MapEditor.MapEditorBrush.<>c__DisplayClass77_6$$<ApplyConnectedBoundsSnap>b__2: clean
	private int c__DisplayClass77_6__ApplyConnectedBoundsSnap_b__2(int k)
	{
		MapEditorBrush.c__DisplayClass77_5 pMVar1;
		MapEditorBrush.c__DisplayClass77_0 pMVar2;

		pMVar1 = this.CS___8__locals6;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.CS___8__locals5, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (k * pMVar2.gy + this.j) * pMVar2.gx + pMVar1.i;
	}
}
