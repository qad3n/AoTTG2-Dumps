// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapFracture
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapFracture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003F7")]
internal sealed class MapFracture
{
	[Token(Token = "0x20003F8")]
	public readonly struct Vertex
	{
		[Token(Token = "0x4001477")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vector3 Position;

		[Token(Token = "0x4001478")]
		[FieldOffset(Offset = "0xC")]
		public readonly Vector3 Normal;

		[Token(Token = "0x4001479")]
		[FieldOffset(Offset = "0x18")]
		public readonly Vector2 UV;

		[Token(Token = "0x400147A")]
		[FieldOffset(Offset = "0x20")]
		public readonly float Shade;

		[Token(Token = "0x6001968")]
		[Address(RVA = "0x588B720", Offset = "0x588A720", VA = "0x588B720")]
		public Vertex(Vector3 position, Vector3 normal, Vector2 uv, float shade)
		{
			// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture.Vertex$$.ctor): clean
			this.Position.x = position.x;
			this.Position.y = position.y;
			this.Position.z = position.z;
			this.Normal.x = normal.x;
			this.Normal.y = normal.y;
			this.Normal.z = normal.z;
			this.UV = uv;
			this.Shade = shade;
			return;
		}

		[Token(Token = "0x6001969")]
		[Address(RVA = "0x588D0A0", Offset = "0x588C0A0", VA = "0x588D0A0")]
		public static Vertex Lerp(Vertex a, Vertex b, float t)
		{
			// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture.Vertex$$Lerp): 39 lines keep C-only constructs
			byte[] auVar1 = new byte[16];
			UnityEngine_Vector3_StaticFields pUVar2;
			uint uVar3;
			uint extraout_XMM0_Db;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			float fVar11;
			Vector2 UVar12;
			byte[] auVar13 = new byte[16];
			float fVar14;
			float fVar15;
			float fVar16;
			float fVar17;
			Vector3 local_70;
			float fStack_64;
			ulong uStack_60;
			byte[] local_58 = new byte[8];
			float fStack_50;
			float fStack_4c;
			byte[] local_48 = new byte[8];
			Vector3 UStack_40;
			float fStack_34;
			float fStack_30;
			float fStack_2c;
			byte[] local_28 = new byte[16];
			byte[] local_18 = new byte[16];

			local_48._0_4_ = a.Position.x;
			local_48._4_4_ = a.Position.y;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			local_18._0_4_ = b.Position.x;
			local_18._4_4_ = b.Position.y;
			local_18._8_4_ = 0.0;
			local_18._12_4_ = 0.0;
			UStack_40.z = 1.0;
			if (t <= 1.0) {
				UStack_40.z = t;
			}
			UStack_40.z = (float)(-(uint)(0.0 <= t) & (uint)UStack_40.z);
			fVar4 = b.Normal.x - a.Normal.x;
			fVar6 = b.Normal.y - a.Normal.y;
			local_28 = ZEXT416((uint)UStack_40.z);
			fStack_34 = UStack_40.z;
			fStack_30 = UStack_40.z;
			fStack_2c = UStack_40.z;
			fVar8 = 0.0;
			fVar10 = 0.0;
			fVar14 = UStack_40.z;
			fVar15 = 0.0;
			fVar16 = 0.0;
			fVar17 = 0.0;
			if (Il2CppMethodInitialized_0753e72d == false) {
				fStack_64 = fVar6;
				local_70.z = fVar4;
				uStack_60._0_4_ = 0.0;
				uStack_60._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e72d = true;
				fVar4 = local_70.z;
				fVar6 = fStack_64;
				fVar8 = (float)uStack_60;
				fVar10 = uStack_60._4_4_;
				fVar14 = (float)local_58._0_4_;
				fVar15 = (float)local_58._4_4_;
				fVar16 = fStack_50;
				fVar17 = fStack_4c;
			}
			fVar14 = fVar14 * (b.Normal.z - a.Normal.z);
			local_70.x = 0.0;
			local_70.y = 0.0;
			fVar5 = fVar4 * UStack_40.z;
			fVar7 = fVar6 * fStack_34;
			fVar9 = fVar8 * fStack_30;
			fVar11 = fVar10 * fStack_2c;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_58._4_4_ = fVar15;
				local_58._0_4_ = fVar14;
				fStack_50 = fVar16;
				fStack_4c = fVar17;
				fStack_64 = fVar6 * fStack_34;
				local_70.z = fVar4 * UStack_40.z;
				uStack_60._4_4_ = fVar10 * fStack_2c;
				uStack_60._0_4_ = fVar8 * fStack_30;
				Il2CppMethodInitialized_0753e729 = true;
				fVar5 = local_70.z;
				fVar7 = fStack_64;
				fVar9 = (float)uStack_60;
				fVar11 = uStack_60._4_4_;
				fVar14 = (float)local_58._0_4_;
			}
			auVar13._0_4_ = a.Normal.x + fVar5;
			auVar13._4_4_ = a.Normal.y + fVar7;
			auVar13._8_4_ = fVar9 + 0.0;
			auVar13._12_4_ = fVar11 + 0.0;
			fVar14 = a.Normal.z + fVar14;
			uVar3 = 0;
			fVar4 = fVar14 * fVar14 + auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_;
			if (fVar4 < 0.0) {
				fVar4 = sqrtf(fVar4);
				uVar3 = extraout_XMM0_Db;
			}
			else {
				fVar4 = SQRT(fVar4);
			}
			if (fVar4 <= 1e-05) {
				pUVar2 = typeof(Vector3).static_fields;
				fVar14 = (pUVar2.zeroVector).z;
			}
			else {
				fVar14 = fVar14 / fVar4;
				auVar1._4_4_ = fVar4;
				auVar1._0_4_ = fVar4;
				auVar1._8_4_ = uVar3;
				auVar1._12_4_ = uVar3;
				auVar13 = divps(auVar13, auVar1);
				local_70.x = auVar13._0_4_;
				local_70.y = auVar13._4_4_;
				pUVar2 = (UnityEngine_Vector3_StaticFields)&local_70;
			}
			fVar4 = (pUVar2.zeroVector).x;
			fVar6 = (pUVar2.zeroVector).y;
			UVar12.x = (b.UV.x - a.UV.x) * UStack_40.z + a.UV.x;
			UVar12.y = (b.UV.y - a.UV.y) * fStack_34 + a.UV.y;
			__return_storage_ptr__.Position.x =((float)local_18._0_4_ - (float)local_48._0_4_) * UStack_40.z + (float)local_48._0_4_;
			__return_storage_ptr__.Position.y =((float)local_18._4_4_ - (float)local_48._4_4_) * fStack_34 + (float)local_48._4_4_;
			__return_storage_ptr__.Position.z =(b.Position.z - a.Position.z) * (float)local_28._0_4_ + a.Position.z;
			__return_storage_ptr__.Normal.x = fVar4;
			__return_storage_ptr__.Normal.y = fVar6;
			__return_storage_ptr__.Normal.z = fVar14;
			__return_storage_ptr__.UV = UVar12;
			__return_storage_ptr__.Shade =(b.Shade - a.Shade) * (float)local_28._0_4_ + a.Shade;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x20003F9")]
	public readonly struct Triangle
	{
		[Token(Token = "0x400147B")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vertex A;

		[Token(Token = "0x400147C")]
		[FieldOffset(Offset = "0x24")]
		public readonly Vertex B;

		[Token(Token = "0x400147D")]
		[FieldOffset(Offset = "0x48")]
		public readonly Vertex C;

		[Token(Token = "0x400147E")]
		[FieldOffset(Offset = "0x6C")]
		public readonly int Submesh;

		[Token(Token = "0x600196A")]
		[Address(RVA = "0x5888F60", Offset = "0x5887F60", VA = "0x5888F60")]
		public Triangle(Vertex a, Vertex b, Vertex c, int submesh)
		{
			// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture.Triangle$$.ctor): 9 lines keep C-only constructs
			MapFracture.Vertex pMVar1;

			this.A.Shade = a.Shade;
			pMVar1 = &this.A;
			pMVar1.Normal.y = a.Normal.y;
			pMVar1.Normal.z = a.Normal.z;
			this.A.UV = a.UV;
			pMVar1 = &this.A;
			pMVar1.Position.x = a.Position.x;
			pMVar1.Position.y = a.Position.y;
			*(ulong)&this.A.Position.z = a._8_8_;
			pMVar1 = &this.B;
			pMVar1.Position.x = b.Position.x;
			pMVar1.Position.y = b.Position.y;
			*(ulong)&this.B.Position.z = b._8_8_;
			pMVar1 = &this.B;
			pMVar1.Normal.y = b.Normal.y;
			pMVar1.Normal.z = b.Normal.z;
			this.B.UV = b.UV;
			this.B.Shade = b.Shade;
			pMVar1 = &this.C;
			pMVar1.Normal.y = c.Normal.y;
			pMVar1.Normal.z = c.Normal.z;
			this.C.UV = c.UV;
			pMVar1 = &this.C;
			pMVar1.Position.x = c.Position.x;
			pMVar1.Position.y = c.Position.y;
			*(ulong)&this.C.Position.z = c._8_8_;
			this.C.Shade = c.Shade;
			this.Submesh = submesh;
			return;
		}
	}

	[Token(Token = "0x20003FA")]
	private readonly struct Segment
	{
		[Token(Token = "0x400147F")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vertex A;

		[Token(Token = "0x4001480")]
		[FieldOffset(Offset = "0x24")]
		public readonly Vertex B;

		[Token(Token = "0x4001481")]
		[FieldOffset(Offset = "0x48")]
		public readonly int Submesh;

		[Token(Token = "0x600196B")]
		[Address(RVA = "0x588D340", Offset = "0x588C340", VA = "0x588D340")]
		public Segment(Vertex a, Vertex b, int submesh)
		{
			// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture.Segment$$.ctor): 6 lines keep C-only constructs
			MapFracture.Vertex pMVar1;

			this.A.Shade = a.Shade;
			pMVar1 = &this.A;
			pMVar1.Normal.y = a.Normal.y;
			pMVar1.Normal.z = a.Normal.z;
			this.A.UV = a.UV;
			pMVar1 = &this.A;
			pMVar1.Position.x = a.Position.x;
			pMVar1.Position.y = a.Position.y;
			*(ulong)&this.A.Position.z = a._8_8_;
			pMVar1 = &this.B;
			pMVar1.Position.x = b.Position.x;
			pMVar1.Position.y = b.Position.y;
			*(ulong)&this.B.Position.z = b._8_8_;
			pMVar1 = &this.B;
			pMVar1.Normal.y = b.Normal.y;
			pMVar1.Normal.z = b.Normal.z;
			this.B.UV = b.UV;
			this.B.Shade = b.Shade;
			this.Submesh = submesh;
			return;
		}
	}

	[Token(Token = "0x20003FB")]
	private readonly struct Opening
	{
		[Token(Token = "0x4001482")]
		[FieldOffset(Offset = "0x0")]
		public readonly Vector3 Normal;

		[Token(Token = "0x4001483")]
		[FieldOffset(Offset = "0xC")]
		public readonly int Submesh;

		[Token(Token = "0x600196C")]
		[Address(RVA = "0x588D880", Offset = "0x588C880", VA = "0x588D880")]
		public Opening(Vector3 normal, int submesh)
		{
			// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture.Opening$$.ctor): clean
			this.Normal.x = normal.x;
			this.Normal.y = normal.y;
			this.Normal.z = normal.z;
			this.Submesh = submesh;
			return;
		}
	}

	[Token(Token = "0x4001469")]
	private const float Epsilon = 0.0001f;

	[Token(Token = "0x400146A")]
	private const float WeldSize = 0.01f;

	[Token(Token = "0x400146B")]
	private const int MaxCapPoints = 2048;

	[Token(Token = "0x400146C")]
	private const int MaxNeighbors = 20;

	[Token(Token = "0x400146D")]
	private const float SeedJitter = 0.8f;

	[Token(Token = "0x400146E")]
	private const float CoplanarOpening = 0.9f;

	[Token(Token = "0x400146F")]
	private const float CapTextureScale = 0.15f;

	[Token(Token = "0x4001470")]
	private const float CapShade = 0.75f;

	[Token(Token = "0x4001471")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Triangle> _triangles;

	[Token(Token = "0x4001472")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vertex[] _corners;

	[Token(Token = "0x4001473")]
	[FieldOffset(Offset = "0x20")]
	private readonly float[] _distances;

	[Token(Token = "0x4001474")]
	[FieldOffset(Offset = "0x28")]
	private readonly Vertex[] _polygon;

	[Token(Token = "0x4001475")]
	[FieldOffset(Offset = "0x30")]
	private readonly Vertex[] _cut;

	[Token(Token = "0x4001476")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Segment> _segments;

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x5888A20", Offset = "0x5887A20", VA = "0x5888A20")]
	private MapFracture(List<Triangle> triangles)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$.ctor): clean
		MapFracture.Vertex[] pMVar1;
		Single[] pSVar2;
		List<MapFracture.Segment> __this_00;

		pMVar1 = (MapFracture.Vertex[])new MapFracture.Vertex[3];
		this._corners = pMVar1;
		pSVar2 = (Single[])new float[3];
		this._distances = pSVar2;
		pMVar1 = (MapFracture.Vertex[])new MapFracture.Vertex[6];
		this._polygon = pMVar1;
		pMVar1 = (MapFracture.Vertex[])new MapFracture.Vertex[2];
		this._cut = pMVar1;
		__this_00 = new List<MapFracture.Segment>();
		this._segments = __this_00;
		base();
		this._triangles = triangles;
		return;
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x5883710", Offset = "0x5882710", VA = "0x5883710")]
	public static MapFracture Read(MeshFilter[] filters, Transform root, List<Material> materials, int maxTriangles)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Read): 95 lines keep C-only constructs
		int piVar1;
		Vector2 pUVar2;
		MeshFilter pUVar3;
		Material pUVar4;
		Material[] pUVar5;
		MapFracture.Triangle[] pMVar6;
		Matrix4x4 toRoot;
		Matrix4x4 toRoot_00;
		Matrix4x4 toRoot_01;
		MapFracture.Triangle item;
		Matrix4x4 normalToRoot;
		Matrix4x4 normalToRoot_00;
		Matrix4x4 normalToRoot_01;
		MapFracture.Triangle pMVar7;
		MapFracture.Vertex pMVar8;
		List<Material> __this;
		bool bVar10;
		int iVar11;
		List<MapFracture.Triangle> __this_00;
		Mesh pUVar12;
		MeshRenderer pUVar13;
		Transform __this_01;
		Vector3[] pUVar14;
		Vector3[] pUVar15;
		Vector2[] pUVar16;
		Int32[] pSVar17;
		uint uVar18;
		uint uVar19;
		uint uVar20;
		uint uVar21;
		il2cpp_array_size_t iVar22;
		uint uVar23;
		bool hasNormals;
		float fVar24;
		float local_304;
		Mesh local_300;
		Material[] local_2f8;
		MapFracture local_2f0;
		Dictionary<Material, int> local_2e8;
		int local_2dc;
		uint local_2d8;
		int local_2d4;
		int local_2d0;
		int local_2cc;
		ulong local_2c8;
		float fStack_2c0;
		float fStack_2bc;
		ulong local_2b8;
		Vector2 UStack_2b0;
		float local_2a8;
		float fStack_2a4;
		float fStack_2a0;
		float fStack_29c;
		float local_298;
		float fStack_294;
		float fStack_290;
		float fStack_28c;
		ulong local_288;
		Vector3 UStack_280;
		float local_258;
		float fStack_254;
		float fStack_250;
		float fStack_24c;
		Transform local_248;
		Int32[] local_240;
		Matrix4x4 local_238;
		ulong local_1f8;
		Vector2 UStack_1f0;
		ulong local_1e8;
		float fStack_1e0;
		float fStack_1dc;
		ulong local_1d8;
		ulong uStack_1d0;
		Vector3[] local_1c8;
		float fStack_1c0;
		float fStack_1bc;
		Vector3[] local_1b8;
		Vector2 UStack_1b0;
		ulong local_1a8;
		ulong uStack_1a0;
		ulong local_198;
		ulong uStack_190;
		List<Material> local_188;
		MeshFilter[] local_180;
		List<MapFracture.Triangle> local_178;
		ulong local_170;
		ulong local_168;
		Vector2[] local_160;
		Vector3[][] local_158 = new Vector3[][2];
		Vector3[] local_148;
		Vector2 UStack_140;
		float local_138;
		float fStack_134;
		float fStack_130;
		float fStack_12c;
		float local_128;
		float fStack_124;
		float fStack_120;
		float fStack_11c;
		float local_118;
		Vector3 UStack_110;
		Vector3[] local_e8;
		ulong uStack_e0;
		Vector2 UStack_d0;
		ulong local_c8;
		ulong uStack_c0;
		ulong local_b8;
		ulong uStack_b0;
		MapFracture.Vertex local_a8;
		MapFracture.Vertex local_80;
		Vector3[][] local_58 = new Vector3[][2];
		Vector3[] local_48;
		Vector2 UStack_40;
		float local_38;

		local_2dc = maxTriangles;
		local_248 = root;
		if (Il2CppMethodInitialized_07545a15 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<MapFracture.Triangle>)) ;
			Il2CppMethodInitialized_07545a15 = true;
		}
		local_238.m03 = 0.0;
		local_238.m13 = 0.0;
		local_238.m23 = 0.0;
		local_238.m33 = 0.0;
		local_238.m02 = 0.0;
		local_238.m12 = 0.0;
		local_238.m22 = 0.0;
		local_238.m32 = 0.0;
		local_238.m01 = 0.0;
		local_238.m11 = 0.0;
		local_238.m21 = 0.0;
		local_238.m31 = 0.0;
		local_238.m00 = 0.0;
		local_238.m10 = 0.0;
		local_238.m20 = 0.0;
		local_238.m30 = 0.0;
		local_b8._0_4_ = 0.0;
		local_b8._4_4_ = 0.0;
		uStack_b0._0_4_ = 0.0;
		uStack_b0._4_4_ = 0.0;
		local_c8._0_4_ = 0.0;
		local_c8._4_4_ = 0.0;
		uStack_c0._0_4_ = 0.0;
		uStack_c0._4_4_ = 0.0;
		UStack_d0.x = 0.0;
		UStack_d0.y = 0.0;
		local_e8 = null;
		uStack_e0._0_4_ = 0.0;
		uStack_e0._4_4_ = 0.0;
		local_304 = 0.0;
		local_2e8 = new Dictionary<Material, int>();
		__this_00 = new List<MapFracture.Triangle>();
		if (filters != null) {
			uVar21 = (uint)filters.Length;
			if (local_248 == null) {
				if (0 < (int)uVar21) {
					pUVar3 = filters[0];
					if ((pUVar3 != null) &&(pUVar12 = pUVar3.sharedMesh, pUVar12 != null)) {
						bVar10 = pUVar12.isReadable;
						if (!bVar10) {
							return local_2f0;
						}
						pUVar13 = pUVar3.GetComponent<MeshRenderer>();
						if (pUVar13 != null) {
							pUVar13.sharedMaterials;
							throw new NullReferenceException();
						}
					}
					goto label_059843bd;
				}
			}
			else {
				local_188 = materials;
				if (0 < (int)uVar21) {
					uVar23 = 0;
					local_180 = filters;
					local_178 = __this_00;
					do {
						if (uVar21 <= uVar23) {
	label_0598446f: ;
							throw new IndexOutOfRangeException();
						}
						pUVar3 = local_180[(int)uVar23];
						local_2d8 = uVar23;
						if ((pUVar3 == null) ||(pUVar12 = pUVar3.sharedMesh, pUVar12 == null)) goto label_059843bd;
						bVar10 = pUVar12.isReadable;
						if (!bVar10) {
							return local_2f0;
						}
						local_300 = pUVar12;
						pUVar13 = pUVar3.GetComponent<MeshRenderer>();
						if (pUVar13 == null) goto label_059843bd;
						local_2f8 = pUVar13.sharedMaterials;
						local_2c8 = local_248.worldToLocalMatrix;
						local_1e8 = local_2c8;
						fStack_1e0 = fStack_2c0;
						fStack_1dc = fStack_2bc;
						local_1f8 = local_2b8;
						UStack_1f0 = UStack_2b0;
						local_1d8 = CONCAT44(fStack_2a4, local_2a8);
						uStack_1d0 = CONCAT44(fStack_29c, fStack_2a0);
						local_258 = local_298;
						fStack_254 = fStack_294;
						fStack_250 = fStack_290;
						fStack_24c = fStack_28c;
						__this_01 = pUVar3.transform;
						if (__this_01 == null) goto label_059843bd;
						local_2c8 = __this_01.localToWorldMatrix;
						local_238.m10 = fStack_2bc * fStack_254 + fStack_2c0 * local_1d8._4_4_ + local_2c8._4_4_ * local_1f8._4_4_ + (float)local_2c8 * local_1e8._4_4_;
						local_238.m00 = fStack_2bc * local_258 + fStack_2c0 * (float)local_1d8 + local_2c8._4_4_ * (float)local_1f8 + (float)local_2c8 * (float)local_1e8;
						local_238.m30 = fStack_2bc * fStack_24c + fStack_2c0 * uStack_1d0._4_4_ + local_2c8._4_4_ * UStack_1f0.y + (float)local_2c8 * fStack_1dc;
						local_238.m20 = fStack_2bc * fStack_250 + fStack_2c0 * (float)uStack_1d0 + local_2c8._4_4_ * UStack_1f0.x + (float)local_2c8 * fStack_1e0 ;
						local_238.m11 = UStack_2b0.y * fStack_254 + UStack_2b0.x * local_1d8._4_4_ + local_2b8._4_4_ * local_1f8._4_4_ + (float)local_2b8 * local_1e8._4_4_;
						local_238.m01 = UStack_2b0.y * local_258 + UStack_2b0.x * (float)local_1d8 + local_2b8._4_4_ * (float)local_1f8 + (float)local_2b8 * (float)local_1e8;
						local_238.m31 = UStack_2b0.y * fStack_24c + UStack_2b0.x * uStack_1d0._4_4_ + local_2b8._4_4_ * UStack_1f0.y + (float)local_2b8 * fStack_1dc;
						local_238.m21 = UStack_2b0.y * fStack_250 + UStack_2b0.x * (float)uStack_1d0 + local_2b8._4_4_ * UStack_1f0.x + (float)local_2b8 * fStack_1e0;
						local_238.m12 = fStack_29c * fStack_254 + fStack_2a0 * local_1d8._4_4_ + fStack_2a4 * local_1f8._4_4_ + local_2a8 * local_1e8._4_4_;
						local_238.m02 = fStack_29c * local_258 + fStack_2a0 * (float)local_1d8 + fStack_2a4 * (float)local_1f8 + local_2a8 * (float)local_1e8;
						local_238.m32 = fStack_29c * fStack_24c + fStack_2a0 * uStack_1d0._4_4_ + fStack_2a4 * UStack_1f0.y + local_2a8 * fStack_1dc;
						local_238.m22 = fStack_29c * fStack_250 + fStack_2a0 * (float)uStack_1d0 + fStack_2a4 * UStack_1f0.x + local_2a8 * fStack_1e0;
						local_238.m13 = fStack_28c * fStack_254 + fStack_290 * local_1d8._4_4_ + fStack_294 * local_1f8._4_4_ + local_298 * local_1e8._4_4_;
						local_238.m03 = fStack_28c * local_258 + fStack_290 * (float)local_1d8 + fStack_294 * (float)local_1f8 + local_298 * (float)local_1e8;
						local_238.m33 = fStack_28c * fStack_24c + fStack_290 * uStack_1d0._4_4_ + fStack_294 * UStack_1f0.y + local_298 * fStack_1dc;
						local_238.m23 = fStack_28c * fStack_250 + fStack_290 * (float)uStack_1d0 + fStack_294 * UStack_1f0.x + local_298 * fStack_1e0;
						local_2c8 = Matrix4x4.Internal_Inverse(ref local_238);
						local_c8._4_4_ = fStack_2a4;
						local_c8._0_4_ = local_2a8;
						uStack_c0._4_4_ = fStack_29c;
						uStack_c0._0_4_ = fStack_2a0;
						local_b8._0_4_ = local_298;
						local_b8._4_4_ = fStack_294;
						uStack_b0._0_4_ = fStack_290;
						uStack_b0._4_4_ = fStack_28c;
						UStack_d0 = UStack_2b0;
						local_e8 = local_2c8;
						uStack_e0._0_4_ = fStack_2c0;
						uStack_e0._4_4_ = fStack_2bc;
						Matrix4x4.Internal_Transpose((Matrix4x4)local_158, ref local_e8);
						local_1a8 = CONCAT44(fStack_134, local_138);
						uStack_1a0 = CONCAT44(fStack_12c, fStack_130);
						local_198 = CONCAT44(fStack_124, local_128);
						uStack_190 = CONCAT44(fStack_11c, fStack_120);
						local_1b8 = local_148;
						UStack_1b0 = UStack_140;
						local_1c8 = local_158[0];
						fVar24 = local_238.GetDeterminant();
						pUVar12 = local_300;
						local_258 = fVar24;
						pUVar14 = local_300.vertices;
						pUVar15 = pUVar12.normals;
						pUVar16 = pUVar12.uv;
						local_1f8 = pUVar15;
						if (((pUVar15 == null) || (pUVar14 == null)) || (pUVar16 == null)) goto label_059843bd;
						local_2cc = (int)pUVar15.Length;
						local_2d0 = (int)pUVar14.Length;
						local_2d4 = (int)pUVar16.Length;
						local_1e8 = pUVar14;
						local_160 = pUVar16;
						iVar11 = pUVar12.subMeshCount;
						if (0 < iVar11) {
							if (local_2f8 == null) goto label_059843bd;
							if (local_2e8 == null) {
								uVar21 = 0;
								do {
									if (local_2f8.Length == 0) break;
									uVar23 = (uint)local_2f8.Length;
									uVar18 = uVar23 - 1;
									if ((int)uVar21 < (int)uVar18) {
										uVar18 = uVar21;
									}
									if (uVar23 <= uVar18) goto label_0598446f;
									pUVar4 = local_2f8[(int)uVar18];
									bVar10 = ((Object)pUVar4 == null);
									pUVar12 = local_300;
									if ((!bVar10) &&(iVar11 = local_300.GetTopology(uVar21), iVar11 == 0)) goto label_059843bd;
									uVar21 = uVar21 + 1;
									iVar11 = pUVar12.subMeshCount;
								} while ((int)uVar21 < iVar11);
							}
							else {
								local_170 = (ulong)(2 - (local_258 < 0.0));
								local_168 = (ulong)((local_258 < 0.0) + 1);
								uVar21 = 0;
								do {
									if (local_2f8.Length == 0) break;
									uVar23 = (uint)local_2f8.Length;
									uVar18 = uVar23 - 1;
									if ((int)uVar21 < (int)uVar18) {
										uVar18 = uVar21;
									}
									if (uVar23 <= uVar18) goto label_0598446f;
									pUVar4 = local_2f8[(int)uVar18];
									bVar10 = ((Object)pUVar4 == null);
									if ((!bVar10) &&(iVar11 = local_300.GetTopology(uVar21), iVar11 == 0)) {
										bVar10 = local_2e8.TryGetValue((object)pUVar4, ref local_304);
										__this = local_188;
										if (!bVar10) {
											if (local_188 == null) goto label_059843bd;
											local_304 = (float)local_188._size;
											local_2e8.Add((object)pUVar4, (int32_t)local_304);
											piVar1 = &__this._version;
											*piVar1 = *piVar1 + 1;
											pUVar5 = __this._items;
											if (pUVar5 == null) goto label_059843bd;
											uVar23 = __this._size;
											if (uVar23 < (uint)pUVar5.Length) {
												__this._size = uVar23 + 1;
												pUVar5[(int)uVar23] = pUVar4;
											}
											else {
												__this.AddWithResize((object)pUVar4);
											}
										}
										pSVar17 = local_300.GetTriangles(uVar21);
										if ((__this_00 == null) ||(pSVar17 == null)) goto label_059843bd;
										iVar22 = pSVar17.Length;
										if (local_2dc < (int)iVar22 / 3 + __this_00._size) {
											return local_2f0;
										}
										if (0 < (int)iVar22) {
											uVar23 = 0;
											local_240 = pSVar17;
											do {
												pUVar16 = local_160;
												pUVar15 = local_1e8;
												pUVar14 = local_1f8;
												uVar18 = (uint)iVar22;
												if (((uVar18 <= uVar23) || (uVar19 = (int)local_168 + uVar23, uVar18 <= uVar19)) ||(uVar20 = (int)local_170 + uVar23, uVar18 <= uVar20)) goto label_0598446f;
												bVar10 = local_2d4 == local_2d0;
												hasNormals = local_2cc == local_2d0;
												local_1d8 = CONCAT44(local_1d8._4_4_, local_240[(int)uVar19]);
												local_258 = (float)local_240[(int)uVar20];
												toRoot.m20 = local_238.m20;
												toRoot.m30 = local_238.m30;
												toRoot.m00 = local_238.m00;
												toRoot.m10 = local_238.m10;
												toRoot.m01 = local_238.m01;
												toRoot.m11 = local_238.m11;
												toRoot.m21 = local_238.m21;
												toRoot.m31 = local_238.m31;
												toRoot.m02 = local_238.m02;
												toRoot.m12 = local_238.m12;
												toRoot.m22 = local_238.m22;
												toRoot.m32 = local_238.m32;
												toRoot.m03 = local_238.m03;
												toRoot.m13 = local_238.m13;
												toRoot.m23 = local_238.m23;
												toRoot.m33 = local_238.m33;
												normalToRoot.m20 = fStack_1c0;
												normalToRoot.m30 = fStack_1bc;
												normalToRoot._0_8_ = local_1c8;
												normalToRoot._16_8_ = local_1b8;
												normalToRoot.m21 = UStack_1b0.x;
												normalToRoot.m31 = UStack_1b0.y;
												normalToRoot.m02 = (float)(undefined4)local_1a8;
												normalToRoot.m12 = (float)local_1a8._4_4_;
												normalToRoot.m22 = (float)(undefined4)uStack_1a0;
												normalToRoot.m32 = (float)uStack_1a0._4_4_;
												normalToRoot.m03 = (float)(undefined4)local_198;
												normalToRoot.m13 = (float)local_198._4_4_;
												normalToRoot.m23 = (float)(undefined4)uStack_190;
												normalToRoot.m33 = (float)uStack_190._4_4_;
												MapFracture.ReadVertex((MapFracture.Vertex)local_58, local_1e8, local_1f8, local_160, local_240[(int)uVar23], toRoot, normalToRoot, hasNormals, bVar10);
												toRoot_00.m20 = local_238.m20;
												toRoot_00.m30 = local_238.m30;
												toRoot_00.m00 = local_238.m00;
												toRoot_00.m10 = local_238.m10;
												toRoot_00.m01 = local_238.m01;
												toRoot_00.m11 = local_238.m11;
												toRoot_00.m21 = local_238.m21;
												toRoot_00.m31 = local_238.m31;
												toRoot_00.m02 = local_238.m02;
												toRoot_00.m12 = local_238.m12;
												toRoot_00.m22 = local_238.m22;
												toRoot_00.m32 = local_238.m32;
												toRoot_00.m03 = local_238.m03;
												toRoot_00.m13 = local_238.m13;
												toRoot_00.m23 = local_238.m23;
												toRoot_00.m33 = local_238.m33;
												normalToRoot_00.m20 = fStack_1c0;
												normalToRoot_00.m30 = fStack_1bc;
												normalToRoot_00._0_8_ = local_1c8;
												normalToRoot_00._16_8_ = local_1b8;
												normalToRoot_00.m21 = UStack_1b0.x;
												normalToRoot_00.m31 = UStack_1b0.y;
												normalToRoot_00.m02 = (float)(undefined4)local_1a8;
												normalToRoot_00.m12 = (float)local_1a8._4_4_;
												normalToRoot_00.m22 = (float)(undefined4)uStack_1a0;
												normalToRoot_00.m32 = (float)uStack_1a0._4_4_;
												normalToRoot_00.m03 = (float)(undefined4)local_198;
												normalToRoot_00.m13 = (float)local_198._4_4_;
												normalToRoot_00.m23 = (float)(undefined4)uStack_190;
												normalToRoot_00.m33 = (float)uStack_190._4_4_;
												local_80 = MapFracture.ReadVertex(pUVar15, pUVar14, pUVar16, (int32_t)(float)local_1d8, toRoot_00, normalToRoot_00, hasNormals, bVar10);
												toRoot_01.m20 = local_238.m20;
												toRoot_01.m30 = local_238.m30;
												toRoot_01.m00 = local_238.m00;
												toRoot_01.m10 = local_238.m10;
												toRoot_01.m01 = local_238.m01;
												toRoot_01.m11 = local_238.m11;
												toRoot_01.m21 = local_238.m21;
												toRoot_01.m31 = local_238.m31;
												toRoot_01.m02 = local_238.m02;
												toRoot_01.m12 = local_238.m12;
												toRoot_01.m22 = local_238.m22;
												toRoot_01.m32 = local_238.m32;
												toRoot_01.m03 = local_238.m03;
												toRoot_01.m13 = local_238.m13;
												toRoot_01.m23 = local_238.m23;
												toRoot_01.m33 = local_238.m33;
												normalToRoot_01.m20 = fStack_1c0;
												normalToRoot_01.m30 = fStack_1bc;
												normalToRoot_01._0_8_ = local_1c8;
												normalToRoot_01._16_8_ = local_1b8;
												normalToRoot_01.m21 = UStack_1b0.x;
												normalToRoot_01.m31 = UStack_1b0.y;
												normalToRoot_01.m02 = (float)(undefined4)local_1a8;
												normalToRoot_01.m12 = (float)local_1a8._4_4_;
												normalToRoot_01.m22 = (float)(undefined4)uStack_1a0;
												normalToRoot_01.m32 = (float)uStack_1a0._4_4_;
												normalToRoot_01.m03 = (float)(undefined4)local_198;
												normalToRoot_01.m13 = (float)local_198._4_4_;
												normalToRoot_01.m23 = (float)(undefined4)uStack_190;
												normalToRoot_01.m33 = (float)uStack_190._4_4_;
												local_a8 = MapFracture.ReadVertex(pUVar15, pUVar14, pUVar16, (int32_t)local_258, toRoot_01, normalToRoot_01, hasNormals, bVar10);
												__this_00 = local_178;
												UStack_110.x = local_a8.Position.x;
												UStack_110.y = local_a8.Position.y;
												UStack_110.z = local_a8.Position.z;
												local_158[0] = local_58[0];
												local_158[1] = local_58[1];
												local_148 = local_48;
												UStack_140 = UStack_40;
												local_138 = local_38;
												fStack_124 = local_80.Normal.y;
												fStack_120 = local_80.Normal.z;
												fStack_11c = local_80.UV.x;
												local_118 = local_80.UV.y;
												fStack_134 = local_80.Position.x;
												fStack_130 = local_80.Position.y;
												fStack_12c = local_80.Position.z;
												local_128 = local_80.Normal.x;
												fStack_294 = fStack_124;
												local_298 = local_128;
												fStack_28c = fStack_11c;
												fStack_290 = fStack_120;
												local_288 = CONCAT44(local_80.Shade, local_118);
												UStack_280.z = local_a8.Position.z;
												UStack_280.x = local_a8.Position.x;
												UStack_280.y = local_a8.Position.y;
												local_2a8 = local_38;
												fStack_29c = fStack_12c;
												local_2b8 = local_48;
												UStack_2b0 = UStack_40;
												local_2c8 = local_58[0];
												piVar1 = &local_178._version;
												*piVar1 = *piVar1 + 1;
												pMVar6 = local_178._items;
												fStack_2a4 = fStack_134;
												fStack_2a0 = fStack_130;
												if (pMVar6 == null) goto label_059843bd;
												uVar18 = local_178._size;
												if (uVar18 < (uint)pMVar6.Length) {
													local_178._size = uVar18 + 1;
													pUVar2 = &pMVar6[(int)uVar18].C.UV;
													pUVar2.fields = local_a8.UV;
													pUVar2[1] = (Vector2)CONCAT44(local_304, local_a8.Shade);
													pMVar7 = &pMVar6[(int)uVar18];
													*(ulong)((long)&(pMVar7.C).Position + 8) = local_a8._8_8_ ;
													*(ulong)((long)&(pMVar7.C).Normal + 4) = local_a8.Normal._4_8_;
													pMVar7 = &pMVar6[(int)uVar18];
													*(ulong)((long)&(pMVar7.B).UV + 4) = local_288;
													*(ulong)&(pMVar7.C).Position = local_a8.Position._0_8_;
													pMVar7 = &pMVar6[(int)uVar18];
													pMVar8 = &pMVar7.B;
													pMVar8.Normal.x = local_128;
													pMVar8.Normal.y = fStack_124;
													*(ulong)((long)&(pMVar7.B).Normal + 8) = _fStack_290;
													pMVar7 = &pMVar6[(int)uVar18];
													*(ulong)&(pMVar7.A).Shade = CONCAT44(fStack_134, local_38);
													*(ulong)((long)&(pMVar7.B).Position + 4) = CONCAT44(fStack_12c, fStack_130);
													pMVar7 = &pMVar6[(int)uVar18];
													*(Vector3[]*)((long)&(pMVar7.A).Normal + 4) = local_48;
													(pMVar7.A).UV = UStack_40;
													*(Vector3[]*)&pMVar6[(int)uVar18].A.Position = local_58[0];
													*(Vector3[]*)((long)&pMVar6[(int)uVar18].A.Position + 8) = local_58[1];
												}
												else {
													item.Submesh = (int32_t)local_304;
													item.C.Shade = local_a8.Shade;
													item.B.Position.x = fStack_134;
													item.A.Shade = local_38;
													item.B.Position.z = fStack_12c;
													item.B.Position.y = fStack_130;
													item.A._8_8_ = local_58[1];
													item.A.Position._0_8_ = local_58[0];
													item.A.Normal._4_8_ = local_48;
													item.A.UV = UStack_40;
													item.B.Normal.x = local_128;
													item.B.Normal.y = fStack_124;
													item.B.Normal.z = fStack_120;
													item.B.UV.x = fStack_11c;
													item.B.UV.y = local_118;
													item.B.Shade = local_80.Shade;
													item.C.Position.x = local_a8.Position.x;
													item.C.Position.y = local_a8.Position.y;
													item.C.Position.z = local_a8.Position.z;
													item.C.Normal.x = local_a8.Normal.x;
													item.C.Normal.y = local_a8.Normal.y;
													item.C.Normal.z = local_a8.Normal.z;
													item.C.UV = local_a8.UV;
													local_178.AddWithResize(item) ;
												}
												uVar23 = uVar23 + 3;
												iVar22 = local_240.Length;
											} while ((int)uVar23 < (int)iVar22);
										}
									}
									uVar21 = uVar21 + 1;
									iVar11 = local_300.subMeshCount;
								} while ((int)uVar21 < iVar11);
							}
						}
						uVar23 = local_2d8 + 1;
						uVar21 = (uint)local_180.Length;
					} while ((int)uVar23 < (int)uVar21);
				}
			}
			if (__this_00 != null) {
				if (__this_00._size == 0) {
				}
				else {
					local_2f0 = new MapFracture(__this_00);
				}
				return local_2f0;
			}
		}
	label_059843bd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x5887EB0", Offset = "0x5886EB0", VA = "0x5887EB0")]
	public List<List<Triangle>> Shatter(int pieceCount, float groundHeight, int seed)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Shatter): 38 lines keep C-only constructs
		int piVar1;
		MapFracture.c__DisplayClass16_1 pMVar2;
		float fVar3;
		uint uVar4;
		float fVar5;
		uint uVar6;
		uint uVar7;
		Int32[] pSVar8;
		List<MapFracture.Triangle>[] pSVar10;
		byte[] auVar11 = new byte[16];
		Bounds bounds;
		uint uVar12;
		uint uVar13;
		bool bVar14;
		int iVar15;
		MapFracture.c__DisplayClass16_0 pMVar16;
		List<List<MapFracture.Triangle>> __this_00;
		List<MapFracture.Triangle> __this_01;
		Random __this_02;
		List<Vector3> pSVar17;
		List<int> __this_03;
		List<MapFracture.Triangle> pSVar18;
		List<MapFracture.Triangle> __this_04;
		MapFracture.c__DisplayClass16_1 pMVar19;
		MapFracture.c__DisplayClass16_0 pMVar20;
		Comparison<T> comparison;
		List<MapFracture.Triangle> pSVar21;
		MethodInfo* method_00;
		int item;
		int index;
		MapFracture.c__DisplayClass16_0 targetAddress;
		MapFracture.c__DisplayClass16_0* targetAddress_00;
		uint uVar23;
		List<MapFracture.Triangle> source;
		uint extraout_XMM0_Db;
		uint uVar24;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float fVar25;
		byte[] auVar26 = new byte[16];
		Vector3 UVar27;
		Vector3 normal;
		float fStack_68;
		float fStack_64;
		Bounds UStack_48;

		if (Il2CppMethodInitialized_07545a16 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<MapFracture.Triangle>)) ;
			Il2CppMethodInitialized_07545a16 = true;
		}
		pMVar16 = new MapFracture.c__DisplayClass16_0();
		this.CloseOpenings();
		__this_00 = new List<List<MapFracture.Triangle>>();
		pSVar18 = this._triangles;
		if (pSVar18 != null) {
			iVar15 = pSVar18._size;
			__this_01 = new List<MapFracture.Triangle>(iVar15);
			pSVar18 = this._triangles;
			bVar14 = this.Clip(pSVar18, __this_01, (Vector3)(Vector3.upVector), groundHeight);
			if (!bVar14) {
				__this_01 = this._triangles;
			}
			if (__this_01 != null) {
				if (__this_01._size == 0) {
					return __this_00;
				}
				UStack_48 = MapFracture.GetBounds(__this_01);
				__this_02 = new Random(seed);
				bounds.m_Center.z = UStack_48.m_Center.z;
				bounds.m_Extents.x = UStack_48.m_Extents.x;
				bounds.m_Center.x = UStack_48.m_Center.x;
				bounds.m_Center.y = UStack_48.m_Center.y;
				bounds.m_Extents.y = UStack_48.m_Extents.y;
				bounds.m_Extents.z = UStack_48.m_Extents.z;
				pSVar17 = MapFracture.CreateSeeds(bounds, pieceCount, __this_02);
				if (pMVar16 != null) {
					targetAddress = &pMVar16.fields;
					pMVar16.seeds = pSVar17;
					pSVar17 = pMVar16.seeds;
					if (pSVar17 != null) {
						iVar15 = pSVar17._size;
						__this_03 = new List<int>(iVar15);
						iVar15 = __this_01._size;
						pSVar18 = new List<MapFracture.Triangle>(iVar15);
						iVar15 = __this_01._size;
						__this_04 = il2cpp_codegen_object_new(typeof(List<MapFracture.Triangle>)) ;
						__this_04 = new List<MapFracture.Triangle>(iVar15);
						pSVar17 = targetAddress.seeds;
						if (pSVar17 != null) {
							if (__this_03 == null) {
								if (pSVar17._size < 1) {
									return __this_00;
								}
								pMVar19 = il2cpp_codegen_object_new(typeof(MapFracture.c__DisplayClass16_1)) ;
								pMVar19 = new MapFracture.c__DisplayClass16_1();
								if (pMVar19 != null) {
									pMVar19.CS___8__locals1 = pMVar16;
									pMVar16 = pMVar19.CS___8__locals1;
									if ((pMVar16 != null) &&(pSVar17 = pMVar16.seeds, pSVar17 != null)) {
										UVar27 = pSVar17.get_Item(0);
										pMVar19.own.x = UVar27.x;
										pMVar19.own.y = UVar27.y;
										pMVar19.own.z = UVar27.z;
										throw new NullReferenceException();
									}
								}
							}
							else {
								index = 0;
								while(true) {
									if (pSVar17._size <= index) {
										return __this_00;
									}
									pMVar19 = new MapFracture.c__DisplayClass16_1();
									if (pMVar19 == null) break;
									targetAddress_00 = &pMVar19.CS___8__locals1;
									pMVar19.CS___8__locals1 = pMVar16;
									pMVar20 = pMVar19.CS___8__locals1;
									if ((pMVar20 == null) ||(pSVar17 = pMVar20.seeds, pSVar17 == null)) break;
									UVar27 = pSVar17.get_Item(index);
									pMVar19.own.x = UVar27.x;
									pMVar19.own.y = UVar27.y;
									pMVar19.own.z = UVar27.z;
									piVar1 = &__this_03._version;
									*piVar1 = *piVar1 + 1;
									__this_03._size = 0;
									pMVar20 = pMVar19.CS___8__locals1;
									if (pMVar20 == null) break;
									item = 0;
									while(true) {
										pSVar17 = pMVar20.seeds;
										if (pSVar17 == null) goto label_05988743;
										if (pSVar17._size <= item) break;
										if (index != item) {
											piVar1 = &__this_03._version;
											*piVar1 = *piVar1 + 1;
											pSVar8 = __this_03._items;
											if (pSVar8 == null) goto label_05988743;
											uVar23 = __this_03._size;
											if (uVar23 < (uint)pSVar8.Length) {
												__this_03._size = uVar23 + 1;
												pSVar8[(int)uVar23] = item;
											}
											else {
												__this_03.AddWithResize(item);
												pMVar20 = *targetAddress_00;
											}
										}
										item = item + 1;
										if (pMVar20 == null) goto label_05988743;
									}
									comparison = new Comparison<int>((object)pMVar19, (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0);
									__this_03.Sort(comparison);
									source = __this_01;
									if (0 < __this_03._size) {
										uVar23 = 0;
										do {
											if (source == null) goto label_05988743;
											if (source._size < 1) goto label_05988227;
											if (*targetAddress_00 == null) goto label_05988743;
											pSVar17 = ((*targetAddress_00).fields).seeds;
											iVar15 = __this_03.get_Item(uVar23);
											if (pSVar17 == null) goto label_05988743;
											method_00 = &MethodInfo_System_Collections_Generic_List_Vector3_get_Item;
											UVar27 = pSVar17.get_Item(iVar15);
											pMVar2 = &pMVar19.fields;
											uVar12 = (pMVar2.own).x;
											uVar13 = (pMVar2.own).y;
											fVar25 = pMVar19.own.z;
											if (Il2CppMethodInitialized_0753e72d == false) {
												Il2CppMethodInitialized_0753e72d = true;
												fVar3 = (float)uVar12;
												fVar5 = (float)uVar13;
												if (Il2CppMethodInitialized_0753e729 == false) goto label_05988603;
	label_05988467: ;
												uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
											}
											else {
												fVar3 = (pMVar2.own).x;
												fVar5 = pMVar19.own.y;
												if (Il2CppMethodInitialized_0753e729 != false) goto label_05988467;
	label_05988603: ;
												Il2CppMethodInitialized_0753e729 = true;
												uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
												fVar3 = (float)uVar12;
												fVar5 = (float)uVar13;
											}
											if (uVar7 == 0) {
												fVar3 = (float)uVar12;
												fVar5 = (float)uVar13;
											}
											uVar24 = 0;
											fStack_68 = UVar27.x;
											fStack_64 = UVar27.y;
											auVar26._0_4_ = fVar3 - fStack_68;
											auVar26._4_4_ = fVar5 - fStack_64;
											auVar26._8_4_ = 0.0 - extraout_XMM0_Dc;
											auVar26._12_4_ = 0.0 - extraout_XMM0_Dd;
											fVar25 = fVar25 - UVar27.z;
											fVar3 = fVar25 * fVar25 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
											if (fVar3 < 0.0) {
												fVar3 = sqrtf(fVar3);
												uVar24 = extraout_XMM0_Db;
												if (1e-05 < fVar3) goto label_05988512;
	label_059884c1: ;
												fVar25 = (Vector3.zeroVector).z;
												fVar3 = (Vector3.zeroVector).x;
												fVar5 = (Vector3.zeroVector).y;
											}
											else {
												fVar3 = SQRT(fVar3);
												if (fVar3 <= 1e-05) goto label_059884c1;
	label_05988512: ;
												fVar25 = fVar25 / fVar3;
												auVar11._4_4_ = fVar3;
												auVar11._0_4_ = fVar3;
												auVar11._8_4_ = uVar24;
												auVar11._12_4_ = uVar24;
												auVar26 = divps(auVar26, auVar11);
												fVar3 = auVar26._0_4_;
												fVar5 = auVar26._4_4_;
											}
											pSVar21 = __this_04;
											if (source != pSVar18) {
												pSVar21 = pSVar18;
											}
											uVar4 = pMVar19.own.x;
											uVar6 = pMVar19.own.y;
											normal.y = fVar5;
											normal.x = fVar3;
											normal.z = fVar25;
											bVar14 = this.Clip(source, pSVar21, normal, fVar3 * ((float)uVar4 + fStack_68) * 0.5 + fVar5 * (fStack_64 + (float)uVar6) * 0.5 + fVar25 * (pMVar19.own.z + UVar27.z) * 0.5);
											if (!bVar14) {
												pSVar21 = source;
											}
											source = pSVar21;
										} while ((uVar23 < 0x13) && (uVar23 = uVar23 + 1, (int)uVar23 < __this_03._size));
									}
									if (source == null) break;
									if (0 < source._size) {
										pSVar21 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapFracture.Triangle>));
										pSVar21 = new List<MapFracture.Triangle>((IEnumerable<T>)source);
										if (__this_00 == null) break;
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pSVar10 = __this_00._items;
										if (pSVar10 == null) break;
										uVar23 = __this_00._size;
										if (uVar23 < (uint)pSVar10.Length) {
											__this_00._size = uVar23 + 1;
											pSVar10[(int)uVar23] = pSVar21;
										}
										else {
											__this_00.AddWithResize((object)pSVar21);
										}
									}
	label_05988227: ;
									index = index + 1;
									pSVar17 = targetAddress.seeds;
									if (pSVar17 == null) break;
								}
							}
						}
					}
				}
			}
		}
	label_05988743: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x58862C0", Offset = "0x58852C0", VA = "0x58862C0")]
	public static Mesh CreateMesh(List<Triangle> triangles, int submeshCount, out Vector3 center)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$CreateMesh): 60 lines keep C-only constructs
		int capacity;
		MapFracture.Vertex vertex;
		MapFracture.Vertex vertex_00;
		MapFracture.Vertex vertex_01;
		ulong uVar1;
		ulong uVar2;
		List<T> pSVar3;
		ulong uVar4;
		ulong uVar5;
		float fVar6;
		ulong uVar7;
		ulong uVar8;
		ulong uVar9;
		ulong uVar10;
		ulong uVar11;
		ulong uVar12;
		ulong uVar13;
		ulong uVar14;
		ulong uVar15;
		float fVar16;
		uint uVar17;
		uint uVar18;
		uint uVar19;
		float fVar20;
		bool bVar21;
		List<Vector3> __this;
		List<Vector3> __this_00;
		List<Vector2> __this_01;
		List<Color> __this_02;
		object pIVar22;
		Il2CppClass pIVar23;
		object pIVar24;
		Object __this_03;
		List<int> __this_04;
		ulong uVar25;
		object pIVar26;
		System_Collections_Generic_List_Enumerator_T__o local_1d8;
		ulong uStack_1c0;
		List<T> local_1b8;
		ulong uStack_1b0;
		ulong local_1a8;
		ulong uStack_1a0;
		ulong local_198;
		ulong uStack_190;
		ulong local_188;
		ulong uStack_180;
		ulong local_178;
		float fStack_170;
		uint uStack_16c;
		uint local_168;
		uint uStack_164;
		float fStack_160;
		uint uStack_15c;
		ulong local_158;
		ulong uStack_150;
		ulong local_148;
		ulong uStack_140;
		System_Collections_Generic_List_Enumerator_T__o local_128;
		int iStack_110;
		int iStack_10c;
		float local_108;
		uint uStack_104;
		int iStack_100;
		int iStack_fc;
		uint local_f8;
		uint uStack_f4;
		uint uStack_f0;
		uint uStack_ec;
		uint local_e8;
		float fStack_e4;
		ulong uStack_e0;
		ulong local_d8;
		uint uStack_d0;
		uint uStack_cc;
		uint local_c8;
		uint uStack_c4;
		float fStack_c0;
		uint uStack_bc;
		ulong local_b8;
		ulong uStack_b0;

		if (Il2CppMethodInitialized_07545a17 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_ctor_7193c18) ;
			Il2CppMethodInitialized_07545a17 = true;
		}
		local_168 = 0;
		uStack_164 = 0;
		fStack_160 = 0.0;
		uStack_15c = 0;
		local_178 = 0;
		fStack_170 = 0.0;
		uStack_16c = 0;
		local_188 = 0;
		uStack_180 = 0;
		local_198 = 0;
		uStack_190 = 0;
		local_1a8 = 0;
		uStack_1a0 = 0;
		local_1b8 = null;
		uStack_1b0._0_4_ = 0;
		uStack_1b0._4_4_ = 0;
		local_1d8._current = null;
		uStack_1c0._0_4_ = 0;
		uStack_1c0._4_4_ = 0;
		local_1d8._list = null;
		local_1d8._index = 0;
		local_1d8._version = 0;
		local_128 = MapFracture.GetBounds(triangles);
		*(List<T>*)&center.fields = local_128._list;
		center.z = (float)local_128._index;
		if (triangles != null) {
			capacity = triangles._size * 3;
			__this = new List<Vector3>(capacity);
			__this_00 = new List<Vector3>(capacity);
			__this_01 = new List<Vector2>(capacity);
			__this_02 = new List<Color>(capacity);
			pIVar22 = new List<int>[submeshCount];
			if (0 < submeshCount) {
				if (pIVar22 == null) {
					__this_04 = new List<int>();
					throw new NullReferenceException();
				}
				pIVar26 = pIVar22 + 2;
				uVar25 = 0;
				do {
					pIVar23 = new List<int>();
					if ((pIVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pIVar23, (pIVar22.klass._1).element_class), pIVar24 == null)) {
						pIVar22 = new ArrayTypeMismatchException();
						throw pIVar22;
					}
					if (*(uint)&pIVar22[1].monitor <= uVar25) goto label_05986a26;
					pIVar26.klass = pIVar23;
					uVar25 = uVar25 + 1;
					pIVar26 = (object)&pIVar26.monitor;
				} while ((uint)submeshCount != uVar25);
			}
			local_128 = triangles.GetEnumerator();
			local_168 = (undefined4)local_b8;
			uStack_164 = (undefined4)((ulong)local_b8 >> 0x20);
			fStack_160 = (float)uStack_b0;
			uStack_15c = (uint)((ulong)uStack_b0 >> 0x20);
			local_178 = CONCAT44(uStack_c4, local_c8);
			fStack_170 = fStack_c0;
			uStack_16c = uStack_bc;
			uStack_180 = CONCAT44(uStack_cc, uStack_d0);
			local_188 = local_d8;
			local_198 = CONCAT44(fStack_e4, local_e8);
			uStack_190 = uStack_e0;
			local_1b8 = (List<T>)CONCAT44(uStack_104, local_108);
			uStack_1b0._4_4_ = iStack_fc;
			uStack_1b0._0_4_ = iStack_100;
			local_1a8 = CONCAT44(uStack_f4, local_f8);
			uStack_1a0 = CONCAT44(uStack_ec, uStack_f0);
			local_1d8._current = local_128._current;
			uStack_1c0._0_4_ = iStack_110;
			uStack_1c0._4_4_ = iStack_10c;
			local_1d8._list = local_128._list;
			local_1d8._index = local_128._index;
			local_1d8._version = local_128._version;
			if (pIVar22 == null) {
				bVar21 = local_1d8.MoveNext() ;
				if (bVar21) {
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar21 = local_1d8.MoveNext();
					fVar20 = fStack_160;
					uVar19 = uStack_164;
					uVar18 = local_168;
					uVar17 = uStack_16c;
					fVar16 = fStack_170;
					uVar14 = local_178;
					uVar12 = uStack_180;
					uVar11 = local_188;
					uVar10 = uStack_190;
					uVar9 = local_198;
					uVar8 = uStack_1a0;
					uVar7 = local_1a8;
					uVar4 = uStack_1b0;
					pSVar3 = local_1b8;
					uVar1 = uStack_1c0;
					pIVar26 = local_1d8._current;
					if (!(bVar21)) break;
					if (*(uint)&pIVar22[1].monitor <= uStack_15c) {
						throw new IndexOutOfRangeException();
					}
					pIVar23 = (&pIVar22[2].klass)[(int)uStack_15c];
					fVar6 = (float)local_1a8;
					vertex.Position.z = (float)(int32_t)uStack_1c0;
					vertex.Normal.x = (float)uStack_1c0._4_4_;
					vertex.Position._0_8_ = local_1d8._current;
					vertex.Normal._4_8_ = local_1b8;
					vertex.UV.x = (float)(int32_t)uStack_1b0;
					vertex.UV.y = (float)uStack_1b0._4_4_;
					vertex.Shade = (float)local_1a8;
					MapFracture.AddVertex(vertex, (Vector3)center.fields, (List<int>)pIVar23, __this, __this_00, __this_01, __this_02);
					uVar5 = uStack_1b0;
					uVar2 = uStack_1c0;
					local_c8 = uVar18;
					uStack_c4 = uVar19;
					fStack_c0 = fVar20;
					local_d8 = uVar14;
					local_e8 = (undefined4)uVar11;
					fStack_e4 = (float)((ulong)uVar11 >> 0x20);
					uStack_e0 = uVar12;
					local_f8 = (undefined4)uVar9;
					uStack_f4 = (undefined4)((ulong)uVar9 >> 0x20);
					uStack_f0 = (undefined4)uVar10;
					uStack_ec = (undefined4)((ulong)uVar10 >> 0x20);
					uStack_104 = (undefined4)((ulong)uVar7 >> 0x20);
					iStack_100 = (int32_t)uVar8;
					iStack_fc = (int32_t)((ulong)uVar8 >> 0x20);
					local_128._current = (object)pSVar3;
					uStack_1b0._0_4_ = (int32_t)uVar4;
					uStack_1b0._4_4_ = SUB84(uVar4, 4);
					iStack_110 = (int32_t)uStack_1b0;
					iStack_10c = uStack_1b0._4_4_;
					local_128._list = (List<T>)pIVar26;
					uStack_1c0._0_4_ = (int32_t)uVar1;
					uStack_1c0._4_4_ = SUB84(uVar1, 4);
					local_128._index = (int32_t)uStack_1c0;
					local_128._version = uStack_1c0._4_4_;
					local_158 = CONCAT44(iStack_100, uStack_104);
					uStack_150 = CONCAT44(local_f8, iStack_fc);
					local_148 = CONCAT44(uStack_f0, uStack_f4);
					uStack_140 = CONCAT44(local_e8, uStack_ec);
					vertex_00.Position.z = (float)iStack_fc;
					vertex_00.Normal.x = (float)local_f8;
					vertex_00.Position.x = (float)uStack_104;
					vertex_00.Position.y = (float)iStack_100;
					vertex_00.Normal.y = (float)uStack_f4;
					vertex_00.Normal.z = (float)uStack_f0;
					vertex_00.UV.x = (float)uStack_ec;
					vertex_00.UV.y = (float)local_e8;
					vertex_00.Shade = fStack_e4;
					uStack_1c0 = uVar2;
					uStack_1b0 = uVar5;
					local_108 = fVar6;
					MapFracture.AddVertex(vertex_00, (Vector3)center.fields, (List<int>)pIVar23, __this, __this_00, __this_01, __this_02);
					uVar15 = local_178;
					uVar13 = uStack_180;
					uVar5 = uStack_1b0;
					uVar2 = uStack_1c0;
					uStack_1b0._0_4_ = (int32_t)uVar4;
					uStack_1b0._4_4_ = SUB84(uVar4, 4);
					uStack_1c0._0_4_ = (int32_t)uVar1;
					uStack_1c0._4_4_ = SUB84(uVar1, 4);
					vertex_01.Normal.z = (float)uVar17;
					vertex_01.Normal.y = fVar16;
					vertex_01.UV.y = (float)uVar19;
					vertex_01.UV.x = (float)uVar18;
					local_178._0_4_ = (undefined4)uVar14;
					local_178._4_4_ = SUB84(uVar14, 4);
					vertex_01.Position.z = (float)(undefined4)local_178;
					vertex_01.Normal.x = (float)local_178._4_4_;
					uStack_180._0_4_ = (undefined4)uVar12;
					uStack_180._4_4_ = SUB84(uVar12, 4);
					vertex_01.Position.x = (float)(undefined4)uStack_180;
					vertex_01.Position.y = (float)uStack_180._4_4_;
					vertex_01.Shade = fVar20;
					uStack_1c0 = uVar2;
					uStack_1b0 = uVar5;
					uStack_180 = uVar13;
					local_178 = uVar15;
					MapFracture.AddVertex(vertex_01, (Vector3)center.fields, (List<int>)pIVar23, __this, __this_00, __this_01, __this_02);
				}
			}
			local_1d8.Dispose();
			__this_03 = new Mesh();
			if (__this_03 != null) {
				__this_03.name = "Map debris";
				__this_03.indexFormat = (uint)(0xffff < capacity);
				__this_03.SetVertices(__this);
				__this_03.SetNormals(__this_00);
				__this_03.SetUVs(0, __this_01);
				__this_03.SetColors(__this_02);
				__this_03.subMeshCount = submeshCount;
				if (0 < submeshCount) {
					if (pIVar22 == null) goto label_05986a3f;
					uVar25 = 0;
					do {
						if (*(uint)&pIVar22[1].monitor <= uVar25) {
	label_05986a26: ;
							throw new IndexOutOfRangeException();
						}
						__this_03.SetTriangles((List<int>)(&pIVar22[2].klass)[uVar25], (int32_t)uVar25, false);
						uVar25 = uVar25 + 1;
					} while ((uint)submeshCount != uVar25);
				}
				__this_03.RecalculateBounds();
				return (Mesh)__this_03;
			}
		}
	label_05986a3f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001951")]
	[Address(RVA = "0x5886B50", Offset = "0x5885B50", VA = "0x5886B50")]
	public static bool HasVolume(List<Triangle> triangles, float thickness)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$HasVolume): 22 lines keep C-only constructs
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
		MapFracture.c__DisplayClass18_0 __this;
		Func<Vector3, float> pSVar14;
		float fVar15;
		float fVar16;
		uint uVar17;
		uint extraout_XMM0_Db;
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		float fVar20;
		float fVar21;
		float fVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		float local_c8;
		float fStack_c4;
		MapFracture.Triangle local_98;

		if (Il2CppMethodInitialized_07545a18 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__0) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__1) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__2) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__3) ;
			Il2CppMethodInitialized_07545a18 = true;
		}
		__this = new MapFracture.c__DisplayClass18_0();
		if ((triangles == null) ||(local_98 = triangles.get_Item(0), __this == null)) {
			throw new NullReferenceException();
		}
		__this.origin.z = local_98.A.Position.z;
		__this.origin.x = local_98.A.Position.x;
		__this.origin.y = local_98.A.Position.y;
		pSVar14 = new Func<Vector3, float>((object)__this, (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__0);
		UVar23 = MapFracture.Extreme(triangles, pSVar14);
		uVar1 = __this.origin.x;
		uVar7 = __this.origin.y;
		fVar22 = __this.origin.z;
		__this.axis.x = UVar23.x - (float)uVar1;
		__this.axis.y = UVar23.y - (float)uVar7;
		__this.axis.z = UVar23.z - fVar22;
		pSVar14 = new Func<Vector3, float>((object)__this, (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__1);
		UVar23 = MapFracture.Extreme(triangles, pSVar14);
		uVar2 = __this.origin.x;
		uVar8 = __this.origin.y;
		fVar21 = UVar23.x - (float)uVar2;
		uVar3 = __this.axis.x;
		uVar9 = __this.axis.y;
		fVar22 = __this.axis.z;
		fVar15 = UVar23.z - __this.origin.z;
		fVar16 = UVar23.y - (float)uVar8;
		fVar20 = (float)uVar9 * fVar15 - fVar22 * fVar16;
		fVar16 = (float)uVar3 * fVar16 - (float)uVar9 * fVar21;
		fVar22 = fVar21 * fVar22 - fVar15 * (float)uVar3;
		__this.normal.x = fVar20;
		__this.normal.y = fVar22;
		__this.normal.z = fVar16;
		if (0.0001 <= fVar16 * fVar16 + fVar22 * fVar22 + fVar20 * fVar20) {
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				fVar22 = __this.normal.y;
				fVar16 = __this.normal.z;
				fVar20 = __this.normal.x;
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar13 == 0) {
			}
			fVar22 = fVar16 * fVar16 + fVar22 * fVar22 + fVar20 * fVar20;
			if (fVar22 < 0.0) {
				fVar22 = sqrtf(fVar22);
				uVar17 = extraout_XMM0_Db;
			}
			else {
				uVar17 = 0;
				fVar22 = SQRT(fVar22);
			}
			if (1e-05 < fVar22) {
				uVar4 = __this.normal.x;
				uVar10 = __this.normal.y;
				auVar18._4_4_ = uVar10;
				auVar18._0_4_ = uVar4;
				auVar18._8_8_ = 0;
				auVar19._4_4_ = fVar22;
				auVar19._0_4_ = fVar22;
				auVar19._8_4_ = uVar17;
				auVar19._12_4_ = uVar17;
				auVar19 = divps(auVar18, auVar19);
				__this.normal.x = (float)auVar19._0_4_;
				__this.normal.y = (float)auVar19._4_4_;
				fVar22 = __this.normal.z / fVar22;
			}
			else {
				__this.normal.x = 0.0;
				__this.normal.y = 0.0;
				fVar22 = 0.0;
			}
			__this.normal.z = fVar22;
			uVar5 = __this.normal.x;
			uVar11 = __this.normal.y;
			pSVar14 = new Func<Vector3, float>((object)__this, (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__2);
			UVar23 = MapFracture.Extreme(triangles, pSVar14);
			uVar6 = __this.normal.x;
			uVar12 = __this.normal.y;
			fVar16 = __this.normal.z;
			pSVar14 = new Func<Vector3, float>((object)__this, (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__3);
			UVar24 = MapFracture.Extreme(triangles, pSVar14);
			local_c8 = UVar23.x;
			fStack_c4 = UVar23.y;
			return thickness <=(UVar23.z * fVar22 + fStack_c4 * (float)uVar11 + local_c8 * (float)uVar5) -(UVar24.z * fVar16 + UVar24.y * (float)uVar12 + UVar24.x * (float)uVar6);
		}
		return false;
	}

	[Token(Token = "0x6001952")]
	[Address(RVA = "0x588B310", Offset = "0x588A310", VA = "0x588B310")]
	private static Vector3 Extreme(List<Triangle> triangles, Func<Vector3, float> score)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Extreme): 11 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		System_Collections_Generic_List_Enumerator_T__o pSVar4;
		bool bVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 UVar11;
		float local_18c;
		object local_188;
		float local_168;
		object local_148;
		object local_138;
		object local_128;
		System_Collections_Generic_List_Enumerator_T__o local_108;
		ulong uStack_f0;
		float fStack_d4;
		float fStack_d0;
		uint uStack_cc;
		object pIStack_b0;
		ulong local_a8;
		byte[] local_88 = new byte[112];

		local_a8 = 0;
		pIStack_b0 = null;
		fStack_d4 = 0.0;
		fStack_d0 = 0.0;
		uStack_cc = 0;
		local_108._current = null;
		uStack_f0 = 0;
		local_108._list = null;
		local_108._index = 0;
		local_108._version = 0;
		if (triangles != null) {
			local_88.get_Item(triangles, 0) ;
			if (score != null) {
				local_188 = (object)local_88._0_8_;
				local_168 = (float)(*(code)score.invoke_impl)(score.method_code,score.method);
				local_108 = triangles.GetEnumerator();
				local_88._0_4_ = 0.0;
				local_88._4_4_ = 0.0;
				pSVar4 = &local_108;
				fVar1 = (float)local_88._8_4_;
				while(true) {
					local_88._8_8_ = pSVar4;
					bVar5 = local_108.MoveNext();
					uVar3 = uStack_cc;
					if (!bVar5) break;
					uVar2 = (uint)uStack_f0;
					local_148 = (object)CONCAT44(fStack_d0, fStack_d4);
					local_128 = pIStack_b0;
					local_18c = (float)local_a8;
					local_138 = local_108._current;
					fVar7 = (float)(*(code)score.invoke_impl)(score.method_code,score.method);
					if (fVar7 <= local_168) {
						local_138 = local_188;
					}
					uVar6 = -(uint)(local_168 < fVar7);
					fVar8 = (float)(*(code)score.invoke_impl)(score.method_code,score.method);
					fVar7 = (float)(~uVar6 & (uint)local_168 | (uint)fVar7 & uVar6);
					if (fVar8 <= fVar7) {
						local_148 = local_138;
					}
					fVar9 = (float)(*(code)score.invoke_impl)(score.method_code,score.method);
					fVar10 = (float)(~-(uint)(fVar7 < fVar8) & (uint)fVar7 | -(uint)(fVar7 < fVar8) & (uint)fVar8);
					if (fVar9 <= fVar10) {
						local_128 = local_148;
						local_18c = (float)(~-(uint)(fVar7 < fVar8) & (~uVar6 & (uint)fVar1 | uVar2 & uVar6) | uVar3 & -(uint)(fVar7 < fVar8));
					}
					local_168 = (float)(-(uint)(fVar10 < fVar9) & (uint)fVar9 | ~-(uint)(fVar10 < fVar9) & (uint)fVar10);
					local_188 = local_128;
					pSVar4 = (System_Collections_Generic_List_Enumerator_T__o)local_88._8_8_;
					fVar1 = local_18c;
				}
				local_108.Dispose();
				UVar11.z = fVar1;
				UVar11._0_8_ = local_188;
				return (Vector3)UVar11;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x588B6C0", Offset = "0x588A6C0", VA = "0x588B6C0")]
	private static void Consider(Vector3 point, Func<Vector3, float> score, ref Vector3 best, ref float bestScore)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Consider): 1 lines keep C-only constructs
		float fVar1;

		if (score == null) {
			throw new NullReferenceException();
		}
		fVar1 = (float)(*(code)score.invoke_impl)(score.method_code,score.method);
		if (*bestScore < fVar1) {
			best.x = point.x;
			best.y = point.y;
			best.z = point.z;
			*bestScore = fVar1;
		}
		return;
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x5886F50", Offset = "0x5885F50", VA = "0x5886F50")]
	public static Mesh CreateCollisionMesh(List<Triangle> triangles, Vector3 center, float scale)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$CreateCollisionMesh): 22 lines keep C-only constructs
		int piVar1;
		int iVar2;
		int iVar3;
		uint uVar4;
		Int32[] pSVar5;
		Vector3[] pUVar6;
		float fVar8;
		float fVar9;
		float fVar10;
		bool bVar11;
		List<Vector3> __this;
		List<int> __this_00;
		Object __this_01;
		float fVar12;
		float fVar13;
		float fVar14;
		Vector3 item;
		Vector3 item_00;
		Vector3 item_01;
		float local_178;
		float fStack_174;
		byte[] local_168 = new byte[8];
		object local_158;
		ulong uStack_150;
		uint uStack_134;
		uint uStack_130;
		float fStack_12c;
		ulong uStack_110;
		ulong local_108;
		ulong local_e8;
		ulong local_d8;
		ulong local_c8;
		byte[] local_b0 = new byte[16];
		object local_a0;
		ulong uStack_98;
		ulong local_80;
		ulong uStack_78;
		ulong uStack_58;
		ulong local_50;

		fVar14 = center.z;
		local_108 = 0;
		uStack_110 = 0;
		uStack_134 = 0;
		uStack_130 = 0;
		fStack_12c = 0.0;
		local_158 = null;
		uStack_150 = 0;
		local_168 = (byte[])0x0;
		if (triangles != null) {
			iVar2 = triangles._size;
			__this = new List<Vector3>(iVar2 * 3);
			iVar2 = triangles._size;
			__this_00 = new List<int>(iVar2 * 3);
			local_b0.GetEnumerator(triangles);
			local_108 = local_50;
			uStack_110 = uStack_58;
			uStack_134 = (undefined4)((ulong)local_80 >> 0x20);
			uStack_130 = (undefined4)uStack_78;
			fStack_12c = (float)((ulong)uStack_78 >> 0x20);
			local_158 = local_a0;
			uStack_150 = uStack_98;
			local_168 = (byte[])local_b0._0_8_;
			local_b0._0_8_ = null;
			local_b0._8_8_ = local_168;
			if (__this == null) {
				bVar11 = local_168.MoveNext() ;
				if (bVar11) {
					throw new NullReferenceException();
				}
			}
			else if (__this_00 == null) {
				bVar11 = local_168.MoveNext() ;
				if (bVar11) {
	label_0598754d: ;
					throw new NullReferenceException();
				}
			}
			else {
				while(true) {
					bVar11 = local_168.MoveNext();
					fVar9 = fStack_12c;
					if (!bVar11) break;
					fVar8 = (float)uStack_150;
					fVar10 = (float)local_108;
					iVar3 = __this._size;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_00._items;
					if (pSVar5 == null) goto label_0598754d;
					uVar4 = __this_00._size;
					local_e8 = uStack_110;
					local_d8 = CONCAT44(uStack_130, uStack_134);
					if (uVar4 < (uint)pSVar5.Length) {
						__this_00._size = uVar4 + 1;
						pSVar5[(int)uVar4] = iVar3;
						fVar12 = SUB84(local_158, 0);
						fVar13 = (float)((ulong)local_158 >> 0x20);
					}
					else {
						local_c8 = local_158;
						__this_00.AddWithResize(iVar3);
						fVar12 = (float)local_c8;
						fVar13 = local_c8._4_4_;
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pUVar6 = __this._items;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					local_178 = center.x;
					fStack_174 = center.y;
					item.x = (fVar12 - local_178) * scale;
					item.y = (fVar13 - fStack_174) * scale;
					item.z = (fVar8 - fVar14) * scale;
					uVar4 = __this._size;
					if (uVar4 < (uint)pUVar6.Length) {
						__this._size = uVar4 + 1;
						pUVar6[(int)uVar4].x = item.x;
						pUVar6[(int)uVar4].y = item.y;
						pUVar6[(int)uVar4].z = item.z;
					}
					else {
						__this.AddWithResize(item);
					}
					iVar3 = __this._size;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_00._items;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pSVar5.Length) {
						__this_00._size = uVar4 + 1;
						pSVar5[(int)uVar4] = iVar3;
					}
					else {
						__this_00.AddWithResize(iVar3);
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pUVar6 = __this._items;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					item_00.x = ((float)local_d8 - local_178) * scale;
					item_00.y = (local_d8._4_4_ - fStack_174) * scale;
					item_00.z = (fVar9 - fVar14) * scale;
					uVar4 = __this._size;
					if (uVar4 < (uint)pUVar6.Length) {
						__this._size = uVar4 + 1;
						pUVar6[(int)uVar4].x = item_00.x;
						pUVar6[(int)uVar4].y = item_00.y;
						pUVar6[(int)uVar4].z = item_00.z;
					}
					else {
						__this.AddWithResize(item_00);
					}
					iVar3 = __this._size;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_00._items;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pSVar5.Length) {
						__this_00._size = uVar4 + 1;
						pSVar5[(int)uVar4] = iVar3;
					}
					else {
						__this_00.AddWithResize(iVar3);
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pUVar6 = __this._items;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					item_01.x = ((float)local_e8 - local_178) * scale;
					item_01.y = (local_e8._4_4_ - fStack_174) * scale;
					item_01.z = (fVar10 - fVar14) * scale;
					uVar4 = __this._size;
					if (uVar4 < (uint)pUVar6.Length) {
						__this._size = uVar4 + 1;
						pUVar6[(int)uVar4].x = item_01.x;
						pUVar6[(int)uVar4].y = item_01.y;
						pUVar6[(int)uVar4].z = item_01.z;
					}
					else {
						__this.AddWithResize(item_01);
					}
				}
			}
			local_168.Dispose();
			__this_01 = new Mesh();
			if (__this_01 != null) {
				__this_01.name = "Map debris collision";
				if (__this != null) {
					__this_01.indexFormat = (uint)(0xffff < __this._size);
					__this_01.SetVertices(__this);
					__this_01.SetTriangles(__this_00, 0, false);
					return (Mesh)__this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x588B080", Offset = "0x588A080", VA = "0x588B080")]
	private static void AddVertex(Vertex vertex, Vector3 center, List<int> indices, List<Vector3> positions, List<Vector3> normals, List<Vector2> uv, List<Color> colors)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$AddVertex): 10 lines keep C-only constructs
		int piVar1;
		Color pUVar2;
		int item;
		uint uVar3;
		Int32[] pSVar4;
		Vector3[] pUVar5;
		Vector2[] pUVar6;
		Color[] pUVar7;
		Color item_00;
		Vector3 item_01;
		float local_48;
		float fStack_44;

		if ((positions != null) &&(indices != null)) {
			item = positions._size;
			piVar1 = &indices._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = indices._items;
			if (pSVar4 != null) {
				uVar3 = indices._size;
				if (uVar3 < (uint)pSVar4.Length) {
					indices._size = uVar3 + 1;
					pSVar4[(int)uVar3] = item;
				}
				else {
					indices.AddWithResize(item);
				}
				piVar1 = &positions._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = positions._items;
				if (pUVar5 != null) {
					local_48 = center.x;
					fStack_44 = center.y;
					item_01.x = vertex.Position.x - local_48;
					item_01.y = vertex.Position.y - fStack_44;
					item_01.z = vertex.Position.z - center.z;
					uVar3 = positions._size;
					if (uVar3 < (uint)pUVar5.Length) {
						positions._size = uVar3 + 1;
						pUVar5[(int)uVar3].x = item_01.x;
						pUVar5[(int)uVar3].y = item_01.y;
						pUVar5[(int)uVar3].z = item_01.z;
					}
					else {
						positions.AddWithResize(item_01);
					}
					if (normals != null) {
						piVar1 = &normals._version;
						*piVar1 = *piVar1 + 1;
						pUVar5 = normals._items;
						if (pUVar5 != null) {
							uVar3 = normals._size;
							if (uVar3 < (uint)pUVar5.Length) {
								normals._size = uVar3 + 1;
								pUVar5[(int)uVar3].x = vertex.Normal.x;
								pUVar5[(int)uVar3].y = vertex.Normal.y;
								pUVar5[(int)uVar3].z = vertex.Normal.z;
							}
							else {
								normals.AddWithResize(vertex.Normal);
							}
							if (uv != null) {
								piVar1 = &uv._version;
								*piVar1 = *piVar1 + 1;
								pUVar6 = uv._items;
								if (pUVar6 != null) {
									uVar3 = uv._size;
									if (uVar3 < (uint)pUVar6.Length) {
										uv._size = uVar3 + 1;
										pUVar6[(int)uVar3] = vertex.UV;
									}
									else {
										uv.AddWithResize(vertex.UV);
									}
									if (colors != null) {
										piVar1 = &colors._version;
										*piVar1 = *piVar1 + 1;
										pUVar7 = colors._items;
										if (pUVar7 != null) {
											item_00.a = 1.0;
											item_00.b = vertex.Shade;
											uVar3 = colors._size;
											if (uVar3 < (uint)pUVar7.Length) {
												colors._size = uVar3 + 1;
												pUVar2 = pUVar7.m_Items + (int)uVar3;
												pUVar2.r = vertex.Shade;
												pUVar2.g = vertex.Shade;
												pUVar2.b = vertex.Shade;
												pUVar2.a = 1.0;
												return;
											}
											item_00.g = vertex.Shade;
											item_00.r = vertex.Shade;
											colors.AddWithResize(item_00);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001956")]
	[Address(RVA = "0x5888B50", Offset = "0x5887B50", VA = "0x5888B50")]
	private static Vertex ReadVertex(Vector3[] positions, Vector3[] normals, Vector2[] uv, int index, Matrix4x4 toRoot, Matrix4x4 normalToRoot, bool hasNormals, bool hasUV)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$ReadVertex): 73 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		Vector2 UVar4;
		byte[] auVar8 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar9;
		UnityEngine_Vector2_StaticFields pUVar10;
		float fVar11;
		uint extraout_XMM0_Db;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		byte[] auVar19 = new byte[16];
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
		byte[] auStack_d0 = new byte[92];
		float fStack_74;
		Vector3 UStack_70;
		float fStack_64;
		ulong uStack_60;
		float local_58;
		float fStack_54;
		ulong local_48;
		byte[] local_38 = new byte[16];

		if (positions == null) goto label_05988f4d;
		if ((uint)positions.Length <= (uint)index) goto label_05988f52;
		local_48._0_4_ = positions[index].x;
		local_48._4_4_ = positions[index].y;
		local_38 = ZEXT416((uint)positions[index].z);
		auStack_d0._88_4_ = toRoot.m00;
		fStack_74 = toRoot.m10;
		UStack_70.x = 0.0;
		UStack_70.y = 0.0;
		UStack_70.z = toRoot.m01;
		fStack_64 = toRoot.m11;
		uStack_60._0_4_ = 0.0;
		uStack_60._4_4_ = 0.0;
		auStack_d0._72_4_ = toRoot.m02;
		auStack_d0._76_4_ = toRoot.m12;
		auStack_d0._80_4_ = 0.0;
		auStack_d0._84_4_ = 0.0;
		local_58 = toRoot.m03;
		fStack_54 = toRoot.m13;
		if (hasNormals) {
			if (normals == null) goto label_05988f4d;
			if ((uint)normals.Length <= (uint)index) goto label_05988f52;
			uVar1 = normals[index].x;
			uVar5 = normals[index].y;
			fVar11 = normals[index].z;
			fVar28 = normalToRoot.m01 * (float)uVar5;
			fVar29 = normalToRoot.m11 * (float)uVar5;
			fVar13 = fVar11;
			fVar15 = fVar11;
			fVar17 = fVar11;
			fVar27 = fVar11 * normalToRoot.m22;
			fVar20 = 0.0;
			fVar21 = 0.0;
			fVar22 = 0.0;
			fVar23 = normalToRoot.m02;
			fVar24 = normalToRoot.m12;
			fVar25 = 0.0;
			fVar26 = 0.0;
			fVar30 = (float)uVar5 * 0.0;
			fVar31 = (float)uVar5 * 0.0;
			if (Il2CppMethodInitialized_0753e72d == false) {
				auStack_d0._24_16_ = ZEXT416((uint)(fVar11 * normalToRoot.m22));
				auStack_d0._56_4_ = normalToRoot.m02;
				auStack_d0._60_4_ = normalToRoot.m12;
				auStack_d0._64_4_ = 0.0;
				auStack_d0._68_4_ = 0.0;
				auStack_d0._8_4_ = fVar11;
				auStack_d0._12_4_ = fVar11;
				auStack_d0._16_4_ = fVar11;
				auStack_d0._20_4_ = fVar11;
				auStack_d0._40_4_ = fVar28;
				auStack_d0._44_4_ = fVar29;
				auStack_d0._48_4_ = (float)uVar5 * 0.0;
				auStack_d0._52_4_ = (float)uVar5 * 0.0;
				Il2CppMethodInitialized_0753e72d = true;
				fVar11 = (float)auStack_d0._8_4_;
				fVar13 = (float)auStack_d0._12_4_;
				fVar15 = (float)auStack_d0._16_4_;
				fVar17 = (float)auStack_d0._20_4_;
				fVar27 = (float)auStack_d0._24_4_;
				fVar20 = (float)auStack_d0._28_4_;
				fVar21 = (float)auStack_d0._32_4_;
				fVar22 = (float)auStack_d0._36_4_;
				fVar23 = (float)auStack_d0._56_4_;
				fVar24 = (float)auStack_d0._60_4_;
				fVar25 = (float)auStack_d0._64_4_;
				fVar26 = (float)auStack_d0._68_4_;
				fVar28 = (float)auStack_d0._40_4_;
				fVar29 = (float)auStack_d0._44_4_;
				fVar30 = (float)auStack_d0._48_4_;
				fVar31 = (float)auStack_d0._52_4_;
			}
			auStack_d0._0_4_ = 0.0;
			auStack_d0._4_4_ = 0.0;
			fVar12 = fVar11 * fVar23;
			fVar14 = fVar13 * fVar24;
			fVar16 = fVar15 * fVar25;
			fVar18 = fVar17 * fVar26;
			if (Il2CppMethodInitialized_0753e729 == false) {
				auStack_d0._28_4_ = fVar20;
				auStack_d0._24_4_ = fVar27;
				auStack_d0._32_4_ = fVar21;
				auStack_d0._36_4_ = fVar22;
				auStack_d0._8_4_ = fVar11 * fVar23;
				auStack_d0._12_4_ = fVar13 * fVar24;
				auStack_d0._16_4_ = fVar15 * fVar25;
				auStack_d0._20_4_ = fVar17 * fVar26;
				Il2CppMethodInitialized_0753e729 = true;
				fVar12 = (float)auStack_d0._8_4_;
				fVar14 = (float)auStack_d0._12_4_;
				fVar16 = (float)auStack_d0._16_4_;
				fVar18 = (float)auStack_d0._20_4_;
				fVar27 = (float)auStack_d0._24_4_;
			}
			auVar19._0_4_ = (float)uVar1 * normalToRoot.m00 + fVar28 + fVar12;
			auVar19._4_4_ = (float)uVar1 * normalToRoot.m10 + fVar29 + fVar14;
			auVar19._8_4_ = (float)uVar1 * 0.0 + fVar30 + fVar16;
			auVar19._12_4_ = (float)uVar1 * 0.0 + fVar31 + fVar18;
			fVar27 = normalToRoot.m20 * (float)uVar1 + normalToRoot.m21 * (float)uVar5 + fVar27;
			uVar2 = 0;
			fVar11 = fVar27 * fVar27 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
			if (fVar11 < 0.0) {
				fVar11 = sqrtf(fVar11);
				uVar2 = extraout_XMM0_Db;
				if (fVar11 <= 1e-05) goto label_05988d9c;
	label_05988e40: ;
				fVar27 = fVar27 / fVar11;
				auVar8._4_4_ = fVar11;
				auVar8._0_4_ = fVar11;
				auVar8._8_4_ = uVar2;
				auVar8._12_4_ = uVar2;
				auVar19 = divps(auVar19, auVar8);
				auStack_d0._0_4_ = auVar19._0_4_;
				auStack_d0._4_4_ = auVar19._4_4_;
				pUVar9 = (UnityEngine_Vector3_StaticFields)auStack_d0;
			}
			else {
				fVar11 = SQRT(fVar11);
				if (1e-05 < fVar11) goto label_05988e40;
	label_05988d9c: ;
				pUVar9 = typeof(Vector3).static_fields;
				fVar27 = (pUVar9.zeroVector).z;
			}
			uVar3 = (pUVar9.zeroVector).x;
			uVar7 = (pUVar9.zeroVector).y;
			uVar2 = uVar3;
			uVar6 = uVar7;
		}
		else {
			pUVar9 = typeof(Vector3).static_fields;
			uVar2 = (pUVar9.upVector).x;
			uVar6 = (pUVar9.upVector).y;
			fVar27 = (pUVar9.upVector).z;
		}
		if (hasUV) {
			if (uv == null) {
	label_05988f4d: ;
				throw new NullReferenceException();
			}
			if ((uint)uv.Length <= (uint)index) {
	label_05988f52: ;
				throw new IndexOutOfRangeException();
			}
			pUVar10 = (UnityEngine_Vector2_StaticFields)(uv.m_Items + index);
		}
		else {
			pUVar10 = typeof(Vector2).static_fields;
		}
		UVar4 = (pUVar10.zeroVector);
		__return_storage_ptr__.Position.x = local_58 + local_48._4_4_ * UStack_70.z + (float)local_48 * (float)auStack_d0._88_4_ +(float)local_38._0_4_ * (float)auStack_d0._72_4_;
		__return_storage_ptr__.Position.y = fStack_54 + local_48._4_4_ * fStack_64 + (float)local_48 * fStack_74 +(float)local_38._0_4_ * (float)auStack_d0._76_4_;
		__return_storage_ptr__.Position.z = toRoot.m23 + toRoot.m22 * (float)local_38._0_4_ + toRoot.m21 * local_48._4_4_ + toRoot.m20 * (float)local_48;
		__return_storage_ptr__.Normal.x = (float)uVar2;
		__return_storage_ptr__.Normal.y = (float)uVar6;
		__return_storage_ptr__.Normal.z = fVar27;
		__return_storage_ptr__.UV = UVar4;
		__return_storage_ptr__.Shade = 1.0;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x588A9E0", Offset = "0x58899E0", VA = "0x588A9E0")]
	private static List<Vector3> CreateSeeds(Bounds bounds, int count, System.Random random)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$CreateSeeds): 70 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Vector3[] pUVar6;
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		double dVar9;
		Il2CppMethodPointer pIVar10;
		double dVar11;
		int iVar12;
		List<Vector3> __this;
		MethodInfo pMVar13;
		uint in_register_0000003c;
		List<Vector3>* ppSVar14;
		Vector3* __this_00;
		MethodInfo pMVar15;
		int iVar16;
		int iVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		Vector3 item;
		byte[] local_b0 = new byte[24];
		ulong local_98;
		ulong local_88;
		uint local_6c;
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[12];
		float fStack_3c;

		__this_00 = (Vector3*)CONCAT44(in_register_0000003c, count);
		pMVar13 = (MethodInfo)random;
		if (Il2CppMethodInitialized_07545a1c == false) {
			ppSVar14 = &typeof(List<Vector3>);
			Il2CppMethodInitialized_07545a1c = true;
			__this_00 = (Vector3*)ppSVar14;
		}
		local_48._0_4_ = bounds.m_Extents.x;
		local_48._4_4_ = bounds.m_Extents.y;
		local_68._0_4_ = bounds.m_Extents.x + bounds.m_Extents.x;
		local_68._4_4_ = bounds.m_Extents.y + bounds.m_Extents.y;
		local_68._8_8_ = 0;
		local_b0._20_4_ = bounds.m_Extents.z;
		if (g_data_0753e4b7 == false) {
			__this_00 = &typeof(Vector3);
			g_data_0753e4b7 = true;
		}
		uVar2 = (Vector3.oneVector).x;
		uVar3 = (Vector3.oneVector).y;
		fVar18 = (Vector3.oneVector).z * 0.0001;
		fVar20 = bounds.m_Extents.z + bounds.m_Extents.z;
		if (bounds.m_Extents.z + bounds.m_Extents.z <= fVar18) {
			fVar20 = fVar18;
		}
		auVar7._4_4_ = (float)uVar3 * 0.0001;
		auVar7._0_4_ = (float)uVar2 * 0.0001;
		auVar7._8_8_ = 0;
		local_68 = maxps(local_68, auVar7);
		local_98._0_4_ = local_68._4_4_;
		iVar12 = 1;
		if (1 < count) {
			iVar12 = count;
		}
		local_98._4_4_ = (float)local_98;
		fVar18 = powf((CustomLogicMathBuiltin)__this_00, (local_68._0_4_ * (float)local_98 * fVar20) / (float)iVar12, 0.33333334, pMVar13);
		local_88 = (Il2CppType)CONCAT44(local_68._4_4_, (float)local_68._0_4_ / fVar18);
		fVar19 = (float)local_68._0_4_ / fVar18;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar19 = (float)local_88;
		}
		pMVar15 = (MethodInfo)local_b0;
		local_58._0_8_ = (double)fVar19;
		dVar9 = modf((double)fVar19, (double)pMVar15, pMVar13);
		pIVar10 = (Il2CppMethodPointer)local_b0._0_8_;
		if (0.0 <= (float)local_88) {
			if ((dVar9 != 0.5) || (NAN(dVar9))) {
				pIVar10 = (Il2CppMethodPointer)floor((double)local_58._0_8_ + 0.5, pMVar15);
			}
			else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
				pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + 1.0);
			}
		}
		else if ((dVar9 != -0.5) || (NAN(dVar9))) {
			pIVar10 = (Il2CppMethodPointer)ceil((double)local_58._0_8_ + -0.5, pMVar15);
		}
		else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
			pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + -1.0);
		}
		local_b0._12_4_ = 1;
		if (1 < (int)(double)pIVar10) {
			local_b0._12_4_ = (int)(double)pIVar10;
		}
		local_98._0_4_ = (float)local_98 / fVar18;
		local_88 = (Il2CppType)(double)(float)local_98;
		pMVar15 = (MethodInfo)local_b0;
		dVar9 = modf((double)local_88, (double)pMVar15, pMVar13);
		pIVar10 = (Il2CppMethodPointer)local_b0._0_8_;
		if (0.0 <= (float)local_98) {
			if ((dVar9 != 0.5) || (NAN(dVar9))) {
				pIVar10 = (Il2CppMethodPointer)floor((double)local_88 + 0.5, pMVar15);
			}
			else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
				pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + 1.0);
			}
		}
		else if ((dVar9 != -0.5) || (NAN(dVar9))) {
			pIVar10 = (Il2CppMethodPointer)ceil((double)local_88 + -0.5, pMVar15);
		}
		else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
			pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + -1.0);
		}
		local_b0._16_4_ = 1;
		if (1 < (int)(double)pIVar10) {
			local_b0._16_4_ = (int)(double)pIVar10;
		}
		local_98._0_4_ = fVar20 / fVar18;
		dVar9 = (double)(float)local_98;
		pMVar15 = (MethodInfo)local_b0;
		dVar11 = modf(dVar9, (double)pMVar15, pMVar13);
		if (0.0 <= (float)local_98) {
			if ((dVar11 != 0.5) || (NAN(dVar11))) {
				local_b0._0_8_ = floor(dVar9 + 0.5, pMVar15);
			}
			else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
				local_b0._0_8_ = (double)local_b0._0_8_ + 1.0;
			}
		}
		else if ((dVar11 != -0.5) || (NAN(dVar11))) {
			local_b0._0_8_ = ceil(dVar9 + -0.5, pMVar15);
		}
		else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
			local_b0._0_8_ = (double)local_b0._0_8_ + -1.0;
		}
		iVar12 = 1;
		if (1 < (int)(double)local_b0._0_8_) {
			iVar12 = (int)(double)local_b0._0_8_;
		}
		__this = new List<Vector3>(local_b0._16_4_ * local_b0._12_4_ * iVar12);
		if (random == null) {
	label_0598b012: ;
			throw new NullReferenceException();
		}
		if (__this == null) {
			random.NextDouble();
			random.NextDouble();
			random.NextDouble();
			throw new NullReferenceException();
		}
		auVar8._4_4_ = (float)(int)local_b0._16_4_;
		auVar8._0_4_ = (float)(int)local_b0._12_4_;
		auVar8._8_8_ = 0;
		local_68 = divps(local_68, auVar8);
		local_b0._20_4_ = bounds.m_Center.z - (float)local_b0._20_4_;
		local_48._4_4_ = bounds.m_Center.y - (float)local_48._4_4_;
		local_48._0_4_ = bounds.m_Center.x - (float)local_48._0_4_;
		stack0xffffffffffffffc0 = CONCAT44(0.0 - fStack_3c, 0.0 - (float)local_48._8_4_);
		local_6c = 0;
		do {
			local_58 = ZEXT416((uint)((float)(int)local_6c + 0.5));
			iVar17 = 0;
			do {
				local_88 = (Il2CppType)CONCAT44((float)iVar17 + 0.5, local_58._0_4_);
				iVar16 = 0;
				do {
					while(true) {
						local_98 = (sbyte)random.NextDouble();
						dVar9 = random.NextDouble();
						local_98._0_4_ = (float)(double)local_98 + -0.5;
						local_98._4_4_ = (float)dVar9 + -0.5;
						dVar9 = random.NextDouble();
						pMVar13 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar6 = __this._items;
						if (pUVar6 == null) goto label_0598b012;
						fVar18 = ((float)local_98 * 0.8 + (float)local_88) * (float)local_68._0_4_ + (float)local_48._0_4_;
						fVar19 = (local_98._4_4_ * 0.8 + local_88._4_4_) * (float)local_68._4_4_ + (float)local_48._4_4_;
						item.z =((float)iVar16 + 0.5 + ((float)dVar9 + -0.5) * 0.8) * (fVar20 / (float)iVar12) +(float)local_b0._20_4_;
						uVar4 = __this._size;
						if ((uint)pUVar6.Length <= uVar4) break;
						__this._size = uVar4 + 1;
						pUVar6[(int)uVar4].x = fVar18;
						pUVar6[(int)uVar4].y = fVar19;
						pUVar6[(int)uVar4].z = item.z;
						iVar16 = iVar16 + 1;
						if (iVar12 == iVar16) goto label_0598aeb0;
					}
					item.x = fVar18;
					item.y = fVar19;
					__this.AddWithResize(item);
					iVar16 = iVar16 + 1;
				} while (iVar12 != iVar16);
	label_0598aeb0: ;
				iVar17 = iVar17 + 1;
			} while (iVar17 != local_b0._16_4_);
			local_6c = local_6c + 1;
			if (local_6c == local_b0._12_4_) {
				return __this;
			}
		} while(true);
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x588A390", Offset = "0x5889390", VA = "0x588A390")]
	private bool Clip(List<Triangle> source, List<Triangle> target, Vector3 normal, float distance)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Clip): 33 lines keep C-only constructs
		int piVar1;
		List<MapFracture.Segment> pSVar2;
		ulong uVar3;
		MapFracture.Triangle triangle;
		bool bVar4;
		bool bVar5;
		Vector3 normal_00;
		System_Collections_Generic_List_Enumerator_T__o local_b8;
		ulong uStack_a0;
		ulong local_98;
		ulong uStack_90;
		ulong local_88;
		ulong uStack_80;
		ulong local_78;
		ulong uStack_70;
		ulong local_68;
		ulong uStack_60;
		ulong local_58;
		ulong uStack_50;
		ulong local_48;
		ulong uStack_40;

		local_48 = 0;
		uStack_40 = 0;
		local_58 = 0;
		uStack_50 = 0;
		local_68 = 0;
		uStack_60 = 0;
		local_78 = 0;
		uStack_70 = 0;
		local_88 = 0;
		uStack_80 = 0;
		local_98 = 0;
		uStack_90 = 0;
		local_b8._current = null;
		uStack_a0 = 0;
		local_b8._list = null;
		local_b8._index = 0;
		local_b8._version = 0;
		bVar4 = MapFracture.Crosses(source, normal, distance);
		if (!bVar4) {
			return bVar4;
		}
		if (target != null) {
			piVar1 = &target._version;
			*piVar1 = *piVar1 + 1;
			target._size = 0;
			pSVar2 = this._segments;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				pSVar2._size = 0;
				if (source != null) {
					local_b8 = source.GetEnumerator();
					while (bVar5 = local_b8.MoveNext()) {
						triangle.A.Position.z = (float)(undefined4)uStack_a0;
						triangle.A.Normal.x = (float)uStack_a0._4_4_;
						triangle.A.Position._0_8_ = local_b8._current;
						triangle.A.Normal.y = (float)(undefined4)local_98;
						triangle.A.Normal.z = (float)local_98._4_4_;
						triangle.A.UV.x = (float)(undefined4)uStack_90;
						triangle.A.UV.y = (float)uStack_90._4_4_;
						triangle.A.Shade = (float)(undefined4)local_88;
						triangle.B.Position.x = (float)local_88._4_4_;
						triangle.B.Position.y = (float)(undefined4)uStack_80;
						triangle.B.Position.z = (float)uStack_80._4_4_;
						triangle.B.Normal.x = (float)(undefined4)local_78;
						triangle.B.Normal.y = (float)local_78._4_4_;
						triangle.B.Normal.z = (float)(undefined4)uStack_70;
						triangle.B.UV.x = (float)uStack_70._4_4_;
						triangle.B.UV.y = (float)(undefined4)local_68;
						triangle.B.Shade = (float)local_68._4_4_;
						triangle.C.Position.x = (float)(undefined4)uStack_60;
						triangle.C.Position.y = (float)uStack_60._4_4_;
						triangle.C.Position.z = (float)(undefined4)local_58;
						triangle.C.Normal.x = (float)local_58._4_4_;
						triangle.C.Normal.y = (float)(undefined4)uStack_50;
						triangle.C.Normal.z = (float)uStack_50._4_4_;
						triangle.C.UV.x = (float)(undefined4)local_48;
						triangle.C.UV.y = (float)local_48._4_4_;
						triangle.C.Shade = (float)(undefined4)uStack_40;
						triangle.Submesh = uStack_40._4_4_;
						this.ClipTriangle(triangle, normal, distance, target);
					}
					local_b8.Dispose();
					pSVar2 = this._segments;
					if (pSVar2 != null) {
						if (pSVar2._size < 1) {
							return bVar4;
						}
						normal_00.z = -normal.z;
						uVar3 = normal._0_8_ ^ 0x8000000080000000;
						normal_00.x = (float)(int)uVar3;
						normal_00.y = (float)(int)(uVar3 >> 0x20);
						MapFracture.AddCaps(pSVar2, normal_00, target);
						return bVar4;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x588B770", Offset = "0x588A770", VA = "0x588B770")]
	private static bool Crosses(List<Triangle> triangles, Vector3 normal, float distance)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Crosses): 7 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar3;
		System_Collections_Generic_List_Enumerator_T__o local_b8;
		ulong uStack_a0;
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		ulong uStack_60;
		ulong local_58;
		byte[] local_38 = new byte[24];

		fVar3 = normal.z;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = normal._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		local_58 = 0;
		uStack_60 = 0;
		fStack_84 = 0.0;
		fStack_80 = 0.0;
		fStack_7c = 0.0;
		local_b8._current = null;
		uStack_a0 = 0;
		local_b8._list = null;
		local_b8._index = 0;
		local_b8._version = 0;
		if (triangles == null) {
			throw new NullReferenceException();
		}
		local_b8 = triangles.GetEnumerator();
		iVar2 = 5;
		while(true) {
			bVar1 = local_b8.MoveNext();
			if (!bVar1) break;
			if (((((float)uStack_a0 * fVar3 +(float)((ulong)local_b8._current >> 0x20) * (float)local_38._4_4_ + SUB84(local_b8._current, 0) * (float)local_38._0_4_) - distance < -0.0001) ||((fStack_7c * fVar3 + fStack_80 * (float)local_38._4_4_ + fStack_84 * (float)local_38._0_4_) - distance < -0.0001)) ||(((float)local_58 * fVar3 +(float)((ulong)uStack_60 >> 0x20) * (float)local_38._4_4_ + (float)uStack_60 * (float)local_38._0_4_) - distance < -0.0001)) goto label_0598b910;
		}
		iVar2 = 6;
	label_0598b910: ;
		local_b8.Dispose();
		return iVar2 == 5 && bVar1;
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x588B9B0", Offset = "0x588A9B0", VA = "0x588B9B0")]
	private void ClipTriangle(Triangle triangle, Vector3 normal, float distance, List<Triangle> kept)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$ClipTriangle): 104 lines keep C-only constructs
		int piVar1;
		MapFracture.Vertex pMVar2;
		float pfVar3;
		ulong puVar4;
		Vector3 pUVar5;
		Vector2 pUVar6;
		Vector2 pUVar7;
		float fVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar16;
		uint uVar17;
		uint uVar18;
		ulong uVar13;
		ulong uVar14;
		Vector2 UVar15;
		uint uVar19;
		int iVar20;
		uint uVar21;
		MapFracture.Vertex[] pMVar22;
		Single[] pSVar23;
		List<MapFracture.Segment> __this_00;
		byte[] auVar24 = new byte[16];
		Vector2 UVar25;
		ulong uVar26;
		ulong uVar27;
		ulong uVar28;
		uint uVar29;
		float fVar30;
		uint uVar31;
		uint uVar32;
		MapFracture.Segment item;
		MapFracture.Triangle item_00;
		Vector2 UVar33;
		uint uVar34;
		uint uVar35;
		MapFracture.Vertex pMVar36;
		MapFracture.Triangle pMVar37;
		uint uVar39;
		MapFracture.Triangle[] pMVar40;
		UnityEngine_Vector3_StaticFields pUVar41;
		long lVar42;
		uint uVar43;
		uint uVar44;
		uint uVar45;
		long lVar46;
		ulong uVar47;
		ulong uVar48;
		float fVar49;
		float fVar50;
		float fVar51;
		uint uVar52;
		uint extraout_XMM0_Db;
		float fVar53;
		float fVar54;
		float fVar55;
		byte[] auVar56 = new byte[16];
		float fVar57;
		float fVar58;
		float fVar59;
		float fVar60;
		float fVar61;
		byte[] local_188 = new byte[28];
		float fStack_16c;
		float local_168;
		float fStack_164;
		float local_158;
		float fStack_154;
		float fStack_150;
		float fStack_14c;
		float local_148;
		float fStack_144;
		float fStack_140;
		float fStack_13c;
		float fStack_130;
		float fStack_12c;
		float local_128;
		float fStack_124;
		float local_118;
		float fStack_114;
		Vector2 local_108;
		Vector3[] local_f8 = new Vector3[2];
		Vector2 UStack_e0;
		float local_d8;
		float fStack_d4;
		float fStack_d0;
		float fStack_cc;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		float local_b8;
		float fStack_b4;
		Vector3 UStack_b0;
		float fStack_a0;
		float fStack_9c;
		float local_98;
		float fStack_94;
		float fStack_90;
		float local_88;
		float fStack_84;
		MapFracture local_70;
		Vector2 local_68;
		ulong local_58;
		ulong local_48;
		ulong uStack_40;

		uVar13 = triangle.C.Position._0_8_;
		uVar14 = triangle.C._8_8_;
		uVar26 = triangle.C.Normal._4_8_;
		fVar55 = normal.z;
		fVar30 = normal.x;
		fVar51 = normal.y;
		pMVar22 = this._corners;
		if (pMVar22 == null) {
	label_0598c723: ;
			throw new NullReferenceException();
		}
		if ((int)pMVar22.Length != 0) {
			pMVar22[0].Shade = triangle.A.Shade;
			local_188._0_8_ = triangle.A.Position._0_8_;
			unique0x10002097 = triangle.A.UV;
			pMVar22[0].Normal.y = triangle.A.Normal.y;
			pMVar22[0].Normal.z = triangle.A.Normal.z;
			pMVar22[0].UV = unique0x10002097;
			pMVar22[0].Position.x = triangle.A.Position.x;
			pMVar22[0].Position.y = triangle.A.Position.y;
			*(long)&pMVar22[0].Position.z = triangle.A._8_8_;
			pMVar22 = this._corners;
			local_128 = triangle.C.UV.x;
			fStack_124 = triangle.C.UV.y;
			fStack_130 = triangle.C.Normal.y;
			fStack_12c = triangle.C.Normal.z;
			local_148 = triangle.B.UV.y;
			fStack_144 = triangle.B.Shade;
			fStack_140 = triangle.C.Position.x;
			fStack_13c = triangle.C.Position.y;
			local_158 = triangle.B.Normal.x;
			fStack_154 = triangle.B.Normal.y;
			fStack_150 = triangle.B.Normal.z;
			fStack_14c = triangle.B.UV.x;
			local_188._16_4_ = triangle.A.Normal.y;
			local_188._20_4_ = triangle.A.Normal.z;
			local_188._8_4_ = triangle.A.Position.z;
			local_188._12_4_ = triangle.A.Normal.x;
			local_168 = triangle.A.Shade;
			fStack_164 = triangle.B.Position.x;
			if (pMVar22 == null) goto label_0598c723;
			local_168 = triangle.A.Shade;
			if ((pMVar22.Length & 0xfffffffe) != 0) {
				pMVar22[1].Shade = fStack_144;
				pMVar22[1].Normal.y = (float)triangle.B.Normal.y;
				pMVar22[1].Normal.z = (float)triangle.B.Normal.z;
				pMVar22[1].UV = triangle.B.UV;
				pMVar22[1].Position.x = (float)triangle.B.Position.x;
				pMVar22[1].Position.y = (float)triangle.B.Position.y;
				*(long)&pMVar22[1].Position.z = triangle.B._8_8_;
				pMVar22 = this._corners;
				UStack_b0.z = triangle.C.Position.z;
				UStack_b0.x = triangle.C.Position.x;
				UStack_b0.y = triangle.C.Position.y;
				local_f8[1].y = triangle.A.Normal.y;
				local_f8[1].z = triangle.A.Normal.z;
				UStack_e0 = unique0x10002097;
				local_f8[0].x = triangle.A.Position.x;
				local_f8[0].y = triangle.A.Position.y;
				local_f8[0].z = triangle.A.Position.z;
				local_f8[1].x = triangle.A.Normal.x;
				local_d8 = triangle.A.Shade;
				fStack_d4 = triangle.B.Position.x;
				fStack_d0 = triangle.B.Position.y;
				fStack_cc = triangle.B.Position.z;
				local_c8 = local_158;
				fStack_c4 = fStack_154;
				fStack_c0 = fStack_150;
				fStack_bc = fStack_14c;
				local_b8 = local_148;
				fStack_b4 = fStack_144;
				fStack_a0 = fStack_130;
				fStack_9c = fStack_12c;
				local_98 = local_128;
				fStack_94 = fStack_124;
				fStack_90 = triangle.C.Shade;
				if (pMVar22 == null) goto label_0598c723;
				if (2 < (uint)pMVar22.Length) {
					pMVar22[2].Shade = triangle.C.Shade;
					pMVar22[2].Normal.y = triangle.C.Normal.y;
					pMVar22[2].Normal.z = triangle.C.Normal.z;
					pMVar22[2].UV = triangle.C.UV;
					pMVar22[2].Position.x = triangle.C.Position.x;
					pMVar22[2].Position.y = triangle.C.Position.y;
					*(ulong)&pMVar22[2].Position.z = uVar14;
					pMVar22 = this._corners;
					if (pMVar22 == null) goto label_0598c723;
					pSVar23 = this._distances;
					iVar20 = (int)pMVar22.Length;
					if (pSVar23 == null) {
						if (iVar20 != 0) goto label_0598c723;
					}
					else if ((iVar20 != 0) && (uVar44 = (uint)pSVar23.Length, uVar44 != 0)) {
						uVar9 = pMVar22[0].Position.x;
						uVar16 = pMVar22[0].Position.y;
						fVar49 = ((float)uVar16 * fVar51 + (float)uVar9 * fVar30 + pMVar22[0].Position.z * fVar55) - distance;
						pSVar23[0] = fVar49;
						if ((iVar20 != 1) && (1 < uVar44)) {
							uVar10 = pMVar22[1].Position.x;
							uVar17 = pMVar22[1].Position.y;
							fVar59 = ((float)uVar17 * fVar51 + (float)uVar10 * fVar30 + pMVar22[1].Position.z * fVar55) - distance;
							pSVar23[1] = fVar59;
							if ((iVar20 != 2) && (2 < uVar44)) {
								uVar11 = pMVar22[2].Position.x;
								uVar18 = pMVar22[2].Position.y;
								fVar30 = ((float)uVar18 * fVar51 + (float)uVar11 * fVar30 + fVar55 * pMVar22[2].Position.z) - distance;
								pSVar23[2] = fVar30;
								if (-0.0001 <= fVar30 && (-0.0001 <= fVar49 && -0.0001 <= fVar59)) {
									if (kept != null) {
										piVar1 = &kept._version;
										*piVar1 = *piVar1 + 1;
										pMVar40 = kept._items;
										if (pMVar40 != null) {
											uVar44 = kept._size;
											lVar46 = (long)(int)uVar44;
											if ((uint)pMVar40.Length <= uVar44) {
												kept.AddWithResize(triangle);
												return;
											}
											kept._size = uVar44 + 1;
											lVar42 = lVar46 * 0x70;
											pUVar7 = &pMVar40[lVar46].C.UV;
											pUVar7.fields = triangle.C.UV;
											pUVar7[1] = (Vector2)triangle._104_8_;
											pMVar37 = &pMVar40[lVar46];
											*(ulong)((long)&(pMVar37.C).Position + 8) = uVar14;
											*(ulong)((long)&(pMVar37.C).Normal + 4) = uVar26;
											pMVar37 = &pMVar40[lVar46];
											*(ulong)((long)&(pMVar37.B).UV + 4) = triangle.B._28_8_;
											*(ulong)&(pMVar37.C).Position = uVar13;
											local_f8[0].x = triangle.A.Position.x;
											local_f8[0].y = triangle.A.Position.y;
											local_188._8_4_ = triangle.A.Position.z;
											local_188._12_4_ = triangle.A.Normal.x;
											local_f8[1].y = triangle.A.Normal.y;
											local_f8[1].z = triangle.A.Normal.z;
											local_188._24_4_ = triangle.A.UV.x;
											fStack_16c = triangle.A.UV.y;
											fVar30 = triangle.B.Position.y;
	label_0598c2ad: ;
											puVar4 = (ulong)((long)&pMVar40[0].B.Normal + lVar42) ;
											*puVar4 = triangle.B.Normal._0_8_;
											puVar4[1] = triangle.B._20_8_;
											pfVar3 = (float)((long)&pMVar40[0].A.Shade + lVar42);
											*pfVar3 = local_168;
											pfVar3[1] = fStack_164;
											pfVar3[2] = fVar30;
											pfVar3[3] = fStack_cc;
											pfVar3 = (float)((long)&pMVar40[0].A.Normal + lVar42 + 4U) ;
											*pfVar3 = local_f8[1].y;
											pfVar3[1] = local_f8[1].z;
											pfVar3[2] = (float)local_188._24_4_;
											pfVar3[3] = fStack_16c;
											pfVar3 = (float)((long)&pMVar40[0].A.Position + lVar42);
											*pfVar3 = local_f8[0].x;
											pfVar3[1] = local_f8[0].y;
											pfVar3[2] = (float)local_188._8_4_;
											pfVar3[3] = (float)local_188._12_4_;
											return;
										}
									}
								}
								else {
									if ((bool)(~(0.0001 < fVar49 || 0.0001 < fVar59) & fVar30 <= 0.0001)) {
										return;
									}
									lVar46 = 0x10;
									uVar43 = 0;
									uVar47 = 0;
									uVar44 = 0;
									do {
										uVar48 = uVar47 + 1;
										uVar39 = (uint)uVar48;
										if (uVar47 == 2) {
											uVar39 = 0;
										}
										pMVar22 = this._corners;
										if (pMVar22 == null) goto label_0598c723;
										if ((uint)pMVar22.Length <= uVar47) goto label_0598c71e;
										pSVar23 = this._distances;
										if (pSVar23 == null) goto label_0598c723;
										uVar45 = (uint)pSVar23.Length;
										if ((uVar45 <= uVar47) || (uVar45 <= uVar39)) goto label_0598c71e;
										uVar13 = *(ulong)((long)pMVar22.m_Items + lVar46 * 4 + -0x40);
										fVar30 = *(float)((long)pMVar22.m_Items + lVar46 * 4 + -0x38);
										uVar14 = *(ulong)((long)pMVar22.m_Items + lVar46 * 4 + -0x34);
										fVar51 = *(float)((long)pMVar22.m_Items + lVar46 * 4 + -0x2c);
										UVar15 = *(Vector2)((long)pMVar22.m_Items + lVar46 * 4 + -0x28);
										fVar55 = *(float)((long)pMVar22.m_Items + lVar46 * 4 + -0x20);
										fVar49 = pSVar23[uVar47];
										fVar59 = pSVar23[uVar39];
										uVar45 = uVar44;
										if (-0.0001 <= fVar49) {
											pMVar22 = this._polygon;
											if (pMVar22 == null) goto label_0598c723;
											if ((uint)pMVar22.Length <= uVar44) goto label_0598c71e;
											uVar45 = uVar44 + 1;
											pMVar22[(int)uVar44].Position.x = (float)uVar13;
											pMVar22[(int)uVar44].Position.y = SUB84(uVar13, 4);
											pMVar22[(int)uVar44].Position.z = fVar30;
											pMVar22[(int)uVar44].Normal.x = (float)(int)uVar14;
											pMVar22[(int)uVar44].Normal.y = (float)(int)((ulong)uVar14 >> 0x20) ;
											pMVar22[(int)uVar44].Normal.z = fVar51;
											pMVar22[(int)uVar44].UV = UVar15;
											pMVar22[(int)uVar44].Shade = fVar55;
										}
										if (ABS(fVar49) <= 0.0001) {
											pMVar22 = this._cut;
											if (pMVar22 == null) goto label_0598c723;
											uVar44 = (uint)pMVar22.Length;
											if ((int)uVar43 < (int)uVar44) {
												if (uVar44 <= uVar43) goto label_0598c71e;
												pMVar22[(int)uVar43].Position.x = (float)uVar13;
												pMVar22[(int)uVar43].Position.y = SUB84(uVar13, 4);
												pMVar22[(int)uVar43].Position.z = fVar30;
												pMVar22[(int)uVar43].Normal.x = (float)(int)uVar14;
												pMVar22[(int)uVar43].Normal.y =(float)(int)((ulong)uVar14 >> 0x20);
												pMVar22[(int)uVar43].Normal.z = fVar51;
												pMVar22[(int)uVar43].UV = UVar15;
												pMVar22[(int)uVar43].Shade = fVar55;
											}
	label_0598bcc2: ;
											uVar43 = uVar43 + 1;
										}
										else if (((0.0001 < fVar49) && (fVar59 < -0.0001)) ||((fVar49 < -0.0001 && (0.0001 < fVar59)))) {
											pMVar22 = this._corners;
											if (pMVar22 != null) {
												local_48 = uVar14;
												uStack_40 = 0;
												local_88 = fVar51;
												if (uVar39 < (uint)pMVar22.Length) {
													local_58._0_4_ = pMVar22[uVar39].Position.x;
													local_58._4_4_ = pMVar22[uVar39].Position.y;
													fVar51 = pMVar22[uVar39].Position.z;
													pMVar36 = &pMVar22[uVar39];
													pUVar5 = &pMVar36.Normal;
													uVar34 = pUVar5.x;
													uVar35 = pUVar5.y;
													fVar50 = pMVar22[uVar39].Normal.z;
													local_68 = pMVar22[uVar39].UV;
													fVar8 = pMVar22[uVar39].Shade;
													local_108 = UVar15;
													local_118 = (float)uVar13;
													fStack_114 = SUB84(uVar13, 4);
													if (Il2CppMethodInitialized_0753e72d == false) {
														Il2CppMethodInitialized_0753e72d = true;
														local_188._0_4_ = 0.0;
														local_188._4_4_ = 0.0;
														fVar53 = local_118;
														fVar54 = fStack_114;
														fVar57 = local_108.x;
														fVar58 = local_108.y;
														fVar60 = (float)uVar34;
														fVar61 = (float)uVar35;
														if (Il2CppMethodInitialized_0753e729 == false) goto label_0598c1a6;
	label_0598bea8: ;
														local_188._0_4_ = 0.0;
														local_188._4_4_ = 0.0;
														uVar21 = (typeof(Math)._2).cctor_finished_or_no_cctor;
													}
													else {
														local_188._0_4_ = 0.0;
														local_188._4_4_ = 0.0;
														fVar53 = (float)uVar13;
														fVar54 = SUB84(uVar13, 4);
														fVar57 = UVar15.x;
														fVar58 = UVar15.y;
														fVar60 = pUVar5.x;
														fVar61 = (pMVar36.Normal).y;
														if (Il2CppMethodInitialized_0753e729 != false) goto label_0598bea8;
	label_0598c1a6: ;
														local_188._0_4_ = 0.0;
														local_188._4_4_ = 0.0;
														Il2CppMethodInitialized_0753e729 = true;
														uVar21 = (typeof(Math)._2).cctor_finished_or_no_cctor;
														fVar53 = local_118;
														fVar54 = fStack_114;
														fVar57 = local_108.x;
														fVar58 = local_108.y;
														fVar60 = (float)uVar34;
														fVar61 = (float)uVar35;
													}
													if (uVar21 == 0) {
														fVar53 = local_118;
														fVar54 = fStack_114;
														fVar57 = local_108.x;
														fVar58 = local_108.y;
														fVar60 = (float)uVar34;
														fVar61 = (float)uVar35;
													}
													fVar49 = fVar49 / (fVar49 - fVar59);
													fVar59 = 1.0;
													if (fVar49 <= 1.0) {
														fVar59 = fVar49;
													}
													fVar59 = (float)(-(uint)(0.0 <= fVar49) & (uint)fVar59);
													auVar56._0_4_ = (fVar60 - (float)local_48) * fVar59 + (float)local_48;
													auVar56._4_4_ = (fVar61 - local_48._4_4_) * fVar59 + local_48._4_4_;
													auVar56._8_4_ = (0.0 - (float)uStack_40) * fVar59 + (float)uStack_40;
													auVar56._12_4_ = (0.0 - uStack_40._4_4_) * fVar59 + uStack_40._4_4_;
													fVar49 = (fVar50 - local_88) * fVar59 + local_88;
													uVar52 = 0;
													fVar50 = fVar49 * fVar49 + auVar56._4_4_ * auVar56._4_4_ + auVar56._0_4_ * auVar56._0_4_;
													if (fVar50 < 0.0) {
														local_88 = fVar59;
														fStack_84 = fVar59;
														fVar50 = sqrtf(fVar50);
														uVar52 = extraout_XMM0_Db;
														fVar53 = local_118;
														fVar54 = fStack_114;
														fVar57 = local_108.x;
														fVar58 = local_108.y;
														fVar60 = local_88;
														fVar61 = fStack_84;
														if (1e-05 < fVar50) goto label_0598c04b;
	label_0598bf60: ;
														pUVar41 = typeof(Vector3).static_fields;
														fVar49 = (pUVar41.zeroVector).z;
													}
													else {
														fVar50 = SQRT(fVar50);
														fVar60 = fVar59;
														fVar61 = fVar59;
														if (fVar50 <= 1e-05) goto label_0598bf60;
	label_0598c04b: ;
														fVar49 = fVar49 / fVar50;
														auVar24._4_4_ = fVar50;
														auVar24._0_4_ = fVar50;
														auVar24._8_4_ = uVar52;
														auVar24._12_4_ = uVar52;
														auVar56 = divps(auVar56, auVar24);
														local_188._0_4_ = auVar56._0_4_;
														local_188._4_4_ = auVar56._4_4_;
														pUVar41 = (UnityEngine_Vector3_StaticFields)local_188;
													}
													pMVar22 = this._polygon;
													if (pMVar22 != null) {
														if (uVar45 < (uint)pMVar22.Length) {
															fVar53 = ((float)local_58 - fVar53) * fVar60 + fVar53;
															fVar54 = (local_58._4_4_ - fVar54) * fVar61 + fVar54;
															fVar30 = (fVar51 - fVar30) * fVar59 + fVar30;
															uVar12 = (pUVar41.zeroVector).x;
															uVar19 = (pUVar41.zeroVector).y;
															fVar57 = (local_68.x - fVar57) * fVar60 + fVar57;
															fVar58 = (local_68.y - fVar58) * fVar61 + fVar58;
															fVar55 = (fVar8 - fVar55) * fVar59 + fVar55;
															pMVar22[(int)uVar45].Position.x = fVar53;
															pMVar22[(int)uVar45].Position.y = fVar54;
															pMVar22[(int)uVar45].Position.z = fVar30;
															pMVar22[(int)uVar45].Normal.x = (float)uVar12;
															pMVar22[(int)uVar45].Normal.y = (float)uVar19;
															pMVar22[(int)uVar45].Normal.z = fVar49;
															UVar15.y = fVar58;
															UVar15.x = fVar57;
															pMVar22[(int)uVar45].UV = UVar15;
															pMVar22[(int)uVar45].Shade = fVar55;
															pMVar22 = this._cut;
															if (pMVar22 == null) goto label_0598c723;
															uVar44 = (uint)pMVar22.Length;
															if ((int)uVar43 < (int)uVar44) {
																if (uVar44 <= uVar43) goto label_0598c71e;
																pMVar22[(int)uVar43].Position.x = fVar53;
																pMVar22[(int)uVar43].Position.y = fVar54;
																pMVar22[(int)uVar43].Position.z = fVar30;
																pMVar22[(int)uVar43].Normal.x = (float)uVar12;
																pMVar22[(int)uVar43].Normal.y = (float)uVar19;
																pMVar22[(int)uVar43].Normal.z = fVar49;
																UVar25.y = fVar58;
																UVar25.x = fVar57;
																pMVar22[(int)uVar43].UV = UVar25;
																pMVar22[(int)uVar43].Shade = fVar55;
															}
															uVar45 = uVar45 + 1;
															goto label_0598bcc2;
														}
														goto label_0598c71e;
													}
													goto label_0598c723;
												}
												goto label_0598c71e;
											}
											goto label_0598c723;
										}
										lVar46 = lVar46 + 9;
										uVar47 = uVar48;
										uVar44 = uVar45;
									} while (uVar48 != 3);
									uVar45 = uVar45 - 1;
									if (1 < (int)uVar45) {
										uVar47 = 1;
										lVar46 = 0x68;
										local_70 = this;
										do {
											while(true) {
												pMVar22 = this._polygon;
												if (pMVar22 == null) goto label_0598c723;
												uVar48 = (ulong)(uint)pMVar22.Length;
												if (((uVar48 == 0) || (uVar48 <= uVar47)) || (uVar47 = uVar47 + 1, uVar48 <= uVar47)) goto label_0598c71e;
												pMVar2 = pMVar22.m_Items;
												fStack_90 = *(float)((long)&pMVar22[0].Position.x + lVar46);
												puVar4 = (ulong)((long)pMVar22.m_Items + lVar46 + -0x20);
												UStack_b0._0_8_ = *puVar4;
												unique0x1000175f = puVar4[1];
												puVar4 = (ulong)((long)pMVar22.m_Items + lVar46 + -0x10);
												uVar13 = *puVar4;
												UVar15 = *(Vector2)(puVar4 + 1);
												fStack_a0 = (float)uVar13;
												fStack_9c = (float)((ulong)uVar13 >> 0x20);
												local_98 = UVar15.x;
												fStack_94 = UVar15.y;
												local_d8 = pMVar22[0].Shade;
												local_f8[0].x = pMVar2.Position.x;
												local_f8[0].y = pMVar2.Position.y;
												local_f8._8_8_ = *(ulong)&pMVar22[0].Position.z;
												local_f8[1].y = pMVar22[0].Normal.y;
												local_f8[1].z = pMVar22[0].Normal.z;
												UStack_e0 = pMVar22[0].UV;
												fStack_b4 = *(float)((long)(pMVar22.m_Items + -1) + lVar46);
												puVar4 = (ulong)((long)pMVar22.m_Items + lVar46 + -0x44);
												uVar14 = *puVar4;
												uVar26 = puVar4[1];
												puVar4 = (ulong)((long)pMVar22.m_Items + lVar46 + -0x34);
												uVar27 = *puVar4;
												uVar28 = puVar4[1];
												fStack_c4 = (float)uVar27;
												fStack_c0 = (float)((ulong)uVar27 >> 0x20);
												fStack_bc = (float)uVar28;
												local_b8 = (float)((ulong)uVar28 >> 0x20);
												fStack_d4 = (float)uVar14;
												fStack_d0 = (float)((ulong)uVar14 >> 0x20);
												fStack_cc = (float)uVar26;
												local_c8 = (float)((ulong)uVar26 >> 0x20);
												if (kept == null) goto label_0598c723;
												local_128 = local_98;
												fStack_124 = fStack_94;
												local_148 = local_b8;
												fStack_140 = UStack_b0.x;
												fStack_13c = UStack_b0.y;
												item_00.B.Position.x = fStack_d4;
												item_00.A.Shade = local_d8;
												item_00.B.Position.z = fStack_cc;
												item_00.B.Position.y = fStack_d0;
												item_00.B.Normal.y = fStack_c4;
												item_00.B.Normal.x = local_c8;
												local_158 = local_c8;
												fStack_154 = fStack_c4;
												fStack_150 = fStack_c0;
												fStack_14c = fStack_bc;
												fStack_164 = fStack_d4;
												piVar1 = &kept._version;
												*piVar1 = *piVar1 + 1;
												pMVar40 = kept._items;
												local_188._0_8_ = local_f8[0]._0_8_;
												local_188._8_8_ = local_f8._8_8_;
												local_188._16_8_ = local_f8[1]._4_8_;
												local_168 = local_d8;
												fStack_144 = fStack_b4;
												fStack_130 = fStack_a0;
												fStack_12c = fStack_9c;
												if (pMVar40 == null) goto label_0598c723;
												uVar44 = kept._size;
												if ((uint)pMVar40.Length <= uVar44) break;
												kept._size = uVar44 + 1;
												pUVar7 = &pMVar40[(int)uVar44].C.UV;
												pUVar7.fields = UVar15;
												pUVar7[1] = (Vector2)CONCAT44(triangle.Submesh, fStack_90);
												pMVar37 = &pMVar40[(int)uVar44];
												*(ulong)((long)&(pMVar37.C).Position + 8) = unique0x1000175f;
												*(ulong)((long)&(pMVar37.C).Normal + 4) = uVar13;
												pMVar37 = &pMVar40[(int)uVar44];
												*(ulong)((long)&(pMVar37.B).UV + 4) = CONCAT44(fStack_b4, local_b8);
												*(ulong)&(pMVar37.C).Position = UStack_b0._0_8_;
												pMVar37 = &pMVar40[(int)uVar44];
												pMVar2 = &pMVar37.B;
												pMVar2.Normal.x = local_c8;
												pMVar2.Normal.y = fStack_c4;
												*(ulong)((long)&(pMVar37.B).Normal + 8) = CONCAT44(fStack_bc, fStack_c0) ;
												pMVar37 = &pMVar40[(int)uVar44];
												*(ulong)&(pMVar37.A).Shade = CONCAT44(fStack_d4, local_d8);
												*(ulong)((long)&(pMVar37.B).Position + 4) = CONCAT44(fStack_cc, fStack_d0);
												pMVar37 = &pMVar40[(int)uVar44];
												*(ulong)((long)&(pMVar37.A).Normal + 4) = local_f8[1]._4_8_;
												(pMVar37.A).UV = UStack_e0;
												*(ulong)&pMVar40[(int)uVar44].A.Position = local_f8[0]._0_8_;
												*(ulong)((long)&pMVar40[(int)uVar44].A.Position + 8) = local_f8._8_8_;
												lVar46 = lVar46 + 0x24;
												if (uVar45 == uVar47) goto label_0598c575;
											}
											item_00.Submesh = triangle.Submesh;
											item_00.C.Shade = fStack_90;
											item_00.A.Position = pMVar2.Position;
											item_00.A.Normal = pMVar2.Normal;
											item_00.A.UV = pMVar2.UV;
											item_00.B.Normal.z = fStack_c0;
											item_00.B.UV.x = fStack_bc;
											item_00.B.UV.y = local_b8;
											item_00.B.Shade = fStack_b4;
											item_00.C.Position.x = fStack_140;
											item_00.C.Position.y = fStack_13c;
											item_00.C.Position.z = (float)unique0x1000175f;
											item_00.C.Normal.x = SUB84(unique0x1000175f, 4);
											item_00.C.Normal.y = (float)(int)uVar13;
											item_00.C.Normal.z = (float)(int)((ulong)uVar13 >> 0x20);
											item_00.C.UV = UVar15;
											kept.AddWithResize(item_00);
											lVar46 = lVar46 + 0x24;
											this = local_70;
										} while (uVar45 != uVar47);
									}
	label_0598c575: ;
									if (uVar43 != 2) {
										return;
									}
									pMVar22 = this._cut;
									if (pMVar22 != null) {
										iVar20 = (int)pMVar22.Length;
										if ((iVar20 == 1) || (iVar20 == 0)) goto label_0598c71e;
										__this_00 = this._segments;
										pfVar3 = &pMVar22[0].Shade;
										local_d8 = *pfVar3;
										pMVar2 = pMVar22.m_Items;
										local_f8[0].x = pMVar2.Position.x;
										local_f8[0].y = pMVar2.Position.y;
										local_f8._8_8_ = *(ulong)&pMVar22[0].Position.z;
										local_f8[1].y = pMVar22[0].Normal.y;
										local_f8[1].z = pMVar22[0].Normal.z;
										UStack_e0 = pMVar22[0].UV;
										uVar29 = pMVar22[1].Position.x;
										fVar30 = pMVar22[1].Position.y;
										uVar14 = *(ulong)pfVar3;
										uVar13 = *(ulong)&pMVar22[1].Position.z;
										uVar31 = pMVar22[1].Normal.y;
										uVar32 = pMVar22[1].Normal.z;
										UVar15 = pMVar22[1].UV;
										fStack_cc = (float)uVar13;
										local_c8 = (float)((ulong)uVar13 >> 0x20);
										fStack_bc = UVar15.x;
										local_b8 = UVar15.y;
										fStack_b4 = pMVar22[1].Shade;
										fStack_d4 = (float)uVar29;
										fStack_d0 = fVar30;
										fStack_c4 = (float)uVar31;
										fStack_c0 = (float)uVar32;
										if (__this_00 != null) {
											local_148 = local_b8;
											local_158 = local_c8;
											fStack_154 = (float)uVar31;
											fStack_150 = (float)uVar32;
											fStack_14c = fStack_bc;
											local_168 = (float)uVar14;
											fStack_164 = (float)((ulong)uVar14 >> 0x20);
											fStack_140 = (float)triangle.Submesh;
											piVar1 = &__this_00._version;
											*piVar1 = *piVar1 + 1;
											pMVar40 = (MapFracture.Triangle[])__this_00._items;
											local_188._0_8_ = local_f8[0]._0_8_;
											local_188._8_8_ = local_f8._8_8_;
											local_188._16_8_ = local_f8[1]._4_8_;
											fStack_144 = fStack_b4;
											if (pMVar40 != null) {
												uVar44 = __this_00._size;
												if ((uint)pMVar40.Length <= uVar44) {
													item.B.Position.z = fStack_cc;
													item.B.Position.y = fVar30;
													item.B.Normal.y = (float)uVar31;
													item.B.Normal.x = local_c8;
													item.A = pMVar2.fields;
													item.B.Position.x = pMVar2[1].Position.x;
													item.B.Normal.z = (float)uVar32;
													item.B.UV.x = fStack_bc;
													item.B.UV.y = local_b8;
													item.B.Shade = fStack_b4;
													item.Submesh = triangle.Submesh;
													__this_00.AddWithResize(item);
													return;
												}
												__this_00._size = uVar44 + 1;
												lVar42 = (long)(int)uVar44 * 0x4c;
												UVar33.y = (float)triangle.Submesh;
												UVar33.x = fStack_b4;
												pUVar6 = (Vector2)((long)&pMVar40[0].B + lVar42 + 0x18);
												*pUVar6 = UVar15;
												pUVar6[1] = UVar33;
												local_188._8_4_ = local_f8[0].z;
												local_188._12_4_ = local_f8[1].x;
												local_188._24_4_ = UStack_e0.x;
												fStack_16c = UStack_e0.y;
												triangle.B.Normal.y = (float)uVar31;
												triangle.B.Normal.x = local_c8;
												triangle.B.UV.x = fStack_bc;
												triangle.B.Normal.z = (float)uVar32;
												goto label_0598c2ad;
											}
										}
									}
								}
								goto label_0598c723;
							}
						}
					}
				}
			}
		}
	label_0598c71e: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x588D050", Offset = "0x588C050", VA = "0x588D050")]
	private void AddCut(Vertex vertex, ref int count)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$AddCut): 4 lines keep C-only constructs
		MapFracture.Vertex pMVar1;
		uint uVar2;
		MapFracture.Vertex[] pMVar3;
		MapFracture.Vertex pMVar4;
		uint uVar5;

		pMVar3 = this._cut;
		if (pMVar3 == null) {
			throw new NullReferenceException();
		}
		uVar5 = *count;
		uVar2 = (uint)pMVar3.Length;
		if ((int)uVar5 < (int)uVar2) {
			if (uVar2 <= uVar5) {
				throw new IndexOutOfRangeException();
			}
			pMVar3[(int)uVar5].Shade = vertex.Shade;
			pMVar4 = &pMVar3[(int)uVar5];
			(pMVar4.Normal).y = vertex.Normal.y;
			(pMVar4.Normal).z = vertex.Normal.z;
			(pMVar4.UV) = vertex.UV;
			pMVar1 = pMVar3.m_Items + (int)uVar5;
			pMVar1.Position.x = vertex.Position.x;
			pMVar1.Position.y = vertex.Position.y;
			*(ulong)&pMVar1.Position.z = vertex._8_8_;
			uVar5 = *count;
		}
		*count = uVar5 + 1;
		return;
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x5888FC0", Offset = "0x5887FC0", VA = "0x5888FC0")]
	private void CloseOpenings()
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$CloseOpenings): 144 lines keep C-only constructs
		int piVar1;
		MapFracture.Vertex pMVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		List<MapFracture.Triangle> __this_00;
		MapFracture.Vertex[] pMVar9;
		Vector3[] pUVar10;
		byte[] auVar11 = new byte[16];
		byte[] auVar12 = new byte[16];
		MapFracture.Vertex vertex;
		MapFracture.Vertex vertex_00;
		MapFracture.Vertex vertex_01;
		MapFracture.Vertex item;
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		MapFracture.Vertex pMVar15;
		ulong uVar16;
		Dictionary<Vector3Int, int> points;
		List<MapFracture.Vertex> __this_01;
		int b;
		ulong uVar18;
		ulong uVar19;
		uint uVar20;
		bool bVar21;
		int iVar22;
		int b_00;
		int iVar23;
		Dictionary<ValueTuple<int, int>, MapFracture.Opening> __this_02;
		UnityEngine_Vector3_StaticFields pUVar24;
		Dictionary<int, int> pSVar25;
		Dictionary<int, MapFracture.Opening> pSVar26;
		List<MapFracture.Vertex> pSVar27;
		List<Vector3> __this_03;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar28;
		float fVar29;
		float extraout_XMM0_Db;
		float fVar30;
		byte[] __x = new byte[4];
		byte[] auVar31 = new byte[16];
		Vector3 normal;
		MapFracture.Opening MVar32;
		MapFracture.Opening value;
		MapFracture.Opening opening;
		MapFracture.Opening opening_00;
		int local_31c;
		float local_318;
		float fStack_314;
		float fStack_310;
		float fStack_30c;
		byte[] local_308 = new byte[4];
		byte[] auStack_304 = new byte[12];
		Dictionary<ValueTuple<int, int>, MapFracture.Opening> local_2f0;
		byte[] local_2e8 = new byte[16];
		Dictionary<Vector3Int, int> local_2d8;
		List<MapFracture.Vertex> local_2d0;
		byte[] local_2c8 = new byte[8];
		float fStack_2c0;
		float fStack_2bc;
		ulong local_2b8;
		ulong uStack_2b0;
		ulong local_2a8;
		ulong uStack_2a0;
		byte[] local_298 = new byte[8];
		Dictionary<int, int> local_288;
		byte[] local_278 = new byte[16];
		byte[] local_268 = new byte[16];
		ulong local_258;
		Vector2 UStack_250;
		float local_248;
		float fStack_244;
		float fStack_240;
		float fStack_23c;
		ulong local_238;
		ulong uStack_230;
		ulong local_228;
		ulong uStack_220;
		ulong local_218;
		ulong uStack_210;
		ulong local_208;
		ulong uStack_200;
		ulong local_1f8;
		ulong uStack_1f0;
		byte[] local_1e8 = new byte[8];
		byte[] local_1e0 = new byte[16];
		Dictionary<int, int> local_1d0;
		Vector2 UStack_1c8;
		float local_1c0;
		byte[] local_1b8 = new byte[8];
		float local_1a8;
		float fStack_1a4;
		float fStack_1a0;
		float fStack_19c;
		ulong local_198;
		ulong uStack_190;
		byte[] local_188 = new byte[8];
		Dictionary<int, int> local_178;
		Vector2 UStack_170;
		uint local_168;
		uint uStack_164;
		uint uStack_160;
		uint uStack_15c;
		uint local_158;
		float fStack_154;
		ulong local_148;
		ulong uStack_140;
		ulong local_138;
		MethodInfo local_130;
		byte[] local_128 = new byte[8];
		Dictionary<int, int> local_118;
		float fStack_110;
		float fStack_10c;
		float local_108;
		float fStack_104;
		float fStack_100;
		float fStack_fc;
		float fStack_f8;
		float fStack_f4;
		float fStack_f0;
		uint uStack_ec;
		ulong local_e8;
		ulong uStack_e0;
		ulong local_d8;
		ulong uStack_d0;
		uint uStack_c4;
		uint uStack_c0;
		uint uStack_bc;
		uint local_b8;
		uint uStack_b4;
		float fStack_b0;
		uint uStack_ac;
		ulong local_80;
		uint uStack_74;
		uint uStack_70;
		uint uStack_6c;
		uint uStack_68;
		uint uStack_64;
		float fStack_60;
		float[] afStack_4c = new float[3];

		if (Il2CppMethodInitialized_07545a20 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<Vector3Int, int>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_get_Current) ;
			Il2CppMethodInitialized_07545a20 = true;
		}
		local_b8 = 0;
		uStack_b4 = 0;
		fStack_b0 = 0.0;
		uStack_ac = 0;
		uStack_c4 = 0;
		uStack_c0 = 0;
		uStack_bc = 0;
		local_d8 = 0;
		uStack_d0 = 0;
		local_e8 = 0;
		uStack_e0 = 0;
		fStack_f8 = 0.0;
		fStack_f4 = 0.0;
		fStack_f0 = 0.0;
		uStack_ec = 0;
		local_108 = 0.0;
		fStack_104 = 0.0;
		fStack_100 = 0.0;
		fStack_fc = 0.0;
		local_118 = null;
		fStack_110 = 0.0;
		fStack_10c = 0.0;
		local_128 = (byte[])0x0;
		local_148 = 0;
		uStack_140 = 0;
		local_138 = 0;
		local_168 = 0;
		uStack_164 = 0;
		uStack_160 = 0;
		uStack_15c = 0;
		local_158 = 0;
		fStack_154 = 0.0;
		local_198._0_4_ = 0;
		local_198._4_4_ = 0;
		uStack_190._0_4_ = 0.0;
		uStack_190._4_4_ = 0.0;
		local_1a8 = 0.0;
		fStack_1a4 = 0.0;
		fStack_1a0 = 0.0;
		fStack_19c = 0.0;
		local_1b8 = (byte[])0x0;
		local_298 = (byte[])0x0;
		local_288 = null;
		local_31c = 0;
		local_178 = null;
		UStack_170.x = 0.0;
		UStack_170.y = 0.0;
		local_188 = (byte[])0x0;
		local_2d8 = new Dictionary<Vector3Int, int>();
		local_2d0 = new List<MapFracture.Vertex>();
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<ValueTuple<int, int>, MapFracture.Opening>));
		__this_02 = new Dictionary<ValueTuple<int, int>, MapFracture.Opening>();
		__this_00 = this._triangles;
		local_130 = (MethodInfo)this;
		if (__this_00 != null) {
			local_268.GetEnumerator(__this_00);
			local_b8 = (undefined4)local_1f8;
			uStack_b4 = (undefined4)((ulong)local_1f8 >> 0x20);
			fStack_b0 = (float)uStack_1f0;
			uStack_ac = (undefined4)((ulong)uStack_1f0 >> 0x20);
			uStack_c4 = (undefined4)((ulong)local_208 >> 0x20);
			uStack_c0 = (undefined4)uStack_200;
			uStack_bc = (undefined4)((ulong)uStack_200 >> 0x20);
			local_d8 = local_218;
			uStack_d0 = uStack_210;
			local_e8 = local_228;
			uStack_e0 = uStack_220;
			fStack_f8 = (float)local_238;
			fStack_f4 = (float)((ulong)local_238 >> 0x20);
			fStack_f0 = (float)uStack_230;
			uStack_ec = (uint)((ulong)uStack_230 >> 0x20);
			local_108 = local_248;
			fStack_104 = fStack_244;
			fStack_100 = (float)_fStack_240;
			fStack_fc = SUB84(_fStack_240, 4);
			local_118 = local_258;
			fStack_110 = UStack_250.x;
			fStack_10c = UStack_250.y;
			local_128 = (byte[])local_268._0_8_;
			local_268._0_8_ = null;
			local_268._8_8_ = local_128;
			local_2f0 = __this_02;
			while (true) {
				bVar21 = local_128.MoveNext();
				uVar20 = uStack_ac;
				pSVar27 = local_2d0;
				points = local_2d8;
				if (!(bVar21)) break;
				local_318 = fStack_f4;
				fStack_314 = fStack_f0;
				fStack_310 = 0.0;
				fStack_30c = 0.0;
				local_138 = local_d8;
				local_148 = local_e8;
				uStack_140 = uStack_e0;
				local_2c8 = (byte[])uStack_d0;
				local_2e8 = ZEXT416(uStack_ec);
				local_158 = uStack_b4;
				fStack_154 = fStack_b0;
				local_168 = uStack_c4;
				uStack_164 = uStack_c0;
				uStack_160 = uStack_bc;
				uStack_15c = local_b8;
				local_2b8 = local_118;
				uStack_2b0 = 0;
				local_278 = ZEXT416((uint)fStack_110);
				afStack_4c[0] = fStack_10c;
				vertex.Normal.x = fStack_10c;
				vertex.Position.z = fStack_110;
				vertex.Normal.z = fStack_104;
				vertex.Normal.y = local_108;
				vertex.UV.y = fStack_fc;
				vertex.UV.x = fStack_100;
				vertex.Position._0_8_ = local_118;
				vertex.Shade = fStack_f8;
				iVar22 = MapFracture.Weld(local_2d8, local_2d0, vertex);
				local_2a8 = (Dictionary<TKey, TValue>)CONCAT44(local_2a8._4_4_, iVar22);
				local_80 = CONCAT44(fStack_314, local_318);
				uStack_64 = (undefined4)local_138;
				fStack_60 = (float)((ulong)local_138 >> 0x20);
				uStack_74 = (undefined4)local_148;
				uStack_70 = (undefined4)((ulong)local_148 >> 0x20);
				uStack_6c = (undefined4)uStack_140;
				uStack_68 = (undefined4)((ulong)uStack_140 >> 0x20);
				vertex_00.Normal.x = (float)uStack_74;
				vertex_00.Position.z = (float)local_2e8._0_4_;
				vertex_00.Normal.z = (float)uStack_6c;
				vertex_00.Normal.y = (float)uStack_70;
				vertex_00.UV.y = (float)uStack_64;
				vertex_00.UV.x = (float)uStack_68;
				vertex_00.Position.x = local_318;
				vertex_00.Position.y = fStack_314;
				vertex_00.Shade = fStack_60;
				iVar22 = MapFracture.Weld(points, pSVar27, vertex_00);
				vertex_01.Normal.x = (float)local_168;
				vertex_01.Position.z = (float)local_308;
				vertex_01.Normal.z = (float)uStack_160;
				vertex_01.Normal.y = (float)uStack_164;
				vertex_01.UV.y = (float)local_158;
				vertex_01.UV.x = (float)uStack_15c;
				vertex_01.Position.x = (float)local_2c8._0_4_;
				vertex_01.Position.y = (float)local_2c8._4_4_;
				vertex_01.Shade = fStack_154;
				b_00 = MapFracture.Weld(points, pSVar27, vertex_01);
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					local_1e8._0_4_ = 0.0;
					local_1e8._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_059895ed;
	label_05989638: ;
					local_1e8._0_4_ = 0.0;
					local_1e8._4_4_ = 0.0;
					Il2CppMethodInitialized_0753e729 = true;
					uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					local_1e8._0_4_ = 0.0;
					local_1e8._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_05989638;
	label_059895ed: ;
					local_1e8._0_4_ = 0.0;
					local_1e8._4_4_ = 0.0;
					uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar7 == 0) {
				}
				fVar29 = (float)local_2c8._0_4_ - (float)local_2b8;
				fVar30 = local_318 - (float)local_2b8;
				auVar31._0_4_ =((float)local_308 - (float)local_278._0_4_) * (fStack_314 - local_2b8._4_4_) -((float)local_2e8._0_4_ - (float)local_278._0_4_) * ((float)local_2c8._4_4_ - local_2b8._4_4_);
				auVar31._4_4_ =((float)local_2e8._0_4_ - (float)local_278._0_4_) * fVar29 -((float)local_308 - (float)local_278._0_4_) * fVar30;
				auVar31._8_4_ =((float)auStack_304._0_4_ - (float)local_278._0_4_) * (fStack_310 - (float)uStack_2b0) -((float)auStack_304._0_4_ - (float)local_278._0_4_) * (fStack_2c0 - (float)uStack_2b0);
				auVar31._12_4_ =((float)local_2e8._4_4_ - (float)local_278._0_4_) * (fStack_30c - uStack_2b0._4_4_) -((float)local_2e8._4_4_ - (float)local_278._0_4_) * (fStack_2bc - uStack_2b0._4_4_);
				local_318 = fVar30 * ((float)local_2c8._4_4_ - local_2b8._4_4_) - fVar29 * (fStack_314 - local_2b8._4_4_);
				fStack_314 = fVar30 * fVar30 - fVar29 * fVar29;
				fStack_310 = fVar30 * (fStack_2c0 - (float)uStack_2b0) - fVar29 * (fStack_310 - (float)uStack_2b0);
				fStack_30c = fVar30 * (fStack_2bc - uStack_2b0._4_4_) - fVar29 * (fStack_30c - uStack_2b0._4_4_);
				fVar29 = local_318 * local_318 + auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_;
				if (fVar29 < 0.0) {
					local_2e8 = auVar31;
					fVar29 = sqrtf(fVar29);
					fStack_314 = extraout_XMM0_Db;
					auVar31 = local_2e8;
					if (fVar29 <= 1e-05) goto label_05989707;
	label_05989742: ;
					fVar30 = local_318 / fVar29;
					auVar11._4_4_ = fVar29;
					auVar11._0_4_ = fVar29;
					auVar11._8_4_ = fStack_314;
					auVar11._12_4_ = fStack_314;
					auVar31 = divps(auVar31, auVar11);
					local_1e8._0_4_ = auVar31._0_4_;
					local_1e8._4_4_ = auVar31._4_4_;
					pUVar24 = (UnityEngine_Vector3_StaticFields)local_1e8;
				}
				else {
					fVar29 = SQRT(fVar29);
					if (1e-05 < fVar29) goto label_05989742;
	label_05989707: ;
					pUVar24 = typeof(Vector3).static_fields;
					fVar30 = (pUVar24.zeroVector).z;
				}
				__this_02 = local_2f0;
				uVar3 = (pUVar24.zeroVector).x;
				uVar5 = (pUVar24.zeroVector).y;
				MVar32.Normal.y = (float)uVar5;
				MVar32.Normal.x = (float)uVar3;
				opening_00.Submesh = uVar20;
				opening_00.Normal.z = fVar30;
				b = (int32_t)(float)local_2a8;
				fStack_310 = 0.0;
				fStack_30c = 0.0;
				MVar32.Normal.z = fVar30;
				MVar32.Submesh = uVar20;
				local_318 = (float)uVar3;
				fStack_314 = (float)uVar5;
				MapFracture.AddEdge(local_2f0, (int32_t)(float)local_2a8, iVar22, MVar32);
				opening.Normal.y = fStack_314;
				opening.Normal.x = local_318;
				opening.Normal.z = fVar30;
				opening.Submesh = uVar20;
				MapFracture.AddEdge(__this_02, iVar22, b_00, opening);
				opening_00.Normal.y = fStack_314;
				opening_00.Normal.x = local_318;
				MapFracture.AddEdge(__this_02, b_00, b, opening_00);
			}
			local_128.Dispose();
			pSVar25 = il2cpp_codegen_object_new(typeof(Dictionary<int, int>)) ;
			pSVar25 = new Dictionary<int, int>();
			pSVar26 = il2cpp_codegen_object_new(typeof(Dictionary<int, MapFracture.Opening>));
			pSVar26 = new Dictionary<int, MapFracture.Opening>();
			if (__this_02 != null ) {
				local_268.GetEnumerator(__this_02);
				local_198._4_4_ = fStack_244;
				local_198._0_4_ = (int32_t)local_248;
				uStack_190._0_4_ = fStack_240;
				uStack_190._4_4_ = fStack_23c;
				local_1a8 = SUB84(local_258, 0);
				fStack_1a4 = local_258._4_4_;
				fStack_1a0 = UStack_250.x;
				fStack_19c = UStack_250.y;
				local_1b8 = (byte[])local_268._0_8_;
				local_268._0_8_ = null;
				local_268._8_8_ = local_1b8;
				local_278._0_8_ = pSVar26;
				local_2b8 = pSVar25;
				if (pSVar25 == null) {
					bVar21 = local_1b8.MoveNext();
					if (bVar21) {
						throw new NullReferenceException();
					}
				}
				else if (pSVar26 == null) {
					bVar21 = local_1b8.MoveNext();
					if (bVar21) {
						bVar21 = local_2b8.TryAdd((int32_t)fStack_1a4, (int32_t)local_1a8);
						if (bVar21) {
							throw new NullReferenceException();
						}
	label_059899a9: ;
						local_1b8.Dispose();
						return;
					}
				}
				else {
					while (true) {
						bVar21 = local_1b8.MoveNext();
						uVar18 = local_198;
						fVar29 = fStack_1a4;
						if (!(bVar21)) break;
						local_318 = fStack_1a0;
						fStack_314 = fStack_19c;
						fStack_310 = 0.0;
						fStack_30c = 0.0;
						bVar21 = local_2b8.TryAdd((int32_t)fStack_1a4, (int32_t)local_1a8);
						uVar19 = local_198;
						if (!bVar21) goto label_059899a9;
						value.Normal.y = fStack_314;
						value.Normal.x = local_318;
						local_198._0_4_ = (int32_t)uVar18;
						local_198._4_4_ = SUB84(uVar18, 4);
						value.Normal.z = (float)(int32_t)local_198;
						value.Submesh = local_198._4_4_;
						local_198 = uVar19;
						local_278._0_8_.Add((int32_t)fVar29, value);
					}
				}
				local_1b8.Dispose();
				pSVar27 = new List<MapFracture.Vertex>();
				__this_03 = new List<Vector3>();
				pSVar25 = local_2b8;
				if (local_2b8 != null) {
					pSVar26 = (Dictionary<int, MapFracture.Opening>)local_278._0_8_;
					if (pSVar27 == null) {
						iVar22 = local_2b8.Count;
						if (0 < iVar22) {
							pSVar28 = pSVar25.Keys;
							if (pSVar28 != null) {
								local_1e0.GetEnumerator(pSVar28) ;
								local_258 = local_1d0;
								local_268._0_8_ = local_1e0._0_8_;
								local_268._8_8_ = local_1e0._8_8_;
								local_298 = (byte[])local_1e0._0_8_;
								local_288 = local_1d0;
								local_298.MoveNext();
							}
							goto label_0598a28a;
						}
					}
					else {
						iVar23 = local_2b8.Count;
						if (__this_03 == null) {
							if (0 < iVar23) {
								pSVar28 = pSVar25.Keys;
								if (pSVar28 != null) {
									local_1e0.GetEnumerator(pSVar28);
									local_258 = local_1d0;
									local_268._0_8_ = local_1e0._0_8_;
									local_268._8_8_ = local_1e0._8_8_;
									local_298 = (byte[])local_1e0._0_8_;
									local_288 = local_1d0;
									local_298.MoveNext();
									piVar1 = &pSVar27._version;
									*piVar1 = *piVar1 + 1;
									pSVar27._size = 0;
									throw new NullReferenceException();
								}
								goto label_0598a28a;
							}
						}
						else {
							while (0 < iVar23) {
								pSVar28 = pSVar25.Keys;
								if (pSVar28 == null) goto label_0598a28a;
								local_1e0.GetEnumerator(pSVar28) ;
								local_258 = local_1d0;
								local_268._0_8_ = local_1e0._0_8_;
								local_268._8_8_ = local_1e0._8_8_;
								local_298 = (byte[])local_1e0._0_8_;
								local_288 = local_1d0;
								local_298.MoveNext();
								iVar22 = (int32_t)local_288;
								pUVar24 = typeof(Vector3).static_fields;
								uVar4 = (pUVar24.zeroVector).x;
								uVar6 = (pUVar24.zeroVector).y;
								fStack_310 = 0.0;
								fStack_30c = 0.0;
								local_2e8._0_4_ = (pUVar24.zeroVector).z;
								piVar1 = &pSVar27._version;
								*piVar1 = *piVar1 + 1;
								pSVar27._size = 0;
								piVar1 = &__this_03._version;
								*piVar1 = *piVar1 + 1;
								__this_03._size = 0;
								local_2d8 = (Dictionary<Vector3Int, int>)CONCAT44(local_2d8._4_4_, iVar22);
								local_318 = (float)uVar4;
								fStack_314 = (float)uVar6;
								if (local_2d0 == null) {
									bVar21 = pSVar25.TryGetValue(iVar22, ref local_31c);
									if ((bVar21) && (pSVar27._size < 0x800)) goto label_0598a28a;
	label_05989b22: ;
									pSVar25.Remove(iVar22);
								}
								else {
									do {
										bVar21 = pSVar25.TryGetValue(iVar22, ref local_31c);
										if ((!bVar21) || (0x7ff < pSVar27._size)) goto label_05989b22;
										local_1e0.get_Item(local_2d0, iVar22);
										local_248 = local_1c0;
										local_258 = local_1d0;
										UStack_250 = UStack_1c8;
										local_268._0_8_ = local_1e0._0_8_;
										local_268._8_8_ = local_1e0._8_8_;
										piVar1 = &pSVar27._version;
										*piVar1 = *piVar1 + 1;
										pMVar9 = pSVar27._items;
										if (pMVar9 == null) goto label_0598a28a;
										uVar8 = pSVar27._size;
										if (uVar8 < (uint)pMVar9.Length) {
											pSVar27._size = uVar8 + 1;
											pMVar9[(int)uVar8].Shade = local_1c0;
											pMVar15 = &pMVar9[(int)uVar8];
											*(Dictionary<int, int>*)&(pMVar15.Normal).y = local_1d0;
											(pMVar15.UV) = UStack_1c8;
											pMVar2 = pMVar9.m_Items + (int)uVar8;
											pMVar2.Position.x = (float)local_1e0._0_4_;
											pMVar2.Position.y = (float)local_1e0._4_4_;
											*(ulong)&pMVar2.Position.z = local_1e0._8_8_;
										}
										else {
											item.Position.z = (float)local_1e0._8_4_;
											item.Normal.x = (float)local_1e0._12_4_;
											item.Position.x = (float)local_1e0._0_4_;
											item.Position.y = (float)local_1e0._4_4_;
											item.Normal._4_8_ = local_1d0;
											item.UV = UStack_1c8;
											item.Shade = local_1c0;
											pSVar27.AddWithResize(item);
										}
										if (pSVar26 == null) goto label_0598a28a;
										MVar32 = pSVar26.get_Item(iVar22);
										piVar1 = &__this_03._version;
										*piVar1 = *piVar1 + 1;
										pUVar10 = __this_03._items;
										if (pUVar10 == null) goto label_0598a28a;
										uVar8 = __this_03._size;
										if (uVar8 < (uint)pUVar10.Length) {
											__this_03._size = uVar8 + 1;
											pUVar10[(int)uVar8].x = (float)MVar32.Normal.x;
											pUVar10[(int)uVar8].y = (float)MVar32.Normal.y;
											pUVar10[(int)uVar8].z = MVar32.Normal.z;
										}
										else {
											__this_03.AddWithResize(MVar32.Normal);
										}
										__this_01 = local_2d0;
										local_268.get_Item(local_2d0, iVar22);
										local_2c8._4_4_ = local_268._4_4_;
										local_2a8 = (Dictionary<TKey, TValue>)local_268._0_8_;
										uStack_2a0 = 0;
										local_2c8._0_4_ = local_2c8._4_4_;
										fStack_2c0 = (float)local_2c8._4_4_;
										fStack_2bc = (float)local_2c8._4_4_;
										local_268.get_Item(__this_01, local_31c);
										pSVar25 = local_2b8;
										local_318 = local_318 +((float)local_268._8_4_ * local_2a8._4_4_ - local_268._4_4_ * (float)local_308);
										fStack_314 = fStack_314 +((float)local_308 * local_268._0_4_ - (float)local_2a8 * (float)local_268._8_4_ );
										fStack_310 = fStack_310 + ((float)uStack_2a0 * 0.0 - (float)auStack_304._0_4_ * 0.0);
										fStack_30c = fStack_30c + ((float)auStack_304._0_4_ * uStack_2a0._4_4_ - 0.0);
										local_2e8._0_4_ =(float)local_2e8._0_4_ +(local_268._4_4_ * (float)local_2a8 - (float)local_2c8._0_4_ * local_268._0_4_);
										local_2b8.Remove(iVar22);
										iVar23 = (int)local_2d8;
										pSVar26 = (Dictionary<int, MapFracture.Opening>)local_278._0_8_;
										iVar22 = local_31c;
									} while (local_31c != (int)local_2d8);
									if (2 < pSVar27._size) {
										__x = (byte[])((float)local_2e8._0_4_ * (float)local_2e8._0_4_ + fStack_314 * fStack_314 + local_318 * local_318);
										if (0.0001 <= (float)__x) {
											if (Il2CppMethodInitialized_0753e729 == false) {
												local_308 = __x;
												Il2CppMethodInitialized_0753e729 = true;
												__x = local_308;
												if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05989f84;
	label_05989fc8: ;
												local_308 = __x;
												__x = local_308;
												if (0.0 <= (float)local_308) goto label_05989f8d;
	label_05989fe2: ;
												fVar29 = sqrtf((float)__x);
											}
											else {
												if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05989fc8;
	label_05989f84: ;
												if ((float)__x < 0.0) goto label_05989fe2;
	label_05989f8d: ;
												fVar29 = SQRT((float)__x);
											}
											auVar14._12_4_ = 0;
											auVar14._0_12_ = auStack_304;
											_local_308 = auVar14 << 0x20;
											uVar16 = (ulong)local_2a8 >> 0x20;
											local_2a8 = (Dictionary<TKey, TValue>)((ulong)local_2a8 & 0xffffffff00000000);
											if (1e-05 < fVar29) {
												auVar13._4_4_ = fStack_314;
												auVar13._0_4_ = local_318;
												auVar13._8_4_ = fStack_310;
												auVar13._12_4_ = fStack_30c;
												auVar12._4_4_ = fVar29;
												auVar12._0_4_ = fVar29;
												auVar12._8_4_ = fVar29;
												auVar12._12_4_ = fVar29;
												_local_2c8 = divps(auVar13, auVar12);
												local_2a8 = (Dictionary<TKey, TValue>)CONCAT44((int)uVar16, (float)local_2e8._0_4_ / fVar29);
											}
											local_268.GetEnumerator(__this_03);
											local_178 = local_258;
											UStack_170 = UStack_250;
											local_188 = (byte[])local_268._0_8_;
											local_268._0_8_ = null;
											local_268._8_8_ = local_188;
											while (bVar21 = local_188.MoveNext()) {
												local_308 = (byte[])((float)local_308 + ABS(UStack_170.x * (float)local_2a8 +(float)((ulong)local_178 >> 0x20) * (float)local_2c8._4_4_ + SUB84(local_178, 0) * (float)local_2c8._0_4_));
											}
											local_188.Dispose();
											if ((float)local_308 / (float)pSVar27._size <= 0.9) {
												MVar32 = pSVar26.get_Item(iVar23);
												normal.z = (float)local_2a8;
												normal.x = (float)local_2c8._0_4_;
												normal.y = (float)local_2c8._4_4_;
												MapFracture.AddCap(pSVar27, normal, MVar32.Submesh, (List<MapFracture.Triangle>)local_130.invoker_method);
											}
										}
									}
								}
								iVar23 = pSVar25.Count;
							}
						}
					}
					return;
				}
			}
		}
	label_0598a28a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x588D890", Offset = "0x588C890", VA = "0x588D890")]
	private static void AddEdge(Dictionary<(int, int), Opening> edges, int a, int b, Opening opening)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$AddEdge): 9 lines keep C-only constructs
		bool bVar1;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		MapFracture.Opening value;
		System_ValueTuple_int__int__Fields local_40;
		byte[] local_38 = new byte[16];

		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = opening.Normal._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		if (a != b) {
			local_40.Item1 = 0;
			local_40.Item2 = 0;
			local_40 = new ValueTuple<int, int>(b, a);
			if (edges == null) {
				throw new NullReferenceException();
			}
			bVar1 = edges.Remove((System_ValueTuple_int__int__o)local_40);
			if (!bVar1) {
				local_40.Item1 = 0;
				local_40.Item2 = 0;
				local_40 = new ValueTuple<int, int>(a, b);
				value.Normal.z = (float)opening.Normal.z;
				value.Submesh = opening.Submesh;
				value.Normal.x = (float)local_38._0_4_;
				value.Normal.y = (float)local_38._4_4_;
				edges.set_Item((System_ValueTuple_int__int__o)local_40, value);
			}
		}
		return;
	}

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x588C730", Offset = "0x588B730", VA = "0x588C730")]
	private static void AddCaps(List<Segment> segments, Vector3 normal, List<Triangle> target)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$AddCaps): 47 lines keep C-only constructs
		int piVar1;
		int iVar2;
		int iVar3;
		uint uVar4;
		List<int>[] pSVar5;
		Int32[] pSVar6;
		MapFracture.Vertex vertex;
		MapFracture.Vertex vertex_00;
		ulong uVar8;
		ulong uVar9;
		List<T> pSVar10;
		ulong uVar11;
		ulong uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		float fVar17;
		ulong uVar18;
		ulong uVar19;
		bool bVar20;
		int index;
		int item;
		int iVar21;
		Dictionary<Vector3Int, int> __this;
		List<MapFracture.Vertex> __this_00;
		List<int> pSVar22;
		List<List<int>> neighbors;
		List<int> pSVar23;
		Boolean[] visited;
		object pIVar24;
		List<MapFracture.Vertex> pSVar25;
		Boolean[] method_00;
		long lVar26;
		ulong uVar27;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 normal_00;
		System_Collections_Generic_List_Enumerator_T__o local_138;
		ulong uStack_120;
		List<T> local_118;
		ulong uStack_110;
		float local_108;
		uint uStack_104;
		uint uStack_100;
		uint uStack_fc;
		uint local_f8;
		float fStack_f4;
		ulong uStack_f0;
		ulong local_e8;
		ulong uStack_e0;
		ulong local_c8;
		ulong uStack_c0;
		System_Collections_Generic_List_Enumerator_T__o local_a8;
		int iStack_90;
		int iStack_8c;
		uint local_88;
		uint uStack_84;
		int iStack_80;
		int iStack_7c;
		float local_78;
		uint uStack_74;
		uint uStack_70;
		uint uStack_6c;
		uint local_68;
		float fStack_64;
		ulong uStack_60;
		ulong local_58;
		ulong uStack_50;
		byte[] local_48 = new byte[16];

		normal_00.z = normal.z;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = normal._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		if (Il2CppMethodInitialized_07545a22 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<Vector3Int, int>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_List_int_get_Count) ;
			Il2CppMethodInitialized_07545a22 = true;
		}
		local_e8 = 0;
		uStack_e0 = 0;
		local_f8 = 0;
		fStack_f4 = 0.0;
		uStack_f0 = 0;
		local_108 = 0.0;
		uStack_104 = 0;
		uStack_100 = 0;
		uStack_fc = 0;
		local_118 = null;
		uStack_110._0_4_ = 0;
		uStack_110._4_4_ = 0;
		local_138._current = null;
		uStack_120._0_4_ = 0;
		uStack_120._4_4_ = 0;
		local_138._list = null;
		local_138._index = 0;
		local_138._version = 0;
		__this = new Dictionary<Vector3Int, int>();
		__this_00 = new List<MapFracture.Vertex>();
		pSVar22 = new List<int>();
		neighbors = new List<List<int>>();
		if (segments != null) {
			local_a8 = segments.GetEnumerator();
			local_e8 = local_58;
			uStack_e0 = uStack_50;
			local_f8 = local_68;
			fStack_f4 = fStack_64;
			uStack_f0 = uStack_60;
			local_118 = (List<T>)CONCAT44(uStack_84, local_88);
			uStack_110._4_4_ = iStack_7c;
			uStack_110._0_4_ = iStack_80;
			local_108 = local_78;
			uStack_104 = uStack_74;
			uStack_100 = uStack_70;
			uStack_fc = uStack_6c;
			local_138._current = local_a8._current;
			uStack_120._0_4_ = iStack_90;
			uStack_120._4_4_ = iStack_8c;
			local_138._list = local_a8._list;
			local_138._index = local_a8._index;
			local_138._version = local_a8._version;
	label_0598ca10: ;
			bVar20 = local_138.MoveNext();
			uVar19 = local_e8;
			uVar18 = uStack_f0;
			fVar17 = fStack_f4;
			uVar16 = local_f8;
			uVar15 = uStack_fc;
			uVar14 = uStack_100;
			uVar13 = uStack_104;
			uVar11 = uStack_110;
			pSVar10 = local_118;
			uVar8 = uStack_120;
			pIVar24 = local_138._current;
			if (bVar20) {
				iVar21 = (int32_t)uStack_e0;
				vertex.Position.z = (float)(int32_t)uStack_120;
				vertex.Normal.x = (float)uStack_120._4_4_;
				vertex.Position._0_8_ = local_138._current;
				vertex.Normal._4_8_ = local_118;
				vertex.UV.x = (float)(int32_t)uStack_110;
				vertex.UV.y = (float)uStack_110._4_4_;
				vertex.Shade = local_108;
				index = MapFracture.Weld(__this, __this_00, vertex);
				uVar12 = uStack_110;
				uVar9 = uStack_120;
				local_68 = (undefined4)uVar19;
				fStack_64 = (float)((ulong)uVar19 >> 0x20);
				uStack_70 = (undefined4)uVar18;
				uStack_6c = (undefined4)((ulong)uVar18 >> 0x20);
				local_a8._current = (object)pSVar10;
				uStack_110._0_4_ = (int32_t)uVar11;
				uStack_110._4_4_ = SUB84(uVar11, 4);
				iStack_90 = (int32_t)uStack_110;
				iStack_8c = uStack_110._4_4_;
				local_a8._list = (List<T>)pIVar24;
				uStack_120._0_4_ = (int32_t)uVar8;
				uStack_120._4_4_ = SUB84(uVar8, 4);
				local_a8._index = (int32_t)uStack_120;
				local_a8._version = uStack_120._4_4_;
				vertex_00.Position.y = (float)uVar14;
				vertex_00.Position.x = (float)uVar13;
				vertex_00.Normal.x = (float)uVar16;
				vertex_00.Position.z = (float)uVar15;
				local_c8 = CONCAT44(uStack_70, fVar17);
				uStack_c0 = CONCAT44(local_68, uStack_6c);
				vertex_00.Normal.y = fVar17;
				vertex_00.Normal.z = (float)uStack_70;
				vertex_00.UV.x = (float)uStack_6c;
				vertex_00.UV.y = (float)local_68;
				vertex_00.Shade = fStack_64;
				uStack_120 = uVar9;
				uStack_110 = uVar12;
				item = MapFracture.Weld(__this, __this_00, vertex_00);
				if (neighbors == null) {
					throw new NullReferenceException();
				}
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				iVar2 = neighbors._size;
				iVar3 = __this_00._size;
				if (pSVar22 == null) {
					if (iVar2 < iVar3) {
						pSVar22 = new List<int>(2);
						piVar1 = &neighbors._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = neighbors._items;
						if (pSVar5 != null) {
							uVar4 = neighbors._size;
							if (uVar4 < (uint)pSVar5.Length) {
								neighbors._size = uVar4 + 1;
								pSVar5[(int)uVar4] = pSVar22;
							}
							else {
								neighbors.AddWithResize((object)pSVar22);
							}
	label_0598cfc0: ;
							throw new NullReferenceException();
						}
	label_0598cf7a: ;
						throw new NullReferenceException();
					}
				}
				else if (iVar2 < iVar3) {
					do {
						pSVar23 = new List<int>(2);
						piVar1 = &neighbors._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = neighbors._items;
						if (pSVar5 == null) goto label_0598cf7a;
						uVar4 = neighbors._size;
						if (uVar4 < (uint)pSVar5.Length) {
							neighbors._size = uVar4 + 1;
							pSVar5[(int)uVar4] = pSVar23;
						}
						else {
							neighbors.AddWithResize((object)pSVar23);
						}
						piVar1 = &pSVar22._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar22._items;
						if (pSVar6 == null) goto label_0598cfc0;
						uVar4 = pSVar22._size;
						if (uVar4 < (uint)pSVar6.Length) {
							pSVar22._size = uVar4 + 1;
							pSVar6[(int)uVar4] = iVar21;
						}
						else {
							pSVar22.AddWithResize(iVar21);
						}
					} while (neighbors._size < __this_00._size);
				}
				if (index != item) {
					pSVar23 = (List<int>)neighbors.get_Item(index);
					if (pSVar23 == null) {
						throw new NullReferenceException();
					}
					bVar20 = pSVar23.Contains(item);
					if (!bVar20) {
						pSVar23 = (List<int>)neighbors.get_Item(index);
						if (pSVar23 != null) {
							piVar1 = &pSVar23._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = pSVar23._items;
							if (pSVar6 != null) {
								uVar4 = pSVar23._size;
								if (uVar4 < (uint)pSVar6.Length) {
									pSVar23._size = uVar4 + 1;
									pSVar6[(int)uVar4] = item;
								}
								else {
									pSVar23.AddWithResize(item);
								}
								pSVar23 = (List<int>)neighbors.get_Item(item);
								if (pSVar23 != null) {
									piVar1 = &pSVar23._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = pSVar23._items;
									if (pSVar6 != null) {
										uVar4 = pSVar23._size;
										if (uVar4 < (uint)pSVar6.Length) {
											pSVar23._size = uVar4 + 1;
											pSVar6[(int)uVar4] = index;
										}
										else {
											pSVar23.AddWithResize(index);
										}
										goto label_0598ca10;
									}
								}
								throw new NullReferenceException();
							}
						}
						throw new NullReferenceException();
					}
				}
				goto label_0598ca10;
			}
			local_138.Dispose();
			if (__this_00 != null) {
				visited = (Boolean[])new bool[__this_00._size];
				iVar2 = __this_00._size;
				if (0 < iVar2) {
					if (visited == null) goto label_0598cf17;
					if (neighbors == null) {
						lVar26 = 0;
						do {
							if ((int)visited.Length == (int)lVar26) goto label_0598cf26;
							if (visited[lVar26] == false) goto label_0598cf17;
							lVar26 = lVar26 + 1;
						} while ((int)lVar26 < iVar2);
					}
					else if (pSVar22 == null) {
						uVar27 = 0;
						do {
							if ((uint)visited.Length <= uVar27) goto label_0598cf26;
							if (visited[uVar27] == false) {
								pIVar24 = neighbors.get_Item((int32_t)uVar27);
								if ((pIVar24 == null) ||((*(int)&pIVar24[1].monitor == 2 &&(pSVar25 = MapFracture.TraceLoop((int32_t)uVar27, __this_00, neighbors, visited), pSVar25 != null)))) goto label_0598cf17;
							}
							uVar27 = uVar27 + 1;
						} while ((long)uVar27 < (long)__this_00._size);
					}
					else {
						uVar27 = 0;
						do {
							if ((uint)visited.Length <= uVar27) {
	label_0598cf26: ;
								throw new IndexOutOfRangeException();
							}
							if (visited[uVar27] == false) {
								iVar21 = (int32_t)uVar27;
								pIVar24 = neighbors.get_Item(iVar21);
								if (pIVar24 == null) goto label_0598cf17;
								if ((*(int)&pIVar24[1].monitor == 2) &&(method_00 = visited, pSVar25 = MapFracture.TraceLoop(iVar21, __this_00, neighbors, visited), pSVar25 != null)) {
									iVar21 = pSVar22.get_Item(iVar21);
									normal_00.x = (float)local_48._0_4_;
									normal_00.y = (float)local_48._4_4_;
									MapFracture.AddCap(pSVar25, normal_00, iVar21, target);
								}
							}
							uVar27 = uVar27 + 1;
						} while ((long)uVar27 < (long)__this_00._size);
					}
				}
				return;
			}
		}
	label_0598cf17: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x588E670", Offset = "0x588D670", VA = "0x588E670")]
	private static List<Vertex> TraceLoop(int start, List<Vertex> vertices, List<List<int>> neighbors, bool[] visited)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$TraceLoop): 11 lines keep C-only constructs
		int piVar1;
		MapFracture.Vertex pMVar2;
		MapFracture.Vertex[] pMVar3;
		MapFracture.Vertex item;
		MapFracture.Vertex item_00;
		MapFracture.Vertex pMVar4;
		MethodInfo pMVar5;
		uint uVar6;
		List<MapFracture.Vertex> __this;
		List<int> pSVar7;
		object pIVar8;
		List<MapFracture.Vertex> pSVar9;
		uint uVar10;
		uint index;
		MapFracture.Vertex local_58;

		__this = new List<MapFracture.Vertex>();
		if ((vertices != null) &&(local_58 = vertices.get_Item(start) , pMVar5 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add, __this != null)) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pMVar3 = __this._items;
			if (pMVar3 != null) {
				uVar6 = __this._size;
				if (uVar6 < (uint)pMVar3.Length) {
					__this._size = uVar6 + 1;
					pMVar3[(int)uVar6].Shade = local_58.Shade;
					pMVar4 = &pMVar3[(int)uVar6];
					(pMVar4.Normal).y = local_58.Normal.y;
					(pMVar4.Normal).z = local_58.Normal.z;
					(pMVar4.UV) = local_58.UV;
					pMVar2 = pMVar3.m_Items + (int)uVar6;
					pMVar2.Position.x = local_58.Position.x;
					pMVar2.Position.y = local_58.Position.y;
					*(ulong)&pMVar2.Position.z = local_58._8_8_;
				}
				else {
					item.Position.z = local_58.Position.z;
					item.Normal.x = local_58.Normal.x;
					item.Position.x = local_58.Position.x;
					item.Position.y = local_58.Position.y;
					item.Normal.y = local_58.Normal.y;
					item.Normal.z = local_58.Normal.z;
					item.UV = local_58.UV;
					item.Shade = local_58.Shade;
					__this.AddWithResize(item);
				}
				if (visited != null) {
					if ((uint)visited.Length <= (uint)start) {
	label_0598ea46: ;
						throw new IndexOutOfRangeException();
					}
					visited[start] = true;
					if ((neighbors != null) &&(pSVar7 = (List<int>)neighbors.get_Item(start), pSVar7 != null)) {
						uVar6 = pSVar7.get_Item(0);
						if (uVar6 != start) {
							uVar10 = start;
							do {
								index = uVar6;
								if ((uint)visited.Length <= index) goto label_0598ea46;
								if (visited[(int)index] != false) {
									return null;
								}
								pIVar8 = neighbors.get_Item(index);
								if (pIVar8 == null) goto label_0598ea41;
								if (*(int)&pIVar8[1].monitor != 2) {
									return null;
								}
								if (0x7ff < __this._size) {
									return null;
								}
								if ((uint)visited.Length <= index) goto label_0598ea46;
								visited[(int)index] = true;
								local_58 = vertices.get_Item(index);
								pMVar5 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add;
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pMVar3 = __this._items;
								if (pMVar3 == null) goto label_0598ea41;
								uVar6 = __this._size;
								if (uVar6 < (uint)pMVar3.Length) {
									__this._size = uVar6 + 1;
									pMVar3[(int)uVar6].Shade = local_58.Shade;
									pMVar4 = &pMVar3[(int)uVar6];
									(pMVar4.Normal).y = local_58.Normal.y;
									(pMVar4.Normal).z = local_58.Normal.z;
									(pMVar4.UV) = local_58.UV;
									pMVar2 = pMVar3.m_Items + (int)uVar6;
									pMVar2.Position.x = local_58.Position.x;
									pMVar2.Position.y = local_58.Position.y;
									*(ulong)&pMVar2.Position.z = local_58._8_8_;
								}
								else {
									item_00.Position.z = local_58.Position.z;
									item_00.Normal.x = local_58.Normal.x;
									item_00.Position.x = local_58.Position.x;
									item_00.Position.y = local_58.Position.y;
									item_00.Normal.y = local_58.Normal.y;
									item_00.Normal.z = local_58.Normal.z;
									item_00.UV = local_58.UV;
									item_00.Shade = local_58.Shade;
									__this.AddWithResize(item_00);
								}
								pSVar7 = (List<int>)neighbors.get_Item(index);
								if (pSVar7 == null) goto label_0598ea41;
								uVar6 = pSVar7.get_Item(0);
								pSVar7 = (List<int>)neighbors.get_Item(index);
								if (pSVar7 == null) goto label_0598ea41;
								uVar6 = pSVar7.get_Item((uint)(uVar6 == uVar10));
								uVar10 = index;
							} while (uVar6 != start);
						}
						if (2 < __this._size) {
						}
						return pSVar9;
					}
				}
			}
		}
	label_0598ea41: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001960")]
	[Address(RVA = "0x588D980", Offset = "0x588C980", VA = "0x588D980")]
	private static void AddCap(List<Vertex> loop, Vector3 normal, int submesh, List<Triangle> target)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$AddCap): 105 lines keep C-only constructs
		int piVar1;
		ulong puVar2;
		Vector2 pUVar3;
		uint uVar4;
		float fVar5;
		int iVar6;
		Vector2[] pUVar7;
		MapFracture.Triangle[] pMVar8;
		Vector2 UVar9;
		Vector2 item;
		byte[] auVar10 = new byte[16];
		ulong uVar11;
		Vector2 UVar12;
		MapFracture.Triangle item_00;
		Vector3 pUVar13;
		MapFracture.Triangle pMVar14;
		MapFracture.Vertex pMVar15;
		ulong uVar16;
		uint uVar17;
		uint uVar18;
		uint uVar19;
		UnityEngine_Vector3_StaticFields pUVar20;
		List<Vector2> __this;
		object pIVar21;
		List<int> __this_00;
		long lVar22;
		Vector3 pUVar23;
		int iVar24;
		ulong uVar25;
		object pIVar27;
		float fVar28;
		float fVar29;
		float extraout_XMM0_Db;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		float fVar30;
		float in_XMM1_Db;
		float fVar31;
		byte[] auVar32 = new byte[16];
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		float local_298;
		float fStack_294;
		float local_268;
		float fStack_264;
		float local_248;
		float fStack_244;
		byte[] local_228 = new byte[48];
		Vector3[] local_1f8 = new Vector3[2];
		Vector3 UStack_1e0;
		byte[] local_1b8 = new byte[8];
		float fStack_1b0;
		float fStack_1ac;
		Vector2 local_1a8;
		ulong uStack_1a0;
		byte[] local_198 = new byte[8];
		float local_188;
		float fStack_184;
		ulong local_178;
		List<Vector2> local_168;
		List<MapFracture.Triangle> local_160;
		float local_158;
		float local_148;
		ulong local_138;
		ulong local_128;
		ulong uStack_120;
		ulong local_118;
		ulong uStack_110;
		float local_108;
		Il2CppClass local_f8;
		float fStack_f0;
		float fStack_ec;
		float local_e8;
		float fStack_e4;
		Vector2 UStack_e0;
		float local_d8;
		float local_c8;
		float fStack_c4;
		float fStack_b4;
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		float fStack_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float fStack_68;
		Vector3 local_60;
		float fStack_4c;
		float local_40;

		fVar29 = normal.x;
		fVar30 = normal.y;
		local_160 = target;
		local_188 = normal.z;
		fStack_184 = in_XMM1_Db;
		if (0.9 <= ABS(fVar30)) {
			pUVar23 = &Vector3.rightVector;
			pUVar13 = &Vector3.rightVector;
		}
		else {
			pUVar23 = &Vector3.upVector;
			pUVar13 = &Vector3.upVector;
		}
		uVar4 = pUVar23.x;
		fVar5 = pUVar23.y;
		fVar31 = pUVar13.z;
		fVar28 = local_188;
		fVar33 = 0.0;
		fVar34 = local_188;
		fVar35 = fVar31;
		fVar36 = fStack_184;
		fVar37 = 0.0;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_1a8.y = local_188;
			local_1a8.x = fVar31;
			uStack_1a0 = (ulong)(uint)fStack_184 << 0x20;
			local_1b8._4_4_ = fVar31;
			local_1b8._0_4_ = local_188;
			fStack_1b0 = fStack_184;
			fStack_1ac = 0.0;
			Il2CppMethodInitialized_0753e72d = true;
			fVar31 = local_1a8.x;
			fVar28 = local_1a8.y;
			fVar33 = (float)uStack_1a0;
			fStack_184 = uStack_1a0._4_4_;
			fVar34 = (float)local_1b8._0_4_;
			fVar35 = (float)local_1b8._4_4_;
			fVar36 = fStack_1b0;
			fVar37 = fStack_1ac;
		}
		local_228._0_8_ = null;
		auVar32._0_4_ = fVar30 * fVar31 - fVar5 * fVar34;
		auVar32._4_4_ = (float)uVar4 * fVar28 - fVar29 * fVar35;
		auVar32._8_4_ = in_XMM0_Dc * fVar33 - fVar36 * 0.0;
		auVar32._12_4_ = in_XMM0_Dd * fStack_184 - fVar37 * 0.0;
		fVar31 = fVar5 * fVar29 - (float)uVar4 * fVar30;
		fVar28 = fVar31 * fVar31 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
		if (fVar28 < 0.0) {
			fVar28 = sqrtf(fVar28);
			fVar33 = extraout_XMM0_Db;
		}
		else {
			fVar28 = SQRT(fVar28);
			fVar33 = fVar5;
		}
		if (1e-05 < fVar28) {
			fVar31 = fVar31 / fVar28;
			auVar10._4_4_ = fVar28;
			auVar10._0_4_ = fVar28;
			auVar10._8_4_ = fVar33;
			auVar10._12_4_ = fVar33;
			auVar32 = divps(auVar32, auVar10);
			local_228._0_8_ = auVar32._0_8_;
			pUVar20 = (UnityEngine_Vector3_StaticFields)local_228;
		}
		else {
			pUVar20 = typeof(Vector3).static_fields;
			fVar31 = (pUVar20.zeroVector).z;
			fVar5 = 0.0;
		}
		if (loop != null) {
			local_138._0_4_ = (pUVar20.zeroVector).x;
			local_138._4_4_ = (pUVar20.zeroVector).y;
			local_148 = fVar30 * fVar31 - local_138._4_4_ * local_188;
			local_198._0_4_ = (float)local_138 * local_188 - fVar29 * fVar31;
			register0x00001304 = local_138 >> 0x20;
			local_158 = local_138._4_4_ * fVar29 - fVar30 * (float)local_138;
			iVar24 = loop._size;
			__this = new List<Vector2>(iVar24);
			local_168 = __this;
			if (loop._size < 1) {
				fVar29 = 0.0;
			}
			else {
				if (__this == null) {
					local_228.get_Item(loop, 0);
					local_228.get_Item(loop, (int32_t)(1 % (long)loop._size));
					throw new NullReferenceException();
				}
				fStack_b4 = (float)local_198._0_4_;
				fStack_c4 = local_158;
				iVar24 = 0;
				fVar28 = 0.0;
				fVar30 = 0.0;
				local_c8 = fVar31;
				do {
					local_228.get_Item(loop, iVar24);
					uVar11 = local_228._0_8_;
					uVar17 = local_228._8_4_;
					local_1a8.x = (float)local_228._24_4_;
					local_1a8.y = (float)local_228._28_4_;
					uStack_1a0 = 0;
					iVar24 = iVar24 + 1;
					local_228.get_Item(loop, iVar24 % loop._size);
					local_178 = (Il2CppClass)local_228._0_8_;
					uVar18 = local_228._8_4_;
					local_1b8 = (byte[])local_228._24_8_;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pUVar7 = __this._items;
					if (pUVar7 == null) goto label_0598e5d2;
					local_268 = (float)uVar11;
					fStack_264 = SUB84(uVar11, 4);
					fVar29 = (float)uVar17 * local_c8 + fStack_264 * local_138._4_4_ + local_268 * (float)local_138;
					fVar5 = (float)uVar17 * fStack_c4 + fStack_b4 * fStack_264 + local_148 * local_268;
					uVar19 = __this._size;
					if (uVar19 < (uint)pUVar7.Length) {
						__this._size = uVar19 + 1;
						UVar9.y = fVar5;
						UVar9.x = fVar29;
						pUVar7[(int)uVar19] = UVar9;
					}
					else {
						item.y = fVar5;
						item.x = fVar29;
						__this.AddWithResize(item);
					}
					fVar29 = ((float)uVar17 - (float)uVar18) * ((float)uVar17 - (float)uVar18) +(fStack_264 - local_178._4_4_) * (fStack_264 - local_178._4_4_) +(local_268 - (float)local_178) * (local_268 - (float)local_178);
					if (fVar29 < 0.0) {
						fVar29 = sqrtf(fVar29);
					}
					else {
						fVar29 = SQRT(fVar29);
					}
					fVar5 = (local_1a8.y - (float)local_1b8._4_4_) * (local_1a8.y - (float)local_1b8._4_4_) +(local_1a8.x - (float)local_1b8._0_4_) * (local_1a8.x - (float)local_1b8._0_4_);
					if (fVar5 < 0.0) {
						fVar5 = sqrtf(fVar5);
					}
					else {
						fVar5 = SQRT(fVar5);
					}
					fVar30 = fVar30 + fVar5;
					fVar28 = fVar28 + fVar29;
				} while (iVar24 < loop._size);
				fVar29 = 0.0;
				if (0.0001 < fVar28) {
					fVar29 = (fVar30 / fVar28) * 0.15;
				}
			}
			local_228.get_Item(loop, 0);
			uVar11 = local_228._0_8_;
			local_1a8.x = (float)local_228._8_4_;
			local_1b8 = (byte[])local_228._24_8_;
			uVar19 = loop._size;
			pIVar21 = new MapFracture.Vertex[uVar19];
			fVar30 = local_158;
			if (0 < loop._size) {
				if (pIVar21 == null) {
					local_228.get_Item(loop, 0);
					local_228.get_Item(loop, 0);
					throw new NullReferenceException();
				}
				local_178 = (Il2CppClass)CONCAT44(local_138._4_4_, local_148);
				local_198._4_4_ = local_198._0_4_;
				local_198._0_4_ = (float)local_138;
				pIVar27 = pIVar21 + 4;
				uVar25 = 0;
				do {
					local_228.get_Item(loop, (int32_t)uVar25);
					uVar16 = local_228._0_8_;
					uVar17 = local_228._8_4_;
					local_228.get_Item(loop, (int32_t)uVar25);
					if (*(uint)&pIVar21[1].monitor <= uVar25) goto label_0598e5cd;
					local_298 = (float)uVar16;
					fStack_294 = SUB84(uVar16, 4);
					local_248 = (float)uVar11;
					fStack_244 = SUB84(uVar11, 4);
					pIVar27[-2].klass = (Il2CppClass)local_228._0_8_;
					*(uint)&pIVar27[-2].monitor = local_228._8_4_;
					*(long)((long)&pIVar27[-2].monitor + 4) = normal._0_8_;
					*(float)((long)&pIVar27[-1].klass + 4) = local_188;
					pIVar27[-1].monitor =(IntPtr)CONCAT44(((fStack_294 - fStack_244) * (float)local_198._4_4_ +(float)local_178 * (local_298 - local_248) +((float)uVar17 - local_1a8.x) * fVar30) * fVar29 + (float)local_1b8._4_4_, ((local_298 - local_248) * (float)local_198._0_4_ + local_178._4_4_ * (fStack_294 - fStack_244) +((float)uVar17 - local_1a8.x) * fVar31) * fVar29 + (float)local_1b8._0_4_);
					*(uint)&pIVar27.klass = 0x3f400000;
					uVar25 = uVar25 + 1;
					pIVar27 = (object)((long)&pIVar27[2].klass + 4);
				} while ((long)uVar25 < (long)loop._size);
			}
			__this_00 = MapFracture.EarClip(local_168);
			if (__this_00 != null) {
				iVar6 = __this_00._size;
				if (pIVar21 == null) {
					if (0 < iVar6) {
						__this_00.get_Item(0);
						throw new NullReferenceException();
					}
				}
				else if (0 < iVar6) {
					iVar24 = 0;
					while (true) {
						uVar19 = __this_00.get_Item(iVar24);
						if (!(uVar19 < *(uint)&pIVar21[1].monitor)) break;
						lVar22 = (long)(int)uVar19;
						local_d8 = *(float)((long)pIVar21 + lVar22 * 0x24 + 0x40);
						puVar2 = (ulong)((long)pIVar21 + lVar22 * 0x24 + 0x20);
						local_f8 = (Il2CppClass)*puVar2;
						_fStack_f0 = puVar2[1];
						puVar2 = (ulong)((long)pIVar21 + lVar22 * 0x24 + 0x30);
						_local_e8 = *puVar2;
						UStack_e0 = *(Vector2)(puVar2 + 1);
						uVar19 = __this_00.get_Item(iVar24 + 1);
						if (*(uint)&pIVar21[1].monitor <= uVar19) break;
						lVar22 = (long)(int)uVar19;
						local_108 = *(float)((long)pIVar21 + lVar22 * 0x24 + 0x40);
						puVar2 = (ulong)((long)pIVar21 + lVar22 * 0x24 + 0x20);
						local_128 = *puVar2;
						uStack_120 = puVar2[1];
						puVar2 = (ulong)((long)pIVar21 + lVar22 * 0x24 + 0x30);
						local_118 = *puVar2;
						uStack_110 = puVar2[1];
						uVar19 = __this_00.get_Item(iVar24 + 2);
						if (*(uint)&pIVar21[1].monitor <= uVar19) break;
						lVar22 = (long)(int)uVar19;
						local_40 = *(float)((long)pIVar21 + lVar22 * 0x24 + 0x40);
						puVar2 = (ulong)((long)pIVar21 + lVar22 * 0x24 + 0x20);
						local_60._0_8_ = *puVar2;
						unique0x10001d0b = puVar2[1];
						puVar2 = (ulong)((long)pIVar21 + lVar22 * 0x24 + 0x30);
						uVar11 = *puVar2;
						UVar12 = *(Vector2)(puVar2 + 1);
						fStack_4c = (float)((ulong)uVar11 >> 0x20);
						fStack_74 = (float)local_118;
						fStack_70 = (float)((ulong)local_118 >> 0x20);
						fStack_6c = (float)uStack_110;
						fStack_68 = (float)((ulong)uStack_110 >> 0x20);
						fStack_84 = (float)local_128;
						fStack_80 = (float)((ulong)local_128 >> 0x20);
						fStack_7c = (float)uStack_120;
						fStack_78 = (float)((ulong)uStack_120 >> 0x20);
						if (local_160 == null) goto label_0598e5d2;
						local_1f8[1].z = local_108;
						local_1f8[1].y = fStack_68;
						local_228._36_4_ = fStack_84;
						local_228._32_4_ = local_d8;
						local_228._44_4_ = fStack_7c;
						local_228._40_4_ = fStack_80;
						local_1f8[0].y = fStack_74;
						local_1f8[0].x = fStack_78;
						local_1f8[1].x = fStack_6c;
						local_1f8[0].z = fStack_70;
						local_228._16_4_ = local_e8;
						local_228._20_4_ = fStack_e4;
						local_228._24_4_ = UStack_e0.x;
						local_228._28_4_ = UStack_e0.y;
						local_228._0_8_ = local_f8;
						local_228._8_4_ = fStack_f0;
						local_228._12_4_ = fStack_ec;
						piVar1 = &local_160._version;
						*piVar1 = *piVar1 + 1;
						pMVar8 = local_160._items;
						UStack_1e0._0_8_ = local_60._0_8_;
						if (pMVar8 == null) goto label_0598e5d2;
						uVar19 = local_160._size;
						if (uVar19 < (uint)pMVar8.Length) {
							local_160._size = uVar19 + 1;
							pUVar3 = &pMVar8[(int)uVar19].C.UV;
							pUVar3.fields = UVar12;
							pUVar3[1] = (Vector2)CONCAT44(submesh, local_40);
							pMVar14 = &pMVar8[(int)uVar19];
							*(ulong)((long)&(pMVar14.C).Position + 8) = unique0x10001d0b;
							*(ulong)((long)&(pMVar14.C).Normal + 4) = uVar11;
							pMVar14 = &pMVar8[(int)uVar19];
							*(ulong)((long)&(pMVar14.B).UV + 4) = local_1f8[1]._4_8_;
							*(ulong)&(pMVar14.C).Position = local_60._0_8_;
							pMVar14 = &pMVar8[(int)uVar19];
							pMVar15 = &pMVar14.B;
							pMVar15.Normal.x = fStack_78;
							pMVar15.Normal.y = fStack_74;
							*(ulong)((long)&(pMVar14.B).Normal + 8) = local_1f8._8_8_;
							pMVar14 = &pMVar8[(int)uVar19];
							*(ulong)&(pMVar14.A).Shade = local_228._32_8_;
							*(ulong)((long)&(pMVar14.B).Position + 4) = local_228._40_8_;
							pMVar14 = &pMVar8[(int)uVar19];
							*(ulong)((long)&(pMVar14.A).Normal + 4) = _local_e8;
							(pMVar14.A).UV = UStack_e0;
							*(Il2CppClass*)&pMVar8[(int)uVar19].A.Position = local_f8;
							*(ulong)((long)&pMVar8[(int)uVar19].A.Position + 8) = _fStack_f0;
							iVar24 = iVar24 + 3;
							if (__this_00._size <= iVar24) {
								return;
							}
						}
						else {
							item_00.Submesh = submesh;
							item_00.C.Shade = local_40;
							item_00.A.Position.z = fStack_f0;
							item_00.A.Normal.x = fStack_ec;
							item_00.A.Position._0_8_ = local_f8;
							item_00.A.Normal.y = local_e8;
							item_00.A.Normal.z = fStack_e4;
							item_00.A.UV = UStack_e0;
							item_00.A.Shade = local_d8;
							item_00.B.Position.x = fStack_84;
							item_00.B.Position.y = fStack_80;
							item_00.B.Position.z = fStack_7c;
							item_00.B.Normal.x = fStack_78;
							item_00.B.Normal.y = fStack_74;
							item_00.B.Normal.z = fStack_70;
							item_00.B.UV.x = fStack_6c;
							item_00.B.UV.y = fStack_68;
							item_00.B.Shade = local_108;
							item_00.C.Position.x = local_60.x;
							item_00.C.Position.y = local_60.y;
							item_00.C.Position.z = (float)unique0x10001d0b;
							item_00.C.Normal.x = SUB84(unique0x10001d0b, 4);
							item_00.C.Normal.y = (float)(int)uVar11;
							item_00.C.Normal.z = (float)(int)((ulong)uVar11 >> 0x20);
							item_00.C.UV = UVar12;
							local_160.AddWithResize(item_00);
							iVar24 = iVar24 + 3;
							if (__this_00._size <= iVar24) {
								return;
							}
						}
					}
	label_0598e5cd: ;
					throw new IndexOutOfRangeException();
				}
				return;
			}
		}
	label_0598e5d2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x588EA50", Offset = "0x588DA50", VA = "0x588EA50")]
	private static List<int> EarClip(List<Vector2> flat)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$EarClip): 18 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Vector2 UVar3;
		Vector2 UVar4;
		bool bVar5;
		int iVar6;
		int iVar7;
		List<int> __this;
		List<int> __this_00;
		Int32[] pSVar9;
		int iVar10;
		int iVar11;
		int iVar12;
		int iVar13;
		float fVar14;
		float local_48;
		float fStack_44;

		if (_flat != null) {
			iVar13 = _flat._size;
			__this = new List<int>(iVar13 * 3 + -6);
			iVar13 = _flat._size;
			if (iVar13 < 1) {
				fVar14 = 0.0;
			}
			else {
				iVar10 = 0;
				fVar14 = 0.0;
				do {
					UVar3 = _flat.get_Item(iVar10);
					iVar10 = iVar10 + 1;
					UVar4 = _flat.get_Item(iVar10 % _flat._size);
					local_48 = UVar3.x;
					fStack_44 = UVar3.y;
					fVar14 = fVar14 + (UVar4.y * local_48 - UVar4.x * fStack_44);
					iVar13 = _flat._size;
				} while (iVar10 < iVar13);
			}
			if (ABS(fVar14) < 0.0001) {
				return __this;
			}
			__this_00 = new List<int>(iVar13);
			iVar13 = _flat._size;
			if (iVar13 < 1) {
				if (__this_00 == null) goto label_0598ef0d;
			}
			else {
				if (__this_00 == null) goto label_0598ef0d;
				iVar12 = 0;
				iVar11 = -1;
				do {
					iVar13 = iVar13 + iVar11;
					if (0.0 < fVar14) {
						iVar13 = iVar12;
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = __this_00._items;
					if (pSVar9 == null) goto label_0598ef0d;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar9.Length) {
						__this_00._size = uVar2 + 1;
						pSVar9[(int)uVar2] = iVar13;
					}
					else {
						__this_00.AddWithResize(iVar13);
					}
					iVar12 = iVar12 + 1;
					iVar13 = _flat._size;
					iVar11 = iVar11 + -1;
				} while (iVar12 < iVar13);
			}
			iVar13 = __this_00._size;
			if (__this == null) {
				if (iVar13 < 4) {
					__this_00.get_Item(0);
					throw new NullReferenceException();
				}
				iVar13 = 1;
				do {
					iVar11 = __this_00._size;
					if (iVar11 <= iVar13 + -1) {
						return null;
					}
					iVar10 = __this_00.get_Item((iVar11 + iVar13 + -2) % iVar11);
					iVar6 = __this_00.get_Item(iVar13 + -1);
					iVar7 = __this_00.get_Item(iVar13 % __this_00._size);
					bVar5 = MapFracture.IsEar(_flat, __this_00, iVar10, iVar6, iVar7);
					iVar13 = iVar13 + 1;
				} while (!bVar5);
			}
			else {
				if (3 < iVar13) {
					iVar13 = 0;
					do {
						do {
							iVar11 = iVar13;
							iVar13 = __this_00._size;
							if (iVar13 <= iVar11) {
								return __this;
							}
							iVar10 = __this_00.get_Item((iVar13 + iVar11 + -1) % iVar13) ;
							iVar6 = __this_00.get_Item(iVar11);
							iVar7 = __this_00.get_Item((iVar11 + 1) % __this_00._size);
							bVar5 = MapFracture.IsEar(_flat, __this_00, iVar10, iVar6, iVar7);
							iVar13 = iVar11 + 1;
						} while (!bVar5);
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar9 = __this._items;
						if (pSVar9 == null) goto label_0598ef0d;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar9.Length) {
							__this._size = uVar2 + 1;
							pSVar9[(int)uVar2] = iVar10;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
						}
						else {
							__this.AddWithResize(iVar10);
							pSVar9 = __this._items;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							if (pSVar9 == null) goto label_0598ef0d;
						}
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar9.Length) {
							__this._size = uVar2 + 1;
							pSVar9[(int)uVar2] = iVar6;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
						}
						else {
							__this.AddWithResize(iVar6);
							pSVar9 = __this._items;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							if (pSVar9 == null) goto label_0598ef0d;
						}
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar9.Length) {
							__this._size = uVar2 + 1;
							pSVar9[(int)uVar2] = iVar7;
						}
						else {
							__this.AddWithResize(iVar7);
						}
						__this_00.RemoveAt(iVar11);
						iVar13 = 0;
					} while (3 < __this_00._size);
				}
				iVar10 = __this_00.get_Item(0);
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar9 = __this._items;
				if (pSVar9 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar9.Length) {
						__this._size = uVar2 + 1;
						pSVar9[(int)uVar2] = iVar10;
					}
					else {
						__this.AddWithResize(iVar10);
					}
					iVar10 = __this_00.get_Item(1);
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = __this._items;
					if (pSVar9 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar9.Length) {
							__this._size = uVar2 + 1;
							pSVar9[(int)uVar2] = iVar10;
						}
						else {
							__this.AddWithResize(iVar10);
						}
						iVar10 = __this_00.get_Item(2);
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar9 = __this._items;
						if (pSVar9 != null) {
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar9.Length) {
								__this._size = uVar2 + 1;
								pSVar9[(int)uVar2] = iVar10;
								return __this;
							}
							__this.AddWithResize(iVar10);
							return __this;
						}
					}
				}
			}
		}
	label_0598ef0d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x588F020", Offset = "0x588E020", VA = "0x588F020")]
	private static bool IsEar(List<Vector2> flat, List<int> remaining, int a, int b, int c)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$IsEar): 3 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		Vector2 UVar4;
		bool bVar5;
		int iVar6;
		float fVar7;
		float fVar8;
		float local_88;
		float fStack_84;
		float local_78;
		float fStack_74;
		float local_68;
		float fStack_64;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (_flat == null) {
	label_0598f294: ;
			throw new NullReferenceException();
		}
		UVar1 = _flat.get_Item(b);
		UVar2 = _flat.get_Item(a);
		UVar3 = _flat.get_Item(c);
		UVar4 = _flat.get_Item(b);
		local_68 = UVar1.x;
		fStack_64 = UVar1.y;
		local_78 = UVar2.x;
		fStack_74 = UVar2.y;
		local_88 = UVar3.x;
		fStack_84 = UVar3.y;
		if ((fStack_84 - UVar4.y) * (local_68 - local_78) -(local_88 - UVar4.x) * (fStack_64 - fStack_74) <= 9.999999e-09) {
			bVar5 = false;
		}
		else {
			if (remaining == null) goto label_0598f294;
			local_58 = remaining.GetEnumerator();
			local_38 = &local_58;
			do {
				do {
					bVar5 = local_58.MoveNext();
					if (!bVar5) {
						iVar6 = 6;
						goto label_0598f26b;
					}
				} while ((((int)local_58._current == c) || ((int)local_58._current == a)) ||((int)local_58._current == b));
				UVar1 = _flat.get_Item((int)local_58._current);
				UVar2 = _flat.get_Item(a);
				UVar3 = _flat.get_Item(b);
				UVar4 = _flat.get_Item(c);
				fVar7 = UVar4.x;
				fVar8 = UVar4.y;
				local_88 = UVar3.x;
				fStack_84 = UVar3.y;
				local_78 = UVar2.x;
				fStack_74 = UVar2.y;
				local_68 = UVar1.x;
				fStack_64 = UVar1.y;
			} while ((((fStack_64 - fStack_74) * (local_88 - local_78) -(local_68 - local_78) * (fStack_84 - fStack_74) < 0.0) ||((fStack_64 - fStack_84) * (fVar7 - local_88) - (local_68 - local_88) * (fVar8 - fStack_84) < 0.0 )) || ((fStack_64 - fVar8) * (local_78 - fVar7) - (local_68 - fVar7) * (fStack_74 - fVar8) < 0.0) );
			iVar6 = 5;
	label_0598f26b: ;
			local_58.Dispose();
			bVar5 = iVar6 != 5;
		}
		return bVar5;
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x588F300", Offset = "0x588E300", VA = "0x588F300")]
	private static bool InTriangle(Vector2 point, Vector2 a, Vector2 b, Vector2 c)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$InTriangle): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;

		fVar7 = c.x;
		fVar8 = c.y;
		fVar5 = b.x;
		fVar6 = b.y;
		fVar3 = a.x;
		fVar4 = a.y;
		fVar1 = point.x;
		fVar2 = point.y;
		if ((fVar2 - fVar4) * (fVar5 - fVar3) - (fVar1 - fVar3) * (fVar6 - fVar4) < 0.0) {
			return false;
		}
		if ((fVar2 - fVar6) * (fVar7 - fVar5) - (fVar1 - fVar5) * (fVar8 - fVar6) < 0.0) {
			return false;
		}
		return 0.0 <= (fVar2 - fVar8) * (fVar3 - fVar7) - (fVar1 - fVar7) * (fVar4 - fVar8);
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x588F000", Offset = "0x588E000", VA = "0x588F000")]
	private static float Cross(Vector2 a, Vector2 b)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Cross): clean
		return a.x * b.y - a.y * b.x;
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x588D380", Offset = "0x588C380", VA = "0x588D380")]
	private static int Weld(Dictionary<Vector3Int, int> points, List<Vertex> vertices, Vertex vertex)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Weld): 18 lines keep C-only constructs
		int piVar1;
		MapFracture.Vertex pMVar2;
		uint uVar3;
		MapFracture.Vertex[] pMVar4;
		double dVar5;
		double dVar6;
		double dVar7;
		double dVar8;
		MapFracture.Vertex pMVar9;
		bool bVar10;
		MethodInfo pMVar11;
		MethodInfo pMVar12;
		uint uVar13;
		uint uVar14;
		Vector3Int key;
		Vector3Int key_00;
		Il2CppMethodPointer local_38;
		int local_2c;

		pMVar11 = (MethodInfo)vertices;
		local_2c = 0;
		dVar5 = (double)(vertex.Position.x / 0.01);
		pMVar12 = (MethodInfo)&local_38;
		dVar6 = modf(dVar5, (double)pMVar12, pMVar11);
		uVar13 = SUB84(local_38, 0);
		uVar14 = (undefined4)((ulong)local_38 >> 0x20);
		if (0.0 <= vertex.Position.x / 0.01) {
			if ((dVar6 != 0.5) || (NAN(dVar6))) {
				dVar5 = floor(dVar5 + 0.5, pMVar12);
			}
			else {
				if (((long)(double)local_38 & 1U) == 0) goto label_0598d50e;
				dVar5 = (double)local_38 + 1.0;
			}
		}
		else {
			if ((dVar6 != -0.5) || (NAN(dVar6))) {
				dVar5 = ceil(dVar5 + -0.5, pMVar12);
				uVar13 = SUB84(dVar5, 0);
				uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
			}
			else if (((long)(double)local_38 & 1U) != 0) {
				dVar5 = (double)local_38 + -1.0;
				goto joined_r0x0598d4f7;
			}
	label_0598d50e: ;
			dVar5 = (double)CONCAT44(uVar14, uVar13);
		}
	joined_r0x0598d4f7: ;
		dVar6 = (double)(vertex.Position.y / 0.01);
		pMVar12 = (MethodInfo)&local_38;
		dVar7 = modf(dVar6, (double)pMVar12, pMVar11);
		uVar13 = SUB84(local_38, 0);
		uVar14 = (undefined4)((ulong)local_38 >> 0x20);
		if (0.0 <= vertex.Position.y / 0.01) {
			if ((dVar7 != 0.5) || (NAN(dVar7))) {
				dVar6 = floor(dVar6 + 0.5, pMVar12);
				goto joined_r0x0598d73f;
			}
			if (((long)(double)local_38 & 1U) != 0) {
				dVar6 = (double)local_38 + 1.0;
				goto joined_r0x0598d73f;
			}
		}
		else if ((dVar7 != -0.5) || (NAN(dVar7))) {
			dVar6 = ceil(dVar6 + -0.5, pMVar12);
			uVar13 = SUB84(dVar6, 0);
			uVar14 = (undefined4)((ulong)dVar6 >> 0x20);
		}
		else if (((long)(double)local_38 & 1U) != 0) {
			dVar6 = (double)local_38 + -1.0;
			goto joined_r0x0598d73f;
		}
		dVar6 = (double)CONCAT44(uVar14, uVar13);
	joined_r0x0598d73f: ;
		dVar7 = (double)(vertex.Position.z / 0.01);
		pMVar12 = (MethodInfo)&local_38;
		dVar8 = modf(dVar7, (double)pMVar12, pMVar11);
		if (0.0 <= vertex.Position.z / 0.01) {
			if ((dVar8 != 0.5) || (NAN(dVar8))) {
				local_38 = (Il2CppMethodPointer)floor(dVar7 + 0.5, pMVar12);
			}
			else if (((long)(double)local_38 & 1U) != 0) {
				local_38 = (Il2CppMethodPointer)((double)local_38 + 1.0);
			}
		}
		else if ((dVar8 != -0.5) || (NAN(dVar8))) {
			local_38 = (Il2CppMethodPointer)ceil(dVar7 + -0.5, pMVar12);
		}
		else if (((long)(double)local_38 & 1U) != 0) {
			local_38 = (Il2CppMethodPointer)((double)local_38 + -1.0);
		}
		if (points != null) {
			key_00.m_Y = (int)dVar6;
			key_00.m_X = (int)dVar5;
			key.m_Z = (int)(double)local_38;
			key.m_X = (int)dVar5;
			key.m_Y = (int)dVar6;
			bVar10 = points.TryGetValue(key, ref local_2c);
			if (bVar10) {
				return local_2c;
			}
			if (vertices != null) {
				local_2c = vertices._size;
				key_00.m_Z = (int)(double)local_38;
				points.Add(key_00, local_2c);
				pMVar11 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add;
				piVar1 = &vertices._version;
				*piVar1 = *piVar1 + 1;
				pMVar4 = vertices._items;
				if (pMVar4 != null) {
					uVar3 = vertices._size;
					if (uVar3 < (uint)pMVar4.Length) {
						vertices._size = uVar3 + 1;
						pMVar4[(int)uVar3].Shade = vertex.Shade;
						pMVar9 = &pMVar4[(int)uVar3];
						(pMVar9.Normal).y = vertex.Normal.y;
						(pMVar9.Normal).z = vertex.Normal.z;
						(pMVar9.UV) = vertex.UV;
						pMVar2 = pMVar4.m_Items + (int)uVar3;
						pMVar2.Position.x = (float)vertex.Position.x;
						pMVar2.Position.y = (float)vertex.Position.y;
						*(long)&pMVar2.Position.z = vertex._8_8_;
						return local_2c;
					}
					vertices.AddWithResize(vertex);
					return local_2c;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x588A640", Offset = "0x5889640", VA = "0x588A640")]
	private static Bounds GetBounds(List<Triangle> triangles)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$GetBounds): 57 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte[] auVar4 = new byte[16];
		byte[] auVar5 = new byte[16];
		ulong uVar6;
		bool bVar7;
		float fVar8;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		uint uVar12;
		float fVar13;
		uint uVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		float fVar20;
		float fVar21;
		byte[] auVar22 = new byte[16];
		float fVar23;
		float fVar24;
		float local_130;
		float local_12c;
		Vector3 local_128;
		float local_118;
		float fStack_114;
		System_Collections_Generic_List_Enumerator_T__o local_108;
		ulong uStack_f0;
		uint uStack_d4;
		uint uStack_d0;
		float fStack_cc;
		ulong uStack_b0;
		ulong local_a8;
		byte[] local_88 = new byte[112];

		local_a8 = 0;
		uStack_b0 = 0;
		uStack_d4 = 0;
		uStack_d0 = 0;
		fStack_cc = 0.0;
		local_108._current = null;
		uStack_f0 = 0;
		local_108._list = null;
		local_108._index = 0;
		local_108._version = 0;
		if (triangles == null) {
			throw new NullReferenceException();
		}
		local_88.get_Item(triangles, 0);
		local_128.x = (float)local_88._0_4_;
		local_128.y = (float)local_88._4_4_;
		local_12c = (float)local_88._8_4_;
		uVar1 = (Vector3.zeroVector).x;
		uVar2 = (Vector3.zeroVector).y;
		local_118 = (float)uVar1 * 0.5;
		fStack_114 = (float)uVar2 * 0.5;
		local_130 = (Vector3.zeroVector).z * 0.5;
		local_108 = triangles.GetEnumerator();
		local_88._0_4_ = 0.0;
		local_88._4_4_ = 0.0;
		local_88._8_8_ = &local_108;
		while(true) {
			bVar7 = local_108.MoveNext();
			if (!bVar7) break;
			fVar13 = SUB84(local_108._current, 0);
			fVar17 = (float)((ulong)local_108._current >> 0x20);
			fVar24 = fStack_114 + local_128.y;
			if (fStack_114 + local_128.y <= fVar17) {
				fVar24 = fVar17;
			}
			fVar21 = local_12c - local_130;
			if ((float)uStack_f0 <= local_12c - local_130) {
				fVar21 = (float)uStack_f0;
			}
			fVar23 = local_130 + local_12c;
			if (local_130 + local_12c <= (float)uStack_f0) {
				fVar23 = (float)uStack_f0;
			}
			fVar23 = (fVar23 - fVar21) * 0.5;
			fVar8 = (fVar21 + fVar23) - fVar23;
			fVar23 = fVar21 + fVar23 + fVar23;
			if (fStack_cc <= fVar8) {
				fVar8 = fStack_cc;
			}
			if (fVar23 <= fStack_cc) {
				fVar23 = fStack_cc;
			}
			fVar21 = (fVar23 - fVar8) * 0.5;
			local_12c = (fVar8 + fVar21) - fVar21;
			fVar21 = fVar8 + fVar21 + fVar21;
			if ((float)local_a8 <= local_12c) {
				local_12c = (float)local_a8;
			}
			if (fVar21 <= (float)local_a8) {
				fVar21 = (float)local_a8;
			}
			fVar23 = local_118 + local_128.x;
			if (local_118 + local_128.x <= fVar13) {
				fVar23 = fVar13;
			}
			uVar12 = (int)((uint)(local_128.x - local_118 < fVar13) << 0x1f) >> 0x1f;
			uVar16 = (int)((uint)(local_128.y - fStack_114 < fVar17) << 0x1f) >> 0x1f;
			uVar6 = CONCAT44(~uVar16 & (uint)fVar17, ~uVar12 & (uint)fVar13) | CONCAT44((uint)(local_128.y - fStack_114) & uVar16, (uint)(local_128.x - local_118) & uVar12);
			fVar13 = (float)uVar6;
			fVar17 = (float)(uVar6 >> 0x20);
			fVar23 = (fVar23 - fVar13) * 0.5;
			fVar24 = (fVar24 - fVar17) * 0.5;
			fVar8 = fStack_114 * 0.0;
			fStack_114 = fStack_114 * 0.0;
			fVar13 = fVar13 + fVar23;
			fVar17 = fVar17 + fVar24;
			auVar9._0_4_ = fVar13 - fVar23;
			auVar9._4_4_ = fVar17 - fVar24;
			auVar9._8_4_ = (fVar8 + 0.0) - fVar8;
			auVar9._12_4_ = (fStack_114 + 0.0) - fStack_114;
			auVar14._0_4_ = fVar13 + fVar23;
			auVar14._4_4_ = fVar17 + fVar24;
			auVar14._8_4_ = fVar8 + 0.0 + fVar8;
			auVar14._12_4_ = fStack_114 + 0.0 + fStack_114;
			auVar10._8_8_ = 0;
			auVar10._0_8_ = CONCAT44(uStack_d0, uStack_d4);
			auVar10 = minps(auVar9, auVar10);
			auVar15._8_8_ = 0;
			auVar15._0_8_ = CONCAT44(uStack_d0, uStack_d4);
			auVar15 = maxps(auVar14, auVar15);
			fVar8 = (auVar15._0_4_ - auVar10._0_4_) * 0.5;
			fVar18 = (auVar15._4_4_ - auVar10._4_4_) * 0.5;
			fVar19 = (auVar15._8_4_ - auVar10._8_4_) * 0.0;
			fVar20 = (auVar15._12_4_ - auVar10._12_4_) * 0.0;
			fVar24 = auVar10._0_4_ + fVar8;
			fVar13 = auVar10._4_4_ + fVar18;
			fVar17 = auVar10._8_4_ + fVar19;
			fVar23 = auVar10._12_4_ + fVar20;
			auVar22._0_4_ = fVar24 - fVar8;
			auVar22._4_4_ = fVar13 - fVar18;
			auVar22._8_4_ = fVar17 - fVar19;
			auVar22._12_4_ = fVar23 - fVar20;
			auVar11._0_4_ = fVar24 + fVar8;
			auVar11._4_4_ = fVar13 + fVar18;
			auVar11._8_4_ = fVar17 + fVar19;
			auVar11._12_4_ = fVar23 + fVar20;
			auVar4._8_8_ = 0;
			auVar4._0_8_ = uStack_b0;
			auVar15 = minps(auVar22, auVar4);
			auVar5._8_8_ = 0;
			auVar5._0_8_ = uStack_b0;
			auVar10 = maxps(auVar11, auVar5);
			local_118 = (auVar10._0_4_ - auVar15._0_4_) * 0.5;
			fStack_114 = (auVar10._4_4_ - auVar15._4_4_) * 0.5;
			local_130 = (fVar21 - local_12c) * 0.5;
			local_128.y = auVar15._4_4_ + fStack_114;
			local_128.x = auVar15._0_4_ + local_118;
			local_12c = local_12c + local_130;
		}
		local_108.Dispose();
		__return_storage_ptr__.m_Center.x = local_128.x;
		__return_storage_ptr__.m_Center.y = local_128.y;
		__return_storage_ptr__.m_Center.z = local_12c;
		__return_storage_ptr__.m_Extents.x = local_118;
		__return_storage_ptr__.m_Extents.y = fStack_114;
		__return_storage_ptr__.m_Extents.z = local_130;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x588B740", Offset = "0x588A740", VA = "0x588B740")]
	private static float Next(System.Random random)
	{
		// Lifted from source/cpp/Map/MapFracture.c (Map.MapFracture$$Next): clean
		double dVar1;

		if (random == null) {
			throw new NullReferenceException();
		}
		dVar1 = random.NextDouble();
		return (float)dVar1 + -0.5;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapFracture.c.

	// Map.MapFracture.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Map.MapFracture.<>c__DisplayClass16_1$$.ctor: clean
	private void c__DisplayClass16_1__ctor()
	{
		base();
		return;
	}

	// Map.MapFracture.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Map.MapFracture.<>c__DisplayClass16_1$$<Shatter>b__0: 4 lines keep C-only constructs
	private int c__DisplayClass16_1__Shatter_b__0(int a, int b)
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		MapFracture.c__DisplayClass16_0 pMVar5;
		List<Vector3> pSVar6;
		int iVar7;
		ulong in_RAX;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 UVar11;
		ulong uStack_28;

		uStack_28 = in_RAX;
		pMVar5 = this.CS___8__locals1;
		if ((pMVar5 != null) &&(pSVar6 = pMVar5.seeds, pSVar6 != null)) {
			UVar11 = pSVar6.get_Item(a);
			uVar1 = this.own.x;
			uVar3 = this.own.y;
			fVar8 = UVar11.x - (float)uVar1;
			fVar9 = UVar11.y - (float)uVar3;
			fVar10 = UVar11.z - this.own.z;
			uStack_28 = CONCAT44(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8, (undefined4)uStack_28);
			pMVar5 = this.CS___8__locals1;
			if ((pMVar5 != null) &&(pSVar6 = pMVar5.seeds, pSVar6 != null)) {
				UVar11 = pSVar6.get_Item(b);
				uVar2 = this.own.x;
				uVar4 = this.own.y;
				fVar8 = UVar11.y - (float)uVar4;
				fVar9 = UVar11.z - this.own.z;
				fVar10 = UVar11.x - (float)uVar2;
				iVar7 = (((long)&uStack_28 + 4)).CompareTo(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
				return iVar7;
			}
		}
		throw new NullReferenceException();
	}

	// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__0: clean
	private float c__DisplayClass18_0__HasVolume_b__0(Vector3 point)
	{
		uint uVar1;
		uint uVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		uVar1 = this.origin.x;
		uVar2 = this.origin.y;
		fVar3 = point.y - (float)uVar2;
		fVar4 = point.z - this.origin.z;
		fVar5 = point.x - (float)uVar1;
		return fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
	}

	// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__1: clean
	private float c__DisplayClass18_0__HasVolume_b__1(Vector3 point)
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;

		uVar1 = this.axis.x;
		uVar3 = this.axis.y;
		fVar9 = this.axis.z;
		uVar2 = this.origin.x;
		uVar4 = this.origin.y;
		fVar5 = point.x - (float)uVar2;
		fVar6 = point.y - (float)uVar4;
		fVar7 = point.z - this.origin.z;
		fVar8 = fVar9 * fVar5 - fVar7 * (float)uVar1;
		fVar5 = (float)uVar1 * fVar6 - (float)uVar3 * fVar5;
		fVar9 = (float)uVar3 * fVar7 - fVar9 * fVar6;
		return fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5;
	}

	// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__2: clean
	private float c__DisplayClass18_0__HasVolume_b__2(Vector3 point)
	{
		uint uVar1;
		uint uVar2;

		uVar1 = this.normal.x;
		uVar2 = this.normal.y;
		return point.x * (float)uVar1 + point.y * (float)uVar2 + point.z * this.normal.z;
	}

	// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__3: clean
	private float c__DisplayClass18_0__HasVolume_b__3(Vector3 point)
	{
		uint uVar1;
		uint uVar2;

		uVar1 = this.normal.x;
		uVar2 = this.normal.y;
		return -(point.x * (float)uVar1 + point.y * (float)uVar2 + point.z * this.normal.z);
	}
}
