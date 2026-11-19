// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanLimbMesh
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanLimbMesh.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000726")]
internal sealed class TitanLimbMesh : IDisposable
{
	[Token(Token = "0x2000727")]
	private sealed class MeshSource
	{
		[Token(Token = "0x40023BF")]
		[FieldOffset(Offset = "0x10")]
		public readonly Mesh Original;

		[Token(Token = "0x40023C0")]
		[FieldOffset(Offset = "0x18")]
		public readonly Vector3[] Vertices;

		[Token(Token = "0x40023C1")]
		[FieldOffset(Offset = "0x20")]
		public readonly Vector3[] Normals;

		[Token(Token = "0x40023C2")]
		[FieldOffset(Offset = "0x28")]
		public readonly Vector4[] Tangents;

		[Token(Token = "0x40023C3")]
		[FieldOffset(Offset = "0x30")]
		public readonly Vector2[] UV;

		[Token(Token = "0x40023C4")]
		[FieldOffset(Offset = "0x38")]
		public readonly Color32[] Colors;

		[Token(Token = "0x40023C5")]
		[FieldOffset(Offset = "0x40")]
		public readonly BoneWeight[] Weights;

		[Token(Token = "0x40023C6")]
		[FieldOffset(Offset = "0x48")]
		public readonly Matrix4x4[] Bindposes;

		[Token(Token = "0x40023C7")]
		[FieldOffset(Offset = "0x50")]
		public readonly int[][] Triangles;

		[Token(Token = "0x6004599")]
		[Address(RVA = "0x5B560A0", Offset = "0x5B550A0", VA = "0x5B560A0")]
		public MeshSource(Mesh mesh)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.MeshSource$$.ctor): 8 lines keep C-only constructs
			Vector3[]* targetAddress;
			Color32[]* targetAddress_00;
			System_Int32_array_array* targetAddress_01;
			uint uVar1;
			uint length;
			Vector3[] pUVar2;
			Vector4[] pUVar3;
			Vector2[] pUVar4;
			Color32[] pUVar5;
			BoneWeight[] pUVar6;
			Matrix4x4[] pUVar7;
			System_Int32_array_array pSVar8;
			Int32[] pSVar9;
			long lVar10;
			ulong uVar11;

			base();
			this.Original = mesh;
			if (mesh != null) {
				pUVar2 = mesh.vertices;
				targetAddress = &this.Vertices;
				this.Vertices = pUVar2;
				pUVar2 = mesh.normals;
				this.Normals = pUVar2;
				pUVar3 = mesh.tangents;
				this.Tangents = pUVar3;
				pUVar4 = mesh.uv;
				this.UV = pUVar4;
				pUVar5 = mesh.colors32;
				targetAddress_00 = &this.Colors;
				this.Colors = pUVar5;
				pUVar5 = this.Colors;
				if (pUVar5 != null) {
					if (pUVar5.Length == 0) {
						pUVar2 = *targetAddress;
						if (pUVar2 != null) {
							pUVar5 = (Color32[])new Color32[(uint32_t)pUVar2.Length];
							*targetAddress_00 = pUVar5;
							pUVar5 = *targetAddress_00;
							if (pUVar5 != null) {
								uVar11 = 0;
								do {
									uVar1 = (uint)pUVar5.Length;
									if ((long)(int)uVar1 <= (long)uVar11) goto label_05c5619a;
									if (uVar1 <= uVar11) goto label_05c562dc;
									pUVar5[uVar11]._overlap_0._at_rgba.rgba = -1;
									uVar11 = uVar11 + 1;
									pUVar5 = *targetAddress_00;
								} while (pUVar5 != null);
							}
						}
					}
					else {
		label_05c5619a: ;
						pUVar6 = mesh.boneWeights;
						this.Weights = pUVar6;
						pUVar7 = mesh.bindposes;
						this.Bindposes = pUVar7;
						length = mesh.subMeshCount;
						pSVar8 = (System_Int32_array_array)new int[][length];
						targetAddress_01 = &this.Triangles;
						this.Triangles = pSVar8;
						pSVar8 = this.Triangles;
						if (pSVar8 != null) {
							lVar10 = 0x20;
							uVar11 = 0;
							do {
								if ((long)(int)pSVar8.Length <= (long)uVar11) {
									return;
								}
								pSVar9 = mesh.GetTriangles((int32_t)uVar11);
								if ((uint)pSVar8.Length <= uVar11) {
		label_05c562dc: ;
									throw new IndexOutOfRangeException();
								}
								pSVar8[uVar11] = pSVar9;
								uVar11 = uVar11 + 1;
								pSVar8 = *targetAddress_01;
								lVar10 = lVar10 + 8;
							} while (pSVar8 != null);
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x2000728")]
	private sealed class CachedBody : IDisposable
	{
		[Token(Token = "0x40023C8")]
		[FieldOffset(Offset = "0x10")]
		public readonly MeshSource Source;

		[Token(Token = "0x40023C9")]
		[FieldOffset(Offset = "0x18")]
		private readonly CutPlane[] _left;

		[Token(Token = "0x40023CA")]
		[FieldOffset(Offset = "0x20")]
		private readonly CutPlane[] _right;

		[Token(Token = "0x40023CB")]
		[FieldOffset(Offset = "0x28")]
		private readonly Mesh[] _meshes;

		[Token(Token = "0x40023CC")]
		[FieldOffset(Offset = "0x30")]
		private readonly RegrowthMesh[] _regrowth;

		[Token(Token = "0x40023CD")]
		[FieldOffset(Offset = "0x38")]
		private readonly Mesh[] _detached;

		[Token(Token = "0x600459A")]
		[Address(RVA = "0x5B54610", Offset = "0x5B53610", VA = "0x5B54610")]
		public CachedBody(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CachedBody$$.ctor): clean
			Mesh[] pUVar1;
			TitanLimbMesh.RegrowthMesh[] pCVar2;
			Mesh mesh;
			TitanLimbMesh.MeshSource pCVar3;
			TitanLimbMesh.CutPlane[] pCVar4;
			TitanLimbMesh.CutPlane pCVar5;
			Transform pUVar6;

			pUVar1 = (Mesh[])new Mesh[0x24];
			this._meshes = pUVar1;
			pCVar2 = (TitanLimbMesh.RegrowthMesh[])new TitanLimbMesh.RegrowthMesh[4];
			this._regrowth = pCVar2;
			pUVar1 = (Mesh[])new Mesh[8];
			this._detached = pUVar1;
			base();
			if (renderer != null) {
				mesh = renderer.sharedMesh;
				pCVar3 = new TitanLimbMesh.MeshSource(mesh);
				this.Source = pCVar3;
				pCVar3 = this.Source;
				if ((pCVar3 != null) &&(pUVar1 = this._meshes, pUVar1 != null)) {
					if ((int)pUVar1.Length != 0) {
						pUVar1[0] = pCVar3.Original;
						pCVar4 = (TitanLimbMesh.CutPlane[])new TitanLimbMesh.CutPlane[3];
						pCVar5 = new TitanLimbMesh.CutPlane(renderer, leftHand, 1.0);
						if (pCVar4 == null) goto label_05c548fb;
						if ((pCVar4.Length & 0xfffffffe) != 0) {
							pCVar4[1] = pCVar5;
							if (leftHand == null) goto label_05c548fb;
							pUVar6 = leftHand.parent;
							pCVar5 = new TitanLimbMesh.CutPlane(renderer, pUVar6, 0.25);
							if (2 < (uint)pCVar4.Length) {
								pCVar4[2] = pCVar5;
								this._left = pCVar4;
								pCVar4 = (TitanLimbMesh.CutPlane[])new TitanLimbMesh.CutPlane[3];
								pCVar5 = new TitanLimbMesh.CutPlane(renderer, rightHand, 1.0);
								if (pCVar4 == null) goto label_05c548fb;
								if ((pCVar4.Length & 0xfffffffe) != 0) {
									pCVar4[1] = pCVar5;
									if (rightHand == null) goto label_05c548fb;
									pUVar6 = rightHand.parent;
									pCVar5 = new TitanLimbMesh.CutPlane(renderer, pUVar6, 0.25);
									if (2 < (uint)pCVar4.Length) {
										pCVar4[2] = pCVar5;
										this._right = pCVar4;
										return;
									}
								}
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		label_05c548fb: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600459B")]
		[Address(RVA = "0x5B54290", Offset = "0x5B53290", VA = "0x5B54290")]
		public void Prewarm()
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CachedBody$$Prewarm): clean
			TitanLimbMesh.RegrowthMesh[] pCVar1;
			TitanLimbMesh.CutPlane[] pCVar2;
			TitanLimbMesh.MeshSource pCVar3;
			TitanLimbMesh.CutPlane pCVar4;
			TitanLimbMesh.RegrowthMesh pCVar5;

			if (this != null) {
				this.GetMesh(1, 0, false, false);
				this.GetMesh(1, 0, true, false);
				this.GetDetached(true, false, false, false);
				pCVar1 = this._regrowth;
				if (pCVar1 == null) goto label_05c54606;
				if ((int)pCVar1.Length == 0) goto label_05c5460b;
				if (pCVar1[0] == null) {
					pCVar2 = this._left;
					if (pCVar2 == null) goto label_05c54606;
					if ((pCVar2.Length & 0xfffffffe) == 0) goto label_05c5460b;
					pCVar3 = this.Source;
					pCVar4 = pCVar2[1];
					pCVar5 = new TitanLimbMesh.RegrowthMesh(pCVar3, pCVar4);
					if ((int)pCVar1.Length == 0) goto label_05c5460b;
					pCVar1[0] = pCVar5;
				}
				this.GetMesh(2, 0, false, false);
				this.GetMesh(2, 0, true, false);
				this.GetDetached(true, true, false, false);
				pCVar1 = this._regrowth;
				if (pCVar1 == null) goto label_05c54606;
				if ((pCVar1.Length & 0xfffffffe) == 0) goto label_05c5460b;
				if (pCVar1[1] == null) {
					pCVar2 = this._left;
					if (pCVar2 == null) goto label_05c54606;
					if ((uint)pCVar2.Length < 3) goto label_05c5460b;
					pCVar3 = this.Source;
					pCVar4 = pCVar2[2];
					pCVar5 = new TitanLimbMesh.RegrowthMesh(pCVar3, pCVar4);
					if ((pCVar1.Length & 0xfffffffe) == 0) goto label_05c5460b;
					pCVar1[1] = pCVar5;
				}
				this.GetMesh(0, 1, false, false);
				this.GetMesh(0, 1, false, true);
				this.GetDetached(false, false, false, false);
				pCVar1 = this._regrowth;
				if (pCVar1 == null) goto label_05c54606;
				if ((uint)pCVar1.Length < 3) goto label_05c5460b;
				if (pCVar1[2] == null) {
					pCVar2 = this._right;
					if (pCVar2 == null) goto label_05c54606;
					if ((pCVar2.Length & 0xfffffffe) == 0) goto label_05c5460b;
					pCVar3 = this.Source;
					pCVar4 = pCVar2[1];
					pCVar5 = new TitanLimbMesh.RegrowthMesh(pCVar3, pCVar4);
					if ((uint)pCVar1.Length < 3) goto label_05c5460b;
					pCVar1[2] = pCVar5;
				}
				this.GetMesh(0, 2, false, false);
				this.GetMesh(0, 2, false, true);
				this.GetDetached(false, true, false, false);
				pCVar1 = this._regrowth;
				if (pCVar1 != null) {
					if ((pCVar1.Length & 0xfffffffc) != 0) {
						if (pCVar1[3] != null) {
							return;
						}
						pCVar2 = this._right;
						if (pCVar2 == null) goto label_05c54606;
						if (2 < (uint)pCVar2.Length) {
							pCVar3 = this.Source;
							pCVar4 = pCVar2[2];
							pCVar5 = new TitanLimbMesh.RegrowthMesh(pCVar3, pCVar4);
							if ((pCVar1.Length & 0xfffffffc) != 0) {
								pCVar1[3] = pCVar5;
								return;
							}
						}
					}
		label_05c5460b: ;
					throw new IndexOutOfRangeException();
				}
			}
		label_05c54606: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600459C")]
		[Address(RVA = "0x5B54F20", Offset = "0x5B53F20", VA = "0x5B54F20")]
		public Mesh GetMesh(int left, int right, bool leftRegrowing = false, bool rightRegrowing = false)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CachedBody$$GetMesh): clean
			Mesh[] pUVar1;
			Object x;
			TitanLimbMesh.MeshSource source;
			TitanLimbMesh.CutPlane[] pCVar2;
			uint uVar3;
			bool bVar4;
			int iVar5;
			TitanLimbMesh.CutMeshData __this_00;
			Mesh pUVar6;
			MethodInfo method_00;
			uint uVar7;

			iVar5 = right * 3 + left;
			uVar3 = (uint)leftRegrowing * 9;
			method_00 = (MethodInfo)(ulong)uVar3;
			uVar7 = uVar3 + iVar5 + 0x12;
			if (!rightRegrowing) {
				uVar7 = uVar3 + iVar5;
			}
			pUVar1 = this._meshes;
			if (pUVar1 == null) goto label_05c5512f;
			if ((uint)pUVar1.Length <= uVar7) goto label_05c55134;
			x = (Object)pUVar1[(int)uVar7];
			bVar4 = (x == null);
			if (bVar4) {
				source = this.Source;
				__this_00 = new TitanLimbMesh.CutMeshData(source);
				if (left == 0) {
		label_05c5503b: ;
					if (right != 0) goto label_05c55040;
		label_05c550ac: ;
					if (__this_00 == null) goto label_05c5512f;
				}
				else {
					pCVar2 = this._left;
					if (leftRegrowing) {
						if (pCVar2 == null) goto label_05c5512f;
						if ((uint)pCVar2.Length <= (uint)left) goto label_05c55134;
						if (__this_00 == null) goto label_05c5512f;
						method_00 = (MethodInfo)(long)left;
						__this_00.Remove(pCVar2[(long)method_00]);
						goto label_05c5503b;
					}
					if (pCVar2 == null) goto label_05c5512f;
					if ((uint)pCVar2.Length <= (uint)left) goto label_05c55134;
					if (__this_00 == null) goto label_05c5512f;
					method_00 = (MethodInfo)(long)left;
					__this_00.Cut(pCVar2[(long)method_00], false);
					if (right == 0) goto label_05c550ac;
		label_05c55040: ;
					pCVar2 = this._right;
					if (rightRegrowing) {
						if (pCVar2 == null) goto label_05c5512f;
						if ((uint)pCVar2.Length <= (uint)right) goto label_05c55134;
						if (__this_00 == null) goto label_05c5512f;
						method_00 = (MethodInfo)(long)right;
						__this_00.Remove(pCVar2[(long)method_00]);
					}
					else {
						if (pCVar2 == null) goto label_05c5512f;
						if ((uint)pCVar2.Length <= (uint)right) goto label_05c55134;
						if (__this_00 == null) goto label_05c5512f;
						method_00 = (MethodInfo)(long)right;
						__this_00.Cut(pCVar2[(long)method_00], false);
					}
				}
				pUVar1 = this._meshes;
				pUVar6 = __this_00.CreateMesh(this.Source, false);
				if (pUVar1 == null) goto label_05c5512f;
				if ((uint)pUVar1.Length <= uVar7) goto label_05c55134;
				pUVar1[(int)uVar7] = pUVar6;
			}
			pUVar1 = this._meshes;
			if (pUVar1 != null) {
				if (uVar7 < (uint)pUVar1.Length) {
					return pUVar1[(int)uVar7];
				}
		label_05c55134: ;
				throw new IndexOutOfRangeException();
			}
		label_05c5512f: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600459D")]
		[Address(RVA = "0x5B55DF0", Offset = "0x5B54DF0", VA = "0x5B55DF0", Slot = "4")]
		public void Dispose()
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CachedBody$$Dispose): clean
			uint uVar1;
			Object pUVar2;
			TitanLimbMesh.RegrowthMesh[] pCVar3;
			bool bVar4;
			Mesh[] pUVar5;
			ulong uVar6;
			ulong uVar7;
			long lVar8;

			pUVar5 = this._meshes;
			if (pUVar5 != null) {
				lVar8 = 5;
				do {
					uVar6 = lVar8 - 4;
					uVar1 = (uint)pUVar5.Length;
					if ((long)(int)uVar1 <= (long)uVar6) {
						pCVar3 = this._regrowth;
						if (pCVar3 != null) {
							if ((int)pCVar3.Length < 1) goto label_05c55f36;
							uVar6 = pCVar3.Length & 0xffffffff;
							uVar7 = 0;
							goto label_05c55f0a;
						}
						break;
					}
					if (uVar1 <= uVar6) goto label_05c55fb3;
					pUVar2 = (Object)pUVar5[lVar8 + -4];
					bVar4 = (pUVar2 != null);
					if (bVar4) {
						pUVar5 = this._meshes;
						if (pUVar5 == null) break;
						if ((uint)pUVar5.Length <= uVar6) goto label_05c55fb3;
						pUVar2 = (Object)pUVar5[lVar8 + -4];
						Object.Destroy(pUVar2);
					}
					pUVar5 = this._meshes;
					lVar8 = lVar8 + 1;
				} while (pUVar5 != null);
			}
			goto label_05c55fb8;
			while(true) {
				if (pCVar3[uVar7] != null) {
					pUVar2 = (Object)pCVar3[uVar7].Mesh;
					Object.Destroy(pUVar2);
					uVar6 = (ulong)(uint)pCVar3.Length;
				}
				uVar7 = uVar7 + 1;
				if ((long)(int)uVar6 <= (long)uVar7) break;
		label_05c55f0a: ;
				if (uVar6 <= uVar7) goto label_05c55fb3;
			}
		label_05c55f36: ;
			pUVar5 = this._detached;
			if (pUVar5 != null) {
				if (0 < (int)pUVar5.Length) {
					uVar6 = pUVar5.Length & 0xffffffff;
					uVar7 = 0;
					do {
						if (uVar6 <= uVar7) {
		label_05c55fb3: ;
							throw new IndexOutOfRangeException();
						}
						pUVar2 = (Object)pUVar5[uVar7];
						bVar4 = (pUVar2 != null);
						if (bVar4) {
							Object.Destroy(pUVar2);
						}
						uVar7 = uVar7 + 1;
						uVar1 = (uint)pUVar5.Length;
						uVar6 = (ulong)uVar1;
					} while ((long)uVar7 < (long)(int)uVar1);
				}
				return;
			}
		label_05c55fb8: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600459E")]
		[Address(RVA = "0x5B54A70", Offset = "0x5B53A70", VA = "0x5B54A70")]
		public Mesh GetDetached(bool left, bool arm, bool handDisabled, bool regrowing)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CachedBody$$GetDetached): 1 lines keep C-only constructs
			Mesh[] pUVar1;
			Object x;
			TitanLimbMesh.CutPlane[] pCVar2;
			TitanLimbMesh.MeshSource source;
			TitanLimbMesh.CutPlane source_00;
			uint uVar3;
			bool bVar4;
			uint uVar5;
			TitanLimbMesh.CutMeshData __this_00;
			TitanLimbMesh.CutPlane __this_01;
			Mesh pUVar6;

			uVar5 = regrowing | 2;
			if (!handDisabled || !arm) {
				uVar5 = (uint)arm;
			}
			uVar3 = uVar5 + 4;
			if (left) {
				uVar3 = uVar5;
			}
			pUVar1 = this._detached;
			if (pUVar1 == null) goto label_05c54cba;
			if ((uint)pUVar1.Length <= uVar3) goto label_05c54cb5;
			x = (Object)pUVar1[uVar3];
			bVar4 = (x == null);
			if (bVar4) {
				pCVar2 = (&this._left)[!left];
				source = this.Source;
				__this_00 = new TitanLimbMesh.CutMeshData(source);
				if (handDisabled && arm) {
					if (regrowing) {
						if (pCVar2 == null) goto label_05c54cba;
						if ((pCVar2.Length & 0xfffffffe) == 0) goto label_05c54cb5;
						if (__this_00 == null) goto label_05c54cba;
						__this_00.Remove(pCVar2[1]);
						if ((uint)pCVar2.Length <= arm + 1) goto label_05c54cb5;
					}
					else {
						if (pCVar2 == null) goto label_05c54cba;
						if ((pCVar2.Length & 0xfffffffe) == 0) goto label_05c54cb5;
						if (__this_00 == null) goto label_05c54cba;
						__this_00.Cut(pCVar2[1], false);
						if ((uint)pCVar2.Length <= arm + 1) goto label_05c54cb5;
					}
				}
				else {
					if (pCVar2 == null) goto label_05c54cba;
					if ((uint)pCVar2.Length <= arm + 1) goto label_05c54cb5;
				}
				source_00 = pCVar2[(ulong)arm + 1];
				if (source_00 == null) goto label_05c54cba;
				__this_01 = new TitanLimbMesh.CutPlane(source_00);
				if (__this_00 == null) goto label_05c54cba;
				__this_00.Cut(__this_01, true);
				pUVar1 = this._detached;
				pUVar6 = __this_00.CreateMesh(this.Source, true);
				if (pUVar1 == null) goto label_05c54cba;
				if ((uint)pUVar1.Length <= uVar3) goto label_05c54cb5;
				pUVar1[uVar3] = pUVar6;
			}
			pUVar1 = this._detached;
			if (pUVar1 != null) {
				if (uVar3 < (uint)pUVar1.Length) {
					return pUVar1[uVar3];
				}
		label_05c54cb5: ;
				throw new IndexOutOfRangeException();
			}
		label_05c54cba: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600459F")]
		[Address(RVA = "0x5B54CC0", Offset = "0x5B53CC0", VA = "0x5B54CC0")]
		public RegrowthMesh GetRegrowth(bool left, bool arm)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CachedBody$$GetRegrowth): 2 lines keep C-only constructs
			TitanLimbMesh.RegrowthMesh[] pCVar1;
			TitanLimbMesh.MeshSource source;
			Il2CppClass cut;
			TitanLimbMesh.RegrowthMesh __this_00;
			TitanLimbMesh.CutPlane[] method_00;
			uint uVar2;

			pCVar1 = this._regrowth;
			if (pCVar1 == null) {
		label_05c54d89: ;
				throw new NullReferenceException();
			}
			uVar2 = (uint)arm + (uint)!left * 2;
			if (uVar2 < (uint)pCVar1.Length) {
				if (pCVar1[uVar2] != null) {
					return pCVar1[uVar2];
				}
				method_00 = (&this._left)[!left];
				if (method_00 == null) goto label_05c54d89;
				if (arm + 1 < *(uint)&method_00.Length) {
					source = this.Source;
					cut = (Il2CppClass)method_00[(ulong)arm + 1];
					__this_00 = new TitanLimbMesh.RegrowthMesh(source, (TitanLimbMesh.CutPlane)cut);
					if (uVar2 < (uint)pCVar1.Length) {
						pCVar1[uVar2] = __this_00;
						return __this_00;
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	}

	[Token(Token = "0x2000729")]
	private sealed class RegrowthMesh
	{
		[Token(Token = "0x40023CE")]
		[FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x40023CF")]
		[FieldOffset(Offset = "0x18")]
		private readonly Vector3[] _centers;

		[Token(Token = "0x40023D0")]
		[FieldOffset(Offset = "0x20")]
		private readonly BoneWeight[] _weights;

		[Token(Token = "0x60045A0")]
		[Address(RVA = "0x5B58040", Offset = "0x5B57040", VA = "0x5B58040")]
		public RegrowthMesh(MeshSource source, CutPlane cut)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.RegrowthMesh$$.ctor): 180 lines keep C-only constructs
			Vector3[]* targetAddress;
			BoneWeight[]* targetAddress_00;
			TitanLimbMesh.RegrowthMesh targetAddress_01;
			int piVar1;
			undefined1 (*pauVar2) [16];
			ulong puVar3;
			BoneWeight pUVar4;
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
			float fVar15;
			uint uVar16;
			uint uVar17;
			uint uVar18;
			uint uVar19;
			uint uVar20;
			uint item;
			uint item_00;
			uint uVar21;
			Object __this_00;
			Object __this_01;
			Int32[] pSVar22;
			BoneWeight[] pUVar23;
			byte[] auVar24 = new byte[16];
			BoneWeight weight;
			BoneWeight weight_00;
			BoneWeight weight_01;
			BoneWeight weight_02;
			BoneWeight weight_03;
			uint uVar25;
			uint uVar26;
			uint uVar27;
			uint uVar28;
			uint uVar29;
			uint uVar30;
			uint uVar31;
			uint uVar32;
			uint uVar33;
			uint uVar34;
			uint uVar35;
			uint uVar36;
			Vector3 pUVar37;
			BoneWeight pUVar38;
			int iVar39;
			int iVar40;
			int iVar41;
			bool bVar42;
			uint uVar43;
			Vector3[] pUVar44;
			BoneWeight[] pUVar45;
			Mesh pUVar46;
			String pSVar47;
			object pIVar48;
			Vector2[] value;
			Vector2[] value_00;
			System_Int32_array_array pSVar49;
			List<int> __this_02;
			MethodInfo pMVar50;
			Vector3 pUVar51;
			UnityEngine_Vector3_StaticFields pUVar52;
			ulong uVar53;
			Int32[] pSVar54;
			Vector3[] pUVar55;
			ulong uVar56;
			int iVar57;
			uint uVar58;
			MethodInfo pMVar59;
			ulong uVar60;
			long lVar61;
			MethodInfo pMVar62;
			uint uVar63;
			int iVar64;
			long lVar65;
			float fVar66;
			ulong uVar67;
			ulong uVar68;
			float fVar74;
			float fVar75;
			byte[] extraout_var = new byte[12];
			byte[] auVar69 = new byte[16];
			uint uVar73;
			byte[] auVar71 = new byte[16];
			byte[] auVar70 = new byte[16];
			byte[] auVar72 = new byte[16];
			byte[] auVar76 = new byte[16];
			float fVar77;
			float fVar78;
			float fVar79;
			float fVar85;
			Vector2 UVar81;
			float fVar80;
			Vector2 UVar82;
			float fVar86;
			float fVar87;
			byte[] auVar83 = new byte[16];
			byte[] auVar84 = new byte[16];
			float fVar88;
			float local_1bc;
			byte[] local_140 = new byte[16];
			ulong uStack_130;
			byte[] local_128 = new byte[16];
			float local_118;
			float fStack_114;
			float fStack_110;
			float fStack_10c;
			float local_108;
			float fStack_104;
			float fStack_100;
			float fStack_fc;
			float local_f8;
			float local_e8;
			Vector3[] aUStack_e0 = new Vector3[2];
			ulong local_c8;
			ulong uStack_c0;
			ulong local_b8;
			ulong uStack_b0;
			ulong local_a8;
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

			local_128._0_4_ = 0.0;
			local_128._4_4_ = 0.0;
			local_128._8_4_ = 0.0;
			local_128._12_4_ = 0.0;
			local_140._8_4_ = 0.0;
			local_140._12_4_ = 0.0;
			uStack_130._0_4_ = 0.0;
			uStack_130._4_4_ = 0.0;
			pUVar44 = (Vector3[])new Vector3[0x11];
			targetAddress = &this._centers;
			this._centers = pUVar44;
			pUVar45 = (BoneWeight[])new BoneWeight[0x11];
			targetAddress_00 = &this._weights;
			this._weights = pUVar45;
			base();
			if (source == null) goto label_05c58f34;
			pUVar46 = source.Original;
			pUVar46 = Object.Instantiate<Mesh>((object)pUVar46);
			targetAddress_01 = &this.fields;
			this.Mesh = pUVar46;
			__this_00 = (Object)source.Original;
			if (__this_00 == null) goto label_05c58f34;
			__this_01 = (Object)this.Mesh;
			pSVar47 = __this_00.name;
			pSVar47 = String.Concat(pSVar47, " regrowth");
			if (__this_01 == null) goto label_05c58f34;
			__this_01.name = pSVar47;
			pUVar44 = source.Vertices;
			if ((pUVar44 == null) ||(pIVar48 = new float[(uint32_t)pUVar44.Length], pIVar48 == null )) goto label_05c58f34;
			pMVar62 = pIVar48[1].monitor;
			if (cut == null) {
				local_1bc = 0.0;
				if (0 < (int)pMVar62) {
					pUVar44 = source.Vertices;
					if ((pUVar44 != null) && ((int)pUVar44.Length == 0)) {
		label_05c58f4b: ;
						throw new IndexOutOfRangeException();
					}
					goto label_05c58f34;
				}
			}
			else {
				pMVar50 = (MethodInfo)((ulong)pMVar62 & 0xffffffff);
				if ((int)pMVar62 < 1) {
					local_1bc = 0.0;
				}
				else {
					local_1bc = 0.0;
					lVar65 = 0x20;
					lVar61 = 10;
					pMVar59 = null;
					do {
						pUVar44 = source.Vertices;
						if (pUVar44 == null) goto label_05c58f34;
						if (((MethodInfo)(ulong)(uint)pUVar44.Length <= pMVar59) || (pMVar50 <= pMVar59)) goto label_05c58f4b;
						uVar67 = *(ulong)((long)pUVar44.m_Items + lVar61 * 4 + -0x28);
						uVar5 = cut.Origin.x;
						uVar13 = cut.Origin.y;
						uVar6 = cut.Normal.x;
						uVar14 = cut.Normal.y;
						*(float)((long)&pIVar48[2].klass + (long)pMVar59 * 4) =(float)uVar14 * ((float)((ulong)uVar67 >> 0x20) - (float)uVar13) +(float)uVar6 * ((float)uVar67 - (float)uVar5) +(*(float)((long)pUVar44.m_Items + lVar61 * 4 + -0x20) - cut.Origin.z) *cut.Normal.z;
						pUVar45 = source.Weights;
						if (pUVar45 == null) goto label_05c58f34;
						if ((MethodInfo)(ulong)(uint)pUVar45.Length <= pMVar59) goto label_05c58f4b;
						__ghidra(@"pauVar2 = (undefined1 (*) [16])((long)&(((BoneWeight[])(pUVar45.m_Items + -1)).obj).klass + lVar65);");
						local_58 = *(ulong)*pauVar2;
						uStack_50 = *(ulong)(*pauVar2 + 8);
						puVar3 = (ulong)((long)pUVar45.m_Items + lVar65 + -0x10);
						local_48 = *puVar3;
						uStack_40 = puVar3[1];
						weight.m_BoneIndex0 = (int)local_48;
						weight.m_BoneIndex1 = (int)((ulong)local_48 >> 0x20);
						weight._0_16_ = *pauVar2;
						weight.m_BoneIndex2 = (int)uStack_40;
						weight.m_BoneIndex3 = (int)((ulong)uStack_40 >> 0x20);
						bVar42 = cut.ContainsBone(weight);
						if (bVar42) {
							if ((MethodInfo)(ulong)*(uint)&pIVar48[1].monitor <= pMVar59) goto label_05c58f4b;
							fVar88 = *(float)((long)&pIVar48[2].klass + (long)pMVar59 * 4);
							if (local_1bc <= fVar88) {
								local_1bc = fVar88;
							}
						}
						pMVar59 = (MethodInfo)((long)&pMVar59.methodPointer + 1);
						pMVar50 = (MethodInfo)(ulong)*(uint)&pIVar48[1].monitor;
						lVar65 = lVar65 + 0x20;
						lVar61 = lVar61 + 3;
					} while ((long)pMVar59 < (long)(int)*(uint)&pIVar48[1].monitor);
				}
				pMVar62 = pMVar50;
			}
			value = (Vector2[])new Vector2[(uint32_t)pMVar62];
			value_00 = (Vector2[])new Vector2[*(uint)&pIVar48[1].monitor];
			if (cut == null) goto label_05c58f34;
			uVar7 = cut.Normal.x;
			fVar15 = cut.Normal.y;
			fVar88 = cut.Normal.z;
			if (0.9 <= ABS(fVar15)) {
				pUVar51 = &Vector3.rightVector;
				pUVar37 = &Vector3.rightVector;
			}
			else {
				pUVar51 = &Vector3.upVector;
				pUVar37 = &Vector3.upVector;
			}
			uVar67._0_4_ = pUVar51.x;
			uVar67._4_4_ = pUVar51.y;
			fVar66 = pUVar37.z;
			fVar77 = (float)uVar67;
			fVar78 = uVar67._4_4_;
			fVar80 = (float)uVar7;
			fVar74 = 0.0;
			fVar75 = 0.0;
			fVar79 = fVar66;
			fVar85 = fVar88;
			fVar86 = 0.0;
			fVar87 = 0.0;
			if (Il2CppMethodInitialized_0753e72d == false) {
				aUStack_e0[0].x = 0.0;
				aUStack_e0[0].y = 0.0;
				fStack_100 = 0.0;
				fStack_fc = 0.0;
				fStack_110 = 0.0;
				fStack_10c = 0.0;
				local_118 = uVar67._4_4_;
				fStack_114 = (float)uVar7;
				local_108 = fVar66;
				fStack_104 = fVar88;
				local_f8 = uVar67._4_4_;
				Il2CppMethodInitialized_0753e72d = true;
				fVar77 = local_e8;
				uVar67._4_4_ = local_f8;
				fVar78 = local_118;
				fVar80 = fStack_114;
				fVar74 = fStack_110;
				fVar75 = fStack_10c;
				fVar79 = local_108;
				fVar85 = fStack_104;
				fVar86 = fStack_100;
				fVar87 = fStack_fc;
			}
			local_140._0_4_ = 0.0;
			local_140._4_4_ = 0.0;
			auVar84._0_4_ = fVar15 * fVar79 - fVar88 * fVar78;
			auVar84._4_4_ = (float)uVar67 * fVar85 - fVar66 * fVar80;
			auVar84._8_4_ = fVar86 * 0.0 - fVar74 * 0.0;
			auVar84._12_4_ = fVar87 * 0.0 - fVar75 * 0.0;
			fVar88 = (float)uVar7 * uVar67._4_4_ - fVar15 * fVar77;
			fVar66 = fVar88 * fVar88 + auVar84._4_4_ * auVar84._4_4_ + auVar84._0_4_ * auVar84._0_4_;
			if (fVar66 < 0.0) {
				auVar69._0_4_ = sqrtf(fVar66);
				auVar69._4_12_ = extraout_var;
				uVar67 = auVar69._0_8_;
				if (auVar69._0_4_ <= 1e-05) goto label_05c5862e;
		label_05c58672: ;
				auVar70._0_4_ = (float)uVar67;
				fVar88 = fVar88 / auVar70._0_4_;
				uVar73 = (undefined4)((ulong)uVar67 >> 0x20);
				auVar71._8_4_ = uVar73;
				auVar71._0_8_ = uVar67;
				auVar71._12_4_ = uVar73;
				auVar70._8_8_ = auVar71._8_8_;
				auVar70._4_4_ = auVar70._0_4_;
				auVar84 = divps(auVar84, auVar70);
				local_140._0_4_ = auVar84._0_4_;
				local_140._4_4_ = auVar84._4_4_;
				pUVar52 = (UnityEngine_Vector3_StaticFields)local_140;
			}
			else {
				uVar67 = CONCAT44(fVar15, SQRT(fVar66));
				if (1e-05 < SQRT(fVar66)) goto label_05c58672;
		label_05c5862e: ;
				pUVar52 = typeof(Vector3).static_fields;
				fVar88 = (pUVar52.zeroVector).z;
				fVar15 = 0.0;
			}
			if (value != null) {
				if (0 < (int)value.Length) {
					uVar8 = (pUVar52.zeroVector).x;
					uVar16 = (pUVar52.zeroVector).y;
					uVar9 = cut.Normal.x;
					uVar17 = cut.Normal.y;
					fVar66 = cut.Normal.z;
					uVar67._4_4_ = local_1bc;
					if (local_1bc <= 0.0001) {
						uVar67._4_4_ = 0.0001;
					}
					uVar56 = value.Length & 0xffffffff;
					auVar76._4_4_ = uVar67._4_4_;
					auVar76._0_4_ = uVar67._4_4_;
					auVar76._8_4_ = uVar67._4_4_;
					auVar76._12_4_ = uVar67._4_4_;
					lVar61 = 0x14;
					uVar53 = 0;
					do {
						if ((*(uint)&pIVar48[1].monitor <= uVar53) || (uVar56 <= uVar53)) goto label_05c58f4b;
						UVar81.y = 0.0;
						UVar81.x = *(float)((long)&pIVar48[2].klass + uVar53 * 4) / uVar67._4_4_;
						value[uVar53] = UVar81;
						pUVar44 = source.Vertices;
						if (pUVar44 == null) goto label_05c58f34;
						if ((uint)pUVar44.Length <= uVar53) goto label_05c58f4b;
						if (value_00 == null) goto label_05c58f34;
						if ((uint)value_00.Length <= uVar53) goto label_05c58f4b;
						uVar68 = *(ulong)((long)pUVar44.m_Items + lVar61 * 2 + -0x28);
						uVar10 = cut.Origin.x;
						uVar18 = cut.Origin.y;
						fVar77 = (float)uVar68 - (float)uVar10;
						fVar78 = (float)((ulong)uVar68 >> 0x20) - (float)uVar18;
						fVar80 = *(float)((long)pUVar44.m_Items + lVar61 * 2 + -0x20) - cut.Origin.z;
						auVar83._0_4_ = fVar80 * ((float)uVar16 * (float)uVar9 - (float)uVar17 * (float)uVar8) + fVar78 * (fVar66 * (float)uVar8 - fVar88 * (float)uVar9) +(fVar88 * (float)uVar17 - (float)uVar16 * fVar66) * fVar77;
						auVar83._4_4_ = fVar80 * fVar88 + fVar77 * (float)uVar8 + (float)uVar16 * fVar78;
						auVar83._8_4_ = fVar80 * (float)uVar16 + 0.0;
						auVar83._12_4_ = fVar80 * fVar15 + (float)uVar16 * 0.0 + 0.0;
						auVar84 = divps(auVar83, auVar76);
						UVar82.y = auVar84._0_4_;
						UVar82.x = auVar84._4_4_;
						value_00[uVar53] = UVar82;
						uVar53 = uVar53 + 1;
						uVar58 = (uint)value.Length;
						uVar56 = (ulong)uVar58;
						lVar61 = lVar61 + 6;
					} while ((long)uVar53 < (long)(int)uVar58);
				}
				if (targetAddress_01.Mesh != null) {
					(targetAddress_01.Mesh).uv2 = value;
					if (targetAddress_01.Mesh != null) {
						uVar58 = 0;
						(targetAddress_01.Mesh).uv3 = value_00;
						pSVar49 = source.Triangles;
						if (pSVar49 != null) {
							while ((int)uVar58 < (int)pSVar49.Length) {
								__this_02 = il2cpp_codegen_object_new(typeof(List<int>)) ;
								pMVar62 = MethodInfo_System_Collections_Generic_List_int_ctor;
								__this_02 = new List<int>();
								pSVar49 = source.Triangles;
								if (pSVar49 == null) goto label_05c58f34;
								if ((uint)pSVar49.Length <= uVar58) goto label_05c58f4b;
								pSVar22 = pSVar49[(int)uVar58];
								if (pSVar22 == null) goto label_05c58f34;
								uVar43 = (uint)pSVar22.Length;
								if (0 < (int)uVar43) {
									uVar63 = 2;
									do {
										if (((uVar43 <= uVar63 - 2) || (uVar43 <= uVar63 - 1)) || (uVar43 <= uVar63)) goto label_05c58f4b;
										pUVar45 = source.Weights;
										if (pUVar45 == null) goto label_05c58f34;
										uVar43 = pSVar22[(int)(uVar63 - 2)];
										if ((uint)pUVar45.Length <= uVar43) goto label_05c58f4b;
										item = pSVar22[(int)(uVar63 - 1)];
										item_00 = pSVar22[(int)uVar63];
										pUVar4 = pUVar45.m_Items + (int)uVar43;
										local_78._0_4_ = pUVar4.m_Weight0;
										local_78._4_4_ = pUVar4.m_Weight1;
										uStack_70._0_4_ = pUVar4.m_Weight2;
										uStack_70._4_4_ = pUVar4.m_Weight3;
										uVar25 = pUVar4.m_Weight0;
										uVar26 = pUVar4.m_Weight1;
										uVar27 = pUVar4.m_Weight2;
										uVar28 = pUVar4.m_Weight3;
										weight_00.m_Weight3 = (float)uVar28;
										weight_00.m_Weight2 = (float)uVar27;
										weight_00.m_Weight1 = (float)uVar26;
										weight_00.m_Weight0 = (float)uVar25;
										pUVar38 = &pUVar45[(int)uVar43];
										local_68._0_4_ = pUVar38.m_BoneIndex0;
										local_68._4_4_ = pUVar38.m_BoneIndex1;
										uStack_60._0_4_ = pUVar38.m_BoneIndex2;
										uStack_60._4_4_ = pUVar38.m_BoneIndex3;
										weight_00.m_BoneIndex0 = (undefined4)local_68;
										weight_00.m_BoneIndex1 = local_68._4_4_;
										weight_00.m_BoneIndex2 = (undefined4)uStack_60;
										weight_00.m_BoneIndex3 = uStack_60._4_4_;
										bVar42 = cut.ContainsBone(weight_00);
										if (bVar42) {
		label_05c58a40: ;
											pMVar50 = MethodInfo_System_Collections_Generic_List_int_Add;
											if (__this_02 == null) goto label_05c58f34;
											piVar1 = &__this_02._version;
											*piVar1 = *piVar1 + 1;
											pSVar54 = __this_02._items;
											if (pSVar54 == null) goto label_05c58f34;
											uVar21 = __this_02._size;
											if (uVar21 < (uint)pSVar54.Length) {
												__this_02._size = uVar21 + 1;
												pSVar54[(int)uVar21] = uVar43;
												piVar1 = &__this_02._version;
												*piVar1 = *piVar1 + 1;
											}
											else {
												__this_02.AddWithResize(uVar43);
												pMVar50 = MethodInfo_System_Collections_Generic_List_int_Add;
												pSVar54 = __this_02._items;
												piVar1 = &__this_02._version;
												*piVar1 = *piVar1 + 1;
												if (pSVar54 == null) goto label_05c58f34;
											}
											uVar43 = __this_02._size;
											if (uVar43 < (uint)pSVar54.Length) {
												pMVar62 = (MethodInfo)(ulong)(uVar43 + 1);
												__this_02._size = uVar43 + 1;
												pSVar54[(int)uVar43] = item;
												piVar1 = &__this_02._version;
												*piVar1 = *piVar1 + 1;
											}
											else {
												pMVar62 = (MethodInfo)(ulong)item;
												__this_02.AddWithResize(item);
												pMVar50 = MethodInfo_System_Collections_Generic_List_int_Add;
												pSVar54 = __this_02._items;
												piVar1 = &__this_02._version;
												*piVar1 = *piVar1 + 1;
												if (pSVar54 == null) goto label_05c58f34;
											}
											uVar43 = __this_02._size;
											if (uVar43 < (uint)pSVar54.Length) {
												__this_02._size = uVar43 + 1;
												pSVar54[(int)uVar43] = item_00;
											}
											else {
												pMVar62 = (MethodInfo)(ulong)item_00;
												__this_02.AddWithResize(item_00) ;
											}
										}
										else {
											pUVar45 = source.Weights;
											if (pUVar45 == null) goto label_05c58f34;
											if ((uint)pUVar45.Length <= item) goto label_05c58f4b;
											pUVar4 = pUVar45.m_Items + (int)item;
											local_98._0_4_ = pUVar4.m_Weight0;
											local_98._4_4_ = pUVar4.m_Weight1;
											uStack_90._0_4_ = pUVar4.m_Weight2;
											uStack_90._4_4_ = pUVar4.m_Weight3;
											uVar29 = pUVar4.m_Weight0;
											uVar30 = pUVar4.m_Weight1;
											uVar31 = pUVar4.m_Weight2;
											uVar32 = pUVar4.m_Weight3;
											weight_01.m_Weight3 = (float)uVar32;
											weight_01.m_Weight2 = (float)uVar31;
											weight_01.m_Weight1 = (float)uVar30;
											weight_01.m_Weight0 = (float)uVar29;
											pUVar38 = &pUVar45[(int)item];
											local_88._0_4_ = pUVar38.m_BoneIndex0;
											local_88._4_4_ = pUVar38.m_BoneIndex1;
											uStack_80._0_4_ = pUVar38.m_BoneIndex2;
											uStack_80._4_4_ = pUVar38.m_BoneIndex3;
											weight_01.m_BoneIndex0 = (undefined4)local_88;
											weight_01.m_BoneIndex1 = local_88._4_4_;
											weight_01.m_BoneIndex2 = (undefined4)uStack_80;
											weight_01.m_BoneIndex3 = uStack_80._4_4_;
											bVar42 = cut.ContainsBone(weight_01);
											if (bVar42) goto label_05c58a40;
											pUVar45 = source.Weights;
											if (pUVar45 == null) goto label_05c58f34;
											if ((uint)pUVar45.Length <= item_00) goto label_05c58f4b;
											pUVar4 = pUVar45.m_Items + (int)item_00;
											local_b8._0_4_ = pUVar4.m_Weight0;
											local_b8._4_4_ = pUVar4.m_Weight1;
											uStack_b0._0_4_ = pUVar4.m_Weight2;
											uStack_b0._4_4_ = pUVar4.m_Weight3;
											uVar33 = pUVar4.m_Weight0;
											uVar34 = pUVar4.m_Weight1;
											uVar35 = pUVar4.m_Weight2;
											uVar36 = pUVar4.m_Weight3;
											weight_02.m_Weight3 = (float)uVar36;
											weight_02.m_Weight2 = (float)uVar35;
											weight_02.m_Weight1 = (float)uVar34;
											weight_02.m_Weight0 = (float)uVar33;
											pUVar38 = &pUVar45[(int)item_00];
											local_a8._0_4_ = pUVar38.m_BoneIndex0;
											local_a8._4_4_ = pUVar38.m_BoneIndex1;
											uStack_a0._0_4_ = pUVar38.m_BoneIndex2;
											uStack_a0._4_4_ = pUVar38.m_BoneIndex3;
											weight_02.m_BoneIndex0 = (undefined4)local_a8;
											weight_02.m_BoneIndex1 = local_a8._4_4_;
											weight_02.m_BoneIndex2 = (undefined4)uStack_a0;
											weight_02.m_BoneIndex3 = uStack_a0._4_4_;
											bVar42 = cut.ContainsBone(weight_02);
											if (bVar42) goto label_05c58a40;
										}
										uVar43 = (uint)pSVar22.Length;
										iVar57 = uVar63 + 1;
										uVar63 = uVar63 + 3;
									} while (iVar57 < (int)uVar43);
								}
								if (targetAddress_01.Mesh == null) goto label_05c58f34;
								(targetAddress_01.Mesh).SetTriangles(__this_02, uVar58, false);
								uVar58 = uVar58 + 1;
								pSVar49 = source.Triangles;
								if (pSVar49 == null) goto label_05c58f34;
							}
							pUVar44 = *targetAddress;
							if (pUVar44 != null) {
								if ((int)pUVar44.Length == 0) goto label_05c58f4b;
								fVar15 = cut.Origin.y;
								fVar88 = cut.Origin.z;
								pUVar44[0].x = cut.Origin.x;
								pUVar44[0].y = fVar15;
								pUVar44[0].z = fVar88;
								pUVar45 = *targetAddress_00;
								local_128._0_4_ = 0.0;
								local_128._4_4_ = 0.0;
								local_128._8_4_ = 0.0;
								local_128._12_4_ = 0.0;
								local_140._8_4_ = 0.0;
								local_140._12_4_ = 0.0;
								uStack_130._0_4_ = 0.0;
								uStack_130._4_4_ = 0.0;
								((local_140 + 8)).boneIndex0 = cut.ParentBone ;
								pMVar62 = null;
								((local_140 + 8)).weight0 = 1.0;
								if (pUVar45 != null) {
									if ((int)pUVar45.Length == 0) goto label_05c58f4b;
									pUVar45[0].m_BoneIndex0 = local_128._0_4_;
									pUVar45[0].m_BoneIndex1 = local_128._4_4_;
									pUVar45[0].m_BoneIndex2 = local_128._8_4_;
									pUVar45[0].m_BoneIndex3 = local_128._12_4_;
									pUVar45[0].m_Weight0 = (float)local_140._8_4_;
									pUVar45[0].m_Weight1 = (float)local_140._12_4_;
									pUVar45[0].m_Weight2 = (float)uStack_130;
									pUVar45[0].m_Weight3 = uStack_130._4_4_;
									pUVar44 = *targetAddress;
									if (pUVar44 != null) {
										uVar53 = 1;
										goto label_05c58c50;
									}
								}
							}
						}
					}
				}
			}
		label_05c58f34: ;
			throw new NullReferenceException();
			while(true) {
				if ((uint)pUVar44.Length <= uVar53) goto label_05c58f4b;
				pUVar44[uVar53].x = (float)(int)uVar68;
				pUVar44[uVar53].y = (float)(int)((ulong)uVar68 >> 0x20);
				pUVar44[uVar53].z = fVar88;
				pUVar45 = source.Weights;
				if (pUVar45 == null) break;
				if ((uint)pUVar45.Length <= uVar58) goto label_05c58f4b;
				pUVar23 = *targetAddress_00;
				if (pUVar23 == null) break;
				if ((uint)pUVar23.Length <= uVar53) goto label_05c58f4b;
				fVar88 = pUVar45[(int)uVar58].m_Weight0;
				fVar15 = pUVar45[(int)uVar58].m_Weight1;
				fVar66 = pUVar45[(int)uVar58].m_Weight2;
				uVar67._4_4_ = pUVar45[(int)uVar58].m_Weight3;
				iVar39 = pUVar45[(int)uVar58].m_BoneIndex1;
				iVar40 = pUVar45[(int)uVar58].m_BoneIndex2;
				iVar41 = pUVar45[(int)uVar58].m_BoneIndex3;
				pUVar38 = &pUVar23[uVar53];
				pUVar38.m_BoneIndex0 = pUVar45[(int)uVar58].m_BoneIndex0;
				pUVar38.m_BoneIndex1 = iVar39;
				pUVar38.m_BoneIndex2 = iVar40;
				pUVar38.m_BoneIndex3 = iVar41;
				pUVar4 = pUVar23.m_Items + uVar53;
				pUVar4.m_Weight0 = fVar88;
				pUVar4.m_Weight1 = fVar15;
				pUVar4.m_Weight2 = fVar66;
				pUVar4.m_Weight3 = uVar67._4_4_;
				uVar53 = uVar53 + 1;
				pUVar44 = *targetAddress;
				if (pUVar44 == null) break;
		label_05c58c50: ;
				iVar57 = (int)pUVar44.Length;
				if ((long)iVar57 <= (long)uVar53) {
					return;
				}
				if (*(int)&pIVar48[1].monitor < 1) {
					uVar58 = 0;
					pUVar55 = source.Vertices;
					if (pUVar55 == null) break;
		label_05c58e92: ;
					if ((uint)pUVar55.Length <= uVar58) goto label_05c58f4b;
					if (pUVar44 == null) break;
					uVar68._0_4_ = pUVar55[(int)uVar58].x;
					uVar68._4_4_ = pUVar55[(int)uVar58].y;
					fVar88 = pUVar55[(int)uVar58].z;
				}
				else {
					uVar60 = 0;
					lVar61 = 0x20;
					lVar65 = 10;
					fVar88 = 3.4028235e+38;
					uVar56 = 0;
					iVar64 = 0;
					do {
						pUVar45 = source.Weights;
						if (pUVar45 == null) goto label_05c58f34;
						if ((uint)pUVar45.Length <= uVar60) goto label_05c58f4b;
						__ghidra(@"pauVar2 = (undefined1 (*) [16])((long)&(((BoneWeight[])(pUVar45.m_Items + -1)).obj).klass + lVar61);");
						aUStack_e0[0].z = *(float)((long)pauVar2 + 0);
						aUStack_e0[1].x = *(float)((long)pauVar2 + 4);
						aUStack_e0[1]._4_8_ = *(ulong)(*pauVar2 + 8);
						puVar3 = (ulong)((long)pUVar45.m_Items + lVar61 + -0x10);
						local_c8 = *puVar3;
						uStack_c0 = puVar3[1];
						weight_03.m_BoneIndex0 = (int)local_c8;
						weight_03.m_BoneIndex1 = (int)((ulong)local_c8 >> 0x20);
						weight_03._0_16_ = *pauVar2;
						weight_03.m_BoneIndex2 = (int)uStack_c0;
						weight_03.m_BoneIndex3 = (int)((ulong)uStack_c0 >> 0x20);
						bVar42 = cut.ContainsBone(weight_03);
						if (bVar42) {
							if (*(uint)&pIVar48[1].monitor <= uVar60) goto label_05c58f4b;
							fVar15 = ABS(*(float)((long)&pIVar48[2].klass + uVar60 * 4) -((float)(int)uVar53 * local_1bc) / (float)(iVar57 + -1));
							if (fVar15 < fVar88) {
								uVar56 = uVar60 & 0xffffffff;
								fVar88 = fVar15;
							}
							if (fVar15 < local_1bc / 12.0) {
								pUVar44 = *targetAddress;
								if (pUVar44 == null) goto label_05c58f34;
								if ((uint)pUVar44.Length <= uVar53) goto label_05c58f4b;
								pUVar55 = source.Vertices;
								if (pUVar55 == null) goto label_05c58f34;
								if ((uint)pUVar55.Length <= uVar60) goto label_05c58f4b;
								pMVar62 = (MethodInfo)(pUVar44.m_Items + uVar53);
								uVar11 = pUVar44[uVar53].x;
								uVar19 = pUVar44[uVar53].y;
								fVar15 = pUVar44[uVar53].z;
								uVar67 = *(ulong)((long)pUVar55.m_Items + lVar65 * 4 + -0x28);
								fVar66 = *(float)((long)pUVar55.m_Items + lVar65 * 4 + -0x20);
								pMVar62.methodPointer =(Il2CppMethodPointer) CONCAT44((float)((ulong)uVar67 >> 0x20) + (float)uVar19, (float)uVar67 + (float)uVar11);
								pUVar44[uVar53].z = fVar15 + fVar66;
								iVar64 = iVar64 + 1;
							}
						}
						uVar58 = (uint)uVar56;
						uVar60 = uVar60 + 1;
						lVar61 = lVar61 + 0x20;
						lVar65 = lVar65 + 3;
					} while ((long)uVar60 < (long)*(int)&pIVar48[1].monitor);
					pUVar44 = *targetAddress;
					if (iVar64 < 1) {
						pUVar55 = source.Vertices;
						if (pUVar55 != null) goto label_05c58e92;
						break;
					}
					if (pUVar44 == null) break;
					if ((uint)pUVar44.Length <= uVar53) goto label_05c58f4b;
					uVar12 = pUVar44[uVar53].x;
					uVar20 = pUVar44[uVar53].y;
					auVar72._4_4_ = uVar20;
					auVar72._0_4_ = uVar12;
					auVar72._8_8_ = 0;
					fVar15 = (float)iVar64;
					fVar88 = pUVar44[uVar53].z / fVar15;
					auVar24._4_4_ = fVar15;
					auVar24._0_4_ = fVar15;
					auVar24._8_4_ = fVar15;
					auVar24._12_4_ = fVar15;
					auVar84 = divps(auVar72, auVar24);
					uVar68 = auVar84._0_8_;
				}
			}
			goto label_05c58f34;
		}

		[Token(Token = "0x60045A1")]
		[Address(RVA = "0x5B55AC0", Offset = "0x5B54AC0", VA = "0x5B55AC0")]
		public Vector3 GetFront(float progress, Transform[] bones, Matrix4x4[] bindposes)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.RegrowthMesh$$GetFront): 1 lines keep C-only constructs
			uint uVar1;
			Vector3[] pUVar2;
			il2cpp_array_size_t iVar3;
			int index;
			float fVar4;
			float fVar5;
			Vector3 UVar6;
			Vector3 UVar7;
			Vector3 UVar8;
			float local_48;
			float fStack_44;

			pUVar2 = this._centers;
			if (pUVar2 != null) {
				iVar3 = pUVar2.Length;
				if (Il2CppMethodInitialized_0753e7f6 == false) {
					Il2CppMethodInitialized_0753e7f6 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					pUVar2 = this._centers;
				}
				else {
					pUVar2 = this._centers;
				}
				if (pUVar2 != null) {
					fVar5 = (float)((int)iVar3 + -1) * progress;
					fVar4 = floorf(fVar5);
					index = (int)pUVar2.Length + -2;
					if ((int)fVar4 < index) {
						index = (int)fVar4;
					}
					UVar6 = this.Skin(index, bones, bindposes);
					UVar7 = this.Skin(index + 1, bones, bindposes);
					fVar5 = fVar5 - (float)index;
					fVar4 = 1.0;
					if (fVar5 <= 1.0) {
						fVar4 = fVar5;
					}
					fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
					local_48 = UVar6.x;
					fStack_44 = UVar6.y;
					UVar8.x = (UVar7.x - local_48) * fVar4 + local_48;
					UVar8.y = (UVar7.y - fStack_44) * fVar4 + fStack_44;
					UVar8.z = (UVar7.z - UVar6.z) * fVar4 + UVar6.z;
					return (Vector3)UVar8;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045A2")]
		[Address(RVA = "0x5B59090", Offset = "0x5B58090", VA = "0x5B59090")]
		private Vector3 Skin(int index, Transform[] bones, Matrix4x4[] bindposes)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.RegrowthMesh$$Skin): 18 lines keep C-only constructs
			BoneWeight pUVar1;
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
			uint uVar17;
			uint uVar18;
			uint uVar19;
			uint uVar20;
			uint uVar21;
			uint uVar22;
			uint uVar23;
			uint uVar24;
			uint uVar25;
			uint uVar26;
			uint uVar27;
			uint uVar28;
			uint uVar29;
			uint uVar30;
			uint uVar31;
			uint uVar32;
			uint uVar33;
			uint uVar34;
			uint uVar35;
			BoneWeight[] pUVar36;
			Vector3[] pUVar37;
			Transform pUVar38;
			BoneWeight pUVar39;
			uint uVar40;
			float fVar41;
			uint extraout_XMM0_Dc;
			uint extraout_XMM0_Dc_00;
			uint extraout_XMM0_Dc_01;
			uint extraout_XMM0_Dd;
			uint extraout_XMM0_Dd_00;
			uint extraout_XMM0_Dd_01;
			float fVar42;
			float fVar43;
			float fVar44;
			Vector3 UVar45;
			Vector3 UVar46;
			Vector3 UVar47;
			Vector3 position;
			Vector3 UVar48;
			float local_f8;
			float fStack_f4;
			BoneWeight local_c8;
			float local_a8;
			float fStack_a4;
			float local_98;
			float fStack_94;
			float local_88;
			float local_78;
			float local_68;
			byte[] local_58 = new byte[16];
			byte[] local_48 = new byte[16];
			byte[] local_38 = new byte[24];

			pUVar36 = this._weights;
			if (pUVar36 == null) {
		label_05c59532: ;
				throw new NullReferenceException();
			}
			if ((uint)index < (uint)pUVar36.Length) {
				pUVar1 = pUVar36.m_Items + index;
				local_c8.m_Weight0 = pUVar1.m_Weight0;
				local_c8.m_Weight1 = pUVar1.m_Weight1;
				local_c8.m_Weight2 = pUVar1.m_Weight2;
				local_c8.m_Weight3 = pUVar1.m_Weight3;
				pUVar39 = &pUVar36[index];
				local_c8.m_BoneIndex0 = pUVar39.m_BoneIndex0;
				local_c8.m_BoneIndex1 = pUVar39.m_BoneIndex1;
				local_c8.m_BoneIndex2 = pUVar39.m_BoneIndex2;
				local_c8.m_BoneIndex3 = pUVar39.m_BoneIndex3;
				pUVar37 = this._centers;
				if (pUVar37 == null) goto label_05c59532;
				if ((uint)index < (uint)pUVar37.Length) {
					uVar2 = pUVar37[index].x;
					uVar19 = pUVar37[index].y;
					fVar41 = pUVar37[index].z;
					uVar40 = local_c8.boneIndex0 ;
					if (bones == null) goto label_05c59532;
					if (uVar40 < (uint)bones.Length) {
						pUVar38 = bones[(int)uVar40];
						uVar40 = local_c8.boneIndex0;
						if (bindposes == null) goto label_05c59532;
						if (uVar40 < (uint)bindposes.Length) {
							if (pUVar38 == null) goto label_05c59532;
							UVar45.z = bindposes[(int)uVar40].m22 * fVar41 + bindposes[(int)uVar40].m21 * (float)uVar19 + bindposes[(int)uVar40].m20 * (float)uVar2 + bindposes[(int)uVar40].m23;
							uVar3 = bindposes[(int)uVar40].m00;
							uVar20 = bindposes[(int)uVar40].m10;
							uVar4 = bindposes[(int)uVar40].m01;
							uVar21 = bindposes[(int)uVar40].m11;
							uVar5 = bindposes[(int)uVar40].m02;
							uVar22 = bindposes[(int)uVar40].m12;
							uVar6 = bindposes[(int)uVar40].m03;
							uVar23 = bindposes[(int)uVar40].m13;
							local_98 = (float)uVar19;
							fStack_94 = (float)uVar19;
							UVar45.x =(float)uVar5 * fVar41 + (float)uVar4 * (float)uVar19 + (float)uVar3 * (float)uVar2 +(float)uVar6;
							UVar45.y =(float)uVar22 * fVar41 + (float)uVar21 * (float)uVar19 + (float)uVar20 * (float)uVar2 +(float)uVar23;
							local_a8 = fVar41;
							fStack_a4 = fVar41;
							UVar45 = pUVar38.TransformPoint(UVar45);
							local_38._8_4_ = extraout_XMM0_Dc;
							local_38._0_8_ = UVar45._0_8_;
							local_38._12_4_ = extraout_XMM0_Dd;
							local_68 = local_c8.weight0;
							uVar40 = local_c8.boneIndex1;
							if (uVar40 < (uint)bones.Length) {
								pUVar38 = bones[(int)uVar40];
								uVar40 = local_c8.boneIndex1;
								if (uVar40 < (uint)bindposes.Length) {
									if (pUVar38 == null) goto label_05c59532;
									UVar46.z = bindposes[(int)uVar40].m22 * fVar41 + bindposes[(int)uVar40].m21 * local_98 + bindposes[(int)uVar40].m20 * (float)uVar2 + bindposes[(int)uVar40].m23;
									uVar7 = bindposes[(int)uVar40].m00;
									uVar24 = bindposes[(int)uVar40].m10;
									uVar8 = bindposes[(int)uVar40].m01;
									uVar25 = bindposes[(int)uVar40].m11;
									uVar9 = bindposes[(int)uVar40].m02;
									uVar26 = bindposes[(int)uVar40].m12;
									uVar10 = bindposes[(int)uVar40].m03;
									uVar27 = bindposes[(int)uVar40].m13;
									UVar46.x =(float)uVar9 * local_a8 + (float)uVar8 * local_98 + (float)uVar7 * (float)uVar2 +(float)uVar10;
									UVar46.y =(float)uVar26 * fStack_a4 + (float)uVar25 * fStack_94 + (float)uVar24 * (float)uVar2 +(float)uVar27;
									UVar46 = pUVar38.TransformPoint(UVar46);
									local_48._8_4_ = extraout_XMM0_Dc_00;
									local_48._0_8_ = UVar46._0_8_;
									local_48._12_4_ = extraout_XMM0_Dd_00;
									local_78 = local_c8.weight1;
									uVar40 = local_c8.boneIndex2;
									if (uVar40 < (uint)bones.Length) {
										pUVar38 = bones[(int)uVar40];
										uVar40 = local_c8.boneIndex2;
										if (uVar40 < (uint)bindposes.Length) {
											if (pUVar38 == null) goto label_05c59532;
											UVar47.z = bindposes[(int)uVar40].m22 * fVar41 + bindposes[(int)uVar40].m21 * local_98 + bindposes[(int)uVar40].m20 * (float)uVar2 + bindposes[(int)uVar40].m23;
											uVar11 = bindposes[(int)uVar40].m00;
											uVar28 = bindposes[(int)uVar40].m10;
											uVar12 = bindposes[(int)uVar40].m01;
											uVar29 = bindposes[(int)uVar40].m11;
											uVar13 = bindposes[(int)uVar40].m02;
											uVar30 = bindposes[(int)uVar40].m12;
											uVar14 = bindposes[(int)uVar40].m03;
											uVar31 = bindposes[(int)uVar40].m13;
											UVar47.x =(float)uVar13 * local_a8 + (float)uVar12 * local_98 + (float)uVar11 * (float)uVar2 +(float)uVar14;
											UVar47.y =(float)uVar30 * fStack_a4 + (float)uVar29 * fStack_94 + (float)uVar28 * (float)uVar2 +(float)uVar31;
											UVar47 = pUVar38.TransformPoint(UVar47);
											local_58._8_4_ = extraout_XMM0_Dc_01;
											local_58._0_8_ = UVar47._0_8_;
											local_58._12_4_ = extraout_XMM0_Dd_01;
											local_88 = local_c8.weight2;
											uVar40 = local_c8.boneIndex3;
											if (uVar40 < (uint)bones.Length) {
												pUVar38 = bones[(int)uVar40];
												uVar40 = local_c8.boneIndex3;
												if (uVar40 < (uint)bindposes.Length) {
													if (pUVar38 != null) {
														position.z = fVar41 * bindposes[(int)uVar40].m22 + bindposes[(int)uVar40].m21 * local_98 + bindposes[(int)uVar40].m20 * (float)uVar2 + bindposes[(int)uVar40].m23;
														uVar15 = bindposes[(int)uVar40].m00;
														uVar32 = bindposes[(int)uVar40].m10;
														uVar16 = bindposes[(int)uVar40].m01;
														uVar33 = bindposes[(int)uVar40].m11;
														uVar17 = bindposes[(int)uVar40].m02;
														uVar34 = bindposes[(int)uVar40].m12;
														uVar18 = bindposes[(int)uVar40].m03;
														uVar35 = bindposes[(int)uVar40].m13;
														position.x = local_a8 * (float)uVar17 + local_98 * (float)uVar16 + (float)uVar2 * (float)uVar15 + (float)uVar18;
														position.y = fStack_a4 * (float)uVar34 + fStack_94 * (float)uVar33 + (float)uVar2 * (float)uVar32 + (float)uVar35;
														fVar42 = UVar45.z * local_68;
														fVar44 = UVar46.z * local_78;
														fVar43 = UVar47.z * local_88;
														UVar45 = pUVar38.TransformPoint(position);
														fVar41 = local_c8.weight3;
														local_f8 = UVar45.x;
														fStack_f4 = UVar45.y;
														UVar48.x = fVar41 * local_f8 + local_88 * (float)local_58._0_4_ + local_78 * (float)local_48._0_4_ + local_68 * (float)local_38._0_4_;
														UVar48.y = fVar41 * fStack_f4 + local_88 * (float)local_58._4_4_ + local_78 * (float)local_48._4_4_ + local_68 * (float)local_38._4_4_;
														UVar48.z = UVar45.z * fVar41 + fVar43 + fVar44 + fVar42;
														return (Vector3)UVar48;
													}
													goto label_05c59532;
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
	}

	[Token(Token = "0x200072A")]
	private sealed class CutPlane
	{
		[Token(Token = "0x40023D1")]
		[FieldOffset(Offset = "0x10")]
		public readonly Vector3 Origin;

		[Token(Token = "0x40023D2")]
		[FieldOffset(Offset = "0x1C")]
		public readonly Vector3 Normal;

		[Token(Token = "0x40023D3")]
		[FieldOffset(Offset = "0x28")]
		public readonly int ParentBone;

		[Token(Token = "0x40023D4")]
		[FieldOffset(Offset = "0x2C")]
		public readonly float BloodStainScale;

		[Token(Token = "0x40023D5")]
		[FieldOffset(Offset = "0x30")]
		public readonly HashSet<int> RemovedBones;

		[Token(Token = "0x60045A3")]
		[Address(RVA = "0x5B59540", Offset = "0x5B58540", VA = "0x5B59540")]
		private CutPlane(CutPlane source)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutPlane$$.ctor): 2 lines keep C-only constructs
			float fVar1;
			ulong uVar2;
			float fVar3;
			HashSet<int> pSVar4;

			pSVar4 = new HashSet<int>();
			this.RemovedBones = pSVar4;
			base();
			if (source != null) {
				fVar1 = source.Origin.x;
				fVar3 = source.Origin.y;
				this.Origin.z = source.Origin.z;
				this.Origin.x = fVar1;
				this.Origin.y = fVar3;
				uVar2._0_4_ = source.Normal.x;
				uVar2._4_4_ = source.Normal.y;
				fVar1 = source.Normal.z;
				this.Normal.x = (float)(int)(uVar2 ^ 0x8000000080000000);
				this.Normal.y = (float)(int)((uVar2 ^ 0x8000000080000000) >> 0x20);
				this.Normal.z = -fVar1;
				this.ParentBone = source.ParentBone;
				this.BloodStainScale = source.BloodStainScale;
				pSVar4 = this.RemovedBones;
				if (pSVar4 != null) {
					pSVar4.UnionWith((IEnumerable<T>)source.RemovedBones);
					return;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045A4")]
		[Address(RVA = "0x5B57FF0", Offset = "0x5B56FF0", VA = "0x5B57FF0")]
		public CutPlane Reversed()
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutPlane$$Reversed): clean
			TitanLimbMesh.CutPlane __this_00;

			__this_00 = new TitanLimbMesh.CutPlane(this);
			return __this_00;
		}

		[Token(Token = "0x60045A5")]
		[Address(RVA = "0x5B562F0", Offset = "0x5B552F0", VA = "0x5B562F0")]
		public CutPlane(SkinnedMeshRenderer renderer, Transform hand, float bloodStainScale)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutPlane$$.ctor): 27 lines keep C-only constructs
			TitanLimbMesh.CutPlane pCVar1;
			float fVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			uint uVar6;
			byte[] auVar8 = new byte[16];
			uint uVar9;
			uint uVar10;
			bool bVar11;
			uint uVar12;
			int iVar13;
			HashSet<int> __this_00;
			Transform[] array;
			Mesh __this_01;
			Matrix4x4[] pUVar14;
			Transform pUVar15;
			ulong uVar16;
			ulong uVar17;
			UnityEngine_Vector3_StaticFields pUVar18;
			float fVar19;
			uint uVar20;
			uint extraout_XMM0_Db;
			float fVar21;
			byte[] auVar22 = new byte[16];
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
			Matrix4x4 local_98;
			float local_58;
			float fStack_54;
			Vector3 UStack_50;
			float fStack_44;
			ulong uStack_40;
			HashSet<int>* local_38;

			__this_00 = new HashSet<int>();
			local_38 = &this.RemovedBones;
			this.RemovedBones = __this_00;
			base();
			this.BloodStainScale = bloodStainScale;
			if (renderer == null) goto label_05c568e4;
			array = renderer.bones;
			__this_01 = renderer.sharedMesh;
			if (__this_01 == null) goto label_05c568e4;
			pUVar14 = __this_01.bindposes;
			uVar12 = Array.IndexOf<Transform>((Object[])array, (object)hand);
			if (hand == null) goto label_05c568e4;
			pUVar15 = hand.parent;
			iVar13 = Array.IndexOf<Transform>((Object[])array, (object)pUVar15);
			this.ParentBone = iVar13;
			if (pUVar14 == null) goto label_05c568e4;
			if ((uint)pUVar14.Length <= uVar12) {
		label_05c568df: ;
				throw new IndexOutOfRangeException();
			}
			local_98 = Matrix4x4.Internal_Inverse(pUVar14.m_Items + (int)uVar12);
			fVar26 = local_98.m23;
			fVar25 = local_98.m22;
			fVar24 = local_98.m21;
			fVar19 = local_98.m20;
			fVar23 = local_98.m02;
			fVar21 = local_98.m12;
			fVar31 = local_98.m03;
			fVar32 = local_98.m13;
			fVar27 = local_98.m01;
			fVar28 = local_98.m11;
			fVar29 = local_98.m00;
			fVar30 = local_98.m10;
			if (Il2CppMethodInitialized_0753e4b6 == false) {
				UStack_50.z = local_98.m01;
				fStack_44 = local_98.m11;
				uStack_40._0_4_ = 0.0;
				uStack_40._4_4_ = 0.0;
				local_58 = local_98.m00;
				fStack_54 = local_98.m10;
				UStack_50.x = 0.0;
				UStack_50.y = 0.0;
				Il2CppMethodInitialized_0753e4b6 = true;
				fVar27 = UStack_50.z;
				fVar28 = fStack_44;
				fVar29 = local_58;
				fVar30 = fStack_54;
			}
			pUVar18 = typeof(Vector3).static_fields;
			uVar3 = (pUVar18.zeroVector).x;
			uVar5 = (pUVar18.zeroVector).y;
			fVar2 = (pUVar18.zeroVector).z;
			this.Origin.x = fVar31 + fVar23 * fVar2 + fVar27 * (float)uVar5 + fVar29 * (float)uVar3;
			this.Origin.y = fVar32 + fVar21 * fVar2 + fVar28 * (float)uVar5 + fVar30 * (float)uVar3;
			this.Origin.z = fVar26 + fVar24 * (float)uVar5 + fVar19 * (float)uVar3 + fVar25 * fVar2;
			uVar12 = this.ParentBone;
			if ((uint)pUVar14.Length <= uVar12) goto label_05c568df;
			pUVar18 = (UnityEngine_Vector3_StaticFields)&local_98;
			Matrix4x4.Internal_Inverse((Matrix4x4)pUVar18, pUVar14.m_Items + (int)uVar12);
			fVar19 = local_98.m01;
			fVar24 = local_98.m11;
			fVar25 = 0.0;
			fVar26 = 0.0;
			fVar27 = local_98.m00;
			fVar28 = local_98.m10;
			fVar29 = 0.0;
			fVar30 = 0.0;
			if (Il2CppMethodInitialized_0753e4b6 == false) {
				UStack_50.z = local_98.m01;
				fStack_44 = local_98.m11;
				uStack_40._0_4_ = 0.0;
				uStack_40._4_4_ = 0.0;
				local_58 = local_98.m00;
				fStack_54 = local_98.m10;
				UStack_50.x = 0.0;
				UStack_50.y = 0.0;
				Il2CppMethodInitialized_0753e4b6 = true;
				fVar19 = UStack_50.z;
				fVar24 = fStack_44;
				fVar25 = (float)uStack_40;
				fVar26 = uStack_40._4_4_;
				fVar27 = local_58;
				fVar28 = fStack_54;
				fVar29 = UStack_50.x;
				fVar30 = UStack_50.y;
			}
			uVar4 = (Vector3.zeroVector).x;
			uVar6 = (Vector3.zeroVector).y;
			fVar23 = (Vector3.zeroVector).z;
			pCVar1 = &this.fields;
			uVar9 = (pCVar1.Origin).x;
			uVar10 = (pCVar1.Origin).y;
			fVar21 = this.Origin.z;
			fVar31 = (pCVar1.Origin).x;
			fVar32 = this.Origin.y;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				fVar31 = (float)uVar9;
				fVar32 = (float)uVar10;
			}
			local_98.m00 = 0.0;
			local_98.m10 = 0.0;
			auVar22._0_4_ = fVar31 - (local_98.m03 + local_98.m02 * fVar23 + fVar19 * (float)uVar6 + fVar27 * (float)uVar4);
			auVar22._4_4_ = fVar32 - (local_98.m13 + local_98.m12 * fVar23 + fVar24 * (float)uVar6 + fVar28 * (float)uVar4);
			auVar22._8_4_ = 0.0 - (fVar23 * 0.0 + fVar25 * (float)uVar6 + fVar29 * (float)uVar4 + 0.0);
			auVar22._12_4_ = 0.0 - (fVar23 * 0.0 + fVar26 * (float)uVar6 + fVar30 * (float)uVar4 + 0.0);
			fVar21 = fVar21 - (local_98.m23 + local_98.m21 * (float)uVar6 + local_98.m20 * (float)uVar4 + local_98.m22 * fVar23);
			uVar20 = 0;
			fVar19 = fVar21 * fVar21 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
			if (fVar19 < 0.0) {
				fVar19 = sqrtf(fVar19);
				uVar20 = extraout_XMM0_Db;
				if (1e-05 < fVar19) goto label_05c567fc;
		label_05c567c6: ;
				pUVar18 = typeof(Vector3).static_fields;
				fVar21 = ((Matrix4x4)&pUVar18.zeroVector).m20;
			}
			else {
				fVar19 = SQRT(fVar19);
				if (fVar19 <= 1e-05) goto label_05c567c6;
		label_05c567fc: ;
				fVar21 = fVar21 / fVar19;
				auVar8._4_4_ = fVar19;
				auVar8._0_4_ = fVar19;
				auVar8._8_4_ = uVar20;
				auVar8._12_4_ = uVar20;
				auVar22 = divps(auVar22, auVar8);
				local_98.m00 = auVar22._0_4_;
				local_98.m10 = auVar22._4_4_;
			}
			fVar19 = (pUVar18.zeroVector).y;
			this.Normal.x = (pUVar18.zeroVector).x;
			this.Normal.y = fVar19;
			this.Normal.z = fVar21;
			if (array != null) {
				if (0 < (int)array.Length) {
					uVar16 = array.Length & 0xffffffff;
					uVar17 = 0;
					do {
						if (uVar16 <= uVar17) goto label_05c568df;
						pUVar15 = array[uVar17];
						bVar11 = ((Object)pUVar15 == (Object)hand);
						if (bVar11) {
		label_05c568b1: ;
							if (*local_38 == null) goto label_05c568e4;
							(*local_38).Add((int32_t)uVar17);
						}
						else {
							if ((uint)array.Length <= uVar17) goto label_05c568df;
							if (array[uVar17] == null) goto label_05c568e4;
							bVar11 = (array[uVar17]).IsChildOf(hand);
							if (bVar11) goto label_05c568b1;
						}
						uVar17 = uVar17 + 1;
						uVar12 = (uint)array.Length;
						uVar16 = (ulong)uVar12;
					} while ((long)uVar17 < (long)(int)uVar12);
				}
				return;
			}
		label_05c568e4: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045A6")]
		[Address(RVA = "0x5B59630", Offset = "0x5B58630", VA = "0x5B59630")]
		public BoneWeight KeepParentBone(BoneWeight weight)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutPlane$$KeepParentBone): clean
			HashSet<int> pSVar1;
			bool bVar2;
			int iVar3;

			pSVar1 = this.RemovedBones;
			iVar3 = weight.boneIndex0;
			if (pSVar1 != null) {
				bVar2 = pSVar1.Contains(iVar3);
				if (bVar2) {
					weight.boneIndex0 = this.ParentBone;
				}
				pSVar1 = this.RemovedBones;
				iVar3 = weight.boneIndex1;
				if (pSVar1 != null) {
					bVar2 = pSVar1.Contains(iVar3);
					if (bVar2) {
						weight.boneIndex1 = this.ParentBone;
					}
					pSVar1 = this.RemovedBones;
					iVar3 = weight.boneIndex2;
					if (pSVar1 != null) {
						bVar2 = pSVar1.Contains(iVar3);
						if (bVar2) {
							weight.boneIndex2 = this.ParentBone;
						}
						pSVar1 = this.RemovedBones;
						iVar3 = weight.boneIndex3;
						if (pSVar1 != null) {
							bVar2 = pSVar1.Contains(iVar3) ;
							if (bVar2) {
								weight.boneIndex3 = this.ParentBone;
							}
							__return_storage_ptr__.m_BoneIndex0 = weight.m_BoneIndex0;
							__return_storage_ptr__.m_BoneIndex1 = weight.m_BoneIndex1;
							__return_storage_ptr__.m_BoneIndex2 = weight.m_BoneIndex2;
							__return_storage_ptr__.m_BoneIndex3 = weight.m_BoneIndex3;
							__return_storage_ptr__.m_Weight0 = weight.m_Weight0;
							__return_storage_ptr__.m_Weight1 = weight.m_Weight1;
							__return_storage_ptr__.m_Weight2 = weight.m_Weight2;
							__return_storage_ptr__.m_Weight3 = weight.m_Weight3;
							return __return_storage_ptr__;
						}
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045A7")]
		[Address(RVA = "0x5B58F50", Offset = "0x5B57F50", VA = "0x5B58F50")]
		public bool ContainsBone(BoneWeight weight)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutPlane$$ContainsBone): clean
			HashSet<int> pSVar1;
			bool bVar2;
			int iVar3;
			float fVar4;

			fVar4 = weight.weight0;
			if (0.0 < fVar4) {
				pSVar1 = this.RemovedBones;
				iVar3 = weight.boneIndex0;
				if (pSVar1 == null) goto label_05c59089;
				bVar2 = pSVar1.Contains(iVar3);
				if (bVar2) {
					return true;
				}
			}
			fVar4 = weight.weight1;
			if (0.0 < fVar4) {
				pSVar1 = this.RemovedBones;
				iVar3 = weight.boneIndex1;
				if (pSVar1 == null) goto label_05c59089;
				bVar2 = pSVar1.Contains(iVar3);
				if (bVar2) {
					return true;
				}
			}
			fVar4 = weight.weight2;
			if (0.0 < fVar4) {
				pSVar1 = this.RemovedBones;
				iVar3 = weight.boneIndex2;
				if (pSVar1 == null) goto label_05c59089;
				bVar2 = pSVar1.Contains(iVar3);
				if (bVar2) {
					return true;
				}
			}
			bVar2 = false;
			fVar4 = weight.weight3;
			if (0.0 < fVar4) {
				pSVar1 = this.RemovedBones;
				iVar3 = weight.boneIndex3;
				if (pSVar1 == null) {
		label_05c59089: ;
					throw new NullReferenceException();
				}
				bVar2 = pSVar1.Contains(iVar3);
			}
			return bVar2;
		}
	}

	[Token(Token = "0x200072B")]
	private sealed class CutMeshData
	{
		[Token(Token = "0x40023D6")]
		[FieldOffset(Offset = "0x10")]
		private readonly List<Vector3> _vertices;

		[Token(Token = "0x40023D7")]
		[FieldOffset(Offset = "0x18")]
		private readonly List<Vector3> _normals;

		[Token(Token = "0x40023D8")]
		[FieldOffset(Offset = "0x20")]
		private readonly List<Vector4> _tangents;

		[Token(Token = "0x40023D9")]
		[FieldOffset(Offset = "0x28")]
		private readonly List<Vector2> _uv;

		[Token(Token = "0x40023DA")]
		[FieldOffset(Offset = "0x30")]
		private readonly List<Color32> _colors;

		[Token(Token = "0x40023DB")]
		[FieldOffset(Offset = "0x38")]
		private readonly List<BoneWeight> _weights;

		[Token(Token = "0x40023DC")]
		[FieldOffset(Offset = "0x40")]
		private readonly List<int>[] _triangles;

		[Token(Token = "0x40023DD")]
		[FieldOffset(Offset = "0x48")]
		private readonly List<int> _wound;

		[Token(Token = "0x60045A8")]
		[Address(RVA = "0x5B568F0", Offset = "0x5B558F0", VA = "0x5B568F0")]
		public CutMeshData(MeshSource source)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$.ctor): 3 lines keep C-only constructs
			List<int>[]* targetAddress;
			Vector3[] pUVar1;
			Vector4[] collection;
			Vector2[] collection_00;
			Color32[] collection_01;
			BoneWeight[] collection_02;
			System_Int32_array_array pSVar2;
			Int32[] collection_03;
			List<int> pSVar3;
			List<Vector3> pSVar4;
			List<Vector4> __this_00;
			List<Vector2> __this_01;
			List<Color32> __this_02;
			List<BoneWeight> __this_03;
			List<int>[] pSVar5;
			object pIVar6;
			long lVar7;
			ulong uVar8;

			pSVar3 = new List<int>(0x800);
			this._wound = pSVar3;
			base();
			if (source != null) {
				pUVar1 = source.Vertices;
				pSVar4 = new List<Vector3>((IEnumerable<T>)pUVar1);
				this._vertices = pSVar4;
				pUVar1 = source.Normals;
				pSVar4 = new List<Vector3>((IEnumerable<T>)pUVar1);
				this._normals = pSVar4;
				collection = source.Tangents;
				__this_00 = new List<Vector4>((IEnumerable<T>)collection);
				this._tangents = __this_00;
				collection_00 = source.UV;
				__this_01 = new List<Vector2>((IEnumerable<T>)collection_00);
				this._uv = __this_01;
				collection_01 = source.Colors;
				__this_02 = new List<Color32>((IEnumerable<T>)collection_01);
				this._colors = __this_02;
				collection_02 = source.Weights;
				__this_03 = new List<BoneWeight>((IEnumerable<T>)collection_02);
				this._weights = __this_03;
				pSVar2 = source.Triangles;
				if (pSVar2 != null) {
					pSVar5 = (List<int>[])new List<int>[(uint32_t)pSVar2.Length];
					targetAddress = &this._triangles;
					this._triangles = pSVar5;
					pSVar5 = this._triangles;
					if (pSVar5 != null) {
						lVar7 = 0x20;
						uVar8 = 0;
						do {
							if ((long)(int)pSVar5.Length <= (long)uVar8) {
								return;
							}
							pSVar2 = source.Triangles;
							if (pSVar2 == null) break;
							if ((uint)pSVar2.Length <= uVar8) {
		label_05c56c67: ;
								throw new IndexOutOfRangeException();
							}
							collection_03 = pSVar2[uVar8];
							pSVar3 = new List<int>((IEnumerable<T>)collection_03);
							if (pSVar3 != null) {
								pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar5.obj).klass)._1).element_class) ;
								if (pIVar6 == null) {
									pIVar6 = new ArrayTypeMismatchException();
									throw pIVar6;
								}
							}
							if ((uint)pSVar5.Length <= uVar8) goto label_05c56c67;
							pSVar5[uVar8] = pSVar3;
							uVar8 = uVar8 + 1;
							pSVar5 = *targetAddress;
							lVar7 = lVar7 + 8;
						} while (pSVar5 != null);
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045A9")]
		[Address(RVA = "0x5B57000", Offset = "0x5B56000", VA = "0x5B57000")]
		public void Cut(CutPlane wrist, bool detached = false)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$Cut): 75 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			uint uVar3;
			uint uVar6;
			uint uVar7;
			ulong uVar4;
			ulong uVar5;
			List<int> __this_00;
			List<Vector3> pSVar8;
			Int32[] pSVar9;
			Il2CppType pIVar10;
			BoneWeight weight;
			BoneWeight weight_00;
			BoneWeight weight_01;
			BoneWeight weight_02;
			BoneWeight value;
			bool bVar11;
			int iVar12;
			int index;
			uint uVar13;
			List<Vector3> __this_01;
			List<int> pSVar14;
			Il2CppRGCTXData __this_02;
			List<int>[] pSVar15;
			List<int> pSVar16;
			object pIVar17;
			Il2CppRGCTXData pIVar18;
			long lVar19;
			int iVar20;
			int iVar21;
			uint uVar22;
			List<BoneWeight> pSVar23;
			int iVar24;
			MethodInfo pMVar25;
			int iVar26;
			float fVar27;
			float fVar28;
			uint extraout_XMM0_Dc;
			uint extraout_XMM0_Dd;
			float fVar29;
			float fVar30;
			float fVar31;
			float fVar32;
			float fVar33;
			Vector3 UVar34;
			Vector3 UVar35;
			Vector3 a;
			BoneWeight local_e8;
			byte[] local_c8 = new byte[8];
			float fStack_c0;
			float fStack_bc;
			float local_b8;
			float fStack_b4;
			float fStack_b0;
			float fStack_ac;
			BoneWeight local_a0;
			Il2CppRGCTXData local_80;
			ulong local_78;
			ulong local_68;
			BoneWeight local_50;

			__this_01 = new List<Vector3>();
			pSVar14 = new List<int>(4);
			__this_02 = new List<Vector3>(2);
			pSVar15 = this._triangles;
			if (pSVar15 != null) {
				if (wrist == null) {
					uVar22 = 0xffffffff;
					do {
						uVar22 = uVar22 + 1;
						if ((int)pSVar15.Length <= (int)uVar22) goto label_05c57bea;
						pSVar14 = new List<int>();
						pSVar15 = this._triangles;
						if (pSVar15 == null) break;
						uVar13 = (uint)pSVar15.Length;
						if (uVar13 <= uVar22) goto label_05c57d09;
						pSVar16 = pSVar15[(int)uVar22];
						if (pSVar16 == null) break;
						if (0 < pSVar16._size) {
							pSVar23 = this._weights;
							iVar20 = pSVar16.get_Item(0);
							if (pSVar23 != null) {
								local_a0 = pSVar23.get_Item(iVar20);
								local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
								local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
								local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
								local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
								local_e8.m_Weight0 = local_a0.m_Weight0;
								local_e8.m_Weight1 = local_a0.m_Weight1;
								local_e8.m_Weight2 = local_a0.m_Weight2;
								local_e8.m_Weight3 = local_a0.m_Weight3;
								throw new NullReferenceException();
							}
							break;
						}
						if (pSVar14 != null) {
							pIVar17 = il2cpp_vm_Object_IsInst((object)pSVar14, (((pSVar15.obj).klass)._1).element_class);
							if (pIVar17 == null) goto label_05c57d0e;
							uVar13 = (uint)pSVar15.Length;
						}
						if (uVar13 <= uVar22) goto label_05c57d09;
						pSVar15[(int)uVar22] = pSVar14;
						pSVar15 = this._triangles;
					} while (pSVar15 != null);
				}
				else {
					uVar22 = 0;
					do {
						if ((int)pSVar15.Length <= (int)uVar22) goto label_05c57bea;
						pSVar16 = new List<int>();
						pSVar15 = this._triangles;
						if (pSVar15 == null) break;
						if ((uint)pSVar15.Length <= uVar22) {
		label_05c57d09: ;
							throw new IndexOutOfRangeException();
						}
						method = (MethodInfo)(long)(int)uVar22;
						__this_00 = pSVar15[(long)method];
						if (__this_00 == null) break;
						local_80 = (Il2CppRGCTXData)method;
						if (0 < __this_00._size) {
							iVar20 = 0;
							do {
								pMVar25 = (MethodInfo)this._weights;
								iVar12 = __this_00.get_Item(iVar20) ;
								if (pMVar25 == null) goto label_05c57d3c;
								method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
								local_a0 = pMVar25.get_Item(iVar12);
								local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
								local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
								uVar4 = local_e8._16_8_;
								local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
								local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
								uVar5 = local_e8._24_8_;
								local_e8.m_Weight0 = local_a0.m_Weight0;
								local_e8.m_Weight1 = local_a0.m_Weight1;
								local_e8.m_Weight2 = local_a0.m_Weight2;
								local_e8.m_Weight3 = local_a0.m_Weight3;
								local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
								local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
								local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
								local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
								weight.m_Weight2 = local_a0.m_Weight2;
								weight.m_Weight3 = local_a0.m_Weight3;
								weight.m_Weight0 = local_a0.m_Weight0;
								weight.m_Weight1 = local_a0.m_Weight1;
								weight.m_BoneIndex0 = local_e8.m_BoneIndex0;
								weight.m_BoneIndex1 = local_e8.m_BoneIndex1;
								weight.m_BoneIndex2 = local_e8.m_BoneIndex2;
								weight.m_BoneIndex3 = local_e8.m_BoneIndex3;
								fVar31 = (float)local_e8.m_BoneIndex1;
								fVar32 = (float)local_e8.m_BoneIndex2;
								fVar33 = (float)local_e8.m_BoneIndex3;
								local_e8._16_8_ = uVar4;
								local_e8._24_8_ = uVar5;
								bVar11 = wrist.ContainsBone(weight);
								if (bVar11) {
		label_05c573b0: ;
									if (pSVar14 == null) goto label_05c57d3c;
									piVar1 = &pSVar14._version;
									*piVar1 = *piVar1 + 1;
									pSVar14._size = 0;
									if (__this_02 == null) goto label_05c57d3c;
									*(int)((long)__this_02 + 0x1c) = *(int)((long)__this_02 + 0x1c) + 1;
									*(uint)&__this_02[3].rgctxDataDummy = 0;
									iVar26 = 0;
									do {
										iVar12 = __this_00.get_Item(iVar26 + iVar20);
										iVar26 = iVar26 + 1;
										iVar24 = iVar26;
										if (iVar26 == 3) {
											iVar24 = 0;
										}
										index = __this_00.get_Item(iVar24 + iVar20);
										pSVar8 = this._vertices;
										if (pSVar8 == null) goto label_05c57d3c;
										UVar34 = pSVar8.get_Item(iVar12);
										pSVar8 = this._vertices;
										if (pSVar8 == null) goto label_05c57d3c;
										uVar2 = wrist.Origin.x;
										uVar6 = wrist.Origin.y;
										uVar3 = wrist.Normal.x;
										uVar7 = wrist.Normal.y;
										fVar29 = (UVar34.z - wrist.Origin.z) * wrist.Normal.z + (UVar34.y - (float)uVar6) * (float)uVar7 +(UVar34.x - (float)uVar2) * (float)uVar3;
										UVar34 = pSVar8.get_Item(index);
										pIVar18 = (Il2CppRGCTXData)MethodInfo_System_Collections_Generic_List_int_Add;
										uVar4._0_4_ = wrist.Origin.x;
										uVar4._4_4_ = wrist.Origin.y;
										uVar5._0_4_ = wrist.Normal.x;
										uVar5._4_4_ = wrist.Normal.y;
										fVar30 = (UVar34.z - wrist.Origin.z) * wrist.Normal.z ;
										fVar27 = UVar34.x;
										fVar28 = UVar34.y;
										if (fVar29 <= 0.0) {
											piVar1 = &pSVar14._version;
											*piVar1 = *piVar1 + 1;
											pSVar9 = pSVar14._items;
											if (pSVar9 == null) goto label_05c57d3c;
											uVar13 = pSVar14._size;
											if (uVar13 < (uint)pSVar9.Length) {
												pSVar14._size = uVar13 + 1;
												pSVar9[(int)uVar13] = iVar12;
												method = (MethodInfo)(ulong)(uVar13 + 1);
											}
											else {
												fStack_c0 = (float)extraout_XMM0_Dc;
												local_c8 = (byte[])UVar34._0_8_;
												fStack_bc = (float)extraout_XMM0_Dd;
												local_b8 = fVar30;
												fStack_b4 = fVar31;
												fStack_b0 = fVar32;
												fStack_ac = fVar33;
												local_78 = uVar4;
												local_68 = uVar5;
												pSVar14.AddWithResize(iVar12);
												method = (MethodInfo)pIVar18;
												fVar27 = (float)local_c8._0_4_;
												fVar28 = (float)local_c8._4_4_;
												fVar30 = local_b8;
												fVar31 = fStack_b4;
												fVar32 = fStack_b0;
												fVar33 = fStack_ac;
												uVar5._0_4_ = (float)local_68;
												uVar5._4_4_ = local_68._4_4_;
												uVar4._0_4_ = (float)local_78;
												uVar4._4_4_ = local_78._4_4_;
											}
										}
										fVar30 = fVar30 + (fVar28 - uVar4._4_4_) * uVar5._4_4_ +(fVar27 - (float)uVar4) * (float)uVar5;
										if (fVar29 <= 0.0 == 0.0 < fVar30) {
											iVar12 = this.AddIntersection(iVar12, index, fVar29 / (fVar29 - fVar30), wrist.ParentBone);
											pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
											piVar1 = &pSVar14._version;
											*piVar1 = *piVar1 + 1;
											pSVar9 = pSVar14._items;
											if (pSVar9 == null) goto label_05c57d3c;
											uVar13 = pSVar14._size;
											if (uVar13 < (uint)pSVar9.Length) {
												pSVar14._size = uVar13 + 1;
												pSVar9[(int)uVar13] = iVar12;
											}
											else {
												pSVar14.AddWithResize(iVar12);
											}
											pSVar8 = this._vertices;
											if (pSVar8 == null) goto label_05c57d3c;
											UVar34 = pSVar8.get_Item(iVar12);
											method = MethodInfo_System_Collections_Generic_List_Vector3_Add;
											uVar4._0_4_ = UVar34.z;
											*(int)((long)__this_02 + 0x1c) = *(int)((long)__this_02 + 0x1c) + 1;
											pIVar10 = __this_02[2].type;
											if (pIVar10 == null) goto label_05c57d3c;
											uVar13 = *(uint)&__this_02[3].rgctxDataDummy;
											lVar19 = (long)(int)uVar13;
											local_c8._4_4_ = fVar31;
											local_c8._0_4_ = (float)uVar4;
											fStack_c0 = fVar32;
											fStack_bc = fVar33;
											if (uVar13 < pIVar10[1].bits) {
												*(uint)&__this_02[3].rgctxDataDummy = uVar13 + 1;
												method = (MethodInfo)(lVar19 * 3);
												*(long)((long)&pIVar10[2].data + lVar19 * 0xc) = UVar34._0_8_;
												(&pIVar10[2].bits)[lVar19 * 3] = (uint)(float)uVar4;
											}
											else {
												__this_02.AddWithResize(UVar34);
												uVar4._0_4_ = (float)local_c8._0_4_;
												fVar31 = (float)local_c8._4_4_;
												fVar32 = fStack_c0;
												fVar33 = fStack_bc;
											}
											if (__this_01 == null) goto label_05c57d3c;
											uVar13 = __this_01._size;
											if (0 < (int)uVar13) {
												fStack_b4 = UVar34.x;
												iVar12 = 0;
												bVar11 = false;
												local_b8 = (float)uVar4;
												fStack_b0 = fVar31;
												fStack_ac = UVar34.y;
												do {
													UVar35 = __this_01.get_Item(iVar12);
													uVar4._0_4_ = UVar35.y - UVar34.y;
													uVar5._0_4_ = UVar35.z - local_b8;
													uVar4._4_4_ = UVar35.x - fStack_b4;
													bVar11 = (bool)(bVar11 | (float)uVar4 * (float)uVar4 + uVar4._4_4_ * uVar4._4_4_ +(float)uVar5 * (float)uVar5 < 1e-10);
													iVar12 = iVar12 + 1;
													uVar13 = __this_01._size;
												} while (iVar12 < (int)uVar13);
												uVar4._0_4_ = (float)local_c8._0_4_;
												fVar31 = (float)local_c8._4_4_;
												fVar32 = fStack_c0;
												fVar33 = fStack_bc;
												if (bVar11) goto label_05c57400;
											}
											pMVar25 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
											piVar1 = &__this_01._version;
											*piVar1 = *piVar1 + 1;
											method = (MethodInfo)__this_01._items;
											if ((Il2CppRGCTXData)method == null) goto label_05c57d3c;
											if (uVar13 < *(uint)&((Il2CppRGCTXData)((long)method + 0x18)).rgctxDataDummy) {
												__this_01._size = uVar13 + 1;
												*(long)((long)method + (long)(int)uVar13 * 0xc + 0x20) = UVar34._0_8_;
												*(float)((long)method + (long)(int)uVar13 * 0xc + 0x28) = (float)uVar4;
											}
											else {
												UVar35.z = (float)uVar4;
												UVar35.x = UVar34.x;
												UVar35.y = UVar34.y;
												__this_01.AddWithResize(UVar35);
											}
										}
		label_05c57400: ;
									} while (iVar26 != 3);
									if (2 < pSVar14._size) {
										if (pSVar16 == null) {
											pSVar14.get_Item(0);
											throw new NullReferenceException();
										}
										iVar26 = 1;
										do {
											iVar12 = pSVar14.get_Item(0);
											pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
											piVar1 = &pSVar16._version;
											*piVar1 = *piVar1 + 1;
											pSVar9 = pSVar16._items;
											if (pSVar9 == null) goto label_05c57d3c;
											uVar13 = pSVar16._size;
											if (uVar13 < (uint)pSVar9.Length) {
												pSVar16._size = uVar13 + 1;
												pSVar9[(int)uVar13] = iVar12;
											}
											else {
												pSVar16.AddWithResize(iVar12);
											}
											iVar12 = pSVar14.get_Item(iVar26);
											pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
											piVar1 = &pSVar16._version;
											*piVar1 = *piVar1 + 1;
											pSVar9 = pSVar16._items;
											if (pSVar9 == null) goto label_05c57d3c;
											uVar13 = pSVar16._size;
											if (uVar13 < (uint)pSVar9.Length) {
												pSVar16._size = uVar13 + 1;
												pSVar9[(int)uVar13] = iVar12;
											}
											else {
												pSVar16.AddWithResize(iVar12);
											}
											iVar12 = pSVar14.get_Item(iVar26 + 1);
											pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
											piVar1 = &pSVar16._version;
											*piVar1 = *piVar1 + 1;
											pSVar9 = pSVar16._items;
											if (pSVar9 == null) goto label_05c57d3c;
											uVar13 = pSVar16._size;
											if (uVar13 < (uint)pSVar9.Length) {
												pSVar16._size = uVar13 + 1;
												pSVar9[(int)uVar13] = iVar12;
											}
											else {
												pSVar16.AddWithResize(iVar12);
											}
											iVar24 = pSVar14._size;
											iVar21 = iVar26 + 2;
											iVar26 = iVar26 + 1;
										} while (iVar21 < iVar24);
										method = (MethodInfo)__this_02;
										if ((*(int)&__this_02[3].rgctxDataDummy == 2) && (2 < iVar24)) {
											UVar34 = __this_02.get_Item(0);
											local_b8 = UVar34.z;
											UVar35 = __this_02.get_Item(1);
											a.z = local_b8;
											a.x = UVar34.x;
											a.y = UVar34.y;
											this.AddBloodStain(a, UVar35, pSVar14, wrist);
										}
									}
								}
								else {
									pMVar25 = (MethodInfo)this._weights;
									iVar12 = __this_00.get_Item(iVar20 + 1);
									if (pMVar25 == null) goto label_05c57d3c;
									method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
									local_e8 = pMVar25.get_Item(iVar12) ;
									weight_00.m_Weight2 = local_e8.m_Weight2;
									weight_00.m_Weight3 = local_e8.m_Weight3;
									weight_00.m_Weight0 = local_e8.m_Weight0;
									weight_00.m_Weight1 = local_e8.m_Weight1;
									weight_00.m_BoneIndex0 = local_e8.m_BoneIndex0;
									weight_00.m_BoneIndex1 = local_e8.m_BoneIndex1;
									weight_00.m_BoneIndex2 = local_e8.m_BoneIndex2;
									weight_00.m_BoneIndex3 = local_e8.m_BoneIndex3;
									fVar31 = (float)local_e8.m_BoneIndex1;
									fVar32 = (float)local_e8.m_BoneIndex2;
									fVar33 = (float)local_e8.m_BoneIndex3;
									bVar11 = wrist.ContainsBone(weight_00);
									if (bVar11) goto label_05c573b0;
									pMVar25 = (MethodInfo)this._weights;
									iVar12 = __this_00.get_Item(iVar20 + 2);
									if (pMVar25 == null) goto label_05c57d3c;
									method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
									local_e8 = pMVar25.get_Item(iVar12) ;
									weight_01.m_Weight2 = local_e8.m_Weight2;
									weight_01.m_Weight3 = local_e8.m_Weight3;
									weight_01.m_Weight0 = local_e8.m_Weight0;
									weight_01.m_Weight1 = local_e8.m_Weight1;
									weight_01.m_BoneIndex0 = local_e8.m_BoneIndex0;
									weight_01.m_BoneIndex1 = local_e8.m_BoneIndex1;
									weight_01.m_BoneIndex2 = local_e8.m_BoneIndex2;
									weight_01.m_BoneIndex3 = local_e8.m_BoneIndex3;
									fVar31 = (float)local_e8.m_BoneIndex1;
									fVar32 = (float)local_e8.m_BoneIndex2;
									fVar33 = (float)local_e8.m_BoneIndex3;
									bVar11 = wrist.ContainsBone(weight_01);
									if (bVar11) goto label_05c573b0;
									if (!detached) {
										iVar12 = __this_00.get_Item(iVar20);
										pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
										if (pSVar16 == null) goto label_05c57d3c;
										piVar1 = &pSVar16._version;
										*piVar1 = *piVar1 + 1;
										pSVar9 = pSVar16._items;
										if (pSVar9 == null) goto label_05c57d3c;
										uVar13 = pSVar16._size;
										if (uVar13 < (uint)pSVar9.Length) {
											pSVar16._size = uVar13 + 1;
											pSVar9[(int)uVar13] = iVar12;
										}
										else {
											pSVar16.AddWithResize(iVar12);
										}
										iVar12 = __this_00.get_Item(iVar20 + 1);
										pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar16._version;
										*piVar1 = *piVar1 + 1;
										pSVar9 = pSVar16._items;
										if (pSVar9 == null) goto label_05c57d3c;
										uVar13 = pSVar16._size;
										if (uVar13 < (uint)pSVar9.Length) {
											pSVar16._size = uVar13 + 1;
											pSVar9[(int)uVar13] = iVar12;
										}
										else {
											pSVar16.AddWithResize(iVar12);
										}
										iVar12 = __this_00.get_Item(iVar20 + 2);
										pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar16._version;
										*piVar1 = *piVar1 + 1;
										method = (MethodInfo)pSVar16._items;
										if ((Il2CppRGCTXData)method == null) goto label_05c57d3c;
										uVar13 = pSVar16._size;
										if (uVar13 < *(uint)&((Il2CppRGCTXData)((long)method + 0x18)).rgctxDataDummy) {
											pSVar16._size = uVar13 + 1;
											*(int)((long)method + (long)(int)uVar13 * 4 + 0x20) = iVar12;
										}
										else {
											method = (MethodInfo)pMVar25.klass.rgctx_data;
											pSVar16.AddWithResize(iVar12);
										}
									}
								}
								iVar20 = iVar20 + 3;
							} while (iVar20 < __this_00._size);
						}
						pSVar15 = this._triangles;
						if (pSVar15 == null) break;
						if ((pSVar16 != null) &&(pIVar17 = il2cpp_vm_Object_IsInst((object)pSVar16, (((pSVar15.obj).klass)._1).element_class), pIVar17 == null)) {
		label_05c57d0e: ;
							pIVar17 = new ArrayTypeMismatchException();
							throw pIVar17;
						}
						if ((uint)pSVar15.Length <= uVar22) goto label_05c57d09;
						pSVar15[(long)local_80] = pSVar16;
						uVar22 = uVar22 + 1;
						pSVar15 = this._triangles;
					} while (pSVar15 != null);
				}
			}
		label_05c57d3c: ;
			throw new NullReferenceException();
		label_05c57bea: ;
			if (detached) {
		label_05c57cd5: ;
				this.AddCap(__this_01, wrist);
				return;
			}
			pSVar23 = this._weights;
			if (pSVar23 != null) {
				if (wrist == null) {
					if (0 < pSVar23._size) {
						local_a0 = pSVar23.get_Item(0);
						throw new NullReferenceException();
					}
					goto label_05c57cd5;
				}
				iVar20 = 0;
				do {
					if (pSVar23._size <= iVar20) goto label_05c57cd5;
					method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
					local_a0 = pSVar23.get_Item(iVar20);
					local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
					local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
					local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
					local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
					local_e8.m_Weight0 = local_a0.m_Weight0;
					local_e8.m_Weight1 = local_a0.m_Weight1;
					local_e8.m_Weight2 = local_a0.m_Weight2;
					local_e8.m_Weight3 = local_a0.m_Weight3;
					weight_02.m_Weight2 = local_a0.m_Weight2;
					weight_02.m_Weight3 = local_a0.m_Weight3;
					weight_02.m_Weight0 = local_a0.m_Weight0;
					weight_02.m_Weight1 = local_a0.m_Weight1;
					weight_02.m_BoneIndex0 = local_a0.m_BoneIndex0;
					weight_02.m_BoneIndex1 = local_a0.m_BoneIndex1;
					weight_02.m_BoneIndex2 = local_a0.m_BoneIndex2;
					weight_02.m_BoneIndex3 = local_a0.m_BoneIndex3;
					local_50 = wrist.KeepParentBone(weight_02);
					value.m_Weight2 = local_50.m_Weight2;
					value.m_Weight3 = local_50.m_Weight3;
					value.m_Weight0 = local_50.m_Weight0;
					value.m_Weight1 = local_50.m_Weight1;
					value.m_BoneIndex0 = local_50.m_BoneIndex0;
					value.m_BoneIndex1 = local_50.m_BoneIndex1;
					value.m_BoneIndex2 = local_50.m_BoneIndex2;
					value.m_BoneIndex3 = local_50.m_BoneIndex3;
					pSVar23.set_Item(iVar20, value);
					iVar20 = iVar20 + 1;
					pSVar23 = this._weights;
				} while (pSVar23 != null);
			}
			goto label_05c57d3c;
		}

		[Token(Token = "0x60045AA")]
		[Address(RVA = "0x5B56C80", Offset = "0x5B55C80", VA = "0x5B56C80")]
		public void Remove(CutPlane cut)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$Remove): clean
			uint uVar1;
			List<int> pSVar2;
			List<BoneWeight> __this_00;
			BoneWeight weight;
			BoneWeight weight_00;
			BoneWeight weight_01;
			bool bVar3;
			int iVar4;
			int index;
			int index_00;
			List<int>[] pSVar5;
			uint uVar6;
			MethodInfo pMVar7;
			int index_01;
			int iVar8;
			int local_90;
			BoneWeight local_78;
			BoneWeight local_50;

			pSVar5 = this._triangles;
			if (pSVar5 != null) {
				if (cut == null) {
					uVar6 = 0;
					do {
						uVar1 = (uint)pSVar5.Length;
						if ((int)uVar1 <= (int)uVar6) {
							return;
						}
						if (uVar1 <= uVar6) {
		label_05c56f90: ;
							throw new IndexOutOfRangeException();
						}
						pSVar2 = pSVar5[(int)uVar6];
						if (pSVar2 == null) break;
						iVar4 = pSVar2._size;
						if (0 < iVar4) {
							iVar4 = pSVar2.get_Item(0);
							pSVar2.get_Item(1);
							pSVar2.get_Item(2);
							__this_00 = this._weights;
							if (__this_00 != null) {
								local_50 = __this_00.get_Item(iVar4);
								throw new NullReferenceException();
							}
							break;
						}
						pSVar2.RemoveRange(0, iVar4);
						uVar6 = uVar6 + 1;
						pSVar5 = this._triangles;
					} while (pSVar5 != null);
				}
				else {
					uVar6 = 0;
					while(true) {
						uVar1 = (uint)pSVar5.Length;
						if ((int)uVar1 <= (int)uVar6) {
							return;
						}
						if (uVar1 <= uVar6) goto label_05c56f90;
						pSVar2 = pSVar5[(int)uVar6];
						if (pSVar2 == null) break;
						iVar8 = pSVar2._size;
						if (iVar8 < 1) {
							local_90 = 0;
						}
						else {
							index_01 = 0;
							local_90 = 0;
							do {
								iVar4 = pSVar2.get_Item(index_01);
								index = pSVar2.get_Item(index_01 + 1);
								index_00 = pSVar2.get_Item(index_01 + 2);
								pMVar7 = (MethodInfo)this._weights;
								if (pMVar7 == null) goto label_05c56fdd;
								local_50 = pMVar7.get_Item(iVar4);
								local_78.m_BoneIndex0 = local_50.m_BoneIndex0;
								local_78.m_BoneIndex1 = local_50.m_BoneIndex1;
								local_78.m_BoneIndex2 = local_50.m_BoneIndex2;
								local_78.m_BoneIndex3 = local_50.m_BoneIndex3;
								local_78.m_Weight0 = local_50.m_Weight0;
								local_78.m_Weight1 = local_50.m_Weight1;
								local_78.m_Weight2 = local_50.m_Weight2;
								local_78.m_Weight3 = local_50.m_Weight3;
								weight.m_Weight2 = local_50.m_Weight2;
								weight.m_Weight3 = local_50.m_Weight3;
								weight.m_Weight0 = local_50.m_Weight0;
								weight.m_Weight1 = local_50.m_Weight1;
								weight.m_BoneIndex0 = local_50.m_BoneIndex0;
								weight.m_BoneIndex1 = local_50.m_BoneIndex1;
								weight.m_BoneIndex2 = local_50.m_BoneIndex2;
								weight.m_BoneIndex3 = local_50.m_BoneIndex3;
								bVar3 = cut.ContainsBone(weight);
								if (!bVar3) {
									pMVar7 = (MethodInfo)this._weights;
									if (pMVar7 == null) goto label_05c56fdd;
									local_78 = pMVar7.get_Item(index) ;
									weight_00.m_Weight2 = local_78.m_Weight2;
									weight_00.m_Weight3 = local_78.m_Weight3;
									weight_00.m_Weight0 = local_78.m_Weight0;
									weight_00.m_Weight1 = local_78.m_Weight1;
									weight_00.m_BoneIndex0 = local_78.m_BoneIndex0;
									weight_00.m_BoneIndex1 = local_78.m_BoneIndex1;
									weight_00.m_BoneIndex2 = local_78.m_BoneIndex2;
									weight_00.m_BoneIndex3 = local_78.m_BoneIndex3;
									bVar3 = cut.ContainsBone(weight_00);
									if (!bVar3) {
										pMVar7 = (MethodInfo)this._weights;
										if (pMVar7 == null) goto label_05c56fdd;
										local_78 = pMVar7.get_Item(index_00);
										weight_01.m_Weight2 = local_78.m_Weight2;
										weight_01.m_Weight3 = local_78.m_Weight3;
										weight_01.m_Weight0 = local_78.m_Weight0;
										weight_01.m_Weight1 = local_78.m_Weight1;
										weight_01.m_BoneIndex0 = local_78.m_BoneIndex0;
										weight_01.m_BoneIndex1 = local_78.m_BoneIndex1;
										weight_01.m_BoneIndex2 = local_78.m_BoneIndex2;
										weight_01.m_BoneIndex3 = local_78.m_BoneIndex3;
										bVar3 = cut.ContainsBone(weight_01);
										if (!bVar3) {
											pSVar2.set_Item(local_90, iVar4);
											iVar8 = local_90 + 2;
											pSVar2.set_Item(local_90 + 1, index);
											local_90 = local_90 + 3;
											pSVar2.set_Item(iVar8, index_00);
										}
									}
								}
								iVar8 = pSVar2._size;
								index_01 = index_01 + 3;
							} while (index_01 < iVar8);
						}
						pSVar2.RemoveRange(local_90, iVar8 - local_90);
						uVar6 = uVar6 + 1;
						pSVar5 = this._triangles;
						if (pSVar5 == null) break;
					}
				}
			}
		label_05c56fdd: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045AB")]
		[Address(RVA = "0x5B59770", Offset = "0x5B58770", VA = "0x5B59770")]
		private int AddIntersection(int a, int b, float t, int forearm)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$AddIntersection): 65 lines keep C-only constructs
			int piVar1;
			Vector4 pUVar2;
			BoneWeight pUVar3;
			uint uVar4;
			uint uVar5;
			int iVar6;
			List<Vector3> pSVar7;
			List<Vector3> pSVar8;
			Vector3[] pUVar9;
			List<Vector4> __this_00;
			List<Vector4> __this_01;
			Vector4[] pUVar10;
			List<Vector2> __this_02;
			List<Vector2> __this_03;
			Vector2[] pUVar11;
			List<Color32> __this_04;
			List<Color32> __this_05;
			Color32[] pUVar12;
			List<BoneWeight> __this_06;
			BoneWeight[] pUVar13;
			byte[] auVar14 = new byte[16];
			Vector2 UVar15;
			Vector2 UVar16;
			BoneWeight item;
			BoneWeight pUVar17;
			Color32 UVar19;
			Color32 UVar20;
			UnityEngine_Vector3_StaticFields pUVar21;
			uint uVar22;
			uint uVar23;
			float fVar24;
			float fVar25;
			float fVar26;
			float fVar27;
			uint uVar28;
			uint extraout_XMM0_Db;
			float extraout_XMM0_Dc;
			float extraout_XMM0_Dc_00;
			float fVar29;
			float fVar30;
			float extraout_XMM0_Dd;
			float extraout_XMM0_Dd_00;
			float fVar31;
			float fVar32;
			byte[] auVar33 = new byte[16];
			float fVar34;
			Vector3 UVar35;
			Vector3 UVar36;
			Vector3 item_00;
			Vector4 UVar37;
			Vector4 UVar38;
			Vector4 item_01;
			float local_d8;
			float fStack_d4;
			float local_c8;
			float fStack_c4;
			byte[] local_98 = new byte[24];
			Vector3 UStack_80;
			float fStack_74;
			float fStack_70;
			float fStack_6c;
			float local_68;
			float fStack_64;
			float fStack_60;
			float fStack_5c;
			byte[] local_58 = new byte[16];
			ulong local_48;
			Vector3 UStack_40;

			local_48._0_4_ = 0.0;
			local_48._4_4_ = 0.0;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			local_58._0_4_ = 0.0;
			local_58._4_4_ = 0.0;
			local_58._8_4_ = 0.0;
			local_58._12_4_ = 0.0;
			pSVar7 = this._vertices;
			if (pSVar7 == null) goto label_05c59e9a;
			UVar35 = pSVar7.get_Item(a);
			pSVar8 = this._vertices;
			if (pSVar8 == null) goto label_05c59e9a;
			UVar36 = pSVar8.get_Item(b);
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pUVar9 = pSVar7._items;
			if (pUVar9 == null) goto label_05c59e9a;
			fVar34 = 1.0;
			if (t <= 1.0) {
				fVar34 = t;
			}
			fVar34 = (float)(-(uint)(0.0 <= t) & (uint)fVar34);
			local_c8 = UVar35.x;
			fStack_c4 = UVar35.y;
			item_00.x = (UVar36.x - local_c8) * fVar34 + local_c8;
			item_00.y = (UVar36.y - fStack_c4) * fVar34 + fStack_c4;
			item_00.z = (UVar36.z - UVar35.z) * fVar34 + UVar35.z;
			uVar22 = pSVar7._size;
			local_68 = fVar34;
			fStack_64 = fVar34;
			fStack_60 = fVar34;
			fStack_5c = fVar34;
			if (uVar22 < (uint)pUVar9.Length) {
				pSVar7._size = uVar22 + 1;
				pUVar9[(int)uVar22].x = item_00.x;
				pUVar9[(int)uVar22].y = item_00.y;
				pUVar9[(int)uVar22].z = item_00.z;
			}
			else {
				pSVar7.AddWithResize(item_00);
			}
			pSVar7 = this._normals;
			if (pSVar7 == null) goto label_05c59e9a;
			UVar35 = pSVar7.get_Item(a);
			pSVar8 = this._normals;
			if (pSVar8 == null) goto label_05c59e9a;
			UVar36 = pSVar8.get_Item(b);
			local_c8 = UVar35.x;
			fStack_c4 = UVar35.y;
			fVar24 = UVar36.x - local_c8;
			fVar26 = UVar36.y - fStack_c4;
			fVar29 = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
			fVar31 = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
			if (Il2CppMethodInitialized_0753e72d == false) {
				UStack_80.z = fVar24;
				fStack_74 = fVar26;
				fStack_70 = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
				fStack_6c = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
				Il2CppMethodInitialized_0753e72d = true;
				fVar24 = UStack_80.z;
				fVar26 = fStack_74;
				fVar29 = fStack_70;
				fVar31 = fStack_6c;
			}
			local_98._0_4_ = 0.0;
			local_98._4_4_ = 0.0;
			fVar25 = fVar24 * local_68;
			fVar27 = fVar26 * fStack_64;
			fVar30 = fVar29 * fStack_60;
			fVar32 = fVar31 * fStack_5c;
			if (Il2CppMethodInitialized_0753e729 == false) {
				UStack_80.z = fVar24 * local_68;
				fStack_74 = fVar26 * fStack_64;
				fStack_70 = fVar29 * fStack_60;
				fStack_6c = fVar31 * fStack_5c;
				Il2CppMethodInitialized_0753e729 = true;
				fVar25 = UStack_80.z;
				fVar27 = fStack_74;
				fVar30 = fStack_70;
				fVar32 = fStack_6c;
			}
			auVar33._0_4_ = local_c8 + fVar25;
			auVar33._4_4_ = fStack_c4 + fVar27;
			auVar33._8_4_ = extraout_XMM0_Dc + fVar30;
			auVar33._12_4_ = extraout_XMM0_Dd + fVar32;
			fVar24 = UVar35.z + (UVar36.z - UVar35.z) * fVar34;
			uVar28 = 0;
			fVar26 = fVar24 * fVar24 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
			if (fVar26 < 0.0) {
				fVar26 = sqrtf(fVar26);
				uVar28 = extraout_XMM0_Db;
				if (1e-05 < fVar26) goto label_05c59aaf;
		label_05c59a73: ;
				pUVar21 = typeof(Vector3).static_fields;
				fVar24 = (pUVar21.zeroVector).z;
			}
			else {
				fVar26 = SQRT(fVar26);
				if (fVar26 <= 1e-05) goto label_05c59a73;
		label_05c59aaf: ;
				fVar24 = fVar24 / fVar26;
				auVar14._4_4_ = fVar26;
				auVar14._0_4_ = fVar26;
				auVar14._8_4_ = uVar28;
				auVar14._12_4_ = uVar28;
				auVar33 = divps(auVar33, auVar14);
				local_98._0_4_ = auVar33._0_4_;
				local_98._4_4_ = auVar33._4_4_;
				pUVar21 = (UnityEngine_Vector3_StaticFields)local_98;
			}
			uVar4 = (pUVar21.zeroVector).x;
			uVar5 = (pUVar21.zeroVector).y;
			UVar35.y = (float)uVar5;
			UVar35.x = (float)uVar4;
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			pUVar9 = pSVar7._items;
			if (pUVar9 != null) {
				uVar22 = pSVar7._size;
				if (uVar22 < (uint)pUVar9.Length) {
					pSVar7._size = uVar22 + 1;
					pUVar9[(int)uVar22].x = (float)uVar4;
					pUVar9[(int)uVar22].y = (float)uVar5;
					pUVar9[(int)uVar22].z = fVar24;
				}
				else {
					UVar35.z = fVar24;
					pSVar7.AddWithResize(UVar35);
				}
				__this_00 = this._tangents;
				if (__this_00 != null) {
					UVar37 = __this_00.get_Item(a);
					__this_01 = this._tangents;
					if (__this_01 != null) {
						UVar38 = __this_01.get_Item(b) ;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar10 = __this_00._items;
						if (pUVar10 != null) {
							local_c8 = UVar37.x;
							fStack_c4 = UVar37.y;
							item_01.x = (UVar38.x - local_c8) * local_68 + local_c8;
							item_01.y = (UVar38.y - fStack_c4) * fStack_64 + fStack_c4;
							local_d8 = UVar37.z;
							fStack_d4 = UVar37.w;
							item_01.z = (UVar38.z - local_d8) * local_68 + local_d8;
							item_01.w = (UVar38.w - fStack_d4) * fStack_64 + fStack_d4;
							uVar22 = __this_00._size;
							if (uVar22 < (uint)pUVar10.Length) {
								__this_00._size = uVar22 + 1;
								pUVar2 = pUVar10.m_Items + (int)uVar22;
								pUVar2.x = item_01.x;
								pUVar2.y = item_01.y;
								pUVar2.z = item_01.z;
								pUVar2.w = item_01.w;
							}
							else {
								__this_00.AddWithResize(item_01);
							}
							__this_02 = this._uv;
							if (__this_02 != null) {
								UVar15 = __this_02.get_Item(a);
								__this_03 = this._uv;
								if (__this_03 != null) {
									UVar16 = __this_03.get_Item(b);
									piVar1 = &__this_02._version;
									*piVar1 = *piVar1 + 1;
									pUVar11 = __this_02._items;
									if (pUVar11 != null) {
										local_d8 = UVar15.x;
										fStack_d4 = UVar15.y;
										local_d8 = local_68 * (UVar16.x - local_d8) + local_d8;
										fStack_d4 = fStack_64 * (UVar16.y - fStack_d4) + fStack_d4;
										uVar22 = __this_02._size;
										if (uVar22 < (uint)pUVar11.Length) {
											__this_02._size = uVar22 + 1;
											UVar16.y = fStack_d4;
											UVar16.x = local_d8;
											pUVar11[(int)uVar22] = UVar16;
										}
										else {
											UVar15.y = fStack_d4;
											UVar15.x = local_d8;
											__this_02.AddWithResize(UVar15);
										}
										__this_04 = this._colors;
										if (__this_04 != null) {
											UVar19 = __this_04.get_Item(a);
											__this_05 = this._colors;
											if (__this_05 != null) {
												UVar20 = __this_05.get_Item(b);
												piVar1 = &__this_04._version;
												*piVar1 = *piVar1 + 1;
												pUVar12 = __this_04._items;
												if (pUVar12 != null) {
													uVar22 = (uint)UVar19._overlap_0 >> 8 & 0xff;
													uVar23 = (uint)UVar19._overlap_0 >> 0x10 & 0xff;
													UVar19._overlap_0 =(Color32)(((int)((float)(int)(((uint)UVar20._overlap_0 >> 8 & 0xff) - uVar22) * fVar34 + (float)uVar22) & 0xffU) << 8 |((int)((float)(int)(((uint)UVar20._overlap_0 >> 0x10 & 0xff) - uVar23) * fVar34 + (float)uVar23) & 0xffU) << 0x10 |(int)((float)(int)(((uint)UVar20._overlap_0 >> 0x18) -((uint)UVar19._overlap_0 >> 0x18)) * fVar34 +(float)((uint)UVar19._overlap_0 >> 0x18)) << 0x18 |(int)((float)(int)(((uint)UVar20._overlap_0 & 0xff) -((uint)UVar19._overlap_0 & 0xff)) * fVar34 +(float)((uint)UVar19._overlap_0 & 0xff)) & 0xffU);
													uVar22 = __this_04._size;
													if (uVar22 < (uint)pUVar12.Length) {
														__this_04._size = uVar22 + 1;
														pUVar12[(int)uVar22]._overlap_0._at_rgba.rgba =(int32_t)UVar19._overlap_0;
													}
													else {
														__this_04.AddWithResize(UVar19);
													}
													__this_06 = this._weights;
													local_48._0_4_ = 0.0;
													local_48._4_4_ = 0.0;
													UStack_40.x = 0.0;
													UStack_40.y = 0.0;
													local_58._0_4_ = 0.0;
													local_58._4_4_ = 0.0;
													local_58._8_4_ = 0.0;
													local_58._12_4_ = 0.0;
													local_58.boneIndex0 = forearm;
													local_58.weight0 = 1.0;
													if (__this_06 != null) {
														local_98._16_4_ = (float)local_48;
														local_98._20_4_ = local_48._4_4_;
														UStack_80.x = UStack_40.x;
														UStack_80.y = UStack_40.y;
														local_98._0_8_ = local_58._0_8_;
														local_98._8_8_ = local_58._8_8_;
														piVar1 = &__this_06._version;
														*piVar1 = *piVar1 + 1;
														pUVar13 = __this_06._items;
														if (pUVar13 != null) {
															uVar22 = __this_06._size;
															if (uVar22 < (uint)pUVar13.Length) {
																__this_06._size = uVar22 + 1;
																pUVar17 = &pUVar13[(int)uVar22];
																pUVar17.m_BoneIndex0 = (int32_t)(float)local_48;
																pUVar17.m_BoneIndex1 = (int32_t)local_48._4_4_;
																pUVar17.m_BoneIndex2 = (int32_t)UStack_40.x;
																pUVar17.m_BoneIndex3 = (int32_t)UStack_40.y;
																pUVar3 = pUVar13.m_Items + (int)uVar22;
																pUVar3.m_Weight0 = (float)local_58._0_4_;
																pUVar3.m_Weight1 = (float)local_58._4_4_;
																pUVar3.m_Weight2 = (float)local_58._8_4_;
																pUVar3.m_Weight3 = (float)local_58._12_4_;
															}
															else {
																item.m_Weight2 = (float)local_58._8_4_;
																item.m_Weight3 = (float)local_58._12_4_;
																item.m_Weight0 = (float)local_58._0_4_;
																item.m_Weight1 = (float)local_58._4_4_;
																item.m_BoneIndex0 = (int32_t)(float)local_48;
																item.m_BoneIndex1 = (int32_t)local_48._4_4_;
																item.m_BoneIndex2 = (int32_t)UStack_40.x;
																item.m_BoneIndex3 = (int32_t)UStack_40.y;
																__this_06.AddWithResize(item);
															}
															return iVar6;
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
		label_05c59e9a: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045AC")]
		[Address(RVA = "0x5B59EA0", Offset = "0x5B58EA0", VA = "0x5B59EA0")]
		private void AddBloodStain(Vector3 a, Vector3 b, List<int> polygon, CutPlane cut)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$AddBloodStain): 96 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			int item;
			int bone;
			uint uVar3;
			List<Vector3> pSVar4;
			List<BoneWeight> __this_00;
			Int32[] pSVar5;
			byte[] auVar6 = new byte[16];
			BoneWeight value;
			int index;
			float fVar8;
			float fVar9;
			float fVar10;
			bool bVar11;
			Color32 color;
			int iVar12;
			int item_00;
			List<int> __this_01;
			float fVar13;
			float fVar14;
			float fVar15;
			float extraout_XMM0_Db;
			uint in_XMM0_Dc;
			float extraout_XMM0_Dc;
			uint extraout_XMM0_Dc_01;
			uint extraout_XMM0_Dc_02;
			uint in_XMM0_Dd;
			float extraout_XMM0_Dd;
			uint extraout_XMM0_Dd_01;
			uint extraout_XMM0_Dd_02;
			float in_XMM1_Db;
			byte[] auVar16 = new byte[16];
			byte[] auVar17 = new byte[16];
			byte[] auVar18 = new byte[16];
			float fVar19;
			float fVar20;
			Vector2 uv;
			uint in_XMM3_Db;
			uint in_XMM3_Dc;
			uint in_XMM3_Dd;
			Vector3 UVar21;
			Vector3 UVar22;
			Vector3 position;
			Vector3 tangent;
			byte[] local_1b8 = new byte[16];
			object local_1a8;
			ulong local_198;
			byte[] local_188 = new byte[8];
			float fStack_180;
			float fStack_17c;
			byte[] local_178 = new byte[8];
			byte[] local_168 = new byte[16];
			float local_158;
			float fStack_154;
			float fStack_150;
			float fStack_14c;
			float local_138;
			float fStack_134;
			float fStack_130;
			float fStack_12c;
			float local_128;
			float fStack_124;
			byte[] local_118 = new byte[32];
			float local_f8;
			float fStack_f4;
			byte[] local_e8 = new byte[16];
			uint local_d8;
			float fStack_d4;
			float local_b8;
			byte[] local_a8 = new byte[16];
			byte[] local_98 = new byte[16];
			byte[] local_88 = new byte[16];
			ulong local_78;
			byte[] local_68 = new byte[16];

			local_198 = b._0_8_;
			local_128 = a.z;
			local_188._4_4_ = in_XMM3_Db;
			local_188._0_4_ = b.z;
			fStack_180 = (float)in_XMM3_Dc;
			fStack_17c = (float)in_XMM3_Dd;
			local_168._8_4_ = in_XMM0_Dc;
			local_168._0_8_ = a._0_8_;
			local_168._12_4_ = in_XMM0_Dd;
			fStack_124 = in_XMM1_Db;
			local_178._4_4_ = local_168._4_4_;
			local_178._0_4_ = local_168._4_4_;
			local_1b8._0_8_ = null;
			local_1b8._8_4_ = 0.0;
			local_1b8._12_4_ = 0.0;
			local_1a8 = null;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			fStack_180 = (float)local_188._4_4_;
			local_188._4_4_ = (float)local_198;
			local_198._0_4_ = local_198._4_4_;
			local_158 = local_128;
			fStack_154 = (float)local_168._0_4_;
			fStack_150 = fStack_124;
			fStack_14c = (float)local_168._4_4_;
			fStack_17c = local_198._4_4_;
			fVar20 = (float)local_168._0_4_ - (float)local_188._4_4_;
			fVar20 = fVar20 * fVar20;
			fVar13 = fVar20 + ((float)local_178._0_4_ - local_198._4_4_) * ((float)local_178._0_4_ - local_198._4_4_) +(local_128 - (float)local_188._0_4_) * (local_128 - (float)local_188._0_4_);
			if (fVar13 < 0.0) {
				fVar14 = sqrtf(fVar13);
				fVar20 = extraout_XMM0_Db;
				fVar9 = extraout_XMM0_Dc;
				fVar10 = extraout_XMM0_Dd;
				fVar13 = local_138;
				fVar15 = fStack_134;
				fVar19 = fStack_130;
				fVar8 = fStack_12c;
			}
			else {
				fVar14 = SQRT(fVar13);
				fVar9 = fVar20;
				fVar10 = fVar20;
				fVar13 = local_138;
				fVar15 = fStack_134;
				fVar19 = fStack_130;
				fVar8 = fStack_12c;
			}
			fStack_12c = fVar10;
			fStack_130 = fVar9;
			fStack_134 = fVar20;
			local_138 = fVar14;
			if (1e-06 <= local_138) {
				pSVar4 = this._vertices;
				if ((pSVar4 == null) ||(fVar13 = local_138, fVar15 = fStack_134, fVar19 = fStack_130, fVar8 = fStack_12c, polygon == null)) {
		label_05c5a5ea: ;
					fStack_12c = fVar8;
					fStack_130 = fVar19;
					fStack_134 = fVar15;
					local_138 = fVar13;
					throw new NullReferenceException();
				}
				item = pSVar4._size;
				local_118.GetEnumerator(polygon);
				local_1a8 = (object)local_118._16_8_;
				local_1b8._0_8_ = local_118._0_8_;
				local_1b8._8_8_ = local_118._8_8_;
				if (cut == null) {
					bVar11 = local_1b8.MoveNext();
					if (bVar11) {
						pSVar4 = this._vertices;
						if (pSVar4 != null) {
							pSVar4.get_Item((int32_t)local_1a8);
							throw new NullReferenceException();
						}
		label_05c5a60c: ;
						throw new NullReferenceException();
					}
				}
				else {
					auVar16._0_4_ = (float)local_188._0_4_ - local_158;
					auVar16._4_4_ = (float)local_188._4_4_ - fStack_154;
					auVar16._8_4_ = fStack_180 - fStack_150;
					auVar16._12_4_ = fStack_17c - fStack_14c;
					fStack_d4 = ((float)local_198 - (float)local_178._0_4_) / local_138;
					auVar6._4_4_ = local_138;
					auVar6._0_4_ = local_138;
					auVar6._8_4_ = local_138;
					auVar6._12_4_ = local_138;
					auVar17 = divps(auVar16, auVar6);
					local_d8 = auVar17._4_4_;
					fVar20 = local_138 * 2.5;
					local_f8 = local_138 * 0.002;
					local_e8 = ZEXT416((uint)local_f8);
					fStack_f4 = local_f8;
					local_198._0_4_ = fStack_d4;
					while (bVar11 = local_1b8.MoveNext()) {
						pSVar4 = this._vertices;
						if (pSVar4 == null) goto label_05c5a60c;
						index = (int32_t)local_1a8;
						UVar21 = pSVar4.get_Item((int32_t)local_1a8) ;
						auVar18._4_12_ = auVar17._4_12_;
						local_178 = (byte[])UVar21._0_8_;
						pSVar4 = this._normals;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						auVar18._0_4_ = UVar21.z - local_128;
						local_78._0_4_ = cut.Normal.x;
						local_78._4_4_ = cut.Normal.y;
						local_68 = ZEXT416((uint)(cut.Normal.z * auVar18._0_4_));
						fVar13 = cut.BloodStainScale;
						local_158 = UVar21.z;
						local_88 = auVar18;
						UVar21 = pSVar4.get_Item(index) ;
						local_98._8_4_ = extraout_XMM0_Dc_01;
						local_98._0_8_ = UVar21._0_8_;
						local_98._12_4_ = extraout_XMM0_Dd_01;
						pSVar4 = this._normals;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						UVar22 = pSVar4.get_Item(index) ;
						local_a8._8_4_ = extraout_XMM0_Dc_02;
						local_a8._0_8_ = UVar22._0_8_;
						local_a8._12_4_ = extraout_XMM0_Dd_02;
						bone = cut.ParentBone;
						local_b8 = Mathf.GammaToLinearSpace(0.46);
						fVar15 = Mathf.GammaToLinearSpace(0.03);
						color._overlap_0 =(Color32)il2cpp_runtime_helper_05334d00(local_b8, CONCAT44(0x3f3851ec, fVar15), 0);
						fVar19 = (((float)local_178._0_4_ - (float)local_168._0_4_) * (float)local_188._4_4_ +((float)local_178._4_4_ - (float)local_168._4_4_) * (float)local_198 +(float)local_88._0_4_ * (float)local_188._0_4_) / local_138;
						fVar15 = 1.0;
						if (fVar19 <= 1.0) {
							fVar15 = fVar19;
						}
						uv.y = -((float)local_68._0_4_ +((float)local_178._4_4_ - (float)local_168._4_4_) * local_78._4_4_ +((float)local_178._0_4_ - (float)local_168._0_4_) * (float)local_78) /(fVar13 * fVar20);
						uv.x = (float)(~-(uint)(0.0 <= fVar19) & 0x40000000 |(uint)(fVar15 + 2.0) & -(uint)(0.0 <= fVar19));
						position.x = (float)local_98._0_4_ * local_f8 + (float)local_178._0_4_;
						position.y = (float)local_98._4_4_ * fStack_f4 + (float)local_178._4_4_;
						position.z = UVar21.z * (float)local_e8._0_4_ + local_158;
						tangent.y = fStack_d4;
						tangent.x = (float)local_d8;
						UVar21.z = UVar22.z;
						UVar21.x = (float)local_a8._0_4_;
						UVar21.y = (float)local_a8._4_4_;
						tangent.z = (float)local_188._0_4_;
						this.AddWoundVertex(position, uv, UVar21, tangent, bone, color);
						__this_00 = this._weights;
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						iVar12 = __this_00._size;
						local_118.get_Item(__this_00, index);
						auVar17._8_8_ = local_118._24_8_;
						auVar17._0_8_ = local_118._16_8_;
						value.m_Weight2 = (float)local_118._8_4_;
						value.m_Weight3 = (float)local_118._12_4_;
						value.m_Weight0 = (float)local_118._0_4_;
						value.m_Weight1 = (float)local_118._4_4_;
						value.m_BoneIndex0 = local_118._16_4_;
						value.m_BoneIndex1 = local_118._20_4_;
						value.m_BoneIndex2 = local_118._24_4_;
						value.m_BoneIndex3 = local_118._28_4_;
						__this_00.set_Item(iVar12 + -1, value);
					}
				}
				local_1b8.Dispose();
				if (2 < polygon._size) {
					iVar12 = 2;
					do {
						while(true) {
							__this_01 = this._wound;
							fVar13 = local_138;
							fVar15 = fStack_134;
							fVar19 = fStack_130;
							fVar8 = fStack_12c;
							if (__this_01 == null) goto label_05c5a5ea;
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_01._items;
							if (pSVar5 == null) goto label_05c5a5ea;
							uVar3 = __this_01._size;
							if (uVar3 < (uint)pSVar5.Length) {
								__this_01._size = uVar3 + 1;
								pSVar5[(int)uVar3] = item;
							}
							else {
								__this_01.AddWithResize(item);
								__this_01 = this._wound;
								fVar13 = local_138;
								fVar15 = fStack_134;
								fVar19 = fStack_130;
								fVar8 = fStack_12c;
								if (__this_01 == null) goto label_05c5a5ea;
							}
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_01._items;
							fVar13 = local_138;
							fVar15 = fStack_134;
							fVar19 = fStack_130;
							fVar8 = fStack_12c;
							if (pSVar5 == null) goto label_05c5a5ea;
							item_00 = iVar12 + item + -1;
							uVar3 = __this_01._size;
							if (uVar3 < (uint)pSVar5.Length) {
								__this_01._size = uVar3 + 1;
								pSVar5[(int)uVar3] = item_00;
							}
							else {
								__this_01.AddWithResize(item_00);
								__this_01 = this._wound;
								fVar13 = local_138;
								fVar15 = fStack_134;
								fVar19 = fStack_130;
								fVar8 = fStack_12c;
								if (__this_01 == null) goto label_05c5a5ea;
							}
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_01._items;
							fVar13 = local_138;
							fVar15 = fStack_134;
							fVar19 = fStack_130;
							fVar8 = fStack_12c;
							if (pSVar5 == null) goto label_05c5a5ea;
							uVar3 = __this_01._size;
							if ((uint)pSVar5.Length <= uVar3) break;
							__this_01._size = uVar3 + 1;
							pSVar5[(int)uVar3] = iVar12 + item;
							iVar12 = iVar12 + 1;
							if (polygon._size <= iVar12) {
								return;
							}
						}
						__this_01.AddWithResize(iVar12 + item);
						iVar12 = iVar12 + 1;
					} while (iVar12 < polygon._size);
				}
			}
			return;
		}

		[Token(Token = "0x60045AD")]
		[Address(RVA = "0x5B5A6C0", Offset = "0x5B596C0", VA = "0x5B5A6C0")]
		private void AddCap(List<Vector3> rim, CutPlane wrist)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$AddCap): 244 lines keep C-only constructs
			int iVar1;
			TitanLimbMesh.CutMeshData.c__DisplayClass13_0 pCVar2;
			int piVar3;
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
			uint uVar17;
			uint uVar18;
			uint uVar22;
			uint uVar23;
			uint uVar24;
			uint uVar25;
			uint uVar26;
			uint uVar27;
			uint uVar28;
			uint uVar29;
			uint uVar30;
			uint uVar31;
			uint uVar32;
			uint uVar33;
			ulong uVar19;
			ulong uVar20;
			uint uVar34;
			uint uVar35;
			ulong uVar21;
			uint uVar36;
			uint uVar37;
			Vector3[] pUVar38;
			List<Vector3> pSVar39;
			Color color;
			Color color_00;
			Color color_01;
			Color color_02;
			Color color_03;
			Color color_04;
			Color color_05;
			Color color_06;
			Color color_07;
			Color color_08;
			System_Nullable_Vector3__o d;
			uint uVar40;
			uint uVar41;
			uint uVar42;
			long lVar43;
			MethodInfo pMVar44;
			bool bVar45;
			TitanLimbMesh.CutMeshData.c__DisplayClass13_0 __this_00;
			UnityEngine_Vector3_StaticFields pUVar46;
			Comparison<T> comparison;
			List<Vector3> __this_01;
			object pIVar47;
			ulong uVar48;
			int index;
			ulong uVar50;
			int iVar51;
			uint uVar52;
			UnityEngine_Vector3_StaticFields pUVar53;
			Vector3 pUVar54;
			long lVar55;
			Vector3 pUVar56;
			int iVar57;
			byte[] auVar61 = new byte[12];
			byte[] auVar62 = new byte[12];
			uint extraout_XMM0_Dc_00;
			byte[] auVar63 = new byte[12];
			float fVar59;
			byte[] auVar64 = new byte[12];
			float fVar58;
			byte[] auVar65 = new byte[16];
			float extraout_XMM0_Dc;
			float extraout_XMM0_Dd;
			byte[] auVar66 = new byte[16];
			ulong uVar60;
			byte[] auVar67 = new byte[16];
			byte[] extraout_var = new byte[12];
			byte[] auVar68 = new byte[16];
			byte[] auVar70 = new byte[16];
			byte[] auVar69 = new byte[16];
			byte[] auVar71 = new byte[16];
			byte[] auVar72 = new byte[16];
			byte[] extraout_var_00 = new byte[12];
			byte[] auVar73 = new byte[16];
			byte[] auVar75 = new byte[16];
			byte[] auVar74 = new byte[16];
			uint extraout_XMM0_Dd_00;
			float fVar76;
			float fVar77;
			float fVar78;
			float fVar79;
			uint uVar80;
			uint uVar81;
			byte[] auVar82 = new byte[12];
			byte[] auVar83 = new byte[16];
			byte[] auVar84 = new byte[16];
			byte[] auVar85 = new byte[16];
			byte[] auVar86 = new byte[16];
			float fVar87;
			float fVar88;
			float fVar89;
			Vector3 UVar90;
			Vector3 UVar91;
			Vector3 value;
			Vector3 a;
			Vector3 a_00;
			Vector3 a_01;
			Vector3 a_02;
			Vector3 b;
			Vector3 b_00;
			Vector3 b_01;
			Vector3 b_02;
			Vector3 b_03;
			Vector3 c;
			Vector3 c_00;
			Vector3 c_01;
			Vector3 c_02;
			Vector3 c_03;
			Vector3 c_04;
			Vector3 c_05;
			Vector3 c_06;
			Vector3 c_07;
			Vector3 c_08;
			float local_288;
			float fStack_284;
			float local_208;
			byte[] local_1f8 = new byte[8];
			System_Collections_Generic_List_Enumerator_T__o pSStack_1f0;
			float local_1e8;
			float fStack_1e4;
			float fStack_1e0;
			float fStack_1dc;
			byte[] local_1d8 = new byte[8];
			float local_1c8;
			float fStack_1c4;
			ulong uStack_1c0;
			ulong local_1b8;
			float local_1a8;
			float fStack_1a4;
			ulong uStack_1a0;
			byte[] local_198 = new byte[16];
			ulong local_188;
			ulong uStack_180;
			MethodInfo local_170;
			int local_164;
			float local_160;
			float local_15c;
			float local_158;
			ulong local_148;
			ulong uStack_140;
			ulong local_130;
			float local_128;
			float fStack_124;
			float fStack_120;
			float fStack_11c;
			float local_118;
			float fStack_114;
			byte[] local_108 = new byte[16];
			ulong local_f8;
			float local_e8;
			float local_c0;
			uint uStack_b4;
			float local_b0;
			float fStack_ac;
			float fStack_a8;
			uint local_a0;
			float fStack_98;
			ulong local_80;
			ulong uStack_78;
			float local_60;
			float fStack_5c;
			float fStack_58;

			local_1c8 = 0.0;
			fStack_1c4 = 0.0;
			uStack_1c0._0_4_ = 0.0;
			uStack_1c0._4_4_ = 0.0;
			local_1d8 = (byte[])0x0;
			__this_00 = new TitanLimbMesh.CutMeshData.c__DisplayClass13_0();
			if (rim == null) goto label_05c5c055;
			if (rim._size < 3) {
				return;
			}
			if (__this_00 == null) goto label_05c5c055;
			pUVar53 = typeof(Vector3).static_fields;
			fVar76 = (pUVar53.zeroVector).z;
			fVar58 = (pUVar53.zeroVector).y;
			__this_00.center.x = (pUVar53.zeroVector).x;
			__this_00.center.y = fVar58;
			__this_00.center.z = fVar76;
			pUVar53 = (UnityEngine_Vector3_StaticFields)local_1f8;
			pUVar53.GetEnumerator(rim);
			local_1c8 = local_1e8;
			fStack_1c4 = fStack_1e4;
			uStack_1c0._4_4_ = fStack_1dc;
			uStack_1c0._0_4_ = fStack_1e0;
			local_1d8 = local_1f8;
			local_1f8 = (byte[])0x0;
			pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o)local_1d8;
			while (bVar45 = local_1d8.MoveNext()) {
				uVar4 = __this_00.center.x;
				uVar22 = __this_00.center.y;
				fVar76 = __this_00.center.z;
				__this_00.center.x = (float)uVar4 + local_1c8;
				__this_00.center.y = (float)uVar22 + fStack_1c4;
				__this_00.center.z = (float)uStack_1c0 + fVar76;
			}
			local_1d8.Dispose();
			uVar5 = __this_00.center.x;
			uVar23 = __this_00.center.y;
			auVar65._4_4_ = uVar23;
			auVar65._0_4_ = uVar5;
			auVar65._8_8_ = 0;
			fVar76 = __this_00.center.z;
			fVar79 = 0.0;
			uVar80 = 0;
			uVar81 = 0;
			auVar83._0_4_ = (float)rim._size;
			auVar83._4_4_ = auVar83._0_4_;
			auVar83._8_8_ = 0;
			auVar65 = divps(auVar65, auVar83);
			__this_00.center.x = (float)auVar65._0_4_;
			__this_00.center.y = (float)auVar65._4_4_;
			__this_00.center.z = fVar76 / auVar83._0_4_;
			UVar90 = rim.get_Item(0) ;
			pCVar2 = &__this_00.fields;
			fVar58 = (pCVar2.center).x;
			fVar77 = __this_00.center.y;
			uVar41 = (pCVar2.center).x;
			uVar42 = (pCVar2.center).y;
			fVar76 = UVar90.z - __this_00.center.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_1f8 = (byte[])0x0;
				fVar58 = (float)uVar41;
				fVar77 = (float)uVar42;
			}
			else {
				local_1f8 = (byte[])0x0;
			}
			local_1f8 = (byte[])0x0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_1f8 = (byte[])0x0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			auVar84._0_4_ = UVar90.x - fVar58;
			auVar84._4_4_ = UVar90.y - fVar77;
			auVar84._8_4_ = extraout_XMM0_Dc - 0.0;
			auVar84._12_4_ = extraout_XMM0_Dd - 0.0;
			auVar66._4_4_ = fVar79;
			auVar66._0_4_ = fVar76;
			auVar66._8_4_ = uVar80;
			auVar66._12_4_ = uVar81;
			auVar67._4_12_ = auVar66._4_12_;
			fVar58 = fVar76 * fVar76 + auVar84._4_4_ * auVar84._4_4_ + auVar84._0_4_ * auVar84._0_4_;
			if (fVar58 < 0.0) {
				auVar68._0_4_ = sqrtf(fVar58);
				auVar68._4_12_ = extraout_var;
				uVar60 = auVar68._0_8_;
				if (auVar68._0_4_ <= 1e-05) goto label_05c5a9d4;
		label_05c5aa03: ;
				auVar69._0_4_ = (float)uVar60;
				fVar76 = fVar76 / auVar69._0_4_;
				uVar80 = (undefined4)((ulong)uVar60 >> 0x20);
				auVar70._8_4_ = uVar80;
				auVar70._0_8_ = uVar60;
				auVar70._12_4_ = uVar80;
				auVar69._8_8_ = auVar70._8_8_;
				auVar69._4_4_ = auVar69._0_4_;
				auVar65 = divps(auVar84, auVar69);
				local_1f8 = (byte[])auVar65._0_8_;
				pUVar46 = (UnityEngine_Vector3_StaticFields)local_1f8;
			}
			else {
				auVar67._0_4_ = SQRT(fVar58);
				uVar60 = auVar67._0_8_;
				if (1e-05 < auVar67._0_4_) goto label_05c5aa03;
		label_05c5a9d4: ;
				pUVar46 = typeof(Vector3).static_fields;
				fVar76 = (pUVar46.zeroVector).z;
				fVar79 = 0.0;
			}
			fVar58 = (pUVar46.zeroVector).x;
			fVar77 = (pUVar46.zeroVector).y;
			uVar40 = (pUVar46.zeroVector).x;
			__this_00.axisX.x = fVar58;
			__this_00.axisX.y = fVar77;
			__this_00.axisX.z = fVar76;
			if (wrist == null) goto label_05c5c055;
			uVar6 = wrist.Normal.x;
			uVar24 = wrist.Normal.y;
			fVar78 = wrist.Normal.z;
			fVar89 = (float)uVar24;
			fVar87 = 0.0;
			fVar88 = 0.0;
			fVar59 = fVar58;
			if (Il2CppMethodInitialized_0753e72d == false) {
				local_188 = (MethodInfo)CONCAT44(fVar58, uVar24);
				uStack_180 = 0;
				Il2CppMethodInitialized_0753e72d = true;
				fVar89 = (float)local_188;
				fVar58 = local_188._4_4_;
				fVar87 = (float)uStack_180;
				fVar88 = uStack_180._4_4_;
				fVar59 = (float)uVar40;
			}
			local_1f8 = (byte[])0x0;
			auVar85._0_4_ = fVar76 * fVar89 - fVar77 * fVar78;
			auVar85._4_4_ = fVar78 * fVar58 - (float)uVar6 * fVar76;
			auVar85._8_4_ = fVar79 * fVar87 - 0.0;
			auVar85._12_4_ = fVar88 * 0.0 - fVar79 * 0.0;
			fVar76 = fVar77 * (float)uVar6 - (float)uVar24 * fVar59;
			auVar71._4_4_ = fVar77;
			auVar71._0_4_ = fVar76;
			auVar71._8_4_ = fVar77;
			auVar71._12_4_ = fVar77;
			auVar72._4_12_ = auVar71._4_12_;
			fVar58 = fVar76 * fVar76 + auVar85._4_4_ * auVar85._4_4_ + auVar85._0_4_ * auVar85._0_4_;
			if (fVar58 < 0.0) {
				auVar73._0_4_ = sqrtf(fVar58);
				auVar73._4_12_ = extraout_var_00;
				uVar60 = auVar73._0_8_;
				if (auVar73._0_4_ <= 1e-05) goto label_05c5abc8;
		label_05c5abff: ;
				auVar74._0_4_ = (float)uVar60;
				fVar76 = fVar76 / auVar74._0_4_;
				uVar80 = (undefined4)((ulong)uVar60 >> 0x20);
				auVar75._8_4_ = uVar80;
				auVar75._0_8_ = uVar60;
				auVar75._12_4_ = uVar80;
				auVar74._8_8_ = auVar75._8_8_;
				auVar74._4_4_ = auVar74._0_4_;
				auVar65 = divps(auVar85, auVar74);
				local_1f8 = (byte[])auVar65._0_8_;
			}
			else {
				auVar72._0_4_ = SQRT(fVar58);
				uVar60 = auVar72._0_8_;
				if (1e-05 < auVar72._0_4_) goto label_05c5abff;
		label_05c5abc8: ;
				pUVar53 = typeof(Vector3).static_fields;
				fVar76 = (float)((System_Collections_Generic_List_Enumerator_T__Fields)&pUVar53.zeroVector)._index;
			}
			*(List<T>*)&__this_00.axisY =((System_Collections_Generic_List_Enumerator_T__Fields)&pUVar53.zeroVector)._list;
			__this_00.axisY.z = fVar76;
			comparison = new Comparison<Vector3>((object)__this_00, (intptr_t)MethodInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0_AddCap_b__0);
			rim.Sort(comparison);
			local_1f8.GetEnumerator(rim);
			local_1c8 = local_1e8;
			fStack_1c4 = fStack_1e4;
			uStack_1c0._4_4_ = fStack_1dc;
			uStack_1c0._0_4_ = fStack_1e0;
			local_1d8 = local_1f8;
			local_1f8 = (byte[])0x0;
			local_208 = 0.0;
			pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o)local_1d8;
			while(true) {
				bVar45 = local_1d8.MoveNext();
				fVar58 = fStack_1c4;
				fVar76 = local_1c8;
				if (!bVar45) break;
				uVar7 = __this_00.center.x;
				uVar25 = __this_00.center.y;
				fVar79 = (float)uStack_1c0;
				fVar77 = __this_00.center.z;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar37 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar37 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar37 == 0) {
				}
				fVar79 = fVar79 - fVar77;
				fVar76 = (fVar58 - (float)uVar25) * (fVar58 - (float)uVar25) +(fVar76 - (float)uVar7) * (fVar76 - (float)uVar7) + fVar79 * fVar79;
				if (fVar76 < 0.0) {
					fVar76 = sqrtf(fVar76);
				}
				else {
					fVar76 = SQRT(fVar76);
				}
				if (local_208 <= fVar76) {
					local_208 = fVar76;
				}
			}
			local_1d8.Dispose();
			iVar51 = rim._size;
			__this_01 = new List<Vector3>(iVar51 * 2);
			iVar51 = rim._size;
			if (iVar51 < 1) {
				if (__this_01 == null) goto label_05c5c055;
			}
			else {
				index = 0;
				do {
					iVar1 = index + 1;
					UVar90 = rim.get_Item(iVar1 % iVar51);
					UVar91 = rim.get_Item(index);
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar37 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar37 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar37 == 0) {
					}
					fVar77 = UVar91.z - UVar90.z;
					local_288 = UVar90.x;
					fStack_284 = UVar90.y;
					fVar76 = UVar91.x - local_288;
					fVar58 = UVar91.y - fStack_284;
					fVar76 = fVar77 * fVar77 + fVar58 * fVar58 + fVar76 * fVar76;
					if (fVar76 < 0.0) {
						fVar76 = sqrtf(fVar76);
					}
					else {
						fVar76 = SQRT(fVar76);
					}
					fVar76 = ceilf(fVar76 / (local_208 * 0.32));
					iVar51 = (int)fVar76;
					if (iVar51 < 2) {
						iVar51 = 1;
					}
					if (__this_01 == null) {
						rim.get_Item(0);
						throw new NullReferenceException();
					}
					iVar57 = 0;
					do {
						while(true) {
							UVar91 = rim.get_Item(index);
							piVar3 = &__this_01._version;
							*piVar3 = *piVar3 + 1;
							pUVar38 = __this_01._items;
							if (pUVar38 == null) goto label_05c5c055;
							fVar76 = (float)iVar57 / (float)iVar51;
							auVar82 = ZEXT812(0x3f800000);
							if (fVar76 <= auVar82._0_4_) {
								auVar82._4_8_ = auVar82._4_8_;
								auVar82._0_4_ = fVar76;
							}
							fVar76 = (float)(-(uint)(0.0 <= fVar76) & auVar82._0_4_);
							fVar58 = fVar76 * (local_288 - UVar91.x) + UVar91.x;
							fVar77 = fVar76 * (fStack_284 - UVar91.y) + UVar91.y;
							fVar76 = (UVar90.z - UVar91.z) * fVar76 + UVar91.z;
							uVar52 = __this_01._size;
							if ((uint)pUVar38.Length <= uVar52) break;
							__this_01._size = uVar52 + 1;
							pUVar38[(int)uVar52].x = fVar58;
							pUVar38[(int)uVar52].y = fVar77;
							pUVar38[(int)uVar52].z = fVar76;
							iVar57 = iVar57 + 1;
							if (iVar51 == iVar57) goto label_05c5ae40;
						}
						UVar91.z = fVar76;
						UVar91.x = fVar58;
						UVar91.y = fVar77;
						__this_01.AddWithResize(UVar91);
						iVar57 = iVar57 + 1;
					} while (iVar51 != iVar57);
		label_05c5ae40: ;
					iVar51 = rim._size;
					index = iVar1;
				} while (iVar1 < iVar51);
			}
			local_188 = (MethodInfo)new Vector3[__this_01._size];
			pIVar47 = new Vector3[__this_01._size];
			local_170 = (MethodInfo)new Vector3[__this_01._size];
			uVar52 = __this_01._size;
			uVar48 = (ulong)uVar52;
			if (0 < (int)uVar52) {
				lVar55 = 0x28;
				uVar50 = 0;
				do {
					iVar51 = (int)uVar50;
					fVar76 = sinf((float)iVar51 * 12.9898 + 4.1414);
					fVar58 = floorf(fVar76 * 43758.547);
					UVar90 = __this_01.get_Item(iVar51);
					fVar58 = fVar76 * 43758.547 - fVar58;
					auVar61 = ZEXT812(0x3f800000);
					if (fVar58 <= auVar61._0_4_) {
						auVar61._4_8_ = auVar61._4_8_;
						auVar61._0_4_ = fVar58;
					}
					fVar58 = (float)(-(uint)(0.0 <= fVar58) & auVar61._0_4_);
					fVar76 = fVar58 * 0.05 + 0.87;
					if (local_188 == null) goto label_05c5c055;
					if (*(uint)&local_188.name <= uVar50) goto label_05c5c05a;
					uVar8 = __this_00.center.x;
					uVar26 = __this_00.center.y;
					fVar77 = __this_00.center.z;
					fVar87 = UVar90.x - (float)uVar8;
					fVar88 = UVar90.y - (float)uVar26;
					fVar78 = UVar90.z - fVar77;
					uVar9 = wrist.Normal.x;
					uVar27 = wrist.Normal.y;
					fVar89 = (fVar58 * 0.07 + 0.025) * local_208;
					fVar79 = wrist.Normal.z;
					*(ulong)((long)local_188 + lVar55 + -8) = CONCAT44((fVar76 * fVar88 + (float)uVar26) - fVar89 * (float)uVar27, (fVar76 * fVar87 + (float)uVar8) - fVar89 * (float)uVar9);
					*(float)((long)&local_188.methodPointer + lVar55) = (fVar78 * fVar76 + fVar77) - fVar79 * fVar89;
					uVar10 = __this_00.center.x;
					uVar28 = __this_00.center.y;
					local_198._4_4_ = uVar28;
					local_198._0_4_ = uVar10;
					local_198._8_8_ = 0;
					fVar89 = fVar58 * 0.12 + 0.54;
					local_1b8 = CONCAT44(local_1b8._4_4_, fVar78 * fVar89 + __this_00.center.z);
					local_1a8 = wrist.Normal.x;
					fStack_1a4 = wrist.Normal.y;
					uStack_1a0._0_4_ = 0.0;
					uStack_1a0._4_4_ = 0.0;
					fVar76 = wrist.Normal.z;
					fVar77 = sinf((float)(iVar51 + 0x11) * 12.9898 + 4.1414);
					fVar79 = floorf(fVar77 * 43758.547);
					fVar79 = fVar77 * 43758.547 - fVar79;
					auVar62 = ZEXT812(0x3f800000);
					if (fVar79 <= auVar62._0_4_) {
						auVar62._4_8_ = auVar62._4_8_;
						auVar62._0_4_ = fVar79;
					}
					if (pIVar47 == null) goto label_05c5c055;
					if (*(uint)&pIVar47[1].monitor <= uVar50) goto label_05c5c05a;
					fVar77 = (float)(~-(uint)(0.0 <= fVar79) & 0x3e19999a |(uint)(auVar62._0_4_ * 0.13 + 0.15) & -(uint)(0.0 <= fVar79)) * local_208;
					*(ulong)((long)pIVar47 + lVar55 + -8) = CONCAT44((fVar89 * fVar88 + (float)local_198._4_4_) - fStack_1a4 * fVar77, (fVar89 * fVar87 + (float)local_198._0_4_) - local_1a8 * fVar77);
					*(float)((long)&pIVar47.klass + lVar55) = (float)local_1b8 - fVar76 * fVar77;
					if (local_170 == null) goto label_05c5c055;
					if (*(uint)&local_170.name <= uVar50) goto label_05c5c05a;
					uVar11 = __this_00.center.x;
					uVar29 = __this_00.center.y;
					fVar76 = __this_00.center.z;
					uVar12 = wrist.Normal.x;
					uVar30 = wrist.Normal.y;
					fVar77 = (fVar58 * 0.05 + 0.39) * local_208;
					fVar58 = wrist.Normal.z;
					*(ulong)((long)local_170 + lVar55 + -8) = CONCAT44((fVar88 * 0.26 + (float)uVar29) - fVar77 * (float)uVar30, (fVar87 * 0.26 + (float)uVar11) - fVar77 * (float)uVar12);
					*(float)((long)&local_170.methodPointer + lVar55) = (fVar78 * 0.26 + fVar76) - fVar58 * fVar77;
					uVar50 = uVar50 + 1;
					uVar48 = (ulong)__this_01._size;
					lVar55 = lVar55 + 0xc;
				} while ((long)uVar50 < (long)uVar48);
			}
			pSVar39 = this._vertices;
			if (pSVar39 != null) {
				local_164 = pSVar39._size;
				if (0 < (int)uVar48) {
					uVar13 = __this_00.center.x;
					uVar31 = __this_00.center.y;
					uVar14 = wrist.Normal.x;
					uVar32 = wrist.Normal.y;
					fVar76 = local_208 * 0.46;
					local_160 = __this_00.center.z - wrist.Normal.z * fVar76;
					local_128 = (float)uVar13 - fVar76 * (float)uVar14;
					fStack_124 = (float)uVar31 - fVar76 * (float)uVar32;
					fStack_120 = 0.0 - fVar76 * 0.0;
					fStack_11c = 0.0 - fVar76 * 0.0;
					local_108._0_4_ = SUB124(ZEXT812(0x3d99999a), 0) * local_208;
					local_108._4_8_ = SUB128(ZEXT812(0x3d99999a), 4);
					local_108._12_4_ = 0;
					lVar55 = 0x28;
					uVar50 = 0;
					local_118 = (float)local_108._0_4_;
					fStack_114 = (float)local_108._0_4_;
					do {
						local_130 = uVar50 + 1;
						uVar48 = (long)((ulong)(uint)((int)local_130 >> 0x1f) << 0x20 | local_130 & 0xffffffff) %(long)(int)uVar48;
						fVar76 = sinf((float)((int)uVar50 + 7) * 12.9898 + 4.1414);
						fVar58 = floorf(fVar76 * 43758.547);
						UVar90 = __this_01.get_Item((int)uVar50) ;
						uVar52 = (uint)uVar48;
						UVar91 = __this_01.get_Item(uVar52) ;
						auVar86._8_4_ = extraout_XMM0_Dc_00;
						auVar86._0_8_ = UVar91._0_8_;
						auVar86._12_4_ = extraout_XMM0_Dd_00;
						fVar58 = fVar76 * 43758.547 - fVar58;
						auVar63 = ZEXT812(0x3f800000);
						if (fVar58 <= auVar63._0_4_) {
							auVar63._4_8_ = auVar63._4_8_;
							auVar63._0_4_ = fVar58;
						}
						fVar58 = (float)(-(uint)(0.0 <= fVar58) & auVar63._0_4_);
						fVar76 = 0.0;
						if (0.0 <= fVar58) {
							fVar76 = fVar58;
						}
						fVar58 = fVar76 * 0.32000002 + 0.34;
						fVar77 = fVar76 * 0.08499999 + 0.035;
						fVar79 = fVar76 * 0.065 + 0.035;
						fVar78 = fVar76 * 0.13 + 0.65;
						if (local_188 == null) goto label_05c5c055;
						if (((uint)local_188.name <= uVar52) ||(local_198 = auVar86, ((ulong)local_188.name & 0xffffffff) <= uVar50)) {
		label_05c5c05a: ;
							throw new IndexOutOfRangeException();
						}
						fStack_1a4 = fVar78;
						local_1a8 = fVar79;
						uStack_1a0._0_4_ = 0.0;
						uStack_1a0._4_4_ = 0.0;
						uVar48 = uVar48 & 0xffffffff;
						local_1b8 = uVar48 * 3;
						pUVar54 = (Vector3)((long)&local_188.klass + uVar48 * 0xc);
						local_158 = pUVar54.z;
						local_148._0_4_ = pUVar54.x;
						local_148._4_4_ = pUVar54.y;
						local_1f8 = (byte[])0x0;
						pSStack_1f0 = null;
						value.z = *(float)((long)&local_188.methodPointer + lVar55);
						value._0_8_ = *(ulong)((long)local_188 + lVar55 + -8);
						local_1f8 = new Nullable<Vector3>(value);
						uVar60 = _local_1a8;
						d.value._4_8_ = pSStack_1f0;
						d.hasValue = (bool)local_1f8[0];
						d._1_3_ = local_1f8._1_3_;
						d.value.x = (float)local_1f8._4_4_;
						local_1a8 = fVar58;
						fStack_1a4 = fVar77;
						uVar19 = _local_1a8;
						local_1a8 = (float)uVar60;
						fStack_1a4 = SUB84(uVar60, 4);
						uStack_1a0._0_4_ = local_1a8;
						uStack_1a0._4_4_ = fStack_1a4;
						local_1a8 = (float)uVar60;
						fStack_1a4 = SUB84(uVar60, 4);
						local_1a8 = (float)uVar60;
						fStack_1a4 = SUB84(uVar60, 4);
						color.b = local_1a8;
						color.a = fStack_1a4;
						color.r = fVar58;
						color.g = fVar77;
						b.z = UVar91.z;
						b.x = (float)local_198._0_4_;
						b.y = (float)local_198._4_4_;
						c.z = local_158;
						c.x = (float)(undefined4)local_148;
						c.y = (float)local_148._4_4_;
						_local_1a8 = uVar19;
						this.AddWoundFace(UVar90, b, c, d, wrist, color);
						local_198._0_8_ = uVar50;
						if ((*(uint)&local_188.name <= uVar50) || (*(uint)&local_188.name <= uVar52)) goto label_05c5c05a;
						if (pIVar47 == null) goto label_05c5c055;
						if ((*(uint)&pIVar47[1].monitor <= uVar50) || (*(uint)&pIVar47[1].monitor <= uVar52)) goto label_05c5c05a;
						uVar60 = *(ulong)((long)local_188 + lVar55 + -8);
						fVar89 = *(float)((long)&local_188.methodPointer + lVar55);
						uVar15 = pUVar54.x;
						uVar33 = pUVar54.y;
						uVar19 = *(ulong)((long)pIVar47 + lVar55 + -8);
						uVar20 = *(ulong)((long)&pIVar47[2].klass + local_1b8 * 4);
						uVar16 = wrist.Normal.x;
						uVar34 = wrist.Normal.y;
						c_00.z =wrist.Normal.z * (float)local_108._0_4_ +(fVar89 + pUVar54.z + *(float)((long)&pIVar47.klass + lVar55) + *(float)((long)&pIVar47[2].monitor + local_1b8 * 4)) * 0.25;
						fVar87 = ((float)uVar20 + (float)uVar19 + (float)uVar60 + (float)uVar15) * 0.25 +(float)uVar16 * local_118;
						fVar88 = ((float)((ulong)uVar20 >> 0x20) +(float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar60 >> 0x20) + (float)uVar33) * 0.25 +(float)uVar34 * fStack_114;
						color_00.b = (float)uStack_1a0;
						color_00.a = uStack_1a0._4_4_;
						color_00.r = local_1a8;
						color_00.g = fStack_1a4;
						UVar90.z = fVar89;
						UVar90.x = (float)(int)uVar60;
						UVar90.y = (float)(int)((ulong)uVar60 >> 0x20);
						c_00.y = fVar88;
						c_00.x = fVar87;
						this.AddWoundFace(UVar90, (UnityEngine_Vector3_o)*pUVar54, c_00, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_00);
						lVar43 = local_1b8;
						if ((*(uint)&local_188.name <= uVar52) || (*(uint)&pIVar47[1].monitor <= uVar52)) goto label_05c5c05a;
						pUVar56 = (Vector3)((long)&pIVar47[2].klass + local_1b8 * 4);
						local_60 = fVar58 * 0.85;
						fStack_5c = fVar77 * 0.8;
						fStack_58 = fVar79 * 0.8;
						color_01.g = fStack_5c;
						color_01.r = local_60;
						color_01.a = fVar78;
						color_01.b = fStack_58;
						c_01.z = c_00.z;
						c_01.x = fVar87;
						c_01.y = fVar88;
						this.AddWoundFace((UnityEngine_Vector3_o)*pUVar54, (UnityEngine_Vector3_o)*pUVar56, c_01, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_01);
						auVar65 = local_198;
						if ((uint)pIVar47[1].monitor <= uVar52) goto label_05c5c05a;
						uVar60 = local_198._0_8_;
						if (((ulong)pIVar47[1].monitor & 0xffffffff) <= (ulong)local_198._0_8_) goto label_05c5c05a;
						color_02.b = (float)uStack_1a0;
						color_02.a = uStack_1a0._4_4_;
						color_02.r = local_1a8;
						color_02.g = fStack_1a4;
						b_00.z = *(float)((long)&pIVar47.klass + lVar55);
						b_00._0_8_ = *(ulong)((long)pIVar47 + lVar55 + -8);
						c_02.z = c_00.z;
						c_02.x = fVar87;
						c_02.y = fVar88;
						this.AddWoundFace((UnityEngine_Vector3_o)*pUVar56, b_00, c_02, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_02);
						if (((ulong)*(uint)&pIVar47[1].monitor <= (ulong)uVar60) ||((ulong)*(uint)&local_188.name <= (ulong)uVar60)) goto label_05c5c05a;
						fVar89 = fVar58 * 0.7;
						local_148 = CONCAT44(fVar77, fVar89);
						uStack_140 = CONCAT44(fVar76 * 0.0 + 0.0, fVar76 * 0.0 + 0.0);
						local_80 = CONCAT44(fVar77 * 0.65, fVar89);
						uStack_78 = CONCAT44(fVar78, fVar79 * 0.65);
						color_03.b = fVar79 * 0.65;
						color_03.a = fVar78;
						color_03.r = fVar89;
						color_03.g = fVar77 * 0.65;
						a.z = *(float)((long)&pIVar47.klass + lVar55);
						a._0_8_ = *(ulong)((long)pIVar47 + lVar55 + -8);
						b_01.z = *(float)((long)&local_188.methodPointer + lVar55);
						b_01._0_8_ = *(ulong)((long)local_188 + lVar55 + -8);
						c_03.z = c_00.z;
						c_03.x = fVar87;
						c_03.y = fVar88;
						local_158 = fVar77;
						this.AddWoundFace(a, b_01, c_03, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_03);
						if (((ulong)*(uint)&pIVar47[1].monitor <= (ulong)uVar60) || (*(uint)&pIVar47[1].monitor <= uVar52) ) goto label_05c5c05a;
						if (local_170 == null) goto label_05c5c055;
						if (((ulong)*(uint)&local_170.name <= (ulong)uVar60) || (*(uint)&local_170.name <= uVar52)) goto label_05c5c05a;
						fVar76 = *(float)((long)&pIVar47.klass + lVar55);
						uVar19 = *(ulong)((long)pIVar47 + lVar55 + -8);
						uVar17 = pUVar56.x;
						uVar35 = pUVar56.y;
						fVar89 = *(float)((long)&pIVar47[2].monitor + lVar43 * 4);
						fVar87 = *(float)((long)&local_170.methodPointer + lVar55);
						uVar20 = *(ulong)((long)local_170 + lVar55 + -8);
						uVar21 = *(ulong)((long)&local_170.klass + local_1b8 * 4);
						fVar88 = *(float)((long)&local_170.return_type + local_1b8 * 4);
						local_f8._0_4_ = wrist.Normal.x;
						local_f8._4_4_ = wrist.Normal.y;
						local_15c = wrist.Normal.z;
						local_e8 = sinf((float)(auVar65._0_4_ + 0x1c) * 12.9898 + 4.1414);
						local_e8 = local_e8 * 43758.547;
						fVar59 = floorf(local_e8);
						fVar59 = local_e8 - fVar59;
						auVar64 = ZEXT812(0x3f800000);
						if (fVar59 <= auVar64._0_4_) {
							auVar64._4_8_ = auVar64._4_8_;
							auVar64._0_4_ = fVar59;
						}
						if (((ulong)*(uint)&pIVar47[1].monitor <= (ulong)uVar60) || (*(uint)&pIVar47[1].monitor <= uVar52) ) goto label_05c5c05a;
						fVar59 = (float)(~-(uint)(0.0 <= fVar59) & 0x3d0f5c29 |(uint)(auVar64._0_4_ * 0.07 + 0.035) & -(uint)(0.0 <= fVar59)) * local_208;
						c_04.z = (fVar76 + fVar89 + fVar87 + fVar88) * 0.25 + local_15c * fVar59;
						fVar76 = ((float)uVar21 + (float)uVar20 + (float)uVar17 + (float)uVar19) * 0.25 +(float)local_f8 * fVar59;
						fVar89 = ((float)((ulong)uVar21 >> 0x20) +(float)((ulong)uVar20 >> 0x20) + (float)uVar35 + (float)((ulong)uVar19 >> 0x20)) * 0.25 + local_f8._4_4_ * fVar59;
						color_04.b = (float)uStack_1a0;
						color_04.a = uStack_1a0._4_4_;
						color_04.r = local_1a8;
						color_04.g = fStack_1a4;
						a_00.z = *(float)((long)&pIVar47.klass + lVar55);
						a_00._0_8_ = *(ulong)((long)pIVar47 + lVar55 + -8);
						c_04.y = fVar89;
						c_04.x = fVar76;
						this.AddWoundFace(a_00, (UnityEngine_Vector3_o)*pUVar56, c_04, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_04);
						pMVar44 = local_170;
						if ((*(uint)&pIVar47[1].monitor <= uVar52) || (*(uint)&local_170.name <= uVar52)) goto label_05c5c05a;
						pUVar54 = (Vector3)((long)&local_170.klass + local_1b8 * 4);
						local_158 = local_158 * 0.6;
						local_a0 = (undefined4)local_148;
						fStack_98 = fVar79 * 0.6;
						local_1b8 = CONCAT44(fVar78, fStack_98);
						color_05.g = local_158;
						color_05.r = (float)local_a0;
						color_05.a = fVar78;
						color_05.b = fStack_98;
						c_05.z = c_04.z;
						c_05.x = fVar76;
						c_05.y = fVar89;
						this.AddWoundFace((UnityEngine_Vector3_o)*pUVar56, (UnityEngine_Vector3_o)*pUVar54, c_05, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_05);
						if ((uint)pMVar44.name <= uVar52) goto label_05c5c05a;
						uVar60 = local_198._0_8_;
						if (((ulong)pMVar44.name & 0xffffffff) <= (ulong)local_198._0_8_) goto label_05c5c05a;
						local_b0 = fVar58 * 0.8;
						fStack_ac = fVar77 * 0.7;
						fStack_a8 = fVar79 * 0.7;
						color_06.g = fStack_ac;
						color_06.r = local_b0;
						color_06.a = fVar78;
						color_06.b = fStack_a8;
						b_02.z = *(float)((long)&pMVar44.methodPointer + lVar55);
						b_02._0_8_ = *(ulong)((long)pMVar44 + lVar55 + -8);
						c_06.z = c_04.z;
						c_06.x = fVar76;
						c_06.y = fVar89;
						this.AddWoundFace((UnityEngine_Vector3_o)*pUVar54, b_02, c_06, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_06);
						if (((ulong)*(uint)&pMVar44.name <= (ulong)uVar60) ||((ulong)*(uint)&pIVar47[1].monitor <= (ulong)uVar60)) goto label_05c5c05a;
						local_c0 = fVar58 * 0.65;
						uStack_b4 = (undefined4)((ulong)local_1b8 >> 0x20);
						color_07.g = local_158;
						color_07.r = local_c0;
						color_07.b = (float)local_1b8;
						color_07.a = local_1b8._4_4_;
						a_01.z = *(float)((long)&pMVar44.methodPointer + lVar55);
						a_01._0_8_ = *(ulong)((long)pMVar44 + lVar55 + -8);
						b_03.z = *(float)((long)&pIVar47.klass + lVar55);
						b_03._0_8_ = *(ulong)((long)pIVar47 + lVar55 + -8);
						c_07.z = c_04.z;
						c_07.x = fVar76;
						c_07.y = fVar89;
						this.AddWoundFace(a_01, b_03, c_07, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_07);
						if (((ulong)*(uint)&pMVar44.name <= (ulong)uVar60) || (*(uint)&pMVar44.name <= uVar52)) goto label_05c5c05a;
						c_08.y = fStack_124;
						c_08.x = local_128;
						color_08.b = 0.025;
						color_08.a = 0.7;
						color_08.r = 0.23;
						color_08.g = 0.02;
						a_02.z = *(float)((long)&pMVar44.methodPointer + lVar55);
						a_02._0_8_ = *(ulong)((long)pMVar44 + lVar55 + -8);
						c_08.z = local_160;
						this.AddWoundFace(a_02, (UnityEngine_Vector3_o)*pUVar54, c_08, (System_Nullable_Vector3__o)ZEXT816(0), wrist, color_08);
						uVar48 = (ulong)__this_01._size;
						lVar55 = lVar55 + 0xc;
						uVar50 = local_130;
					} while ((long)local_130 < (long)uVar48);
				}
				this.SmoothFleshNormals(local_164);
				local_1f8.GetEnumerator(__this_01);
				local_1c8 = local_1e8;
				fStack_1c4 = fStack_1e4;
				uStack_1c0 = (ulong)(uint)fStack_1e0;
				local_1d8 = local_1f8;
				local_1f8 = (byte[])0x0;
				local_288 = local_208;
				pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o)local_1d8;
				while(true) {
					bVar45 = local_1d8.MoveNext();
					fVar58 = fStack_1c4;
					fVar76 = local_1c8;
					if (!bVar45) break;
					uVar18 = __this_00.center.x;
					uVar36 = __this_00.center.y;
					fVar79 = (float)uStack_1c0;
					fVar77 = __this_00.center.z;
					if (Il2CppMethodInitialized_0753e729 == false) {
						Il2CppMethodInitialized_0753e729 = true;
						uVar37 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar37 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar37 == 0) {
					}
					fVar79 = fVar79 - fVar77;
					fVar76 = (fVar58 - (float)uVar36) * (fVar58 - (float)uVar36) +(fVar76 - (float)uVar18) * (fVar76 - (float)uVar18) + fVar79 * fVar79;
					if (fVar76 < 0.0) {
						fVar76 = sqrtf(fVar76);
					}
					else {
						fVar76 = SQRT(fVar76);
					}
					if (fVar76 <= local_288) {
						local_288 = fVar76;
					}
				}
				local_1d8.Dispose();
				this.AddBone((Vector3)__this_00.center, (Vector3)__this_00.axisX, (Vector3)__this_00.axisY, local_208, local_288 * 0.24, wrist);
				return;
			}
		label_05c5c055: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045AE")]
		[Address(RVA = "0x5B5C530", Offset = "0x5B5B530", VA = "0x5B5C530")]
		private static float Variation(int index)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$Variation): clean
			float fVar1;
			float fVar2;

			fVar1 = sinf((float)index * 12.9898 + 4.1414);
			fVar2 = floorf(fVar1 * 43758.547);
			fVar2 = fVar1 * 43758.547 - fVar2;
			fVar1 = 1.0;
			if (fVar2 <= 1.0) {
				fVar1 = fVar2;
			}
			return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
		}

		[Token(Token = "0x60045AF")]
		[Address(RVA = "0x5B5CD70", Offset = "0x5B5BD70", VA = "0x5B5CD70")]
		private void SmoothFleshNormals(int start)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$SmoothFleshNormals): 64 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			uint uVar3;
			List<Vector3> __this_00;
			byte[] auVar4 = new byte[16];
			int iVar5;
			Dictionary<Vector3, Vector3> __this_01;
			UnityEngine_Vector3_StaticFields pUVar6;
			int index;
			List<Vector3> pSVar7;
			float fVar8;
			float fVar9;
			uint uVar10;
			uint extraout_XMM0_Db;
			uint extraout_XMM0_Db_00;
			uint extraout_XMM0_Dc;
			uint extraout_XMM0_Dc_00;
			uint extraout_XMM0_Dc_01;
			uint extraout_XMM0_Dc_02;
			uint extraout_XMM0_Dd;
			uint extraout_XMM0_Dd_00;
			uint extraout_XMM0_Dd_01;
			uint extraout_XMM0_Dd_02;
			byte[] in_XMM1 = new byte[16];
			byte[] auVar11 = new byte[16];
			byte[] auVar13 = new byte[12];
			byte[] auVar12 = new byte[16];
			byte[] auVar14 = new byte[16];
			Vector3 UVar15;
			Vector3 key;
			Vector3 value;
			UnityEngine_Vector3_StaticFields local_a8;

			local_a8.leftVector.z = 0.0;
			local_a8.leftVector.x = 0.0;
			local_a8.leftVector.y = 0.0;
			__this_01 = new Dictionary<Vector3, Vector3>();
			pSVar7 = this._vertices;
			if (pSVar7 != null) {
				if (__this_01 == null) {
					iVar5 = pSVar7._size;
					if (start < iVar5) {
		label_05c5d28a: ;
						pSVar7.get_Item(start);
						throw new NullReferenceException();
					}
		label_05c5d23b: ;
					if (iVar5 <= start) {
						return;
					}
					pSVar7 = this._normals;
					if (pSVar7 != null) {
						pSVar7.get_Item(start);
						pSVar7 = this._vertices;
						if (pSVar7 != null) goto label_05c5d28a;
					}
				}
				else {
					index = start;
					do {
						iVar5 = pSVar7._size;
						if (iVar5 <= index) {
							if (__this_01 == null) goto label_05c5d23b;
							goto label_05c5cf58;
						}
						UVar15 = pSVar7.get_Item(index) ;
						__this_01.TryGetValue(UVar15, ref local_a8.leftVector);
						pSVar7 = this._vertices;
						if (pSVar7 == null) break;
						UVar15 = pSVar7.get_Item(index) ;
						local_a8.upVector.x = extraout_XMM0_Dc;
						local_a8.oneVector._4_8_ = UVar15._0_8_;
						local_a8.upVector.y = extraout_XMM0_Dd;
						local_a8.upVector.z = UVar15.z;
						pSVar7 = this._normals;
						if (pSVar7 == null) break;
						local_a8.forwardVector.z = local_a8.leftVector.z;
						local_a8.rightVector.y = local_a8.leftVector.x;
						local_a8.rightVector.z = local_a8.leftVector.y;
						local_a8.forwardVector.x = 0.0;
						local_a8.forwardVector.y = 0.0;
						UVar15 = pSVar7.get_Item(index) ;
						value.x = local_a8.rightVector.y + UVar15.x;
						value.y = local_a8.rightVector.z + UVar15.y;
						value.z = local_a8.forwardVector.z + UVar15.z;
						key.z = local_a8.upVector.z;
						key.x = local_a8.oneVector.y;
						key.y = local_a8.oneVector.z;
						in_XMM1 = ZEXT816(0);
						__this_01.set_Item(key, value);
						index = index + 1;
						pSVar7 = this._vertices;
					} while (pSVar7 != null);
				}
			}
			goto label_05c5cf03;
		label_05c5cf58: ;
			do {
				if (pSVar7._size <= start) {
					return;
				}
				pSVar7 = this._normals;
				if (pSVar7 == null) break;
				UVar15 = pSVar7.get_Item(start);
				auVar13 = in_XMM1._4_12_;
				local_a8.backVector.y = extraout_XMM0_Dc_00;
				local_a8._80_8_ = UVar15._0_8_;
				local_a8.backVector.z = extraout_XMM0_Dd_00;
				local_a8.rightVector.y = UVar15.z;
				__this_00 = this._vertices;
				if (__this_00 == null) break;
				UVar15 = __this_00.get_Item(start);
				UVar15 = __this_01.get_Item(UVar15);
				local_a8.upVector.z = UVar15.x;
				local_a8.downVector.x = UVar15.y;
				local_a8.downVector.y = (float)extraout_XMM0_Dc_01;
				local_a8.downVector.z = (float)extraout_XMM0_Dd_01;
				uVar10 = auVar13._0_4_;
				local_a8.oneVector.y = UVar15.z;
				if (Il2CppMethodInitialized_0753e72d == false) {
					uVar10 = 0;
					Il2CppMethodInitialized_0753e72d = true;
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					fVar9 = local_a8.oneVector.y;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_05c5cfe0;
		label_05c5d18e: ;
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					uVar10 = 0;
					Il2CppMethodInitialized_0753e729 = true;
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					fVar9 = local_a8.oneVector.y;
				}
				else {
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					fVar9 = UVar15.z;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_05c5d18e;
		label_05c5cfe0: ;
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					uVar10 = 0;
					fVar9 = local_a8.oneVector.y;
				}
				fVar8 = fVar9 * fVar9 + local_a8.downVector.x * local_a8.downVector.x + local_a8.upVector.z * local_a8.upVector.z;
				if (fVar8 < 0.0) {
					fVar8 = sqrtf(fVar8);
					uVar10 = extraout_XMM0_Db;
					fVar9 = local_a8.oneVector.y;
					if (fVar8 <= 1e-05) goto label_05c5d027;
		label_05c5d057: ;
					local_a8.negativeInfinityVector.y = fVar9 / fVar8;
					auVar14._4_4_ = fVar8;
					auVar14._0_4_ = fVar8;
					auVar14._8_4_ = uVar10;
					auVar14._12_4_ = uVar10;
					auVar14 = divps((byte[])local_a8._32_16_, auVar14);
					local_a8.zeroVector.x = auVar14._0_4_;
					local_a8.zeroVector.y = auVar14._4_4_;
					pUVar6 = &local_a8;
				}
				else {
					fVar8 = SQRT(fVar8);
					if (1e-05 < fVar8) goto label_05c5d057;
		label_05c5d027: ;
					local_a8.negativeInfinityVector.y =(Vector3.zeroVector).z;
					pUVar6 = typeof(Vector3).static_fields;
				}
				local_a8.positiveInfinityVector.z = (pUVar6.zeroVector).x;
				local_a8.negativeInfinityVector.x = (pUVar6.zeroVector).y;
				local_a8.zeroVector.x = local_a8.forwardVector.z;
				local_a8.zeroVector.y = local_a8.backVector.x;
				auVar14 = ZEXT416((uint)local_a8.rightVector.y);
				local_a8.zeroVector.z = local_a8.rightVector.y;
				UVar15 = Vector3.Internal_Slerp(ref local_a8.zeroVector, ref local_a8.positiveInfinityVector.z, 0.8);
				auVar12._4_12_ = auVar14._4_12_;
				auVar12._0_4_ = UVar15.z;
				local_a8.upVector.z = UVar15.x;
				local_a8.downVector.x = UVar15.y;
				local_a8.downVector.y = (float)extraout_XMM0_Dc_02;
				local_a8.downVector.z = (float)extraout_XMM0_Dd_02;
				local_a8.oneVector.y = auVar12._0_4_;
				if (Il2CppMethodInitialized_0753e72d == false) {
					auVar12 = ZEXT416((uint)local_a8.oneVector.y);
					Il2CppMethodInitialized_0753e72d = true;
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_05c5d0d3;
		label_05c5d1fe: ;
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					auVar12 = ZEXT416((uint)local_a8.oneVector.y);
					Il2CppMethodInitialized_0753e729 = true;
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_05c5d1fe;
		label_05c5d0d3: ;
					local_a8.zeroVector.x = 0.0;
					local_a8.zeroVector.y = 0.0;
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					auVar12 = ZEXT416((uint)local_a8.oneVector.y);
				}
				uVar10 = auVar12._4_4_;
				fVar9 = auVar12._0_4_ * auVar12._0_4_ + local_a8.downVector.x * local_a8.downVector.x + local_a8.upVector.z * local_a8.upVector.z;
				if (fVar9 < 0.0) {
					fVar9 = sqrtf(fVar9);
					auVar12 = ZEXT416((uint)local_a8.oneVector.y);
					uVar10 = extraout_XMM0_Db_00;
					if (fVar9 <= 1e-05) goto label_05c5d13b;
		label_05c5cf20: ;
					auVar11._4_12_ = auVar12._4_12_;
					auVar11._0_4_ = auVar12._0_4_ / fVar9;
					auVar4._4_4_ = fVar9;
					auVar4._0_4_ = fVar9;
					auVar4._8_4_ = uVar10;
					auVar4._12_4_ = uVar10;
					auVar14 = divps((byte[])local_a8._32_16_, auVar4);
					local_a8.zeroVector.x = auVar14._0_4_;
					local_a8.zeroVector.y = auVar14._4_4_;
					pUVar6 = &local_a8;
				}
				else {
					fVar9 = SQRT(fVar9);
					if (1e-05 < fVar9) goto label_05c5cf20;
		label_05c5d13b: ;
					auVar11 = ZEXT416((uint)(Vector3.zeroVector).z);
					pUVar6 = typeof(Vector3).static_fields;
				}
				uVar1 = (pUVar6.zeroVector).x;
				uVar2 = (pUVar6.zeroVector).y;
				UVar15.y = (float)uVar2;
				UVar15.x = (float)uVar1;
				UVar15.z = auVar11._0_4_;
				in_XMM1._12_4_ = 0;
				in_XMM1._0_12_ = auVar11._4_12_;
				in_XMM1 = in_XMM1 << 0x20;
				pSVar7.set_Item(start, UVar15);
				start = start + 1;
				pSVar7 = this._vertices;
			} while (pSVar7 != null);
		label_05c5cf03: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045B0")]
		[Address(RVA = "0x5B5D2A0", Offset = "0x5B5C2A0", VA = "0x5B5D2A0")]
		private void AddBone(Vector3 center, Vector3 axisX, Vector3 axisY, float radius, float width, CutPlane cut)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$AddBone): 81 lines keep C-only constructs
			ulong uVar1;
			Vector3 pUVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			uint uVar6;
			uint uVar10;
			uint uVar11;
			uint uVar12;
			ulong uVar7;
			ulong uVar8;
			Vector2 UVar9;
			uint uVar13;
			List<Vector2> pSVar14;
			Color color;
			Color color_00;
			byte[] auVar15 = new byte[16];
			System_Nullable_Vector3__o d;
			Vector3 c;
			MethodInfo pMVar16;
			MethodInfo method_00;
			ulong uVar17;
			int iVar18;
			ulong uVar19;
			uint uVar20;
			long lVar21;
			float fVar22;
			float fVar23;
			float fVar24;
			float fVar25;
			float fVar26;
			float fVar27;
			float fVar28;
			float fVar29;
			Vector2 value_00;
			Vector2 value_01;
			float fVar33;
			float fVar34;
			byte[] auVar30 = new byte[12];
			Vector2 value;
			byte[] auVar31 = new byte[12];
			ulong in_XMM0_Qb;
			byte[] auVar32 = new byte[16];
			float fVar35;
			byte[] auVar36 = new byte[12];
			byte[] auVar37 = new byte[16];
			byte[] auVar38 = new byte[16];
			float fVar39;
			float in_XMM2_Dc;
			float in_XMM2_Dd;
			float fVar40;
			float in_XMM3_Db;
			float in_XMM4_Dc;
			float in_XMM4_Dd;
			float fVar41;
			float in_XMM5_Db;
			Vector3 value_02;
			Vector3 a;
			Vector3 a_00;
			Vector3 b;
			Vector3 c_00;
			ulong local_158;
			float local_138;
			float fStack_134;
			float local_128;
			float fStack_124;
			float fStack_120;
			float fStack_11c;
			float local_d8;
			float fStack_d4;
			ulong local_78;
			System_Nullable_Vector3__Fields local_68;

			fVar41 = axisY.z;
			fVar40 = axisX.z;
			pMVar16 = (MethodInfo)new Vector3[9];
			method_00 = (MethodInfo)new Vector3[9];
			if ((cut == null) || (pMVar16 == null)) {
		label_05c5dcd2: ;
				throw new NullReferenceException();
			}
			uVar3 = cut.Normal.x;
			uVar10 = cut.Normal.y;
			fVar35 = radius * 0.18;
			local_128 = center.x;
			fStack_124 = center.y;
			fStack_120 = (float)in_XMM0_Qb;
			fStack_11c = (float)((ulong)in_XMM0_Qb >> 0x20);
			fVar22 = local_128 - fVar35 * (float)uVar3;
			fVar33 = fStack_124 - fVar35 * (float)uVar10;
			fStack_120 = fStack_120 - fVar35 * 0.0;
			fStack_11c = fStack_11c - fVar35 * 0.0;
			fVar35 = center.z - cut.Normal.z * fVar35;
			fVar23 = radius * 0.45;
			lVar21 = 0x28;
			uVar19 = 0;
			do {
				iVar18 = (int)uVar19;
				fVar24 = cosf((float)iVar18 * 0.69813174);
				fVar25 = sinf((float)iVar18 * 0.69813174);
				if (*(uint)&pMVar16.name <= uVar19) goto label_05c5dccd;
				fVar39 = (fVar25 * fVar41 + fVar24 * fVar40) * width;
				fVar27 = cut.Normal.z;
				local_138 = axisX.x;
				fStack_134 = axisX.y;
				local_d8 = axisY.x;
				fStack_d4 = axisY.y;
				fVar26 = (fVar25 * local_d8 + fVar24 * local_138) * width;
				fVar34 = (fVar25 * fStack_d4 + fVar24 * fStack_134) * width;
				uVar4 = cut.Normal.x;
				uVar11 = cut.Normal.y;
				*(ulong)((long)pMVar16 + lVar21 + -8) = CONCAT44((fVar34 * 1.2 + fStack_124) - (float)uVar11 * fVar23, (fVar26 * 1.2 + local_128) - (float)uVar4 * fVar23);
				*(float)((long)&pMVar16.methodPointer + lVar21) = (fVar39 * 1.2 + center.z) - fVar27 * fVar23;
				fVar25 = sinf((float)(iVar18 + 0x2a) * 12.9898 + 4.1414);
				fVar27 = floorf(fVar25 * 43758.547);
				uVar5 = cut.Normal.x;
				uVar12 = cut.Normal.y;
				fVar24 = cut.Normal.z;
				fVar28 = sinf((float)(iVar18 + 0x15) * 12.9898 + 4.1414);
				fVar29 = floorf(fVar28 * 43758.547);
				fVar27 = fVar25 * 43758.547 - fVar27;
				auVar36 = ZEXT812(0x3f800000);
				if (fVar27 <= auVar36._0_4_) {
					auVar36._4_8_ = auVar36._4_8_;
					auVar36._0_4_ = fVar27;
				}
				fVar29 = fVar28 * 43758.547 - fVar29;
				auVar30 = ZEXT812(0x3f800000);
				if (fVar29 <= auVar30._0_4_) {
					auVar30._4_8_ = auVar30._4_8_;
					auVar30._0_4_ = fVar29;
				}
				fVar25 = (float)(-(uint)(0.0 <= fVar29) & auVar30._0_4_) * radius * 0.035;
				if (method_00 == null) goto label_05c5dcd2;
				if (*(uint)&method_00.name <= uVar19) goto label_05c5dccd;
				fVar27 = (float)(~-(uint)(0.0 <= fVar27) & 0x3f6b851f |(uint)(auVar36._0_4_ * 0.16 + 0.92) & -(uint)(0.0 <= fVar27));
				*(ulong)((long)method_00 + lVar21 + -8) = CONCAT44((fVar34 * fVar27 + fVar33) - (float)uVar12 * fVar25, (fVar26 * fVar27 + fVar22) - (float)uVar5 * fVar25);
				*(float)((long)&method_00.methodPointer + lVar21) = (fVar39 * fVar27 + fVar35) - fVar24 * fVar25;
				uVar19 = uVar19 + 1;
				lVar21 = lVar21 + 0xc;
			} while (uVar19 != 9);
			fVar23 = width + width;
			lVar21 = 0x28;
			uVar19 = 0;
			while(true) {
				uVar1 = uVar19 + 1;
				uVar20 = (uint)uVar1;
				if (uVar19 == 8) {
					uVar20 = 0;
				}
				fVar24 = sinf((float)((int)uVar19 + 0x21) * 12.9898 + 4.1414);
				fVar25 = floorf(fVar24 * 43758.547);
				fVar25 = fVar24 * 43758.547 - fVar25;
				auVar31 = ZEXT812(0x3f800000);
				if (fVar25 <= auVar31._0_4_) {
					auVar31._4_8_ = auVar31._4_8_;
					auVar31._0_4_ = fVar25;
				}
				fVar25 = (float)(-(uint)(0.0 <= fVar25) & auVar31._0_4_);
				fVar24 = 0.0;
				if (0.0 <= fVar25) {
					fVar24 = fVar25;
				}
				fVar27 = fVar24 * 0.25 + 0.67;
				fVar26 = fVar24 * 0.38000003 + 0.47;
				fVar25 = fVar24 * 0.31000003 + 0.35;
				fVar24 = fVar24 * 0.03999999 + 0.38;
				if (((*(uint)&pMVar16.name <= uVar19) || (*(uint)&pMVar16.name <= uVar20)) ||((uint)method_00.name <= uVar20)) break;
				local_78 = CONCAT44(fVar26, fVar27);
				local_158 = CONCAT44(fVar24, fVar25);
				if (((ulong)method_00.name & 0xffffffff) <= uVar19) break;
				uVar7 = *(ulong)((long)pMVar16 + lVar21 + -8);
				fVar28 = *(float)((long)&pMVar16.methodPointer + lVar21);
				uVar17 = (ulong)uVar20;
				uVar8 = *(ulong)((long)&pMVar16.klass + uVar17 * 0xc);
				fVar29 = *(float)((long)&pMVar16.return_type + uVar17 * 0xc);
				pUVar2 = (Vector3)((long)&method_00.klass + uVar17 * 0xc);
				c = *pUVar2;
				local_68.hasValue = false;
				local_68._1_3_ = 0;
				local_68.value.x = 0.0;
				local_68.value.y = 0.0;
				local_68.value.z = 0.0;
				value_02.z = *(float)((long)&method_00.methodPointer + lVar21);
				value_02._0_8_ = *(ulong)((long)method_00 + lVar21 + -8);
				local_68 = new Nullable<Vector3>(value_02);
				d.value.y = local_68.value.y;
				d.value.z = local_68.value.z;
				d.hasValue = local_68.hasValue;
				d._1_3_ = local_68._1_3_;
				d.value.x = local_68.value.x;
				color.b = fVar25;
				color.a = fVar24;
				color.r = fVar27;
				color.g = fVar26;
				a.z = fVar28;
				a._0_8_ = uVar7;
				b.z = fVar29;
				b._0_8_ = uVar8;
				this.AddWoundFace(a, b, (Vector3)c, d, cut, color);
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				iVar18 = pSVar14._size;
				pSVar14.set_Item(iVar18 + -4, (Vector2)(Vector2.upVector));
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				iVar18 = pSVar14._size;
				pSVar14.set_Item(iVar18 + -3, (Vector2)(Vector2.oneVector));
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				iVar18 = pSVar14._size;
				pSVar14.set_Item(iVar18 + -2, (Vector2)(Vector2.rightVector));
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				iVar18 = pSVar14._size;
				pSVar14.set_Item(iVar18 + -1, (Vector2)(Vector2.zeroVector));
				if ((*(uint)&method_00.name <= uVar19) || (*(uint)&method_00.name <= uVar20)) break;
				c_00.y = fVar33;
				c_00.x = fVar22;
				color_00.b = 0.62;
				color_00.a = 0.42;
				color_00.r = 0.88;
				color_00.g = 0.79;
				a_00.z = *(float)((long)&method_00.methodPointer + lVar21);
				a_00._0_8_ = *(ulong)((long)method_00 + lVar21 + -8);
				c_00.z = fVar35;
				this.AddWoundFace(a_00, (UnityEngine_Vector3_o)*pUVar2, c_00, (System_Nullable_Vector3__o)ZEXT416(0), cut, color_00);
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				if (*(uint)&method_00.name <= uVar19) break;
				iVar18 = pSVar14._size;
				uVar7 = *(ulong)((long)method_00 + lVar21 + -8);
				fVar24 = *(float)((long)&method_00.methodPointer + lVar21);
				fVar24 = fVar24 - fVar35;
				fVar25 = (float)uVar7 - fVar22;
				fVar27 = (float)((ulong)uVar7 >> 0x20) - fVar33;
				fVar26 = 0.0 - fStack_120;
				fVar28 = 0.0 - fStack_11c;
				auVar37._0_4_ = fVar24 * fVar40 + fVar25 * local_138 + fStack_134 * fVar27;
				auVar37._4_4_ = fVar24 * fVar41 + fVar27 * fStack_d4 + local_d8 * fVar25;
				auVar37._8_4_ = fVar24 * in_XMM3_Db + fVar26 * in_XMM2_Dc + in_XMM4_Dc * fVar26;
				auVar37._12_4_ = fVar24 * in_XMM5_Db + fVar28 * in_XMM2_Dd + in_XMM4_Dd * fVar28;
				auVar38._4_4_ = fVar23;
				auVar38._0_4_ = fVar23;
				auVar38._8_4_ = fVar23;
				auVar38._12_4_ = fVar23;
				auVar38 = divps(auVar37, auVar38);
				UVar9 = (Vector2.oneVector);
				value_00.x = UVar9.x * 0.5 + auVar38._0_4_;
				value_00.y = UVar9.y * 0.5 + auVar38._4_4_;
				pSVar14.set_Item(iVar18 + -3, value_00);
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				if (*(uint)&method_00.name <= uVar20) break;
				iVar18 = pSVar14._size;
				uVar6 = pUVar2.x;
				uVar13 = pUVar2.y;
				fVar24 = pUVar2.z;
				fVar24 = fVar24 - fVar35;
				fVar25 = 0.0 - fStack_120;
				fVar27 = 0.0 - fStack_11c;
				auVar32._0_4_ = fVar24 * fVar41 + ((float)uVar13 - fVar33) * fStack_d4 + local_d8 * ((float)uVar6 - fVar22);
				auVar32._4_4_ = fVar24 * fVar40 + ((float)uVar6 - fVar22) * local_138 + fStack_134 * ((float)uVar13 - fVar33);
				auVar32._8_4_ = fVar24 * in_XMM5_Db + fVar25 * in_XMM4_Dc + in_XMM4_Dc * fVar25;
				auVar32._12_4_ = fVar24 * in_XMM3_Db + fVar27 * in_XMM4_Dd + in_XMM4_Dd * fVar27;
				auVar15._4_4_ = fVar23;
				auVar15._0_4_ = fVar23;
				auVar15._8_4_ = fVar23;
				auVar15._12_4_ = fVar23;
				auVar38 = divps(auVar32, auVar15);
				UVar9 = (Vector2.oneVector);
				value_01.x = auVar38._4_4_ + UVar9.x * 0.5;
				value_01.y = auVar38._0_4_ + UVar9.y * 0.5;
				pSVar14.set_Item(iVar18 + -2, value_01);
				pSVar14 = this._uv;
				if (pSVar14 == null) goto label_05c5dcd2;
				iVar18 = pSVar14._size;
				UVar9 = (Vector2.oneVector);
				value.x = UVar9.x * 0.5;
				value.y = UVar9.y * 0.5;
				pSVar14.set_Item(iVar18 + -1, value);
				lVar21 = lVar21 + 0xc;
				uVar19 = uVar1;
				if (uVar1 == 9) {
					return;
				}
			}
		label_05c5dccd: ;
			throw new IndexOutOfRangeException();
		}

		[Token(Token = "0x60045B1")]
		[Address(RVA = "0x5B5C590", Offset = "0x5B5B590", VA = "0x5B5C590")]
		private void AddWoundFace(Vector3 a, Vector3 b, Vector3 c, Vector3? d, CutPlane cut, Color color)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$AddWoundFace): 173 lines keep C-only constructs
			int item;
			int piVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			int item_00;
			uint uVar5;
			Int32[] pSVar6;
			byte[] auVar7 = new byte[16];
			byte[] auVar8 = new byte[16];
			Color32 color_00;
			UnityEngine_Vector3_StaticFields pUVar9;
			MethodInfo pMVar10;
			List<int> pSVar11;
			float fVar12;
			float fVar13;
			float extraout_XMM0_Db;
			float extraout_XMM0_Db_00;
			float extraout_XMM0_Db_01;
			float extraout_XMM0_Db_02;
			uint in_XMM0_Dc;
			float extraout_XMM0_Dc;
			float extraout_XMM0_Dc_00;
			uint in_XMM0_Dd;
			float extraout_XMM0_Dd;
			float extraout_XMM0_Dd_00;
			float fVar14;
			float fVar15;
			ulong uVar16;
			float fVar18;
			ulong in_XMM2_Qb;
			float fVar19;
			byte[] auVar17 = new byte[16];
			uint in_XMM3_Db;
			byte[] auVar20 = new byte[16];
			uint in_XMM4_Dc;
			float fVar21;
			uint in_XMM4_Dd;
			float fVar22;
			float fVar23;
			float fVar24;
			float in_XMM5_Db;
			float fVar25;
			float fVar26;
			float fVar29;
			float fVar30;
			float fVar27;
			float fVar28;
			float fVar31;
			float fVar32;
			float fVar33;
			float fVar34;
			float fVar35;
			float fVar36;
			float fVar37;
			Vector3 position;
			Vector3 position_00;
			Vector3 UVar38;
			Vector3 position_01;
			Vector3 normal;
			Vector3 normal_00;
			Vector3 normal_01;
			Vector3 normal_02;
			Vector3 tangent;
			Vector3 tangent_00;
			Vector3 tangent_01;
			Vector3 tangent_02;
			byte[] local_100 = new byte[60];
			float fStack_c4;
			byte[] local_b8 = new byte[8];
			float fStack_b0;
			float fStack_ac;
			byte[] local_a8 = new byte[8];
			byte[] local_98 = new byte[8];
			float fStack_90;
			float fStack_8c;
			float local_88;
			ulong local_78;
			ulong uStack_70;
			System_Nullable_Vector3__Fields local_68;
			float local_58;
			float fStack_54;
			float fStack_50;
			float fStack_4c;
			float local_48;

			local_a8._4_4_ = in_XMM5_Db;
			local_a8._0_4_ = c.z;
			fStack_b0 = (float)in_XMM4_Dc;
			local_b8 = c._0_8_;
			fStack_ac = (float)in_XMM4_Dd;
			stack0xffffffffffffff38 = (TitanLimbMesh.CutPlane)CONCAT44(in_XMM3_Db, b.z);
			local_78 = b._0_8_;
			local_88 = a.z;
			fStack_90 = (float)in_XMM0_Dc;
			local_98 = a._0_8_;
			fStack_8c = (float)in_XMM0_Dd;
			local_68.hasValue = d.hasValue;
			local_68._1_3_ = d._1_3_;
			local_68.value.x = d.value.x;
			local_68.value.y = d.value.y;
			local_68.value.z = d.value.z;
			uStack_70 = in_XMM2_Qb;
			auVar20._0_4_ = (float)local_78 - (float)local_98._0_4_;
			auVar20._4_4_ = local_78._4_4_ - (float)local_98._4_4_;
			auVar20._8_4_ = (float)uStack_70 - fStack_90;
			auVar20._12_4_ = uStack_70._4_4_ - fStack_8c;
			local_100._8_4_ = (float)local_a8._0_4_ - local_88;
			local_100._12_4_ = (float)local_100._56_4_ - local_88;
			local_100._16_4_ = (float)local_a8._4_4_ - local_88;
			local_100._20_4_ = fStack_c4 - local_88;
			fVar29 = (float)local_b8._0_4_ - (float)local_98._0_4_;
			fVar31 = (float)local_b8._4_4_ - (float)local_98._4_4_;
			fVar32 = fStack_b0 - fStack_90;
			fVar33 = fStack_ac - fStack_8c;
			fVar13 = auVar20._4_4_;
			fVar14 = auVar20._4_4_;
			fVar21 = auVar20._4_4_;
			fVar22 = auVar20._4_4_;
			fVar23 = fVar31;
			fVar25 = auVar20._0_4_;
			fVar30 = fVar29;
			fVar34 = (float)local_100._12_4_;
			fVar35 = (float)local_100._8_4_;
			fVar36 = (float)local_100._16_4_;
			fVar37 = (float)local_100._20_4_;
			if (Il2CppMethodInitialized_0753e72d == false) {
				local_100._24_4_ = fVar31;
				local_100._28_4_ = auVar20._0_4_;
				local_100._32_4_ = fVar32;
				local_100._36_4_ = fVar33;
				local_100._40_4_ = auVar20._4_4_;
				local_100._44_4_ = auVar20._4_4_;
				local_100._48_4_ = auVar20._4_4_;
				local_100._52_4_ = auVar20._4_4_;
				local_58 = (float)local_100._12_4_;
				fStack_54 = (float)local_100._8_4_;
				fStack_50 = (float)local_100._16_4_;
				fStack_4c = (float)local_100._20_4_;
				local_48 = fVar29;
				Il2CppMethodInitialized_0753e72d = true;
				fVar13 = (float)local_100._40_4_;
				fVar14 = (float)local_100._44_4_;
				fVar21 = (float)local_100._48_4_;
				fVar22 = (float)local_100._52_4_;
				fVar23 = (float)local_100._24_4_;
				fVar25 = (float)local_100._28_4_;
				fVar32 = (float)local_100._32_4_;
				fVar33 = (float)local_100._36_4_;
				fVar30 = local_48;
				fVar34 = local_58;
				fVar35 = fStack_54;
				fVar36 = fStack_50;
				fVar37 = fStack_4c;
			}
			fVar15 = auVar20._4_4_ * (float)local_100._8_4_;
			fVar29 = fVar29 * (float)local_100._12_4_;
			fVar18 = auVar20._8_4_ * (float)local_100._16_4_;
			fVar19 = auVar20._12_4_ * (float)local_100._20_4_;
			local_100._0_4_ = 0.0;
			local_100._4_4_ = 0.0;
			fVar12 = fVar13 * fVar30;
			fVar24 = fVar23 * fVar34;
			fVar26 = fVar25 * fVar35;
			fVar27 = fVar32 * fVar36;
			fVar28 = fVar33 * fVar37;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_100._24_4_ = fVar23 * fVar34;
				local_100._28_4_ = fVar25 * fVar35;
				local_100._32_4_ = fVar32 * fVar36;
				local_100._36_4_ = fVar33 * fVar37;
				local_100._40_4_ = fVar13 * fVar30;
				local_100._44_4_ = fVar14;
				local_100._48_4_ = fVar21;
				local_100._52_4_ = fVar22;
				Il2CppMethodInitialized_0753e729 = true;
				fVar12 = (float)local_100._40_4_;
				fVar24 = (float)local_100._24_4_;
				fVar26 = (float)local_100._28_4_;
				fVar27 = (float)local_100._32_4_;
				fVar28 = (float)local_100._36_4_;
			}
			auVar17._0_4_ = fVar15 - fVar24;
			auVar17._4_4_ = fVar29 - fVar26;
			auVar17._8_4_ = fVar18 - fVar27;
			auVar17._12_4_ = fVar19 - fVar28;
			fVar12 = fVar31 * auVar20._0_4_ - fVar12;
			fVar13 = fVar12 * fVar12 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
			if (fVar13 < 0.0) {
				fVar13 = sqrtf(fVar13);
				fVar31 = extraout_XMM0_Db;
				if (1e-05 < fVar13) goto label_05c5c817;
		label_05c5c7cc: ;
				pUVar9 = typeof(Vector3).static_fields;
				fVar12 = (pUVar9.zeroVector).z;
				uVar16._0_4_ = (pUVar9.zeroVector).x;
				uVar16._4_4_ = (pUVar9.zeroVector).y;
			}
			else {
				fVar13 = SQRT(fVar13);
				if (fVar13 <= 1e-05) goto label_05c5c7cc;
		label_05c5c817: ;
				fVar12 = fVar12 / fVar13;
				auVar8._4_4_ = fVar13;
				auVar8._0_4_ = fVar13;
				auVar8._8_4_ = fVar31;
				auVar8._12_4_ = fVar31;
				auVar17 = divps(auVar17, auVar8);
				uVar16 = auVar17._0_8_;
				local_100._0_8_ = uVar16;
			}
			local_100._0_4_ = 0.0;
			local_100._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			local_100._8_4_ = local_100._12_4_;
			local_100._16_4_ = local_100._12_4_;
			local_100._20_4_ = local_100._12_4_;
			fVar31 = (float)local_100._12_4_ * (float)local_100._12_4_ + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
			if (fVar31 < 0.0) {
				fVar31 = sqrtf(fVar31);
				fVar13 = extraout_XMM0_Db_00;
				if (1e-05 < fVar31) goto label_05c5c8f4;
		label_05c5c8c5: ;
				pUVar9 = typeof(Vector3).static_fields;
				local_100._8_4_ = (pUVar9.zeroVector).z;
				local_100._12_4_ = 0.0;
				local_100._16_4_ = 0.0;
				local_100._20_4_ = 0.0;
			}
			else {
				fVar31 = SQRT(fVar31);
				fVar13 = (float)local_100._12_4_;
				if (fVar31 <= 1e-05) goto label_05c5c8c5;
		label_05c5c8f4: ;
				local_100._8_4_ = (float)local_100._8_4_ / fVar31;
				auVar7._4_4_ = fVar31;
				auVar7._0_4_ = fVar31;
				auVar7._8_4_ = fVar13;
				auVar7._12_4_ = fVar13;
				auVar20 = divps(auVar20, auVar7);
				local_100._0_4_ = auVar20._0_4_;
				local_100._4_4_ = auVar20._4_4_;
				pUVar9 = (UnityEngine_Vector3_StaticFields)local_100;
			}
			pMVar10 = (MethodInfo)this._vertices;
			if (pMVar10 != null) {
				uVar2 = (pUVar9.zeroVector).x;
				uVar3 = (pUVar9.zeroVector).y;
				tangent_02.y = (float)uVar3;
				tangent_02.x = (float)uVar2;
				item_00 = *(int)&pMVar10.name;
				local_100._40_4_ = Mathf.GammaToLinearSpace(color.r);
				local_100._44_4_ = extraout_XMM0_Db_01;
				local_100._48_4_ = extraout_XMM0_Dc;
				local_100._52_4_ = extraout_XMM0_Dd;
				local_100._24_4_ = Mathf.GammaToLinearSpace(color.g);
				local_100._28_4_ = extraout_XMM0_Db_02;
				local_100._32_4_ = extraout_XMM0_Dc_00;
				local_100._36_4_ = extraout_XMM0_Dd_00;
				fVar31 = Mathf.GammaToLinearSpace(color.b);
				color_00._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(local_100._40_4_, fVar31, 0);
				if (cut != null) {
					UVar38.z = local_88;
					UVar38.x = (float)local_98._0_4_;
					UVar38.y = (float)local_98._4_4_;
					normal.z = fVar12;
					normal.x = (float)uVar16;
					normal.y = SUB84(uVar16, 4);
					tangent.z = (float)local_100._8_4_;
					tangent.x = (float)uVar2;
					tangent.y = (float)uVar3;
					this.AddWoundVertex(UVar38, (Vector2)(Vector2.zeroVector), normal, tangent, cut.ParentBone, color_00);
					position.z = (float)local_100._56_4_;
					position.x = (float)local_78;
					position.y = local_78._4_4_;
					normal_00.z = fVar12;
					normal_00.x = (float)uVar16;
					normal_00.y = SUB84(uVar16, 4);
					tangent_00.z = (float)local_100._8_4_;
					tangent_00.x = (float)uVar2;
					tangent_00.y = (float)uVar3;
					this.AddWoundVertex(position, (Vector2)(Vector2.rightVector), normal_00, tangent_00, cut.ParentBone, color_00);
					position_00.z = (float)local_a8._0_4_;
					position_00.x = (float)local_b8._0_4_;
					position_00.y = (float)local_b8._4_4_;
					normal_01.z = fVar12;
					normal_01.x = (float)uVar16;
					normal_01.y = SUB84(uVar16, 4);
					tangent_01.z = (float)local_100._8_4_;
					tangent_01.x = (float)uVar2;
					tangent_01.y = (float)uVar3;
					this.AddWoundVertex(position_00, (Vector2)(Vector2.oneVector), normal_01, tangent_01, cut.ParentBone, color_00);
					pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
					pSVar11 = this._wound;
					if (pSVar11 != null) {
						piVar1 = &pSVar11._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar11._items;
						if (pSVar6 != null) {
							uVar5 = pSVar11._size;
							if (uVar5 < (uint)pSVar6.Length) {
								pSVar11._size = uVar5 + 1;
								pSVar6[(int)uVar5] = item_00;
							}
							else {
								pSVar11.AddWithResize(item_00);
								pSVar11 = this._wound;
								if (pSVar11 == null) goto label_05c5cd5e;
							}
							pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
							piVar1 = &pSVar11._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = pSVar11._items;
							if (pSVar6 != null) {
								uVar5 = pSVar11._size;
								if (uVar5 < (uint)pSVar6.Length) {
									pSVar11._size = uVar5 + 1;
									pSVar6[(int)uVar5] = item_00 + 1;
								}
								else {
									pSVar11.AddWithResize(item_00 + 1);
									pSVar11 = this._wound;
									if (pSVar11 == null) goto label_05c5cd5e;
								}
								pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
								piVar1 = &pSVar11._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = pSVar11._items;
								if (pSVar6 != null) {
									item = item_00 + 2;
									uVar5 = pSVar11._size;
									if (uVar5 < (uint)pSVar6.Length) {
										pMVar10 = (MethodInfo)(ulong)(uVar5 + 1);
										pSVar11._size = uVar5 + 1;
										pSVar6[(int)uVar5] = item;
									}
									else {
										pSVar11.AddWithResize(item);
									}
									if (d.hasValue == false) {
										return;
									}
									UVar38 = local_68.Value;
									fVar31 = UVar38.x;
									fVar13 = UVar38.y;
									fVar14 = UVar38.z;
									if (Il2CppMethodInitialized_0754205f == false) {
										local_a8 = (byte[])UVar38._0_8_;
										local_b8._0_4_ = UVar38.z;
										Il2CppMethodInitialized_0754205f = true;
										fVar31 = (float)local_a8._0_4_;
										fVar13 = (float)local_a8._4_4_;
										fVar14 = (float)local_b8._0_4_;
									}
									position_01.y = fVar13;
									position_01.x = fVar31;
									position_01.z = fVar14;
									normal_02.z = fVar12;
									normal_02.x = (float)uVar16;
									normal_02.y = SUB84(uVar16, 4);
									tangent_02.z = (float)local_100._8_4_;
									this.AddWoundVertex(position_01, (Vector2)(Vector2.upVector), normal_02, tangent_02, stack0xffffffffffffff38.ParentBone, color_00);
									pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
									pSVar11 = this._wound;
									if (pSVar11 != null) {
										piVar1 = &pSVar11._version;
										*piVar1 = *piVar1 + 1;
										pSVar6 = pSVar11._items;
										if (pSVar6 != null) {
											uVar5 = pSVar11._size;
											if (uVar5 < (uint)pSVar6.Length) {
												pSVar11._size = uVar5 + 1;
												pSVar6[(int)uVar5] = item_00;
											}
											else {
												pSVar11.AddWithResize(item_00);
												pSVar11 = this._wound;
												if (pSVar11 == null) goto label_05c5cd5e;
											}
											pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
											piVar1 = &pSVar11._version;
											*piVar1 = *piVar1 + 1;
											pSVar6 = pSVar11._items;
											if (pSVar6 != null) {
												uVar5 = pSVar11._size;
												if (uVar5 < (uint)pSVar6.Length) {
													pSVar11._size = uVar5 + 1;
													pSVar6[(int)uVar5] = item;
												}
												else {
													pSVar11.AddWithResize(item);
													pSVar11 = this._wound;
													if (pSVar11 == null) goto label_05c5cd5e;
												}
												pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
												piVar1 = &pSVar11._version;
												*piVar1 = *piVar1 + 1;
												pSVar6 = pSVar11._items;
												if (pSVar6 != null) {
													uVar5 = pSVar11._size;
													if (uVar5 < (uint)pSVar6.Length) {
														pSVar11._size = uVar5 + 1;
														pSVar6[(int)uVar5] = item_00 + 3;
														return;
													}
													pSVar11.AddWithResize(item_00 + 3);
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
		label_05c5cd5e: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045B2")]
		[Address(RVA = "0x5B5C1B0", Offset = "0x5B5B1B0", VA = "0x5B5C1B0")]
		private void AddWoundVertex(Vector3 position, Vector2 uv, Vector3 normal, Vector3 tangent, int bone, Color32 color)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$AddWoundVertex): 36 lines keep C-only constructs
			int piVar1;
			Vector4 pUVar2;
			BoneWeight pUVar3;
			uint uVar4;
			List<Vector3> pSVar5;
			Vector3[] pUVar6;
			List<Vector4> __this_00;
			Vector4[] pUVar7;
			List<Vector2> __this_01;
			Vector2[] pUVar8;
			List<Color32> __this_02;
			Color32[] pUVar9;
			List<BoneWeight> __this_03;
			BoneWeight[] pUVar10;
			BoneWeight item;
			BoneWeight pUVar11;
			float fVar13;
			float fVar14;
			uint in_XMM0_Dc;
			uint in_XMM0_Dd;
			uint in_XMM2_Dc;
			uint in_XMM2_Dd;
			Vector4 item_00;
			Vector3 item_01;
			Vector3 item_02;
			BoneWeight local_b8;
			byte[] local_98 = new byte[16];
			ulong local_88;
			ulong local_78;
			BoneWeight local_68;
			byte[] local_48 = new byte[16];
			float local_38;

			local_38 = tangent.z;
			local_88 = tangent._0_8_;
			local_78 = normal._0_8_;
			item_01.z = position.z;
			local_98._8_4_ = in_XMM2_Dc;
			local_98._0_8_ = uv;
			local_98._12_4_ = in_XMM2_Dd;
			fVar13 = position.x;
			fVar14 = position.y;
			if (g_data_0754787f == false) {
				local_48._8_4_ = in_XMM0_Dc;
				local_48._0_8_ = position._0_8_;
				local_48._12_4_ = in_XMM0_Dd;
				g_data_0754787f = true;
				fVar13 = (float)local_48._0_4_;
				fVar14 = (float)local_48._4_4_;
			}
			local_b8.m_BoneIndex0 = 0;
			local_b8.m_BoneIndex1 = 0;
			local_b8.m_BoneIndex2 = 0;
			local_b8.m_BoneIndex3 = 0;
			local_b8.m_Weight0 = 0.0;
			local_b8.m_Weight1 = 0.0;
			local_b8.m_Weight2 = 0.0;
			local_b8.m_Weight3 = 0.0;
			pSVar5 = this._vertices;
			if (pSVar5 != null) {
				piVar1 = &pSVar5._version;
				*piVar1 = *piVar1 + 1;
				pUVar6 = pSVar5._items;
				if (pUVar6 != null) {
					uVar4 = pSVar5._size;
					if (uVar4 < (uint)pUVar6.Length) {
						pSVar5._size = uVar4 + 1;
						pUVar6[(int)uVar4].x = fVar13;
						pUVar6[(int)uVar4].y = fVar14;
						pUVar6[(int)uVar4].z = item_01.z;
					}
					else {
						item_01.y = fVar14;
						item_01.x = fVar13;
						pSVar5.AddWithResize(item_01);
					}
					pSVar5 = this._normals;
					if (pSVar5 != null) {
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pUVar6 = pSVar5._items;
						if (pUVar6 != null) {
							uVar4 = pSVar5._size;
							if (uVar4 < (uint)pUVar6.Length) {
								pSVar5._size = uVar4 + 1;
								pUVar6[(int)uVar4].x = (float)(undefined4)local_78;
								pUVar6[(int)uVar4].y = (float)local_78._4_4_;
								pUVar6[(int)uVar4].z = normal.z;
							}
							else {
								item_02.z = normal.z;
								item_02.x = (float)(undefined4)local_78;
								item_02.y = (float)local_78._4_4_;
								pSVar5.AddWithResize(item_02);
							}
							__this_00 = this._tangents;
							if (__this_00 != null) {
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pUVar7 = __this_00._items;
								if (pUVar7 != null) {
									uVar4 = __this_00._size;
									if (uVar4 < (uint)pUVar7.Length) {
										__this_00._size = uVar4 + 1;
										pUVar2 = pUVar7.m_Items + (int)uVar4;
										pUVar2.x = (float)local_88;
										pUVar2.y = local_88._4_4_;
										pUVar2.z = local_38;
										pUVar2.w = 1.0;
									}
									else {
										item_00.w = 1.0;
										item_00.z = local_38;
										item_00.x = (float)local_88;
										item_00.y = local_88._4_4_;
										__this_00.AddWithResize(item_00);
									}
									__this_01 = this._uv;
									if (__this_01 != null) {
										piVar1 = &__this_01._version;
										*piVar1 = *piVar1 + 1;
										pUVar8 = __this_01._items;
										if (pUVar8 != null) {
											uVar4 = __this_01._size;
											if (uVar4 < (uint)pUVar8.Length) {
												__this_01._size = uVar4 + 1;
												pUVar8[(int)uVar4].x = (float)local_98._0_4_;
												pUVar8[(int)uVar4].y = (float)local_98._4_4_;
											}
											else {
												__this_01.AddWithResize((Vector2)local_98._0_8_);
											}
											__this_02 = this._colors;
											if (__this_02 != null) {
												piVar1 = &__this_02._version;
												*piVar1 = *piVar1 + 1;
												pUVar9 = __this_02._items;
												if (pUVar9 != null) {
													uVar4 = __this_02._size;
													if (uVar4 < (uint)pUVar9.Length) {
														__this_02._size = uVar4 + 1;
														pUVar9[(int)uVar4]._overlap_0._at_rgba.rgba =(int32_t)color._overlap_0;
													}
													else {
														__this_02.AddWithResize(color);
													}
													__this_03 = this._weights;
													local_b8.m_BoneIndex0 = 0;
													local_b8.m_BoneIndex1 = 0;
													local_b8.m_BoneIndex2 = 0;
													local_b8.m_BoneIndex3 = 0;
													local_b8.m_Weight0 = 0.0;
													local_b8.m_Weight1 = 0.0;
													local_b8.m_Weight2 = 0.0;
													local_b8.m_Weight3 = 0.0;
													local_b8.boneIndex0 = bone;
													local_b8.weight0 = 1.0;
													if (__this_03 != null) {
														local_68.m_BoneIndex0 = local_b8.m_BoneIndex0;
														local_68.m_BoneIndex1 = local_b8.m_BoneIndex1;
														local_68.m_BoneIndex2 = local_b8.m_BoneIndex2;
														local_68.m_BoneIndex3 = local_b8.m_BoneIndex3;
														local_68.m_Weight0 = local_b8.m_Weight0;
														local_68.m_Weight1 = local_b8.m_Weight1;
														local_68.m_Weight2 = local_b8.m_Weight2;
														local_68.m_Weight3 = local_b8.m_Weight3;
														piVar1 = &__this_03._version;
														*piVar1 = *piVar1 + 1;
														pUVar10 = __this_03._items;
														if (pUVar10 != null) {
															uVar4 = __this_03._size;
															if (uVar4 < (uint)pUVar10.Length) {
																__this_03._size = uVar4 + 1;
																pUVar11 = &pUVar10[(int)uVar4];
																pUVar11.m_BoneIndex0 = local_b8.m_BoneIndex0;
																pUVar11.m_BoneIndex1 = local_b8.m_BoneIndex1;
																pUVar11.m_BoneIndex2 = local_b8.m_BoneIndex2;
																pUVar11.m_BoneIndex3 = local_b8.m_BoneIndex3;
																pUVar3 = pUVar10.m_Items + (int)uVar4;
																pUVar3.m_Weight0 = local_b8.m_Weight0;
																pUVar3.m_Weight1 = local_b8.m_Weight1;
																pUVar3.m_Weight2 = local_b8.m_Weight2;
																pUVar3.m_Weight3 = local_b8.m_Weight3;
															}
															else {
																item.m_Weight2 = local_b8.m_Weight2;
																item.m_Weight3 = local_b8.m_Weight3;
																item.m_Weight0 = local_b8.m_Weight0;
																item.m_Weight1 = local_b8.m_Weight1;
																item.m_BoneIndex0 = local_b8.m_BoneIndex0;
																item.m_BoneIndex1 = local_b8.m_BoneIndex1;
																item.m_BoneIndex2 = local_b8.m_BoneIndex2;
																item.m_BoneIndex3 = local_b8.m_BoneIndex3;
																__this_03.AddWithResize(item);
															}
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
			throw new NullReferenceException();
		}

		[Token(Token = "0x60045B3")]
		[Address(RVA = "0x5B5DCE0", Offset = "0x5B5CCE0", VA = "0x5B5DCE0")]
		private void Compact()
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$Compact): 5 lines keep C-only constructs
			uint uVar1;
			List<int>[] pSVar2;
			Dictionary<int, int> __this_00;
			List<int> __this_01;
			ulong uVar3;
			MethodInfo in_RCX;
			ulong uVar4;

			if (Il2CppMethodInitialized_07547880 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
				Il2CppMethodInitialized_07547880 = true;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(Dictionary<int, int>)) ;
			__this_00 = new Dictionary<int, int>();
			__this_01 = new List<int>();
			pSVar2 = this._triangles;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar2.Length) {
				uVar3 = pSVar2.Length & 0xffffffff;
				uVar4 = 0;
				do {
					if (uVar3 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					TitanLimbMesh.CutMeshData.Remap(pSVar2[uVar4], __this_00, __this_01);
					uVar4 = uVar4 + 1;
					uVar1 = (uint)pSVar2.Length;
					uVar3 = (ulong)uVar1;
					in_RCX = (MethodInfo)(long)(int)uVar1;
				} while ((long)uVar4 < (long)in_RCX);
			}
			TitanLimbMesh.CutMeshData.Remap(this._wound, __this_00, __this_01);
			TitanLimbMesh.CutMeshData.Compact<Vector3>((List<T>)this._vertices, __this_01);
			TitanLimbMesh.CutMeshData.Compact<Vector3>((List<T>)this._normals, __this_01);
			TitanLimbMesh.CutMeshData.Compact<Vector4>((List<T>)this._tangents, __this_01);
			TitanLimbMesh.CutMeshData.Compact<Vector2>((List<T>)this._uv, __this_01);
			TitanLimbMesh.CutMeshData.Compact<Color32>((List<T>)this._colors, __this_01);
			TitanLimbMesh.CutMeshData.Compact<BoneWeight>((List<T>)this._weights, __this_01);
			return;
		}

		[Token(Token = "0x60045B4")]
		[Address(RVA = "0x5B5DEA0", Offset = "0x5B5CEA0", VA = "0x5B5DEA0")]
		private static void Remap(List<int> triangles, Dictionary<int, int> indices, List<int> used)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$Remap): 9 lines keep C-only constructs
			int piVar1;
			int iVar2;
			int value;
			uint uVar3;
			Int32[] pSVar4;
			bool bVar6;
			uint in_EAX;
			int iVar7;
			int iVar8;
			ulong uStack_38;

			uStack_38._0_4_ = in_EAX;
			uStack_38 = (ulong)(uint)uStack_38;
			if (triangles == null) {
		label_05c5e0a1: ;
				throw new NullReferenceException();
			}
			if (indices == null) {
				if (0 < triangles._size) {
					triangles.get_Item(0);
					throw new NullReferenceException();
				}
			}
			else {
				iVar2 = triangles._size;
				if (used == null) {
					if (0 < iVar2) {
						iVar8 = 0;
						do {
							iVar7 = triangles.get_Item(iVar8);
							bVar6 = indices.TryGetValue(iVar7, (int)((long)&uStack_38 + 4));
							if (!bVar6) goto label_05c5e0a1;
							triangles.set_Item(iVar8, uStack_38._4_4_);
							iVar8 = iVar8 + 1;
						} while (iVar8 < triangles._size);
					}
				}
				else if (0 < iVar2) {
					iVar8 = 0;
					do {
						iVar7 = triangles.get_Item(iVar8);
						bVar6 = indices.TryGetValue(iVar7, (int)((long)&uStack_38 + 4));
						if (!bVar6) {
							value = used._size;
							uStack_38 = CONCAT44(value, (uint)uStack_38);
							indices.Add(iVar7, value);
							piVar1 = &used._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = used._items;
							if (pSVar4 == null) goto label_05c5e0a1;
							uVar3 = used._size;
							if (uVar3 < (uint)pSVar4.Length) {
								used._size = uVar3 + 1;
								pSVar4[(int)uVar3] = iVar7;
							}
							else {
								used.AddWithResize(iVar7);
							}
						}
						triangles.set_Item(iVar8, uStack_38._4_4_);
						iVar8 = iVar8 + 1;
					} while (iVar8 < triangles._size);
				}
			}
			return;
		}

		[Token(Token = "0x60045B5")]
		private static void Compact<T>(List<T> values, List<int> used)
		{
		}

		[Token(Token = "0x60045B6")]
		[Address(RVA = "0x5B57DA0", Offset = "0x5B56DA0", VA = "0x5B57DA0")]
		public Mesh CreateMesh(MeshSource source, bool detached = false)
		{
			// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh.CutMeshData$$CreateMesh): 1 lines keep C-only constructs
			uint submesh;
			Object __this_00;
			List<BoneWeight> __this_01;
			Bounds value;
			int value_00;
			Object __this_02;
			String pSVar1;
			BoneWeight[] value_01;
			List<int>[] pSVar2;
			Int32[] triangles;
			ulong uVar3;
			Bounds local_40;

			if (Il2CppMethodInitialized_07547882 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_ToArray) ;
				Il2CppMethodInitialized_07547882 = true;
			}
			if (detached) {
				this.Compact();
			}
			if (source != null) {
				__this_00 = (Object)source.Original;
				__this_02 = new Mesh();
				if (__this_00 != null) {
					pSVar1 = __this_00.name;
					pSVar1 = String.Concat(pSVar1, " Limb Cut");
					if (__this_02 != null) {
						__this_02.name = pSVar1;
						value_00 = __this_00.indexFormat;
						__this_02.indexFormat = value_00;
						__this_02.SetVertices(this._vertices);
						__this_02.SetNormals(this._normals);
						__this_02.SetTangents(this._tangents);
						__this_02.SetUVs(0, this._uv);
						__this_02.SetColors(this._colors);
						__this_01 = this._weights;
						if (__this_01 != null) {
							value_01 = __this_01.ToArray();
							__this_02.boneWeights = value_01;
							__this_02.bindposes = source.Bindposes;
							pSVar2 = this._triangles;
							if (pSVar2 != null) {
								__this_02.subMeshCount = ((int)pSVar2.Length - (uint)detached) + 2;
								pSVar2 = this._triangles;
								if (pSVar2 != null) {
									uVar3 = 0;
									do {
										submesh = (uint)pSVar2.Length;
										if ((long)(int)submesh <= (long)uVar3) {
											__this_02.SetTriangles(this._wound, submesh);
											if (detached) {
												__this_02.RecalculateBounds();
											}
											else {
												triangles = __this_02.triangles;
												pSVar2 = this._triangles;
												if (pSVar2 == null) break;
												__this_02.SetTriangles(triangles, (int)pSVar2.Length + 1);
												local_40 = __this_00.bounds;
												value.m_Center.z = local_40.m_Center.z;
												value.m_Extents.x = local_40.m_Extents.x;
												value.m_Center.x = local_40.m_Center.x;
												value.m_Center.y = local_40.m_Center.y;
												value.m_Extents.y = local_40.m_Extents.y;
												value.m_Extents.z = local_40.m_Extents.z;
												__this_02.bounds = value;
											}
											return (Mesh)__this_02;
										}
										if (submesh <= uVar3) {
											throw new IndexOutOfRangeException();
										}
										__this_02.SetTriangles(pSVar2[uVar3], (int32_t)uVar3);
										uVar3 = uVar3 + 1;
										pSVar2 = this._triangles;
									} while (pSVar2 != null);
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x40023B3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<(Mesh, int, int, int, int, int, int), CachedBody> Bodies;

	[Token(Token = "0x40023B4")]
	[FieldOffset(Offset = "0x10")]
	private readonly SkinnedMeshRenderer _renderer;

	[Token(Token = "0x40023B5")]
	[FieldOffset(Offset = "0x18")]
	private readonly CachedBody _body;

	[Token(Token = "0x40023B6")]
	[FieldOffset(Offset = "0x20")]
	private readonly Material _woundMaterial;

	[Token(Token = "0x40023B7")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x40023B8")]
	[FieldOffset(Offset = "0x30")]
	private int _state;

	[Token(Token = "0x40023B9")]
	[FieldOffset(Offset = "0x38")]
	private readonly Transform[] _bones;

	[Token(Token = "0x40023BA")]
	[FieldOffset(Offset = "0x40")]
	private readonly SkinnedMeshRenderer[] _regrowth;

	[Token(Token = "0x40023BB")]
	[FieldOffset(Offset = "0x48")]
	private readonly MaterialPropertyBlock _growthProperties;

	[Token(Token = "0x40023BC")]
	[FieldOffset(Offset = "0x50")]
	private Material[] _growthMaterials;

	[Token(Token = "0x40023BD")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int Growth;

	[Token(Token = "0x40023BE")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int TissueIntensity;

	[Token(Token = "0x6004590")]
	[Address(RVA = "0x5B53E30", Offset = "0x5B52E30", VA = "0x5B53E30")]
	public TitanLimbMesh(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand, Material woundMaterial)
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$.ctor): clean
		TitanLimbMesh.MeshSource pCVar1;
		Mesh __this_00;
		int iVar2;
		SkinnedMeshRenderer[] pUVar3;
		MaterialPropertyBlock __this_01;
		TitanLimbMesh.CachedBody pCVar4;
		List<Material> __this_02;
		Transform[] pUVar5;

		pUVar3 = (SkinnedMeshRenderer[])new SkinnedMeshRenderer[2];
		this._regrowth = pUVar3;
		__this_01 = new MaterialPropertyBlock();
		this._growthProperties = __this_01;
		base();
		this._renderer = renderer;
		this._woundMaterial = woundMaterial;
		pCVar4 = TitanLimbMesh.GetBody(renderer, leftHand, rightHand);
		this._body = pCVar4;
		pCVar4 = this._body;
		if (((pCVar4 != null) &&(pCVar1 = pCVar4.Source, pCVar1 != null)) &&(__this_00 = pCVar1.Original, __this_00 != null)) {
			iVar2 = __this_00.subMeshCount;
			__this_02 = new List<Material>(iVar2 + 1);
			this._materials = __this_02;
			if (renderer != null) {
				pUVar5 = renderer.bones;
				this._bones = pUVar5;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004591")]
	[Address(RVA = "0x5B41960", Offset = "0x5B40960", VA = "0x5B41960")]
	public static void Prewarm(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$Prewarm): clean
		TitanLimbMesh.CachedBody __this;

		__this = TitanLimbMesh.GetBody(renderer, leftHand, rightHand);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Prewarm();
		return;
	}

	[Token(Token = "0x6004592")]
	[Address(RVA = "0x5B53FE0", Offset = "0x5B52FE0", VA = "0x5B53FE0")]
	private static CachedBody GetBody(SkinnedMeshRenderer renderer, Transform leftHand, Transform rightHand)
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$GetBody): 4 lines keep C-only constructs
		Dictionary<ValueTuple<Mesh, int, int, int, int, int, int>, TitanLimbMesh.CachedBody> pSVar1;
		System_ValueTuple_object__int__int__int__int__int__int__o key;
		System_ValueTuple_object__int__int__int__int__int__int__o key_00;
		bool bVar2;
		int item5;
		int item6;
		int item7;
		Transform[] array;
		Mesh pUVar3;
		Transform pUVar4;
		TitanLimbMesh.CachedBody __this;
		TitanLimbMesh.CachedBody local_80;
		uint local_74;
		int local_70;
		int local_6c;
		SkinnedMeshRenderer local_68;
		Mesh local_60;
		System_ValueTuple_object__int__int__int__int__int__int__o local_58;

		local_58.Item4 = 0;
		local_58.Item5 = 0;
		local_58.Item6 = 0;
		local_58.Item7 = 0;
		local_58.Item1 = null;
		local_58.Item2 = 0;
		local_58.Item3 = 0;
		local_80 = null;
		if (renderer != null) {
			array = renderer.bones;
			pUVar3 = renderer.sharedMesh;
			local_6c = Array.IndexOf<Transform>((Object[])array, (object)leftHand);
			if (leftHand != null) {
				local_60 = pUVar3;
				pUVar4 = leftHand.parent;
				local_70 = Array.IndexOf<Transform>((Object[])array, (object)pUVar4);
				pUVar4 = leftHand.parent;
				if (pUVar4 != null) {
					local_68 = renderer;
					pUVar4 = pUVar4.parent;
					local_74 = Array.IndexOf<Transform>((Object[])array, (object)pUVar4);
					item5 = Array.IndexOf<Transform>((Object[])array, (object)rightHand);
					if (rightHand != null) {
						pUVar4 = rightHand.parent;
						item6 = Array.IndexOf<Transform>((Object[])array, (object)pUVar4);
						pUVar4 = rightHand.parent;
						if (pUVar4 != null) {
							pUVar4 = pUVar4.parent;
							item7 = Array.IndexOf<Transform>((Object[])array, (object)pUVar4);
							local_58 = new ValueTuple<object, int, int, int, int, int, int>((object)local_60, local_6c, local_70, local_74, item5, item6, item7);
							pSVar1 = TitanLimbMesh.Bodies;
							if (pSVar1 != null) {
								key.Item2 = local_58.Item2;
								key.Item1 = local_58.Item1;
								key.Item3 = local_58.Item3;
								key.Item4 = local_58.Item4;
								key.Item5 = local_58.Item5;
								key.Item6 = local_58.Item6;
								key.Item7 = local_58.Item7;
								bVar2 = pSVar1.TryGetValue(key, (object*)&local_80);
								if (!bVar2) {
									__this = new TitanLimbMesh.CachedBody(local_68, leftHand, rightHand);
									local_80 = __this;
									pSVar1 = TitanLimbMesh.Bodies;
									if (pSVar1 == null) goto label_05c5427f;
									key_00.Item2 = local_58.Item2;
									key_00.Item1 = local_58.Item1;
									key_00.Item3 = local_58.Item3;
									key_00.Item4 = local_58.Item4;
									key_00.Item5 = local_58.Item5;
									key_00.Item6 = local_58.Item6;
									key_00.Item7 = local_58.Item7;
									pSVar1.Add(key_00, (object)local_80);
								}
								return local_80;
							}
						}
					}
				}
			}
		}
	label_05c5427f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004593")]
	[Address(RVA = "0x5B54910", Offset = "0x5B53910", VA = "0x5B54910")]
	public void Detach(bool left, bool arm, bool handDisabled, float handGrowth, Vector3 velocity)
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$Detach): clean
		Renderer __this_00;
		Component __this_01;
		TitanLimbMesh.CachedBody pCVar1;
		SkinnedMeshRenderer source;
		Material wound;
		bool bVar2;
		GameObject __this_02;
		Mesh limb;
		TitanLimbMesh.RegrowthMesh pCVar3;
		Mesh growth;

		__this_00 = (Renderer)this._renderer;
		if (__this_00 != null) {
			bVar2 = __this_00.enabled;
			if (!bVar2) {
				return;
			}
			__this_01 = (Component)this._renderer;
			if ((__this_01 != null) &&(__this_02 = __this_01.gameObject, __this_02 != null)) {
				bVar2 = __this_02.activeInHierarchy;
				if (!bVar2) {
					return;
				}
				pCVar1 = this._body;
				if (pCVar1 != null) {
					limb = pCVar1.GetDetached(left, arm, handDisabled, 0.0 < handGrowth && (arm && handDisabled));
					if (0.0 < handGrowth && (arm && handDisabled)) {
						pCVar1 = this._body;
						if ((pCVar1 == null) ||(pCVar3 = pCVar1.GetRegrowth(left, false), pCVar3 == null)) goto label_05c54a5f;
						growth = pCVar3.Mesh;
					}
					else {
						growth = null;
					}
					source = this._renderer;
					wound = this._woundMaterial;
					TitanLimbFallEffect.Play(source, limb, wound, growth, handGrowth, velocity, null);
					return;
				}
			}
		}
	label_05c54a5f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004594")]
	[Address(RVA = "0x5B54D90", Offset = "0x5B53D90", VA = "0x5B54D90")]
	public void SetDisabled(bool leftHand, bool rightHand, bool leftArm, bool rightArm, bool leftRegrowing = false, bool rightRegrowing = false)
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$SetDisabled): 2 lines keep C-only constructs
		TitanLimbMesh.CachedBody pCVar1;
		SkinnedMeshRenderer __this_00;
		Renderer pUVar2;
		List<Material> __this_01;
		TitanLimbMesh.MeshSource pCVar3;
		int iVar4;
		int index;
		Mesh pUVar5;
		uint right;
		uint left;
		undefined3 in_register_00000089;
		uint uVar6;
		int iVar7;

		uVar6 = CONCAT31(in_register_00000089, leftRegrowing);
		left = (uint)leftHand;
		if (leftArm) {
			left = 2;
		}
		right = (uint)rightHand;
		if (rightArm) {
			right = 2;
		}
		iVar4 = right * 3 + left;
		iVar7 = iVar4 + (uint)leftRegrowing * 9 + 0x12;
		if (!rightRegrowing) {
			iVar7 = iVar4 + (uint)leftRegrowing * 9;
		}
		if (this._state == iVar7) {
			return;
		}
		pCVar1 = this._body;
		if (pCVar1 != null) {
			__this_00 = this._renderer;
			pUVar5 = pCVar1.GetMesh(left, right, leftRegrowing, rightRegrowing);
			if (__this_00 != null) {
				__this_00.sharedMesh = pUVar5;
				if ((iVar7 == 0) != (this._state != 0)) {
	label_05c54f00: ;
					this._state = iVar7;
					return;
				}
				pUVar2 = (Renderer)this._renderer;
				if (pUVar2 != null) {
					pUVar2.GetSharedMaterials(this._materials);
					__this_01 = this._materials;
					if (iVar7 == 0) {
						if (__this_01 == null) goto label_05c54f13;
						__this_01.Remove((object)this._woundMaterial);
						pUVar2 = (Renderer)this._renderer;
					}
					else {
						pCVar1 = this._body;
						if ((((pCVar1 == null) ||(pCVar3 = pCVar1.Source, pCVar3 == null)) ||(pUVar5 = pCVar3.Original, pUVar5 == null)) ||(index = pUVar5.subMeshCount, __this_01 == null)) goto label_05c54f13;
						__this_01.Insert(index, (object)this._woundMaterial);
						pUVar2 = (Renderer)this._renderer;
					}
					if (pUVar2 != null) {
						pUVar2.SetSharedMaterials(this._materials);
						goto label_05c54f00;
					}
				}
			}
		}
	label_05c54f13: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004595")]
	[Address(RVA = "0x5B55140", Offset = "0x5B54140", VA = "0x5B55140", Slot = "4")]
	public void Dispose()
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$Dispose): clean
		uint uVar1;
		SkinnedMeshRenderer[] pUVar2;
		Material[] pUVar3;
		Material obj;
		bool bVar4;
		ulong uVar5;
		Object pUVar6;
		ulong uVar7;

		pUVar6 = (Object)this._renderer;
		bVar4 = (pUVar6 != null);
		if (bVar4) {
			this.SetDisabled(false, false, false, false, false, false);
		}
		pUVar2 = this._regrowth;
		if (pUVar2 == null) {
	label_05c552ab: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pUVar2.Length) {
			uVar5 = pUVar2.Length & 0xffffffff;
			uVar7 = 0;
			do {
				if (uVar5 <= uVar7) goto label_05c552a6;
				pUVar6 = (Object)pUVar2[uVar7];
				bVar4 = (pUVar6 != null);
				if (bVar4) {
					if (pUVar6 == null) goto label_05c552ab;
					pUVar6 = (Object)pUVar6.gameObject;
					Object.Destroy(pUVar6);
				}
				uVar7 = uVar7 + 1;
				uVar1 = (uint)pUVar2.Length;
				uVar5 = (ulong)uVar1;
			} while ((long)uVar7 < (long)(int)uVar1);
		}
		pUVar3 = this._growthMaterials;
		if ((pUVar3 != null) && (0 < (int)pUVar3.Length)) {
			uVar5 = pUVar3.Length & 0xffffffff;
			uVar7 = 0;
			do {
				if (uVar5 <= uVar7) {
	label_05c552a6: ;
					throw new IndexOutOfRangeException();
				}
				obj = pUVar3[uVar7];
				Object.Destroy((Object)obj);
				uVar7 = uVar7 + 1;
				uVar1 = (uint)pUVar3.Length;
				uVar5 = (ulong)uVar1;
			} while ((long)uVar7 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6004596")]
	[Address(RVA = "0x5B552B0", Offset = "0x5B542B0", VA = "0x5B552B0")]
	public Vector3 UpdateRegrowth(bool left, bool arm, float progress, Vector3 origin, bool effectsEnabled = true)
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$UpdateRegrowth): 12 lines keep C-only constructs
		Material[]* targetAddress;
		uint uVar1;
		SkinnedMeshRenderer[] pUVar2;
		TitanLimbMesh.CachedBody pCVar3;
		String name;
		Component pUVar4;
		SkinnedMeshRenderer pUVar5;
		Renderer pUVar6;
		Object y;
		MaterialPropertyBlock pUVar7;
		List<Material> pSVar8;
		TitanLimbMesh.MeshSource pCVar9;
		Vector3[] pUVar10;
		Transform[] bones;
		Matrix4x4[] bindposes;
		il2cpp_array_size_t iVar11;
		Mesh __this_00;
		Bounds value;
		bool bVar12;
		int iVar13;
		uint length;
		TitanLimbMesh.RegrowthMesh __this_01;
		String* ppSVar14;
		GameObject __this_02;
		GameObject __this_03;
		Transform pUVar15;
		Transform parent;
		Object x;
		object pIVar16;
		Object x_00;
		Material pUVar17;
		Material[] pUVar18;
		Shader value_00;
		Material pUVar19;
		MethodInfo method_00;
		int index;
		uint index_00;
		ulong uVar20;
		long lVar21;
		undefined7 in_register_00000031;
		ulong uVar22;
		ulong uVar23;
		float fVar24;
		float fVar25;
		Vector3 UVar26;
		Vector3 UVar27;
		float local_98;
		float fStack_94;
		float local_78;
		float fStack_74;
		Bounds local_48;

		uVar22 = CONCAT71(in_register_00000031, left);
		fVar24 = origin.z;
		if (Il2CppMethodInitialized_07547867 == false) {
			uVar22 = uVar22 & 0xffffffff;
			Il2CppMethodInitialized_07547867 = true;
		}
		pUVar2 = this._regrowth;
		if (pUVar2 == null) goto label_05c55a9c;
		method_00 = (MethodInfo)(uVar22 & 0xffffffff ^ 1);
		uVar20 = (ulong)method_00 & 0xff;
		if ((uint)pUVar2.Length <= (uint)uVar20) {
	label_05c55aa1: ;
			throw new IndexOutOfRangeException();
		}
		x = (Object)pUVar2[uVar20];
		if ((progress <= 0.0) || (1.0 <= progress)) {
			bVar12 = (x != null);
			if (bVar12) {
				if (x == null) goto label_05c55a9c;
				x.enabled = false;
			}
			local_78 = origin.x;
			fStack_74 = origin.y;
			goto label_05c55928;
		}
		pCVar3 = this._body;
		if (pCVar3 == null) goto label_05c55a9c;
		__this_01 = pCVar3.GetRegrowth(SUB81(uVar22, 0), arm);
		bVar12 = (x == null);
		if (bVar12) {
			if (this._growthMaterials == null) {
				pUVar6 = (Renderer)this._renderer;
				if (pUVar6 != null) {
					pUVar6.GetSharedMaterials(this._materials);
					pCVar3 = this._body;
					if (((pCVar3 != null) &&(pCVar9 = pCVar3.Source, pCVar9 != null)) &&(__this_00 = pCVar9.Original, __this_00 != null)) {
						targetAddress = &this._growthMaterials;
						length = __this_00.subMeshCount;
						pUVar18 = (Material[])new Material[length];
						*targetAddress = pUVar18;
						value_00 = BasicTitanComponentCache.LoadShader("TitanRegrowth");
						pUVar18 = *targetAddress;
						if (pUVar18 != null) {
							lVar21 = 0x20;
							uVar23 = 0;
							do {
								if ((long)(int)pUVar18.Length <= (long)uVar23) goto label_05c55415;
								pSVar8 = this._materials;
								if (pSVar8 == null) break;
								pUVar19 = pSVar8.get_Item((int32_t)uVar23);
								pUVar17 = new Material(pUVar19);
								if (pUVar17 == null) break;
								pUVar17.shader = value_00;
								pIVar16 = il2cpp_vm_Object_IsInst((object)pUVar17, (((pUVar18.obj).klass)._1).element_class);
								if (pIVar16 == null) goto label_05c55aa6;
								if ((uint)pUVar18.Length <= uVar23) goto label_05c55aa1;
								pUVar18[uVar23] = pUVar17;
								uVar23 = uVar23 + 1;
								pUVar18 = *targetAddress;
								lVar21 = lVar21 + 8;
							} while (pUVar18 != null);
						}
					}
				}
				goto label_05c55a9c;
			}
	label_05c55415: ;
			if (SUB81(uVar22, 0) == false) {
				ppSVar14 = &"Right limb regrowth";
			}
			else {
				ppSVar14 = &"Left limb regrowth";
			}
			name = *ppSVar14;
			__this_02 = new GameObject(name);
			pUVar4 = (Component)this._renderer;
			if (((pUVar4 == null) ||(__this_03 = pUVar4.gameObject, __this_03 == null)) ||(iVar13 = __this_03.layer, __this_02 == null)) goto label_05c55a9c;
			__this_02.layer = iVar13;
			pUVar15 = __this_02.transform;
			pUVar4 = (Component)this._renderer;
			if ((pUVar4 == null) ||(parent = pUVar4.transform, pUVar15 == null)) goto label_05c55a9c;
			pUVar15.SetParent(parent, false);
			x = (Object)__this_02.AddComponent<SkinnedMeshRenderer>();
			if (x == null) goto label_05c55a9c;
			x.bones = this._bones;
			pUVar5 = this._renderer;
			if (pUVar5 == null) goto label_05c55a9c;
			pUVar15 = pUVar5.rootBone;
			x.rootBone = pUVar15;
			pUVar6 = (Renderer)this._renderer;
			if (pUVar6 == null) goto label_05c55a9c;
			local_48 = pUVar6.localBounds;
			value.m_Center.z = local_48.m_Center.z;
			value.m_Extents.x = local_48.m_Extents.x;
			value.m_Center.x = local_48.m_Center.x;
			value.m_Center.y = local_48.m_Center.y;
			value.m_Extents.y = local_48.m_Extents.y;
			value.m_Extents.z = local_48.m_Extents.z;
			x.localBounds = value;
			x.sharedMaterials = this._growthMaterials;
			pUVar5 = this._renderer;
			if (pUVar5 == null) goto label_05c55a9c;
			iVar13 = pUVar5.quality;
			x.quality = iVar13;
			pUVar2 = this._regrowth;
			if (pUVar2 == null) goto label_05c55a9c;
			pIVar16 = il2cpp_vm_Object_IsInst((object)x, (((pUVar2.obj).klass)._1).element_class);
			if (pIVar16 == null) {
	label_05c55aa6: ;
				pIVar16 = new ArrayTypeMismatchException();
				throw pIVar16;
			}
			if ((uint)pUVar2.Length <= (uint)uVar20) goto label_05c55aa1;
			pUVar2[uVar20] = (SkinnedMeshRenderer)x;
		}
		else if (x == null) goto label_05c55a9c;
		x_00 = (Object)x.sharedMesh;
		if (__this_01 == null) goto label_05c55a9c;
		y = (Object)__this_01.Mesh;
		bVar12 = (x_00 != y);
		if (bVar12) {
			x.sharedMesh = __this_01.Mesh;
		}
		bVar12 = x.enabled;
		if (!bVar12) {
			pUVar6 = (Renderer)this._renderer;
			if (pUVar6 != null) {
				pUVar6.GetSharedMaterials(this._materials);
				pUVar18 = this._growthMaterials;
				if (pUVar18 != null) {
					lVar21 = 0;
					do {
						uVar1 = (uint)pUVar18.Length;
						index_00 = (uint)lVar21;
						if ((int)uVar1 <= (int)index_00) goto label_05c5568a;
						if (uVar1 <= index_00) goto label_05c55aa1;
						pSVar8 = this._materials;
						if (pSVar8 == null) break;
						pUVar19 = pUVar18[lVar21];
						pUVar17 = pSVar8.get_Item(index_00);
						if (pUVar19 == null) break;
						pUVar19.CopyPropertiesFromMaterial(pUVar17);
						pUVar18 = this._growthMaterials;
						lVar21 = lVar21 + 1;
					} while (pUVar18 != null);
				}
			}
			goto label_05c55a9c;
		}
	label_05c5568a: ;
		pUVar6 = (Renderer)this._renderer;
		if (pUVar6 == null) goto label_05c55a9c;
		bVar12 = pUVar6.enabled;
		x.enabled = bVar12;
		pUVar7 = this._growthProperties;
		if (pUVar7 == null) goto label_05c55a9c;
		pUVar7.SetFloat(TitanLimbMesh.Growth, progress);
		pUVar7 = this._growthProperties;
		if (pUVar7 == null) goto label_05c55a9c;
		if (effectsEnabled) {
			fVar24 = 1.0;
		}
		else {
			fVar24 = 0.0;
		}
		pUVar7.SetFloat(TitanLimbMesh.TissueIntensity, fVar24);
		x.SetPropertyBlock(this._growthProperties);
		pCVar3 = this._body;
		if (((pCVar3 == null) ||(pCVar9 = pCVar3.Source, pCVar9 == null)) ||(pUVar10 = __this_01._centers, pUVar10 == null)) goto label_05c55a9c;
		bones = this._bones;
		bindposes = pCVar9.Bindposes;
		iVar11 = pUVar10.Length;
		if (Il2CppMethodInitialized_0753e7f6 == false) {
			Il2CppMethodInitialized_0753e7f6 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c5586a;
	label_05c5582a: ;
			pUVar10 = __this_01._centers;
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c5582a;
	label_05c5586a: ;
			pUVar10 = __this_01._centers;
		}
		if (pUVar10 == null) {
	label_05c55a9c: ;
			throw new NullReferenceException();
		}
		fVar24 = (float)((int)iVar11 + -1) * progress;
		fVar25 = floorf(fVar24);
		index = (int)pUVar10.Length + -2;
		if ((int)fVar25 < index) {
			index = (int)fVar25;
		}
		UVar26 = __this_01.Skin(index, bones, bindposes);
		UVar27 = __this_01.Skin(index + 1, bones, bindposes);
		fVar24 = fVar24 - (float)index;
		fVar25 = 1.0;
		if (fVar24 <= 1.0) {
			fVar25 = fVar24;
		}
		fVar25 = (float)(-(uint)(0.0 <= fVar24) & (uint)fVar25);
		local_98 = UVar26.x;
		fStack_94 = UVar26.y;
		local_78 = fVar25 * (UVar27.x - local_98) + local_98;
		fStack_74 = fVar25 * (UVar27.y - fStack_94) + fStack_94;
		fVar24 = (UVar27.z - UVar26.z) * fVar25 + UVar26.z;
	label_05c55928: ;
		UVar26.y = fStack_74;
		UVar26.x = local_78;
		UVar26.z = fVar24;
		return (Vector3)UVar26;
	}

	[Token(Token = "0x6004597")]
	[Address(RVA = "0x5B55C20", Offset = "0x5B54C20", VA = "0x5B55C20")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void ClearCache()
	{
		// Lifted from source/cpp/Characters/TitanLimbMesh.c (Characters.TitanLimbMesh$$ClearCache): 4 lines keep C-only constructs
		Dictionary<ValueTuple<Mesh, int, int, int, int, int, int>, TitanLimbMesh.CachedBody> pSVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this;
		MethodInfo method_00;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
		byte puStack_20;

		SStack_48._dictionary = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._currentValue = null;
		pSVar1 = TitanLimbMesh.Bodies;
		if (pSVar1 != null) {
			__this = pSVar1.Values;
			if (__this != null) {
				SStack_48 = __this.GetEnumerator();
				puStack_20 = (byte)&SStack_48;
				while(true) {
					method_00 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_718f5e0 ;
					bVar2 = SStack_48.MoveNext();
					if (!bVar2) break;
					if ((TitanLimbMesh.CachedBody)SStack_48._currentValue ==null) {
						throw new NullReferenceException();
					}
					SStack_48._currentValue.Dispose();
				}
				SStack_48.Dispose();
				pSVar1 = TitanLimbMesh.Bodies;
				if (pSVar1 != null) {
					pSVar1.Clear();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanLimbMesh.c.

	// Characters.TitanLimbMesh.CutMeshData$$Compact<BoneWeight>: 11 lines keep C-only constructs
	private static void CutMeshData_Compact_BoneWeight(List<T> values, List<int> used)
	{
		int piVar1;
		uint length;
		object pIVar2;
		int iVar3;
		Il2CppClass klass;
		object collection;
		ulong uVar4;
		Il2CppClass pIStack_50;
		IntPtr pvStack_48;
		Il2CppClass pIStack_40;
		IntPtr pvStack_38;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (used != null) {
			length = used._size;
			klass = method.rgctx_data._0_T__;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			collection = new klass[length];
			if (0 < used._size) {
				if (values == null) {
					used.get_Item(0);
					throw new NullReferenceException();
				}
				if (collection == null) {
					iVar3 = used.get_Item(0);
					pIStack_50 = values.get_Item(iVar3);
					throw new NullReferenceException();
				}
				uVar4 = 0;
				pIVar2 = collection;
				do {
					iVar3 = used.get_Item((int32_t)uVar4);
					pIStack_50 = values.get_Item(iVar3);
					if (*(uint)&collection[1].monitor <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					pIVar2[3].klass = pIStack_40;
					pIVar2[3].monitor = pvStack_38;
					pIVar2[2].klass = pIStack_50;
					pIVar2[2].monitor = pvStack_48;
					uVar4 = uVar4 + 1;
					pIVar2 = pIVar2 + 2;
				} while ((long)uVar4 < (long)used._size);
			}
			if (values != null) {
				piVar1 = &values._version;
				*piVar1 = *piVar1 + 1;
				values._size = 0;
				values.AddRange((IEnumerable<T>)collection);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Characters.TitanLimbMesh.CutMeshData$$Compact<Color32>: 10 lines keep C-only constructs
	private static void CutMeshData_Compact_Color32(List<T> values, List<int> used)
	{
		int piVar1;
		uint length;
		int iVar2;
		Color32 UVar3;
		Il2CppClass klass;
		object collection;
		ulong uVar4;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (used != null) {
			length = used._size;
			klass = method.rgctx_data._0_T__;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			collection = new klass[length];
			if (0 < used._size) {
				if (values == null) {
					used.get_Item(0);
					throw new NullReferenceException();
				}
				if (collection == null) {
					iVar2 = used.get_Item(0);
					values.get_Item(iVar2);
					throw new NullReferenceException();
				}
				uVar4 = 0;
				do {
					iVar2 = used.get_Item((int32_t)uVar4);
					UVar3._overlap_0 =(_union_53531) values.get_Item(iVar2);
					if (*(uint)&collection[1].monitor <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					(((Color32)((long)&collection[2].klass + uVar4 * 4))._overlap_0)._at_rgba =(_struct_53532)UVar3._overlap_0;
					uVar4 = uVar4 + 1;
				} while ((long)uVar4 < (long)used._size);
			}
			if (values != null) {
				piVar1 = &values._version;
				*piVar1 = *piVar1 + 1;
				values._size = 0;
				values.AddRange((IEnumerable<T>)collection);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector2>: 10 lines keep C-only constructs
	private static void CutMeshData_Compact_Vector2(List<T> values, List<int> used)
	{
		int piVar1;
		uint length;
		int iVar2;
		Il2CppClass klass;
		object collection;
		ulong uVar3;
		Vector2 UVar4;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (used != null) {
			length = used._size;
			klass = method.rgctx_data._0_T__;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			collection = new klass[length];
			if (0 < used._size) {
				if (values == null) {
					used.get_Item(0);
					throw new NullReferenceException();
				}
				if (collection == null) {
					iVar2 = used.get_Item(0);
					values.get_Item(iVar2);
					throw new NullReferenceException();
				}
				uVar3 = 0;
				do {
					iVar2 = used.get_Item((int32_t)uVar3);
					UVar4 = (Vector2)values.get_Item(iVar2);
					if (*(uint)&collection[1].monitor <= uVar3) {
						throw new IndexOutOfRangeException();
					}
					*(Vector2)(&collection[2].klass + uVar3) = UVar4;
					uVar3 = uVar3 + 1;
				} while ((long)uVar3 < (long)used._size);
			}
			if (values != null) {
				piVar1 = &values._version;
				*piVar1 = *piVar1 + 1;
				values._size = 0;
				values.AddRange((IEnumerable<T>)collection);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector3>: 11 lines keep C-only constructs
	private static void CutMeshData_Compact_Vector3(List<T> values, List<int> used)
	{
		int piVar1;
		uint length;
		int iVar2;
		Il2CppClass klass;
		object collection;
		ulong uVar3;
		IntPtr ppvVar4;
		Vector3 UVar5;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (used != null) {
			length = used._size;
			klass = method.rgctx_data._0_T__;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			collection = new klass[length];
			if (0 < used._size) {
				if (values == null) {
					used.get_Item(0);
					throw new NullReferenceException();
				}
				if (collection == null) {
					iVar2 = used.get_Item(0);
					values.get_Item(iVar2);
					throw new NullReferenceException();
				}
				ppvVar4 = &collection[2].monitor;
				uVar3 = 0;
				do {
					iVar2 = used.get_Item((int32_t)uVar3);
					UVar5 = values.get_Item(iVar2);
					if (*(uint)&collection[1].monitor <= uVar3) {
						throw new IndexOutOfRangeException();
					}
					((object)(ppvVar4 + -1)).klass = UVar5._0_8_;
					*(float)ppvVar4 = UVar5.z;
					uVar3 = uVar3 + 1;
					ppvVar4 = (IntPtr)((long)ppvVar4 + 0xc);
				} while ((long)uVar3 < (long)used._size);
			}
			if (values != null) {
				piVar1 = &values._version;
				*piVar1 = *piVar1 + 1;
				values._size = 0;
				values.AddRange((IEnumerable<T>)collection);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector4>: 10 lines keep C-only constructs
	private static void CutMeshData_Compact_Vector4(List<T> values, List<int> used)
	{
		int piVar1;
		uint length;
		int iVar2;
		Il2CppClass klass;
		object collection;
		ulong uVar3;
		IntPtr ppvVar4;
		object IVar5;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (used != null) {
			length = used._size;
			klass = method.rgctx_data._0_T__;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			collection = new klass[length];
			if (0 < used._size) {
				if (values == null) {
					used.get_Item(0);
					throw new NullReferenceException();
				}
				if (collection == null) {
					iVar2 = used.get_Item(0);
					values.get_Item(iVar2);
					throw new NullReferenceException();
				}
				ppvVar4 = &collection[2].monitor;
				uVar3 = 0;
				do {
					iVar2 = used.get_Item((int32_t)uVar3);
					IVar5 = (Il2CppObject) values.get_Item(iVar2);
					if (*(uint)&collection[1].monitor <= uVar3) {
						throw new IndexOutOfRangeException();
					}
					*(object)(ppvVar4 + -1) = IVar5;
					uVar3 = uVar3 + 1;
					ppvVar4 = ppvVar4 + 2;
				} while ((long)uVar3 < (long)used._size);
			}
			if (values != null) {
				piVar1 = &values._version;
				*piVar1 = *piVar1 + 1;
				values._size = 0;
				values.AddRange((IEnumerable<T>)collection);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Characters.TitanLimbMesh.CutMeshData$$Compact<__Il2CppFullySharedGenericType>: 23 lines keep C-only constructs
	private static void CutMeshData_Compact___Il2CppFullySharedGenericType(List<T> values, List<int> used)
	{
		uint length;
		uint uVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		InvokerMethod pIVar4;
		long lVar5;
		Il2CppClass* ppIVar6;
		ulong __n;
		MethodInfo_379DAC0 pMVar7;
		List<T> pSVar8;
		MethodInfo_379DAC0_RGCTXs pMVar9;
		Il2CppClass pIVar10;
		object pIVar11;
		byte puVar12;
		ulong uVar13;
		byte __src;
		ulong uStack_70;
		ulong local_68;
		object local_60;
		int local_58;
		MethodInfo_379DAC0 local_48;
		List<T> local_40;
		int local_34;

		pMVar9 = method.rgctx_data;
		if (pMVar9 == null) {
			uStack_70 = 0x389daef;
			uStack_70 = 0x389dafb;
			pMVar9 = method.rgctx_data;
			if (pMVar9 == null) {
				uStack_70 = 0x389db0c;
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar9 = method.rgctx_data;
			}
		}
		local_68 = (ulong)(pMVar9._3_T._2).stack_slot_size;
		lVar5 = -(local_68 + 0xf & 0xfffffffffffffff0);
		__src = (byte)((long)&local_68 + lVar5);
		puVar12 = __src;
		if (used != null) {
			length = used._size;
			pIVar10 = pMVar9._0_T__;
			local_48 = method;
			local_40 = values;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				*(ulong)((long)&uStack_70 + lVar5) = 0x389db56;
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				puVar12 = (byte)((long)&local_68 + lVar5);
			}
			*(ulong)(puVar12 + -8) = 0x389db61;
			pIVar11 = new pIVar10[length];
			if (0 < used._size) {
				if (local_40 == null) {
					*(ulong)(puVar12 + -8) = 0x389dcb6;
					used.get_Item(0);
					*(ulong)(puVar12 + -8) = 0x389dcbb;
					throw new NullReferenceException();
				}
				if (pIVar11 == null) {
					*(ulong)(puVar12 + -8) = 0x389dccf;
					local_34 = used.get_Item(0);
					pSVar8 = local_40;
					pMVar2 = local_48.rgctx_data._2_System_Collections_Generic_List_T__get_Item;
					pIVar3 = pMVar2.methodPointer;
					local_58 = &local_34;
					pIVar4 = pMVar2.invoker_method;
					*(ulong)(puVar12 + -8) = 0x389dcfb;
					(*pIVar4)(pIVar3,pMVar2,pSVar8,&local_58,__src);
					*(code*)(puVar12 + -8) = Unity_Properties_TypeConversion_PrimitivesConverters__DoConvert_bool_;
					throw new NullReferenceException();
				}
				local_60 = pIVar11 + 2;
				uVar13 = 0;
				do {
					*(ulong)(puVar12 + -8) = 0x389dbb8;
					local_34 = used.get_Item((int32_t)uVar13);
					pSVar8 = local_40;
					pMVar7 = local_48;
					pMVar2 = local_48.rgctx_data._2_System_Collections_Generic_List_T__get_Item;
					pIVar3 = pMVar2.methodPointer;
					local_58 = &local_34;
					pIVar4 = pMVar2.invoker_method;
					*(ulong)(puVar12 + -8) = 0x389dbe5;
					(*pIVar4)(pIVar3,pMVar2,pSVar8,&local_58,__src);
					__n = local_68;
					if (*(uint)&pIVar11[1].monitor <= uVar13) {
	label_0389dc98: ;
						*(ulong)(puVar12 + -8) = 0x389dc9d;
						throw new IndexOutOfRangeException();
					}
					uVar1 = (pIVar11.klass._2).element_size;
					ppIVar6 = &local_60.klass;
					*(ulong)(puVar12 + -8) = 0x389dc0f;
					memcpy((Il2CppClass*)((long)ppIVar6 + uVar1 * uVar13), __src, __n);
					pIVar10 = pMVar7.rgctx_data._3_T;
					if (((pIVar10._2).bitflags1 & 1) == 0) {
						*(ulong)(puVar12 + -8) = 0x389dc26;
						pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					}
					if (*(uint)&pIVar11[1].monitor <= uVar13) goto label_0389dc98;
					uVar1 = (pIVar11.klass._2).element_size;
					ppIVar6 = &local_60.klass;
					*(ulong)(puVar12 + -8) = 0x389dc4e;
					il2cpp_runtime_helper_030d5fd0(pIVar10, (Il2CppClass*)((long)ppIVar6 + uVar1 * uVar13), __src);
					uVar13 = uVar13 + 1;
				} while ((long)uVar13 < (long)used._size);
			}
			pSVar8 = local_40;
			pMVar7 = local_48;
			if (local_40 != null) {
				pIVar3 = local_48.rgctx_data._4_System_Collections_Generic_List_T__Clear.methodPointer;
				*(ulong)(puVar12 + -8) = 0x389dc79;
				(*pIVar3)(pSVar8);
				pIVar3 = pMVar7.rgctx_data._5_System_Collections_Generic_List_T__AddRange.methodPointer;
				*(ulong)(puVar12 + -8) = 0x389dc89;
				(*pIVar3)(pSVar8,pIVar11);
				return;
			}
		}
		*(ulong)(puVar12 + -8) = 0x389dca2;
		throw new NullReferenceException();
	}

	// Characters.TitanLimbMesh$$.cctor: 1 lines keep C-only constructs
	static TitanLimbMesh()
	{
		int iVar1;
		Dictionary<ValueTuple<Mesh, int, int, int, int, int, int>, TitanLimbMesh.CachedBody> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<ValueTuple<Mesh, int, int, int, int, int, int>, TitanLimbMesh.CachedBody>));
		__this = new Dictionary<ValueTuple<object, int, int, int, int, int, int>, object>();
		TitanLimbMesh.Bodies = __this;
		iVar1 = Shader.PropertyToID("_Growth");
		TitanLimbMesh.Growth = iVar1;
		iVar1 = Shader.PropertyToID("_TissueIntensity");
		TitanLimbMesh.TissueIntensity = iVar1;
		return;
	}

	// Characters.TitanLimbMesh.CutMeshData.<>c__DisplayClass13_0$$.ctor: clean
	private void CutMeshData_c__DisplayClass13_0__ctor()
	{
		base();
		return;
	}

	// Characters.TitanLimbMesh.CutMeshData.<>c__DisplayClass13_0$$<AddCap>b__0: 6 lines keep C-only constructs
	private int CutMeshData_c__DisplayClass13_0__AddCap_b__0(Vector3 a, Vector3 b)
	{
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
		int iVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		float local_1c;
		byte[] local_18 = new byte[16];

		local_18._8_4_ = in_XMM2_Dc;
		local_18._0_8_ = b._0_8_;
		local_18._12_4_ = in_XMM2_Dd;
		uVar1 = this.center.x;
		uVar7 = this.center.y;
		uVar2 = this.axisY.x;
		uVar8 = this.axisY.y;
		uVar3 = this.axisX.x;
		uVar9 = this.axisX.y;
		fVar14 = a.x - (float)uVar1;
		fVar15 = a.y - (float)uVar7;
		fVar16 = a.z - this.center.z;
		local_1c = atan2f(this.axisY.z * fVar16 + (float)uVar8 * fVar15 + (float)uVar2 * fVar14, fVar16 * this.axisX.z + (float)uVar9 * fVar15 + (float)uVar3 * fVar14);
		fVar14 = b.z - this.center.z;
		uVar4 = this.center.x;
		uVar10 = this.center.y;
		uVar5 = this.axisY.x;
		uVar11 = this.axisY.y;
		uVar6 = this.axisX.x;
		uVar12 = this.axisX.y;
		fVar14 = atan2f(this.axisY.z * fVar14 +(float)uVar11 * ((float)local_18._4_4_ - (float)uVar10) +(float)uVar5 * ((float)local_18._0_4_ - (float)uVar4), fVar14 * this.axisX.z +((float)local_18._4_4_ - (float)uVar10) * (float)uVar12 +((float)local_18._0_4_ - (float)uVar4) * (float)uVar6);
		return iVar13;
	}
}
