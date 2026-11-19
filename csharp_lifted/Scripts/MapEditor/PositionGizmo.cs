// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.PositionGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/PositionGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014E")]
internal class PositionGizmo : BaseGizmo
{
	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineX;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x50")]
	private Transform _lineY;

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x58")]
	private Transform _lineZ;

	[Token(Token = "0x400078F")]
	[FieldOffset(Offset = "0x60")]
	private Transform _planeXY;

	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x68")]
	private Transform _planeYZ;

	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x70")]
	private Transform _planeXZ;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x78")]
	private Transform _centerSquare;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x80")]
	private Color SelectedColor;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x90")]
	private Color LineXColor;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0xA0")]
	private Color LineYColor;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0xB0")]
	private Color LineZColor;

	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0xC0")]
	private Transform _activeLine;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0xC8")]
	private bool _activeIsPlane;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0xC9")]
	private bool _activeIsCenter;

	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0xCC")]
	private Plane _dragPlane;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0xDC")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0xE8")]
	private bool _vertexSnapActive;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0xEC")]
	private Vector3 _vertexSnapOrigin;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0xF8")]
	private Transform _snapAnchorTransform;

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _snapAnchorLocal;

	[Token(Token = "0x40007A0")]
	[FieldOffset(Offset = "0x10C")]
	private bool _hasSnapAnchor;

	[Token(Token = "0x40007A1")]
	[FieldOffset(Offset = "0x110")]
	private int _axisSnapDirection;

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x114")]
	private Vector2 _axisSnapStartMouse;

	[Token(Token = "0x40007A3")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x40007A4")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x40007A5")]
	private const float VertexSnapWorldRadiusFactor = 0.3f;

	[Token(Token = "0x40007A6")]
	private const float VertexSnapWorldRadiusMin = 60f;

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x5B93C80", Offset = "0x5B92C80", VA = "0x5B93C80")]
	public static PositionGizmo Create()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$Create): clean
		String path;
		GameObject __this;
		PositionGizmo pMVar1;

		path = ResourcePaths.Map;
		__this = ResourceManager.InstantiateAsset<GameObject>(path, "Gizmos/PositionGizmo", false, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pMVar1 = __this.AddComponent<PositionGizmo>();
		__this.SetActive(false);
		return pMVar1;
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x5B93D70", Offset = "0x5B92D70", VA = "0x5B93D70", Slot = "4")]
	public override bool IsActive()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$IsActive): clean
		Transform x;
		bool bVar1;

		x = this._activeLine;
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x5B93DC0", Offset = "0x5B92DC0", VA = "0x5B93DC0", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$Awake): clean
		Transform pUVar1;
		MethodInfo method_00;

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
					method_00 = (MethodInfo)pUVar1.Find("LineZ");
					this._lineZ = (Transform)method_00;
					this.CreatePlaneHandles();
					this.ResetColors();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x5B93EA0", Offset = "0x5B92EA0", VA = "0x5B93EA0")]
	private void CreatePlaneHandles()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$CreatePlaneHandles): 1 lines keep C-only constructs
		Transform pUVar1;
		MethodInfo method_00;
		GameObject __this_00;
		Vector3 axisMask;
		Vector3 axisMask_00;

		pUVar1 = this.CreatePlaneHandle("PlaneXY", (Vector3)ZEXT812(0x3f8000003f800000), (Color)this.LineZColor);
		this._planeXY = pUVar1;
		axisMask.z = 1.0;
		axisMask.x = 0.0;
		axisMask.y = 1.0;
		pUVar1 = this.CreatePlaneHandle("PlaneYZ", axisMask, (Color)this.LineXColor);
		this._planeYZ = pUVar1;
		axisMask_00.z = 1.0;
		axisMask_00.x = 1.0;
		axisMask_00.y = 0.0;
		method_00 = (MethodInfo)this.CreatePlaneHandle("PlaneXZ", axisMask_00, (Color)this.LineYColor);
		this._planeXZ = (Transform)method_00;
		pUVar1 = this.CreateCenterSquare();
		this._centerSquare = pUVar1;
		pUVar1 = this._centerSquare;
		if (pUVar1 != null) {
			__this_00 = pUVar1.gameObject;
			if (__this_00 != null) {
				__this_00.SetActive(false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x5B94430", Offset = "0x5B93430", VA = "0x5B94430")]
	private Transform CreateCenterSquare()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$CreateCenterSquare): 1 lines keep C-only constructs
		PositionGizmo __this_00;
		Transform pUVar1;
		MeshFilter __this_01;
		MeshRenderer __this_02;
		Mesh value;
		Shader shader;
		Material __this_03;
		BoxCollider __this_04;
		PositionGizmo __this_05;
		Color value_00;
		Vector3 value_01;

		__this_00 = new GameObject("CenterSquare") ;
		if (__this_00 != null) {
			__this_00.layer = PhysicsLayer.MapEditorGizmo;
			pUVar1 = __this_00.transform;
			if (pUVar1 != null) {
				pUVar1.SetParent(this._transform, false);
				pUVar1 = __this_00.transform;
				if (pUVar1 != null) {
					pUVar1.localPosition = (Vector3)(Vector3.zeroVector);
					__this_01 = __this_00.AddComponent<MeshFilter>();
					__this_05 = __this_00;
					__this_02 = __this_00.AddComponent<MeshRenderer>();
					value = __this_05.BuildQuadMesh((Vector3)ZEXT812(0x3f8000003f800000), 6.0);
					if (__this_01 != null) {
						__this_01.sharedMesh = value;
						shader = Shader.Find("MapEditor/Gizmo");
						__this_03 = new Material(shader);
						if (__this_03 != null) {
							value_00.b = 1.0;
							value_00.a = 0.5;
							value_00.r = 1.0;
							value_00.g = 1.0;
							__this_03.color = value_00;
							__this_03.renderQueue = 0x1268;
							if (__this_02 != null) {
								__this_02.sharedMaterial = __this_03;
								__this_02.shadowCastingMode = 0;
								__this_02.receiveShadows = false;
								__this_04 = __this_00.AddComponent<BoxCollider>();
								if (__this_04 != null) {
									value_01.z = 0.5;
									value_01.x = 6.0;
									value_01.y = 6.0;
									__this_04.size = value_01;
									__this_04.center = (Vector3)(Vector3.zeroVector) ;
									pUVar1 = __this_00.transform;
									return pUVar1;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x5B94140", Offset = "0x5B93140", VA = "0x5B94140")]
	private Transform CreatePlaneHandle(string name, Vector3 axisMask, Color color)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$CreatePlaneHandle): 1 lines keep C-only constructs
		ulong uVar1;
		PositionGizmo __this_00;
		Transform pUVar2;
		MeshFilter __this_01;
		MeshRenderer __this_02;
		Mesh value;
		Shader shader;
		Material __this_03;
		BoxCollider __this_04;
		PositionGizmo __this_05;
		uint uVar3;
		Color value_00;
		Vector3 value_01;
		Vector3 value_02;
		float local_58;
		float fStack_54;
		float local_48;

		__this_00 = new GameObject(name);
		if (__this_00 != null) {
			__this_00.layer = PhysicsLayer.MapEditorGizmo;
			pUVar2 = __this_00.transform;
			if (pUVar2 != null) {
				pUVar2.SetParent(this._transform, false);
				pUVar2 = __this_00.transform;
				if (pUVar2 != null) {
					local_58 = axisMask.x;
					fStack_54 = axisMask.y;
					value_01.x = local_58 * 8.0;
					value_01.y = fStack_54 * 8.0;
					value_01.z = axisMask.z * 8.0;
					pUVar2.localPosition = value_01;
					__this_01 = __this_00.AddComponent<MeshFilter>();
					__this_05 = __this_00;
					__this_02 = __this_00.AddComponent<MeshRenderer>();
					value = __this_05.BuildQuadMesh(axisMask, 6.0);
					if (__this_01 != null) {
						__this_01.sharedMesh = value;
						shader = Shader.Find("MapEditor/Gizmo");
						__this_03 = new Material(shader);
						if (__this_03 != null) {
							local_48 = color.b;
							value_00.a = 0.4;
							value_00.b = local_48;
							value_00.r = color.r;
							value_00.g = color.g;
							__this_03.color = value_00;
							__this_03.renderQueue = 0x1267;
							if (__this_02 != null) {
								__this_02.sharedMaterial = __this_03;
								__this_02.shadowCastingMode = 0;
								__this_02.receiveShadows = false;
								__this_04 = __this_00.AddComponent<BoxCollider>();
								if (__this_04 != null) {
									uVar3 = -(uint)(0.0 < axisMask.z);
									uVar1 = CONCAT44(-(uint)(0.0 < fStack_54), -(uint)(0.0 < local_58)) & 0x40c0000040c00000 | CONCAT44(~-(uint)(0.0 < fStack_54), ~-(uint)(0.0 < local_58)) & 0x3f0000003f000000;
									value_02.z = (float)(~uVar3 & 0x3f000000 | uVar3 & 0x40c00000);
									value_02.x = (float)(int)uVar1;
									value_02.y = (float)(int)(uVar1 >> 0x20);
									__this_04.size = value_02;
									__this_04.center = (Vector3)(Vector3.zeroVector) ;
									pUVar2 = __this_00.transform;
									return pUVar2;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x5B94700", Offset = "0x5B93700", VA = "0x5B94700")]
	private Mesh BuildQuadMesh(Vector3 axisMask, float size)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$BuildQuadMesh): 32 lines keep C-only constructs
		ulong uVar1;
		uint uVar2;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		UnityEngine_Vector3_StaticFields pUVar5;
		Vector3[] value;
		Vector3[] value_00;
		Mesh __this_00;
		Int32[] value_01;
		bool bVar6;
		float fVar7;
		float extraout_XMM0_Db;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		byte[] auVar12 = new byte[16];
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		float fVar21;
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
		UnityEngine_Vector3_StaticFields local_a0;
		float local_28;

		fVar7 = axisMask.y;
		local_28 = size;
		bVar4 = axisMask.x <= 0.0;
		fVar11 = 0.0;
		fVar30 = 1.0;
		local_a0.downVector.y = 1.0;
		local_a0.downVector.z = 0.0;
		if (axisMask.z <= 0.0) {
			fVar11 = 1.0;
			fVar26 = 0.0;
			if (0.0 < fVar7) goto label_05c9479e;
	label_05c9494b: ;
			bVar6 = bVar4 || fVar7 <= 0.0;
			fVar11 = 1.0;
			fVar26 = 0.0;
			if (!bVar4 && fVar7 > 0.0) goto label_05c947a6;
	label_05c94956: ;
			local_a0.downVector.z = fVar26;
			local_a0.downVector.y = fVar11;
			if (!bVar6) goto label_05c947af;
	label_05c94962: ;
			fVar7 = 1.0;
			fVar30 = 0.0;
		}
		else {
			fVar26 = fVar30;
			if (fVar7 <= 0.0) goto label_05c9494b;
	label_05c9479e: ;
			bVar6 = bVar4 || fVar7 <= 0.0;
			if (bVar4 || fVar7 <= 0.0) goto label_05c94956;
	label_05c947a6: ;
			if (bVar6) goto label_05c94962;
	label_05c947af: ;
			fVar7 = 0.0;
		}
		local_a0.leftVector.z = 0.0;
		local_a0.rightVector.x = fVar30;
		local_a0.rightVector.y = 0.0;
		local_a0.rightVector.z = 0.0;
		auVar12 = ZEXT416((uint)fVar7);
		local_a0.positiveInfinityVector.z = (float)auVar12._0_4_;
		local_a0.negativeInfinityVector.x = (float)auVar12._4_4_;
		local_a0.negativeInfinityVector.y = (float)auVar12._8_4_;
		local_a0.negativeInfinityVector.z = (float)auVar12._12_4_;
		local_a0.leftVector.x = 0.0;
		local_a0.leftVector.y = 0.0;
		fVar11 = fVar30;
		fVar26 = local_a0.downVector.y;
		fVar29 = 0.0;
		fVar31 = 0.0;
		fVar32 = local_a0.downVector.z;
		fVar15 = local_a0.downVector.z;
		fVar23 = local_a0.downVector.z;
		fVar25 = local_a0.downVector.z;
		fVar8 = local_a0.downVector.z;
		fVar9 = 0.0;
		fVar27 = 0.0;
		fVar28 = 0.0;
		fVar13 = 0.0;
		fVar16 = fVar7;
		fVar18 = 0.0;
		fVar20 = 0.0;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_a0.upVector.x = 0.0;
			local_a0.upVector.z = 0.0;
			local_a0.downVector.x = 0.0;
			local_a0.backVector.z = 0.0;
			local_a0.positiveInfinityVector.x = 0.0;
			local_a0.positiveInfinityVector.y = 0.0;
			local_a0.forwardVector.z = 0.0;
			local_a0.backVector.x = 0.0;
			local_a0.zeroVector.z = local_a0.downVector.z;
			local_a0.oneVector.x = local_a0.downVector.z;
			local_a0.oneVector.y = local_a0.downVector.z;
			local_a0.oneVector.z = local_a0.downVector.z;
			local_a0.upVector.y = fVar7;
			local_a0.forwardVector.x = fVar30;
			local_a0.forwardVector.y = local_a0.downVector.y;
			local_a0.backVector.y = local_a0.downVector.z;
			Il2CppMethodInitialized_0753e72d = true;
			fVar11 = local_a0.forwardVector.x;
			fVar26 = local_a0.forwardVector.y;
			fVar29 = local_a0.forwardVector.z;
			fVar31 = local_a0.backVector.x;
			fVar32 = local_a0.zeroVector.z;
			fVar15 = local_a0.oneVector.x;
			fVar23 = local_a0.oneVector.y;
			fVar25 = local_a0.oneVector.z;
			fVar8 = local_a0.backVector.y;
			fVar9 = local_a0.backVector.z;
			fVar27 = local_a0.positiveInfinityVector.x;
			fVar28 = local_a0.positiveInfinityVector.y;
			fVar13 = local_a0.upVector.x;
			fVar16 = local_a0.upVector.y;
			fVar18 = local_a0.upVector.z;
			fVar20 = local_a0.downVector.x;
		}
		fVar10 = fVar30 * local_a0.downVector.y;
		fVar30 = fVar30 * local_a0.downVector.z;
		local_a0.zeroVector.x = 0.0;
		local_a0.zeroVector.y = 0.0;
		fVar22 = fVar32 * local_a0.leftVector.z;
		fVar24 = fVar15 * local_a0.rightVector.x;
		fVar14 = fVar13 * fVar11;
		fVar17 = fVar16 * fVar26;
		fVar19 = fVar18 * fVar29;
		fVar21 = fVar20 * fVar31;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_a0.zeroVector.z = fVar32 * local_a0.leftVector.z;
			local_a0.oneVector.x = fVar15 * local_a0.rightVector.x;
			local_a0.oneVector.y = fVar23 * local_a0.rightVector.y;
			local_a0.oneVector.z = fVar25 * local_a0.rightVector.z;
			local_a0.upVector.x = fVar13 * fVar11;
			local_a0.upVector.y = fVar16 * fVar26;
			local_a0.upVector.z = fVar18 * fVar29;
			local_a0.downVector.x = fVar20 * fVar31;
			Il2CppMethodInitialized_0753e729 = true;
			fVar22 = local_a0.zeroVector.z;
			fVar24 = local_a0.oneVector.x;
			fVar14 = local_a0.upVector.x;
			fVar17 = local_a0.upVector.y;
			fVar19 = local_a0.upVector.z;
			fVar21 = local_a0.downVector.x;
		}
		fVar10 = fVar10 - fVar22;
		fVar30 = fVar30 - fVar24;
		auVar12._0_4_ = fVar7 * fVar8 - fVar14;
		auVar12._4_4_ = fVar9 * 0.0 - fVar17;
		auVar12._8_4_ = fVar27 * 0.0 - fVar19;
		auVar12._12_4_ = fVar28 * 0.0 - fVar21;
		fVar7 = fVar10 * fVar10 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
		if (fVar7 < 0.0) {
			fVar7 = sqrtf(fVar7);
			fVar30 = extraout_XMM0_Db;
			if (fVar7 <= 1e-05) goto label_05c94920;
	label_05c94998: ;
			fVar10 = fVar10 / fVar7;
			auVar3._4_4_ = fVar7;
			auVar3._0_4_ = fVar7;
			auVar3._8_4_ = fVar30;
			auVar3._12_4_ = fVar30;
			auVar12 = divps(auVar12, auVar3);
			local_a0.zeroVector.x = auVar12._0_4_;
			local_a0.zeroVector.y = auVar12._4_4_;
			pUVar5 = &local_a0;
		}
		else {
			fVar7 = SQRT(fVar7);
			if (1e-05 < fVar7) goto label_05c94998;
	label_05c94920: ;
			pUVar5 = typeof(Vector3).static_fields;
			fVar10 = (pUVar5.zeroVector).z;
		}
		uVar1._0_4_ = (pUVar5.zeroVector).x;
		uVar1._4_4_ = (pUVar5.zeroVector).y;
		value = (Vector3[])new Vector3[8];
		if (value == null) goto label_05c94c4e;
		uVar2 = (uint)value.Length;
		if (uVar2 != 0) {
			fVar26 = local_28 * 0.5;
			fVar7 = local_a0.positiveInfinityVector.z * fVar26;
			fVar11 = local_a0.leftVector.z * fVar26;
			fVar30 = local_a0.rightVector.x * fVar26;
			fVar29 = fVar26 * -0.0 - fVar7;
			fVar31 = -local_a0.downVector.y * fVar26 - fVar11;
			fVar32 = -local_a0.downVector.z * fVar26 - fVar30;
			value[0].x = fVar31;
			value[0].y = fVar32;
			value[0].z = fVar29;
			if (uVar2 != 1) {
				fVar15 = fVar26 * 0.0 - fVar7;
				fVar23 = fVar26 * local_a0.downVector.y - fVar11;
				fVar25 = fVar26 * local_a0.downVector.z - fVar30;
				value[1].x = fVar23;
				value[1].y = fVar25;
				value[1].z = fVar15;
				if (2 < uVar2) {
					fVar27 = fVar26 * 0.0 + fVar7;
					fVar8 = fVar26 * local_a0.downVector.y + fVar11;
					fVar9 = fVar26 * local_a0.downVector.z + fVar30;
					value[2].x = fVar8;
					value[2].y = fVar9;
					value[2].z = fVar27;
					if (uVar2 != 3) {
						fVar11 = fVar11 + -local_a0.downVector.y * fVar26;
						fVar30 = fVar30 + -local_a0.downVector.z * fVar26;
						fVar7 = fVar26 * -0.0 + fVar7;
						value[3].x = fVar11;
						value[3].y = fVar30;
						value[3].z = fVar7;
						if (4 < uVar2) {
							value[4].x = fVar31;
							value[4].y = fVar32;
							value[4].z = fVar29;
							if (uVar2 != 5) {
								value[5].x = fVar23;
								value[5].y = fVar25;
								value[5].z = fVar15;
								if (6 < uVar2) {
									value[6].x = fVar8;
									value[6].y = fVar9;
									value[6].z = fVar27;
									if (uVar2 != 7) {
										value[7].x = fVar11;
										value[7].y = fVar30;
										value[7].z = fVar7;
										value_00 = (Vector3[])new Vector3[8];
										if (value_00 == null) {
	label_05c94c4e: ;
											throw new NullReferenceException();
										}
										uVar2 = (uint)value_00.Length;
										if (uVar2 != 0) {
											value_00[0].x = (float)(undefined4)uVar1;
											value_00[0].y = (float)uVar1._4_4_;
											value_00[0].z = fVar10;
											if (uVar2 != 1) {
												value_00[1].x = (float)(undefined4)uVar1;
												value_00[1].y = (float)uVar1._4_4_;
												value_00[1].z = fVar10;
												if (2 < uVar2) {
													value_00[2].x = (float)(undefined4)uVar1;
													value_00[2].y = (float)uVar1._4_4_;
													value_00[2].z = fVar10;
													if (uVar2 != 3) {
														value_00[3].x = (float)(undefined4)uVar1;
														value_00[3].y = (float)uVar1._4_4_;
														value_00[3].z = fVar10;
														if (4 < uVar2) {
															fVar10 = -fVar10;
															value_00[4].x = (float)(int)(uVar1 ^ 0x8000000080000000);
															value_00[4].y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20) ;
															value_00[4].z = fVar10;
															if (uVar2 != 5) {
																value_00[5].x = (float)(int)(uVar1 ^ 0x8000000080000000);
																value_00[5].y =(float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
																value_00[5].z = fVar10;
																if (6 < uVar2) {
																	value_00[6].x = (float)(int)(uVar1 ^ 0x8000000080000000);
																	value_00[6].y =(float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
																	value_00[6].z = fVar10;
																	if (uVar2 != 7) {
																		value_00[7].x = (float)(int)(uVar1 ^ 0x8000000080000000);
																		value_00[7].y =(float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
																		value_00[7].z = fVar10;
																		__this_00 = new Mesh();
																		if (__this_00 != null) {
																			__this_00.vertices = value;
																			__this_00.normals = value_00;
																			value_01 = (Int32[])new int[0xc];
																			RuntimeHelpers.InitializeArray((Array)value_01, FieldRva_PrivateImplementationDetails_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94F557CF5A);
																			__this_00.triangles = value_01;
																			__this_00.RecalculateBounds();
																			return __this_00;
																		}
																		goto label_05c94c4e;
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
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x5B94C60", Offset = "0x5B93C60", VA = "0x5B94C60", Slot = "7")]
	public override void OnSelectionChange()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$OnSelectionChange): clean
		MapEditorGameManager pGVar1;
		HashSet<MapObject> pSVar2;
		BaseGizmo x;
		bool bVar3;
		GameObject pUVar4;

		pGVar1 = this._gameManager;
		if ((pGVar1 != null) &&(pSVar2 = pGVar1.SelectedObjects, pSVar2 != null)) {
			if (0 < pSVar2._count) {
				x = pGVar1.CurrentGizmo;
				bVar3 = ((Object)x == (Object)this);
				if (bVar3) {
					pUVar4 = this.gameObject;
					if (pUVar4 != null) {
						pUVar4.SetActive(true);
						this.ResetCenter();
						this.ResetColors();
						return;
					}
					goto label_05c94d33;
				}
			}
			pUVar4 = this.gameObject;
			if (pUVar4 != null) {
				pUVar4.SetActive(false);
				return;
			}
		}
	label_05c94d33: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x5B95030", Offset = "0x5B94030", VA = "0x5B95030", Slot = "6")]
	protected override void Update()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$Update): 267 lines keep C-only constructs
		Transform* targetAddress;
		Plane pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		int iVar9;
		InputSettings pSVar10;
		MapEditorInputSettings pSVar11;
		KeybindSetting selectKey;
		KeybindSetting __this_00;
		MapEditorGameManager pGVar12;
		HashSet<MapObject> pSVar13;
		Transform pUVar14;
		MapEditorSettings pSVar15;
		FloatSetting pSVar16;
		byte[] auVar17 = new byte[16];
		Ray ray;
		Ray ray_00;
		Vector3 pos;
		Vector3 pos_00;
		Vector3 pos_01;
		ulong uVar18;
		_union_14 _Var19;
		bool bVar20;
		bool bVar21;
		sbyte cVar22;
		LayerMask mask;
		int layerMask;
		GameObject pUVar23;
		Int32[] layers;
		Object x;
		Collider __this_01;
		Transform pUVar24;
		List<MapObject> mapObjects;
		MethodInfo pMVar25;
		MethodInfo pMVar27;
		PositionGizmo __this_02;
		float fVar28;
		float fVar29;
		float fVar30;
		ulong uVar31;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		float extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dd;
		float fVar32;
		uint extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		float extraout_XMM0_Dd_04;
		float fVar33;
		float extraout_XMM1_Da;
		float extraout_XMM1_Da_00;
		ulong extraout_XMM1_Qa;
		uint uVar38;
		uint uVar39;
		byte[] auVar34 = new byte[16];
		ulong extraout_XMM1_Qb;
		byte[] auVar35 = new byte[16];
		byte[] auVar36 = new byte[16];
		byte[] auVar37 = new byte[16];
		float fVar40;
		float fVar41;
		float fVar42;
		Quaternion value;
		Vector3 UVar43;
		Vector3 UVar44;
		Vector3 drag;
		Vector3 frameDelta;
		float fStack_218;
		float fStack_214;
		ulong uStack_208;
		ulong uStack_1f8;
		float fStack_1f0;
		byte[] auStack_1e8 = new byte[8];
		float fStack_1e0;
		float fStack_1dc;
		Ray UStack_1d0;
		byte[] auStack_1b8 = new byte[8];
		float fStack_1b0;
		float fStack_1ac;
		float fStack_19c;
		Vector2 UStack_198;
		float fStack_190;
		byte[] auStack_188 = new byte[8];
		float fStack_180;
		InvokerMethod pIStack_178;
		float fStack_170;
		float fStack_168;
		float fStack_164;
		byte[] auStack_158 = new byte[8];
		ulong uStack_140;
		float fStack_138;
		Vector3 UStack_130;
		Vector3 UStack_120;
		Vector3 UStack_110;
		byte[] auStack_100 = new byte[8];
		byte[] auStack_f8 = new byte[16];
		ulong uStack_e8;
		float fStack_e0;
		float fStack_dc;
		Il2CppType pIStack_d8;
		float fStack_d0;
		float fStack_cc;
		_union_13 _Stack_c8;
		_union_14 _Stack_c0;
		Vector3 UStack_a8;
		RaycastHit UStack_98;
		RaycastHit UStack_68;

		UStack_110.z = 0.0;
		UStack_110.x = 0.0;
		UStack_110.y = 0.0;
		auStack_100 = (byte[])0x0;
		UStack_120.z = 0.0;
		UStack_120.x = 0.0;
		UStack_120.y = 0.0;
		UStack_98.m_UV.x = 0.0;
		UStack_98.m_UV.y = 0.0;
		UStack_98.m_Collider.m_Data = (EntityId)0x0;
		UStack_98.m_Normal.y = 0.0;
		UStack_98.m_Normal.z = 0.0;
		UStack_98.m_FaceID = 0;
		UStack_98.m_Distance = 0.0;
		UStack_98.m_Point.x = 0.0;
		UStack_98.m_Point.y = 0.0;
		UStack_98.m_Point.z = 0.0;
		UStack_98.m_Normal.x = 0.0;
		fStack_190 = 0.0;
		UStack_198.x = 0.0;
		UStack_198.y = 0.0;
		pIStack_d8 = null;
		fStack_d0 = 0.0;
		fStack_cc = 0.0;
		_Stack_c8.rgctx_data = null;
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
		fStack_170 = 0.0;
		pIStack_178 = (InvokerMethod)0x0;
		fStack_19c = 0.0;
		UStack_130.z = 0.0;
		UStack_130.x = 0.0;
		UStack_130.y = 0.0;
		fStack_180 = 0.0;
		auStack_188 = (byte[])0x0;
		uStack_140._0_4_ = 0;
		uStack_140._4_2_ = 0;
		uStack_140._6_2_ = 0;
		fStack_1f0 = 0.0;
		uStack_1f8._0_4_ = 0.0;
		uStack_1f8._4_4_ = 0.0;
		this.Update();
		pSVar10 = SettingsManager.InputSettings;
		auVar34 = _auStack_1b8;
		uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
		if (pSVar10 == null) goto label_05c96730;
		pSVar11 = pSVar10.MapEditor;
		uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
		if (pSVar11 == null) goto label_05c96730;
		pMVar27 = (MethodInfo)SceneLoader.CurrentCamera;
		selectKey = pSVar11.Select;
		__this_00 = pSVar11.VertexSnap;
		pUVar24 = this._activeLine;
		pMVar25 = pMVar27;
		bVar20 = ((Object)pUVar24 == null);
		if (bVar20) {
			pUVar24 = this._centerSquare;
			bVar20 = ((Object)pUVar24 != null);
			if (bVar20) {
				auVar34 = _auStack_1b8;
				uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
				if (__this_00 == null) goto label_05c96730;
				bVar20 = false;
				bVar21 = __this_00.GetKey(false);
				auVar34 = _auStack_1b8;
				if (bVar21) {
					pGVar12 = this._gameManager;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pGVar12 == null) goto label_05c96730;
					pSVar13 = pGVar12.SelectedObjects;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pSVar13 == null) goto label_05c96730;
					bVar20 = 0 < pSVar13._count;
				}
				pUVar24 = this._centerSquare;
				uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
				if (pUVar24 == null) goto label_05c96730;
				pUVar23 = pUVar24.gameObject;
				auVar34 = _auStack_1b8;
				uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
				if (pUVar23 == null) goto label_05c96730;
				pUVar23.SetActive(bVar20);
				pUVar24 = this._planeXY;
				bVar21 = ((Object)pUVar24 != null);
				if (bVar21) {
					pUVar24 = this._planeXY;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar24 == null) goto label_05c96730;
					pUVar23 = pUVar24.gameObject;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar23 == null) goto label_05c96730;
					pUVar23.SetActive(!bVar20);
				}
				pUVar24 = this._planeYZ;
				bVar21 = ((Object)pUVar24 != null);
				if (bVar21) {
					pUVar24 = this._planeYZ;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar24 == null) goto label_05c96730;
					pUVar23 = pUVar24.gameObject;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar23 == null) goto label_05c96730;
					pUVar23.SetActive(!bVar20);
				}
				pUVar24 = this._planeXZ;
				bVar21 = ((Object)pUVar24 != null);
				if (bVar21) {
					pUVar24 = this._planeXZ;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar24 == null) goto label_05c96730;
					pUVar23 = pUVar24.gameObject;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar23 == null) goto label_05c96730;
					pUVar23.SetActive(!bVar20);
				}
				if (bVar20) {
					pMVar25 = (MethodInfo)auStack_100;
					bVar20 = this.TryFindClosestVertexOnSelection((BaseCamera)pMVar27, ref UStack_110, (Transform*)pMVar25, ref UStack_120);
					if (bVar20) {
						pUVar24 = this._transform;
						auVar34 = _auStack_1b8;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (pUVar24 == null) goto label_05c96730;
						UVar43.z = UStack_110.z;
						UVar43.x = UStack_110.x;
						UVar43.y = UStack_110.y;
						pUVar24.position = UVar43;
						this._snapAnchorTransform = (Transform)auStack_100;
						this._snapAnchorLocal.z = UStack_120.z;
						this._snapAnchorLocal.x = UStack_120.x;
						this._snapAnchorLocal.y = UStack_120.y;
						this._hasSnapAnchor = true;
					}
					pUVar24 = this._centerSquare;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar24 == null) goto label_05c96730;
					UVar43 = pUVar24.position;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pMVar27 == null) goto label_05c96730;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if ((BaseComponentCache)pMVar27.return_type == null) goto label_05c96730;
					auStack_1e8._0_4_ = UVar43.z;
					pUVar14 = (((BaseComponentCache)pMVar27.return_type).fields).Transform;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar14 == null) goto label_05c96730;
					UVar44 = pUVar14.position;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if ((BaseComponentCache)pMVar27.return_type == null) goto label_05c96730;
					pUVar14 = (((BaseComponentCache)pMVar27.return_type).fields).Transform;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar14 == null) goto label_05c96730;
					uStack_208._0_4_ = UVar43.x;
					uStack_208._4_4_ = UVar43.y;
					uStack_208 = (Il2CppType)CONCAT44(uStack_208._4_4_ - UVar44.y, (float)uStack_208 - UVar44.x);
					auStack_1e8._0_4_ = (float)auStack_1e8._0_4_ - UVar44.z;
					UVar43 = pUVar14.up;
					UStack_a8.z = UVar43.z;
					UStack_1d0.m_Origin._0_8_ = uStack_208;
					UStack_1d0.m_Origin.z = (float)auStack_1e8._0_4_;
					UStack_a8._0_8_ = UVar43._0_8_;
					value = Quaternion.Internal_LookRotation(ref UStack_1d0, ref UStack_a8);
					pUVar24.rotation = value;
				}
				else {
					this._hasSnapAnchor = false;
					this._snapAnchorTransform = null;
					this.ResetCenter();
				}
			}
		}
		targetAddress = &this._activeLine;
		pUVar24 = *targetAddress;
		bVar20 = ((Object)pUVar24 == null);
		if (bVar20) {
			bVar20 = this.TryGetPointerDown(selectKey, ref UStack_198);
			if (!bVar20) {
				return;
			}
			auVar34 = _auStack_1b8;
			uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
			if (pMVar27 != null) {
				uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
				if (pMVar27.klass != null) {
					UVar44.z = fStack_190;
					UVar44.x = UStack_198.x;
					UVar44.y = UStack_198.y;
					UStack_1d0 = (pMVar27.klass).ScreenPointToRay(UVar44);
					layers = (Int32[])new int[1];
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (layers != null) {
						if ((int)layers.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						layers[0] = PhysicsLayer.MapEditorGizmo;
						mask = PhysicsLayer.GetMask(layers);
						layerMask = ((LayerMask)mask);
						ray.m_Direction.z = UStack_1d0.m_Direction.z;
						ray.m_Direction.y = UStack_1d0.m_Direction.y;
						ray.m_Origin.z = UStack_1d0.m_Origin.z;
						ray.m_Origin.x = UStack_1d0.m_Origin.x;
						ray.m_Origin.y = UStack_1d0.m_Origin.y;
						ray.m_Direction.x = UStack_1d0.m_Direction.x;
						bVar20 = Physics.Raycast(ray, ref UStack_98, 100000.0, layerMask);
						if (!bVar20) {
							if (Il2CppMethodInitialized_075479e9 == false) {
								Il2CppMethodInitialized_075479e9 = true;
								uVar8 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
							}
							else {
								uVar8 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
							}
							if (uVar8 == 0) {
								bVar20 = MobileMapEditorPointer.Enabled;
							}
							else {
								bVar20 = MobileMapEditorPointer.Enabled;
							}
							if (bVar20) {
								if (((typeof(MobileMapEditorPointer))._2).cctor_finished_or_no_cctor == 0) {
								}
								MobileMapEditorPointer.CancelGizmoPointer();
							}
							return;
						}
						auVar34 = _auStack_1b8;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (__this_00 != null) {
							bVar20 = __this_00.GetKey(false);
							if (bVar20) {
								pUVar24 = this._centerSquare;
								bVar20 = ((Object)pUVar24 != null);
								if (bVar20) {
									pUVar24 = this._centerSquare;
									auVar34 = _auStack_1b8;
									uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
									if (pUVar24 == null) goto label_05c96730;
									pUVar23 = pUVar24.gameObject;
									auVar34 = _auStack_1b8;
									uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
									if (pUVar23 == null) goto label_05c96730;
									bVar20 = pUVar23.activeSelf;
									if (bVar20) {
										pUVar24 = this._centerSquare;
										auVar34 = _auStack_1b8;
										uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
										if (pUVar24 == null) goto label_05c96730;
										x = (Object)pUVar24.GetComponent<Collider>() ;
										auVar34 = _auStack_1b8;
										uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
										if (pMVar27.klass == null) goto label_05c96730;
										pos.z = fStack_190;
										pos.x = UStack_198.x;
										pos.y = UStack_198.y;
										UStack_1d0 = (pMVar27.klass).ScreenPointToRay(pos);
										_Stack_c8._4_4_ = UStack_1d0.m_Direction.z;
										_Stack_c8._0_4_ = UStack_1d0.m_Direction.y;
										fStack_d0 = UStack_1d0.m_Origin.z;
										fStack_cc = UStack_1d0.m_Direction.x;
										pIStack_d8 = (Il2CppType)UStack_1d0.m_Origin._0_8_;
										bVar20 = (x != null);
										if (bVar20) {
											auVar34 = _auStack_1b8;
											uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
											if (x == null) goto label_05c96730;
											ray_00.m_Origin.z = fStack_d0;
											ray_00.m_Origin._0_8_ = pIStack_d8;
											ray_00.m_Direction.x = fStack_cc;
											ray_00.m_Direction._4_8_ = _Stack_c8.rgctx_data;
											bVar20 = x.Raycast(ray_00, ref UStack_68, 100000.0);
											if (bVar20) {
												UStack_98.m_UV.x = UStack_68.m_UV.x;
												UStack_98.m_UV.y = UStack_68.m_UV.y;
												UStack_98.m_Collider.m_Data = UStack_68.m_Collider.m_Data;
												UStack_98.m_Normal.y = UStack_68.m_Normal.y;
												UStack_98.m_Normal.z = UStack_68.m_Normal.z;
												UStack_98.m_FaceID = UStack_68.m_FaceID;
												UStack_98.m_Distance = UStack_68.m_Distance;
												UStack_98.m_Point.x = UStack_68.m_Point.x;
												UStack_98.m_Point.y = UStack_68.m_Point.y;
												UStack_98.m_Point.z = UStack_68.m_Point.z;
												UStack_98.m_Normal.x = UStack_68.m_Normal.x;
											}
										}
									}
								}
							}
							__this_01 = UStack_98.collider;
							auVar34 = _auStack_1b8;
							uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
							if (__this_01 != null) {
								pUVar24 = __this_01.transform;
								this._activeLine = pUVar24;
								pUVar24 = this._planeXY;
								pUVar14 = this._activeLine;
								bVar20 = ((Object)pUVar14 == (Object)pUVar24);
								bVar21 = true;
								if (!bVar20) {
									pUVar24 = this._planeYZ;
									pUVar14 = this._activeLine;
									bVar20 = ((Object)pUVar14 == (Object)pUVar24);
									if (!bVar20) {
										pUVar24 = this._planeXZ;
										pUVar14 = this._activeLine;
										bVar21 = ((Object)pUVar14 == (Object)pUVar24);
									}
								}
								this._activeIsPlane = bVar21;
								pMVar25 = (MethodInfo)this._centerSquare;
								pUVar24 = this._activeLine;
								bVar20 = ((Object)pUVar24 == (Object)pMVar25);
								this._activeIsCenter = bVar20;
								__this_02 = this;
								this.ResetColors();
								fVar28 = this.SelectedColor.a;
								uVar38 = 0;
								uVar39 = 0;
								__this_02.SetLineColor(this._activeLine, (Color)this.SelectedColor);
								UVar43 = UStack_98.point;
								this._previousMousePoint.x = UVar43.x;
								this._previousMousePoint.y = UVar43.y;
								this._previousMousePoint.z = UVar43.z;
								if (this._activeIsPlane != false) {
									UVar43 = this.GetPlaneNormal(this._activeLine);
									fVar29 = UVar43.z;
									auVar17._8_4_ = extraout_XMM0_Dc;
									auVar17._0_8_ = UVar43._0_8_;
									auVar17._12_4_ = extraout_XMM0_Dd;
									pUVar24 = this._transform;
									auVar34 = _auStack_1b8;
									uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
									if (pUVar24 == null) goto label_05c96730;
									UVar44 = pUVar24.position;
									auStack_158 = (byte[])UVar44._0_8_;
									auStack_1e8._4_4_ = fVar28;
									auStack_1e8._0_4_ = UVar44.z;
									fStack_1e0 = (float)uVar38;
									fStack_1dc = (float)uVar39;
									fStack_218 = UVar43.x;
									fStack_214 = UVar43.y;
									fVar28 = fVar29 * fVar29 + fStack_214 * fStack_214 + fStack_218 * fStack_218;
									if (fVar28 < 0.0) {
										fVar28 = sqrtf(fVar28);
									}
									else {
										fVar28 = SQRT(fVar28);
									}
									fVar40 = 0.0;
									uVar31 = 0;
									if (1e-05 < fVar28) {
										fVar40 = fVar29 / fVar28;
										auVar34._4_4_ = fVar28;
										auVar34._0_4_ = fVar28;
										auVar34._8_4_ = fVar28;
										auVar34._12_4_ = fVar28;
										auVar34 = divps(auVar17, auVar34);
										uVar31 = auVar34._0_8_;
									}
									pUVar1 = &this._dragPlane;
									pUVar1.m_Normal.x = (float)(int)uVar31;
									pUVar1.m_Normal.y = (float)(int)((ulong)uVar31 >> 0x20);
									this._dragPlane.m_Normal.z = fVar40;
									this._dragPlane.m_Distance = -((float)auStack_1e8._0_4_ * fVar40 +(float)auStack_158._4_4_ * (float)((ulong)uVar31 >> 0x20) +(float)auStack_158._0_4_ * (float)uVar31);
								}
								this._axisSnapDirection = 0;
								this._axisSnapStartMouse = UStack_198;
								pGVar12 = this._gameManager;
								auVar34 = _auStack_1b8;
								uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
								if (pGVar12 != null) {
									pGVar12.SetupTemporaryPhysicalParenting();
									return;
								}
							}
						}
					}
				}
			}
			goto label_05c96730;
		}
		bVar20 = this.IsPointerHeld(selectKey, ref pIStack_178) ;
		auVar34 = _auStack_1b8;
		if (bVar20) {
			uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
			if (__this_00 == null) goto label_05c96730;
			bVar21 = __this_00.GetKey(false);
			bVar20 = this._activeIsCenter;
			pMVar25 = (MethodInfo)(ulong)bVar20;
			if (bVar21) {
				this._vertexSnapActive = true;
				if (bVar20 != false) goto label_05c95c32;
				pUVar24 = this._lineX;
				pUVar14 = this._activeLine;
				bVar20 = ((Object)pUVar14 == (Object)pUVar24);
				if (!bVar20) {
					pUVar24 = this._lineY;
					pUVar14 = this._activeLine;
					bVar20 = ((Object)pUVar14 == (Object)pUVar24) ;
					if (!bVar20) {
						pUVar24 = this._lineZ;
						pUVar14 = this._activeLine;
						bVar20 = ((Object)pUVar14 == (Object)pUVar24);
						if (!bVar20) {
							if (this._vertexSnapActive == false) goto label_05c95e32;
							this.DoVertexSnap((BaseCamera)pMVar27);
							goto label_05c95c3f;
						}
					}
				}
				this.DoAxisSurfaceSnap((BaseCamera)pMVar27);
			}
			else {
				this._vertexSnapActive = bVar20;
				if (bVar20 == false) {
	label_05c95e32: ;
					auVar34 = _auStack_1b8;
					if (this._activeIsPlane == false) {
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (pMVar27 == null) goto label_05c96730;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (pMVar27.klass == null) goto label_05c96730;
						pos_01.z = fStack_170;
						pos_01._0_8_ = pIStack_178;
						UStack_1d0 = (pMVar27.klass).ScreenPointToRay(pos_01);
						auStack_158._0_4_ = UStack_1d0.m_Origin.x;
						auStack_158._4_4_ = UStack_1d0.m_Origin.y;
						_auStack_1b8 = ZEXT416((uint)UStack_1d0.m_Origin.z);
						fStack_168 = UStack_1d0.m_Direction.y;
						fStack_164 = UStack_1d0.m_Direction.y;
						uVar3 = this._previousMousePoint.x;
						uVar6 = this._previousMousePoint.y;
						fStack_138 = this._previousMousePoint.z - UStack_1d0.m_Origin.z;
						uStack_140._4_4_ = (float)uVar6 - UStack_1d0.m_Origin.y;
						uStack_140._0_4_ = (uint32_t)((float)uVar3 - UStack_1d0.m_Origin.x);
						fVar28 = (float)il2cpp_runtime_helper_059d7e70(UStack_1d0.m_Direction.x, 0);
						auStack_f8._0_4_ = fVar28 * 0.017453292;
						uStack_e8 = (sbyte)il2cpp_runtime_helper_0599adc0(&uStack_140, 0);
						fVar28 = cosf((float)auStack_f8._0_4_);
						fVar28 = (float)uStack_e8 / fVar28;
						uVar38 = auStack_158._0_4_;
						auStack_158._0_4_ = (float)auStack_158._4_4_ + fStack_168 * fVar28;
						uVar4 = this._previousMousePoint.x;
						uVar7 = this._previousMousePoint.y;
						fStack_168 = (float)auStack_158._0_4_ - (float)uVar7;
						uStack_e8._0_4_ = fVar28 * (float)auStack_1e8._0_4_ + (float)auStack_1b8._0_4_;
						uStack_e8._4_4_ = fVar28 * UStack_1d0.m_Direction.x + (float)uVar38;
						fStack_e0 = fVar28 * (float)auStack_1e8._4_4_ + (float)auStack_1b8._4_4_;
						fStack_dc = fVar28 * UStack_1d0.m_Direction.y + (float)auStack_158._4_4_;
						fVar28 = (float)uStack_e8 - this._previousMousePoint.z;
						fVar29 = uStack_e8._4_4_ - (float)uVar4;
						fVar40 = fStack_e0 - 0.0;
						fVar32 = fStack_dc - (float)uVar7;
						pUVar24 = this._lineY;
						pUVar14 = this._activeLine;
						fStack_164 = (float)auStack_158._4_4_;
						auStack_1e8._4_4_ = fStack_164;
						auStack_1e8._0_4_ = fStack_168;
						fStack_1e0 = fVar29;
						fStack_1dc = fVar32;
						bVar20 = ((Object)pUVar14 != (Object)pUVar24);
						if (bVar20) {
							auStack_1b8 = (byte[])il2cpp_runtime_helper_059d80e0(&uStack_140);
							auVar34 = _auStack_1b8;
							uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
							if ((BaseComponentCache)pMVar27.return_type == null) goto label_05c96730;
							fStack_1b0 = (float)extraout_XMM0_Dc_01;
							fStack_1ac = (float)extraout_XMM0_Dd_01;
							pUVar24 = (((BaseComponentCache)pMVar27.return_type).fields).Transform;
							auVar34 = _auStack_1b8;
							uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
							if (pUVar24 == null) goto label_05c96730;
							UVar43 = pUVar24.up;
							fVar30 = UVar43.x * fVar29 + fStack_168 * UVar43.y + UVar43.z * fVar28;
							fStack_1e0 = fStack_1e0 + (float)auStack_1b8._0_4_ * fVar30 + (float)auStack_1b8._0_4_ * fVar30;
							auStack_1e8._0_4_ =(float)auStack_1e8._0_4_ +(float)auStack_1b8._4_4_ * fVar30 + (float)auStack_1b8._4_4_ * fVar30;
							fVar29 = fVar40 + fStack_1b0 * fVar30 + fStack_1b0 * fVar30;
							fVar28 = fVar28 + extraout_XMM1_Da * fVar30 + extraout_XMM1_Da * fVar30;
							fStack_1dc = fVar32 + fStack_1ac * fVar30 + fStack_1ac * fVar30;
						}
						else {
							fStack_1dc = fVar29;
						}
						auStack_1e8._4_4_ = auStack_1e8._0_4_;
						auStack_1e8._0_4_ = fStack_1e0;
						fStack_1e0 = fVar29;
						auVar34 = _auStack_1b8;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (*targetAddress == null) goto label_05c96730;
						UVar43 = (*targetAddress).right;
						fStack_168 = UVar43.z;
						auVar34 = _auStack_1b8;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (*targetAddress == null) goto label_05c96730;
						pMVar27 = null;
						UVar44 = (*targetAddress).right;
						auStack_f8._8_4_ = extraout_XMM0_Dc_03;
						auStack_f8._0_8_ = UVar44._0_8_;
						auStack_f8._12_4_ = extraout_XMM0_Dd_03;
						auStack_1b8._0_4_ = UVar44.z;
						uVar31 = il2cpp_runtime_helper_05b8d690(0);
						fVar40 = (float)((ulong)uVar31 >> 0x20);
						auVar35._8_8_ = extraout_XMM1_Qb;
						auVar35._0_8_ = extraout_XMM1_Qa;
						fVar29 = (float)extraout_XMM1_Qa;
						pGVar12 = this._gameManager;
						fStack_1f0 = fVar29;
						auVar34 = _auStack_1b8;
						uStack_1f8 = uVar31;
						if (pGVar12 == null) goto label_05c96730;
						fVar28 = fVar28 * (float)auStack_1b8._0_4_ +(float)auStack_1e8._4_4_ * (float)auStack_f8._4_4_ +(float)auStack_1e8._0_4_ * (float)auStack_f8._0_4_;
						fVar32 = fStack_168 * fVar28;
						fStack_218 = UVar43.x;
						fStack_214 = UVar43.y;
						fStack_218 = fStack_218 * fVar28;
						fStack_214 = fStack_214 * fVar28;
						uVar18 = CONCAT44(fStack_214, fStack_218);
						iVar9 = pGVar12.CurrentGizmoMode;
						if (iVar9 == 1) {
							auVar35 = ZEXT416((uint)fVar32);
							fVar30 = extraout_XMM0_Dc_02 * fVar28;
							fVar33 = extraout_XMM0_Dd_02 * fVar28;
							fVar40 = fStack_214;
							fVar41 = fStack_214;
							fVar42 = fStack_214;
							fStack_1f0 = fVar32;
							uStack_1f8._4_4_ = fStack_214;
							uVar31 = uVar18;
						}
						else {
							fVar30 = extraout_XMM0_Dc_04;
							fVar33 = extraout_XMM0_Dd_04;
							fVar41 = fVar40;
							fVar42 = fVar40;
							uStack_1f8._4_4_ = fVar40;
							uVar18 = uVar31;
							if (iVar9 == 0) {
								auStack_1e8._4_4_ = fVar40;
								auStack_1e8._0_4_ = fVar40;
								fStack_1e0 = fVar40;
								fStack_1dc = fVar40;
								fStack_1b0 = extraout_XMM0_Dc_04;
								auStack_1b8 = (byte[])uVar31;
								fStack_1ac = extraout_XMM0_Dd_04;
								pMVar27 = (MethodInfo)this._lineX;
								pUVar24 = this._activeLine;
								fStack_168 = fVar32;
								bVar20 = ((Object)pUVar24 == (Object)pMVar27);
								if (bVar20) {
									auVar35 = ZEXT416((uint)fVar29);
									fVar30 = extraout_XMM0_Dc_02 * fVar28;
									fVar33 = extraout_XMM0_Dd_02 * fVar28;
									fVar40 = (float)auStack_1e8._4_4_;
									fVar41 = fStack_1e0;
									fVar42 = fStack_1dc;
									uVar18 = CONCAT44(fStack_214, fStack_218);
									uVar31 = CONCAT44(auStack_1e8._0_4_, fStack_218);
								}
								else {
									pMVar27 = (MethodInfo)this._lineY;
									pUVar24 = this._activeLine;
									bVar20 = ((Object)pUVar24 == (Object)pMVar27);
									if (bVar20) {
										auVar35 = ZEXT416((uint)fVar29);
										uVar18 = auStack_1b8;
										fVar30 = fStack_1b0;
										fVar33 = fStack_1ac;
										fVar40 = fStack_214;
										fVar41 = fStack_214;
										fVar42 = fStack_214;
										uStack_1f8._4_4_ = fStack_214;
										uVar31 = CONCAT44(fStack_214, (float)uStack_1f8);
									}
									else {
										pMVar27 = (MethodInfo)this._lineZ;
										pUVar24 = this._activeLine;
										bVar20 = ((Object)pUVar24 == (Object)pMVar27);
										if (bVar20) {
											fStack_1f0 = fStack_168;
											fVar29 = fStack_168;
										}
										auVar35 = ZEXT416((uint)fVar29);
										uVar18 = auStack_1b8;
										fVar30 = fStack_1b0;
										fVar33 = fStack_1ac;
										fVar40 = (float)auStack_1e8._4_4_;
										fVar41 = fStack_1e0;
										fVar42 = fStack_1dc;
										uVar31 = CONCAT44(auStack_1e8._0_4_, (float)uStack_1f8);
									}
								}
							}
						}
						uStack_1f8._0_4_ = (float)uVar31;
						pGVar12 = this._gameManager;
						auVar34 = _auStack_1b8;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (pGVar12 == null) goto label_05c96730;
						if (pGVar12.Snap == false) {
	label_05c966cc: ;
							this._previousMousePoint.x = uStack_e8._4_4_;
							this._previousMousePoint.y = (float)auStack_158._0_4_;
							this._previousMousePoint.z = (float)uStack_e8;
						}
						else {
							iVar9 = pGVar12.CurrentGizmoMode;
							if (iVar9 == 1) {
								pSVar15 = SettingsManager.MapEditorSettings;
								uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
								if (pSVar15 == null) goto label_05c96730;
								pSVar16 = pSVar15.SnapMove;
								uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
								if (pSVar16 == null) goto label_05c96730;
								fVar28 = pSVar16._value;
								fVar29 = (float)il2cpp_runtime_helper_0599adc0(&uStack_1f8);
								fVar29 = (float)il2cpp_runtime_helper_02fdaa70(fVar29 / fVar28);
								fVar29 = fVar29 * fVar28;
								uVar31 = il2cpp_runtime_helper_059d80e0(&uStack_1f8);
								uStack_1f8._0_4_ = fVar29 * (float)uVar31;
								uStack_1f8._4_4_ = fVar29 * (float)((ulong)uVar31 >> 0x20);
								fStack_1f0 = extraout_XMM1_Da_00 * fVar29;
							}
							else {
								if (iVar9 != 0) goto label_05c966cc;
								pSVar15 = SettingsManager.MapEditorSettings;
								uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
								if (pSVar15 == null) goto label_05c96730;
								auStack_1e8._4_4_ = fVar40;
								auStack_1e8._0_4_ = (int)((ulong)uVar31 >> 0x20);
								fStack_1e0 = fVar41;
								fStack_1dc = fVar42;
								fStack_1b0 = fVar30;
								auStack_1b8 = (byte[])uVar18;
								fStack_1ac = fVar33;
								fVar29 = auVar35._0_4_;
								pSVar16 = pSVar15.SnapMove;
								auVar34 = _auStack_1b8;
								uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
								if (pSVar16 == null) goto label_05c96730;
								fVar28 = pSVar16._value;
								pUVar24 = this._lineX;
								pUVar14 = this._activeLine;
								bVar20 = ((Object)pUVar14 == (Object)pUVar24);
								if (bVar20) {
									pUVar24 = this._transform;
									auVar34 = _auStack_1b8;
									uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
									if (pUVar24 == null) goto label_05c96730;
									UVar43 = pUVar24.position;
									auVar36._4_12_ = auVar35._4_12_;
									auVar36._0_4_ = UVar43.z;
									fVar29 = (float)il2cpp_runtime_helper_02fdaa70((UVar43.x + (float)auStack_1b8._0_4_) / fVar28, auVar36._0_8_);
									pUVar24 = this._transform;
									auVar34 = _auStack_1b8;
									uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
									if (pUVar24 == null) goto label_05c96730;
									UVar43 = pUVar24.position;
									uStack_1f8._0_4_ = fVar29 * fVar28 - UVar43.x;
								}
								else {
									pUVar24 = this._lineY;
									pUVar14 = this._activeLine;
									bVar20 = ((Object)pUVar14 == (Object)pUVar24);
									if (bVar20) {
										pUVar24 = this._transform;
										auVar34 = _auStack_1b8;
										uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
										if (pUVar24 == null) goto label_05c96730;
										UVar43 = pUVar24.position;
										auVar37._4_12_ = auVar35._4_12_;
										auVar37._0_4_ = UVar43.z;
										fVar29 = (float)il2cpp_runtime_helper_02fdaa70((UVar43.y + (float)auStack_1e8._0_4_) / fVar28, auVar37._0_8_);
										pUVar24 = this._transform;
										auVar34 = _auStack_1b8;
										uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
										if (pUVar24 == null) goto label_05c96730;
										UVar43 = pUVar24.position;
										uStack_1f8._4_4_ = fVar29 * fVar28 - UVar43.y;
									}
									else {
										pUVar24 = this._lineZ;
										pUVar14 = this._activeLine;
										bVar20 = ((Object)pUVar14 == (Object)pUVar24);
										if (bVar20) {
											pUVar24 = this._transform;
											auVar34 = _auStack_1b8;
											uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
											if (pUVar24 == null) goto label_05c96730;
											UVar43 = pUVar24.position;
											fVar29 = (float)il2cpp_runtime_helper_02fdaa70((fVar29 + UVar43.z) / fVar28);
											pUVar24 = this._transform;
											auVar34 = _auStack_1b8;
											uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
											if (pUVar24 == null) goto label_05c96730;
											UVar43 = pUVar24.position;
											fStack_1f0 = fVar29 * fVar28 - UVar43.z;
										}
									}
								}
							}
							pMVar27 = null;
							fVar29 = (float)il2cpp_runtime_helper_0599adc0(&uStack_1f8);
							if (fVar28 <= fVar29) goto label_05c966cc;
						}
						fVar29 = (float)uStack_1f8;
						fVar40 = uStack_1f8._4_4_;
						fVar28 = fStack_1f0;
					}
					else {
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (pMVar27 == null) goto label_05c96730;
						uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
						if (pMVar27.klass == null) goto label_05c96730;
						pos_00.z = fStack_170;
						pos_00._0_8_ = pIStack_178;
						UStack_1d0 = (pMVar27.klass).ScreenPointToRay(pos_00);
						fVar28 = UStack_1d0.m_Origin.z;
						auStack_158._4_4_ = UStack_1d0.m_Direction.y;
						auStack_158._0_4_ = UStack_1d0.m_Direction.x;
						_Stack_c0.genericMethod = (IntPtr)UStack_1d0.m_Origin._0_8_;
						_Var19.genericMethod = _Stack_c0.genericMethod;
						auStack_1e8._0_4_ = UStack_1d0.m_Direction.z;
						_Stack_c0._0_4_ = UStack_1d0.m_Origin.x;
						uVar38 = _Stack_c0._0_4_;
						_Stack_c0._4_4_ = UStack_1d0.m_Origin.y;
						uVar39 = _Stack_c0._4_4_;
						_Stack_c0.genericMethod = _Var19.genericMethod;
						cVar22 = il2cpp_runtime_helper_05c9a0c0(&this._dragPlane, &fStack_19c, 0);
						if (cVar22 == false) goto label_05c95c3f;
						fVar29 = fStack_19c * (float)auStack_158._0_4_ + (float)uVar38;
						fVar40 = fStack_19c * (float)auStack_158._4_4_ + (float)uVar39;
						UStack_130.z = fVar28 + (float)auStack_1e8._0_4_ * fStack_19c;
						UStack_130.y = fVar40;
						UStack_130.x = fVar29;
						uVar2 = this._previousMousePoint.x;
						uVar5 = this._previousMousePoint.y;
						drag.x = fVar29 - (float)uVar2;
						drag.y = fVar40 - (float)uVar5;
						drag.z = UStack_130.z - this._previousMousePoint.z;
						UVar43 = this.ProjectDragOntoPlaneHandle(drag, this._activeLine);
						fStack_180 = UVar43.z;
						auStack_188 = UVar43._0_8_;
						pMVar27 = (MethodInfo)auStack_188;
						this.ApplySnap((Vector3)pMVar27, ref UStack_130);
						fVar29 = auStack_188._0_4_;
						fVar40 = auStack_188._4_4_;
						fVar28 = fStack_180;
					}
					frameDelta.y = fVar40;
					frameDelta.x = fVar29;
					frameDelta.z = fVar28;
					this.MoveSelectedObjects(frameDelta);
					this.ResetCenter();
				}
				else {
	label_05c95c32: ;
					this.DoFreeDragVertexSnap((BaseCamera)pMVar27);
				}
			}
	label_05c95c3f: ;
			if ((this._vertexSnapActive != false) && (this._hasSnapAnchor != false)) {
				pUVar24 = this._snapAnchorTransform;
				bVar20 = ((Object)pUVar24 != null);
				if (bVar20) {
					pUVar24 = this._snapAnchorTransform;
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar24 == null) goto label_05c96730;
					pUVar14 = this._transform;
					UVar43 = pUVar24.TransformPoint((Vector3)this._snapAnchorLocal);
					auVar34 = _auStack_1b8;
					uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
					if (pUVar14 == null) goto label_05c96730;
					pUVar14.position = UVar43;
				}
			}
		}
		else {
			pGVar12 = this._gameManager;
			if (pGVar12 == null) goto label_05c96730;
			pGVar12.TeardownTemporaryPhysicalParenting();
			pGVar12 = this._gameManager;
			auVar34 = _auStack_1b8;
			if (pGVar12 == null) goto label_05c96730;
			mapObjects = pGVar12.GetSelectedObjectsForTransformCommand();
			pMVar25 = new TransformPositionCommand(mapObjects);
			pGVar12.NewCommand((BaseCommand)pMVar25, true);
			this.ResetColors();
			this._activeLine = null;
			this._activeIsPlane = false;
			this._activeIsCenter = false;
			this._vertexSnapActive = false;
			this._hasSnapAnchor = false;
			this._snapAnchorTransform = null;
			this._axisSnapDirection = 0;
		}
		pGVar12 = this._gameManager;
		auVar34 = _auStack_1b8;
		uStack_1f8 = CONCAT44(uStack_1f8._4_4_, (float)uStack_1f8);
		if (pGVar12 != null) {
			pGVar12.IgnoreNextSelect = true;
			return;
		}
	label_05c96730: ;
		_auStack_1b8 = auVar34;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x5B96E60", Offset = "0x5B95E60", VA = "0x5B96E60")]
	private Vector3 GetPlaneNormal(Transform plane)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$GetPlaneNormal): clean
		Transform pUVar1;
		bool bVar2;
		Vector3 UVar3;

		pUVar1 = this._planeXY;
		bVar2 = ((Object)plane == (Object)pUVar1);
		if (bVar2) {
			pUVar1 = this._transform;
			if (pUVar1 != null) {
				UVar3 = (Vector3)pUVar1.forward;
				return (Vector3)UVar3;
			}
		}
		else {
			pUVar1 = this._planeYZ;
			bVar2 = ((Object)plane == (Object)pUVar1);
			if (bVar2) {
				pUVar1 = this._transform;
				if (pUVar1 != null) {
					UVar3 = (Vector3)pUVar1.right;
					return (Vector3)UVar3;
				}
			}
			else {
				pUVar1 = this._planeXZ;
				bVar2 = ((Object)plane == (Object)pUVar1);
				if (!bVar2) {
					return (Vector3)(Vector3.upVector);
				}
				pUVar1 = this._transform;
				if (pUVar1 != null) {
					UVar3 = (Vector3)pUVar1.up;
					return (Vector3)UVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x5B98190", Offset = "0x5B97190", VA = "0x5B98190")]
	private Vector3 ProjectDragOntoPlaneHandle(Vector3 drag, Transform plane)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$ProjectDragOntoPlaneHandle): clean
		MapEditorGameManager pGVar1;
		Transform pUVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		Vector3 UVar6;
		float fStack_38;
		float fStack_34;

		fVar5 = drag.z;
		pGVar1 = this._gameManager;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		fStack_38 = drag.x;
		fStack_34 = drag.y;
		if (pGVar1.CurrentGizmoMode == 0) {
			pUVar2 = this._planeXY;
			bVar3 = ((Object)plane == (Object)pUVar2);
			if (bVar3) {
				fVar5 = 0.0;
			}
			else {
				pUVar2 = this._planeYZ;
				bVar3 = ((Object)plane == (Object)pUVar2);
				if (bVar3) {
					fStack_38 = 0.0;
				}
				else {
					pUVar2 = this._planeXZ;
					bVar3 = ((Object)plane == (Object)pUVar2);
					if (bVar3) {
						fStack_34 = 0.0;
					}
				}
			}
		}
		else {
			UVar6 = this.GetPlaneNormal(plane);
			fVar4 = UVar6.z * fVar5 + UVar6.y * fStack_34 + UVar6.x * fStack_38;
			fStack_38 = fStack_38 - fVar4 * UVar6.x;
			fStack_34 = fStack_34 - fVar4 * UVar6.y;
			fVar5 = fVar5 - UVar6.z * fVar4;
		}
		UVar6.y = fStack_34;
		UVar6.x = fStack_38;
		UVar6.z = fVar5;
		return (Vector3)UVar6;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x5B98300", Offset = "0x5B97300", VA = "0x5B98300")]
	private void ApplySnap(ref Vector3 frameDelta, ref Vector3 mousePoint)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$ApplySnap): 208 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		ulong uVar4;
		ulong uVar5;
		float fVar7;
		uint uVar8;
		ulong uVar6;
		MapEditorGameManager pGVar9;
		MapEditorSettings pSVar10;
		FloatSetting pSVar11;
		Transform pUVar12;
		double dVar13;
		bool bVar14;
		UnityEngine_Vector3_StaticFields intptr;
		MethodInfo pMVar15;
		float extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		float extraout_XMM0_Db_01;
		float extraout_XMM0_Db_02;
		float extraout_XMM0_Db_03;
		float extraout_XMM0_Db_04;
		float extraout_XMM0_Db_05;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		float extraout_XMM0_Dc_04;
		float extraout_XMM0_Dc_05;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_02;
		float extraout_XMM0_Dd_03;
		float extraout_XMM0_Dd_04;
		float extraout_XMM0_Dd_05;
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		float in_XMM3_Db;
		float in_XMM3_Dc;
		Vector3 UVar18;
		double dStack_70;
		byte[] auStack_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		byte[] auStack_58 = new byte[12];
		float fStack_48;
		float fStack_44;
		Vector3 UStack_40;

		pMVar15 = (MethodInfo)frameDelta;
		pGVar9 = this._gameManager;
		if (pGVar9 == null) goto label_05c98cfb;
		if (pGVar9.Snap == false) goto label_05c987ff;
		pSVar10 = SettingsManager.MapEditorSettings;
		if ((pSVar10 == null) ||(pSVar11 = pSVar10.SnapMove, pSVar11 == null)) goto label_05c98cfb;
		fVar1 = pSVar11._value;
		if (pGVar9.CurrentGizmoMode == 0) {
			pUVar12 = this._transform;
			if (pUVar12 == null) goto label_05c98cfb;
			UVar18 = pUVar12.position;
			auStack_68._0_4_ = UVar18.x;
			auStack_68._4_4_ = UVar18.y;
			uVar5._0_4_ = frameDelta.x;
			uVar5._4_4_ = frameDelta.y;
			auStack_58._0_4_ = UVar18.z + frameDelta.z;
			pMVar15 = (MethodInfo)this._planeXY;
			pUVar12 = this._activeLine;
			fStack_60 = extraout_XMM0_Dc;
			fStack_5c = extraout_XMM0_Dd;
			uVar4._0_4_ = 0.0;
			uVar4._4_4_ = 0.0;
			if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
				auStack_68 = (byte[])UVar18._0_8_;
				UStack_40.x = 0.0;
				UStack_40.y = 0.0;
				uVar5._0_4_ = fStack_48;
				uVar5._4_4_ = fStack_44;
				uVar4._0_4_ = UStack_40.x;
				uVar4._4_4_ = UStack_40.y;
			}
			auStack_68._4_4_ = (float)auStack_68._4_4_ + uVar5._4_4_;
			auStack_68._0_4_ = (float)auStack_68._0_4_ + (float)uVar5;
			fStack_60 = fStack_60 + (float)uVar4;
			fStack_5c = fStack_5c + uVar4._4_4_;
			bVar14 = ((Object)pUVar12 == (Object)pMVar15);
			if (bVar14) {
				fStack_44 = (float)auStack_68._4_4_;
				fStack_48 = (float)auStack_68._0_4_ / fVar1;
				UStack_40._0_8_ = auStack_68._8_8_;
				dVar13 = modf((double)((float)auStack_68._0_4_ / fVar1), &dStack_70, pMVar15);
				uVar5._0_4_ = (float)((ulong)dStack_70 >> 0x20);
				if (0.0 <= fStack_48) {
					if ((dVar13 != 0.5) || (NAN(dVar13))) {
						uVar5._4_4_ = floorf(fStack_48 + 0.5);
						uVar5._0_4_ = extraout_XMM0_Db_03;
						UStack_40.x = extraout_XMM0_Dc_03;
						UStack_40.y = extraout_XMM0_Dd_03;
					}
					else {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
						uVar5._4_4_ = (float)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							uVar5._4_4_ = uVar5._4_4_ + 1.0;
						}
					}
				}
				else if ((dVar13 != -0.5) || (NAN(dVar13))) {
					uVar5._4_4_ = ceilf(fStack_48 + -0.5);
					uVar5._0_4_ = extraout_XMM0_Db_02;
					UStack_40.x = extraout_XMM0_Dc_02;
					UStack_40.y = extraout_XMM0_Dd_02;
				}
				else {
					UStack_40.x = 0.0;
					UStack_40.y = 0.0;
					uVar5._4_4_ = (float)dStack_70;
					if (((long)dStack_70 & 1U) != 0) {
						uVar5._4_4_ = uVar5._4_4_ + -1.0;
					}
				}
				fStack_44 = (float)uVar5;
				fStack_48 = uVar5._4_4_ * fVar1;
				auStack_68._0_4_ = (float)auStack_68._4_4_ / fVar1;
				fStack_60 = (float)auStack_68._4_4_;
				fStack_5c = (float)auStack_68._4_4_;
				dVar13 = modf((double)((float)auStack_68._4_4_ / fVar1), &dStack_70, pMVar15);
				if (0.0 <= (float)auStack_68._0_4_) {
					if ((dVar13 != 0.5) || (NAN(dVar13))) {
						auStack_68._4_4_ = floorf((float)auStack_68._0_4_ + 0.5);
					}
					else {
						auStack_68._4_4_ = (BADTYPE)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							auStack_68._4_4_ = (float)auStack_68._4_4_ + 1.0;
						}
					}
				}
				else if ((dVar13 != -0.5) || (NAN(dVar13))) {
					auStack_68._4_4_ = ceilf((float)auStack_68._0_4_ + -0.5);
				}
				else {
					auStack_68._4_4_ = (BADTYPE)dStack_70;
					if (((long)dStack_70 & 1U) != 0) {
						auStack_68._4_4_ = (float)auStack_68._4_4_ + -1.0;
					}
				}
				auStack_68._4_4_ = (float)auStack_68._4_4_ * fVar1;
				uVar5._0_4_ = (float)auStack_58._0_4_;
				auStack_68._0_4_ = fStack_48;
				fStack_60 = UStack_40.x;
				fStack_5c = UStack_40.y;
			}
			else {
				pMVar15 = (MethodInfo)this._planeYZ;
				pUVar12 = this._activeLine;
				bVar14 = ((Object)pUVar12 == (Object)pMVar15);
				if (bVar14) {
					fStack_44 = (float)auStack_68._4_4_;
					fStack_48 = (float)auStack_68._4_4_ / fVar1;
					UStack_40.y = (float)auStack_68._4_4_;
					UStack_40.x = (float)auStack_68._4_4_;
					dVar13 = modf((double)((float)auStack_68._4_4_ / fVar1), &dStack_70, pMVar15);
					if (0.0 <= fStack_48) {
						if ((dVar13 != 0.5) || (NAN(dVar13))) {
							uVar5._0_4_ = floorf(fStack_48 + 0.5);
						}
						else {
							uVar5._0_4_ = (float)dStack_70;
							if (((long)dStack_70 & 1U) != 0) {
								uVar5._0_4_ = (float)uVar5 + 1.0;
							}
						}
					}
					else if ((dVar13 != -0.5) || (NAN(dVar13))) {
						uVar5._0_4_ = ceilf(fStack_48 + -0.5);
					}
					else {
						uVar5._0_4_ = (float)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							uVar5._0_4_ = (float)uVar5 + -1.0;
						}
					}
					auStack_68._4_4_ = (float)uVar5 * fVar1;
					uVar5._0_4_ = (float)auStack_58._0_4_ / fVar1;
					auStack_58._0_4_ = (float)uVar5;
					dVar13 = modf((double)(float)uVar5, &dStack_70, pMVar15);
					if (0.0 <= (float)auStack_58._0_4_) {
						if ((dVar13 != 0.5) || (NAN(dVar13))) {
							uVar5._0_4_ = floorf((float)auStack_58._0_4_ + 0.5);
							goto label_05c98ba5;
						}
						uVar5._0_4_ = (float)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							uVar5._0_4_ = (float)uVar5 + 1.0;
						}
					}
					else {
						if ((dVar13 != -0.5) || (NAN(dVar13))) {
							uVar5._0_4_ = ceilf((float)auStack_58._0_4_ + -0.5);
	label_05c98ba5: ;
							uVar5._0_4_ = (float)uVar5 * fVar1;
							goto label_05c98c9d;
						}
						uVar5._0_4_ = (float)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							uVar5._0_4_ = (float)uVar5 + -1.0;
						}
					}
				}
				else {
					pMVar15 = (MethodInfo)this._planeXZ;
					pUVar12 = this._activeLine;
					bVar14 = ((Object)pUVar12 == (Object)pMVar15) ;
					if (!bVar14) {
						uVar5._0_4_ = (float)auStack_58._0_4_;
						goto label_05c98c9d;
					}
					fStack_44 = (float)auStack_68._4_4_;
					fStack_48 = (float)auStack_68._0_4_ / fVar1;
					UStack_40._0_8_ = auStack_68._8_8_;
					dVar13 = modf((double)((float)auStack_68._0_4_ / fVar1), &dStack_70, pMVar15);
					uVar5._0_4_ = (float)((ulong)dStack_70 >> 0x20);
					if (0.0 <= fStack_48) {
						if ((dVar13 != 0.5) || (NAN(dVar13))) {
							uVar5._4_4_ = floorf(fStack_48 + 0.5);
							uVar5._0_4_ = extraout_XMM0_Db_05;
							UStack_40.x = extraout_XMM0_Dc_05;
							UStack_40.y = extraout_XMM0_Dd_05;
						}
						else {
							UStack_40.x = 0.0;
							UStack_40.y = 0.0;
							uVar5._4_4_ = (float)dStack_70;
							if (((long)dStack_70 & 1U) != 0) {
								uVar5._4_4_ = uVar5._4_4_ + 1.0;
							}
						}
					}
					else if ((dVar13 != -0.5) || (NAN(dVar13))) {
						uVar5._4_4_ = ceilf(fStack_48 + -0.5);
						uVar5._0_4_ = extraout_XMM0_Db_04;
						UStack_40.x = extraout_XMM0_Dc_04;
						UStack_40.y = extraout_XMM0_Dd_04;
					}
					else {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
						uVar5._4_4_ = (float)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							uVar5._4_4_ = uVar5._4_4_ + -1.0;
						}
					}
					fStack_44 = (float)uVar5;
					fStack_48 = uVar5._4_4_ * fVar1;
					uVar5._0_4_ = (float)auStack_58._0_4_ / fVar1;
					auStack_58._0_4_ = (float)uVar5;
					dVar13 = modf((double)(float)uVar5, &dStack_70, pMVar15);
					if (0.0 <= (float)auStack_58._0_4_) {
						if ((dVar13 != 0.5) || (NAN(dVar13))) {
							uVar5._0_4_ = floorf((float)auStack_58._0_4_ + 0.5);
						}
						else {
							uVar5._0_4_ = (float)dStack_70;
							if (((long)dStack_70 & 1U) != 0) {
								uVar5._0_4_ = (float)uVar5 + 1.0;
							}
						}
					}
					else if ((dVar13 != -0.5) || (NAN(dVar13))) {
						uVar5._0_4_ = ceilf((float)auStack_58._0_4_ + -0.5);
					}
					else {
						uVar5._0_4_ = (float)dStack_70;
						if (((long)dStack_70 & 1U) != 0) {
							uVar5._0_4_ = (float)uVar5 + -1.0;
						}
					}
					auStack_68._0_4_ = fStack_48;
				}
				uVar5._0_4_ = (float)uVar5 * fVar1;
			}
	label_05c98c9d: ;
			auStack_58._0_4_ = (float)uVar5;
			pUVar12 = this._transform;
			if (pUVar12 == null) {
	label_05c98cfb: ;
				throw new NullReferenceException();
			}
			UVar18 = pUVar12.position;
			frameDelta.x = (float)auStack_68._0_4_ - UVar18.x;
			frameDelta.y = (float)auStack_68._4_4_ - UVar18.y;
			frameDelta.z = (float)auStack_58._0_4_ - UVar18.z;
		}
		else {
			uVar5._0_4_ = frameDelta.x;
			uVar4._0_4_ = frameDelta.y;
			uVar4._4_4_ = frameDelta.z;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				auStack_58._8_4_ = 0.0;
				auStack_68._0_4_ = (float)uVar5;
				auStack_58._0_8_ = uVar4;
				uVar4._0_4_ = (float)auStack_58._0_4_;
				uVar4._4_4_ = (float)auStack_58._4_4_;
				uVar5._0_4_ = (float)auStack_68._0_4_;
			}
			uVar5._0_4_ = uVar4._4_4_ * uVar4._4_4_ + (float)uVar5 * (float)uVar5 + (float)uVar4 * (float)uVar4;
			if ((float)uVar5 < 0.0) {
				uVar5._0_4_ = sqrtf((float)uVar5);
			}
			else {
				uVar5._0_4_ = SQRT((float)uVar5);
			}
			auStack_68._0_4_ = (float)uVar5;
			auStack_58._0_4_ = (float)uVar5 / fVar1;
			intptr = (UnityEngine_Vector3_StaticFields)&dStack_70;
			dVar13 = modf((double)((float)uVar5 / fVar1), (double)intptr, pMVar15);
			if (0.0 <= (float)auStack_58._0_4_) {
				if ((dVar13 != 0.5) || (NAN(dVar13))) {
					uVar5._0_4_ = floorf((float)auStack_58._0_4_ + 0.5);
					in_XMM3_Db = extraout_XMM0_Db_00;
					in_XMM3_Dc = extraout_XMM0_Dc_01;
				}
				else {
					uVar5._0_4_ = (float)dStack_70;
					if (((long)dStack_70 & 1U) != 0) {
						uVar5._0_4_ = (float)uVar5 + 1.0;
					}
				}
			}
			else if ((dVar13 != -0.5) || (NAN(dVar13))) {
				uVar5._0_4_ = ceilf((float)auStack_58._0_4_ + -0.5);
				in_XMM3_Db = extraout_XMM0_Db;
				in_XMM3_Dc = extraout_XMM0_Dc_00;
			}
			else {
				uVar5._0_4_ = (float)dStack_70;
				if (((long)dStack_70 & 1U) != 0) {
					uVar5._0_4_ = (float)uVar5 + -1.0;
				}
			}
			if (0.0 < (float)auStack_68._0_4_) {
				auStack_58._4_4_ = in_XMM3_Db;
				auStack_58._0_4_ = (float)uVar5;
				auStack_58._8_4_ = in_XMM3_Dc;
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					dStack_70 = 0.0;
					uVar5._0_4_ = (float)auStack_58._0_4_;
				}
				else {
					dStack_70 = 0.0;
				}
				dStack_70 = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) {
					dStack_70 = 0.0;
					Il2CppMethodInitialized_0753e729 = true;
					uVar5._0_4_ = (float)auStack_58._0_4_;
				}
				auVar17 = _auStack_68;
				uVar5._4_4_ = frameDelta.x;
				fVar2 = frameDelta.y;
				fVar7 = frameDelta.z;
				auStack_68._4_4_ = fVar7;
				auStack_68._0_4_ = fVar2;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					fStack_48 = uVar5._4_4_;
					fVar2 = (float)auStack_68._0_4_;
					fVar7 = (float)auStack_68._4_4_;
					uVar5._0_4_ = (float)auStack_58._0_4_;
					uVar5._4_4_ = fStack_48;
					auVar17 = _auStack_68;
				}
				_auStack_68 = auVar17;
				fVar7 = fVar7 * fVar7;
				uVar5._4_4_ = fVar7 + uVar5._4_4_ * uVar5._4_4_ + fVar2 * fVar2;
				if (uVar5._4_4_ < 0.0) {
					uVar5._4_4_ = sqrtf(uVar5._4_4_);
					uVar5._0_4_ = (float)auStack_58._0_4_ * fVar1;
					fVar7 = extraout_XMM0_Db_01;
					if (uVar5._4_4_ <= 1e-05) goto label_05c98716;
	label_05c98747: ;
					uVar3 = frameDelta.x;
					uVar8 = frameDelta.y;
					auVar16._4_4_ = uVar8;
					auVar16._0_4_ = uVar3;
					auVar16._8_8_ = 0;
					auVar17._4_4_ = uVar5._4_4_;
					auVar17._0_4_ = uVar5._4_4_;
					auVar17._8_4_ = fVar7;
					auVar17._12_4_ = fVar7;
					auVar17 = divps(auVar16, auVar17);
					dStack_70 = auVar17._0_8_;
					uVar5._4_4_ = frameDelta.z / uVar5._4_4_;
				}
				else {
					uVar5._4_4_ = SQRT(uVar5._4_4_);
					uVar5._0_4_ = (float)uVar5 * fVar1;
					if (1e-05 < uVar5._4_4_) goto label_05c98747;
	label_05c98716: ;
					intptr = typeof(Vector3).static_fields;
					uVar5._4_4_ = (intptr.zeroVector).z;
				}
				dVar13 = *(double)&(intptr.zeroVector);
				frameDelta.x = (float)uVar5 * SUB84(dVar13, 0);
				frameDelta.y = (float)uVar5 * (float)((ulong)dVar13 >> 0x20);
				frameDelta.z = uVar5._4_4_ * (float)uVar5;
			}
		}
		uVar5._0_4_ = frameDelta.x;
		uVar6._0_4_ = frameDelta.y;
		uVar6._4_4_ = frameDelta.z;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			auStack_58._8_4_ = 0.0;
			auStack_68._0_4_ = (float)uVar5;
			auStack_58._0_8_ = uVar6;
			uVar6._0_4_ = (float)auStack_58._0_4_;
			uVar6._4_4_ = (float)auStack_58._4_4_;
			uVar5._0_4_ = (float)auStack_68._0_4_;
		}
		uVar5._0_4_ = uVar6._4_4_ * uVar6._4_4_ + (float)uVar5 * (float)uVar5 + (float)uVar6 * (float)uVar6;
		if ((float)uVar5 < 0.0) {
			uVar5._0_4_ = sqrtf((float)uVar5);
		}
		else {
			uVar5._0_4_ = SQRT((float)uVar5);
		}
		if ((float)uVar5 < fVar1) {
			return;
		}
	label_05c987ff: ;
		fVar1 = mousePoint.x;
		uVar5._0_4_ = mousePoint.y;
		this._previousMousePoint.z = mousePoint.z;
		this._previousMousePoint.x = fVar1;
		this._previousMousePoint.y = (float)uVar5;
		return;
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x5B98000", Offset = "0x5B97000", VA = "0x5B98000")]
	private void DoVertexSnap(BaseCamera camera)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$DoVertexSnap): 4 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		HashSet<MapObject> pSVar2;
		Transform pUVar3;
		bool bVar4;
		MethodInfo in_RCX;
		Vector3 frameDelta;
		Vector3 local_50;
		Vector3 local_40;
		Il2CppMethodPointer local_30;
		Vector3 local_28;

		local_50 = (Vector3)ZEXT812(0);
		local_40.z = 0.0;
		local_40.x = 0.0;
		local_40.y = 0.0;
		pGVar1 = this._gameManager;
		if ((pGVar1 == null) ||(pSVar2 = pGVar1.SelectedObjects, pSVar2 == null)) {
	label_05c98182: ;
			throw new NullReferenceException();
		}
		if (pSVar2._count == 0) {
			return;
		}
		if (this._hasSnapAnchor != false) {
			pUVar3 = this._snapAnchorTransform;
			bVar4 = ((Object)pUVar3 != null);
			if (bVar4) {
				pUVar3 = this._snapAnchorTransform;
				if (pUVar3 == null) goto label_05c98182;
				local_50 = pUVar3.TransformPoint((Vector3)this._snapAnchorLocal);
				goto label_05c98110;
			}
		}
		local_30 = (Il2CppMethodPointer)0x0;
		in_RCX = (MethodInfo)&local_30;
		bVar4 = this.TryFindClosestVertexOnSelection(camera, ref local_50, (Transform*)in_RCX, ref local_28);
		if (!bVar4) {
			return;
		}
	label_05c98110: ;
		bVar4 = this.TryFindNearestSceneVertexOnScreen(camera, INFINITY, ref local_40);
		if (bVar4) {
			frameDelta.z = local_40.z - local_50.z;
			frameDelta.x = local_40.x - local_50.x;
			frameDelta.y = local_40.y - local_50.y;
			if (1e-08 <= frameDelta.z * frameDelta.z + frameDelta.y * frameDelta.y + frameDelta.x * frameDelta.x) {
				this.MoveSelectedObjects(frameDelta);
			}
		}
		return;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x5B97570", Offset = "0x5B96570", VA = "0x5B97570")]
	private void DoAxisSurfaceSnap(BaseCamera camera)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$DoAxisSurfaceSnap): 76 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		MapEditorGameManager pGVar5;
		HashSet<MapObject> pSVar6;
		Transform pUVar7;
		Object pUVar8;
		Collider pUVar9;
		Collider[] pUVar10;
		Camera pUVar11;
		Vector2 UVar12;
		object pIVar13;
		ulong __this_00;
		bool bVar14;
		bool bVar15;
		uint uVar16;
		LayerMask mask;
		int layerMask;
		UnityEngine_Vector3_StaticFields pUVar17;
		List<Collider> __this_01;
		List<MapObject> __this_02;
		Object[] pSVar18;
		Int32[] layers;
		uint uVar20;
		float fVar21;
		uint extraout_XMM0_Db;
		float fVar22;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar23;
		uint in_XMM1_Db;
		byte[] auVar24 = new byte[16];
		Vector3 UVar25;
		Vector3 position;
		Vector3 origin;
		Vector3 frameDelta;
		Vector3 direction;
		Vector3 UStack_140;
		byte[] auStack_130 = new byte[16];
		object pIStack_120;
		byte[] auStack_118 = new byte[8];
		float fStack_110;
		float fStack_10c;
		byte[] auStack_108 = new byte[8];
		object pIStack_f8;
		byte[] auStack_e8 = new byte[12];
		float fStack_dc;
		Vector2 UStack_d0;
		byte[] auStack_c8 = new byte[16];
		byte[] auStack_b8 = new byte[16];
		byte[] auStack_a8 = new byte[8];
		System_Collections_Generic_List_Enumerator_T__o SStack_98;
		Transform pUStack_80;
		Vector2 UStack_78;
		ulong uStack_70;
		RaycastHit UStack_68;

		UStack_140.z = 0.0;
		UStack_140.x = 0.0;
		UStack_140.y = 0.0;
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
		UStack_d0.x = 0.0;
		UStack_d0.y = 0.0;
		auStack_108 = (byte[])0x0;
		pIStack_f8 = null;
		SStack_98._list = null;
		SStack_98._index = 0;
		SStack_98._version = 0;
		SStack_98._current = null;
		pGVar5 = this._gameManager;
		if ((pGVar5 == null) ||(pSVar6 = pGVar5.SelectedObjects, pSVar6 == null)) goto label_05c97f08;
		if (pSVar6._count == 0) {
			return;
		}
		pUVar7 = this._activeLine;
		bVar14 = ((Object)pUVar7 == null);
		if (bVar14) {
			return;
		}
		if (this._hasSnapAnchor == false) {
	label_05c97781: ;
			pUStack_80 = null;
			bVar14 = this.TryFindClosestVertexOnSelection(camera, ref UStack_140, ref pUStack_80, (Vector3)auStack_130);
			if (!bVar14) {
				return;
			}
		}
		else {
			pUVar7 = this._snapAnchorTransform;
			bVar14 = ((Object)pUVar7 != null);
			if (!bVar14) goto label_05c97781;
			pUVar7 = this._snapAnchorTransform;
			if (pUVar7 == null) goto label_05c97f08;
			in_XMM1_Db = 0;
			UVar25 = pUVar7.TransformPoint((Vector3)this._snapAnchorLocal);
			UStack_140.z = UVar25.z;
			UStack_140._0_8_ = UVar25._0_8_;
		}
		pUVar7 = this._activeLine;
		if (pUVar7 == null) goto label_05c97f08;
		UVar25 = pUVar7.right;
		fVar23 = UVar25.z;
		fStack_110 = (float)extraout_XMM0_Dc;
		auStack_118 = (byte[])UVar25._0_8_;
		fStack_10c = (float)extraout_XMM0_Dd;
		if (Il2CppMethodInitialized_0753e72d == false) {
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e72d = true;
			auStack_130._0_8_ = null;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05c977f7;
	label_05c97aaf: ;
			auStack_130._0_8_ = null;
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			auStack_130._0_8_ = null;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05c97aaf;
	label_05c977f7: ;
			auStack_130._0_8_ = null;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
			in_XMM1_Db = 0;
		}
		fVar21 = fVar23 * fVar23 +(float)auStack_118._4_4_ * (float)auStack_118._4_4_ +(float)auStack_118._0_4_ * (float)auStack_118._0_4_;
		if (fVar21 < 0.0) {
			fVar21 = sqrtf(fVar21);
			in_XMM1_Db = extraout_XMM0_Db;
			if (fVar21 <= 1e-05) goto label_05c97841;
	label_05c9786d: ;
			fVar23 = fVar23 / fVar21;
			auVar24._4_4_ = fVar21;
			auVar24._0_4_ = fVar21;
			auVar24._8_4_ = in_XMM1_Db;
			auVar24._12_4_ = in_XMM1_Db;
			auVar24 = divps(_auStack_118, auVar24);
			auStack_130._0_8_ = auVar24._0_8_;
			pUVar17 = (UnityEngine_Vector3_StaticFields)auStack_130;
		}
		else {
			fVar21 = SQRT(fVar21);
			if (1e-05 < fVar21) goto label_05c9786d;
	label_05c97841: ;
			pUVar17 = typeof(Vector3).static_fields;
			fVar23 = (pUVar17.zeroVector).z;
		}
		uVar2 = (pUVar17.zeroVector).x;
		uVar3 = (pUVar17.zeroVector).y;
		auStack_118._4_4_ = uVar3;
		auStack_118._0_4_ = uVar2;
		fVar21 = (float)this._axisSnapDirection;
		if (fVar21 == 0.0) {
			if ((camera == null) ||(pUVar11 = camera.Camera, pUVar11 == null)) goto label_05c97f08;
			auStack_e8._0_4_ = this._PointerPosition_k__BackingField.x;
			auStack_e8._4_4_ = this._PointerPosition_k__BackingField.y;
			auStack_e8._8_4_ = 0.0;
			fStack_dc = 0.0;
			UStack_78 = this._axisSnapStartMouse;
			uStack_70 = 0;
			UVar25.z = UStack_140.z;
			UVar25.x = UStack_140.x;
			UVar25.y = UStack_140.y;
			auStack_a8._0_4_ = UStack_140.x;
			auStack_a8._4_4_ = UStack_140.y;
			auStack_c8._0_4_ = UStack_140.z;
			UVar25 = pUVar11.WorldToScreenPoint(UVar25);
			auStack_b8._8_4_ = extraout_XMM0_Dc_00;
			auStack_b8._0_8_ = UVar25._0_8_;
			auStack_b8._12_4_ = extraout_XMM0_Dd_00;
			pUVar11 = camera.Camera;
			if (pUVar11 == null) goto label_05c97f08;
			position.z = (float)auStack_c8._0_4_ + fVar23;
			position.x = (float)auStack_a8._0_4_ + (float)auStack_118._0_4_;
			position.y = (float)auStack_a8._4_4_ + (float)auStack_118._4_4_;
			UVar25 = pUVar11.WorldToScreenPoint(position);
			fVar21 = UVar25.x - (float)auStack_b8._0_4_;
			fVar22 = UVar25.y - (float)auStack_b8._4_4_;
			UStack_d0.y = fVar22;
			UStack_d0.x = fVar21;
			if (fVar22 * fVar22 + fVar21 * fVar21 < 1e-06) {
				return;
			}
			auStack_e8._0_4_ = (float)auStack_e8._0_4_ - UStack_78.x;
			auStack_e8._4_4_ = (float)auStack_e8._4_4_ - UStack_78.y;
			fStack_dc = fStack_dc - uStack_70._4_4_;
			auStack_e8._8_4_ = (float)auStack_e8._8_4_ - (float)uStack_70;
			if ((float)auStack_e8._4_4_ * (float)auStack_e8._4_4_ + (float)auStack_e8._0_4_ * (float)auStack_e8._0_4_ < 25.0) {
				return;
			}
			UVar12 = UStack_d0.Normalize();
			fVar21 = (float)((uint)(0.0 <= (float)auStack_e8._4_4_ * UVar12.y +(float)auStack_e8._0_4_ * UVar12.x) * 2 + -1);
			this._axisSnapDirection = (int32_t)fVar21;
		}
		auStack_a8._0_4_ = fVar21;
		__this_01 = new List<Collider>();
		pGVar5 = this._gameManager;
		if ((pGVar5 != null) &&(__this_02 = pGVar5.GetSelectedObjectsForTransformCommand(), __this_02 != null)) {
			auStack_b8._0_8_ = this;
			auStack_130.GetEnumerator((List<object>)__this_02);
			pIStack_f8 = pIStack_120;
			auStack_108 = (byte[])auStack_130._0_8_;
			auStack_130._0_8_ = null;
			auStack_130._8_8_ = auStack_108;
			if (__this_01 == null) {
				while (true) {
					bVar14 = auStack_108.MoveNext();
					pIVar13 = pIStack_f8;
					if (!(bVar14)) break;
					if (pIStack_f8 == null) goto label_05c97f03;
					pUVar8 = pIStack_f8[1].monitor;
					bVar14 = (pUVar8 == null);
					if (!bVar14) {
						if (pIVar13[1].monitor == null) goto label_05c97f0d;
						pSVar18 = pIVar13[1].monitor.GetComponentsInChildren<Collider>();
						if (pSVar18 == null) goto label_05c97f12;
						uVar16 = (uint)pSVar18.Length;
						if (0 < (int)uVar16) {
							uVar20 = 0;
							do {
								if (uVar16 <= uVar20) goto label_05c97ee3;
								pUVar9 = (Collider)pSVar18[(int)uVar20];
								if (pUVar9 == null) goto label_05c97ee8;
								bVar14 = pUVar9.enabled;
								if (bVar14) {
									pUVar9.enabled = false;
									goto label_05c97ef9;
								}
								uVar20 = uVar20 + 1;
								uVar16 = (uint)pSVar18.Length;
							} while ((int)uVar20 < (int)uVar16);
						}
					}
				}
			}
			else {
				while (true) {
					bVar14 = auStack_108.MoveNext();
					pIVar13 = pIStack_f8;
					if (!(bVar14)) break;
					if (pIStack_f8 == null) {
	label_05c97f03: ;
						throw new NullReferenceException();
					}
					pUVar8 = pIStack_f8[1].monitor;
					bVar14 = (pUVar8 == null);
					if (!bVar14) {
						if (pIVar13[1].monitor == null) {
	label_05c97f0d: ;
							throw new NullReferenceException();
						}
						pSVar18 = pIVar13[1].monitor.GetComponentsInChildren<Collider>();
						if (pSVar18 == null) {
	label_05c97f12: ;
							throw new NullReferenceException();
						}
						uVar16 = (uint)pSVar18.Length;
						if (0 < (int)uVar16) {
							uVar20 = 0;
							do {
								if (uVar16 <= uVar20) {
	label_05c97ee3: ;
									throw new IndexOutOfRangeException();
								}
								pUVar9 = (Collider)pSVar18[(int)uVar20];
								if (pUVar9 == null) {
	label_05c97ee8: ;
									throw new NullReferenceException();
								}
								bVar14 = pUVar9.enabled;
								if (bVar14) {
									pUVar9.enabled = false;
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pUVar10 = __this_01._items;
									if (pUVar10 == null) {
	label_05c97ef9: ;
										throw new NullReferenceException();
									}
									uVar16 = __this_01._size;
									if (uVar16 < (uint)pUVar10.Length) {
										__this_01._size = uVar16 + 1;
										pUVar10[(int)uVar16] = pUVar9;
									}
									else {
										__this_01.AddWithResize((object)pUVar9);
									}
								}
								uVar20 = uVar20 + 1;
								uVar16 = (uint)pSVar18.Length;
							} while ((int)uVar20 < (int)uVar16);
						}
					}
				}
			}
			auStack_108.Dispose();
			auStack_c8._0_4_ = UStack_140.x;
			auStack_c8._4_4_ = UStack_140.y;
			auStack_c8._8_4_ = 0.0;
			auStack_c8._12_4_ = 0.0;
			auStack_e8._0_4_ = UStack_140.z;
			layers = (Int32[])new int[1];
			if (layers != null) {
				if ((int)layers.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				fVar21 = (float)(int)auStack_a8._0_4_;
				auStack_118._4_4_ = (float)auStack_118._4_4_ * fVar21;
				auStack_118._0_4_ = (float)auStack_118._0_4_ * fVar21;
				fStack_110 = fStack_110 * fVar21;
				fStack_10c = fStack_10c * fVar21;
				layers[0] = PhysicsLayer.MapEditorObject;
				mask = PhysicsLayer.GetMask(layers);
				layerMask = ((LayerMask)mask);
				origin.z = (float)auStack_e8._0_4_;
				origin.x = (float)auStack_c8._0_4_;
				origin.y = (float)auStack_c8._4_4_;
				direction.z = fVar23 * fVar21;
				direction.x = (float)auStack_118._0_4_;
				direction.y = (float)auStack_118._4_4_;
				bVar14 = Physics.Raycast(origin, direction, ref UStack_68, 100000.0, layerMask);
				if (__this_01 != null) {
					SStack_98 = __this_01.GetEnumerator();
					auStack_130._0_8_ = null;
					auStack_130._8_8_ = &SStack_98;
					while(true) {
						bVar15 = SStack_98.MoveNext();
						if (!bVar15) {
							SStack_98.Dispose();
							__this_00 = auStack_b8._0_8_;
							if (bVar14) {
								UVar25 = UStack_68.point;
								frameDelta.x = UVar25.x - (float)auStack_c8._0_4_;
								frameDelta.y = UVar25.y - (float)auStack_c8._4_4_;
								frameDelta.z = UVar25.z - (float)auStack_e8._0_4_;
								if (1e-08 <= frameDelta.z * frameDelta.z + frameDelta.y * frameDelta.y + frameDelta.x * frameDelta.x) {
									__this_00.MoveSelectedObjects(frameDelta);
								}
							}
							return;
						}
						if ((Collider)SStack_98._current == null) break;
						SStack_98._current.enabled = true;
					}
					throw new NullReferenceException();
				}
			}
		}
	label_05c97f08: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x5B96FB0", Offset = "0x5B95FB0", VA = "0x5B96FB0")]
	private void DoFreeDragVertexSnap(BaseCamera camera)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$DoFreeDragVertexSnap): 54 lines keep C-only constructs
		uint uVar1;
		MapEditorGameManager pGVar2;
		HashSet<MapObject> pSVar3;
		Camera __this_00;
		Transform pUVar4;
		BaseComponentCache pUVar5;
		sbyte pcVar6;
		float fVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		bool bVar11;
		MethodInfo in_RCX;
		float fVar12;
		float fVar13;
		uint uVar16;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		float fVar17;
		float fVar18;
		float fVar19;
		uint uVar20;
		Vector3 UVar21;
		Vector3 UStack_a8;
		Vector3 UStack_98;
		byte[] auStack_88 = new byte[8];
		byte[] auStack_78 = new byte[20];
		float fStack_64;
		Il2CppMethodPointer pIStack_60;
		ulong uStack_58;
		ulong uStack_48;
		byte[] auStack_38 = new byte[16];
		_union_13 _Stack_28;
		_union_14 _Stack_20;

		UStack_a8.z = 0.0;
		UStack_a8.x = 0.0;
		UStack_a8.y = 0.0;
		UStack_98.z = 0.0;
		UStack_98.x = 0.0;
		UStack_98.y = 0.0;
		pGVar2 = this._gameManager;
		if ((pGVar2 == null) ||(pSVar3 = pGVar2.SelectedObjects, pSVar3 == null)) goto label_05c9755d;
		if (pSVar3._count == 0) {
			return;
		}
		if ((camera == null) ||(__this_00 = camera.Camera, __this_00 == null)) goto label_05c9755d;
		auStack_78.ScreenPointToRay(__this_00, (Vector3)this._PointerPosition_k__BackingField);
		uStack_58 = (Il2CppMethodPointer)auStack_78._0_8_;
		uStack_48 = (sbyte)auStack_78._12_8_;
		if (this._hasSnapAnchor == false) {
	label_05c97104: ;
			pIStack_60 = (Il2CppMethodPointer)0x0;
			in_RCX = (MethodInfo)&pIStack_60;
			bVar11 = this.TryFindClosestVertexOnSelection(camera, ref UStack_a8, (Transform*)in_RCX, (Vector3)auStack_78);
			if (!bVar11) {
				return;
			}
		}
		else {
			pUVar4 = this._snapAnchorTransform;
			bVar11 = ((Object)pUVar4 != null);
			if (!bVar11) goto label_05c97104;
			pUVar4 = this._snapAnchorTransform;
			if (pUVar4 == null) goto label_05c9755d;
			UVar21 = pUVar4.TransformPoint((Vector3)this._snapAnchorLocal);
			UStack_a8.z = UVar21.z;
			UStack_a8._0_8_ = UVar21._0_8_;
		}
		pUVar5 = camera.Cache;
		if ((pUVar5 != null) &&(pUVar4 = pUVar5.Transform, pUVar4 != null)) {
			UVar21 = pUVar4.position;
			fVar7 = UStack_a8.z;
			auStack_88._0_4_ = UStack_a8.x;
			auStack_88._4_4_ = UStack_a8.y;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				auStack_88 = (byte[])UStack_a8._0_8_;
			}
			if (uVar1 == 0) {
			}
			fVar12 = UVar21.z - fVar7;
			fVar17 = UVar21.x - (float)auStack_88._0_4_;
			fVar19 = UVar21.y - (float)auStack_88._4_4_;
			fVar12 = fVar12 * fVar12 + fVar19 * fVar19 + fVar17 * fVar17;
			if (fVar12 < 0.0) {
				fVar12 = sqrtf(fVar12);
			}
			else {
				fVar12 = SQRT(fVar12);
			}
			bVar11 = this.TryFindNearestSceneVertexOnScreen(camera, 30.0, ref UStack_98);
			if (bVar11) {
				fVar12 = fVar12 * 0.3;
				if (fVar12 <= 60.0) {
					fVar12 = 60.0;
				}
				fVar17 = UStack_98.x - (float)auStack_88._0_4_;
				fVar19 = UStack_98.y - (float)auStack_88._4_4_;
				fVar13 = UStack_98.z - fVar7;
				fVar18 = fVar13 * fVar13 + fVar19 * fVar19 + fVar17 * fVar17;
				if (fVar18 <= fVar12 * fVar12) goto label_05c974fa;
			}
			pUVar5 = camera.Cache;
			if ((pUVar5 != null) &&(pUVar4 = pUVar5.Transform, pUVar4 != null)) {
				UVar21 = pUVar4.forward;
				fVar12 = UVar21.x;
				fVar17 = UVar21.y;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				fVar19 = UVar21.z * UVar21.z + fVar17 * fVar17 + fVar12 * fVar12;
				if (fVar19 < 0.0) {
					fVar19 = sqrtf(fVar19);
					pcVar6 = uStack_48;
					uVar8 = _Stack_28._0_4_;
					uVar9 = _Stack_20._0_4_;
					uVar10 = _Stack_20._4_4_;
				}
				else {
					fVar19 = SQRT(fVar19);
					pcVar6 = uStack_48;
					uVar8 = _Stack_28._0_4_;
					uVar9 = _Stack_20._0_4_;
					uVar10 = _Stack_20._4_4_;
				}
				_Stack_20._4_4_ = 0;
				_Stack_20._0_4_ = 0;
				uVar16 = 0.0;
				_Stack_28._0_4_ = 0.0;
				fVar13 = 0.0;
				if (1e-05 < fVar19) {
					auVar14._0_8_ = UVar21._4_8_ ^ 0x8000000080000000;
					auVar14._8_4_ = -fVar17;
					auVar14._12_4_ = -fVar17;
					fVar13 = -fVar12 / fVar19;
					auVar15._4_4_ = fVar19;
					auVar15._0_4_ = fVar19;
					auVar15._8_4_ = fVar19;
					auVar15._12_4_ = fVar19;
					auVar15 = divps(auVar14, auVar15);
					_Stack_28._0_4_ = auVar15._0_4_;
					uVar16 = auVar15._4_4_;
					_Stack_20._0_4_ = auVar15._8_4_;
					_Stack_20._4_4_ = auVar15._12_4_;
				}
				uStack_48._0_4_ = SUB84(pcVar6, 0);
				uStack_48._4_4_ = (float)((ulong)pcVar6 >> 0x20);
				fVar12 = fStack_64 * (float)uVar16 + uStack_48._4_4_ * (float)_Stack_28._0_4_ + (float)uStack_48 * fVar13;
				uVar20 = _Stack_28._0_4_;
				uStack_48 = pcVar6;
				if (g_data_0753e7b4 == false) {
					auStack_38 = ZEXT416((uint)fVar12);
					_Stack_28._4_4_ = uVar16;
					g_data_0753e7b4 = true;
					fVar12 = (float)auStack_38._0_4_;
					uVar20 = _Stack_28._0_4_;
					uVar8 = _Stack_28._0_4_;
					uVar9 = _Stack_20._0_4_;
					uVar10 = _Stack_20._4_4_;
				}
				_Stack_20._4_4_ = uVar10;
				_Stack_20._0_4_ = uVar9;
				_Stack_28._0_4_ = uVar8;
				fVar17 = ABS(fVar12);
				if (fVar17 <= 0.0) {
					fVar17 = 0.0;
				}
				fVar18 = Mathf.Epsilon * 8.0;
				fVar19 = fVar17 * 1e-06;
				if (fVar17 * 1e-06 <= fVar18) {
					fVar19 = fVar18;
				}
				if (ABS(0.0 - fVar12) < fVar19) {
					return;
				}
				fVar12 = ((fVar7 * (float)uVar16 +(float)auStack_88._4_4_ * (float)uVar20 + (float)auStack_88._0_4_ * fVar13) -((float)uVar16 * (float)auStack_78._8_4_ + uStack_58._4_4_ * (float)uVar20 + fVar13 * (float)uStack_58)) / fVar12;
				if (fVar12 <= 0.0) {
					return;
				}
				fVar17 = ((float)uStack_58 + (float)uStack_48 * fVar12) - (float)auStack_88._0_4_;
				fVar19 = (uStack_58._4_4_ + uStack_48._4_4_ * fVar12) - (float)auStack_88._4_4_;
				fVar13 = ((float)auStack_78._8_4_ + fStack_64 * fVar12) - fVar7;
				fVar18 = fVar13 * fVar13 + fVar19 * fVar19 + fVar17 * fVar17;
	label_05c974fa: ;
				if (1e-08 <= fVar18) {
					UVar21.y = fVar19;
					UVar21.x = fVar17;
					UVar21.z = fVar13;
					this.MoveSelectedObjects(UVar21);
				}
				return;
			}
		}
	label_05c9755d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x5B99030", Offset = "0x5B98030", VA = "0x5B99030")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, out Vector3 vertex)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen): clean
		bool bVar1;

		bVar1 = this.TryFindNearestSceneVertexOnScreen(camera, INFINITY, vertex);
		return bVar1;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x5B99040", Offset = "0x5B98040", VA = "0x5B99040")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, float screenRadius, out Vector3 vertex)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen): 27 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		MapEditorGameManager pGVar5;
		HashSet<object> __this_00;
		Dictionary<int, object> __this_01;
		MeshFilter __this_02;
		Camera __this_03;
		object pIVar6;
		bool bVar7;
		bool bVar8;
		int iVar9;
		int iVar10;
		HashSet<MeshFilter> __this_04;
		Object[] pSVar11;
		ulong uVar12;
		Object pUVar13;
		MethodInfo pMVar14;
		Bounds pUVar15;
		Mesh __this_05;
		Vector3[] pUVar16;
		Transform __this_06;
		int iVar17;
		float pfVar18;
		ulong uVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar23;
		float fVar24;
		float fVar25;
		Vector3 UVar26;
		Vector3 UVar27;
		float local_188;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_158;
		float local_128;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_118;
		ulong local_e8;
		ulong uStack_e0;
		ulong local_d8;
		Vector3[] local_d0;
		ulong local_c8;
		Vector3 local_c0;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
		Dictionary<TKey, TValue> local_a8;
		ulong uStack_a0;
		Dictionary<TKey, TValue> local_88;
		ulong uStack_80;
		Vector2 local_68;
		byte[] local_58 = new byte[16];
		Dictionary<TKey, TValue>[] local_48 = new Dictionary<TKey, TValue>[2];
		object local_38;

		pMVar14 = (MethodInfo)camera;
		local_158._current.key = null;
		local_158._current.value = null;
		local_158._dictionary = null;
		local_158._version = 0;
		local_158._index = 0;
		local_158._getEnumeratorRetType = 0;
		local_158._36_4_ = 0;
		local_88 = null;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		local_a8 = null;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		local_e8 = 0;
		local_d8 = 0;
		fVar20 = (Vector3.zeroVector).y;
		fVar21 = (Vector3.zeroVector).z;
		vertex.x = (Vector3.zeroVector).x;
		vertex.y = fVar20;
		vertex.z = fVar21;
		local_68.x = this._PointerPosition_k__BackingField.x;
		local_68.y = this._PointerPosition_k__BackingField.y;
		iVar9 = Screen.width;
		iVar10 = Screen.height;
		pGVar5 = this._gameManager;
		if (pGVar5 == null) {
	label_05c99884: ;
			throw new NullReferenceException();
		}
		__this_00 = (HashSet<object>)pGVar5.SelectedObjects;
		__this_04 = this.GetSelectionMeshFilters();
		__this_01 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (__this_01 == null) goto label_05c99884;
		local_118 = __this_01.GetEnumerator();
		local_158._getEnumeratorRetType = local_118._getEnumeratorRetType;
		local_158._36_4_ = local_118._36_4_;
		local_158._current.key = local_118._current.key;
		local_158._current.value = local_118._current.value;
		local_158._dictionary = local_118._dictionary;
		local_158._version = local_118._version;
		local_158._index = local_118._index;
		local_b0 = &local_158;
		if (__this_00 == null) {
			bVar8 = local_158.MoveNext();
			if (bVar8) {
				throw new NullReferenceException();
			}
		}
		else {
			if (__this_04 != null) {
				local_128 = (float)(~-(uint)(INFINITY <= screenRadius) & (uint)(screenRadius * screenRadius) | -(uint)(INFINITY <= screenRadius) & 0x7f7fffff);
				fVar20 = (float)iVar9;
				fVar23 = (float)iVar10;
				fVar21 = fVar20;
				if (fVar20 <= fVar23) {
					fVar21 = fVar23;
				}
				local_188 = 3.4028235e+38;
				bVar8 = false;
				local_c0 = vertex;
				while (true) {
					bVar7 = local_158.MoveNext();
					pIVar6 = local_158._current.value;
					if (!(bVar7)) break;
					bVar7 = __this_00.Contains(local_158._current.value);
					if (!bVar7) {
						if (pIVar6 == null) goto label_05c99878;
						pUVar13 = pIVar6[1].monitor;
						bVar7 = (pUVar13 == null);
						if (!bVar7) {
							if (pUVar13 == null) goto label_05c99890;
							bVar7 = pUVar13.activeInHierarchy;
							if (bVar7) {
								pSVar11 = pUVar13.GetComponentsInChildren<MeshFilter>();
								if (pSVar11 == null) goto label_05c9989c;
								if (0 < (int)pSVar11.Length) {
									uVar12 = pSVar11.Length & 0xffffffff;
									uVar19 = 0;
									do {
										if (uVar12 <= uVar19) goto label_05c99865;
										__this_02 = (MeshFilter)pSVar11[uVar19];
										local_c8 = uVar19;
										bVar7 = __this_04.Contains((object)__this_02);
										if (!bVar7) {
											if (__this_02 == null) {
												throw new NullReferenceException();
											}
											pUVar13 = (Object)__this_02.sharedMesh;
											bVar7 = (pUVar13 == null);
											if (!bVar7) {
												pMVar14 = (MethodInfo)__this_02.GetComponent<MeshRenderer>();
												bVar7 = ((Object)pMVar14 != null);
												if (bVar7) {
													if (pMVar14 == null) {
														throw new NullReferenceException();
													}
													local_48.get_bounds((Renderer)pMVar14);
													local_118._current.key = local_38;
													local_118._dictionary = local_48[0];
													local_118._8_8_ = local_48[1];
													if (camera == null) {
														throw new NullReferenceException();
													}
													if (screenRadius < INFINITY) {
														local_a8 = local_48[0];
														uStack_a0 = local_48[1];
														pUVar15 = (Bounds)&local_a8;
														fVar25 = screenRadius;
													}
													else {
														local_88 = local_48[0];
														uStack_80 = local_48[1];
														pUVar15 = (Bounds)&local_88;
														fVar25 = fVar21;
													}
													local_d8._0_4_ = (pUVar15.m_Extents).y;
													local_d8._4_4_ = (pUVar15.m_Extents).z;
													local_e8._0_4_ = (pUVar15.m_Center).x;
													local_e8._4_4_ = (pUVar15.m_Center).y;
													uStack_e0 = *(ulong)&(pUVar15.m_Center).z;
													bVar7 = PositionGizmo.ScreenBoundsIntersectsMouse((UnityEngine_Bounds_o)*pUVar15, camera.Camera, local_68, fVar25);
													if (!bVar7) goto label_05c993a0;
												}
												__this_05 = __this_02.sharedMesh;
												if (__this_05 == null) {
													throw new NullReferenceException();
												}
												pUVar16 = __this_05.vertices;
												__this_06 = __this_02.transform;
												if (pUVar16 == null) {
													throw new NullReferenceException();
												}
												iVar17 = (int)pUVar16.Length;
												uVar12 = pUVar16.Length & 0xffffffff;
												if (__this_06 == null) {
													if (0 < iVar17) {
														if (uVar12 != 0) {
															throw new NullReferenceException();
														}
	label_05c998d5: ;
														throw new IndexOutOfRangeException();
													}
												}
												else if (camera == null) {
													if (0 < iVar17) {
														if (uVar12 != 0) {
															__this_06.TransformPoint((Vector3)pUVar16[0]);
															throw new NullReferenceException();
														}
														goto label_05c998d5;
													}
												}
												else if (0 < iVar17) {
													pfVar18 = &pUVar16[0].z;
													uVar19 = 0;
													local_d0 = pUVar16;
													do {
														if (uVar12 <= uVar19) goto label_05c998d5;
														uVar1 = ((Vector3)(pfVar18 + -2)).x;
														uVar2 = ((Vector3)(pfVar18 + -2)).y;
														UVar26.y = (float)uVar2;
														UVar26.x = (float)uVar1;
														UVar26.z = *pfVar18;
														UVar26 = __this_06.TransformPoint(UVar26);
														__this_03 = camera.Camera;
														if (__this_03 == null) {
															throw new NullReferenceException();
														}
														local_58._8_4_ = extraout_XMM0_Dc;
														local_58._0_8_ = UVar26._0_8_;
														local_58._12_4_ = extraout_XMM0_Dd;
														UVar27 = __this_03.WorldToScreenPoint(UVar26);
														fVar24 = UVar27.z;
														fVar25 = UVar27.x;
														fVar22 = UVar27.y;
														if ((((0.0 < fVar24) && (0.0 <= fVar25)) && (0.0 <= fVar22)) &&((fVar25 <= fVar20 && (fVar22 <= fVar23)))) {
															fVar22 = (fVar22 - local_68.y) * (fVar22 - local_68.y);
															fVar25 = fVar22 + (fVar25 - local_68.x) * (fVar25 - local_68.x);
															if ((fVar25 + 36.0 < local_128) ||(((fVar25 <= local_128 + 36.0 && (ABS(fVar25 - local_128) <= 36.0)) &&(fVar24 < local_188)))) {
																local_c0.x = (float)local_58._0_4_;
																local_c0.y = (float)local_58._4_4_;
																local_c0.z = UVar26.z;
																bVar8 = true;
																local_188 = fVar24;
																local_128 = fVar25;
															}
														}
														uVar19 = uVar19 + 1;
														uVar3 = (uint)local_d0.Length;
														uVar12 = (ulong)uVar3;
														pfVar18 = pfVar18 + 3;
													} while ((long)uVar19 < (long)(int)uVar3);
												}
											}
										}
	label_05c993a0: ;
										uVar19 = local_c8 + 1;
										uVar3 = (uint)pSVar11.Length;
										uVar12 = (ulong)uVar3;
									} while ((long)uVar19 < (long)(int)uVar3);
								}
							}
						}
					}
				}
				goto label_05c99786;
			}
			while (true) {
				bVar8 = local_158.MoveNext();
				pIVar6 = local_158._current.value;
				if (!(bVar8)) break;
				bVar8 = __this_00.Contains(local_158._current.value);
				if (!bVar8) {
					if (pIVar6 == null) {
	label_05c99878: ;
						throw new NullReferenceException();
					}
					pUVar13 = pIVar6[1].monitor;
					bVar8 = (pUVar13 == null);
					if (!bVar8) {
						if (pUVar13 == null) {
	label_05c99890: ;
							throw new NullReferenceException();
						}
						bVar8 = pUVar13.activeInHierarchy;
						if (bVar8) {
							pSVar11 = pUVar13.GetComponentsInChildren<MeshFilter>();
							if (pSVar11 == null) {
	label_05c9989c: ;
								throw new NullReferenceException();
							}
							if (0 < (int)pSVar11.Length) {
								if ((pSVar11.Length & 0xffffffff) != 0) {
									throw new NullReferenceException();
								}
	label_05c99865: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
				}
			}
		}
		bVar8 = false;
	label_05c99786: ;
		local_158.Dispose();
		return bVar8;
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x5B99CE0", Offset = "0x5B98CE0", VA = "0x5B99CE0")]
	private static bool ScreenBoundsIntersectsMouse(Bounds bounds, Camera cam, Vector2 mouseScreen, float screenRadius)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$ScreenBoundsIntersectsMouse): 20 lines keep C-only constructs
		bool bVar1;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar2 = new byte[16];
		byte[] auVar3 = new byte[16];
		byte[] auVar4 = new byte[16];
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 UVar9;
		Vector3 UVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		Vector3 position;
		float local_c8;
		float fStack_c4;
		float local_b8;
		float fStack_b4;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;
		float fStack_84;
		float local_78;
		float fStack_74;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;

		if (cam == null) {
			throw new NullReferenceException();
		}
		fVar5 = bounds.m_Center.z + bounds.m_Extents.z;
		fVar7 = bounds.m_Center.x + bounds.m_Extents.x;
		fVar8 = bounds.m_Center.y + bounds.m_Extents.y;
		position.y = fVar8;
		position.x = fVar7;
		UVar15.z = bounds.m_Center.z - bounds.m_Extents.z;
		UVar15.x = bounds.m_Center.x - bounds.m_Extents.x;
		UVar15.y = bounds.m_Center.y - bounds.m_Extents.y;
		UVar13.y = UVar15.y;
		UVar13.x = UVar15.x;
		UVar9 = cam.WorldToScreenPoint(UVar15);
		UVar10.y = UVar15.y;
		UVar10.x = fVar7;
		UVar10.z = UVar15.z;
		UVar10 = cam.WorldToScreenPoint(UVar10);
		UVar11.y = fVar8;
		UVar11.x = UVar15.x;
		UVar11.z = UVar15.z;
		UVar11 = cam.WorldToScreenPoint(UVar11);
		UVar12.z = UVar15.z;
		UVar12.x = fVar7;
		UVar12.y = fVar8;
		UVar12 = cam.WorldToScreenPoint(UVar12);
		UVar13.z = fVar5;
		UVar13 = cam.WorldToScreenPoint(UVar13);
		UVar14.y = UVar15.y;
		UVar14.x = fVar7;
		UVar14.z = fVar5;
		UVar14 = cam.WorldToScreenPoint(UVar14);
		UVar16.y = fVar8;
		UVar16.x = UVar15.x;
		UVar16.z = fVar5;
		UVar15 = cam.WorldToScreenPoint(UVar16);
		position.z = fVar5;
		UVar16 = cam.WorldToScreenPoint(position);
		fVar7 = UVar16.x;
		fVar5 = UVar16.y;
		auVar2._4_4_ = -(uint)(0.0 < UVar16.z);
		auVar2._0_4_ = -(uint)(0.0 < UVar15.z);
		auVar2._8_4_ = -(uint)(0.0 < UVar14.z);
		auVar2._12_4_ = -(uint)(0.0 < UVar13.z);
		auVar3._4_4_ = -(uint)(0.0 < UVar11.z);
		auVar3._0_4_ = -(uint)(0.0 < UVar12.z);
		auVar3._8_4_ = -(uint)(0.0 < UVar10.z);
		auVar3._12_4_ = -(uint)(0.0 < UVar9.z);
		auVar3 = packssdw(auVar2, auVar3);
		if ((((((((((((((((SUB161(auVar3 >> 7, 0) & 1) != 0 || (SUB161(auVar3 >> 0xf, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x17, 0) & 1) != 0) || (SUB161(auVar3 >> 0x1f, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x27, 0) & 1) != 0) || (SUB161(auVar3 >> 0x2f, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x37, 0) & 1) != 0) || (SUB161(auVar3 >> 0x3f, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x47, 0) & 1) != 0) || (SUB161(auVar3 >> 0x4f, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x57, 0) & 1) != 0) || (SUB161(auVar3 >> 0x5f, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x67, 0) & 1) != 0) || (SUB161(auVar3 >> 0x6f, 0) & 1) != 0) ||(SUB161(auVar3 >> 0x77, 0) & 1) != 0) || auVar3[0xf] < false) {
			local_68 = UVar9.x;
			fStack_64 = UVar9.y;
			fVar8 = local_68;
			if (3.4028235e+38 <= local_68) {
				fVar8 = 3.4028235e+38;
			}
			local_78 = UVar10.x;
			fStack_74 = UVar10.y;
			fVar6 = local_78;
			if (fVar8 <= local_78) {
				fVar6 = fVar8;
			}
			local_88 = UVar11.x;
			fStack_84 = UVar11.y;
			fVar8 = local_88;
			if (fVar6 <= local_88) {
				fVar8 = fVar6;
			}
			local_98 = UVar12.x;
			fStack_94 = UVar12.y;
			fVar6 = local_98;
			if (fVar8 <= local_98) {
				fVar6 = fVar8;
			}
			local_a8 = UVar13.x;
			fStack_a4 = UVar13.y;
			fVar8 = local_a8;
			if (fVar6 <= local_a8) {
				fVar8 = fVar6;
			}
			local_b8 = UVar14.x;
			fStack_b4 = UVar14.y;
			fVar6 = local_b8;
			if (fVar8 <= local_b8) {
				fVar6 = fVar8;
			}
			local_c8 = UVar15.x;
			fStack_c4 = UVar15.y;
			fVar8 = local_c8;
			if (fVar6 <= local_c8) {
				fVar8 = fVar6;
			}
			fVar6 = fVar7;
			if (fVar8 <= fVar7) {
				fVar6 = fVar8;
			}
			local_58 = mouseScreen.x;
			fStack_54 = mouseScreen.y;
			if (fVar6 - screenRadius <= local_58) {
				if (local_68 <= -3.4028235e+38) {
					local_68 = -3.4028235e+38;
				}
				if (local_78 <= local_68) {
					local_78 = local_68;
				}
				if (local_88 <= local_78) {
					local_88 = local_78;
				}
				if (local_98 <= local_88) {
					local_98 = local_88;
				}
				if (local_a8 <= local_98) {
					local_a8 = local_98;
				}
				if (local_b8 <= local_a8) {
					local_b8 = local_a8;
				}
				if (local_c8 <= local_b8) {
					local_c8 = local_b8;
				}
				auVar4._0_8_ = UVar16._0_8_;
				auVar4._8_4_ = extraout_XMM0_Dc;
				auVar4._12_4_ = extraout_XMM0_Dd;
				if (fVar7 <= local_c8) {
					auVar4._0_4_ = local_c8;
				}
				if (local_58 <= auVar4._0_4_ + screenRadius) {
					fVar7 = fStack_64;
					if (3.4028235e+38 <= fStack_64) {
						fVar7 = 3.4028235e+38;
					}
					fVar8 = fStack_74;
					if (fVar7 <= fStack_74) {
						fVar8 = fVar7;
					}
					fVar7 = fStack_84;
					if (fVar8 <= fStack_84) {
						fVar7 = fVar8;
					}
					fVar8 = fStack_94;
					if (fVar7 <= fStack_94) {
						fVar8 = fVar7;
					}
					fVar7 = fStack_a4;
					if (fVar8 <= fStack_a4) {
						fVar7 = fVar8;
					}
					fVar8 = fStack_b4;
					if (fVar7 <= fStack_b4) {
						fVar8 = fVar7;
					}
					fVar7 = fStack_c4;
					if (fVar8 <= fStack_c4) {
						fVar7 = fVar8;
					}
					fVar8 = fVar5;
					if (fVar7 <= fVar5) {
						fVar8 = fVar7;
					}
					if (fVar8 - screenRadius <= fStack_54) {
						if (fStack_64 <= -3.4028235e+38) {
							fStack_64 = -3.4028235e+38;
						}
						if (fStack_74 <= fStack_64) {
							fStack_74 = fStack_64;
						}
						if (fStack_84 <= fStack_74) {
							fStack_84 = fStack_74;
						}
						if (fStack_94 <= fStack_84) {
							fStack_94 = fStack_84;
						}
						if (fStack_a4 <= fStack_94) {
							fStack_a4 = fStack_94;
						}
						if (fStack_b4 <= fStack_a4) {
							fStack_b4 = fStack_a4;
						}
						if (fStack_c4 <= fStack_b4) {
							fStack_c4 = fStack_b4;
						}
						if (fVar5 <= fStack_c4) {
							fVar5 = fStack_c4;
						}
						bVar1 = fStack_54 <= fVar5 + screenRadius;
					}
					else {
					}
				}
			}
		}
		return bVar1;
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x5B999B0", Offset = "0x5B989B0", VA = "0x5B999B0")]
	private HashSet<MeshFilter> GetSelectionMeshFilters()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$GetSelectionMeshFilters): 13 lines keep C-only constructs
		uint uVar1;
		MapEditorGameManager __this_00;
		Object pUVar2;
		object pIVar3;
		System_Collections_Generic_List_Enumerator_object__o pSVar4;
		bool bVar5;
		HashSet<MeshFilter> __this_01;
		List<MapObject> __this_02;
		Object[] pSVar6;
		ulong uVar7;
		ulong uVar8;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		if (Il2CppMethodInitialized_07547a00 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_ctor) ;
			Il2CppMethodInitialized_07547a00 = true;
		}
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_01 = il2cpp_codegen_object_new(typeof(HashSet<MeshFilter>)) ;
		__this_01 = new HashSet<object>();
		__this_00 = this._gameManager;
		if ((__this_00 == null) ||(__this_02 = __this_00.GetSelectedObjectsForTransformCommand(), __this_02 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)__this_02);
		local_68._current = local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		pSVar4 = &local_68;
		if (__this_01 == null) {
			while (true) {
				local_48._8_8_ = pSVar4;
				bVar5 = local_68.MoveNext();
				pIVar3 = local_68._current;
				if (!(bVar5)) break;
				if (local_68._current == null) goto label_05c99c45;
				pUVar2 = local_68._current[1].monitor;
				bVar5 = (pUVar2 == null);
				pSVar4 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				if (!bVar5) {
					if (pIVar3[1].monitor == null) goto label_05c99c4a;
					pSVar6 = pIVar3[1].monitor.GetComponentsInChildren<MeshFilter>();
					if (pSVar6 == null) goto label_05c99c4f;
					pSVar4 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
					if (0 < (int)pSVar6.Length) {
						if ((pSVar6.Length & 0xffffffff) != 0) {
							throw new NullReferenceException();
						}
	label_05c99c1c: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
		}
		else {
			while (true) {
				bVar5 = local_68.MoveNext();
				pIVar3 = local_68._current;
				if (!(bVar5)) break;
				if (local_68._current == null) {
	label_05c99c45: ;
					throw new NullReferenceException();
				}
				pUVar2 = local_68._current[1].monitor;
				bVar5 = (pUVar2 == null);
				if (!bVar5) {
					if (pIVar3[1].monitor == null) {
	label_05c99c4a: ;
						throw new NullReferenceException();
					}
					pSVar6 = pIVar3[1].monitor.GetComponentsInChildren<MeshFilter>();
					if (pSVar6 == null) {
	label_05c99c4f: ;
						throw new NullReferenceException();
					}
					if (0 < (int)pSVar6.Length) {
						uVar7 = pSVar6.Length & 0xffffffff;
						uVar8 = 0;
						do {
							if (uVar7 <= uVar8) goto label_05c99c1c;
							__this_01.Add(pSVar6[uVar8]);
							uVar8 = uVar8 + 1;
							uVar1 = (uint)pSVar6.Length;
							uVar7 = (ulong)uVar1;
						} while ((long)uVar8 < (long)(int)uVar1);
					}
				}
			}
		}
		local_68.Dispose();
		return __this_01;
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x5B96740", Offset = "0x5B95740", VA = "0x5B96740")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex, out Transform owner, out Vector3 localVertex)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection): 19 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		UnityEngine_Vector3_StaticFields pUVar4;
		Camera __this_00;
		Bounds bounds;
		object __this_01;
		bool bVar5;
		bool bVar6;
		int iVar7;
		int iVar8;
		HashSet<MeshFilter> __this_02;
		Object x;
		MethodInfo pMVar9;
		Mesh __this_03;
		Vector3[] pUVar10;
		Transform __this_04;
		ulong uVar11;
		int iVar12;
		ulong uVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar19;
		float fVar20;
		Vector3 UVar21;
		Vector3 UVar22;
		float local_104;
		float local_f8;
		System_Collections_Generic_HashSet_Enumerator_T__o local_c8;
		System_Collections_Generic_HashSet_Enumerator_T__o local_a8;
		Vector3 local_90;
		Vector3 local_88;
		Transform* local_80;
		System_Collections_Generic_HashSet_Enumerator_T__o local_70;
		Vector2 local_68;
		byte[] local_58 = new byte[16];
		HashSet<T>[] local_48 = new HashSet<T>[2];
		MeshFilter local_38;

		local_c8._set = null;
		local_c8._index = 0;
		local_c8._version = 0;
		local_c8._current = null;
		pUVar4 = typeof(Vector3).static_fields;
		fVar14 = (pUVar4.zeroVector).y;
		fVar16 = (pUVar4.zeroVector).z;
		vertex.x = (pUVar4.zeroVector).x;
		vertex.y = fVar14;
		vertex.z = fVar16;
		*owner = null;
		pMVar9 = null;
		pUVar4 = typeof(Vector3).static_fields;
		fVar14 = (pUVar4.zeroVector).y;
		fVar16 = (pUVar4.zeroVector).z;
		localVertex.x = (pUVar4.zeroVector).x;
		localVertex.y = fVar14;
		localVertex.z = fVar16;
		local_68.x = this._PointerPosition_k__BackingField.x;
		local_68.y = this._PointerPosition_k__BackingField.y;
		local_90 = localVertex;
		local_88 = vertex;
		local_80 = owner;
		iVar7 = Screen.width;
		iVar8 = Screen.height;
		__this_02 = this.GetSelectionMeshFilters();
		if (__this_02 == null) {
			throw new NullReferenceException();
		}
		fVar14 = (float)iVar7;
		fVar15 = (float)iVar8;
		local_a8 = __this_02.GetEnumerator();
		local_c8._current = local_a8._current;
		local_c8._set = local_a8._set;
		local_c8._index = local_a8._index;
		local_c8._version = local_a8._version;
		fVar16 = fVar14;
		if (fVar14 <= fVar15) {
			fVar16 = fVar15;
		}
		local_104 = 3.4028235e+38;
		fVar17 = 3.4028235e+38;
		local_70 = &local_c8;
	label_05c96940: ;
		do {
			bVar5 = local_c8.MoveNext();
			__this_01 = local_c8._current;
			if (!bVar5) {
				local_c8.Dispose();
				return bVar6;
			}
			if ((MeshFilter)local_c8._current == null) {
				throw new NullReferenceException();
			}
			x = (Object)local_c8._current.sharedMesh;
			bVar5 = (x == null);
		} while (bVar5);
		pMVar9 = (MethodInfo)__this_01.GetComponent<MeshRenderer>();
		bVar5 = ((Object)pMVar9 != null);
		if (bVar5) {
			if (pMVar9 == null) {
				throw new NullReferenceException();
			}
			local_48.get_bounds((Renderer)pMVar9);
			local_a8._current = (object)local_38;
			local_a8._set = local_48[0];
			local_a8._8_8_ = local_48[1];
			if (camera == null) {
				throw new NullReferenceException();
			}
			bounds._8_8_ = local_48[1];
			bounds.m_Center._0_8_ = local_48[0];
			bounds.m_Extents._4_8_ = local_38;
			bVar5 = PositionGizmo.ScreenBoundsIntersectsMouse(bounds, camera.Camera, local_68, fVar16);
			if (!bVar5) goto label_05c96940;
		}
		__this_03 = __this_01.sharedMesh;
		if (__this_03 == null) {
			throw new NullReferenceException();
		}
		pUVar10 = __this_03.vertices;
		__this_04 = __this_01.transform;
		if (pUVar10 == null) {
			throw new NullReferenceException();
		}
		iVar12 = (int)pUVar10.Length;
		uVar11 = pUVar10.Length & 0xffffffff;
		if (__this_04 == null) {
			if (0 < iVar12) {
				if (uVar11 != 0) {
					throw new NullReferenceException();
				}
	label_05c96cdc: ;
				throw new IndexOutOfRangeException();
			}
		}
		else if (camera == null) {
			if (0 < iVar12) {
				if (uVar11 != 0) {
					__this_04.TransformPoint((Vector3)pUVar10[0]);
					throw new NullReferenceException();
				}
				goto label_05c96cdc;
			}
		}
		else if (0 < iVar12) {
			local_f8 = &pUVar10[0].z;
			uVar13 = 0;
			do {
				if (uVar11 <= uVar13) goto label_05c96cdc;
				uVar1 = ((Vector3)(local_f8 + -2)).x;
				uVar2 = ((Vector3)(local_f8 + -2)).y;
				UVar21.y = (float)uVar2;
				UVar21.x = (float)uVar1;
				UVar21.z = *local_f8;
				UVar21 = __this_04.TransformPoint(UVar21);
				__this_00 = camera.Camera;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_58._8_4_ = extraout_XMM0_Dc;
				local_58._0_8_ = UVar21._0_8_;
				local_58._12_4_ = extraout_XMM0_Dd;
				UVar22 = __this_00.WorldToScreenPoint(UVar21);
				fVar19 = UVar22.z;
				fVar20 = UVar22.x;
				fVar18 = UVar22.y;
				if ((((0.0 < fVar19) && (0.0 <= fVar20)) && (0.0 <= fVar18)) &&((fVar20 <= fVar14 && (fVar18 <= fVar15)))) {
					fVar20 = (fVar18 - local_68.y) * (fVar18 - local_68.y) +(fVar20 - local_68.x) * (fVar20 - local_68.x);
					if ((fVar20 + 36.0 < fVar17) || ((ABS(fVar20 - fVar17) <= 36.0 && (fVar19 < local_104)))) {
						local_88.x = (float)local_58._0_4_;
						local_88.y = (float)local_58._4_4_;
						local_88.z = UVar21.z;
						*local_80 = __this_04;
						if ((uint)pUVar10.Length <= uVar13) {
							throw new IndexOutOfRangeException();
						}
						fVar18 = ((Vector3)(local_f8 + -2)).y;
						fVar17 = *local_f8;
						local_90.x = ((Vector3)(local_f8 + -2)).x;
						local_90.y = fVar18;
						local_90.z = fVar17;
						fVar17 = fVar20;
						local_104 = fVar19;
					}
				}
				uVar13 = uVar13 + 1;
				uVar3 = (uint)pUVar10.Length;
				uVar11 = (ulong)uVar3;
				local_f8 = local_f8 + 3;
			} while ((long)uVar13 < (long)(int)uVar3);
		}
		goto label_05c96940;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x5B99010", Offset = "0x5B98010", VA = "0x5B99010")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection): clean
		bool bVar1;
		Transform pUStack_18;
		Vector3 UStack_10;

		pUStack_18 = null;
		bVar1 = this.TryFindClosestVertexOnSelection(camera, vertex, ref pUStack_18, ref UStack_10);
		return bVar1;
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x5B98D00", Offset = "0x5B97D00", VA = "0x5B98D00")]
	private void MoveSelectedObjects(Vector3 frameDelta)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$MoveSelectedObjects): 16 lines keep C-only constructs
		MapEditorGameManager pGVar1;
		HashSet<MapObject> source;
		object pIVar2;
		HashSet<object> __this_00;
		GameObject __this_01;
		bool bVar3;
		MapEditor_PositionGizmo___c_StaticFields pMVar4;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> __this_03;
		Transform __this_04;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 UVar5;
		Vector3 value;
		byte[] local_70 = new byte[16];
		MapObject local_60;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte[] local_38 = new byte[16];

		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = frameDelta._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		pGVar1 = this._gameManager;
		if (pGVar1 != null) {
			source = pGVar1.SelectedObjects;
			if ((typeof(PositionGizmo.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar4 = typeof(PositionGizmo.c).static_fields;
				__this_02 = pMVar4.__9__48_0;
			}
			else {
				pMVar4 = typeof(PositionGizmo.c).static_fields;
				__this_02 = pMVar4.__9__48_0;
			}
			if (__this_02 == null) {
				if (((typeof(PositionGizmo.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar4 = typeof(PositionGizmo.c).static_fields;
				}
				pIVar2 = (object)pMVar4.__9;
				__this_02 = new Func<MapObject, int>(pIVar2, (intptr_t)MethodInfo_MapEditor_PositionGizmo_c_MoveSelectedObjects_b__48_0);
				pMVar4 = typeof(PositionGizmo.c).static_fields;
				pMVar4.__9__48_0 = __this_02;
			}
			collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_02);
			__this_03 = new HashSet<int>((IEnumerable<T>)collection);
			pGVar1 = this._gameManager;
			if ((pGVar1 != null) &&(__this_00 = (HashSet<object>)pGVar1.SelectedObjects, __this_00 != null)) {
				local_70.GetEnumerator(__this_00);
				local_58._current = (object)local_60;
				local_58._set = (HashSet<T>)local_70._0_8_;
				local_58._index = local_70._8_4_;
				local_58._version = local_70._12_4_;
				local_70._0_8_ = null;
				local_70._8_8_ = &local_58;
				while(true) {
					do {
						bVar3 = local_58.MoveNext();
						pIVar2 = local_58._current;
						if (!bVar3) {
							local_58.Dispose();
							return;
						}
						pGVar1 = this._gameManager;
						if (pGVar1 == null) {
							throw new NullReferenceException();
						}
					} while ((pGVar1.HierarchyTreeViewEnabled != false) &&(bVar3 = BaseGizmo.HasSelectedAncestor((MapObject)local_58._current, __this_03)));
					if ((MapObject)pIVar2 == null) {
						throw new NullReferenceException();
					}
					__this_01 = ((MapObject)((long)pIVar2 + 0x10)).GameObject;
					if (__this_01 == null) break;
					__this_04 = __this_01.transform;
					if (__this_04 == null) {
						throw new NullReferenceException();
					}
					UVar5 = __this_04.position;
					value.x = UVar5.x + (float)local_38._0_4_;
					value.y = UVar5.y + (float)local_38._4_4_;
					value.z = UVar5.z + frameDelta.z;
					__this_04.position = value;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x5B94D40", Offset = "0x5B93D40", VA = "0x5B94D40")]
	private void ResetCenter()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$ResetCenter): 20 lines keep C-only constructs
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
					pGVar1 = this._gameManager;
					if (pGVar1 == null) {
						throw new NullReferenceException();
					}
					if (pGVar1.CurrentGizmoMode == 1) {
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

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x5B93FE0", Offset = "0x5B92FE0", VA = "0x5B93FE0")]
	private void ResetColors()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$ResetColors): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		bool bVar7;
		Object* __this_00;
		PositionGizmo pMVar8;
		Color color;
		Color color_00;
		Color color_01;

		__this_00 = (Object*)this;
		if (g_data_07547a04 == false) {
			__this_00 = &typeof(Object);
			g_data_07547a04 = true;
		}
		__this_00.SetLineColor(this._lineX, (Color)this.LineXColor);
		__this_00.SetLineColor(this._lineY, (Color)this.LineYColor);
		__this_00.SetLineColor(this._lineZ, (Color)this.LineZColor);
		pMVar8 = (PositionGizmo)this._planeXY;
		bVar7 = ((Object)pMVar8 != null);
		if (bVar7) {
			uVar1 = this.LineZColor.r;
			uVar4 = this.LineZColor.g;
			color.g = (float)uVar4;
			color.r = (float)uVar1;
			color.a = 0.4;
			color.b = this.LineZColor.b;
			pMVar8.SetLineColor(this._planeXY, color);
		}
		pMVar8 = (PositionGizmo)this._planeYZ;
		bVar7 = ((Object)pMVar8 != null);
		if (bVar7) {
			uVar2 = this.LineXColor.r;
			uVar5 = this.LineXColor.g;
			color_00.g = (float)uVar5;
			color_00.r = (float)uVar2;
			color_00.a = 0.4;
			color_00.b = this.LineXColor.b;
			pMVar8.SetLineColor(this._planeYZ, color_00);
		}
		pMVar8 = (PositionGizmo)this._planeXZ;
		bVar7 = ((Object)pMVar8 != null);
		if (bVar7) {
			uVar3 = this.LineYColor.r;
			uVar6 = this.LineYColor.g;
			color_01.g = (float)uVar6;
			color_01.r = (float)uVar3;
			color_01.a = 0.4;
			color_01.b = this.LineYColor.b;
			pMVar8.SetLineColor(this._planeXZ, color_01);
			return;
		}
		return;
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x5B96D80", Offset = "0x5B95D80", VA = "0x5B96D80")]
	private void SetLineColor(Transform line, Color color)
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$SetLineColor): clean
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
						if (__this_00 == null) goto label_05c96e48;
						pUVar3 = __this_00.material;
						if (pUVar3 == null) goto label_05c96e48;
						pUVar3.color = color;
						pUVar3 = __this_00.material;
						if (pUVar3 == null) goto label_05c96e48;
						pUVar3.renderQueue = 0x1267;
						uVar4 = uVar4 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar4 < (int)uVar1);
				}
				return;
			}
		}
	label_05c96e48: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x5B9A070", Offset = "0x5B99070", VA = "0x5B9A070")]
	public PositionGizmo()
	{
		// Lifted from source/cpp/MapEditor/PositionGizmo.c (MapEditor.PositionGizmo$$.ctor): clean
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
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/PositionGizmo.c.

	// MapEditor.PositionGizmo.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new PositionGizmo.c();
		PositionGizmo.c.__9 = (PositionGizmo.c)__this;
		return;
	}

	// MapEditor.PositionGizmo.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MapEditor.PositionGizmo.<>c$$<MoveSelectedObjects>b__48_0: clean
	private int c__MoveSelectedObjects_b__48_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}
}
