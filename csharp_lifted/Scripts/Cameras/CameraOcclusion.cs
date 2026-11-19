// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.CameraOcclusion
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/CameraOcclusion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Cameras;

[Token(Token = "0x20008EA")]
internal static class CameraOcclusion
{
	[Token(Token = "0x20008EB")]
	private sealed class FallbackRenderer
	{
		[Token(Token = "0x4002D3F")]
		[FieldOffset(Offset = "0x10")]
		public readonly Renderer Renderer;

		[Token(Token = "0x4002D40")]
		[FieldOffset(Offset = "0x18")]
		public readonly Bounds Bounds;

		[Token(Token = "0x60054ED")]
		[Address(RVA = "0x5CCEB10", Offset = "0x5CCDB10", VA = "0x5CCEB10")]
		public FallbackRenderer(Renderer renderer, Bounds bounds)
		{
			// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion.FallbackRenderer$$.ctor): 3 lines keep C-only constructs
			Bounds pUVar1;

			base();
			this.Renderer = renderer;
			pUVar1 = &this.Bounds;
			pUVar1.m_Extents.y = bounds.m_Extents.y;
			pUVar1.m_Extents.z = bounds.m_Extents.z;
			pUVar1 = &this.Bounds;
			pUVar1.m_Center.x = bounds.m_Center.x;
			pUVar1.m_Center.y = bounds.m_Center.y;
			*(ulong)&this.Bounds.m_Center.z = bounds._8_8_;
			return;
		}
	}

	[Token(Token = "0x20008EC")]
	private sealed class FallbackGrid
	{
		[Token(Token = "0x4002D41")]
		[FieldOffset(Offset = "0x10")]
		public readonly float CellSize;

		[Token(Token = "0x4002D42")]
		[FieldOffset(Offset = "0x18")]
		public readonly Dictionary<Vector3Int, List<FallbackRenderer>> Cells;

		[Token(Token = "0x60054EE")]
		[Address(RVA = "0x5CCEA80", Offset = "0x5CCDA80", VA = "0x5CCEA80")]
		public FallbackGrid(float cellSize)
		{
			// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion.FallbackGrid$$.ctor): 1 lines keep C-only constructs
			Dictionary<Vector3Int, List<CameraOcclusion.FallbackRenderer>> __this_00;

			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Vector3Int, List<CameraOcclusion.FallbackRenderer>>));
			__this_00 = new Dictionary<Vector3Int, object>();
			this.Cells = __this_00;
			base();
			this.CellSize = cellSize;
			return;
		}

		[Token(Token = "0x60054EF")]
		[Address(RVA = "0x5CCEA60", Offset = "0x5CCDA60", VA = "0x5CCEA60")]
		public Vector3Int GetCell(Vector3 position)
		{
			// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion.FallbackGrid$$GetCell): 11 lines keep C-only constructs
			float fVar1;
			ulong in_XMM0_Qb;
			byte[] auVar2 = new byte[16];
			byte[] auVar3 = new byte[16];
			Vector3Int UVar4;

			auVar2._0_8_ = position._0_8_;
			auVar2._8_8_ = in_XMM0_Qb;
			fVar1 = this.CellSize;
			auVar3._4_4_ = fVar1;
			auVar3._0_4_ = fVar1;
			auVar3._8_4_ = fVar1;
			auVar3._12_4_ = fVar1;
			auVar3 = divps(auVar2, auVar3);
			UVar4 = (Vector3Int)il2cpp_runtime_helper_05de6ea0(auVar3._0_8_, position.z / fVar1, 0);
			return (Vector3Int)UVar4;
		}
	}

	[Token(Token = "0x20008ED")]
	private sealed class MaterialOverride
	{
		[Token(Token = "0x4002D43")]
		[FieldOffset(Offset = "0x10")]
		public readonly Material[] Originals;

		[Token(Token = "0x4002D44")]
		[FieldOffset(Offset = "0x18")]
		public readonly Material[] Replacements;

		[Token(Token = "0x60054F0")]
		[Address(RVA = "0x5CCEC40", Offset = "0x5CCDC40", VA = "0x5CCEC40")]
		public MaterialOverride(Material[] originals)
		{
			// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion.MaterialOverride$$.ctor): clean
			Material[] pUVar1;

			base();
			this.Originals = originals;
			if (originals == null) {
				throw new NullReferenceException();
			}
			pUVar1 = (Material[])new Material[(uint32_t)originals.Length];
			this.Replacements = pUVar1;
			return;
		}

		[Token(Token = "0x60054F1")]
		[Address(RVA = "0x5CCEB50", Offset = "0x5CCDB50", VA = "0x5CCEB50")]
		public bool Matches(List<Material> materials)
		{
			// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion.MaterialOverride$$Matches): 1 lines keep C-only constructs
			uint uVar1;
			Material x;
			bool bVar2;
			Material[] pUVar3;
			Material y;
			ulong uVar4;

			if (Il2CppMethodInitialized_07548209 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
				Il2CppMethodInitialized_07548209 = true;
			}
			pUVar3 = this.Originals;
			if ((pUVar3 != null) &&(materials != null)) {
				if (materials._size != (int)pUVar3.Length) {
					return false;
				}
				uVar4 = 0;
				do {
					uVar1 = (uint)pUVar3.Length;
					if ((long)(int)uVar1 <= (long)uVar4) {
		label_05dcec1a: ;
						return (long)(int)uVar1 <= (long)uVar4;
					}
					if (uVar1 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					x = pUVar3[uVar4];
					y = materials.get_Item((int32_t)uVar4);
					bVar2 = ((Object)x != (Object)y);
					if (bVar2) goto label_05dcec1a;
					uVar4 = uVar4 + 1;
					pUVar3 = this.Originals;
				} while (pUVar3 != null);
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x4002D25")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int StartId;

	[Token(Token = "0x4002D26")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int EndId;

	[Token(Token = "0x4002D27")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int RadiusId;

	[Token(Token = "0x4002D28")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GroundPlaneId;

	[Token(Token = "0x4002D29")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int MapMask;

	[Token(Token = "0x4002D2A")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int GroundMask;

	[Token(Token = "0x4002D2B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<string, string> ShaderReplacements;

	[Token(Token = "0x4002D2C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<Collider, Renderer[]> ColliderRenderers;

	[Token(Token = "0x4002D2D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly HashSet<Collider> StaticColliders;

	[Token(Token = "0x4002D2E")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Dictionary<Renderer, Renderer> CombinedRenderers;

	[Token(Token = "0x4002D2F")]
	private const float FallbackCellSize = 128f;

	[Token(Token = "0x4002D30")]
	[FieldOffset(Offset = "0x38")]
	private static readonly List<FallbackGrid> FallbackGrids;

	[Token(Token = "0x4002D31")]
	[FieldOffset(Offset = "0x40")]
	private static readonly HashSet<Renderer> Candidates;

	[Token(Token = "0x4002D32")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Dictionary<Material, Material> MaterialCopies;

	[Token(Token = "0x4002D33")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Dictionary<Renderer, MaterialOverride> Overrides;

	[Token(Token = "0x4002D34")]
	[FieldOffset(Offset = "0x58")]
	private static readonly List<Renderer> AppliedRenderers;

	[Token(Token = "0x4002D35")]
	[FieldOffset(Offset = "0x60")]
	private static readonly List<Material> SharedMaterials;

	[Token(Token = "0x4002D36")]
	[FieldOffset(Offset = "0x68")]
	private static readonly HashSet<Material> UpdatedMaterials;

	[Token(Token = "0x4002D37")]
	[FieldOffset(Offset = "0x70")]
	private static Collider[] _colliders;

	[Token(Token = "0x4002D38")]
	[FieldOffset(Offset = "0x78")]
	private static RaycastHit[] _groundHits;

	[Token(Token = "0x4002D39")]
	[FieldOffset(Offset = "0x80")]
	private static Camera _camera;

	[Token(Token = "0x4002D3A")]
	[FieldOffset(Offset = "0x88")]
	private static Vector3 _start;

	[Token(Token = "0x4002D3B")]
	[FieldOffset(Offset = "0x94")]
	private static Vector3 _end;

	[Token(Token = "0x4002D3C")]
	[FieldOffset(Offset = "0xA0")]
	private static float _radius;

	[Token(Token = "0x4002D3D")]
	[FieldOffset(Offset = "0xA4")]
	private static Vector4 _groundPlane;

	[Token(Token = "0x4002D3E")]
	[FieldOffset(Offset = "0xB4")]
	private static bool _subscribed;

	[Token(Token = "0x60054DC")]
	[Address(RVA = "0x5CCB8B0", Offset = "0x5CCA8B0", VA = "0x5CCB8B0")]
	public static void RegisterObject(GameObject gameObject, Collider[] colliders, bool isStatic)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$RegisterObject): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		uint uVar3;
		HashSet<object> __this;
		Object pUVar4;
		Dictionary<object, object> pSVar5;
		Renderer renderer;
		Renderer pUVar6;
		bool bVar7;
		Object[] value;
		ulong uVar8;
		int iVar9;
		MeshRenderer extraout_RDX;
		MeshRenderer method_00;
		ulong uVar10;

		if ((gameObject == null) ||(value = gameObject.GetComponentsInChildren<Renderer>(true), colliders == null)) {
	label_05dcbc0e: ;
			throw new NullReferenceException();
		}
		iVar9 = (int)colliders.Length;
		uVar8 = colliders.Length & 0xffffffff;
		if (isStatic) {
			if (0 < iVar9) {
				uVar10 = 0;
				do {
					if (uVar8 <= uVar10) goto label_05dcbc09;
					pUVar4 = (Object)colliders[uVar10];
					bVar7 = (pUVar4 == null);
					if (!bVar7) {
						pSVar5 = (Dictionary<object, object>)CameraOcclusion.ColliderRenderers;
						if (pSVar5 == null) goto label_05dcbc0e;
						pSVar5.set_Item((object)pUVar4, ref value.obj);
						__this = (HashSet<object>)CameraOcclusion.StaticColliders;
						if (__this == null) goto label_05dcbc0e;
						__this.Add((object)pUVar4);
					}
					uVar10 = uVar10 + 1;
					uVar3 = (uint)colliders.Length;
					uVar8 = (ulong)uVar3;
				} while ((long)uVar10 < (long)(int)uVar3);
			}
		}
		else {
			if (iVar9 < 1) {
				return;
			}
			uVar10 = 0;
			do {
				if (uVar8 <= uVar10) goto label_05dcbc09;
				pUVar4 = (Object)colliders[uVar10];
				bVar7 = (pUVar4 == null);
				if (!bVar7) {
					pSVar5 = (Dictionary<object, object>)CameraOcclusion.ColliderRenderers;
					if (pSVar5 == null) goto label_05dcbc0e;
					pSVar5.set_Item((object)pUVar4, ref value.obj);
				}
				uVar10 = uVar10 + 1;
				uVar3 = (uint)colliders.Length;
				uVar8 = (ulong)uVar3;
			} while ((long)uVar10 < (long)(int)uVar3);
		}
		if (isStatic) {
			if (value == null) goto label_05dcbc0e;
			if (0 < (int)value.Length) {
				uVar8 = value.Length & 0xffffffff;
				uVar10 = 0;
				do {
					if (uVar8 <= uVar10) {
	label_05dcbc09: ;
						throw new IndexOutOfRangeException();
					}
					renderer = (Renderer)value[uVar10];
					if (renderer != null) {
						pUVar6 = renderer.klass;
						bVar1 = (pUVar6._2).typeHierarchyDepth;
						bVar2 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
						if (((bVar2 <= bVar1) &&(method_00 = typeof(MeshRenderer),(pUVar6._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(MeshRenderer) )) || ((bVar2 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth, bVar2 <= bVar1 &&(method_00 = (MeshRenderer)typeof(SkinnedMeshRenderer),(pUVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(SkinnedMeshRenderer))))) {
							if ((typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor == 0) {
								method_00 = extraout_RDX;
							}
							bVar7 = CameraOcclusion.HasMatchingMeshCollider(renderer, colliders);
							if (!bVar7) {
								CameraOcclusion.RegisterFallbackRenderer(renderer);
							}
						}
					}
					uVar10 = uVar10 + 1;
					uVar3 = (uint)value.Length;
					uVar8 = (ulong)uVar3;
				} while ((long)uVar10 < (long)(int)uVar3);
			}
		}
		return;
	}

	[Token(Token = "0x60054DD")]
	[Address(RVA = "0x5CCBC20", Offset = "0x5CCAC20", VA = "0x5CCBC20")]
	private static bool HasMatchingMeshCollider(Renderer renderer, Collider[] colliders)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$HasMatchingMeshCollider): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Collider __this;
		bool bVar3;
		uint uVar4;
		Object pUVar5;
		ulong uVar6;
		Object pUVar7;
		GameObject __this_00;
		ulong uVar8;
		MeshFilter local_38;

		local_38 = null;
		if (renderer != null) {
			bVar1 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
			if (((bVar1 <= (renderer.klass._2).typeHierarchyDepth) &&((renderer.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MeshRenderer))) &&(bVar3 = renderer.TryGetComponent<MeshFilter>((object*)&local_38))) {
				if (local_38 != null) {
					pUVar5 = (Object)local_38.sharedMesh;
					bVar3 = (pUVar5 == null);
					if (bVar3) {
						return false;
					}
					if (colliders != null) {
						if ((int)colliders.Length < 1) {
							return false;
						}
						uVar6 = colliders.Length & 0xffffffff;
						uVar8 = 0;
						do {
							if (uVar6 <= uVar8) {
								throw new IndexOutOfRangeException();
							}
							__this = colliders[uVar8];
							if (__this != null) {
								bVar1 = (typeof(MeshCollider)._2).typeHierarchyDepth;
								if (((bVar1 <= (__this.klass._2).typeHierarchyDepth) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MeshCollider))) &&(bVar3 = __this.enabled)) {
									pUVar5 = (Object)__this.gameObject;
									pUVar7 = (Object)renderer.gameObject;
									bVar3 = (pUVar5 == pUVar7);
									if (bVar3) {
										pUVar5 = (Object)__this.sharedMesh;
										if (local_38 == null) break;
										pUVar7 = (Object)local_38.sharedMesh;
										bVar3 = (pUVar5 == pUVar7);
										if (bVar3) {
											uVar2 = CameraOcclusion.MapMask;
											__this_00 = __this.gameObject;
											if (__this_00 == null) break;
											uVar4 = __this_00.layer;
											if ((uVar2 >> (uVar4 & 0x1f) & 1) != 0) {
												return true;
											}
										}
									}
								}
							}
							uVar8 = uVar8 + 1;
							uVar2 = (uint)colliders.Length;
							uVar6 = (ulong)uVar2;
							if ((long)(int)uVar2 <= (long)uVar8) {
								return false;
							}
						} while(true);
					}
				}
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x60054DE")]
	[Address(RVA = "0x5CCC320", Offset = "0x5CCB320", VA = "0x5CCC320")]
	public static void RegisterCombinedRenderer(Renderer original, Renderer combined)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$RegisterCombinedRenderer): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_075481f8 == false) {
			Il2CppMethodInitialized_075481f8 = true;
			uVar1 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)CameraOcclusion.CombinedRenderers;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(CameraOcclusion)).static_fields + 0x30);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)original, (object)combined);
		return;
	}

	[Token(Token = "0x60054DF")]
	[Address(RVA = "0x5CCC3C0", Offset = "0x5CCB3C0", VA = "0x5CCC3C0")]
	public static void SetCapsule(Camera camera, Vector3 start, Vector3 end, float radius, Vector3 groundOrigin)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$SetCapsule): 3 lines keep C-only constructs
		Cameras_CameraOcclusion_StaticFields pCVar1;
		CameraOcclusion pCVar2;
		Action<T1, T2> pSVar3;
		MethodInfo method_00;

		pCVar1 = typeof(CameraOcclusion).static_fields;
		pCVar1._camera = camera;
		method_00 = (MethodInfo)&pCVar1._camera;
		pCVar2 = typeof(CameraOcclusion);
		pCVar1 = typeof(CameraOcclusion).static_fields;
		(pCVar1._start).x = start.x;
		(pCVar1._start).y = start.y;
		(pCVar1._start).z = start.z;
		pCVar1 = pCVar2.static_fields;
		(pCVar1._end).x = end.x;
		(pCVar1._end).y = end.y;
		(pCVar1._end).z = end.z;
		pCVar2.static_fields._radius = radius;
		CameraOcclusion.UpdateGroundPlane(groundOrigin);
		if (CameraOcclusion._subscribed == false) {
			pSVar3 = new Action<ScriptableRenderContext, Camera>(null, (intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
			RenderPipelineManager.add_beginCameraRendering((Action<ScriptableRenderContext, Camera>)pSVar3);
			pSVar3 = new Action<ScriptableRenderContext, Camera>(null, (intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
			RenderPipelineManager.add_endCameraRendering((Action<ScriptableRenderContext, Camera>)pSVar3);
			CameraOcclusion._subscribed = true;
		}
		return;
	}

	[Token(Token = "0x60054E0")]
	[Address(RVA = "0x5CCC570", Offset = "0x5CCB570", VA = "0x5CCC570")]
	private static void UpdateGroundPlane(Vector3 groundOrigin)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$UpdateGroundPlane): 5 lines keep C-only constructs
		ulong puVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		float fVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		float fVar13;
		int layerMask;
		uint uVar14;
		UnityEngine_Vector4_StaticFields pUVar15;
		ulong uVar17;
		HashSet<object> __this;
		ulong uVar18;
		Vector3 direction;
		CameraOcclusion pCVar19;
		bool bVar20;
		uint uVar21;
		Collider item;
		RaycastHit[] pUVar22;
		long lVar23;
		Cameras_CameraOcclusion_StaticFields pCVar24;
		ulong uVar25;
		float fVar26;
		Vector3 UVar27;
		Vector3 UVar28;
		float local_bc;
		float local_a8;
		float fStack_a4;
		RaycastHit local_68;

		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		pUVar15 = typeof(Vector4).static_fields;
		uVar2 = (pUVar15.zeroVector).x;
		uVar8 = (pUVar15.zeroVector).y;
		uVar3 = (pUVar15.zeroVector).z;
		uVar9 = (pUVar15.zeroVector).w;
		pCVar19 = typeof(CameraOcclusion);
		pCVar24 = typeof(CameraOcclusion).static_fields;
		(pCVar24._groundPlane).x = (float)uVar2;
		(pCVar24._groundPlane).y = (float)uVar8;
		(pCVar24._groundPlane).z = (float)uVar3;
		(pCVar24._groundPlane).w = (float)uVar9;
		fVar7 = pCVar19.static_fields._radius;
		fVar26 = fVar7 * 0.1;
		if (fVar26 <= 0.1) {
			fVar26 = 0.1;
		}
		if (Il2CppMethodInitialized_0753e72c == false) {
			Il2CppMethodInitialized_0753e72c = true;
			fVar7 = CameraOcclusion._radius;
		}
		uVar4 = (Vector3.upVector).x;
		uVar10 = (Vector3.upVector).y;
		fVar13 = (Vector3.upVector).z;
		local_a8 = groundOrigin.x;
		fStack_a4 = groundOrigin.y;
		while(true) {
			direction = (Vector3.downVector);
			pUVar22 = CameraOcclusion._groundHits;
			layerMask = CameraOcclusion.GroundMask;
			UVar27.y = fVar26 * (float)uVar10 + fStack_a4;
			UVar27.x = fVar26 * (float)uVar4 + local_a8;
			UVar27.z = fVar13 * fVar26 + groundOrigin.z;
			uVar21 = Physics.RaycastNonAlloc(UVar27, (Vector3)direction, pUVar22, fVar7 + fVar26, layerMask, 1);
			pCVar24 = typeof(CameraOcclusion).static_fields;
			pUVar22 = pCVar24._groundHits;
			if (pUVar22 == null) break;
			if ((int)uVar21 < (int)pUVar22.Length) {
				if ((int)uVar21 < 1) {
					return;
				}
				local_bc = INFINITY;
				lVar23 = 0x20;
				uVar25 = 0;
				goto label_05dcc880;
			}
			if ((typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor == 0) {
				pCVar24 = typeof(CameraOcclusion).static_fields;
				pUVar22 = pCVar24._groundHits;
				if (pUVar22 == null) break;
			}
			Array.Resize<RaycastHit>(ref pCVar24._groundHits, (int)pUVar22.Length * 2);
		}
	label_05dcc829: ;
		throw new NullReferenceException();
	label_05dcc880: ;
		pUVar22 = CameraOcclusion._groundHits;
		if (pUVar22 == null) goto label_05dcc829;
		if ((uint)pUVar22.Length <= uVar25) {
			throw new IndexOutOfRangeException();
		}
		puVar1 = (ulong)((long)pUVar22.m_Items + lVar23 + -0x20);
		local_68.m_Point._0_8_ = *puVar1;
		local_68._8_8_ = puVar1[1];
		puVar1 = (ulong)((long)pUVar22.m_Items + lVar23 + -0x10);
		local_68.m_Normal._4_8_ = *puVar1;
		uVar18 = puVar1[1];
		uVar17 = *(ulong)((long)&pUVar22[0].m_Point.x + lVar23);
		local_68.m_Collider.m_Data =(EntityId)((EntityId)((long)&pUVar22[0].m_Point.z + lVar23)).m_Data;
		local_68.m_UV.x = (float)uVar17;
		local_68.m_UV.y = (float)((ulong)uVar17 >> 0x20);
		local_68.m_FaceID = (uint32_t)uVar18;
		local_68.m_Distance = (float)((ulong)uVar18 >> 0x20);
		__this = (HashSet<object>)CameraOcclusion.StaticColliders;
		item = local_68.collider;
		if (__this == null) goto label_05dcc829;
		bVar20 = __this.Contains((object)item);
		if (((bVar20) &&(UVar27 = local_68.normal, 0.5 <= UVar27.y)) &&(fVar7 = local_68.distance, fVar7 < local_bc)) {
			local_bc = local_68.distance;
			UVar27 = local_68.normal;
			fVar7 = UVar27.z;
			pCVar24 = typeof(CameraOcclusion).static_fields;
			uVar5 = (pCVar24._end).x;
			uVar11 = (pCVar24._end).y;
			fVar13 = (pCVar24._end).z;
			UVar28 = local_68.point;
			local_a8 = UVar27.x;
			fStack_a4 = UVar27.y;
			if (0.0 <= (fVar13 - UVar28.z) * fVar7 +((float)uVar11 - UVar28.y) * fStack_a4 + ((float)uVar5 - UVar28.x) * local_a8) {
				UVar27 = local_68.point;
				fVar13 = -(UVar27.z * fVar7 + UVar27.y * fStack_a4 + UVar27.x * local_a8) - fVar26;
				uVar14 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
			}
			else {
				pUVar15 = typeof(Vector4).static_fields;
				uVar6 = (pUVar15.zeroVector).x;
				uVar12 = (pUVar15.zeroVector).y;
				fVar7 = (pUVar15.zeroVector).z;
				fVar13 = (pUVar15.zeroVector).w;
				uVar14 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
				local_a8 = (float)uVar6;
				fStack_a4 = (float)uVar12;
			}
			if (uVar14 == 0) {
			}
			pCVar24 = typeof(CameraOcclusion).static_fields;
			(pCVar24._groundPlane).x = local_a8;
			(pCVar24._groundPlane).y = fStack_a4;
			(pCVar24._groundPlane).z = fVar7;
			(pCVar24._groundPlane).w = fVar13;
		}
		uVar25 = uVar25 + 1;
		lVar23 = lVar23 + 0x2c;
		if (uVar21 == uVar25) {
			return;
		}
		goto label_05dcc880;
	}

	[Token(Token = "0x60054E1")]
	[Address(RVA = "0x5CCCAB0", Offset = "0x5CCBAB0", VA = "0x5CCCAB0")]
	public static void Clear()
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$Clear): 7 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Action<T1, T2> pSVar4;
		Il2CppClass klass;

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

	[Token(Token = "0x60054E2")]
	[Address(RVA = "0x5CCCEB0", Offset = "0x5CCBEB0", VA = "0x5CCCEB0")]
	public static void Reset()
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$Reset): 8 lines keep C-only constructs
		int piVar1;
		int iVar2;
		Dictionary<object, object> pSVar3;
		HashSet<object> __this;
		List<CameraOcclusion.FallbackGrid> pSVar4;
		List<Material> pSVar5;
		Collider[] array;
		RaycastHit[] array_00;
		Object x;
		bool bVar6;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		Cameras_CameraOcclusion_StaticFields pCVar7;
		byte[] local_58 = new byte[8];
		Object local_48;
		byte[] local_40 = new byte[16];
		Object local_30;

		local_58 = (byte[])0x0;
		local_48 = null;
		CameraOcclusion.Clear();
		pSVar3 = (Dictionary<object, object>)CameraOcclusion.MaterialCopies;
		if (pSVar3 != null) {
			__this_00 = pSVar3.Values;
			if (__this_00 != null) {
				local_40.GetEnumerator(__this_00);
				local_48 = local_30;
				local_58 = (byte[])local_40._0_8_;
				local_40._0_8_ = null;
				local_40._8_8_ = local_58;
				while(true) {
					bVar6 = local_58.MoveNext();
					x = local_48;
					if (!bVar6) break;
					bVar6 = (x != null);
					if (bVar6) {
						Object.Destroy(x);
					}
				}
				local_58.Dispose();
				pSVar3 = (Dictionary<object, object>)CameraOcclusion.MaterialCopies;
				if (pSVar3 != null) {
					pSVar3.Clear();
					pSVar3 = (Dictionary<object, object>)CameraOcclusion.Overrides;
					if (pSVar3 != null) {
						pSVar3.Clear();
						pSVar3 = (Dictionary<object, object>)CameraOcclusion.ColliderRenderers;
						if (pSVar3 != null) {
							pSVar3.Clear();
							__this = (HashSet<object>)CameraOcclusion.StaticColliders;
							if (__this != null) {
								__this.Clear();
								pSVar3 = (Dictionary<object, object>)CameraOcclusion.CombinedRenderers;
								if (pSVar3 != null) {
									pSVar3.Clear();
									pCVar7 = typeof(CameraOcclusion).static_fields;
									pSVar4 = pCVar7.FallbackGrids;
									if (pSVar4 != null) {
										piVar1 = &pSVar4._version;
										*piVar1 = *piVar1 + 1;
										iVar2 = pSVar4._size;
										pSVar4._size = 0;
										if (0 < iVar2) {
											Array.Clear((Array)pSVar4._items, 0, iVar2);
											pCVar7 = typeof(CameraOcclusion).static_fields;
										}
										if ((HashSet<object>)pCVar7.Candidates !=null) {
											(pCVar7.Candidates).Clear();
											pCVar7 = typeof(CameraOcclusion).static_fields;
											pSVar5 = pCVar7.SharedMaterials;
											if (pSVar5 != null) {
												piVar1 = &pSVar5._version;
												*piVar1 = *piVar1 + 1;
												iVar2 = pSVar5._size;
												pSVar5._size = 0;
												if (0 < iVar2) {
													Array.Clear((Array)pSVar5._items, 0, iVar2);
													pCVar7 = typeof(CameraOcclusion).static_fields;
												}
												if ((HashSet<object>)pCVar7.UpdatedMaterials !=null) {
													(pCVar7.UpdatedMaterials).Clear();
													array = CameraOcclusion._colliders;
													if (array != null) {
														Array.Clear((Array)array, 0, (int32_t)array.Length);
														array_00 = CameraOcclusion._groundHits;
														if (array_00 != null) {
															Array.Clear((Array)array_00, 0, (int32_t)array_00.Length);
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

	[Token(Token = "0x60054E3")]
	[Address(RVA = "0x5CCD2E0", Offset = "0x5CCC2E0", VA = "0x5CCD2E0")]
	private static void BeginCameraRendering(ScriptableRenderContext context, Camera camera)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$BeginCameraRendering): 9 lines keep C-only constructs
		float fVar1;
		Camera pUVar2;
		HashSet<object> pSVar3;
		object renderer;
		bool bVar4;
		MethodInfo method_00;
		Il2CppClass klass;
		Vector4 value;
		Vector4 value_00;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;
		byte local_28;

		local_48._set = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pUVar2 = CameraOcclusion._camera;
		bVar4 = ((Object)camera != (Object)pUVar2);
		if (!bVar4) {
			pUVar2 = CameraOcclusion._camera;
			bVar4 = ((Object)pUVar2 == null);
			if (!bVar4) {
				if ((typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor == 0) {
					fVar1 = CameraOcclusion._radius;
					klass = typeof(CameraOcclusion);
				}
				else {
					fVar1 = CameraOcclusion._radius;
					klass = typeof(CameraOcclusion);
				}
				typeof(CameraOcclusion) = (CameraOcclusion)klass;
				if (0.0 < fVar1) {
					CameraOcclusion.FindCandidates();
					pSVar3 = (HashSet<object>)CameraOcclusion.UpdatedMaterials;
					if (pSVar3 != null) {
						pSVar3.Clear();
						value.w = 0.0;
						value._0_12_ = (CameraOcclusion._start);
						Shader.SetGlobalVector(CameraOcclusion.StartId, value);
						value_00.w = 0.0;
						value_00._0_12_ = (CameraOcclusion._end);
						Shader.SetGlobalVector(CameraOcclusion.EndId, value_00);
						Shader.SetGlobalFloat(CameraOcclusion.RadiusId, CameraOcclusion._radius);
						Shader.SetGlobalVector(CameraOcclusion.GroundPlaneId, (Vector4)(CameraOcclusion._groundPlane)) ;
						pSVar3 = (HashSet<object>)CameraOcclusion.Candidates;
						if (pSVar3 != null) {
							local_48 = pSVar3.GetEnumerator();
							local_28 = (byte)&local_48;
							while (true) {
								method_00 = MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_MoveNext;
								bVar4 = local_48.MoveNext();
								renderer = local_48._current;
								if (!(bVar4)) break;
								CameraOcclusion.ApplyMaterials((Renderer)renderer);
							}
							local_48.Dispose();
							return;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x60054E4")]
	[Address(RVA = "0x5CCDCE0", Offset = "0x5CCCCE0", VA = "0x5CCDCE0")]
	private static void EndCameraRendering(ScriptableRenderContext context, Camera camera)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$EndCameraRendering): clean
		Camera y;
		bool bVar1;

		y = CameraOcclusion._camera;
		bVar1 = ((Object)camera == (Object)y);
		if (bVar1) {
			if ((typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor == 0) {
				CameraOcclusion.RestoreMaterials();
				return;
			}
			CameraOcclusion.RestoreMaterials();
			return;
		}
		return;
	}

	[Token(Token = "0x60054E5")]
	[Address(RVA = "0x5CCD600", Offset = "0x5CCC600", VA = "0x5CCD600")]
	private static void FindCandidates()
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$FindCandidates): 15 lines keep C-only constructs
		float fVar1;
		float fVar2;
		float radius;
		ulong uVar3;
		ulong uVar4;
		int layerMask;
		uint uVar5;
		HashSet<object> __this;
		Dictionary<object, object> __this_00;
		Il2CppClass original;
		object pIVar6;
		bool bVar7;
		uint uVar8;
		ulong uVar9;
		Cameras_CameraOcclusion_StaticFields pCVar10;
		Collider[] pUVar11;
		ulong uVar12;
		MethodInfo method_00;
		ulong uVar13;
		Vector3 point0;
		Vector3 point1;
		object local_60;
		ulong local_58;
		ulong local_48;

		local_60 = null;
		__this = (HashSet<object>)CameraOcclusion.Candidates;
		if (__this != null) {
			__this.Clear();
			while(true) {
				pCVar10 = typeof(CameraOcclusion).static_fields;
				uVar3._0_4_ = (pCVar10._start).x;
				uVar3._4_4_ = (pCVar10._start).y;
				fVar1 = (pCVar10._start).z;
				uVar4._0_4_ = (pCVar10._end).x;
				uVar4._4_4_ = (pCVar10._end).y;
				fVar2 = (pCVar10._end).z;
				radius = pCVar10._radius;
				pUVar11 = pCVar10._colliders;
				layerMask = pCVar10.MapMask;
				if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
					local_58 = uVar4;
					local_48 = uVar3;
					uVar3._0_4_ = (undefined4)local_48;
					uVar3._4_4_ = local_48._4_4_;
					uVar4._0_4_ = (undefined4)local_58;
					uVar4._4_4_ = local_58._4_4_;
				}
				point0.y = (float)uVar3._4_4_;
				point0.x = (float)(undefined4)uVar3;
				point0.z = fVar1;
				point1.y = (float)uVar4._4_4_;
				point1.x = (float)(undefined4)uVar4;
				point1.z = fVar2;
				uVar8 = Physics.OverlapCapsuleNonAlloc(point0, point1, radius, pUVar11, layerMask, 2);
				pCVar10 = typeof(CameraOcclusion).static_fields;
				pUVar11 = pCVar10._colliders;
				if (pUVar11 == null) break;
				if ((int)uVar8 < (int)pUVar11.Length) {
					if ((int)uVar8 < 1) goto label_05dcd8d7;
					uVar12 = 0;
					goto label_05dcd7d0;
				}
				if ((typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor == 0) {
					pCVar10 = typeof(CameraOcclusion).static_fields;
					pUVar11 = pCVar10._colliders;
					if (pUVar11 == null) break;
				}
				Array.Resize<Collider>((Object[]*)&pCVar10._colliders, (int)pUVar11.Length * 2);
			}
		}
	label_05dcd7ba: ;
		throw new NullReferenceException();
	label_05dcd7d0: ;
		pUVar11 = CameraOcclusion._colliders;
		if (pUVar11 == null) goto label_05dcd7ba;
		if ((uint)pUVar11.Length <= uVar12) {
	label_05dcd8f9: ;
			throw new IndexOutOfRangeException();
		}
		__this_00 = (Dictionary<object, object>)CameraOcclusion.ColliderRenderers;
		if (__this_00 == null) goto label_05dcd7ba;
		method_00 = (MethodInfo)pUVar11[uVar12];
		bVar7 = __this_00.TryGetValue((object)method_00, ref local_60);
		pIVar6 = local_60;
		if (bVar7) {
			if (local_60 == null) goto label_05dcd7ba;
			if (0 < (int)local_60[1].monitor) {
				uVar9 = (ulong)local_60[1].monitor & 0xffffffff;
				uVar13 = 0;
				do {
					if (uVar9 <= uVar13) goto label_05dcd8f9;
					original = (&pIVar6[2].klass)[uVar13];
					CameraOcclusion.AddCandidate((Renderer)original);
					uVar13 = uVar13 + 1;
					uVar5 = *(uint)&pIVar6[1].monitor;
					uVar9 = (ulong)uVar5;
				} while ((long)uVar13 < (long)(int)uVar5);
			}
		}
		pUVar11 = CameraOcclusion._colliders;
		if (pUVar11 == null) goto label_05dcd7ba;
		if ((uint)pUVar11.Length <= uVar12) goto label_05dcd8f9;
		pUVar11[uVar12] = null;
		uVar12 = uVar12 + 1;
		if (uVar12 == uVar8) {
	label_05dcd8d7: ;
			CameraOcclusion.FindFallbackCandidates();
			return;
		}
		goto label_05dcd7d0;
	}

	[Token(Token = "0x60054E6")]
	[Address(RVA = "0x5CCDF80", Offset = "0x5CCCF80", VA = "0x5CCDF80")]
	private static void FindFallbackCandidates()
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$FindFallbackCandidates): 91 lines keep C-only constructs
		Vector3 pUVar1;
		Il2CppType __this;
		float fVar2;
		uint uVar3;
		uint uVar4;
		float fVar5;
		uint uVar6;
		float fVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		Cameras_CameraOcclusion_StaticFields pCVar12;
		UnityEngine_Vector3_StaticFields pUVar13;
		List<CameraOcclusion.FallbackGrid> __this_00;
		Il2CppClass pIVar14;
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		uint uVar18;
		uint uVar19;
		object pIVar20;
		bool bVar21;
		int iVar22;
		int iVar23;
		ulong uVar24;
		GameObject __this_01;
		ulong uVar25;
		uint uVar26;
		MethodInfo method_00;
		int iVar27;
		float fVar28;
		float fVar29;
		uint extraout_XMM0_Db;
		uint uVar30;
		float fVar31;
		float fVar32;
		byte[] auVar33 = new byte[16];
		byte[] auVar34 = new byte[12];
		Vector3Int key;
		float local_16c;
		float local_168;
		float fStack_164;
		float fStack_160;
		float fStack_15c;
		float local_158;
		float fStack_154;
		float fStack_150;
		float fStack_14c;
		ulong local_140;
		uint local_138;
		float local_134;
		byte[] local_130 = new byte[20];
		float fStack_11c;
		byte[] local_118 = new byte[8];
		float fStack_110;
		float fStack_10c;
		System_Collections_Generic_List_Enumerator_object__o local_108;
		ulong local_f0;
		List<object> local_e8;
		byte[] local_e0 = new byte[16];
		object local_d0;
		ulong local_c8;
		byte[] local_b8 = new byte[40];
		object local_88;
		_union_14 local_78;
		object local_70;
		ulong local_68;
		System_Collections_Generic_List_Enumerator_object__o local_60;
		Il2CppMethodPointer local_58;
		List<T> local_48;

		local_108._list = null;
		local_108._index = 0;
		local_108._version = 0;
		local_108._current = null;
		local_e8 = null;
		local_b8._32_8_ = null;
		local_88 = null;
		local_b8._0_8_ = (Il2CppMethodPointer)0x0;
		local_b8._8_8_ = null;
		local_b8._16_8_ = (InvokerMethod)0x0;
		local_16c = 0.0;
		auVar33 = _local_118;
		pCVar12 = typeof(CameraOcclusion).static_fields;
		pUVar1 = &pCVar12._start;
		uVar18 = pUVar1.x;
		uVar19 = pUVar1.y;
		local_118._4_4_ = uVar19;
		local_118._0_4_ = uVar18;
		local_158 = (pCVar12._end).x;
		fStack_154 = (pCVar12._end).y;
		fStack_150 = 0.0;
		fStack_14c = 0.0;
		fVar28 = (pCVar12._end).z - (pCVar12._start).z;
		fVar31 = pUVar1.x;
		fVar29 = (pCVar12._start).y;
		fVar7 = 0.0;
		fVar5 = 0.0;
		if (g_data_0753e729 == false) {
			fStack_150 = 0.0;
			fStack_14c = 0.0;
			g_data_0753e729 = true;
			fVar31 = (float)local_118._0_4_;
			fVar29 = (float)local_118._4_4_;
			fVar7 = fStack_110;
			fVar5 = fStack_10c;
			auVar33 = _local_118;
		}
		_local_118 = auVar33;
		local_158 = local_158 - fVar31;
		fStack_154 = fStack_154 - fVar29;
		fStack_150 = fStack_150 - fVar7;
		fStack_14c = fStack_14c - fVar5;
		fVar31 = fVar28 * fVar28 + fStack_154 * fStack_154 + local_158 * local_158;
		local_118._0_4_ = fVar31;
		if (fVar31 < 0.0) {
			fVar31 = sqrtf(fVar31);
		}
		else {
			fVar31 = SQRT(fVar31);
		}
		local_48 = *(List<T>*)&(CameraOcclusion._start);
		local_134 = (CameraOcclusion._start).z;
		if (g_data_0753e729 == false) {
			local_130._0_8_ = null;
			g_data_0753e729 = true;
			uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_130._0_8_ = null;
			uVar11 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar11 == 0) {
		}
		uVar30 = 0;
		if ((float)local_118._0_4_ < 0.0) {
			fVar29 = sqrtf((float)local_118._0_4_);
			uVar30 = extraout_XMM0_Db;
		}
		else {
			fVar29 = SQRT((float)local_118._0_4_);
		}
		if (1e-05 < fVar29) {
			fVar28 = fVar28 / fVar29;
			auVar17._4_4_ = fStack_154;
			auVar17._0_4_ = local_158;
			auVar17._8_4_ = fStack_150;
			auVar17._12_4_ = fStack_14c;
			auVar33._4_4_ = fVar29;
			auVar33._0_4_ = fVar29;
			auVar33._8_4_ = uVar30;
			auVar33._12_4_ = uVar30;
			auVar33 = divps(auVar17, auVar33);
			local_130._0_8_ = auVar33._0_8_;
			local_168 = auVar33._0_4_;
			fStack_164 = auVar33._4_4_;
		}
		else {
			pUVar13 = typeof(Vector3).static_fields;
			fVar28 = (pUVar13.zeroVector).z;
			uVar3 = (pUVar13.zeroVector).x;
			uVar9 = (pUVar13.zeroVector).y;
			local_168 = (float)uVar3;
			fStack_164 = (float)uVar9;
		}
		fStack_15c = 0.0;
		fStack_160 = 0.0;
		if (g_data_0753e729 == false) {
			fStack_15c = 0.0;
			fStack_160 = 0.0;
			g_data_0753e729 = true;
		}
		fVar29 = fVar28 * fVar28 + fStack_164 * fStack_164 + local_168 * local_168;
		local_158 = 0.0;
		if (fVar29 < 0.0) {
			fVar29 = sqrtf(fVar29);
		}
		else {
			fVar29 = SQRT(fVar29);
		}
		_local_118 = ZEXT816(0);
		if (1e-05 < fVar29) {
			local_158 = fVar28 / fVar29;
			auVar16._4_4_ = fStack_164;
			auVar16._0_4_ = local_168;
			auVar16._8_4_ = fStack_160;
			auVar16._12_4_ = fStack_15c;
			auVar15._4_4_ = fVar29;
			auVar15._0_4_ = fVar29;
			auVar15._8_4_ = fVar29;
			auVar15._12_4_ = fVar29;
			_local_118 = divps(auVar16, auVar15);
		}
		__this_00 = CameraOcclusion.FallbackGrids;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_130.GetEnumerator((List<object>)__this_00);
		local_108._current = (object)CONCAT44(fStack_11c, local_130._16_4_);
		local_108._list = (List<T>)local_130._0_8_;
		local_68._0_2_ = 0;
		local_68._2_1_ = 0;
		local_68._3_1_ = 0;
		local_68._4_4_ = 0;
		local_60 = &local_108;
		__this = (Il2CppType)(local_b8 + 0x20);
		do {
			while(true) {
				while(true) {
					do {
						do {
							bVar21 = local_108.MoveNext();
							pIVar20 = local_108._current;
							if (!bVar21) {
								local_108.Dispose();
								return;
							}
							if (local_108._current == null) {
								throw new NullReferenceException();
							}
							if (local_108._current[1].monitor ==null) {
								throw new NullReferenceException();
							}
							iVar22 = local_108._current[1].monitor.Count;
						} while (iVar22 == 0);
						pUVar13 = typeof(Vector3).static_fields;
						uVar4 = (pUVar13.oneVector).x;
						uVar10 = (pUVar13.oneVector).y;
						fStack_160 = 0.0;
						fStack_15c = 0.0;
						fVar28 = (pUVar13.oneVector).z;
						local_168 = (float)uVar4;
						fStack_164 = (float)uVar10;
						pCVar12 = typeof(CameraOcclusion).static_fields;
						fVar29 = *(float)&pIVar20[1].klass;
						fVar7 = fVar29 * 0.5 + pCVar12._radius;
						fVar32 = local_168 * fVar7;
						local_168 = fStack_164 * fVar7;
						fVar28 = fVar28 * fVar7;
						fVar5 = (pCVar12._start).x;
						fVar7 = (pCVar12._start).z;
						uVar6 = (pCVar12._end).x;
						if ((float)uVar6 <= fVar5) {
							fVar5 = (float)uVar6;
						}
						fVar2 = (pCVar12._end).z;
						if (fVar2 <= fVar7) {
							fVar7 = fVar2;
						}
						local_c8 = CONCAT44(fStack_164, fVar32);
						fStack_160 = fStack_164;
						fStack_15c = fStack_164;
						auVar33 = il2cpp_runtime_helper_05de6ea0((fVar5 - fVar32) / fVar29, (fVar7 - fVar28) / fVar29, 0);
						uVar25 = auVar33._0_8_;
						uVar24 = auVar33._8_8_ & 0xffffffff;
						pCVar12 = typeof(CameraOcclusion).static_fields;
						fVar7 = (pCVar12._start).x;
						fVar29 = (pCVar12._start).z;
						uVar8 = (pCVar12._end).x;
						if (fVar7 <= (float)uVar8) {
							fVar7 = (float)uVar8;
						}
						fVar5 = (pCVar12._end).z;
						if (fVar29 <= fVar5) {
							fVar29 = fVar5;
						}
						auVar34 = il2cpp_runtime_helper_05de6ea0(((float)local_c8 + fVar7) / *(float)&pIVar20[1].klass, (fVar28 + fVar29) / *(float)&pIVar20[1].klass, 0);
						local_168 = auVar34._8_4_;
						iVar23 = auVar34._0_4_;
					} while (iVar23 < auVar33._0_4_);
					local_f0 = uVar25 >> 0x20;
					iVar27 = auVar34._4_4_;
					local_140 = auVar34._0_8_;
					if (auVar33._4_4_ <= iVar27) break;
					do {
						uVar26 = (int)uVar25 + 1;
						uVar25 = (ulong)uVar26;
					} while ((int)uVar26 <= iVar23);
				}
				if ((int)auVar33._8_4_ <= (int)local_168) break;
				do {
					uVar24 = local_f0;
					do {
						uVar26 = (int)uVar24 + 1;
						uVar24 = (ulong)uVar26;
					} while ((int)uVar26 <= iVar27);
					uVar26 = (int)uVar25 + 1;
					uVar25 = (ulong)uVar26;
				} while ((int)uVar26 <= iVar23);
			}
			local_70 = pIVar20;
			local_138 = auVar33._8_4_;
			do {
				local_78.genericMethod = (IntPtr)(uVar25 & 0xffffffff);
				uVar25 = local_f0 & 0xffffffff;
				do {
					local_c8 = uVar25 << 0x20 | (ulong)local_78.genericMethod;
					do {
						local_168 = auVar34._8_4_;
						local_140 = auVar34._0_8_;
						if (local_70[1].monitor == null) {
							throw new NullReferenceException();
						}
						key.m_Z = (int)uVar24;
						key.m_X = (int32_t)(float)local_c8;
						key.m_Y = local_c8._4_4_;
						bVar21 = local_70[1].monitor.TryGetValue(key, (object*)&local_e8);
						if (bVar21) {
							if (local_e8 == null) {
								throw new NullReferenceException();
							}
							local_e0.GetEnumerator(local_e8);
							local_88 = local_d0;
							local_b8._32_8_ = local_e0._0_8_;
							local_e0._0_8_ = null;
							local_e0._8_8_ = __this;
	label_05dce6d0: ;
							bVar21 = __this.MoveNext();
							pIVar20 = local_88;
							if (bVar21) {
								if (local_88 == null) {
									throw new NullReferenceException();
								}
								pIVar14 = local_88[1].klass;
								bVar21 = ((Object)pIVar14 == null);
								if (!bVar21) {
									if (pIVar20[1].klass == null) {
										throw new NullReferenceException();
									}
									__this_01 = pIVar20[1].klass.gameObject;
									if (__this_01 == null) {
										throw new NullReferenceException();
									}
									bVar21 = __this_01.activeInHierarchy;
									if (bVar21) {
										local_b8._16_8_ = pIVar20[2].monitor;
										local_b8._0_8_ = pIVar20[1].monitor;
										local_b8._8_8_ = pIVar20[2].klass;
										fVar28 = CameraOcclusion._radius;
										local_b8.Expand(fVar28 + fVar28);
										local_58 = *(Il2CppMethodPointer)&(CameraOcclusion._start);
										method_00 = (MethodInfo)&local_58;
										bVar21 = local_b8.Internal_Contains((Vector3)method_00);
										if (!bVar21) {
											local_130._0_8_ = local_48;
											local_130._8_4_ = local_134;
											local_130._12_4_ = local_118._0_4_;
											local_130._16_4_ = local_118._4_4_;
											fStack_11c = local_158;
											method_00 = (MethodInfo)local_b8;
											bVar21 = Bounds.IntersectRayAABB((Ray)local_130, (Bounds)method_00, ref local_16c);
											if ((!bVar21) || (fVar31 < local_16c)) goto label_05dce6d0;
										}
										pIVar14 = pIVar20[1].klass;
										CameraOcclusion.AddCandidate((Renderer)pIVar14);
									}
								}
								goto label_05dce6d0;
							}
							__this.Dispose();
						}
						auVar34._8_4_ = local_168;
						auVar34._0_8_ = local_140;
						uVar26 = (int)uVar24 + 1;
						uVar24 = (ulong)uVar26;
					} while ((int)uVar26 <= (int)local_168);
					uVar26 = (int)uVar25 + 1;
					uVar25 = (ulong)uVar26;
					uVar24 = (ulong)local_138;
				} while ((int)uVar26 <= iVar27);
				uVar26 = (int)local_78.genericMethod + 1;
				uVar25 = (ulong)uVar26;
				bVar21 = (int)uVar26 <= (int)local_140;
			} while (bVar21);
		} while(true);
	}

	[Token(Token = "0x60054E7")]
	[Address(RVA = "0x5CCBEB0", Offset = "0x5CCAEB0", VA = "0x5CCBEB0")]
	private static void RegisterFallbackRenderer(Renderer renderer)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$RegisterFallbackRenderer): 24 lines keep C-only constructs
		int piVar1;
		Bounds pUVar2;
		uint uVar3;
		uint uVar4;
		CameraOcclusion.FallbackGrid[] pCVar5;
		CameraOcclusion.FallbackRenderer[] pCVar6;
		float fVar7;
		byte[] auVar8 = new byte[16];
		bool bVar10;
		CameraOcclusion.FallbackGrid __this;
		Dictionary<Vector3Int, List<CameraOcclusion.FallbackRenderer>> __this_00;
		object pIVar11;
		List<CameraOcclusion.FallbackRenderer> pSVar12;
		CameraOcclusion.FallbackRenderer __this_01;
		List<CameraOcclusion.FallbackGrid> __this_02;
		int index;
		byte[] auVar13 = new byte[16];
		float fVar14;
		Vector3Int key;
		List<CameraOcclusion.FallbackRenderer> local_78;
		Renderer local_70;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		Bounds local_48;

		local_78 = null;
		if (renderer != null) {
			index = 0;
			local_70 = renderer;
			local_48 = renderer.bounds;
			fVar14 = local_48.m_Extents.y + local_48.m_Extents.y;
			if (local_48.m_Extents.y + local_48.m_Extents.y <= local_48.m_Extents.z + local_48.m_Extents.z) {
				fVar14 = local_48.m_Extents.z + local_48.m_Extents.z;
			}
			fVar7 = local_48.m_Extents.x + local_48.m_Extents.x;
			if (local_48.m_Extents.x + local_48.m_Extents.x <= fVar14) {
				fVar7 = fVar14;
			}
			if (128.0 < fVar7) {
				index = 0;
				fVar14 = 128.0;
				do {
					fVar14 = fVar14 + fVar14;
					index = index + 1;
				} while (fVar14 < fVar7);
			}
			uStack_60 = 0;
			uVar3 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
			local_58 = local_48.m_Center.z;
			fStack_54 = local_48.m_Extents.x;
			fStack_50 = local_48.m_Extents.y;
			fStack_4c = local_48.m_Extents.z;
			local_68 = (byte[])local_48.m_Center._0_8_;
			while(true) {
				if (uVar3 == 0) {
				}
				__this_02 = CameraOcclusion.FallbackGrids;
				if (__this_02 == null) goto label_05dcc310;
				uVar3 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
				if (index < __this_02._size) break;
				if (uVar3 == 0) {
					__this_02 = CameraOcclusion.FallbackGrids;
					if (__this_02 == null) goto label_05dcc310;
				}
				fVar14 = ldexpf(1.0, __this_02._size);
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Vector3Int, List<CameraOcclusion.FallbackRenderer>>));
				__this_00 = new Dictionary<Vector3Int, object>();
				__this.Cells = __this_00;
				__this = new CameraOcclusion.FallbackGrid();
				__this.CellSize = fVar14 * 128.0;
				piVar1 = &__this_02._version;
				*piVar1 = *piVar1 + 1;
				pCVar5 = __this_02._items;
				if (pCVar5 == null) goto label_05dcc310;
				uVar4 = __this_02._size;
				if (uVar4 < (uint)pCVar5.Length) {
					__this_02._size = uVar4 + 1;
					pCVar5[(int)uVar4] = __this;
					uVar3 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
				}
				else {
					__this_02.AddWithResize((object)__this);
					uVar3 = (typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor;
				}
			}
			if (uVar3 == 0) {
				__this_02 = CameraOcclusion.FallbackGrids;
				if (__this_02 == null) goto label_05dcc310;
			}
			pIVar11 = __this_02.get_Item(index);
			if (pIVar11 != null) {
				fVar14 = *(float)&pIVar11[1].klass;
				auVar8._8_8_ = uStack_60;
				auVar8._0_8_ = local_68;
				auVar13._4_4_ = fVar14;
				auVar13._0_4_ = fVar14;
				auVar13._8_4_ = fVar14;
				auVar13._12_4_ = fVar14;
				auVar13 = divps(auVar8, auVar13);
				key = (Vector3Int)il2cpp_runtime_helper_05de6ea0(auVar13._0_8_, local_58 / fVar14, 0);
				if (pIVar11[1].monitor != null) {
					bVar10 = pIVar11[1].monitor.TryGetValue(key, (object*)&local_78);
					if (!bVar10) {
						pSVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CameraOcclusion.FallbackRenderer>));
						pSVar12 = new List<object>();
						local_78 = pSVar12;
						if (pIVar11[1].monitor == null) goto label_05dcc310;
						pIVar11[1].monitor.Add(key, (object)pSVar12);
					}
					pSVar12 = local_78;
					__this_01 = new CameraOcclusion.FallbackRenderer();
					__this_01.Renderer = local_70;
					pUVar2 = &__this_01.Bounds;
					pUVar2.m_Center.x = (float)local_68._0_4_;
					pUVar2.m_Center.y = (float)local_68._4_4_;
					*(ulong)&__this_01.Bounds.m_Center.z = CONCAT44(fStack_54, local_58);
					pUVar2 = &__this_01.Bounds;
					pUVar2.m_Extents.y = fStack_50;
					pUVar2.m_Extents.z = fStack_4c;
					if (pSVar12 != null) {
						piVar1 = &pSVar12._version;
						*piVar1 = *piVar1 + 1;
						pCVar6 = pSVar12._items;
						if (pCVar6 != null) {
							uVar4 = pSVar12._size;
							if (uVar4 < (uint)pCVar6.Length) {
								pSVar12._size = uVar4 + 1;
								pCVar6[(int)uVar4] = __this_01;
							}
							else {
								pSVar12.AddWithResize((object)__this_01);
							}
							return;
						}
					}
				}
			}
		}
	label_05dcc310: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054E8")]
	[Address(RVA = "0x5CCDD90", Offset = "0x5CCCD90", VA = "0x5CCDD90")]
	private static void AddCandidate(Renderer original)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$AddCandidate): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Dictionary<object, object> __this;
		Object pUVar3;
		HashSet<object> __this_00;
		bool bVar4;
		GameObject __this_01;
		Object local_20;

		local_20 = null;
		bVar4 = ((Object)original == null);
		if (!bVar4) {
			__this = (Dictionary<object, object>)CameraOcclusion.CombinedRenderers;
			if (__this == null) {
	label_05dcdf6f: ;
				throw new NullReferenceException();
			}
			bVar4 = __this.TryGetValue((object)original, (object*)&local_20);
			if (bVar4) {
				original = (Renderer)local_20;
			}
			bVar4 = ((Object)original != null);
			if (bVar4) {
				if ((Object)original == null) goto label_05dcdf6f;
				bVar4 = original.enabled;
				if (bVar4) {
					__this_01 = original.gameObject;
					if (__this_01 == null) goto label_05dcdf6f;
					bVar4 = __this_01.activeInHierarchy;
					if (bVar4) {
						pUVar3 = ((Object)original).klass;
						bVar1 = (pUVar3._2).typeHierarchyDepth;
						bVar2 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(MeshRenderer) )) {
							bVar2 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
							if (bVar1 < bVar2) {
								return;
							}
							if ((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(SkinnedMeshRenderer)) {
								return;
							}
						}
						__this_00 = (HashSet<object>)CameraOcclusion.Candidates;
						if (__this_00 == null) goto label_05dcdf6f;
						__this_00.Add((object)original);
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60054E9")]
	[Address(RVA = "0x5CCD900", Offset = "0x5CCC900", VA = "0x5CCD900")]
	private static void ApplyMaterials(Renderer renderer)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$ApplyMaterials): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		List<Material> __this;
		Material original;
		List<Renderer> __this_00;
		Renderer[] pUVar4;
		Renderer item;
		bool bVar5;
		Material[] pUVar6;
		CameraOcclusion.MaterialOverride pCVar7;
		Material x;
		object pIVar8;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		long lVar9;
		MethodInfo pMVar10;
		byte bVar11;
		ulong uVar12;
		CameraOcclusion.MaterialOverride local_40;
		Renderer local_38;

		local_40 = null;
		if (renderer == null) goto label_05dcdcbd;
		renderer.GetSharedMaterials(CameraOcclusion.SharedMaterials);
		pSVar3 = (Dictionary<object, object>)CameraOcclusion.Overrides;
		if (pSVar3 == null) goto label_05dcdcbd;
		bVar5 = pSVar3.TryGetValue((object)renderer, (object*)&local_40);
		pCVar7 = local_40;
		if (bVar5) {
			pMVar10 = extraout_RDX;
			if ((typeof(CameraOcclusion)._2).cctor_finished_or_no_cctor == 0) {
				pMVar10 = extraout_RDX_00;
			}
			if (pCVar7 == null) goto label_05dcdcbd;
			bVar5 = pCVar7.Matches(CameraOcclusion.SharedMaterials);
			if (!bVar5) goto label_05dcda26;
		}
		else {
	label_05dcda26: ;
			__this = CameraOcclusion.SharedMaterials;
			if (__this == null) goto label_05dcdcbd;
			pUVar6 = (Material[])__this.ToArray();
			pCVar7 = new CameraOcclusion.MaterialOverride();
			pCVar7.Originals = pUVar6;
			if (pUVar6 == null) goto label_05dcdcbd;
			pUVar6 = (Material[])new Material[(uint32_t)pUVar6.Length];
			pCVar7.Replacements = pUVar6;
			pSVar3 = (Dictionary<object, object>)CameraOcclusion.Overrides;
			local_40 = pCVar7;
			if (pSVar3 == null) goto label_05dcdcbd;
			pSVar3.set_Item((object)renderer, (object)pCVar7);
		}
		local_38 = renderer;
		if (local_40 != null) {
			lVar9 = 0x20;
			uVar12 = 0;
			bVar11 = 0;
			while (true) {
				item = local_38;
				pUVar6 = local_40.Originals;
				if (!(pUVar6 != null)) break;
				uVar2 = (uint)pUVar6.Length;
				pMVar10 = (MethodInfo)(long)(int)uVar2;
				if ((long)pMVar10 <= (long)uVar12) {
					if (bVar11 != 0) {
						local_38.sharedMaterials = local_40.Replacements;
						pMVar10 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
						__this_00 = CameraOcclusion.AppliedRenderers;
						if (__this_00 == null) break;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_00._items;
						if (pUVar4 == null) break;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_00._size = uVar2 + 1;
							pUVar4[(int)uVar2] = item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
					}
					return;
				}
				if (uVar2 <= uVar12) {
	label_05dcdcc2: ;
					throw new IndexOutOfRangeException();
				}
				original = pUVar6[uVar12];
				x = CameraOcclusion.GetReplacement(original);
				if ((local_40 == null) ||(pUVar6 = local_40.Replacements, pUVar6 == null)) break;
				if (x != null) {
					pIVar8 = il2cpp_vm_Object_IsInst((object)x, (((pUVar6.obj).klass)._1).element_class);
					if (pIVar8 == null) {
						pIVar8 = new ArrayTypeMismatchException();
						throw pIVar8;
					}
				}
				if ((uint)pUVar6.Length <= uVar12) goto label_05dcdcc2;
				pUVar6[uVar12] = x;
				bVar5 = ((Object)x != (Object)original);
				bVar11 = bVar11 | bVar5;
				uVar12 = uVar12 + 1;
				lVar9 = lVar9 + 8;
				if (local_40 == null) break;
			}
		}
	label_05dcdcbd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054EA")]
	[Address(RVA = "0x5CCECC0", Offset = "0x5CCDCC0", VA = "0x5CCECC0")]
	private static Material GetReplacement(Material original)
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$GetReplacement): 2 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		HashSet<object> __this;
		bool bVar2;
		Object pUVar3;
		String key;
		Material __this_00;
		Material local_38;
		String local_30;

		local_30 = null;
		local_38 = null;
		bVar2 = ((Object)original == null);
		if (bVar2) {
			return original;
		}
		if (original != null) {
			pUVar3 = (Object)original.shader;
			bVar2 = (pUVar3 == null);
			if (bVar2) {
				return original;
			}
			pSVar1 = (Dictionary<object, object>)CameraOcclusion.ShaderReplacements;
			pUVar3 = (Object)original.shader;
			if ((pUVar3 != null) &&(key = pUVar3.name, pSVar1 != null)) {
				bVar2 = pSVar1.TryGetValue((object)key, (object*)&local_30);
				if (!bVar2) {
					return original;
				}
				pSVar1 = (Dictionary<object, object>)CameraOcclusion.MaterialCopies;
				if (pSVar1 != null) {
					bVar2 = pSVar1.TryGetValue((object)original, (object*)&local_38);
					if (!bVar2) {
						pUVar3 = (Object)Shader.Find(local_30);
						bVar2 = (pUVar3 == null);
						if (bVar2) {
							return original;
						}
						__this_00 = new Material(original);
						if (__this_00 == null) goto label_05dcef73;
						__this_00.shader = (Shader)pUVar3;
						local_38 = __this_00;
						pSVar1 = (Dictionary<object, object>)CameraOcclusion.MaterialCopies;
						if (pSVar1 == null) goto label_05dcef73;
						pSVar1.Add((object)original, (object)local_38);
					}
					__this = (HashSet<object>)CameraOcclusion.UpdatedMaterials;
					if (__this != null) {
						bVar2 = __this.Add((object)original) ;
						if (bVar2) {
							if (local_38 == null) goto label_05dcef73;
							local_38.CopyPropertiesFromMaterial(original);
						}
						return local_38;
					}
				}
			}
		}
	label_05dcef73: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054EB")]
	[Address(RVA = "0x5CCCC10", Offset = "0x5CCBC10", VA = "0x5CCCC10")]
	private static void RestoreMaterials()
	{
		// Lifted from source/cpp/Cameras/CameraOcclusion.c (Cameras.CameraOcclusion$$RestoreMaterials): 6 lines keep C-only constructs
		int piVar1;
		int length;
		List<Renderer> pSVar2;
		Dictionary<object, object> __this;
		Object x;
		bool bVar3;
		object pIVar4;
		Cameras_CameraOcclusion_StaticFields pCVar5;
		byte[] local_68 = new byte[8];
		Object local_58;
		byte[] local_48 = new byte[16];
		Object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar2 = CameraOcclusion.AppliedRenderers;
		if (pSVar2 != null) {
			local_48.GetEnumerator((List<object>)pSVar2);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = local_68;
			while(true) {
				bVar3 = local_68.MoveNext();
				x = local_58;
				if (!bVar3) break;
				bVar3 = (x != null);
				if (bVar3) {
					__this = (Dictionary<object, object>)CameraOcclusion.Overrides;
					if (__this == null) {
						throw new NullReferenceException();
					}
					pIVar4 = __this.get_Item((object)x);
					if (pIVar4 == null) {
						throw new NullReferenceException();
					}
					if (x == null) {
						throw new NullReferenceException();
					}
					x.sharedMaterials = (Material[])pIVar4[1].klass;
				}
			}
			local_68.Dispose();
			pCVar5 = typeof(CameraOcclusion).static_fields;
			pSVar2 = pCVar5.AppliedRenderers;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
					pCVar5 = typeof(CameraOcclusion).static_fields;
				}
				Shader.SetGlobalFloat(pCVar5.RadiusId, 0.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Cameras/CameraOcclusion.c.

	// Cameras.CameraOcclusion$$.cctor: 5 lines keep C-only constructs
	static CameraOcclusion()
	{
		uint uVar1;
		Utility_PhysicsLayer_StaticFields pUVar2;
		Cameras_CameraOcclusion_StaticFields pCVar3;
		int iVar4;
		LayerMask UVar5;
		Int32[] pSVar6;
		Dictionary<string, string> __this;
		Dictionary<Collider, Renderer[]> __this_00;
		HashSet<Collider> __this_01;
		Dictionary<Renderer, Renderer> __this_02;
		List<CameraOcclusion.FallbackGrid> __this_03;
		HashSet<Renderer> __this_04;
		Dictionary<Material, Material> __this_05;
		Dictionary<Renderer, CameraOcclusion.MaterialOverride> __this_06;
		List<Renderer> __this_07;
		List<Material> __this_08;
		HashSet<Material> __this_09;
		Collider[] pUVar7;
		RaycastHit[] pUVar8;

		iVar4 = Shader.PropertyToID("_CameraOcclusionStart");
		CameraOcclusion.StartId = iVar4;
		iVar4 = Shader.PropertyToID("_CameraOcclusionEnd");
		CameraOcclusion.EndId = iVar4;
		iVar4 = Shader.PropertyToID("_CameraOcclusionRadius");
		CameraOcclusion.RadiusId = iVar4;
		iVar4 = Shader.PropertyToID("_CameraOcclusionGroundPlane");
		CameraOcclusion.GroundPlaneId = iVar4;
		pSVar6 = (Int32[])new int[7];
		if (pSVar6 == null) goto label_05dcf67b;
		uVar1 = (uint)pSVar6.Length;
		if (uVar1 != 0) {
			pUVar2 = typeof(PhysicsLayer).static_fields;
			pSVar6[0] = pUVar2.MapObjectAll;
			if (((((uVar1 != 1) && (pSVar6[1] = pUVar2.MapObjectEntities, 2 < uVar1)) &&(pSVar6[2] = pUVar2.MapObjectCharacters, uVar1 != 3)) &&((pSVar6[3] = pUVar2.MapObjectTitans, 4 < uVar1 &&(pSVar6[4] = pUVar2.MapObjectHumans, uVar1 != 5)))) &&(pSVar6[5] = pUVar2.MapObjectProjectiles, 6 < uVar1)) {
				pSVar6[6] = pUVar2.MapObjectMapObjects;
				UVar5 = PhysicsLayer.GetMask(pSVar6);
				iVar4 = ((LayerMask)UVar5);
				CameraOcclusion.MapMask = iVar4;
				pSVar6 = (Int32[])new int[4];
				if (pSVar6 == null) {
	label_05dcf67b: ;
					throw new NullReferenceException();
				}
				uVar1 = (uint)pSVar6.Length;
				if (uVar1 != 0) {
					pUVar2 = typeof(PhysicsLayer).static_fields;
					pSVar6[0] = pUVar2.MapObjectAll;
					if (((uVar1 != 1) && (pSVar6[1] = pUVar2.MapObjectEntities, 2 < uVar1)) &&(pSVar6[2] = pUVar2.MapObjectCharacters, uVar1 != 3)) {
						pSVar6[3] = pUVar2.MapObjectTitans;
						UVar5 = PhysicsLayer.GetMask(pSVar6);
						iVar4 = ((LayerMask)UVar5);
						CameraOcclusion.GroundMask = iVar4;
						__this = new Dictionary<string, string>();
						if (__this != null) {
							__this.Add((Il2CppObject *)"Universal Render Pipeline/Lit", (Il2CppObject *)"AoTTG/Camera Occlusion/Lit");
							__this.Add((Il2CppObject *)"Universal Render Pipeline/Simple Lit", (Il2CppObject *)"AoTTG/Camera Occlusion/Simple Lit");
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.ShaderReplacements = __this;
							__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Collider, Renderer[]>));
							__this_00 = new Dictionary<object, object>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.ColliderRenderers = __this_00;
							__this_01 = new HashSet<Collider>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.StaticColliders = __this_01;
							__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Renderer, Renderer>));
							__this_02 = new Dictionary<object, object>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.CombinedRenderers = __this_02;
							__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CameraOcclusion.FallbackGrid>));
							__this_03 = new List<object>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.FallbackGrids = __this_03;
							__this_04 = new HashSet<Renderer>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.Candidates = __this_04;
							__this_05 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Material, Material>));
							__this_05 = new Dictionary<object, object>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.MaterialCopies = __this_05;
							__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Renderer, CameraOcclusion.MaterialOverride>));
							__this_06 = new Dictionary<object, object>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.Overrides = __this_06;
							__this_07 = new List<Renderer>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.AppliedRenderers = __this_07;
							__this_08 = new List<Material>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.SharedMaterials = __this_08;
							__this_09 = new HashSet<Material>();
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3.UpdatedMaterials = __this_09;
							pUVar7 = (Collider[])new Collider[0x80];
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3._colliders = pUVar7;
							pUVar8 = (RaycastHit[])new RaycastHit[0x10];
							pCVar3 = typeof(CameraOcclusion).static_fields;
							pCVar3._groundHits = pUVar8;
							return;
						}
						goto label_05dcf67b;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
