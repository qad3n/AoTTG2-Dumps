// ==================== AoTTG2 cross-reference ====================
// Type: ClothFactory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ClothFactory.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ClothFactory.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000007")]
public static class ClothFactory
{
	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<GameObject>> clothCache;

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x5743D00", Offset = "0x5742D00", VA = "0x5743D00")]
	public static void ClearClothCache()
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$ClearClothCache): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07544fe6 == false) {
			Il2CppMethodInitialized_07544fe6 = true;
			uVar1 = (typeof(ClothFactory)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ClothFactory)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)ClothFactory.clothCache;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(ClothFactory)).static_fields;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		return;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5743D90", Offset = "0x5742D90", VA = "0x5743D90")]
	public static void DisposeAllObjects()
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$DisposeAllObjects): 2 lines keep C-only constructs
		uint uVar1;
		Object[] pSVar2;
		il2cpp_array_size_t iVar3;
		GameObject cachedObject;
		long lVar4;

		pSVar2 = Object.FindObjectsByType<Cloth>(1, 0);
		if (pSVar2 == null) {
	label_05843e70: ;
			throw new NullReferenceException();
		}
		iVar3 = pSVar2.Length;
		if ((iVar3 != 0) && (0 < (int)iVar3)) {
			lVar4 = 0;
			do {
				if ((uint)iVar3 <= (uint)lVar4) {
					throw new IndexOutOfRangeException();
				}
				if ((Component)pSVar2[lVar4] == null) goto label_05843e70;
				cachedObject = (pSVar2[lVar4]).gameObject;
				ClothFactory.DisposeObject(cachedObject);
				uVar1 = (uint)pSVar2.Length;
				iVar3 = (il2cpp_array_size_t)uVar1;
				lVar4 = lVar4 + 1;
			} while ((int)lVar4 < (int)uVar1);
		}
		return;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5743E80", Offset = "0x5742E80", VA = "0x5743E80")]
	public static void DisposeObject(GameObject cachedObject)
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$DisposeObject): 2 lines keep C-only constructs
		bool bVar1;
		ParentFollow x;
		Cloth __this;
		SkinnedMeshRenderer __this_00;
		Transform[] value;
		Transform pUVar2;
		object pIVar3;
		long lVar4;
		ulong uVar5;

		bVar1 = ((Object)cachedObject == null);
		if (bVar1) {
			return;
		}
		if (cachedObject != null) {
			x = cachedObject.GetComponent<ParentFollow>();
			bVar1 = ((Object)x == null);
			if (bVar1) {
				Object.Destroy((Object)cachedObject);
				return;
			}
			if (x != null) {
				if (x.isActiveInScene == false) {
					return;
				}
				__this = cachedObject.GetComponent<Cloth>();
				if (__this != null) {
					__this.enabled = false;
					__this_00 = cachedObject.GetComponent<SkinnedMeshRenderer>();
					if (__this_00 != null) {
						__this_00.enabled = false;
						value = __this_00.bones;
						if (value != null) {
							if (0 < (int)value.Length) {
								lVar4 = 0x20;
								uVar5 = 0;
								do {
									pUVar2 = __this_00.transform;
									if ((pUVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pUVar2, (((value.obj).klass)._1).element_class), pIVar3 == null)) {
										pIVar3 = new ArrayTypeMismatchException();
										throw pIVar3;
									}
									if ((uint)value.Length <= uVar5) {
										throw new IndexOutOfRangeException();
									}
									value[uVar5] = pUVar2;
									uVar5 = uVar5 + 1;
									lVar4 = lVar4 + 8;
								} while ((long)uVar5 < (long)(int)value.Length);
							}
							__this_00.bones = value;
							__this_00.rootBone = null;
							x.isActiveInScene = false;
							pUVar2 = cachedObject.transform;
							if (pUVar2 != null) {
								pUVar2.position = (Vector3)ZEXT812(0xc7c34f8000000000);
								x.parent = null;
								x.owner = null;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5744120", Offset = "0x5743120", VA = "0x5744120")]
	private static GameObject GenerateCloth(GameObject go, string res)
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$GenerateCloth): 1 lines keep C-only constructs
		String path;
		bool bVar1;
		Object pUVar2;
		SkinnedMeshRenderer pUVar3;
		Transform[] value;
		Transform __this;
		GameObject pUVar4;

		if (go != null) {
			pUVar2 = (Object)go.GetComponent<SkinnedMeshRenderer>();
			bVar1 = (pUVar2 == null);
			if (bVar1) {
				go.AddComponent<SkinnedMeshRenderer>();
			}
			pUVar3 = go.GetComponent<SkinnedMeshRenderer>();
			if (pUVar3 != null) {
				value = pUVar3.bones;
				path = ResourcePaths.Characters;
				pUVar2 = ResourceManager.LoadAsset(path, res, true, false);
				pUVar2 = Object.Instantiate(pUVar2);
				if (pUVar2 != null) {
					if (pUVar2.klass != (Object)typeof(GameObject)) {
						throw new InvalidCastException();
					}
					pUVar3 = pUVar2.GetComponent<SkinnedMeshRenderer>();
					if (pUVar3 != null) {
						__this = pUVar3.transform;
						if (__this != null) {
							__this.localScale = (Vector3)(Vector3.oneVector);
							pUVar3.bones = value;
							pUVar3.quality = 4;
							return pUVar4;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5744340", Offset = "0x5743340", VA = "0x5744340")]
	public static GameObject GetCape(GameObject reference, string name, Material material)
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$GetCape): 1 lines keep C-only constructs
		GameObject pUVar1;

		pUVar1 = ClothFactory.GetCloth(reference, name, material, (System_Nullable_Color__o)ZEXT820(0));
		return pUVar1;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x5744900", Offset = "0x5743900", VA = "0x5744900")]
	public static GameObject GetHair(GameObject reference, string name, Material material, Color color)
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$GetHair): 17 lines keep C-only constructs
		System_Nullable_Color__o color_00;
		GameObject pUVar1;
		float fVar2;
		float fVar3;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar4;
		float fVar5;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color value;
		System_Nullable_Color__Fields local_58;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		fVar2 = color.r;
		fVar3 = color.g;
		fVar4 = color.b;
		fVar5 = color.a;
		if (g_data_07544feb == false) {
			local_28._8_4_ = in_XMM1_Dc;
			local_28._0_8_ = color._8_8_;
			local_28._12_4_ = in_XMM1_Dd;
			local_38._8_4_ = in_XMM0_Dc;
			local_38._0_8_ = color._0_8_;
			local_38._12_4_ = in_XMM0_Dd;
			g_data_07544feb = true;
			fVar2 = (float)local_38._0_4_;
			fVar3 = (float)local_38._4_4_;
			fVar4 = (float)local_28._0_4_;
			fVar5 = (float)local_28._4_4_;
		}
		local_58.hasValue = false;
		local_58._1_3_ = 0;
		local_58.value.r = 0.0;
		local_58.value.g = 0.0;
		local_58.value.b = 0.0;
		local_58.value.a = 0.0;
		value.g = fVar3;
		value.r = fVar2;
		value.a = fVar5;
		value.b = fVar4;
		local_58 = new Nullable<Color>(value);
		color_00.value.g = local_58.value.g;
		color_00.value.b = local_58.value.b;
		color_00.hasValue = local_58.hasValue;
		color_00._1_3_ = local_58._1_3_;
		color_00.value.r = local_58.value.r;
		color_00.value.a = local_58.value.a;
		pUVar1 = ClothFactory.GetCloth(reference, name, material, color_00);
		return pUVar1;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x57443C0", Offset = "0x57433C0", VA = "0x57443C0")]
	private static GameObject GetCloth(GameObject reference, string name, Material material, Color? color)
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$GetCloth): 22 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		object pIVar4;
		GameObject[] pUVar5;
		bool bVar6;
		List<GameObject> pSVar7;
		ClothFactory___c_StaticFields pCVar8;
		Predicate<T> pSVar9;
		Object x;
		ParentFollow __this;
		Transform transform;
		SkinnedMeshRenderer __this_00;
		Cloth __this_01;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		MethodInfo pMVar10;
		List<GameObject> local_60;
		System_Nullable_Color__Fields local_58;
		Material local_38;

		local_38 = material;
		local_60 = null;
		pSVar3 = (Dictionary<object, object>)ClothFactory.clothCache;
		if (pSVar3 != null) {
			bVar6 = pSVar3.TryGetValue((object)name, (object*)&local_60);
			if (!bVar6) {
				pSVar7 = new List<GameObject>();
				local_60 = pSVar7;
				pSVar3 = (Dictionary<object, object>)ClothFactory.clothCache;
				if (pSVar3 == null) goto label_058448ef;
				pSVar3.Add((object)name, (object)local_60);
			}
			pSVar7 = local_60;
			if ((typeof(c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar8 = typeof(c).static_fields;
				pSVar9 = (Predicate<T>)pCVar8.__9__7_0;
			}
			else {
				pCVar8 = typeof(c).static_fields;
				pSVar9 = (Predicate<T>)pCVar8.__9__7_0;
			}
			if (pSVar9 == null) {
				if (((typeof(c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar8 = typeof(c).static_fields;
				}
				pIVar4 = (object)pCVar8.__9;
				pSVar9 = new Predicate<GameObject>(pIVar4, (intptr_t)MethodInfo_ClothFactory_c_GetCloth_b__7_0);
				pCVar8 = typeof(c).static_fields;
				pCVar8.__9__7_0 = (Predicate<GameObject>)pSVar9;
			}
			if (pSVar7 != null) {
				pSVar7.RemoveAll(pSVar9);
				pSVar7 = local_60;
				if ((typeof(c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar8 = typeof(c).static_fields;
					pSVar9 = (Predicate<T>)pCVar8.__9__7_1;
				}
				else {
					pCVar8 = typeof(c).static_fields;
					pSVar9 = (Predicate<T>)pCVar8.__9__7_1;
				}
				if (pSVar9 == null) {
					if (((typeof(c))._2).cctor_finished_or_no_cctor == 0) {
						pCVar8 = typeof(c).static_fields;
					}
					pIVar4 = (object)pCVar8.__9;
					pSVar9 = new Predicate<GameObject>(pIVar4, (intptr_t)MethodInfo_ClothFactory_c_GetCloth_b__7_1);
					pCVar8 = typeof(c).static_fields;
					pCVar8.__9__7_1 = (Predicate<GameObject>)pSVar9;
				}
				if (pSVar7 != null) {
					x = (Object)pSVar7.Find(pSVar9);
					bVar6 = (x == null);
					if (bVar6) {
						pMVar10 = extraout_RDX;
						if ((typeof(ClothFactory)._2).cctor_finished_or_no_cctor == 0) {
							pMVar10 = extraout_RDX_00;
						}
						x = (Object)ClothFactory.GenerateCloth(reference, name);
						if ((x == null) ||(__this = x.AddComponent<ParentFollow>(), pMVar10 = MethodInfo_System_Collections_Generic_List_GameObject_Add, local_60 == null)) goto label_058448ef;
						piVar1 = &local_60._version;
						*piVar1 = *piVar1 + 1;
						pUVar5 = local_60._items;
						if (pUVar5 == null) goto label_058448ef;
						uVar2 = local_60._size;
						if (uVar2 < (uint)pUVar5.Length) {
							local_60._size = uVar2 + 1;
							pUVar5[(int)uVar2] = (GameObject)x;
							pMVar10 = extraout_RDX_01;
						}
						else {
							local_60.AddWithResize((object)x);
							pMVar10 = extraout_RDX_05;
						}
						local_58.value.a = color.value.a;
						local_58.hasValue = color.hasValue;
						local_58._1_3_ = color._1_3_;
						local_58.value.r = color.value.r;
						local_58.value.g = color.value.g;
						local_58.value.b = color.value.b;
						if (__this == null) goto label_058448ef;
					}
					else {
						if ((x == null) ||(__this = x.GetComponent<ParentFollow>(), __this == null)) goto label_058448ef;
						__this.isActiveInScene = true;
						pMVar10 = extraout_RDX_02;
						if ((typeof(ClothFactory)._2).cctor_finished_or_no_cctor == 0) {
							pMVar10 = extraout_RDX_03;
						}
						ClothFactory.ReapplyClothBones(reference, (GameObject)x);
						pMVar10 = extraout_RDX_04;
					}
					local_58.value.a = color.value.a;
					local_58.value.g = color.value.g;
					local_58.value.b = color.value.b;
					local_58.hasValue = color.hasValue;
					local_58._1_3_ = color._1_3_;
					local_58.value.r = color.value.r;
					__this.SetMaterial(local_38, color);
					if (reference != null) {
						transform = reference.transform;
						__this.SetParent(transform);
						__this_00 = x.GetComponent<SkinnedMeshRenderer>();
						if (__this_00 != null) {
							__this_00.enabled = true;
							__this_01 = x.GetComponent<Cloth>() ;
							if (__this_01 != null) {
								__this_01.enabled = true;
								return (GameObject)x;
							}
						}
					}
				}
			}
		}
	label_058448ef: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5744CC0", Offset = "0x5743CC0", VA = "0x5744CC0")]
	public static string GetDebugInfo()
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$GetDebugInfo): 10 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		object pIVar3;
		Object[] pSVar4;
		object arg1;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this;
		object arg2;
		String pSVar5;
		uint uVar6;
		uint uVar7;
		int iVar8;
		int iVar9;
		int iStack_90;
		int iStack_8c;
		byte[] auStack_88 = new byte[8];
		object pIStack_78;
		ulong uStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		int iStack_38;
		uint uStack_34;

		pIStack_78 = null;
		auStack_88 = (byte[])0x0;
		uStack_68._0_4_ = 0;
		uStack_68._4_4_ = 0;
		pSVar1 = (Dictionary<object, object>)ClothFactory.clothCache;
		if (pSVar1 != null) {
			auStack_58.GetEnumerator(pSVar1);
			uStack_68._0_4_ = iStack_38;
			uStack_68._4_4_ = uStack_34;
			pIStack_78 = pIStack_48;
			auStack_88 = (byte[])auStack_58._0_8_;
			auStack_58._0_8_ = null;
			iVar9 = 0;
			auStack_58._8_8_ = (Dictionary.Enumerator<object, object>)auStack_88;
			while (true) {
				bVar2 = auStack_88.MoveNext();
				pIVar3 = pIStack_78;
				if (!(bVar2)) break;
				pSVar1 = (Dictionary<object, object>)ClothFactory.clothCache;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pSVar1.get_Item(pIVar3);
				if (pIVar3 == null) {
					throw new NullReferenceException();
				}
				iVar9 = iVar9 + *(int)&pIVar3[1].monitor;
			}
			auStack_88.Dispose();
			pSVar4 = Object.FindObjectsOfType<Cloth>();
			if (pSVar4 != null) {
				uVar6 = (uint)pSVar4.Length;
				if ((int)uVar6 < 1) {
					iVar8 = 0;
				}
				else {
					uVar7 = 0;
					iVar8 = 0;
					do {
						if (uVar6 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						if ((Cloth)pSVar4[(int)uVar7] == null) goto label_05844fcd;
						bVar2 = (pSVar4[(int)uVar7]).enabled;
						iVar8 = iVar8 + (uint)bVar2;
						uVar7 = uVar7 + 1;
						uVar6 = (uint)pSVar4.Length;
					} while ((int)uVar7 < (int)uVar6);
				}
				auStack_58._0_4_ = iVar9;
				pIVar3 = (object)auStack_58;
				iStack_8c = iVar8;
				arg1 = (object)iStack_8c;
				pSVar1 = (Dictionary<object, object>)ClothFactory.clothCache;
				if ((pSVar1 != null) &&(__this = pSVar1.Keys, __this != null)) {
					iStack_90 = __this.Count;
					arg2 = (object)iStack_90;
					pSVar5 = String.Format("{0} cached cloths, {1} active cloths, {2} types cached", pIVar3, arg1, arg2);
					return pSVar5;
				}
			}
		}
	label_05844fcd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x57449C0", Offset = "0x57439C0", VA = "0x57449C0")]
	private static void ReapplyClothBones(GameObject reference, GameObject clothObject)
	{
		// Lifted from source/cpp/ClothFactory.c (ClothFactory$$ReapplyClothBones): clean
		SkinnedMeshRenderer __this;
		SkinnedMeshRenderer __this_00;
		Transform[] value;
		Transform __this_01;

		if (reference != null) {
			__this = reference.GetComponent<SkinnedMeshRenderer>();
			if (clothObject != null) {
				__this_00 = clothObject.GetComponent<SkinnedMeshRenderer>();
				if (__this != null) {
					value = __this.bones;
					if (__this_00 != null) {
						__this_00.bones = value;
						__this_01 = __this_00.transform;
						if (__this_01 != null) {
							__this_01.localScale = (Vector3)(Vector3.oneVector);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ClothFactory.c.

	// ClothFactory$$.cctor: clean
	static ClothFactory()
	{
		Dictionary<string, List<GameObject>> __this;

		__this = new Dictionary<string, List<GameObject>>();
		ClothFactory.clothCache = __this;
		return;
	}

	// ClothFactory.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new c();
		c.__9 = (c)__this;
		return;
	}

	// ClothFactory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// ClothFactory.<>c$$<GetCloth>b__7_0: clean
	private bool c__GetCloth_b__7_0(GameObject cloth)
	{
		bool bVar1;

		bVar1 = ((Object)cloth == null);
		return bVar1;
	}

	// ClothFactory.<>c$$<GetCloth>b__7_1: clean
	private bool c__GetCloth_b__7_1(GameObject cloth)
	{
		ParentFollow pPVar1;

		if (cloth != null) {
			pPVar1 = cloth.GetComponent<ParentFollow>();
			if (pPVar1 != null) {
				return pPVar1.isActiveInScene == false;
			}
		}
		throw new NullReferenceException();
	}
}
