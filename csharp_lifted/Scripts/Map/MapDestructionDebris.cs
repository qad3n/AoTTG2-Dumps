// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestructionDebris
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapDestructionDebris.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Threading.Tasks;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Map;

[Token(Token = "0x20003F2")]
internal sealed class MapDestructionDebris : MonoBehaviour
{
	[Token(Token = "0x20003F3")]
	private sealed class Piece
	{
		[Token(Token = "0x400145B")]
		[FieldOffset(Offset = "0x10")]
		public GameObject Fragment;

		[Token(Token = "0x400145C")]
		[FieldOffset(Offset = "0x18")]
		public Mesh Collision;

		[Token(Token = "0x400145D")]
		[FieldOffset(Offset = "0x20")]
		public Rigidbody Body;

		[Token(Token = "0x400145E")]
		[FieldOffset(Offset = "0x28")]
		public ConstantForce Force;

		[Token(Token = "0x6001946")]
		[Address(RVA = "0x5887600", Offset = "0x5886600", VA = "0x5887600")]
		public Piece()
		{
			// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris.Piece$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x400143A")]
	private const int MaxActive = 8;

	[Token(Token = "0x400143B")]
	private const int MaxFractureTriangles = 20000;

	[Token(Token = "0x400143C")]
	private const int MinPieces = 6;

	[Token(Token = "0x400143D")]
	private const int MaxPieces = 40;

	[Token(Token = "0x400143E")]
	private const float PieceSize = 3f;

	[Token(Token = "0x400143F")]
	private const float GroundClearance = 0.05f;

	[Token(Token = "0x4001440")]
	private const float MinColliderThickness = 0.1f;

	[Token(Token = "0x4001441")]
	private const float ColliderShrink = 0.75f;

	[Token(Token = "0x4001442")]
	private const float ExtraGravity = 1f;

	[Token(Token = "0x4001443")]
	private const float RubbleFriction = 0.1f;

	[Token(Token = "0x4001444")]
	private const float Spin = 1.2f;

	[Token(Token = "0x4001445")]
	private const float Nudge = 1f;

	[Token(Token = "0x4001446")]
	private const float MinSettleTime = 0.5f;

	[Token(Token = "0x4001447")]
	private const float SettledSpeed = 1f;

	[Token(Token = "0x4001448")]
	private const float FadeDelay = 3f;

	[Token(Token = "0x4001449")]
	private const float FadeDuration = 1.5f;

	[Token(Token = "0x400144A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FadeId;

	[Token(Token = "0x400144B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<MapDestructionDebris> Active;

	[Token(Token = "0x400144C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly RaycastHit[] GroundHits;

	[Token(Token = "0x400144D")]
	[FieldOffset(Offset = "0x18")]
	private static Shader _shader;

	[Token(Token = "0x400144E")]
	[FieldOffset(Offset = "0x20")]
	private static PhysicsMaterial _rubble;

	[Token(Token = "0x400144F")]
	[FieldOffset(Offset = "0x28")]
	private static int _workFrame;

	[Token(Token = "0x4001450")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<Material, Material> _rubbleMaterials;

	[Token(Token = "0x4001451")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Mesh> _meshes;

	[Token(Token = "0x4001452")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Piece> _pieces;

	[Token(Token = "0x4001453")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<GameObject> _sectionVisuals;

	[Token(Token = "0x4001454")]
	[FieldOffset(Offset = "0x40")]
	private Material[] _fragmentMaterials;

	[Token(Token = "0x4001455")]
	[FieldOffset(Offset = "0x48")]
	private Task<List<List<MapFracture.Triangle>>> _fracture;

	[Token(Token = "0x4001456")]
	[FieldOffset(Offset = "0x50")]
	private Task _baking;

	[Token(Token = "0x4001457")]
	[FieldOffset(Offset = "0x58")]
	private ShadowCastingMode _shadows;

	[Token(Token = "0x4001458")]
	[FieldOffset(Offset = "0x5C")]
	private float _age;

	[Token(Token = "0x4001459")]
	[FieldOffset(Offset = "0x60")]
	private float _activeAge;

	[Token(Token = "0x400145A")]
	[FieldOffset(Offset = "0x64")]
	private int _seed;

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x5881DE0", Offset = "0x5880DE0", VA = "0x5881DE0")]
	public static void Spawn(DestructibleMapObject target)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$Spawn): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MeshFilter[] pUVar3;
		MapDestructionDebris[] pMVar4;
		int iVar6;
		List<MapDestructionDebris> pSVar7;
		MapDestructionDebris pMVar8;
		Object obj;
		GameObject __this;
		Transform __this_00;
		MeshRenderer __this_01;

		if ((target != null) &&(pUVar3 = target.Filters, pUVar3 != null)) {
			if (pUVar3.Length == 0) {
				return;
			}
			pSVar7 = MapDestructionDebris.Active;
			if (pSVar7 != null) {
				if (7 < pSVar7._size) {
					if ((typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor == 0) {
						pSVar7 = MapDestructionDebris.Active;
						if (pSVar7 == null) goto label_05982114;
					}
					pMVar8 = pSVar7.get_Item(0);
					if (pMVar8 == null) goto label_05982114;
					obj = (Object)pMVar8.gameObject;
					Object.Destroy(obj);
					pSVar7 = MapDestructionDebris.Active;
					if (pSVar7 == null) goto label_05982114;
					pSVar7.RemoveAt(0);
				}
				MapDestructionDebris.LoadAssets();
				__this = new GameObject("Map destruction debris");
				if (__this != null) {
					__this.layer = PhysicsLayer.MapObjectMapObjects ;
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.position = (Vector3)target.Bounds.m_Center;
						pMVar8 = __this.AddComponent<MapDestructionDebris>();
						if (pMVar8 != null) {
							pMVar8._seed = target.Id;
							pUVar3 = target.Filters;
							if (pUVar3 != null) {
								if ((int)pUVar3.Length == 0) {
									throw new IndexOutOfRangeException();
								}
								if ((Component)pUVar3[0] != null) {
									__this_01 = (pUVar3[0]).GetComponent<MeshRenderer>();
									if (__this_01 != null) {
										iVar6 = __this_01.shadowCastingMode;
										pMVar8._shadows = iVar6;
										pMVar8.Shatter(target);
										pSVar7 = MapDestructionDebris.Active;
										if (pSVar7 != null) {
											piVar1 = &pSVar7._version;
											*piVar1 = *piVar1 + 1;
											pMVar4 = pSVar7._items;
											if (pMVar4 != null) {
												uVar2 = pSVar7._size;
												if (uVar2 < (uint)pMVar4.Length) {
													pSVar7._size = uVar2 + 1;
													pMVar4[(int)uVar2] = pMVar8;
													return;
												}
												pSVar7.AddWithResize((object)pMVar8);
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
	label_05982114: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x5882D70", Offset = "0x5881D70", VA = "0x5882D70")]
	private static void LoadAssets()
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$LoadAssets): clean
		Object pUVar1;
		Map_MapDestructionDebris_StaticFields pMVar2;
		bool bVar3;
		Shader pUVar4;
		PhysicsMaterial __this;

		pUVar1 = (Object)MapDestructionDebris._shader;
		bVar3 = (pUVar1 == null);
		if (bVar3) {
			pUVar4 = Resources.Load<Shader>("Shaders/MapDebris");
			pMVar2 = typeof(MapDestructionDebris).static_fields;
			pMVar2._shader = pUVar4;
		}
		pUVar1 = (Object)MapDestructionDebris._rubble;
		bVar3 = (pUVar1 == null);
		if (bVar3) {
			__this = new PhysicsMaterial("Rubble");
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.staticFriction = 0.1;
			__this.dynamicFriction = 0.1;
			__this.frictionCombine = 2;
			__this.bounceCombine = 2;
			pMVar2 = typeof(MapDestructionDebris).static_fields;
			pMVar2._rubble = __this;
			return;
		}
		return;
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x5883440", Offset = "0x5882440", VA = "0x5883440")]
	private static float FindGround(Bounds bounds)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$FindGround): clean
		int layerMask;
		RaycastHit[] pUVar1;
		Vector3 direction;
		float fVar2;
		uint uVar3;
		long lVar4;
		ulong uVar5;
		float fVar6;
		Vector3 UVar7;

		direction = (Vector3.downVector);
		pUVar1 = MapDestructionDebris.GroundHits;
		UVar7.y = bounds.m_Center.y + bounds.m_Extents.y + 1.0;
		UVar7.x = bounds.m_Center.x;
		layerMask = MapDestruction.MapMask;
		UVar7.z = bounds.m_Center.z;
		uVar3 = Physics.RaycastNonAlloc(UVar7, (Vector3)direction, pUVar1, bounds.m_Extents.y + bounds.m_Extents.y + 2.0, layerMask, 1);
		fVar6 = bounds.m_Center.y - bounds.m_Extents.y;
		if ((int)uVar3 < 1) {
			fVar2 = 3.4028235e+38;
		}
		else {
			fVar2 = 3.4028235e+38;
			lVar4 = 0x20;
			uVar5 = 0;
			do {
				pUVar1 = MapDestructionDebris.GroundHits;
				if (pUVar1 == null) {
	label_059836fa: ;
					throw new NullReferenceException();
				}
				if ((uint)pUVar1.Length <= uVar5) {
	label_059836bf: ;
					throw new IndexOutOfRangeException();
				}
				UVar7 = (((long)pUVar1.m_Items + lVar4 + -0x20)).point;
				if (fVar6 <= UVar7.y) {
					pUVar1 = MapDestructionDebris.GroundHits;
					if (pUVar1 == null) goto label_059836fa;
					if ((uint)pUVar1.Length <= uVar5) goto label_059836bf;
					UVar7 = (((long)pUVar1.m_Items + lVar4 + -0x20)).point;
					if (UVar7.y <= fVar2) {
						fVar2 = UVar7.y;
					}
				}
				uVar5 = uVar5 + 1;
				lVar4 = lVar4 + 0x2c;
			} while (uVar3 != uVar5);
		}
		return (float)(~-(uint)(fVar2 == 3.4028235e+38) & (uint)fVar2 |(uint)fVar6 & -(uint)(fVar2 == 3.4028235e+38));
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x5882F50", Offset = "0x5881F50", VA = "0x5882F50")]
	private void Shatter(DestructibleMapObject target)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$Shatter): 18 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MeshFilter[] pUVar3;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		Material[] pUVar5;
		double x;
		double dVar6;
		Bounds bounds;
		Il2CppClass pIVar7;
		int iVar8;
		MapDestructionDebris.c__DisplayClass37_0 pMVar9;
		List<Material> materials;
		Transform root;
		MapFracture pMVar10;
		GameObject item;
		Material[] method_00;
		Material source;
		object pIVar11;
		Func<TResult> function;
		System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o pSVar12;
		int iVar13;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar14;
		MethodInfo extraout_RDX_01;
		ulong uVar15;
		ulong uVar16;
		long lVar17;
		float fVar18;
		Il2CppMethodPointer local_58;
		Il2CppMethodPointer pIStack_50;
		InvokerMethod local_48;
		MapDestructionDebris.c__DisplayClass37_0 local_40;
		Il2CppClass local_38;

		if (Il2CppMethodInitialized_07545a03 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_07545a03 = true;
		}
		pMVar9 = new MapDestructionDebris.c__DisplayClass37_0();
		if (pMVar9 != null) {
			pMVar9.__4__this = this;
			materials = new List<Material>();
			if (target != null) {
				pUVar3 = target.Filters;
				root = this.transform;
				pMVar10 = MapFracture.Read(pUVar3, root, materials, 20000);
				pMVar9.fracture = pMVar10;
				local_40 = pMVar9;
				pUVar3 = target.Filters;
				local_38 = (Il2CppClass)target;
				if (pUVar3 != null) {
					if (0 < (int)pUVar3.Length) {
						uVar15 = pUVar3.Length & 0xffffffff;
						uVar16 = 0;
						pMVar14 = extraout_RDX;
						do {
							if (uVar15 <= uVar16) goto label_05983420;
							__this_00 = this._sectionVisuals;
							item = this.CreateVisual(pUVar3[uVar16]);
							pMVar14 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
							if (__this_00 == null) goto label_0598341b;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = __this_00._items;
							if (pUVar4 == null) goto label_0598341b;
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pUVar4.Length) {
								__this_00._size = uVar2 + 1;
								pUVar4[(int)uVar2] = item;
								pMVar14 = extraout_RDX_01;
							}
							else {
								__this_00.AddWithResize((object)item);
								pMVar14 = extraout_RDX_00;
							}
							uVar16 = uVar16 + 1;
							uVar2 = (uint)pUVar3.Length;
							uVar15 = (ulong)uVar2;
						} while ((long)uVar16 < (long)(int)uVar2);
					}
					if (pMVar9.fracture != null) {
						if (materials == null) goto label_0598341b;
						method_00 = (Material[])new Material[materials._size];
						this._fragmentMaterials = method_00;
						if (0 < materials._size) {
							lVar17 = 0x20;
							uVar15 = 0;
							do {
								pUVar5 = this._fragmentMaterials;
								source = materials.get_Item((int32_t)uVar15);
								method_00 = (Material[])this.GetMaterial(source);
								if (pUVar5 == null) goto label_0598341b;
								if (method_00 != null) {
									pIVar11 = il2cpp_vm_Object_IsInst((object)method_00, (((pUVar5.obj).klass)._1).element_class);
									if (pIVar11 == null) {
										pIVar11 = new ArrayTypeMismatchException();
										throw pIVar11;
									}
								}
								if ((uint)pUVar5.Length <= uVar15) {
	label_05983420: ;
									throw new IndexOutOfRangeException();
								}
								*(Material[]*)((long)pUVar5.m_Items + lVar17 + -0x20) = method_00;
								uVar15 = uVar15 + 1;
								lVar17 = lVar17 + 8;
							} while ((long)uVar15 < (long)materials._size);
						}
						pIVar7 = local_38;
						fVar18 = (float)(local_38._1).this_arg.bits;
						pMVar9 = local_40;
						fVar18 = fVar18 / 3.0;
						x = (double)fVar18;
						pMVar14 = (MethodInfo)&local_58;
						dVar6 = modf(x, (double)pMVar14, (MethodInfo)method_00);
						if (0.0 <= fVar18) {
							if ((dVar6 != 0.5) || (NAN(dVar6))) {
								local_58 = (Il2CppMethodPointer)floor(x + 0.5, pMVar14);
							}
							else if (((long)(double)local_58 & 1U) != 0) {
								local_58 = (Il2CppMethodPointer)((double)local_58 + 1.0);
							}
						}
						else if ((dVar6 != -0.5) || (NAN(dVar6))) {
							local_58 = (Il2CppMethodPointer)ceil(x + -0.5, pMVar14);
						}
						else if (((long)(double)local_58 & 1U) != 0) {
							local_58 = (Il2CppMethodPointer)((double)local_58 + -1.0);
						}
						iVar13 = 0x28;
						if ((int)(double)local_58 < 0x28) {
							iVar13 = (int)(double)local_58;
						}
						iVar8 = 6;
						if (6 < iVar13) {
							iVar8 = iVar13;
						}
						pMVar9.pieces = iVar8;
						local_48 = (pIVar7._1).this_arg.data;
						local_58 = *(Il2CppMethodPointer)&(((Bounds)&(pIVar7._1).byval_arg).fields).m_Center;
						pIStack_50 = *(Il2CppMethodPointer)&(((Bounds)&(pIVar7._1).byval_arg).fields).m_Center.z;
						bounds._8_8_ = pIStack_50;
						bounds.m_Center._0_8_ = local_58;
						bounds.m_Extents._4_8_ = local_48;
						fVar18 = MapDestructionDebris.FindGround(bounds);
						pMVar9.ground =(fVar18 + 0.05) - (((Bounds)&(pIVar7._1).byval_arg).fields).m_Center.y ;
						function = new Func<List<List<MapFracture.Triangle>>>((object)pMVar9, (intptr_t)MethodInfo_Map_MapDestructionDebris_c__DisplayClass37_0_Shatter_b__0);
						pSVar12 = (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o)Task.Run<List<List<MapFracture.Triangle>>>(function);
						this._fracture = pSVar12;
					}
					return;
				}
			}
		}
	label_0598341b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x5884480", Offset = "0x5883480", VA = "0x5884480")]
	private GameObject CreateVisual(MeshFilter source)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$CreateVisual): 1 lines keep C-only constructs
		uint uVar1;
		int value;
		String name;
		GameObject __this_00;
		GameObject __this_01;
		Transform pUVar2;
		Transform pUVar3;
		MeshFilter __this_02;
		Mesh value_00;
		MeshRenderer pUVar4;
		Material[] pUVar5;
		Material[] value_01;
		ulong uVar6;
		Material obj;
		object pIVar7;
		long lVar8;
		ulong uVar9;
		Quaternion rotation;
		Vector3 UVar10;

		if (source != null) {
			name = source.name;
			__this_00 = new GameObject(name);
			__this_01 = this.gameObject;
			if (__this_01 != null) {
				value = __this_01.layer;
				if (__this_00 != null) {
					__this_00.layer = value;
					pUVar2 = __this_00.transform;
					pUVar3 = this.transform;
					if (pUVar2 != null) {
						pUVar2.SetParent(pUVar3, false);
						pUVar2 = __this_00.transform;
						pUVar3 = source.transform;
						if (pUVar3 != null) {
							UVar10 = pUVar3.position;
							pUVar3 = source.transform ;
							if (pUVar3 != null) {
								rotation = pUVar3.rotation;
								if (pUVar2 != null) {
									pUVar2.SetPositionAndRotation(UVar10, rotation);
									pUVar2 = __this_00.transform;
									pUVar3 = source.transform;
									if (pUVar3 != null) {
										UVar10 = pUVar3.lossyScale;
										if (pUVar2 != null) {
											pUVar2.localScale = UVar10;
											__this_02 = __this_00.AddComponent<MeshFilter>();
											value_00 = source.sharedMesh;
											if (__this_02 != null) {
												__this_02.sharedMesh = value_00;
												pUVar4 = source.GetComponent<MeshRenderer>();
												if (pUVar4 != null) {
													pUVar5 = pUVar4.sharedMaterials;
													if (pUVar5 != null) {
														value_01 = (Material[])new Material[(uint32_t)pUVar5.Length];
														if (0 < (int)pUVar5.Length) {
															if (value_01 == null) {
																this.GetMaterial(pUVar5[0]);
																throw new NullReferenceException();
															}
															uVar6 = pUVar5.Length & 0xffffffff;
															lVar8 = 0x20;
															uVar9 = 0;
															do {
																if (uVar6 <= uVar9) {
	label_05984794: ;
																	throw new IndexOutOfRangeException();
																}
																obj = this.GetMaterial(*(Material*)((long)pUVar5.m_Items + lVar8 + -0x20));
																if (obj != null) {
																	pIVar7 = il2cpp_vm_Object_IsInst((object)obj, (((value_01.obj).klass)._1).element_class);
																	if (pIVar7 == null) {
																		pIVar7 = new ArrayTypeMismatchException();
																		throw pIVar7;
																	}
																}
																if ((uint)value_01.Length <= uVar9) goto label_05984794;
																*(Material*)((long)value_01.m_Items + lVar8 + -0x20) = obj;
																uVar9 = uVar9 + 1;
																uVar1 = (uint)pUVar5.Length;
																uVar6 = (ulong)uVar1;
																lVar8 = lVar8 + 8;
															} while ((long)uVar9 < (long)(int)uVar1);
														}
														pUVar4 = __this_00.AddComponent<MeshRenderer>();
														if (pUVar4 != null) {
															pUVar4.sharedMaterials = value_01;
															pUVar4.shadowCastingMode = this._shadows;
															return __this_00;
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

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x58848C0", Offset = "0x58838C0", VA = "0x58848C0")]
	private void AddRenderer(GameObject visual, Material[] materials)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$AddRenderer): clean
		MeshRenderer __this_00;

		if (visual != null) {
			__this_00 = visual.AddComponent<MeshRenderer>();
			if (__this_00 != null) {
				__this_00.sharedMaterials = materials;
				__this_00.shadowCastingMode = this._shadows;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x58847C0", Offset = "0x58837C0", VA = "0x58847C0")]
	private Material GetMaterial(Material source)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$GetMaterial): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Material pUVar3;
		Material local_20;

		local_20 = null;
		bVar2 = ((Object)source == null);
		if (!bVar2) {
			pSVar1 = (Dictionary<object, object>)this._rubbleMaterials;
			if (pSVar1 == null) {
	label_059848bb: ;
				throw new NullReferenceException();
			}
			bVar2 = pSVar1.TryGetValue((object)source, (object*)&local_20);
			if (!bVar2) {
				local_20 = MapDestructionDebris.CreateMaterial(source);
				pSVar1 = (Dictionary<object, object>)this._rubbleMaterials;
				if (pSVar1 == null) goto label_059848bb;
				pSVar1.Add((object)source, (object)local_20) ;
			}
		}
		return pUVar3;
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x5884930", Offset = "0x5883930", VA = "0x5884930")]
	private static Material CreateMaterial(Material source)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$CreateMaterial): 8 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Shader shader;
		MethodInfo pMVar3;
		bool bVar4;
		Material __this;
		String pSVar5;
		Texture value;
		Il2CppClass pIVar6;
		Vector2 UVar7;
		Color value_00;

		shader = MapDestructionDebris._shader;
		__this = new Material(shader);
		if ((__this == null) ||(__this.CopyPropertiesFromMaterial(source), source == null)) {
			throw new NullReferenceException();
		}
		bVar4 = source.HasProperty("_BaseMap");
		if (!bVar4) {
			pSVar5 = MapDestructionDebris.FindProperty(source, 0x80, 4, "_MainTex");
			if (pSVar5 != null) {
				value = source.GetTexture(pSVar5);
				__this.SetTexture("_BaseMap", value);
				UVar7 = source.GetTextureScale(pSVar5);
				__this.SetTextureScale("_BaseMap", UVar7);
				UVar7 = source.GetTextureOffset(pSVar5);
				__this.SetTextureOffset("_BaseMap", UVar7);
			}
		}
		bVar4 = source.HasProperty("_BaseColor");
		if (!bVar4) {
			pSVar5 = MapDestructionDebris.FindProperty(source, 0x100, 0, "_Color");
			if (pSVar5 != null) {
				value_00 = source.GetColor(pSVar5);
				__this.SetColor("_BaseColor", value_00);
			}
		}
		pMVar3 = MethodInfo_System_Array_Empty_string;
		if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
			pIVar6 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar6._2).bitflags1;
		}
		else {
			pIVar6 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar6._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			uVar2 = (pIVar6._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar6._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar6 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		else {
			pIVar6 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		__this.shaderKeywords = *(String[]*)pIVar6.static_fields;
		__this.SetFloat(MapDestructionDebris.FadeId, 0.0);
		return __this;
	}

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x5884C00", Offset = "0x5883C00", VA = "0x5884C00")]
	private static string FindProperty(Material source, ShaderPropertyFlags flag, ShaderPropertyType type, string fallback)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$FindProperty): clean
		bool bVar1;
		int iVar2;
		uint uVar3;
		int iVar4;
		Shader __this;
		String pSVar5;
		Texture x;
		int propertyIndex;

		if ((source == null) ||(__this = source.shader, __this == null)) {
			throw new NullReferenceException();
		}
		propertyIndex = 0;
		iVar2 = __this.GetPropertyCount();
		if (iVar2 < 1) {
			bVar1 = source.HasProperty(fallback);
			pSVar5 = null;
			if (bVar1) {
				pSVar5 = fallback;
			}
		}
		else {
			do {
				uVar3 = __this.GetPropertyFlags(propertyIndex);
				if ((uVar3 & flag) != 0) goto label_05984d7b;
				propertyIndex = propertyIndex + 1;
			} while (iVar2 != propertyIndex);
			bVar1 = source.HasProperty(fallback);
			if (bVar1) {
				pSVar5 = fallback;
			}
			else {
				pSVar5 = null;
				if (0 < iVar2) {
					if (type == 4) {
						propertyIndex = 0;
						do {
							iVar4 = __this.GetPropertyType(propertyIndex);
							if (iVar4 == 4) {
								pSVar5 = __this.GetPropertyName(propertyIndex);
								x = source.GetTexture(pSVar5);
								bVar1 = ((Object)x != null);
								if (bVar1) {
	label_05984d7b: ;
									pSVar5 = __this.GetPropertyName(propertyIndex);
									return pSVar5;
								}
							}
							propertyIndex = propertyIndex + 1;
						} while (iVar2 != propertyIndex);
					}
					else {
						propertyIndex = 0;
						do {
							iVar4 = __this.GetPropertyType(propertyIndex);
							if (iVar4 == type) goto label_05984d7b;
							propertyIndex = propertyIndex + 1;
						} while (iVar2 != propertyIndex);
					}
					pSVar5 = null;
				}
			}
		}
		return pSVar5;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x5884DA0", Offset = "0x5883DA0", VA = "0x5884DA0")]
	private void Update()
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$Update): 18 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o pSVar3;
		Task __this_00;
		List<MapDestructionDebris.Piece> __this_01;
		Rigidbody pUVar4;
		Dictionary<object, object> __this_02;
		MapDestructionDebris.Piece piece;
		object __this_03;
		bool bVar5;
		int iVar6;
		AggregateException pSVar7;
		List<List<MapFracture.Triangle>> cells;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_04;
		Object pUVar8;
		System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o* targetAddress;
		float fVar10;
		float fVar11;
		Vector3 UVar12;
		byte[] auStack_80 = new byte[16];
		MapDestructionDebris.Piece pMStack_70;
		byte[] auStack_68 = new byte[8];
		MapDestructionDebris.Piece pMStack_58;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;

		auStack_68 = (byte[])0x0;
		pMStack_58 = null;
		SStack_48._dictionary = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._currentValue = null;
		fVar11 = this._age;
		fVar10 = Time.deltaTime;
		this._age = fVar10 + fVar11;
		pSVar3 = this._fracture;
		if ((pSVar3 == null) ||(bVar5 = pSVar3.IsCompleted, !bVar5)) {
	label_05984efc: ;
			__this_00 = this._baking;
			if ((__this_00 != null) &&(bVar5 = __this_00.IsCompleted)) {
				if ((typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07545a0a != false) goto label_05984f3c;
	label_059850b2: ;
					Il2CppMethodInitialized_07545a0a = true;
					uVar1 = (typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_07545a0a == false) goto label_059850b2;
	label_05984f3c: ;
					uVar1 = (typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				iVar2 = MapDestructionDebris._workFrame;
				iVar6 = Time.frameCount;
				if (iVar2 != iVar6) {
					targetAddress =(System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o*)&this._baking;
					iVar6 = Time.frameCount;
					MapDestructionDebris._workFrame = iVar6;
					if ((Task)*targetAddress == null) goto label_0598544b;
					bVar5 = (*targetAddress).IsFaulted;
					if (bVar5) {
						if ((Task)*targetAddress == null) goto label_0598544b;
						pSVar7 = (*targetAddress).Exception;
						Debug.LogException((Exception)pSVar7);
					}
					this.ActivateFragments();
					goto label_0598512e;
				}
			}
		}
		else {
			if ((typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07545a0a != false) goto label_05984ed3;
	label_05985070: ;
				Il2CppMethodInitialized_07545a0a = true;
				uVar1 = (typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07545a0a == false) goto label_05985070;
	label_05984ed3: ;
				uVar1 = (typeof(MapDestructionDebris)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			iVar2 = MapDestructionDebris._workFrame;
			iVar6 = Time.frameCount;
			if (iVar2 == iVar6) goto label_05984efc;
			targetAddress = &this._fracture;
			iVar6 = Time.frameCount;
			MapDestructionDebris._workFrame = iVar6;
			if (*targetAddress == null) goto label_0598544b;
			iVar6 = (*targetAddress).Status;
			pSVar3 = *targetAddress;
			if (iVar6 == 5) {
				if (pSVar3 == null) goto label_0598544b;
				cells = (List<List<MapFracture.Triangle>>)pSVar3.Result;
				this.CreateFragments(cells);
			}
			else {
				if (pSVar3 == null) goto label_0598544b;
				bVar5 = pSVar3.IsFaulted;
				if (bVar5) {
					if (*targetAddress == null) goto label_0598544b;
					pSVar7 = (*targetAddress).Exception;
					Debug.LogException((Exception)pSVar7);
				}
			}
	label_0598512e: ;
			*targetAddress = null;
		}
		if (0.5 <= this._age - this._activeAge) {
			__this_01 = this._pieces;
			if (__this_01 == null) goto label_0598544b;
			auStack_80.GetEnumerator((List<object>)__this_01);
			pMStack_58 = pMStack_70;
			auStack_68 = (byte[])auStack_80._0_8_;
			auStack_80._0_8_ = null;
			auStack_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_68;
			while (true) {
				bVar5 = auStack_68.MoveNext();
				piece = pMStack_58;
				if (!(bVar5)) break;
				if (pMStack_58 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = (Object)pMStack_58.Body;
				bVar5 = (pUVar8 != null);
				if (bVar5) {
					pUVar4 = piece.Body;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					bVar5 = pUVar4.isKinematic;
					if (!bVar5) {
						pUVar4 = piece.Body;
						if (pUVar4 == null) {
							throw new NullReferenceException();
						}
						UVar12 = pUVar4.linearVelocity;
						if (UVar12.z * UVar12.z + UVar12.y * UVar12.y + UVar12.x * UVar12.x < 1.0) {
							UVar12 = pUVar4.angularVelocity;
							if (UVar12.z * UVar12.z + UVar12.y * UVar12.y + UVar12.x * UVar12.x < 1.0) {
								MapDestructionDebris.Freeze(piece);
							}
						}
					}
				}
			}
			auStack_68.Dispose();
		}
		__this_02 = (Dictionary<object, object>)this._rubbleMaterials;
		if (__this_02 != null) {
			fVar11 = this._age;
			__this_04 = __this_02.Values;
			if (__this_04 != null) {
				fVar10 = (fVar11 + -3.0) / 1.5;
				fVar11 = 1.0;
				if (fVar10 <= 1.0) {
					fVar11 = fVar10;
				}
				fVar11 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar11);
				SStack_48 = __this_04.GetEnumerator();
				auStack_80._0_8_ = null;
				auStack_80._8_8_ = &SStack_48;
				while(true) {
					bVar5 = SStack_48.MoveNext();
					__this_03 = SStack_48._currentValue;
					if (!bVar5) {
						SStack_48.Dispose();
						if (1.0 <= fVar11) {
							pUVar8 = (Object)this.gameObject;
							Object.Destroy(pUVar8);
						}
						return;
					}
					if ((Material)__this_03 == null) break;
					__this_03.SetFloat(MapDestructionDebris.FadeId, fVar11);
				}
				throw new NullReferenceException();
			}
		}
	label_0598544b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x5885520", Offset = "0x5884520", VA = "0x5885520")]
	private static bool TryClaimFrame()
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$TryClaimFrame): clean
		int iVar1;
		int iVar2;
		int iVar3;

		iVar1 = MapDestructionDebris._workFrame;
		iVar2 = Time.frameCount;
		if (iVar1 != iVar2) {
			iVar3 = Time.frameCount;
			MapDestructionDebris._workFrame = iVar3;
		}
		return iVar1 != iVar2;
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x58855B0", Offset = "0x58845B0", VA = "0x58855B0")]
	private void CreateFragments(List<List<MapFracture.Triangle>> cells)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$CreateFragments): 21 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Material[] pUVar3;
		List<Mesh> pSVar4;
		Mesh[] pUVar5;
		EntityId[] pUVar6;
		List<MapDestructionDebris.Piece> __this_00;
		MapDestructionDebris.Piece[] pMVar7;
		List<GameObject> pSVar8;
		Vector3 value;
		float fVar9;
		object obj;
		bool bVar10;
		int iVar11;
		EntityId item;
		MapDestructionDebris.c__DisplayClass45_0 pMVar12;
		List<EntityId> pSVar13;
		List<MapFracture.Triangle> pSVar14;
		Mesh value_00;
		GameObject __this_01;
		GameObject __this_02;
		Transform pUVar15;
		Transform parent;
		MeshFilter __this_03;
		MeshRenderer __this_04;
		MapDestructionDebris.Piece __this_05;
		Action __this_06;
		Task pSVar16;
		Object x;
		uint index;
		Vector3 center;
		Vector3 local_98;
		System_Collections_Generic_List_Enumerator_T__o local_88;
		MapDestructionDebris.c__DisplayClass45_0 local_68;
		MapDestructionDebris.c__DisplayClass45_0 local_60;
		System_Collections_Generic_List_Enumerator_T__o local_50;
		byte[] local_48 = new byte[24];

		local_98.z = 0.0;
		local_98.x = 0.0;
		local_98.y = 0.0;
		local_88._list = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._current = null;
		pMVar12 = new MapDestructionDebris.c__DisplayClass45_0();
		if (cells != null) {
			iVar11 = cells._size;
			if (iVar11 == 0) {
				return;
			}
			pSVar13 = new List<EntityId>(iVar11);
			if (pMVar12 != null) {
				local_60 = &pMVar12.fields;
				pMVar12.convex = pSVar13;
				local_68 = pMVar12;
				if (0 < cells._size) {
					index = 0;
					do {
						while(true) {
							pSVar14 = (List<MapFracture.Triangle>)cells.get_Item(index);
							pUVar3 = this._fragmentMaterials;
							if (pUVar3 == null) goto label_05985ce2;
							value_00 = MapFracture.CreateMesh(pSVar14, *(int)&pUVar3.Length, ref local_98);
							pSVar4 = this._meshes;
							if (pSVar4 == null) goto label_05985ce2;
							piVar1 = &pSVar4._version;
							*piVar1 = *piVar1 + 1;
							pUVar5 = pSVar4._items;
							if (pUVar5 == null) goto label_05985ce2;
							uVar2 = pSVar4._size;
							if (uVar2 < (uint)pUVar5.Length) {
								pSVar4._size = uVar2 + 1;
								pUVar5[(int)uVar2] = value_00;
							}
							else {
								pSVar4.AddWithResize((object)value_00);
							}
							__this_01 = new GameObject("Map debris fragment");
							__this_02 = this.gameObject;
							if ((__this_02 == null) ||(iVar11 = __this_02.layer, __this_01 == null)) goto label_05985ce2;
							__this_01.layer = iVar11;
							pUVar15 = __this_01.transform;
							parent = this.transform ;
							if (pUVar15 == null) goto label_05985ce2;
							pUVar15.SetParent(parent, false);
							pUVar15 = __this_01.transform;
							fVar9 = local_98.z;
							if (pUVar15 == null) goto label_05985ce2;
							value.z = local_98.z;
							value.x = local_98.x;
							value.y = local_98.y;
							local_48._0_4_ = local_98.x;
							local_48._4_4_ = local_98.y;
							local_48._8_8_ = 0;
							pUVar15.localPosition = value;
							__this_03 = __this_01.AddComponent<MeshFilter>();
							if (__this_03 == null) goto label_05985ce2;
							__this_03.sharedMesh = value_00;
							pUVar3 = this._fragmentMaterials;
							__this_04 = __this_01.AddComponent<MeshRenderer>();
							if (__this_04 == null) goto label_05985ce2;
							__this_04.sharedMaterials = pUVar3;
							__this_04.shadowCastingMode = this._shadows;
							pSVar14 = (List<MapFracture.Triangle>)cells.get_Item(index);
							bVar10 = MapFracture.HasVolume(pSVar14, 0.1);
							x = null;
							if (bVar10) {
								pSVar14 = (List<MapFracture.Triangle>)cells.get_Item(index);
								center.z = fVar9;
								center.x = (float)local_48._0_4_;
								center.y = (float)local_48._4_4_;
								x = (Object)MapFracture.CreateCollisionMesh(pSVar14, center, 0.75);
							}
							bVar10 = (x != null);
							if (bVar10) {
								pSVar4 = this._meshes;
								if (pSVar4 == null) goto label_05985ce2;
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pUVar5 = pSVar4._items;
								if (pUVar5 == null) goto label_05985ce2;
								uVar2 = pSVar4._size;
								if (uVar2 < (uint)pUVar5.Length) {
									pSVar4._size = uVar2 + 1;
									pUVar5[(int)uVar2] = (Mesh)x;
								}
								else {
									pSVar4.AddWithResize((object)x);
								}
								if (x == null) goto label_05985ce2;
								pSVar13 = local_60.convex;
								item = x.GetEntityId();
								if (pSVar13 == null) goto label_05985ce2;
								piVar1 = &pSVar13._version;
								*piVar1 = *piVar1 + 1;
								pUVar6 = pSVar13._items;
								if (pUVar6 == null) goto label_05985ce2;
								uVar2 = pSVar13._size;
								if (uVar2 < (uint)pUVar6.Length) {
									pSVar13._size = uVar2 + 1;
									pUVar6[(int)uVar2].m_Data = (int32_t)item.m_Data;
								}
								else {
									pSVar13.AddWithResize(item);
								}
							}
							__this_00 = this._pieces;
							__this_05 = new MapDestructionDebris.Piece();
							if (__this_05 == null) goto label_05985ce2;
							__this_05.Fragment = __this_01;
							__this_05.Collision = (Mesh)x;
							if (__this_00 == null) goto label_05985ce2;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pMVar7 = __this_00._items;
							if (pMVar7 == null) goto label_05985ce2;
							uVar2 = __this_00._size;
							if ((uint)pMVar7.Length <= uVar2) break;
							__this_00._size = uVar2 + 1;
							pMVar7[(int)uVar2] = __this_05;
							index = index + 1;
							if (cells._size <= (int)index) goto label_05985bb1;
						}
						__this_00.AddWithResize((object)__this_05);
						index = index + 1;
					} while ((int)index < cells._size);
				}
	label_05985bb1: ;
				pSVar8 = this._sectionVisuals;
				if (pSVar8 != null) {
					local_88 = pSVar8.GetEnumerator();
					local_50 = &local_88;
					while (true) {
						bVar10 = local_88.MoveNext();
						obj = local_88._current;
						if (!(bVar10)) break;
						Object.Destroy((Object)obj);
					}
					local_88.Dispose();
					pMVar12 = local_68;
					pSVar8 = this._sectionVisuals;
					if (pSVar8 != null) {
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						iVar11 = pSVar8._size;
						pSVar8._size = 0;
						if (0 < iVar11) {
							Array.Clear((Array)pSVar8._items, 0, iVar11);
						}
						__this_06 = new Action((object)pMVar12, (intptr_t)MethodInfo_Map_MapDestructionDebris_c__DisplayClass45_0_CreateFragments_b__0);
						pSVar16 = Task.Run(__this_06);
						this._baking = pSVar16;
						return;
					}
				}
			}
		}
	label_05985ce2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x5885D50", Offset = "0x5884D50", VA = "0x5885D50")]
	private void ActivateFragments()
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$ActivateFragments): 30 lines keep C-only constructs
		object targetAddress;
		int Seed;
		List<MapDestructionDebris.Piece> __this_00;
		Il2CppClass __this_01;
		Mesh collision;
		double dVar1;
		double dVar2;
		object pIVar3;
		bool bVar4;
		Random __this_02;
		MeshFilter __this_03;
		Mesh mesh;
		Collider __this_04;
		Il2CppClass pIVar5;
		ConstantForce pUVar6;
		MethodInfo in_RCX;
		float fVar7;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 value;
		Vector3 UVar8;
		Vector3 value_00;
		System_Collections_Generic_List_Enumerator_object__o local_78;
		byte[] local_60 = new byte[16];
		object local_50;
		byte[] local_48 = new byte[24];

		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		this._activeAge = this._age;
		Seed = this._seed;
		__this_02 = new Random(Seed);
		__this_00 = this._pieces;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_60.GetEnumerator((List<object>)__this_00);
		local_78._current = local_50;
		local_78._list = (List<T>)local_60._0_8_;
		local_78._index = local_60._8_4_;
		local_78._version = local_60._12_4_;
		local_60._0_8_ = null;
		local_60._8_8_ = &local_78;
		while(true) {
			bVar4 = local_78.MoveNext();
			pIVar3 = local_78._current;
			if (!bVar4) {
				local_78.Dispose();
				return;
			}
			if (local_78._current == null) {
				throw new NullReferenceException();
			}
			__this_01 = local_78._current[1].klass;
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_03 = __this_01.GetComponent<MeshFilter>();
			if (__this_03 == null) break;
			mesh = __this_03.sharedMesh;
			collision = pIVar3[1].monitor;
			__this_04 = MapDestructionDebris.AddCollider((GameObject)__this_01, mesh, collision);
			if (__this_04 == null) {
				throw new NullReferenceException();
			}
			in_RCX = (MethodInfo)typeof(MapDestructionDebris).static_fields;
			__this_04.sharedMaterial = (PhysicsMaterial)in_RCX.klass;
			pIVar5 = (Il2CppClass)__this_01.AddComponent<Rigidbody>();
			targetAddress = pIVar3 + 2;
			pIVar3[2].klass = pIVar5;
			if (targetAddress.klass == null) {
				throw new NullReferenceException();
			}
			(targetAddress.klass).interpolation = 1;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = targetAddress.klass;
			dVar1 = __this_02.NextDouble();
			dVar2 = __this_02.NextDouble();
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			UVar8.z = (float)dVar2 + -0.5;
			UVar8.y = 0.0;
			UVar8.x = (float)dVar1 + -0.5;
			pIVar5.linearVelocity = UVar8;
			pIVar5 = targetAddress.klass;
			dVar1 = __this_02.NextDouble();
			dVar2 = __this_02.NextDouble();
			local_48._8_4_ = extraout_XMM0_Dc;
			local_48._0_8_ = dVar2;
			local_48._12_4_ = extraout_XMM0_Dd;
			dVar2 = __this_02.NextDouble();
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			value.z = ((float)dVar2 + -0.5) * 1.2;
			value.x = ((float)dVar1 + -0.5) * 1.2;
			value.y = ((float)(double)local_48._0_8_ + -0.5) * 1.2;
			pIVar5.angularVelocity = value;
			pUVar6 = __this_01.AddComponent<ConstantForce>();
			pIVar3[2].monitor = pUVar6;
			pUVar6 = pIVar3[2].monitor;
			UVar8 = Physics.gravity;
			local_48._8_4_ = extraout_XMM0_Dc_00;
			local_48._0_8_ = UVar8._0_8_;
			local_48._12_4_ = extraout_XMM0_Dd_00;
			if (targetAddress.klass == null) {
				throw new NullReferenceException();
			}
			fVar7 = (targetAddress.klass).mass ;
			if (pUVar6 == null) {
				throw new NullReferenceException();
			}
			value_00.z = UVar8.z * fVar7;
			value_00.x = fVar7 * (float)local_48._0_4_;
			value_00.y = fVar7 * (float)local_48._4_4_;
			pUVar6.force = value_00;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x5887610", Offset = "0x5886610", VA = "0x5887610")]
	private static Collider AddCollider(GameObject fragment, Mesh mesh, Mesh collision)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$AddCollider): 12 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte[] auVar4 = new byte[16];
		bool bVar5;
		int value;
		GameObject __this;
		Transform __this_00;
		Transform parent;
		MeshCollider __this_01;
		BoxCollider __this_02;
		byte[] auVar6 = new byte[16];
		float fVar7;
		float fVar8;
		Vector3 value_00;
		Bounds local_50;
		byte[] local_38 = new byte[16];

		__this = new GameObject("Collider");
		if ((fragment != null) &&(value = fragment.layer, __this != null)) {
			__this.layer = value;
			__this_00 = __this.transform;
			parent = fragment.transform;
			if (__this_00 != null) {
				__this_00.SetParent(parent, false);
				bVar5 = ((Object)collision != null);
				if (bVar5) {
					__this_01 = __this.AddComponent<MeshCollider>();
					if (__this_01 != null) {
						__this_01.sharedMesh = collision;
						__this_01.convex = true;
						return (Collider)__this_01;
					}
				}
				else {
					__this_02 = __this.AddComponent<BoxCollider>();
					if ((mesh != null) &&(local_50 = mesh.bounds, __this_02 != null)) {
						__this_02.center = local_50.m_Center;
						local_50 = mesh.bounds;
						auVar6._0_4_ = (local_50.m_Extents.x + local_50.m_Extents.x) * 0.75;
						auVar6._4_4_ = (local_50.m_Extents.y + local_50.m_Extents.y) * 0.75;
						auVar6._8_8_ = 0;
						fVar7 = (local_50.m_Extents.z + local_50.m_Extents.z) * 0.75;
						if (g_data_0753e4b7 == false) {
							local_38 = auVar6;
							g_data_0753e4b7 = true;
							auVar6 = local_38;
						}
						uVar1 = (Vector3.oneVector).x;
						uVar2 = (Vector3.oneVector).y;
						fVar8 = (Vector3.oneVector).z * 0.1;
						if (fVar7 <= fVar8) {
							fVar7 = fVar8;
						}
						auVar4._4_4_ = (float)uVar2 * 0.1;
						auVar4._0_4_ = (float)uVar1 * 0.1;
						auVar4._8_8_ = 0;
						auVar6 = maxps(auVar6, auVar4);
						value_00._0_8_ = auVar6._0_8_;
						value_00.z = fVar7;
						__this_02.size = value_00;
						return (Collider)__this_02;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x58861E0", Offset = "0x58851E0", VA = "0x58861E0")]
	private static bool IsSettled(Rigidbody body)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$IsSettled): clean
		bool bVar1;
		Vector3 UVar2;

		if (body == null) {
			throw new NullReferenceException();
		}
		UVar2 = body.linearVelocity;
		if (UVar2.z * UVar2.z + UVar2.y * UVar2.y + UVar2.x * UVar2.x < 1.0) {
			UVar2 = body.angularVelocity;
			bVar1 = UVar2.z * UVar2.z + UVar2.y * UVar2.y + UVar2.x * UVar2.x < 1.0;
		}
		return bVar1;
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x5886260", Offset = "0x5885260", VA = "0x5886260")]
	private static void Freeze(Piece piece)
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$Freeze): clean
		Behaviour __this;
		Rigidbody pUVar1;

		if ((piece != null) &&(__this = (Behaviour)piece.Force, __this != null)) {
			__this.enabled = false;
			pUVar1 = piece.Body;
			if (pUVar1 != null) {
				pUVar1.isKinematic = true;
				pUVar1 = piece.Body;
				if (pUVar1 != null) {
					pUVar1.interpolation = 0;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x5887860", Offset = "0x5886860", VA = "0x5887860")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$OnDestroy): 10 lines keep C-only constructs
		List<MapDestructionDebris> __this_00;
		Task obj;
		Dictionary<object, object> __this_01;
		List<Mesh> __this_02;
		Object obj_00;
		bool bVar1;
		Task[] tasks;
		object pIVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_03;
		byte[] local_80 = new byte[16];
		Object local_70;
		System_Collections_Generic_List_Enumerator_T__o local_68;
		byte[] local_48 = new byte[16];
		Object local_38;

		if (Il2CppMethodInitialized_07545a0e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator) ;
			Il2CppMethodInitialized_07545a0e = true;
		}
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_00 = MapDestructionDebris.Active;
		if (__this_00 != null) {
			__this_00.Remove((object)this);
			if (this._baking != null) {
				tasks = (Task[])new Task[1];
				if (tasks == null) goto label_05987b64;
				obj = this._baking;
				if (obj != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((tasks.obj).klass)._1).element_class);
					if (pIVar2 == null) {
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((int)tasks.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				tasks[0] = obj;
				Task.WaitAny(tasks);
			}
			__this_01 = (Dictionary<object, object>)this._rubbleMaterials;
			if (__this_01 != null) {
				__this_03 = __this_01.Values;
				if (__this_03 != null) {
					local_80.GetEnumerator(__this_03);
					local_38 = local_70;
					local_48._0_8_ = local_80._0_8_;
					local_48._8_8_ = local_80._8_8_;
					local_80._0_8_ = null;
					local_80._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_48;
					while(true) {
						bVar1 = local_48.MoveNext();
						obj_00 = local_38;
						if (!bVar1) break;
						Object.Destroy(obj_00);
					}
					local_48.Dispose();
					__this_02 = this._meshes;
					if (__this_02 != null) {
						local_68 = __this_02.GetEnumerator();
						local_80._0_8_ = null;
						local_80._8_8_ = &local_68;
						while(true) {
							bVar1 = local_68.MoveNext();
							pIVar2 = local_68._current;
							if (!bVar1) break;
							Object.Destroy((Object)pIVar2);
						}
						local_68.Dispose() ;
						return;
					}
				}
			}
		}
	label_05987b64: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x5887C30", Offset = "0x5886C30", VA = "0x5887C30")]
	public MapDestructionDebris()
	{
		// Lifted from source/cpp/Map/MapDestructionDebris.c (Map.MapDestructionDebris$$.ctor): clean
		Dictionary<Material, Material> __this_00;
		List<Mesh> __this_01;
		List<MapDestructionDebris.Piece> __this_02;
		List<GameObject> __this_03;

		__this_00 = new Dictionary<Material, Material>();
		this._rubbleMaterials = __this_00;
		__this_01 = new List<Mesh>();
		this._meshes = __this_01;
		__this_02 = new List<MapDestructionDebris.Piece>() ;
		this._pieces = __this_02;
		__this_03 = new List<GameObject>();
		this._sectionVisuals = __this_03;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapDestructionDebris.c.

	// Map.MapDestructionDebris.<>c__DisplayClass37_0$$.ctor: clean
	private void c__DisplayClass37_0__ctor()
	{
		base();
		return;
	}

	// Map.MapDestructionDebris.<>c__DisplayClass45_0$$.ctor: clean
	private void c__DisplayClass45_0__ctor()
	{
		base();
		return;
	}

	// Map.MapDestructionDebris$$.cctor: 1 lines keep C-only constructs
	static MapDestructionDebris()
	{
		Map_MapDestructionDebris_StaticFields pMVar1;
		int iVar2;
		List<MapDestructionDebris> __this;
		RaycastHit[] pUVar3;

		if (Il2CppMethodInitialized_07545a10 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<MapDestructionDebris>)) ;
			Il2CppMethodInitialized_07545a10 = true;
		}
		iVar2 = Shader.PropertyToID("_Fade");
		MapDestructionDebris.FadeId = iVar2;
		__this = new List<MapDestructionDebris>();
		pMVar1 = typeof(MapDestructionDebris).static_fields;
		pMVar1.Active = __this;
		pUVar3 = (RaycastHit[])new RaycastHit[0x10];
		pMVar1 = typeof(MapDestructionDebris).static_fields;
		pMVar1.GroundHits = pUVar3;
		return;
	}

	// Map.MapDestructionDebris.<>c__DisplayClass37_0$$<Shatter>b__0: 52 lines keep C-only constructs
	private List<List<MapFracture.Triangle>> c__DisplayClass37_0__Shatter_b__0()
	{
		int piVar1;
		float fVar2;
		float fVar3;
		int Seed;
		int capacity;
		uint uVar4;
		MapFracture __this_00;
		Int32[] pSVar5;
		List<MapFracture.Triangle>[] pSVar7;
		byte[] auVar8 = new byte[16];
		Bounds bounds;
		bool bVar9;
		int iVar10;
		Il2CppClass __this_01;
		List<List<MapFracture.Triangle>> __this_02;
		List<MapFracture.Triangle> __this_03;
		Random __this_04;
		List<Vector3> pSVar11;
		List<int> __this_05;
		List<MapFracture.Triangle> pSVar12;
		List<MapFracture.Triangle> __this_06;
		sbyte pcVar13;
		object pIVar14;
		Il2CppClass pIVar15;
		Comparison<T> comparison;
		List<MapFracture.Triangle> pSVar16;
		MapDestructionDebris method_00;
		MethodInfo* method_01;
		int item;
		int index;
		sbyte* targetAddress;
		object targetAddress_00;
		uint uVar18;
		List<MapFracture.Triangle> source;
		uint extraout_XMM0_Db;
		uint uVar19;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float fVar20;
		byte[] auVar21 = new byte[16];
		Vector3 UVar22;
		Vector3 normal;
		float fStack_c8;
		float fStack_c4;
		float fStack_68;
		float fStack_64;
		Bounds UStack_48;

		method_00 = this.__4__this;
		if ((method_00 == null) ||(__this_00 = this.fracture, __this_00 == null)) {
			throw new NullReferenceException();
		}
		iVar10 = this.pieces;
		fVar20 = this.ground;
		Seed = method_00._seed;
		if (Il2CppMethodInitialized_07545a16 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<MapFracture.Triangle>)) ;
			Il2CppMethodInitialized_07545a16 = true;
		}
		__this_01 = new MapFracture.c__DisplayClass16_0();
		__this_00.CloseOpenings();
		__this_02 = new List<List<MapFracture.Triangle>>();
		pSVar12 = __this_00._triangles;
		if (pSVar12 != null) {
			capacity = pSVar12._size;
			__this_03 = new List<MapFracture.Triangle>(capacity);
			pSVar12 = __this_00._triangles;
			bVar9 = __this_00.Clip(pSVar12, __this_03, (Vector3)(Vector3.upVector), fVar20);
			if (!bVar9) {
				__this_03 = __this_00._triangles;
			}
			if (__this_03 != null) {
				if (__this_03._size == 0) {
					return __this_02;
				}
				UStack_48 = MapFracture.GetBounds(__this_03);
				__this_04 = new Random(Seed);
				bounds.m_Center.z = UStack_48.m_Center.z;
				bounds.m_Extents.x = UStack_48.m_Extents.x;
				bounds.m_Center.x = UStack_48.m_Center.x;
				bounds.m_Center.y = UStack_48.m_Center.y;
				bounds.m_Extents.y = UStack_48.m_Extents.y;
				bounds.m_Extents.z = UStack_48.m_Extents.z;
				pSVar11 = MapFracture.CreateSeeds(bounds, iVar10, __this_04);
				if (__this_01 != null) {
					targetAddress = &(__this_01._1).name;
					(__this_01._1).name = (sbyte)pSVar11;
					pcVar13 = (__this_01._1).name;
					if (pcVar13 != null) {
						iVar10 = *(int)(pcVar13 + 0x18);
						__this_05 = new List<int>(iVar10);
						iVar10 = __this_03._size;
						pSVar12 = new List<MapFracture.Triangle>(iVar10);
						iVar10 = __this_03._size;
						__this_06 = (List<MapFracture.Triangle>)il2cpp_codegen_object_new(typeof(List<MapFracture.Triangle>)) ;
						__this_06 = new List<MapFracture.Triangle>(iVar10);
						pcVar13 = *targetAddress;
						if (pcVar13 != null) {
							if (__this_05 == null) {
								if (*(int)(pcVar13 + 0x18) < 1) {
									return __this_02;
								}
								pIVar14 = il2cpp_codegen_object_new(typeof(MapFracture.c__DisplayClass16_1)) ;
								pIVar14 = new MapFracture.c__DisplayClass16_1();
								if (pIVar14 != null) {
									pIVar14[2].klass = __this_01;
									if ((pIVar14[2].klass != null) &&(pSVar11 = (List<Vector3>)((pIVar14[2].klass)._1).name, pSVar11 != null)) {
										UVar22 = pSVar11.get_Item(0);
										pIVar14[1].klass = UVar22._0_8_;
										*(float)&pIVar14[1].monitor = UVar22.z;
										throw new NullReferenceException();
									}
								}
							}
							else {
								index = 0;
								while(true) {
									if (*(int)(pcVar13 + 0x18) <= index) {
										return __this_02;
									}
									pIVar14 = new MapFracture.c__DisplayClass16_1();
									if (pIVar14 == null) break;
									targetAddress_00 = pIVar14 + 2;
									pIVar14[2].klass = __this_01;
									if ((pIVar14[2].klass == null) ||(pSVar11 = (List<Vector3>)((pIVar14[2].klass)._1).name, pSVar11 == null)) break;
									UVar22 = pSVar11.get_Item(index);
									pIVar14[1].klass = UVar22._0_8_;
									*(float)&pIVar14[1].monitor = UVar22.z;
									piVar1 = &__this_05._version;
									*piVar1 = *piVar1 + 1;
									__this_05._size = 0;
									pIVar15 = pIVar14[2].klass;
									if (pIVar15 == null) break;
									item = 0;
									while(true) {
										pcVar13 = (pIVar15._1).name;
										if (pcVar13 == null) goto label_05988743;
										if (*(int)(pcVar13 + 0x18) <= item) break;
										if (index != item) {
											piVar1 = &__this_05._version;
											*piVar1 = *piVar1 + 1;
											pSVar5 = __this_05._items;
											if (pSVar5 == null) goto label_05988743;
											uVar18 = __this_05._size;
											if (uVar18 < (uint)pSVar5.Length) {
												__this_05._size = uVar18 + 1;
												pSVar5[(int)uVar18] = item;
											}
											else {
												__this_05.AddWithResize(item);
												pIVar15 = targetAddress_00.klass;
											}
										}
										item = item + 1;
										if (pIVar15 == null) goto label_05988743;
									}
									comparison = new Comparison<int>(pIVar14, (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0);
									__this_05.Sort(comparison);
									source = __this_03;
									if (0 < __this_05._size) {
										uVar18 = 0;
										do {
											if (source == null) goto label_05988743;
											if (source._size < 1) goto label_05988227;
											if (targetAddress_00.klass == null) goto label_05988743;
											pSVar11 = (List<Vector3>)(targetAddress_00.klass._1).name ;
											iVar10 = __this_05.get_Item(uVar18);
											if (pSVar11 == null) goto label_05988743;
											method_01 = &MethodInfo_System_Collections_Generic_List_Vector3_get_Item;
											UVar22 = pSVar11.get_Item(iVar10);
											pIVar15 = pIVar14[1].klass;
											fVar20 = *(float)&pIVar14[1].monitor;
											fStack_c8 = SUB84(pIVar15, 0);
											fStack_c4 = (float)((ulong)pIVar15 >> 0x20);
											if (Il2CppMethodInitialized_0753e72d == false) {
												Il2CppMethodInitialized_0753e72d = true;
												fVar2 = fStack_c8;
												fVar3 = fStack_c4;
												if (g_data_0753e729 == false) goto label_05988603;
	label_05988467: ;
												uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
											}
											else {
												fVar2 = *(float)&pIVar14[1].klass;
												fVar3 = *(float)((long)&pIVar14[1].klass + 4);
												if (g_data_0753e729 != false) goto label_05988467;
	label_05988603: ;
												g_data_0753e729 = true;
												uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
												fVar2 = fStack_c8;
												fVar3 = fStack_c4;
											}
											if (uVar4 == 0) {
												fVar2 = fStack_c8;
												fVar3 = fStack_c4;
											}
											uVar19 = 0;
											fStack_68 = UVar22.x;
											fStack_64 = UVar22.y;
											auVar21._0_4_ = fVar2 - fStack_68;
											auVar21._4_4_ = fVar3 - fStack_64;
											auVar21._8_4_ = 0.0 - extraout_XMM0_Dc;
											auVar21._12_4_ = 0.0 - extraout_XMM0_Dd;
											fVar20 = fVar20 - UVar22.z;
											fVar2 = fVar20 * fVar20 + auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_;
											if (fVar2 < 0.0) {
												fVar2 = sqrtf(fVar2);
												uVar19 = extraout_XMM0_Db;
												if (1e-05 < fVar2) goto label_05988512;
	label_059884c1: ;
												fVar20 = (Vector3.zeroVector).z;
												fVar2 = (Vector3.zeroVector).x;
												fVar3 = (Vector3.zeroVector).y;
											}
											else {
												fVar2 = SQRT(fVar2);
												if (fVar2 <= 1e-05) goto label_059884c1;
	label_05988512: ;
												fVar20 = fVar20 / fVar2;
												auVar8._4_4_ = fVar2;
												auVar8._0_4_ = fVar2;
												auVar8._8_4_ = uVar19;
												auVar8._12_4_ = uVar19;
												auVar21 = divps(auVar21, auVar8);
												fVar2 = auVar21._0_4_;
												fVar3 = auVar21._4_4_;
											}
											pSVar16 = __this_06;
											if (source != pSVar12) {
												pSVar16 = pSVar12;
											}
											normal.y = fVar3;
											normal.x = fVar2;
											normal.z = fVar20;
											bVar9 = __this_00.Clip(source, pSVar16, normal, fVar2 * (SUB84(pIVar14[1].klass, 0) + fStack_68) * 0.5 + fVar3 * (fStack_64 + (float)((ulong)pIVar14[1].klass >> 0x20)) * 0.5 + fVar20 * (*(float)&pIVar14[1].monitor + UVar22.z) * 0.5);
											if (!bVar9) {
												pSVar16 = source;
											}
											source = pSVar16;
										} while ((uVar18 < 0x13) && (uVar18 = uVar18 + 1, (int)uVar18 < __this_05._size));
									}
									if (source == null) break;
									if (0 < source._size) {
										pSVar16 = (List<MapFracture.Triangle>)il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapFracture.Triangle>));
										pSVar16 = new List<MapFracture.Triangle>((IEnumerable<T>)source);
										if (__this_02 == null) break;
										piVar1 = &__this_02._version;
										*piVar1 = *piVar1 + 1;
										pSVar7 = __this_02._items;
										if (pSVar7 == null) break;
										uVar18 = __this_02._size;
										if (uVar18 < (uint)pSVar7.Length) {
											__this_02._size = uVar18 + 1;
											pSVar7[(int)uVar18] = pSVar16;
										}
										else {
											__this_02.AddWithResize((object)pSVar16);
										}
									}
	label_05988227: ;
									index = index + 1;
									pcVar13 = *targetAddress;
									if (pcVar13 == null) break;
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

	// Map.MapDestructionDebris.<>c__DisplayClass45_0$$<CreateFragments>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass45_0__CreateFragments_b__0()
	{
		List<EntityId> __this_00;
		EntityId meshEntityId;
		bool bVar1;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		auStack_48._0_8_ = null;
		auStack_48._8_4_ = 0;
		auStack_48._12_4_ = 0;
		pIStack_38 = null;
		__this_00 = this.convex;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator(__this_00);
		while(true) {
			bVar1 = auStack_48.MoveNext();
			if (!bVar1) break;
			meshEntityId.m_Data = pIStack_38._0_4_;
			Physics.BakeMesh(meshEntityId, true);
		}
		auStack_48.Dispose();
		return;
	}
}
