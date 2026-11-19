// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterGrowthEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterGrowthEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006FE")]
internal class ShifterGrowthEffect : MonoBehaviour
{
	[Token(Token = "0x20006FF")]
	private sealed class Measurement
	{
		[Token(Token = "0x4002116")]
		[FieldOffset(Offset = "0x10")]
		public readonly Vector3[] Positions;

		[Token(Token = "0x4002117")]
		[FieldOffset(Offset = "0x18")]
		public readonly float[] Distances;

		[Token(Token = "0x4002118")]
		[FieldOffset(Offset = "0x20")]
		public float Maximum;

		[Token(Token = "0x60043A4")]
		[Address(RVA = "0x5B1D930", Offset = "0x5B1C930", VA = "0x5B1D930")]
		public Measurement(int count)
		{
			// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect.Measurement$$.ctor): clean
			Vector3[] pUVar1;
			Single[] pSVar2;

			this.Maximum = 0.0001;
			base();
			pUVar1 = (Vector3[])new Vector3[count];
			this.Positions = pUVar1;
			pSVar2 = (Single[])new float[count];
			this.Distances = pSVar2;
			return;
		}
	}

	[Token(Token = "0x2000700")]
	private sealed class Layer
	{
		[Token(Token = "0x4002119")]
		[FieldOffset(Offset = "0x10")]
		public readonly SkinnedMeshRenderer Renderer;

		[Token(Token = "0x400211A")]
		[FieldOffset(Offset = "0x18")]
		public readonly Mesh OriginalMesh;

		[Token(Token = "0x400211B")]
		[FieldOffset(Offset = "0x20")]
		public readonly Material[] OriginalMaterials;

		[Token(Token = "0x400211C")]
		[FieldOffset(Offset = "0x28")]
		public readonly Shader[] OriginalShaders;

		[Token(Token = "0x400211D")]
		[FieldOffset(Offset = "0x30")]
		public readonly Material[] GrowthMaterials;

		[Token(Token = "0x400211E")]
		[FieldOffset(Offset = "0x38")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x60043A5")]
		[Address(RVA = "0x5B1D9C0", Offset = "0x5B1C9C0", VA = "0x5B1D9C0")]
		public Layer(SkinnedMeshRenderer renderer, Mesh originalMesh, Material[] originalMaterials)
		{
			// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect.Layer$$.ctor): clean
			MaterialPropertyBlock __this_00;
			Shader[] pUVar1;
			Material[] pUVar2;

			__this_00 = new MaterialPropertyBlock();
			this.Properties = __this_00;
			base();
			this.Renderer = renderer;
			this.OriginalMesh = originalMesh;
			this.OriginalMaterials = originalMaterials;
			if (originalMaterials == null) {
				throw new NullReferenceException();
			}
			pUVar1 = (Shader[])new Shader[(uint32_t)originalMaterials.Length];
			this.OriginalShaders = pUVar1;
			pUVar2 = (Material[])new Material[(uint32_t)originalMaterials.Length];
			this.GrowthMaterials = pUVar2;
			return;
		}
	}

	[Token(Token = "0x40020FA")]
	private const float Duration = 3.8f;

	[Token(Token = "0x40020FB")]
	private const float GrowthEnd = 3.6f;

	[Token(Token = "0x40020FC")]
	private const float SlowdownTime = 1f;

	[Token(Token = "0x40020FD")]
	private const float SlowdownProgress = 0.75f;

	[Token(Token = "0x40020FE")]
	private const float SlowdownSpeed = 0.4f;

	[Token(Token = "0x40020FF")]
	private const float GrowthOvershoot = 1.03f;

	[Token(Token = "0x4002100")]
	private const float TissueScale = 3f;

	[Token(Token = "0x4002101")]
	private const float ChunkRate = 120f;

	[Token(Token = "0x4002102")]
	private const float ChunkLifetime = 0.5f;

	[Token(Token = "0x4002103")]
	private const float ChunkRadius = 0.35f;

	[Token(Token = "0x4002104")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int Growth;

	[Token(Token = "0x4002105")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int TissueIntensity;

	[Token(Token = "0x4002106")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] Origin;

	[Token(Token = "0x4002107")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color ChunkDark;

	[Token(Token = "0x4002108")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Color ChunkLight;

	[Token(Token = "0x4002109")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<Layer> _layers;

	[Token(Token = "0x400210A")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Object> _created;

	[Token(Token = "0x400210B")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Material> _materialBuffer;

	[Token(Token = "0x400210C")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Transform> _nodes;

	[Token(Token = "0x400210D")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<Transform, int> _nodeIndices;

	[Token(Token = "0x400210E")]
	[FieldOffset(Offset = "0x48")]
	private ParticleSystem _chunks;

	[Token(Token = "0x400210F")]
	[FieldOffset(Offset = "0x50")]
	private float[] _distances;

	[Token(Token = "0x4002110")]
	[FieldOffset(Offset = "0x58")]
	private int[] _parents;

	[Token(Token = "0x4002111")]
	[FieldOffset(Offset = "0x60")]
	private Shader _shader;

	[Token(Token = "0x4002112")]
	[FieldOffset(Offset = "0x68")]
	private BaseShifter _shifter;

	[Token(Token = "0x4002113")]
	[FieldOffset(Offset = "0x70")]
	private SkinnedMeshRenderer _body;

	[Token(Token = "0x4002114")]
	[FieldOffset(Offset = "0x78")]
	private float _startTime;

	[Token(Token = "0x4002115")]
	[FieldOffset(Offset = "0x7C")]
	private bool _finished;

	[Token(Token = "0x6004392")]
	[Address(RVA = "0x5B164E0", Offset = "0x5B154E0", VA = "0x5B164E0")]
	public void Play(BaseShifter shifter)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$Play): 17 lines keep C-only constructs
		Shader* targetAddress;
		SkinnedMeshRenderer* targetAddress_00;
		int piVar1;
		Renderer pUVar2;
		SkinnedMeshRenderer[] pUVar3;
		BaseShifter pCVar4;
		bool bVar5;
		int iVar6;
		int iVar7;
		uint uVar8;
		Shader pUVar9;
		MethodInfo method_00;
		Object[] pSVar10;
		Object pUVar11;
		Mesh pUVar12;
		Transform[] pUVar13;
		ulong uVar14;
		Transform root;
		long lVar16;
		ulong uVar17;
		uint uVar18;
		float fVar19;
		System_Collections_Generic_List_Enumerator_object__o local_78;
		byte[] local_58 = new byte[16];
		SkinnedMeshRenderer local_48;
		BaseShifter local_40;
		Shader* local_38;

		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		this._shifter = shifter;
		fVar19 = Time.time;
		this._startTime = fVar19;
		pUVar9 = BasicTitanComponentCache.LoadShader("TitanRegrowth");
		targetAddress = &this._shader;
		this._shader = pUVar9;
		method_00 = new List<SkinnedMeshRenderer>();
		if ((shifter == null) ||(pSVar10 = shifter.GetComponentsInChildren<SkinnedMeshRenderer>(), pSVar10 == null)) {
	label_05c16886: ;
			throw new NullReferenceException();
		}
		targetAddress_00 = &this._body;
		uVar8 = (uint)pSVar10.Length;
		local_40 = shifter;
		local_38 = targetAddress;
		if (method_00 == null) {
			if (0 < (int)uVar8) {
				lVar16 = 0;
				do {
					if (uVar8 <= (uint)lVar16) goto label_05c16a08;
					pUVar2 = (Renderer)pSVar10[lVar16];
					if (pUVar2 == null) goto label_05c16886;
					bVar5 = pUVar2.enabled;
					if (bVar5) {
						pUVar11 = (Object)pUVar2.sharedMesh;
						bVar5 = (pUVar11 == null);
						if ((!bVar5) &&((pUVar12 = pUVar2.sharedMesh, pUVar12 == null ||(bVar5 = pUVar12.isReadable)))) goto label_05c16886;
					}
					uVar8 = (uint)pSVar10.Length;
					lVar16 = lVar16 + 1;
				} while ((int)lVar16 < (int)uVar8);
			}
		}
		else if (0 < (int)uVar8) {
			uVar18 = 0;
			do {
				if (uVar8 <= uVar18) {
	label_05c16a08: ;
					throw new IndexOutOfRangeException();
				}
				pUVar2 = (Renderer)pSVar10[(int)uVar18];
				if (pUVar2 == null) goto label_05c16886;
				bVar5 = pUVar2.enabled;
				if (bVar5) {
					pUVar11 = (Object)pUVar2.sharedMesh;
					bVar5 = (pUVar11 == null);
					if (!bVar5) {
						pUVar12 = pUVar2.sharedMesh;
						if (pUVar12 == null) goto label_05c16886;
						bVar5 = pUVar12.isReadable;
						if (bVar5) {
							piVar1 = (int)((long)&method_00.name + 4);
							*piVar1 = *piVar1 + 1;
							pUVar3 = ((List<SkinnedMeshRenderer>)&method_00.invoker_method)._items;
							if (pUVar3 == null) goto label_05c16886;
							uVar8 = *(uint)&method_00.name;
							if (uVar8 < (uint)pUVar3.Length) {
								*(uint)&method_00.name = uVar8 + 1;
								pUVar3[(int)uVar8] = (SkinnedMeshRenderer)pUVar2;
							}
							else {
								method_00.AddWithResize((object)pUVar2);
							}
							pUVar11 = (Object)*targetAddress_00;
							bVar5 = (pUVar11 == null);
							if (!bVar5) {
								pUVar12 = pUVar2.sharedMesh;
								if (pUVar12 == null) goto label_05c16886;
								iVar6 = pUVar12.vertexCount;
								if ((*targetAddress_00 == null) ||(pUVar12 = (*targetAddress_00).sharedMesh, pUVar12 == null)) goto label_05c16886;
								iVar7 = pUVar12.vertexCount;
								if (iVar6 <= iVar7) goto label_05c16690;
							}
							*targetAddress_00 = (SkinnedMeshRenderer)pUVar2;
						}
					}
				}
	label_05c16690: ;
				uVar18 = uVar18 + 1;
				uVar8 = (uint)pSVar10.Length;
			} while ((int)uVar18 < (int)uVar8);
		}
		pUVar11 = (Object)*targetAddress_00;
		bVar5 = (pUVar11 == null);
		if (!bVar5) {
			pUVar11 = (Object)*local_38;
			bVar5 = (pUVar11 == null);
			if (!bVar5) {
				if (method_00 == null) goto label_05c16886;
				local_58.GetEnumerator((List<object>)method_00);
				local_78._current = (object)local_48;
				local_78._list = (List<T>)local_58._0_8_;
				local_78._index = local_58._8_4_;
				local_78._version = local_58._12_4_;
				local_58._0_8_ = null;
				local_58._8_8_ = &local_78;
				while (bVar5 = local_78.MoveNext()) {
					if ((SkinnedMeshRenderer)local_78._current ==null) {
						throw new NullReferenceException();
					}
					pUVar13 = local_78._current.bones;
					if (pUVar13 == null) {
						throw new NullReferenceException();
					}
					if (0 < (int)pUVar13.Length) {
						uVar14 = pUVar13.Length & 0xffffffff;
						uVar17 = 0;
						do {
							if (uVar14 <= uVar17) {
								throw new IndexOutOfRangeException();
							}
							this.AddNode(pUVar13[uVar17]);
							uVar17 = uVar17 + 1;
							uVar8 = (uint)pUVar13.Length;
							uVar14 = (ulong)uVar8;
						} while ((long)uVar17 < (long)(int)uVar8);
					}
				}
				local_78.Dispose();
				pCVar4 = local_40;
				root = local_40.transform;
				this.ComputeDistances(root);
				this.AddLayers((List<SkinnedMeshRenderer>)method_00);
				if (pCVar4.EffectsEnabled != false) {
					this.CreateChunks();
				}
				this.LateUpdate();
			}
		}
		return;
	}

	[Token(Token = "0x6004393")]
	[Address(RVA = "0x5B19B40", Offset = "0x5B18B40", VA = "0x5B19B40")]
	private void AddNode(Transform bone)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$AddNode): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, int> pSVar3;
		List<Transform> pSVar4;
		Transform[] pUVar5;
		bool bVar7;

		bVar7 = ((Object)bone != null);
		if (!bVar7) {
			return;
		}
		pSVar3 = (Dictionary<object, int>)this._nodeIndices;
		if (pSVar3 != null) {
			bVar7 = pSVar3.ContainsKey((object)bone);
			if (bVar7) {
				return;
			}
			pSVar4 = this._nodes;
			if ((pSVar4 != null) &&(pSVar3 = (Dictionary<object, int>)this._nodeIndices, pSVar3 != null)) {
				pSVar3.set_Item((object)bone, pSVar4._size);
				pSVar4 = this._nodes;
				if (pSVar4 != null) {
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pUVar5 = pSVar4._items;
					if (pUVar5 != null) {
						uVar2 = pSVar4._size;
						if (uVar2 < (uint)pUVar5.Length) {
							pSVar4._size = uVar2 + 1;
							pUVar5[(int)uVar2] = bone;
							return;
						}
						pSVar4.AddWithResize((object)bone);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004394")]
	[Address(RVA = "0x5B19C90", Offset = "0x5B18C90", VA = "0x5B19C90")]
	private void ComputeDistances(Transform root)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$ComputeDistances): 16 lines keep C-only constructs
		Int32[]* targetAddress;
		Single[]* targetAddress_00;
		uint length;
		uint uVar1;
		List<Transform> pSVar2;
		Dictionary<object, int> __this_00;
		String[] array;
		bool bVar3;
		int iVar4;
		Int32[] pSVar5;
		Single[] pSVar6;
		Transform pUVar7;
		String value;
		object pIVar8;
		ulong uVar9;
		ulong uVar10;
		uint uVar11;
		uint index;
		ulong uVar12;
		float fVar13;
		float fVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		float local_48;
		float fStack_44;

		if (Il2CppMethodInitialized_0754772f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item) ;
			Il2CppMethodInitialized_0754772f = true;
		}
		pSVar2 = this._nodes;
		if (pSVar2 == null) {
	label_05c1a2df: ;
			throw new NullReferenceException();
		}
		length = pSVar2._size;
		uVar9 = (ulong)length;
		pSVar5 = (Int32[])new int[length];
		targetAddress = &this._parents;
		this._parents = pSVar5;
		pSVar6 = (Single[])new float[length];
		targetAddress_00 = &this._distances;
		this._distances = pSVar6;
		if (0 < (int)length) {
			uVar10 = 0;
			do {
				pSVar5 = *targetAddress;
				if (pSVar5 == null) goto label_05c1a2df;
				if ((uint)pSVar5.Length <= uVar10) goto label_05c1a2e4;
				pSVar5[uVar10] = -1;
				pSVar2 = this._nodes;
				if (pSVar2 == null) goto label_05c1a2df;
				pUVar7 = pSVar2.get_Item((int32_t)uVar10) ;
				while(true) {
					if (pUVar7 == null) goto label_05c1a2df;
					pUVar7 = pUVar7.parent;
					bVar3 = ((Object)pUVar7 != null);
					if (!bVar3) break;
					bVar3 = ((Object)pUVar7 != (Object)root);
					if (!bVar3) break;
					pSVar5 = this._parents;
					if ((pSVar5 == null) ||(__this_00 = (Dictionary<object, int>)this._nodeIndices, __this_00 == null)) goto label_05c1a2df;
					if ((uint)pSVar5.Length <= uVar10) goto label_05c1a2e4;
					bVar3 = __this_00.TryGetValue((object)pUVar7, pSVar5.m_Items + uVar10);
					if (bVar3) break;
					pSVar5 = *targetAddress;
					if (pSVar5 == null) goto label_05c1a2df;
					if ((uint)pSVar5.Length <= uVar10) goto label_05c1a2e4;
					pSVar5[uVar10] = -1;
				}
				pSVar6 = *targetAddress_00;
				pSVar2 = this._nodes;
				if (pSVar2 == null) goto label_05c1a2df;
				array = ShifterGrowthEffect.Origin;
				pUVar7 = pSVar2.get_Item((int32_t)uVar10) ;
				if (pUVar7 == null) goto label_05c1a2df;
				value = pUVar7.name;
				iVar4 = Array.IndexOf<string>((Object[])array, (object)value);
				fVar13 = 0.0;
				if (iVar4 < 0) {
					fVar13 = 3.4028235e+38;
				}
				if (pSVar6 == null) goto label_05c1a2df;
				if ((uint)pSVar6.Length <= uVar10) goto label_05c1a2e4;
				pSVar6[uVar10] = fVar13;
				uVar10 = uVar10 + 1;
			} while (uVar10 != uVar9);
		}
		iVar4 = Array.IndexOf<float>(*targetAddress_00, 0.0);
		if (iVar4 < 0) {
			pSVar6 = *targetAddress_00;
			if (pSVar6 == null) goto label_05c1a2df;
			if ((int)pSVar6.Length == 0) {
	label_05c1a2e4: ;
				throw new IndexOutOfRangeException();
			}
			pSVar6[0] = 0.0;
		}
		pIVar8 = new bool[length];
		if (0 < (int)length) {
			if (pIVar8 == null) goto label_05c1a2df;
			uVar11 = 0;
			do {
				uVar12 = 0xffffffff;
				uVar10 = 0;
				do {
					if (*(uint)&pIVar8[1].monitor == uVar10) goto label_05c1a2e4;
					if (*(sbyte)((long)&pIVar8[2].klass + uVar10) == false) {
						pSVar6 = *targetAddress_00;
						if (pSVar6 == null) goto label_05c1a2df;
						if ((pSVar6.Length & 0xffffffff) <= uVar10) goto label_05c1a2e4;
						if (pSVar6[uVar10] < 3.4028235e+38) {
							if (-1 < (int)(uint)uVar12) {
								if ((uint)pSVar6.Length <= (uint)uVar12) goto label_05c1a2e4;
								if (pSVar6[uVar12] <= pSVar6[uVar10]) goto label_05c1a040;
							}
							uVar12 = uVar10 & 0xffffffff;
						}
					}
	label_05c1a040: ;
					uVar10 = uVar10 + 1;
				} while (uVar9 != uVar10);
				index = (uint)uVar12;
				if ((int)index < 0) {
					return;
				}
				if (*(uint)&pIVar8[1].monitor <= index) goto label_05c1a2e4;
				*(byte)((long)&pIVar8[2].klass + uVar12) = 1;
				uVar10 = 0;
				do {
					pSVar5 = *targetAddress;
					if (pSVar5 == null) goto label_05c1a2df;
					if ((pSVar5.Length & 0xffffffff) <= uVar10) goto label_05c1a2e4;
					if (pSVar5[uVar10] == index) {
	label_05c1a126: ;
						pSVar6 = *targetAddress_00;
						if (pSVar6 == null) goto label_05c1a2df;
						if ((uint)pSVar6.Length <= index) goto label_05c1a2e4;
						pSVar2 = this._nodes;
						if (pSVar2 == null) goto label_05c1a2df;
						fVar13 = pSVar6[uVar12];
						pUVar7 = pSVar2.get_Item(index);
						if (pUVar7 == null) goto label_05c1a2df;
						UVar15 = pUVar7.position;
						pSVar2 = this._nodes;
						if ((pSVar2 == null) ||(pUVar7 = pSVar2.get_Item((int32_t)uVar10), pUVar7 == null)) goto label_05c1a2df;
						UVar16 = pUVar7.position;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fVar14 = UVar15.z - UVar16.z;
						local_48 = UVar15.x;
						fStack_44 = UVar15.y;
						local_48 = local_48 - UVar16.x;
						fStack_44 = fStack_44 - UVar16.y;
						fVar14 = fVar14 * fVar14 + fStack_44 * fStack_44 + local_48 * local_48;
						if (fVar14 < 0.0) {
							fVar14 = sqrtf(fVar14);
						}
						else {
							fVar14 = SQRT(fVar14);
						}
						pSVar6 = *targetAddress_00;
						if (pSVar6 == null) goto label_05c1a2df;
						if ((uint)pSVar6.Length <= uVar10) goto label_05c1a2e4;
						fVar13 = fVar13 + fVar14;
						if (fVar13 < pSVar6[uVar10]) {
							pSVar6[uVar10] = fVar13;
						}
					}
					else {
						if ((uint)pSVar5.Length <= index) goto label_05c1a2e4;
						if (uVar10 == (uint)pSVar5[uVar12]) goto label_05c1a126;
					}
					uVar10 = uVar10 + 1;
				} while (uVar9 != uVar10);
				uVar11 = uVar11 + 1;
			} while (uVar11 != length);
		}
		return;
	}

	[Token(Token = "0x6004395")]
	[Address(RVA = "0x5B1B630", Offset = "0x5B1A630", VA = "0x5B1B630")]
	private float VertexDistance(Vector3 position, int bone)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$VertexDistance): 1 lines keep C-only constructs
		uint uVar1;
		Int32[] pSVar2;
		Single[] pSVar3;
		Transform __this_00;
		ulong uVar4;
		List<Transform> __this_01;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 UVar9;
		float fStack_48;
		float fStack_44;

		if (Il2CppMethodInitialized_07547730 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item) ;
			Il2CppMethodInitialized_07547730 = true;
		}
		__this_01 = this._nodes;
		if (__this_01 != null) {
			fStack_48 = position.x;
			uVar4 = 0;
			fVar5 = 3.4028235e+38;
			do {
				if ((long)__this_01._size <= (long)uVar4) {
					return fVar5;
				}
				if ((uint)bone == uVar4) {
	label_05c1b730: ;
					pSVar3 = this._distances;
					if (pSVar3 == null) break;
					if ((uint)pSVar3.Length <= uVar4) {
	label_05c1b83a: ;
						throw new IndexOutOfRangeException();
					}
					fVar6 = pSVar3[uVar4];
					if (fVar6 < 3.4028235e+38) {
						__this_00 = (Transform)__this_01.get_Item((int32_t)uVar4);
						if (__this_00 == null) break;
						UVar9 = __this_00.position;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fStack_44 = position.y;
						fStack_44 = fStack_44 - UVar9.y;
						fVar7 = position.z - UVar9.z;
						fVar8 = fStack_48 - UVar9.x;
						fVar7 = fStack_44 * fStack_44 + fVar8 * fVar8 + fVar7 * fVar7;
						if (fVar7 < 0.0) {
							fVar7 = sqrtf(fVar7);
						}
						else {
							fVar7 = SQRT(fVar7);
						}
						fVar6 = fVar6 + fVar7;
						if (fVar6 <= fVar5) {
							fVar5 = fVar6;
						}
						__this_01 = this._nodes;
					}
				}
				else {
					pSVar2 = this._parents;
					if (pSVar2 == null) break;
					if ((pSVar2.Length & 0xffffffff) <= uVar4) goto label_05c1b83a;
					if (pSVar2[uVar4] == bone) goto label_05c1b730;
					if ((uint)pSVar2.Length <= (uint)bone) goto label_05c1b83a;
					if (uVar4 == (uint)pSVar2[bone]) goto label_05c1b730;
				}
				uVar4 = uVar4 + 1;
			} while (__this_01 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004396")]
	[Address(RVA = "0x5B1B840", Offset = "0x5B1A840", VA = "0x5B1B840")]
	private Measurement Measure(Mesh mesh, Transform[] bones)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$Measure): 40 lines keep C-only constructs
		float pfVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		int bone;
		Transform pUVar5;
		Dictionary<object, int> __this_00;
		Single[] pSVar7;
		Vector3[] pUVar8;
		BoneWeight[] pUVar9;
		bool bVar10;
		uint uVar11;
		Matrix4x4[] pUVar12;
		object pIVar13;
		Vector3[] pUVar14;
		BoneWeight[] pUVar15;
		ShifterGrowthEffect.Measurement __this_01;
		long lVar16;
		int iVar17;
		BoneWeight pUVar18;
		object pIVar19;
		long lVar20;
		ulong uVar21;
		ulong uVar22;
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
		float fVar36;
		float fVar37;
		float fVar38;
		Vector3 position;
		int local_2cc;
		Vector3[] local_2c8;
		object local_2c0;
		float local_2b8;
		float local_2b4;
		float local_2b0;
		float local_2ac;
		BoneWeight local_2a8;
		ShifterGrowthEffect local_288;
		object local_280;
		ShifterGrowthEffect.Measurement local_278;
		BoneWeight[] local_270;
		ulong local_268;
		ulong local_258;
		ulong local_248;
		ulong local_238;
		ulong local_228;
		float local_218;
		float fStack_214;
		byte[] local_208 = new byte[16];
		ulong local_1f8;
		ulong local_1e8;
		ulong local_1d8;
		float local_1c8;
		ulong local_1b8;
		ulong local_1a8;
		float local_198;
		float fStack_194;
		byte[] local_188 = new byte[16];
		ulong local_178;
		ulong local_168;
		ulong local_158;
		float local_148;
		ulong local_138;
		ulong local_128;
		float local_118;
		float fStack_114;
		byte[] local_108 = new byte[16];
		float local_f8;
		ulong local_e8;
		ulong local_d8;
		ulong local_c8;
		ulong local_b8;
		ulong local_a8;
		float local_98;
		float fStack_94;
		byte[] local_88 = new byte[16];
		Matrix4x4 local_78;

		local_288 = this;
		local_2cc = 0;
		local_2a8.m_BoneIndex0 = 0;
		local_2a8.m_BoneIndex1 = 0;
		local_2a8.m_BoneIndex2 = 0;
		local_2a8.m_BoneIndex3 = 0;
		local_2a8.m_Weight0 = 0.0;
		local_2a8.m_Weight1 = 0.0;
		local_2a8.m_Weight2 = 0.0;
		local_2a8.m_Weight3 = 0.0;
		if ((mesh != null) &&(local_2c8 = (Vector3[])mesh, pUVar12 = mesh.bindposes, bones != null)) {
			pIVar13 = new Matrix4x4[(uint32_t)bones.Length];
			local_2c0 = new int[(uint32_t)bones.Length];
			local_280 = pIVar13;
			if (0 < (int)bones.Length) {
				uVar22 = bones.Length & 0xffffffff;
				lVar20 = 0x14;
				uVar21 = 0;
				do {
					if (uVar22 <= uVar21) goto label_05c1c2fa;
					pUVar5 = bones[uVar21];
					bVar10 = ((Object)pUVar5 == null);
					if (bVar10) {
						fVar23 = (Matrix4x4.identityMatrix).m00;
						fVar25 = (Matrix4x4.identityMatrix).m10;
						fVar26 = (Matrix4x4.identityMatrix).m20;
						fVar27 = (Matrix4x4.identityMatrix).m30;
						fVar31 = (Matrix4x4.identityMatrix).m01;
						fVar32 = (Matrix4x4.identityMatrix).m11;
						fVar33 = (Matrix4x4.identityMatrix).m21;
						fVar34 = (Matrix4x4.identityMatrix).m31;
						fVar35 = (Matrix4x4.identityMatrix).m02;
						fVar36 = (Matrix4x4.identityMatrix).m12;
						fVar37 = (Matrix4x4.identityMatrix).m22;
						fVar38 = (Matrix4x4.identityMatrix).m32;
						fVar28 = (Matrix4x4.identityMatrix).m03;
						fVar29 = (Matrix4x4.identityMatrix).m13;
						fVar30 = (Matrix4x4.identityMatrix).m23;
						fVar24 = (Matrix4x4.identityMatrix).m33;
					}
					else {
						if ((uint)bones.Length <= uVar21) goto label_05c1c2fa;
						if ((bones[uVar21] == null) ||(local_78 = (bones[uVar21]).localToWorldMatrix, pUVar12 == null)) goto label_05c1c2eb;
						if ((uint)pUVar12.Length <= uVar21) goto label_05c1c2fa;
						fVar24 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x50);
						fVar2 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x4c);
						fVar3 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x48);
						fVar4 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x44);
						fVar23 = fVar4 * local_78.m03 + fVar3 * local_78.m02 + fVar2 * local_78.m01 + fVar24 * local_78.m00;
						fVar25 = fVar4 * local_78.m13 + fVar3 * local_78.m12 + fVar2 * local_78.m11 + fVar24 * local_78.m10;
						fVar26 = fVar4 * local_78.m23 + fVar3 * local_78.m22 + fVar2 * local_78.m21 + fVar24 * local_78.m20;
						fVar27 = fVar4 * local_78.m33 + fVar3 * local_78.m32 + fVar2 * local_78.m31 + fVar24 * local_78.m30;
						fVar24 = *(float)((long)(pUVar12.m_Items + -1) + lVar20 * 4);
						fVar2 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x3c);
						fVar3 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x38);
						fVar4 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x34);
						fVar31 = fVar4 * local_78.m03 + fVar3 * local_78.m02 + fVar2 * local_78.m01 + fVar24 * local_78.m00;
						fVar32 = fVar4 * local_78.m13 + fVar3 * local_78.m12 + fVar2 * local_78.m11 + fVar24 * local_78.m10;
						fVar33 = fVar4 * local_78.m23 + fVar3 * local_78.m22 + fVar2 * local_78.m21 + fVar24 * local_78.m20;
						fVar34 = fVar4 * local_78.m33 + fVar3 * local_78.m32 + fVar2 * local_78.m31 + fVar24 * local_78.m30;
						fVar24 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x30);
						fVar2 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x2c);
						fVar3 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x28);
						fVar4 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x24);
						fVar35 = fVar4 * local_78.m03 + fVar3 * local_78.m02 + fVar2 * local_78.m01 + fVar24 * local_78.m00;
						fVar36 = fVar4 * local_78.m13 + fVar3 * local_78.m12 + fVar2 * local_78.m11 + fVar24 * local_78.m10;
						fVar37 = fVar4 * local_78.m23 + fVar3 * local_78.m22 + fVar2 * local_78.m21 + fVar24 * local_78.m20;
						fVar38 = fVar4 * local_78.m33 + fVar3 * local_78.m32 + fVar2 * local_78.m31 + fVar24 * local_78.m30;
						fVar24 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x20);
						fVar2 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x1c);
						fVar3 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x18);
						fVar4 = *(float)((long)pUVar12.m_Items + lVar20 * 4 + -0x14);
						fVar28 = fVar4 * local_78.m03 + fVar3 * local_78.m02 + fVar2 * local_78.m01 + fVar24 * local_78.m00;
						fVar29 = fVar4 * local_78.m13 + fVar3 * local_78.m12 + fVar2 * local_78.m11 + fVar24 * local_78.m10;
						fVar30 = fVar4 * local_78.m23 + fVar3 * local_78.m22 + fVar2 * local_78.m21 + fVar24 * local_78.m20;
						fVar24 = fVar4 * local_78.m33 + fVar3 * local_78.m32 + fVar2 * local_78.m31 + fVar24 * local_78.m30;
					}
					if (pIVar13 == null) goto label_05c1c2eb;
					if (*(uint)&pIVar13[1].monitor <= uVar21) goto label_05c1c2fa;
					pfVar1 = (float)((long)&pIVar13[-3].klass + lVar20 * 4);
					*pfVar1 = fVar23;
					pfVar1[1] = fVar25;
					pfVar1[2] = fVar26;
					pfVar1[3] = fVar27;
					pfVar1 = (float)((long)&pIVar13[-2].klass + lVar20 * 4);
					*pfVar1 = fVar31;
					pfVar1[1] = fVar32;
					pfVar1[2] = fVar33;
					pfVar1[3] = fVar34;
					pfVar1 = (float)((long)&pIVar13[-1].klass + lVar20 * 4);
					*pfVar1 = fVar35;
					pfVar1[1] = fVar36;
					pfVar1[2] = fVar37;
					pfVar1[3] = fVar38;
					pfVar1 = (float)((long)&pIVar13.klass + lVar20 * 4);
					*pfVar1 = fVar28;
					pfVar1[1] = fVar29;
					pfVar1[2] = fVar30;
					pfVar1[3] = fVar24;
					if ((uint)bones.Length <= uVar21) goto label_05c1c2fa;
					pUVar5 = bones[uVar21];
					bVar10 = ((Object)pUVar5 != null);
					pIVar13 = local_280;
					iVar17 = -1;
					if (bVar10) {
						if ((uint)bones.Length <= uVar21) goto label_05c1c2fa;
						__this_00 = (Dictionary<object, int>)local_288._nodeIndices ;
						if (__this_00 == null) goto label_05c1c2eb;
						bVar10 = __this_00.TryGetValue((object)bones[uVar21], ref local_2cc);
						iVar17 = -1;
						if (bVar10) {
							iVar17 = local_2cc;
						}
					}
					if (local_2c0 == null) goto label_05c1c2eb;
					if (*(uint)&local_2c0[1].monitor <= (uint)uVar21) goto label_05c1c2fa;
					*(int)((long)&local_2c0[2].klass + uVar21 * 4) = iVar17;
					uVar21 = uVar21 + 1;
					uVar11 = (uint)bones.Length;
					uVar22 = (ulong)uVar11;
					lVar20 = lVar20 + 0x10;
				} while ((long)uVar21 < (long)(int)uVar11);
			}
			pUVar8 = local_2c8;
			pUVar14 = local_2c8.vertices;
			pUVar15 = pUVar8.boneWeights;
			if (pUVar14 != null) {
				__this_01 = new ShifterGrowthEffect.Measurement((int32_t)pUVar14.Length);
				if ((int)pUVar14.Length < 1) {
					return __this_01;
				}
				if (pUVar15 != null) {
					if (__this_01 == null) {
						if ((int)pUVar15.Length != 0) goto label_05c1c2eb;
					}
					else if (pIVar13 == null) {
						if ((int)pUVar15.Length != 0) {
							local_2a8.m_Weight0 = pUVar15[0].m_Weight0;
							local_2a8.m_Weight1 = pUVar15[0].m_Weight1;
							local_2a8.m_Weight2 = pUVar15[0].m_Weight2;
							local_2a8.m_Weight3 = pUVar15[0].m_Weight3;
							local_2a8.m_BoneIndex0 = pUVar15[0].m_BoneIndex0;
							local_2a8.m_BoneIndex1 = pUVar15[0].m_BoneIndex1;
							local_2a8.m_BoneIndex2 = pUVar15[0].m_BoneIndex2;
							local_2a8.m_BoneIndex3 = pUVar15[0].m_BoneIndex3;
							local_2a8.boneIndex0;
							throw new NullReferenceException();
						}
					}
					else {
						lVar20 = 10;
						uVar22 = 0;
						pIVar19 = pIVar13;
						pUVar9 = pUVar15;
						local_278 = __this_01;
						while (true) {
							pUVar18 = pUVar9.m_Items;
							if (!(uVar22 < (uint)pUVar15.Length)) break;
							local_2a8.m_Weight0 = pUVar18.m_Weight0;
							local_2a8.m_Weight1 = pUVar18.m_Weight1;
							local_2a8.m_Weight2 = pUVar9[0].m_Weight2;
							local_2a8.m_Weight3 = pUVar9[0].m_Weight3;
							local_2a8.m_BoneIndex0 = pUVar9[0].m_BoneIndex0;
							local_2a8.m_BoneIndex1 = pUVar9[0].m_BoneIndex1;
							local_2a8.m_BoneIndex2 = pUVar9[0].m_BoneIndex2;
							local_2a8.m_BoneIndex3 = pUVar9[0].m_BoneIndex3;
							local_2c8 = __this_01.Positions;
							local_270 = (BoneWeight[])pUVar18;
							uVar11 = local_2a8.boneIndex0;
							if (((uint)pUVar14.Length <= uVar22) || (*(uint)&pIVar19[1].monitor <= uVar11)) break;
							lVar16 = (long)(int)uVar11;
							fVar24 = *(float)((long)pUVar14.m_Items + lVar20 * 4 + -0x20);
							local_b8 = *(ulong)((long)pUVar14.m_Items + lVar20 * 4 + -0x28);
							local_98 = (float)((ulong)local_b8 >> 0x20);
							local_e8 = pIVar13[lVar16 * 4 + 2].klass;
							local_d8 = pIVar13[lVar16 * 4 + 3].klass;
							local_c8 = pIVar13[lVar16 * 4 + 4].klass;
							local_a8 = pIVar13[lVar16 * 4 + 5].klass;
							local_88 = ZEXT416((uint)fVar24);
							local_2ac = *(float)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 + *(float)&pIVar13[lVar16 * 4 + 3].monitor * local_98 + *(float)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_b8 + *(float)&pIVar13[lVar16 * 4 + 5].monitor;
							fStack_94 = local_98;
							local_f8 = local_2a8.weight0;
							uVar11 = local_2a8.boneIndex1;
							if (((uint)pUVar14.Length <= uVar22) || (*(uint)&pIVar19[1].monitor <= uVar11)) break;
							lVar16 = (long)(int)uVar11;
							fVar24 = *(float)((long)pUVar14.m_Items + lVar20 * 4 + -0x20);
							local_128 = *(ulong)((long)pUVar14.m_Items + lVar20 * 4 + -0x28);
							local_118 = (float)((ulong)local_128 >> 0x20);
							local_108 = ZEXT416((uint)fVar24);
							local_2b0 = *(float)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 + *(float)&pIVar13[lVar16 * 4 + 3].monitor * local_118 + *(float)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_128 + *(float)&pIVar13[lVar16 * 4 + 5].monitor;
							local_178 = pIVar13[lVar16 * 4 + 2].klass;
							local_168 = pIVar13[lVar16 * 4 + 3].klass;
							local_158 = pIVar13[lVar16 * 4 + 4].klass;
							local_138 = pIVar13[lVar16 * 4 + 5].klass;
							fStack_114 = local_118;
							local_148 = local_2a8.weight1;
							uVar11 = local_2a8.boneIndex2;
							if (((uint)pUVar14.Length <= uVar22) || (*(uint)&pIVar19[1].monitor <= uVar11)) break;
							lVar16 = (long)(int)uVar11;
							fVar24 = *(float)((long)pUVar14.m_Items + lVar20 * 4 + -0x20);
							local_1a8 = *(ulong)((long)pUVar14.m_Items + lVar20 * 4 + -0x28);
							local_198 = (float)((ulong)local_1a8 >> 0x20);
							local_188 = ZEXT416((uint)fVar24);
							local_2b4 = *(float)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 + *(float)&pIVar13[lVar16 * 4 + 3].monitor * local_198 + *(float)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_1a8 + *(float)&pIVar13[lVar16 * 4 + 5].monitor;
							local_1f8 = pIVar13[lVar16 * 4 + 2].klass;
							local_1e8 = pIVar13[lVar16 * 4 + 3].klass;
							local_1d8 = pIVar13[lVar16 * 4 + 4].klass;
							local_1b8 = pIVar13[lVar16 * 4 + 5].klass;
							fStack_194 = local_198;
							local_1c8 = local_2a8.weight2;
							uVar11 = local_2a8.boneIndex3;
							if (((uint)pUVar14.Length <= uVar22) || (*(uint)&pIVar19[1].monitor <= uVar11)) break;
							lVar16 = (long)(int)uVar11;
							fVar24 = *(float)((long)pUVar14.m_Items + lVar20 * 4 + -0x20);
							local_228 = *(ulong)((long)pUVar14.m_Items + lVar20 * 4 + -0x28);
							local_218 = (float)((ulong)local_228 >> 0x20);
							local_208 = ZEXT416((uint)fVar24);
							local_2b8 = *(float)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 + *(float)&pIVar13[lVar16 * 4 + 3].monitor * local_218 + *(float)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_228 + *(float)&pIVar13[lVar16 * 4 + 5].monitor;
							local_268 = pIVar13[lVar16 * 4 + 2].klass;
							local_258 = pIVar13[lVar16 * 4 + 3].klass;
							local_248 = pIVar13[lVar16 * 4 + 4].klass;
							local_238 = pIVar13[lVar16 * 4 + 5].klass;
							fStack_214 = local_218;
							fVar24 = local_2a8.weight3;
							if (local_2c8 == null) goto label_05c1c2eb;
							if ((uint)local_2c8.Length <= uVar22) break;
							*(ulong)((long)local_2c8.m_Items + lVar20 * 4 + -0x28) = CONCAT44(fVar24 * (local_238._4_4_ +(float)local_208._0_4_ * local_248._4_4_ + fStack_214 * local_258._4_4_ + (float)local_228 * local_268._4_4_) + local_1c8 *(local_1b8._4_4_ +(float)local_188._0_4_ * local_1d8._4_4_ + fStack_194 * local_1e8._4_4_ + (float)local_1a8 * local_1f8._4_4_) + local_148 *(local_138._4_4_ +(float)local_108._0_4_ * local_158._4_4_ + fStack_114 * local_168._4_4_ + (float)local_128 * local_178._4_4_) + local_f8 *(local_a8._4_4_ +(float)local_88._0_4_ * local_c8._4_4_ + fStack_94 * local_d8._4_4_ + (float)local_b8 * local_e8._4_4_), fVar24 * ((float)local_238 +(float)local_208._0_4_ * (float)local_248 + local_218 * (float)local_258 + (float)local_228 * (float)local_268) + local_1c8 *((float)local_1b8 +(float)local_188._0_4_ * (float)local_1d8 + local_198 * (float)local_1e8 + (float)local_1a8 * (float)local_1f8) + local_148 *((float)local_138 +(float)local_108._0_4_ * (float)local_158 + local_118 * (float)local_168 + (float)local_128 * (float)local_178) + local_f8 *((float)local_a8 +(float)local_88._0_4_ * (float)local_c8 + local_98 * (float)local_d8 + (float)local_b8 * (float)local_e8));
							*(float)((long)&(local_2c8.obj).klass + lVar20 * 4) = local_2b8 * fVar24 + local_2b4 * local_1c8 + local_2b0 * local_148 + local_2ac * local_f8;
							uVar11 = local_2a8.boneIndex0;
							__this_01 = local_278;
							if (local_2c0 == null) goto label_05c1c2eb;
							if (*(uint)&local_2c0[1].monitor <= uVar11) break;
							bone = *(int)((long)&local_2c0[2].klass + (long)(int)uVar11 * 4);
							pSVar7 = local_278.Distances;
							if (bone < 0) {
								fVar24 = 0.0;
								pIVar19 = local_280;
								pUVar9 = local_270;
							}
							else {
								pUVar8 = local_278.Positions;
								if (pUVar8 == null) goto label_05c1c2eb;
								if ((uint)pUVar8.Length <= uVar22) break;
								position.z = *(float)((long)pUVar8.m_Items + lVar20 * 4 + -0x20);
								position._0_8_ = *(ulong)((long)pUVar8.m_Items + lVar20 * 4 + -0x28);
								fVar24 = local_288.VertexDistance(position, bone);
								pIVar19 = local_280;
								pUVar9 = local_270;
							}
							local_280 = pIVar19;
							local_270 = pUVar9;
							if (pSVar7 == null) goto label_05c1c2eb;
							if ((uint)pSVar7.Length <= uVar22) break;
							pSVar7[uVar22] = fVar24;
							pSVar7 = __this_01.Distances;
							if (pSVar7 == null) goto label_05c1c2eb;
							if ((uint)pSVar7.Length <= uVar22) break;
							fVar24 = __this_01.Maximum;
							if (fVar24 <= pSVar7[uVar22]) {
								fVar24 = pSVar7[uVar22];
							}
							__this_01.Maximum = fVar24;
							uVar22 = uVar22 + 1;
							lVar20 = lVar20 + 3;
							if ((long)(int)pUVar14.Length <= (long)uVar22) {
								return __this_01;
							}
						}
					}
	label_05c1c2fa: ;
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05c1c2eb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004397")]
	[Address(RVA = "0x5B1C330", Offset = "0x5B1B330", VA = "0x5B1C330")]
	private void SetGrowthCoordinates(Mesh mesh, Measurement measurement, float maximum)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$SetGrowthCoordinates): clean
		ulong uVar1;
		BaseShifter __this_00;
		Renderer __this_01;
		Single[] pSVar2;
		ulong uVar3;
		Vector3[] pUVar4;
		Vector2 UVar5;
		Vector2 UVar6;
		Vector2 UVar7;
		Transform __this_02;
		Vector2[] value;
		Vector2[] value_00;
		uint length;
		ulong uVar8;
		long lVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		float local_d8;
		float fStack_d4;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_68;
		float fStack_64;
		Bounds local_48;

		__this_00 = this._shifter;
		if (__this_00 != null) {
			__this_02 = __this_00.transform;
			__this_01 = (Renderer)this._body;
			if (((__this_01 != null) &&(local_48 = __this_01.bounds, measurement != null)) &&(pSVar2 = measurement.Distances, pSVar2 != null)) {
				uVar3 = pSVar2.Length;
				length = (uint32_t)uVar3;
				value = (Vector2[])new Vector2[length];
				value_00 = (Vector2[])new Vector2[length];
				if (0 < (int)length) {
					if (value == null) {
						pUVar4 = measurement.Positions;
						if ((pUVar4 != null) &&(((int)pUVar4.Length == 0 ||((pSVar2 = measurement.Distances, pSVar2 != null &&((int)pSVar2.Length == 0)))))) goto label_05c1c637;
						goto label_05c1c62c;
					}
					if (__this_02 == null) {
						pUVar4 = measurement.Positions;
						if (pUVar4 != null) {
							if ((int)pUVar4.Length != 0) {
								pSVar2 = measurement.Distances;
								if (pSVar2 == null) goto label_05c1c62c;
								if (((int)pSVar2.Length != 0) && ((int)value.Length != 0)) {
									UVar6.y = 0.0;
									UVar6.x = pSVar2[0] / maximum;
									value[0] = UVar6;
									throw new NullReferenceException();
								}
							}
	label_05c1c637: ;
							throw new IndexOutOfRangeException();
						}
						goto label_05c1c62c;
					}
					fVar10 = 3.0 / maximum;
					local_d8 = local_48.m_Center.x;
					fStack_d4 = local_48.m_Center.y;
					lVar9 = 10;
					uVar8 = 0;
					do {
						pUVar4 = measurement.Positions;
						if (pUVar4 == null) goto label_05c1c62c;
						if ((uint)pUVar4.Length <= uVar8) goto label_05c1c637;
						pSVar2 = measurement.Distances;
						if (pSVar2 == null) goto label_05c1c62c;
						if (((uint)pSVar2.Length <= uVar8) || ((uint)value.Length <= uVar8)) goto label_05c1c637;
						uVar1 = *(ulong)((long)pUVar4.m_Items + lVar9 * 4 + -0x28);
						fVar11 = *(float)((long)pUVar4.m_Items + lVar9 * 4 + -0x20);
						UVar5.y = 0.0;
						UVar5.x = pSVar2[uVar8] / maximum;
						value[uVar8] = UVar5;
						UVar14 = __this_02.right;
						UVar15 = __this_02.forward;
						UVar16 = __this_02.up;
						if (value_00 == null) goto label_05c1c62c;
						if ((uint)value_00.Length <= uVar8) goto label_05c1c637;
						local_68 = (float)uVar1;
						fStack_64 = (float)((ulong)uVar1 >> 0x20);
						fVar11 = (fVar11 - local_48.m_Center.z) * fVar10;
						fVar12 = (local_68 - local_d8) * fVar10;
						fVar13 = (fStack_64 - fStack_d4) * fVar10;
						local_a8 = UVar14.x;
						fStack_a4 = UVar14.y;
						local_98 = UVar15.x;
						fStack_94 = UVar15.y;
						UVar7.y = UVar16.z * fVar11 + UVar16.y * fVar13 + UVar16.x * fVar12;
						UVar7.x =(local_98 * fVar12 + fStack_94 * fVar13 + UVar15.z * fVar11) * 0.6 + fVar13 * fStack_a4 + fVar12 * local_a8 + UVar14.z * fVar11;
						value_00[uVar8] = UVar7;
						uVar8 = uVar8 + 1;
						lVar9 = lVar9 + 3;
					} while ((uVar3 & 0xffffffff) != uVar8);
				}
				if (mesh != null) {
					mesh.uv2 = value;
					mesh.uv3 = value_00;
					return;
				}
			}
		}
	label_05c1c62c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004398")]
	[Address(RVA = "0x5B1A2F0", Offset = "0x5B192F0", VA = "0x5B1A2F0")]
	private void AddLayers(List<SkinnedMeshRenderer> renderers)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$AddLayers): 23 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		int iVar4;
		List<Object> __this_00;
		Object[] pUVar5;
		object pIVar6;
		MethodInfo method_00;
		SkinnedMeshRenderer pUVar7;
		Mesh pUVar8;
		Il2CppClass pIVar9;
		Object __this_01;
		String pSVar10;
		Transform[] bones;
		MethodInfo pMVar11;
		object targetAddress;
		uint index;
		Il2CppClass* targetAddress_00;
		float local_44;

		if (renderers == null) {
	label_05c1a6a5: ;
			throw new NullReferenceException();
		}
		pIVar6 = new Mesh[renderers._size];
		method_00 = (MethodInfo)new ShifterGrowthEffect.Measurement[renderers._size];
		if (0 < renderers._size) {
			if (pIVar6 == null) {
				pUVar7 = renderers.get_Item(0);
				if (pUVar7 != null) {
					pUVar8 = pUVar7.sharedMesh;
					Object.Instantiate<Mesh>((object)pUVar8);
					throw new NullReferenceException();
				}
				goto label_05c1a6a5;
			}
			targetAddress = pIVar6 + 2;
			targetAddress_00 = &method_00.klass;
			index = 0;
			local_44 = 0.0001;
			do {
				pUVar7 = renderers.get_Item(index);
				if (pUVar7 == null) goto label_05c1a6a5;
				pUVar8 = pUVar7.sharedMesh;
				pIVar9 = (Il2CppClass)Object.Instantiate<Mesh>((object)pUVar8);
				if (*(uint)&pIVar6[1].monitor <= index) goto label_05c1a687;
				targetAddress.klass = pIVar9;
				if (*(uint)&pIVar6[1].monitor <= index) goto label_05c1a687;
				pIVar9 = targetAddress.klass;
				pUVar7 = renderers.get_Item(index);
				if (pUVar7 == null) goto label_05c1a6a5;
				__this_01 = (Object)pUVar7.sharedMesh;
				if (__this_01 == null) goto label_05c1a6a5;
				pSVar10 = __this_01.name;
				pSVar10 = String.Concat(pSVar10, " growth");
				if (pIVar9 == null) goto label_05c1a6a5;
				pIVar9.name = pSVar10;
				pMVar11 = MethodInfo_System_Collections_Generic_List_Object_Add;
				if (*(uint)&pIVar6[1].monitor <= index) goto label_05c1a687;
				__this_00 = this._created;
				if (__this_00 == null) goto label_05c1a6a5;
				pIVar9 = targetAddress.klass;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = __this_00._items;
				if (pUVar5 == null) goto label_05c1a6a5;
				uVar3 = __this_00._size;
				if (uVar3 < (uint)pUVar5.Length) {
					pMVar11 = (MethodInfo)(ulong)(uVar3 + 1);
					__this_00._size = uVar3 + 1;
					pUVar5[(int)uVar3] = (Object)pIVar9;
				}
				else {
					__this_00.AddWithResize((object)pIVar9);
				}
				if (*(uint)&pIVar6[1].monitor <= index) goto label_05c1a687;
				pIVar9 = targetAddress.klass;
				pUVar7 = renderers.get_Item(index);
				if (pUVar7 == null) goto label_05c1a6a5;
				bones = pUVar7.bones;
				pIVar9 = (Il2CppClass)this.Measure((Mesh)pIVar9, bones);
				if (method_00 == null) goto label_05c1a6a5;
				if (*(uint)&method_00.name <= index) goto label_05c1a687;
				*targetAddress_00 = pIVar9;
				if (*(uint)&method_00.name <= index) goto label_05c1a687;
				if (*targetAddress_00 == null) goto label_05c1a6a5;
				fVar2 = *(float)&((*targetAddress_00)._1).byval_arg.data;
				if (local_44 <= fVar2) {
					local_44 = fVar2;
				}
				index = index + 1;
				iVar4 = renderers._size;
				targetAddress_00 = targetAddress_00 + 1;
				targetAddress = (object)&targetAddress.monitor;
			} while ((int)index < iVar4);
			if (0 < iVar4) {
				pMVar11 = null;
				do {
					if (((MethodInfo)(ulong)*(uint)&pIVar6[1].monitor <= pMVar11) ||((MethodInfo)(ulong)*(uint)&method_00.name <= pMVar11)) {
	label_05c1a687: ;
						throw new IndexOutOfRangeException();
					}
					this.SetGrowthCoordinates((Mesh)(&pIVar6[2].klass)[(long)pMVar11], (ShifterGrowthEffect.Measurement)(&method_00.klass)[(long)pMVar11], local_44);
					pUVar7 = renderers.get_Item((int32_t)pMVar11);
					if ((MethodInfo)(ulong)*(uint)&pIVar6[1].monitor <= pMVar11) goto label_05c1a687;
					this.AddLayer(pUVar7, (Mesh)(&pIVar6[2].klass)[(long)pMVar11]);
					pMVar11 = (MethodInfo)((long)&pMVar11.methodPointer + 1);
				} while ((long)pMVar11 < (long)renderers._size);
			}
		}
		return;
	}

	[Token(Token = "0x6004399")]
	[Address(RVA = "0x5B1C670", Offset = "0x5B1B670", VA = "0x5B1C670")]
	private void AddLayer(SkinnedMeshRenderer renderer, Mesh mesh)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$AddLayer): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Material pUVar3;
		Shader[] pUVar4;
		List<Object> __this_00;
		Object[] pUVar5;
		List<ShifterGrowthEffect.Layer> __this_01;
		ShifterGrowthEffect.Layer[] pCVar6;
		bool bVar8;
		Mesh originalMesh;
		Material[] pUVar9;
		ShifterGrowthEffect.Layer __this_02;
		Shader pUVar10;
		Material __this_03;
		String pSVar11;
		object pIVar12;
		ulong uVar13;

		if (renderer != null) {
			originalMesh = renderer.sharedMesh;
			pUVar9 = renderer.sharedMaterials;
			__this_02 = new ShifterGrowthEffect.Layer(renderer, originalMesh, pUVar9);
			if ((__this_02 != null) &&(pUVar9 = __this_02.GrowthMaterials, pUVar9 != null)) {
				uVar13 = 0;
				do {
					if ((long)(int)pUVar9.Length <= (long)uVar13) {
						renderer.sharedMesh = mesh;
						renderer.sharedMaterials = __this_02.GrowthMaterials ;
						__this_01 = this._layers;
						if (__this_01 != null) {
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pCVar6 = __this_01._items;
							if (pCVar6 != null) {
								uVar2 = __this_01._size;
								if (uVar2 < (uint)pCVar6.Length) {
									__this_01._size = uVar2 + 1;
									pCVar6[(int)uVar2] = __this_02;
									return;
								}
								__this_01.AddWithResize((object)__this_02);
								return;
							}
						}
						break;
					}
					pUVar9 = __this_02.OriginalMaterials;
					if (pUVar9 == null) break;
					if ((uint)pUVar9.Length <= uVar13) goto label_05c1c9d5;
					pUVar3 = pUVar9[uVar13];
					bVar8 = ((Object)pUVar3 == null);
					if (!bVar8) {
						if (pUVar3 == null) break;
						pUVar4 = __this_02.OriginalShaders;
						pUVar10 = pUVar3.shader;
						if (pUVar4 == null) break;
						if ((uint)pUVar4.Length <= uVar13) {
	label_05c1c9d5: ;
							throw new IndexOutOfRangeException();
						}
						pUVar4[uVar13] = pUVar10;
						pUVar9 = __this_02.GrowthMaterials;
						__this_03 = new Material(pUVar3);
						if (__this_03 == null) break;
						__this_03.shader = this._shader;
						pSVar11 = pUVar3.name;
						pSVar11 = String.Concat(pSVar11, " growth");
						__this_03.name = pSVar11;
						if (pUVar9 == null) break;
						pIVar12 = il2cpp_vm_Object_IsInst((object)__this_03, (((pUVar9.obj).klass)._1).element_class);
						if (pIVar12 == null) {
							pIVar12 = new ArrayTypeMismatchException();
							throw pIVar12;
						}
						if ((uint)pUVar9.Length <= uVar13) goto label_05c1c9d5;
						pUVar9[uVar13] = __this_03;
						pUVar9 = __this_02.GrowthMaterials;
						if (pUVar9 == null) break;
						if ((uint)pUVar9.Length <= uVar13) goto label_05c1c9d5;
						__this_00 = this._created;
						if (__this_00 == null) break;
						pUVar3 = pUVar9[uVar13];
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar5 = __this_00._items;
						if (pUVar5 == null) break;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar5.Length) {
							__this_00._size = uVar2 + 1;
							pUVar5[(int)uVar2] = (Object)pUVar3;
						}
						else {
							__this_00.AddWithResize((object)pUVar3);
						}
					}
					uVar13 = uVar13 + 1;
					pUVar9 = __this_02.GrowthMaterials;
				} while (pUVar9 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600439A")]
	[Address(RVA = "0x5B1A6F0", Offset = "0x5B196F0", VA = "0x5B1A6F0")]
	private void CreateChunks()
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$CreateChunks): 25 lines keep C-only constructs
		int piVar1;
		ParticleSystem* targetAddress;
		uint uVar2;
		uint uVar3;
		Renderer pUVar4;
		List<Object> __this_00;
		Object[] pUVar5;
		Component __this_01;
		ParticleSystem.MinMaxCurve value;
		ParticleSystem.MinMaxCurve value_00;
		ParticleSystem.MinMaxCurve value_01;
		ParticleSystem.MinMaxCurve value_02;
		ParticleSystem.MinMaxCurve value_03;
		ParticleSystem.MinMaxCurve value_04;
		ParticleSystem.MinMaxCurve value_05;
		ParticleSystem.MinMaxCurve value_06;
		ParticleSystem.MinMaxCurve value_07;
		ParticleSystem.MinMaxGradient value_08;
		ParticleSystem.MinMaxGradient value_09;
		int value_10;
		Material source;
		Material __this_02;
		Texture value_11;
		GameObject __this_03;
		GameObject __this_04;
		Transform pUVar6;
		Transform pUVar7;
		ParticleSystem pUVar8;
		Gradient __this_05;
		GradientColorKey[] colorKeys;
		GradientAlphaKey[] alphaKeys;
		AnimationCurve curve;
		ParticleSystemRenderer __this_06;
		MethodInfo pMVar9;
		float fVar10;
		Color col;
		Color col_00;
		Vector3 UVar11;
		ParticleSystem.MainModule local_258;
		ParticleSystem.ColorOverLifetimeModule local_250;
		GradientAlphaKey local_248;
		GradientAlphaKey local_240;
		GradientAlphaKey local_238;
		GradientAlphaKey local_230;
		ParticleSystem.EmissionModule local_228;
		ParticleSystem.SizeOverLifetimeModule local_220;
		ParticleSystem.VelocityOverLifetimeModule local_218;
		ParticleSystem.ShapeModule local_210;
		GradientColorKey local_208;
		GradientColorKey local_1e8;
		byte[] local_1c8 = new byte[8];
		float fStack_1c0;
		float fStack_1bc;
		Gradient local_1b8;
		Color UStack_1b0;
		Color UStack_1a0;
		ParticleSystem.MinMaxCurve local_188;
		ParticleSystem.MinMaxCurve local_168;
		ParticleSystem.MinMaxCurve local_148;
		ParticleSystem.MinMaxCurve local_128;
		ParticleSystem.MinMaxCurve local_108;
		ParticleSystem.MinMaxCurve local_e8;
		ParticleSystem.MinMaxCurve local_c8;
		ParticleSystem.MinMaxCurve local_a8;
		ParticleSystem.MinMaxCurve local_88;
		ParticleSystem.MinMaxGradient local_68;

		if (Il2CppMethodInitialized_07547735 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem) ;
			Il2CppMethodInitialized_07547735 = true;
		}
		local_258.m_ParticleSystem =(ParticleSystem.MainModule)null;
		local_210.m_ParticleSystem =(ParticleSystem.ShapeModule)null;
		local_218.m_ParticleSystem =(ParticleSystem.VelocityOverLifetimeModule)null;
		local_250.m_ParticleSystem =(ParticleSystem.ColorOverLifetimeModule)null;
		local_220.m_ParticleSystem =(ParticleSystem.SizeOverLifetimeModule)null;
		local_228.m_ParticleSystem =(ParticleSystem.EmissionModule)null;
		pUVar4 = (Renderer)this._body;
		if (pUVar4 != null) {
			local_1c8.get_bounds(pUVar4);
			fVar10 = local_1b8._0_4_;
			source = Resources.Load<Material>("Effects/Materials/Smoke1Mat");
			__this_02 = new Material(source);
			if (__this_02 != null) {
				pMVar9 = (MethodInfo *)"Shifter flesh chunk";
				__this_02.name = "Shifter flesh chunk";
				value_11 = (Texture)this.CreateChunkTexture();
				__this_02.SetTexture("_BaseMap", value_11);
				__this_00 = this._created;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar5 = __this_00._items;
					if (pUVar5 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar5.Length) {
							__this_00._size = uVar2 + 1;
							pUVar5[(int)uVar2] = (Object)__this_02;
						}
						else {
							__this_00.AddWithResize((object)__this_02);
						}
						__this_03 = new GameObject("Shifter flesh chunks");
						__this_01 = (Component)this._body;
						if (((__this_01 != null) &&(__this_04 = __this_01.gameObject, __this_04 != null)) &&(value_10 = __this_04.layer, __this_03 != null)) {
							__this_03.layer = value_10;
							pUVar6 = __this_03.transform;
							pUVar7 = this.transform ;
							if (pUVar6 != null) {
								pUVar6.SetParent(pUVar7, false);
								pUVar6 = __this_03.transform;
								pUVar7 = this.transform;
								pUVar4 = (Renderer)this._body;
								if (((pUVar4 != null) &&(local_1c8.get_bounds(pUVar4), pUVar7 != null)) &&(UVar11.z = fStack_1c0, UVar11.x = (float)local_1c8._0_4_, UVar11.y = (float)local_1c8._4_4_, UVar11 = pUVar7.InverseTransformPoint(UVar11), pUVar6 != null)) {
									pUVar6.localPosition = UVar11;
									pUVar8 = __this_03.AddComponent<ParticleSystem>();
									targetAddress = &this._chunks;
									this._chunks = pUVar8;
									pUVar8 = this._chunks;
									if (pUVar8 != null) {
										pUVar8.Stop(true, 0);
										if (*targetAddress != null) {
											fVar10 = fVar10 + fVar10;
											local_258 = (*targetAddress).main;
											local_258.loop = true;
											local_258.playOnAwake = false ;
											local_88 = ((ParticleSystem.MinMaxCurve)0.5);
											value.m_CurveMin = local_88.m_CurveMin;
											value.m_Mode = local_88.m_Mode;
											value.m_CurveMultiplier = local_88.m_CurveMultiplier;
											value.m_CurveMax = local_88.m_CurveMax;
											value.m_ConstantMin = local_88.m_ConstantMin;
											value.m_ConstantMax = local_88.m_ConstantMax;
											local_258.startLifetime = value;
											local_a8 = ((ParticleSystem.MinMaxCurve)0.0);
											value_00.m_CurveMin = local_a8.m_CurveMin;
											value_00.m_Mode = local_a8.m_Mode;
											value_00.m_CurveMultiplier = local_a8.m_CurveMultiplier;
											value_00.m_CurveMax = local_a8.m_CurveMax;
											value_00.m_ConstantMin = local_a8.m_ConstantMin;
											value_00.m_ConstantMax = local_a8.m_ConstantMax;
											local_258.startSpeed = value_00;
											local_168.m_CurveMax = null;
											local_168.m_ConstantMin = 0.0;
											local_168.m_ConstantMax = 0.0;
											local_168.m_Mode = 0;
											local_168.m_CurveMultiplier = 0.0;
											local_168.m_CurveMin = null;
											local_168 = new ParticleSystem.MinMaxCurve(fVar10 * 0.035, fVar10 * 0.075);
											value_01.m_CurveMin = local_168.m_CurveMin;
											value_01.m_Mode = local_168.m_Mode;
											value_01.m_CurveMultiplier = local_168.m_CurveMultiplier;
											value_01.m_CurveMax = local_168.m_CurveMax;
											value_01.m_ConstantMin = local_168.m_ConstantMin;
											value_01.m_ConstantMax = local_168.m_ConstantMax;
											local_258.startSize = value_01;
											UStack_1b0.b = 0.0;
											UStack_1b0.a = 0.0;
											UStack_1a0.r = 0.0;
											UStack_1a0.g = 0.0;
											local_1b8 = null;
											UStack_1b0.r = 0.0;
											UStack_1b0.g = 0.0;
											local_1c8 = (byte[])0x0;
											fStack_1c0 = 0.0;
											fStack_1bc = 0.0;
											UStack_1a0.b = 0.0;
											UStack_1a0.a = 0.0;
											local_1c8 = new ParticleSystem.MinMaxGradient((Color)(ShifterGrowthEffect.ChunkDark), (Color)(ShifterGrowthEffect.ChunkLight));
											value_08.m_GradientMin._4_4_ = fStack_1bc;
											value_08.m_GradientMin._0_4_ = fStack_1c0;
											value_08._0_8_ = local_1c8;
											value_08.m_GradientMax = local_1b8;
											value_08.m_ColorMin.r = UStack_1b0.r;
											value_08.m_ColorMin.g = UStack_1b0.g;
											value_08.m_ColorMin.b = UStack_1b0.b;
											value_08.m_ColorMin.a = UStack_1b0.a;
											value_08.m_ColorMax.r = UStack_1a0.r;
											value_08.m_ColorMax.g = UStack_1a0.g;
											value_08.m_ColorMax.b = UStack_1a0.b;
											value_08.m_ColorMax.a = UStack_1a0.a;
											local_258.startColor = value_08;
											local_258.simulationSpace = 0 ;
											if (Il2CppMethodInitialized_0753e7f9 == false) {
												Il2CppMethodInitialized_0753e7f9 = true;
												uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
											}
											else {
												uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
											}
											if (uVar3 == 0) {
											}
											local_258.maxParticles = 0x44 ;
											if (*targetAddress != null) {
												local_210 = (*targetAddress).shape;
												local_210.shapeType = 0;
												local_210.radius = fVar10 * 0.35;
												local_210.radiusThickness = 0.0;
												if (*targetAddress != null) {
													local_218 = (*targetAddress).velocityOverLifetime;
													local_218.enabled = true;
													local_218.space = 0;
													local_c8 = ((ParticleSystem.MinMaxCurve)0.0);
													value_02.m_CurveMin = local_c8.m_CurveMin;
													value_02.m_Mode = local_c8.m_Mode;
													value_02.m_CurveMultiplier = local_c8.m_CurveMultiplier;
													value_02.m_CurveMax = local_c8.m_CurveMax;
													value_02.m_ConstantMin = local_c8.m_ConstantMin;
													value_02.m_ConstantMax = local_c8.m_ConstantMax;
													local_218.x = value_02;
													local_e8 = ((ParticleSystem.MinMaxCurve)0.0);
													value_03.m_CurveMin = local_e8.m_CurveMin;
													value_03.m_Mode = local_e8.m_Mode;
													value_03.m_CurveMultiplier = local_e8.m_CurveMultiplier;
													value_03.m_CurveMax = local_e8.m_CurveMax;
													value_03.m_ConstantMin = local_e8.m_ConstantMin;
													value_03.m_ConstantMax = local_e8.m_ConstantMax;
													local_218.y = value_03;
													local_108 = ((ParticleSystem.MinMaxCurve)0.0);
													value_04.m_CurveMin = local_108.m_CurveMin;
													value_04.m_Mode = local_108.m_Mode;
													value_04.m_CurveMultiplier = local_108.m_CurveMultiplier;
													value_04.m_CurveMax = local_108.m_CurveMax;
													value_04.m_ConstantMin = local_108.m_ConstantMin;
													value_04.m_ConstantMax = local_108.m_ConstantMax;
													local_218.z = value_04;
													local_128 = ((ParticleSystem.MinMaxCurve)fVar10 * -0.35 + fVar10 * -0.35);
													value_05.m_CurveMin = local_128.m_CurveMin;
													value_05.m_Mode = local_128.m_Mode;
													value_05.m_CurveMultiplier = local_128.m_CurveMultiplier;
													value_05.m_CurveMax = local_128.m_CurveMax;
													value_05.m_ConstantMin = local_128.m_ConstantMin;
													value_05.m_ConstantMax = local_128.m_ConstantMax;
													local_218.radial = value_05;
													if (*targetAddress != null) {
														local_250 = (*targetAddress).colorOverLifetime;
														local_250.enabled = true;
														__this_05 = new Gradient();
														colorKeys = (GradientColorKey[])new GradientColorKey[2];
														local_1e8.color.r = 0.0;
														local_1e8.color.g = 0.0;
														local_1e8.color.b = 0.0;
														local_1e8.color.a = 0.0;
														local_1e8.time = 0.0;
														col.b = 1.0;
														col.a = 1.0;
														col.r = 1.0;
														col.g = 1.0;
														local_1e8 = new GradientColorKey(col, 0.0);
														if (colorKeys != null) {
															if ((int)colorKeys.Length != 0) {
																colorKeys[0].time = local_1e8.time;
																colorKeys[0].color.r = local_1e8.color.r;
																colorKeys[0].color.g = local_1e8.color.g;
																colorKeys[0].color.b = local_1e8.color.b;
																colorKeys[0].color.a = local_1e8.color.a;
																local_208.color.r = 0.0;
																local_208.color.g = 0.0;
																local_208.color.b = 0.0;
																local_208.color.a = 0.0;
																local_208.time = 0.0;
																col_00.b = 1.0;
																col_00.a = 1.0;
																col_00.r = 1.0;
																col_00.g = 1.0;
																local_208 = new GradientColorKey(col_00, 1.0);
																if ((colorKeys.Length & 0xfffffffe) != 0) {
																	colorKeys[1].time = local_208.time;
																	colorKeys[1].color.r = local_208.color.r;
																	colorKeys[1].color.g = local_208.color.g;
																	colorKeys[1].color.b = local_208.color.b;
																	colorKeys[1].color.a = local_208.color.a;
																	alphaKeys = (GradientAlphaKey[])new GradientAlphaKey[4];
																	local_230.alpha = 0.0;
																	local_230.time = 0.0;
																	local_230 = new GradientAlphaKey(0.0, 0.0);
																	if (alphaKeys == null) goto label_05c1b1e9;
																	if ((int)alphaKeys.Length != 0) {
																		alphaKeys[0] = local_230;
																		local_238.alpha = 0.0;
																		local_238.time = 0.0;
																		local_238 = new GradientAlphaKey(1.0, 0.2);
																		if ((alphaKeys.Length & 0xfffffffe) != 0) {
																			alphaKeys[1] = local_238;
																			local_240.alpha = 0.0;
																			local_240.time = 0.0;
																			local_240 = new GradientAlphaKey(1.0, 0.75);
																			if (2 < (uint)alphaKeys.Length) {
																				alphaKeys[2] = local_240;
																				local_248.alpha = 0.0;
																				local_248.time = 0.0;
																				local_248 = new GradientAlphaKey(0.0, 1.0);
																				if ((alphaKeys.Length & 0xfffffffc) != 0) {
																					alphaKeys[3] = local_248;
																					if (__this_05 != null) {
																						__this_05.SetKeys(colorKeys, alphaKeys);
																						local_68 = ((ParticleSystem.MinMaxGradient)__this_05);
																						value_09.m_GradientMin = local_68.m_GradientMin;
																						value_09.m_Mode = local_68.m_Mode;
																						value_09._4_4_ = local_68._4_4_;
																						value_09.m_GradientMax = local_68.m_GradientMax;
																						value_09.m_ColorMin.r = local_68.m_ColorMin.r;
																						value_09.m_ColorMin.g = local_68.m_ColorMin.g;
																						value_09.m_ColorMin.b = local_68.m_ColorMin.b;
																						value_09.m_ColorMin.a = local_68.m_ColorMin.a;
																						value_09.m_ColorMax.r = local_68.m_ColorMax.r;
																						value_09.m_ColorMax.g = local_68.m_ColorMax.g;
																						value_09.m_ColorMax.b = local_68.m_ColorMax.b;
																						value_09.m_ColorMax.a = local_68.m_ColorMax.a;
																						local_250.color = value_09;
																						if (*targetAddress != null) {
																							local_220 = (*targetAddress).sizeOverLifetime;
																							local_220.enabled = true;
																							curve = AnimationCurve.Linear(0.0, 1.0, 1.0, 0.35);
																							local_188.m_CurveMax = null;
																							local_188.m_ConstantMin = 0.0;
																							local_188.m_ConstantMax = 0.0;
																							local_188.m_Mode = 0;
																							local_188.m_CurveMultiplier = 0.0;
																							local_188.m_CurveMin = null;
																							local_188 = new ParticleSystem.MinMaxCurve(1.0, curve);
																							value_06.m_CurveMin = local_188.m_CurveMin;
																							value_06.m_Mode = local_188.m_Mode;
																							value_06.m_CurveMultiplier = local_188.m_CurveMultiplier;
																							value_06.m_CurveMax = local_188.m_CurveMax;
																							value_06.m_ConstantMin = local_188.m_ConstantMin;
																							value_06.m_ConstantMax = local_188.m_ConstantMax;
																							local_220.size = value_06;
																							if (*targetAddress != null) {
																								local_228 = (*targetAddress).emission;
																								local_148 = ((ParticleSystem.MinMaxCurve)0.0);
																								value_07.m_CurveMin = local_148.m_CurveMin;
																								value_07.m_Mode = local_148.m_Mode;
																								value_07.m_CurveMultiplier = local_148.m_CurveMultiplier;
																								value_07.m_CurveMax = local_148.m_CurveMax;
																								value_07.m_ConstantMin = local_148.m_ConstantMin;
																								value_07.m_ConstantMax = local_148.m_ConstantMax;
																								local_228.rateOverTime = value_07;
																								__this_06 = __this_03.GetComponent<ParticleSystemRenderer>();
																								if (__this_06 != null) {
																									__this_06.sharedMaterial = __this_02;
																									__this_06.renderMode = 1;
																									__this_06.velocityScale = 0.04;
																									__this_06.lengthScale = 1.15;
																									__this_06.shadowCastingMode = 0;
																									if (*targetAddress != null) {
																										(*targetAddress).Play(false);
																										return;
																									}
																								}
																							}
																						}
																					}
																					goto label_05c1b1e9;
																				}
																			}
																		}
																	}
																}
															}
															throw new IndexOutOfRangeException();
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
	label_05c1b1e9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600439B")]
	[Address(RVA = "0x5B1C9F0", Offset = "0x5B1B9F0", VA = "0x5B1C9F0")]
	private Texture2D CreateChunkTexture()
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$CreateChunkTexture): 2 lines keep C-only constructs
		int piVar1;
		Vector2 UVar2;
		uint uVar3;
		uint uVar4;
		List<Object> __this_00;
		Object[] pUVar5;
		Texture __this_01;
		int y;
		int x;
		float fVar7;
		float fVar8;
		Color color;

		y = 0;
		__this_01 = new Texture2D(0x20, 0x20, 4, false);
		if (__this_01 != null) {
			__this_01.wrapMode = 1;
			__this_01.name = "Shifter flesh chunk";
			do {
				x = 0;
				do {
					UVar2 = (Vector2.oneVector);
					if (Il2CppMethodInitialized_0753e7b5 == false) {
						Il2CppMethodInitialized_0753e7b5 = true;
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					fVar7 = ((float)x / 31.0 + (float)x / 31.0) - UVar2.x;
					fVar8 = ((float)y / 31.0 + (float)y / 31.0) - UVar2.y;
					fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
					if (fVar7 < 0.0) {
						fVar7 = sqrtf(fVar7);
					}
					else {
						fVar7 = SQRT(fVar7);
					}
					fVar8 = 1.0;
					if (fVar7 <= 1.0) {
						fVar8 = fVar7;
					}
					fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
					fVar7 = fVar8 * 3.0 * fVar8 - (fVar8 + fVar8) * fVar8 * fVar8;
					fVar7 = 1.0 - ((1.0 - fVar7) * 0.55 + fVar7);
					color.r = fVar7 * -0.35 + 1.0;
					color.a = fVar7;
					color.b = color.r;
					color.g = color.r;
					__this_01.SetPixel(x, y, color);
					x = x + 1;
				} while (x != 0x20);
				y = y + 1;
			} while (y != 0x20);
			__this_01.Apply(false, true);
			__this_00 = this._created;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = __this_00._items;
				if (pUVar5 != null) {
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pUVar5.Length) {
						__this_00._size = uVar4 + 1;
						pUVar5[(int)uVar4] = (Object)__this_01;
					}
					else {
						__this_00.AddWithResize((object)__this_01);
					}
					return (Texture2D)__this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600439C")]
	[Address(RVA = "0x5B1B200", Offset = "0x5B1A200", VA = "0x5B1B200")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$LateUpdate): 13 lines keep C-only constructs
		BaseShifter pCVar1;
		List<ShifterGrowthEffect.Layer> __this_00;
		MaterialPropertyBlock pUVar2;
		Renderer __this_01;
		ParticleSystem pUVar3;
		ShifterGrowthEffect.Layer pCVar4;
		bool bVar5;
		float fVar6;
		float fVar8;
		byte[] auVar7 = new byte[16];
		byte[] auVar9 = new byte[16];
		float fVar10;
		float local_8c;
		byte[] local_88 = new byte[8];
		ShifterGrowthEffect.Layer local_78;
		byte[] local_68 = new byte[16];
		ShifterGrowthEffect.Layer local_58;
		ParticleSystem.EmissionModule local_50;
		float local_48;

		local_88 = (byte[])0x0;
		local_78 = null;
		if (this._finished != false) {
			return;
		}
		local_48 = Time.time;
		local_48 = local_48 - this._startTime;
		if (local_48 < 3.8) {
			pCVar1 = this._shifter;
			bVar5 = ((Object)pCVar1 == null);
			if (!bVar5) {
				pCVar1 = this._shifter;
				if (pCVar1 != null) {
					if (pCVar1.Dead != false) goto label_05c1b2ea;
					fVar6 = ShifterGrowthEffect.GrowthProgress(local_48);
					pCVar1 = this._shifter;
					if (pCVar1 != null) {
						local_8c = 0.0;
						if (pCVar1.EffectsEnabled != false) {
							local_8c = 1.0;
						}
						__this_00 = this._layers;
						if (__this_00 != null) {
							local_68.GetEnumerator((List<object>)__this_00);
							local_78 = local_58;
							local_88 = (byte[])local_68._0_8_;
							local_68._0_8_ = null;
							local_68._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_88;
							while (true) {
								bVar5 = local_88.MoveNext();
								pCVar4 = local_78;
								if (!(bVar5)) break;
								this.SyncMaterials(local_78);
								if (pCVar4 == null) {
									throw new NullReferenceException();
								}
								pUVar2 = pCVar4.Properties;
								if (pUVar2 == null) {
									throw new NullReferenceException();
								}
								pUVar2.SetFloat(ShifterGrowthEffect.Growth, fVar6 * 1.03);
								pUVar2 = pCVar4.Properties;
								if (pUVar2 == null) {
									throw new NullReferenceException();
								}
								pUVar2.SetFloat(ShifterGrowthEffect.TissueIntensity, local_8c);
								__this_01 = (Renderer)pCVar4.Renderer;
								if (__this_01 == null) {
									throw new NullReferenceException();
								}
								__this_01.SetPropertyBlock(pCVar4.Properties);
							}
							local_88.Dispose();
							pUVar3 = this._chunks;
							bVar5 = ((Object)pUVar3 != null);
							if (bVar5) {
								pUVar3 = this._chunks;
								if (pUVar3 == null) goto label_05c1b5ba;
								local_50 = pUVar3.emission;
								auVar7._0_4_ = local_48 + -0.2;
								auVar7._4_4_ = local_48 + -1.4;
								auVar7._8_4_ = local_48 + 0.0;
								auVar7._12_4_ = local_48 + 0.0;
								auVar7 = divps(auVar7, _DAT_01007480);
								auVar9 = minps(_DAT_01005870, auVar7);
								fVar6 = (float)(-(uint)(0.0 <= auVar7._0_4_) & auVar9._0_4_);
								fVar8 = (float)(-(uint)(0.0 <= auVar7._4_4_) & auVar9._4_4_);
								fVar10 = fVar6 * 3.0 * fVar6 - fVar6 * (fVar6 + fVar6) * fVar6;
								fVar6 = fVar8 * fVar8 * 3.0 - fVar8 * 2.0 * fVar8 * fVar8;
								local_50.rateOverTimeMultiplier = ((1.0 - fVar10) * 0.0 + fVar10) * 120.0 * (1.0 - ((1.0 - fVar6) * 0.0 + fVar6));
							}
							return;
						}
					}
				}
	label_05c1b5ba: ;
				throw new NullReferenceException();
			}
		}
	label_05c1b2ea: ;
		this.Finish();
		Object.Destroy((Object)this);
		return;
	}

	[Token(Token = "0x600439D")]
	[Address(RVA = "0x5B1D130", Offset = "0x5B1C130", VA = "0x5B1D130")]
	private static float GrowthProgress(float time)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$GrowthProgress): clean
		float fVar1;
		float fVar2;
		float fVar3;

		if (2.6 <= time) {
			fVar2 = time + -2.6;
			fVar3 = 1.0;
			if (fVar2 <= 1.0) {
				fVar3 = fVar2;
			}
			fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
			if (((typeof(ShifterGrowthEffect))._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar1 = fVar3 * fVar3;
			fVar2 = fVar3 * fVar1;
			return (fVar2 - fVar1) * 0.0 +(fVar1 * 3.0 - (fVar2 + fVar2)) +(((fVar2 + fVar2) - fVar1 * 3.0) + 1.0) * 0.75 + (fVar3 + (fVar2 - fVar1 * 2.0)) * 0.4;
		}
		fVar2 = time / 2.6;
		fVar3 = 1.0;
		if (fVar2 <= 1.0) {
			fVar3 = fVar2;
		}
		fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
		if (((typeof(ShifterGrowthEffect))._2).cctor_finished_or_no_cctor == 0) {
		}
		fVar2 = fVar3 * fVar3;
		fVar1 = fVar2 * fVar3;
		return (fVar2 * 3.0 - (fVar1 + fVar1)) * 0.75 +(((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * 0.0 + (fVar3 + (fVar1 - (fVar2 + fVar2))) * 0.0 +(fVar1 - fVar2) * 1.04;
	}

	[Token(Token = "0x600439E")]
	[Address(RVA = "0x5B1D5A0", Offset = "0x5B1C5A0", VA = "0x5B1D5A0")]
	private static float Hermite(float t, float start, float startTangent, float end, float endTangent)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$Hermite): clean
		float fVar1;
		float fVar2;

		fVar2 = t * t;
		fVar1 = fVar2 * t;
		return (fVar1 - fVar2) * endTangent +(fVar2 * 3.0 - (fVar1 + fVar1)) * end +(((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * start + (t + (fVar1 - fVar2 * 2.0)) * startTangent;
	}

	[Token(Token = "0x600439F")]
	[Address(RVA = "0x5B1D2F0", Offset = "0x5B1C2F0", VA = "0x5B1D2F0")]
	private void SyncMaterials(Layer layer)
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$SyncMaterials): 2 lines keep C-only constructs
		int iVar1;
		Renderer pUVar2;
		Material[] pUVar3;
		Material pUVar4;
		Object y;
		Shader[] pUVar5;
		bool bVar6;
		bool bVar7;
		Material __this_00;
		Object x;
		object pIVar8;
		int iVar9;
		List<Material> __this_01;
		ulong uVar10;

		if (Il2CppMethodInitialized_07547739 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_07547739 = true;
		}
		if ((layer != null) &&(pUVar2 = (Renderer)layer.Renderer, pUVar2 != null)) {
			pUVar2.GetSharedMaterials(this._materialBuffer);
			__this_01 = this._materialBuffer;
			if (__this_01 != null) {
				uVar10 = 0;
				bVar7 = false;
				do {
					pUVar3 = layer.GrowthMaterials;
					if (pUVar3 == null) break;
					iVar1 = __this_01._size;
					iVar9 = (int)pUVar3.Length;
					if (iVar1 < iVar9) {
						iVar9 = iVar1;
					}
					if ((long)iVar9 <= (long)uVar10) {
						if (!bVar7) {
							return;
						}
						pUVar2 = (Renderer)layer.Renderer;
						if (pUVar2 != null) {
							pUVar2.sharedMaterials = pUVar3;
							return;
						}
						break;
					}
					__this_00 = __this_01.get_Item((int32_t)uVar10);
					pUVar3 = layer.GrowthMaterials;
					if (pUVar3 == null) break;
					if ((uint)pUVar3.Length <= uVar10) goto label_05c1d58c;
					pUVar4 = pUVar3[uVar10];
					bVar6 = ((Object)__this_00 == (Object)pUVar4) ;
					if (!bVar6) {
						bVar6 = ((Object)__this_00 == null);
						if (!bVar6) {
							pUVar3 = layer.GrowthMaterials;
							if (pUVar3 == null) break;
							if ((uint)pUVar3.Length <= uVar10) goto label_05c1d58c;
							pUVar4 = pUVar3[uVar10];
							bVar6 = ((Object)pUVar4 == null);
							if (!bVar6) {
								if (__this_00 == null) break;
								x = (Object)__this_00.shader;
								y = (Object)this._shader;
								bVar7 = (x == y);
								if (bVar7) {
									pUVar5 = layer.OriginalShaders;
									if (pUVar5 == null) break;
									if ((uint)pUVar5.Length <= uVar10) goto label_05c1d58c;
									__this_00.shader = pUVar5[uVar10];
								}
								pUVar3 = layer.OriginalMaterials;
								if (pUVar3 == null) break;
								pIVar8 = il2cpp_vm_Object_IsInst((object)__this_00, (((pUVar3.obj).klass)._1).element_class);
								if (pIVar8 == null) {
									pIVar8 = new ArrayTypeMismatchException();
									throw pIVar8;
								}
								if ((uint)pUVar3.Length <= uVar10) {
	label_05c1d58c: ;
									throw new IndexOutOfRangeException();
								}
								pUVar3[uVar10] = __this_00;
								pUVar3 = layer.GrowthMaterials;
								if (pUVar3 == null) break;
								if ((uint)pUVar3.Length <= uVar10) goto label_05c1d58c;
								if (pUVar3[uVar10] == null) break;
								(pUVar3[uVar10]).CopyPropertiesFromMaterial(__this_00);
								bVar7 = true;
							}
						}
					}
					uVar10 = uVar10 + 1;
					__this_01 = this._materialBuffer;
				} while (__this_01 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043A0")]
	[Address(RVA = "0x5B1CCC0", Offset = "0x5B1BCC0", VA = "0x5B1CCC0")]
	private void Finish()
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$Finish): 10 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<ShifterGrowthEffect.Layer> pSVar3;
		SkinnedMeshRenderer __this_00;
		Renderer pUVar4;
		ParticleSystem pUVar5;
		List<Object> pSVar6;
		ShifterGrowthEffect.Layer pCVar7;
		bool bVar8;
		Object pUVar9;
		byte[] local_80 = new byte[16];
		ShifterGrowthEffect.Layer local_70;
		byte[] local_68 = new byte[8];
		ShifterGrowthEffect.Layer local_58;
		byte[] local_48 = new byte[8];
		ShifterGrowthEffect.Layer local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		if (this._finished != false) {
			return;
		}
		this._finished = true;
		pSVar3 = this._layers;
		if (pSVar3 == null) goto label_05c1d05c;
		local_80.GetEnumerator((List<object>)pSVar3);
		local_38 = local_70;
		local_48 = (byte[])local_80._0_8_;
		local_80._0_8_ = null;
		local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
		while (true) {
			bVar8 = local_48.MoveNext();
			pCVar7 = local_38;
			if (!(bVar8)) break;
			if (local_38 == null) {
				throw new NullReferenceException();
			}
			pUVar9 = (Object)local_38.Renderer;
			bVar8 = (pUVar9 == null);
			if (!bVar8) {
				this.SyncMaterials(pCVar7);
				__this_00 = pCVar7.Renderer;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.sharedMesh = pCVar7.OriginalMesh;
				pUVar4 = (Renderer)pCVar7.Renderer;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4.sharedMaterials = pCVar7.OriginalMaterials;
				pUVar4 = (Renderer)pCVar7.Renderer;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4.SetPropertyBlock(null);
			}
		}
		local_48.Dispose();
		pUVar5 = this._chunks;
		bVar8 = ((Object)pUVar5 != null);
		if (bVar8) {
			pUVar5 = this._chunks;
			if (pUVar5 == null) goto label_05c1d05c;
			pUVar5.Stop(true, 1);
			pUVar5 = this._chunks;
			if (pUVar5 == null) goto label_05c1d05c;
			pUVar9 = (Object)pUVar5.gameObject;
			Object.Destroy(pUVar9, 0.5);
		}
		pSVar6 = this._created;
		if (pSVar6 != null) {
			local_80.GetEnumerator((List<object>)pSVar6);
			local_58 = local_70;
			local_68 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			while (true) {
				bVar8 = local_68.MoveNext();
				pCVar7 = local_58;
				if (!(bVar8)) break;
				bVar8 = ((Object)pCVar7 != null);
				if (bVar8) {
					Object.Destroy((Object)pCVar7);
				}
			}
			local_68.Dispose();
			pSVar3 = this._layers;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar3._size;
				pSVar3._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar3._items, 0, iVar2);
				}
				pSVar6 = this._created;
				if (pSVar6 != null) {
					piVar1 = &pSVar6._version;
					*piVar1 = *piVar1 + 1;
					iVar2 = pSVar6._size;
					pSVar6._size = 0;
					if (iVar2 < 1) {
						return;
					}
					Array.Clear((Array)pSVar6._items, 0, iVar2);
					return;
				}
			}
		}
	label_05c1d05c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043A1")]
	[Address(RVA = "0x5B1D610", Offset = "0x5B1C610", VA = "0x5B1D610")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$OnDestroy): clean
		this.Finish();
		return;
	}

	[Token(Token = "0x60043A2")]
	[Address(RVA = "0x5B1D620", Offset = "0x5B1C620", VA = "0x5B1D620")]
	public ShifterGrowthEffect()
	{
		// Lifted from source/cpp/Characters/ShifterGrowthEffect.c (Characters.ShifterGrowthEffect$$.ctor): clean
		List<ShifterGrowthEffect.Layer> __this_00;
		List<Object> __this_01;
		List<Material> __this_02;
		List<Transform> __this_03;
		Dictionary<Transform, int> __this_04;

		__this_00 = new List<ShifterGrowthEffect.Layer>();
		this._layers = __this_00;
		__this_01 = new List<Object>();
		this._created = __this_01;
		__this_02 = new List<Material>();
		this._materialBuffer = __this_02;
		__this_03 = new List<Transform>();
		this._nodes = __this_03;
		__this_04 = new Dictionary<Transform, int>();
		this._nodeIndices = __this_04;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/ShifterGrowthEffect.c.

	// Characters.ShifterGrowthEffect$$.cctor: clean
	static ShifterGrowthEffect()
	{
		Characters_ShifterGrowthEffect_StaticFields pCVar1;
		ShifterGrowthEffect pCVar2;
		int iVar3;
		String[] pSVar4;

		iVar3 = Shader.PropertyToID("_Growth");
		ShifterGrowthEffect.Growth = iVar3;
		iVar3 = Shader.PropertyToID("_TissueIntensity");
		ShifterGrowthEffect.TissueIntensity = iVar3;
		pSVar4 = (String[])new string[2];
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar4.Length != 0) {
			pSVar4[0] = "chest";
			if ((pSVar4.Length & 0xfffffffe) != 0) {
				pSVar4[1] = "upperchest";
				pCVar1 = typeof(ShifterGrowthEffect).static_fields;
				pCVar1.Origin = pSVar4;
				pCVar2 = typeof(ShifterGrowthEffect);
				pCVar1 = typeof(ShifterGrowthEffect).static_fields;
				(pCVar1.ChunkDark).r = 0.32;
				(pCVar1.ChunkDark).g = 0.04;
				(pCVar1.ChunkDark).b = 0.03;
				(pCVar1.ChunkDark).a = 1.0;
				pCVar1 = pCVar2.static_fields;
				(pCVar1.ChunkLight).r = 0.72;
				(pCVar1.ChunkLight).g = 0.15;
				(pCVar1.ChunkLight).b = 0.1;
				(pCVar1.ChunkLight).a = 1.0;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
