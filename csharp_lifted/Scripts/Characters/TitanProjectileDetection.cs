// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanProjectileDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanProjectileDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200072F")]
internal class TitanProjectileDetection : MonoBehaviour
{
	[Token(Token = "0x40023F7")]
	[FieldOffset(Offset = "0x20")]
	public HashSet<GameObject> _entities;

	[Token(Token = "0x40023F8")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<Hook> _hooks;

	[Token(Token = "0x40023F9")]
	[FieldOffset(Offset = "0x30")]
	public BaseTitan Owner;

	[Token(Token = "0x40023FA")]
	[FieldOffset(Offset = "0x38")]
	public bool Detect;

	[Token(Token = "0x60045C5")]
	[Address(RVA = "0x5B5F380", Offset = "0x5B5E380", VA = "0x5B5F380")]
	public static TitanProjectileDetection Create(BaseTitan owner)
	{
		// Lifted from source/cpp/Characters/TitanProjectileDetection.c (Characters.TitanProjectileDetection$$Create): 2 lines keep C-only constructs
		byte bVar1;
		BaseTitanComponentCache pCVar2;
		Component __this;
		GameObject __this_00;
		Transform pUVar3;
		Transform p;
		TitanProjectileDetection pCVar4;
		SphereCollider __this_01;
		float value;
		Vector3 value_00;

		if (Il2CppMethodInitialized_0754788b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider) ;
			Il2CppMethodInitialized_0754788b = true;
		}
		__this_00 = new GameObject();
		if (((owner != null) &&(pCVar2 = owner.BaseTitanCache, pCVar2 != null)) &&(__this_00 != null)) {
			__this = (Component)pCVar2.Movebox;
			pUVar3 = __this_00.transform;
			if (__this != null) {
				p = __this.transform;
				if (pUVar3 != null) {
					pUVar3.SetParent(p);
					pUVar3 = __this_00.transform;
					if (pUVar3 != null) {
						pUVar3.localPosition = (Vector3)(Vector3.zeroVector);
						pCVar4 = __this_00.AddComponent<TitanProjectileDetection>();
						__this_00.layer = PhysicsLayer.ProjectileDetection;
						bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
						if ((bVar1 <= (__this.klass._2).typeHierarchyDepth) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CapsuleCollider))) {
							__this_01 = __this_00.AddComponent<SphereCollider>();
							value_00 = __this.center;
							if (__this_01 == null) goto label_05c5f58b;
							__this_01.center = value_00;
							value = __this.height;
							__this_01.radius = value;
							__this_01.isTrigger = true;
						}
						if (pCVar4 != null) {
							pCVar4.Owner = owner;
							return pCVar4;
						}
					}
				}
			}
		}
	label_05c5f58b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045C6")]
	[Address(RVA = "0x5B5F590", Offset = "0x5B5E590", VA = "0x5B5F590")]
	public void RegisterHook(Hook hook)
	{
		// Lifted from source/cpp/Characters/TitanProjectileDetection.c (Characters.TitanProjectileDetection$$RegisterHook): clean
		HashSet<object> __this_00;

		__this_00 = (HashSet<object>)this._hooks;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((object)hook);
		this.Detect = true;
		return;
	}

	[Token(Token = "0x60045C7")]
	[Address(RVA = "0x5B5F5F0", Offset = "0x5B5E5F0", VA = "0x5B5F5F0")]
	protected void OnTriggerEnter(Collider other)
	{
		// Lifted from source/cpp/Characters/TitanProjectileDetection.c (Characters.TitanProjectileDetection$$OnTriggerEnter): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		bool bVar1;
		Transform pUVar2;
		GameObject __this_01;
		BaseProjectile __this_02;

		if (Il2CppMethodInitialized_0754788d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile) ;
			Il2CppMethodInitialized_0754788d = true;
		}
		if (other != null) {
			pUVar2 = other.transform;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.root;
				if (pUVar2 != null) {
					__this_01 = pUVar2.gameObject ;
					if (__this_01 != null) {
						__this_02 = __this_01.GetComponent<BaseProjectile>();
						bVar1 = ((Object)__this_02 != null);
						if (bVar1) {
							if (__this_02 == null) goto label_05c5f6e6;
							bVar1 = __this_02.IsMine();
							if (bVar1) {
								__this_00 = (HashSet<object>)this._entities;
								if (__this_00 == null) goto label_05c5f6e6;
								__this_00.Add((object)__this_01);
								this.Detect = true;
							}
						}
						return;
					}
				}
			}
		}
	label_05c5f6e6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045C8")]
	[Address(RVA = "0x5B5F6F0", Offset = "0x5B5E6F0", VA = "0x5B5F6F0")]
	protected void OnTriggerExit(Collider other)
	{
		// Lifted from source/cpp/Characters/TitanProjectileDetection.c (Characters.TitanProjectileDetection$$OnTriggerExit): clean
		HashSet<object> pSVar1;
		HashSet<GameObject> pSVar2;
		HashSet<Hook> pSVar3;
		bool bVar4;
		Transform pUVar5;
		GameObject item;

		if (other != null) {
			pUVar5 = other.transform;
			if (pUVar5 != null) {
				pUVar5 = pUVar5.root;
				if (pUVar5 != null) {
					item = pUVar5.gameObject;
					pSVar1 = (HashSet<object>)this._entities;
					if (pSVar1 != null) {
						bVar4 = pSVar1.Contains((object)item);
						if (bVar4) {
							pSVar1 = (HashSet<object>)this._entities;
							if (pSVar1 == null) goto label_05c5f7df;
							pSVar1.Remove((object)item);
						}
						pSVar2 = this._entities;
						if (pSVar2 != null) {
							if (pSVar2._count == 0) {
								pSVar3 = this._hooks;
								if (pSVar3 == null) goto label_05c5f7df;
								if (pSVar3._count == 0) {
									this.Detect = false;
									return;
								}
							}
							return;
						}
					}
				}
			}
		}
	label_05c5f7df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045C9")]
	[Address(RVA = "0x5B5F7F0", Offset = "0x5B5E7F0", VA = "0x5B5F7F0")]
	protected void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/TitanProjectileDetection.c (Characters.TitanProjectileDetection$$FixedUpdate): 5 lines keep C-only constructs
		HashSet<GameObject>* targetAddress;
		HashSet<@object> __this_00;
		object @object;
		HashSet<Hook> pSVar1;
		HashSet<GameObject> pSVar2;
		Characters_TitanProjectileDetection___c_StaticFields pCVar3;
		Predicate<T> match;

		pSVar2 = this._entities;
		if (pSVar2 != null) {
			targetAddress = &this._entities;
			if (0 < ((HashSet<T>)&pSVar2.fields)._count) {
				pSVar2 = (HashSet<GameObject>)Util.RemoveNull<GameObject>((HashSet<T>)pSVar2);
				*targetAddress = pSVar2;
			}
			__this_00 = (HashSet<@object>)this._hooks;
			if (__this_00 != null) {
				if (0 < __this_00._count) {
					if ((typeof(TitanProjectileDetection.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = typeof(TitanProjectileDetection.c).static_fields;
						match = (Predicate<T>)pCVar3.__9__8_0;
					}
					else {
						pCVar3 = typeof(TitanProjectileDetection.c).static_fields;
						match = (Predicate<T>)pCVar3.__9__8_0;
					}
					if (match == null) {
						if (((typeof(TitanProjectileDetection.c))._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = typeof(TitanProjectileDetection.c).static_fields;
						}
						@object = (object)pCVar3.__9;
						match = new Predicate<Hook>(@object, (intptr_t)MethodInfo_Characters_TitanProjectileDetection_c_FixedUpdate_b__8_0);
						pCVar3 = typeof(TitanProjectileDetection.c).static_fields;
						pCVar3.__9__8_0 = (Predicate<Hook>)match;
					}
					__this_00.RemoveWhere(match);
				}
				if (*targetAddress != null) {
					if (((*targetAddress).fields)._count == 0) {
						pSVar1 = this._hooks;
						if (pSVar1 == null) goto label_05c5f9bb;
						if (pSVar1._count == 0) {
							this.Detect = false;
						}
					}
					return;
				}
			}
		}
	label_05c5f9bb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045CA")]
	[Address(RVA = "0x5B5F9C0", Offset = "0x5B5E9C0", VA = "0x5B5F9C0")]
	public TitanProjectileDetection()
	{
		// Lifted from source/cpp/Characters/TitanProjectileDetection.c (Characters.TitanProjectileDetection$$.ctor): 2 lines keep C-only constructs
		HashSet<GameObject> __this_00;
		HashSet<Hook> __this_01;

		if (Il2CppMethodInitialized_07547890 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor) ;
			Il2CppMethodInitialized_07547890 = true;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(HashSet<GameObject>)) ;
		__this_00 = new HashSet<object>();
		this._entities = __this_00;
		__this_01 = new HashSet<Hook>();
		this._hooks = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanProjectileDetection.c.

	// Characters.TitanProjectileDetection.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new TitanProjectileDetection.c();
		TitanProjectileDetection.c.__9 =(TitanProjectileDetection.c)__this;
		return;
	}

	// Characters.TitanProjectileDetection.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Characters.TitanProjectileDetection.<>c$$<FixedUpdate>b__8_0: clean
	private bool c__FixedUpdate_b__8_0(Hook hook)
	{
		bool bVar1;
		bool bVar2;

		bVar1 = ((bool)(Object)hook);
		if (bVar1) {
			if (hook == null) {
				throw new NullReferenceException();
			}
			bVar2 = hook.State - 3U < 0xfffffffe;
		}
		return bVar2;
	}
}
