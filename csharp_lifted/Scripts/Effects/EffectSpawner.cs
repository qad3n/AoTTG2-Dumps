// ==================== AoTTG2 cross-reference ====================
// Type: Effects.EffectSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/EffectSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectSpawner.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003AF")]
internal class EffectSpawner
{
	[Token(Token = "0x40012F2")]
	private const float SmallCullDistance = 600f;

	[Token(Token = "0x40012F3")]
	private const float MediumCullDistance = 1500f;

	[Token(Token = "0x40012F4")]
	private const float DefaultCullDistance = 5000f;

	[Token(Token = "0x40012F5")]
	private const float AudioCullDistance = 500f;

	[Token(Token = "0x40012F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, bool> _effectHasAudio;

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x585BAE0", Offset = "0x585AAE0", VA = "0x585BAE0")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional][DefaultParameterValue(true)] bool scaleSize, [Optional] object[] settings)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$Spawn): 17 lines keep C-only constructs
		PhotonView __this;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		byte local_95;
		float local_94;
		float local_8c;
		ulong local_88;
		ulong local_78;
		ulong local_68;
		byte[] local_58 = new byte[16];
		uint local_40;
		uint uStack_34;

		local_78 = rotation._8_8_;
		local_68 = rotation._0_8_;
		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = position._0_8_;
		local_58._12_4_ = in_XMM0_Dd;
		local_94 = scale;
		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[6];
		if (parameters == null) {
	label_0595bda5: ;
			throw new NullReferenceException();
		}
		if (name != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)name, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_0595bd96;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)name;
			local_88 = local_58._0_8_;
			pIVar1 = (object)local_88;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0595bd96;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_0595bd91;
			parameters[1] = pIVar1;
			uStack_34 = (undefined4)((ulong)local_78 >> 0x20);
			local_40 = (undefined4)local_68;
			pIVar1 = (object)local_40;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0595bd96;
			}
			if ((uint)parameters.Length < 3) goto label_0595bd91;
			parameters[2] = pIVar1;
			local_8c = local_94;
			pIVar1 = (object)local_8c;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0595bd96;
			}
			if ((parameters.Length & 0xfffffffc) == 0) goto label_0595bd91;
			parameters[3] = pIVar1;
			local_95 = scaleSize;
			pIVar1 = (object)local_95;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0595bd96;
			}
			if (4 < (uint)parameters.Length) {
				parameters[4] = pIVar1;
				if (settings != null) {
					pIVar1 = il2cpp_vm_Object_IsInst(&settings.obj, (((parameters.obj).klass)._1).element_class);
					if (pIVar1 == null) {
	label_0595bd96: ;
						pIVar1 = new ArrayTypeMismatchException();
						throw pIVar1;
					}
				}
				if (5 < (uint)parameters.Length) {
					parameters[5] = &settings.obj;
					if (__this != null) {
						__this.RPC("SpawnEffectRPC", 0, parameters);
						return;
					}
					goto label_0595bda5;
				}
			}
		}
	label_0595bd91: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x585A020", Offset = "0x5859020", VA = "0x585A020")]
	public static void OnSpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$OnSpawnEffectRPC): 11 lines keep C-only constructs
		uint uVar1;
		String path;
		bool bVar2;
		GameObject __this;
		MethodInfo* ppMVar3;
		object pIVar4;
		Transform transform;
		MethodInfo pMVar5;
		undefined7 in_register_00000031;
		float range;

		pMVar5 = (MethodInfo)CONCAT71(in_register_00000031, scaleSize);
		if (Il2CppMethodInitialized_075458f2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_GasBurstEffect) ;
			Il2CppMethodInitialized_075458f2 = true;
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor != 0) goto label_0595a075;
	label_0595a217: ;
			if (Il2CppMethodInitialized_075458f5 != false) goto label_0595a082;
	label_0595a229: ;
			Il2CppMethodInitialized_075458f5 = true;
			uVar1 = (typeof(EffectSpawner)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) goto label_0595a217;
	label_0595a075: ;
			if (Il2CppMethodInitialized_075458f5 == false) goto label_0595a229;
	label_0595a082: ;
			uVar1 = (typeof(EffectSpawner)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		range = EffectSpawner.GetCullDistance(name);
		bVar2 = EffectSpawner.IsOutOfCameraRange(position, range);
		if (!bVar2) {
			path = ResourcePaths.Effects;
			__this = ResourceManager.InstantiateAsset<GameObject>(path, name, position, rotation, false, true);
			bVar2 = (name == EffectPrefabs.ThunderspearExplode);
			if (bVar2) {
				if (__this == null) goto label_0595a40c;
				ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_ThunderspearExplodeEffect;
			}
			else {
				bVar2 = (name == EffectPrefabs.APGTrail);
				if (bVar2) {
					if (__this == null) goto label_0595a40c;
					ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_LineRendererEffect;
				}
				else {
					bVar2 = (name == EffectPrefabs.ShifterThunder);
					if (bVar2) {
						if (__this == null) goto label_0595a40c;
						ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_ShifterThunderEffect;
					}
					else {
						bVar2 = (name == EffectPrefabs.GasBurst);
						if (bVar2) {
							if (__this == null) goto label_0595a40c;
							ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_GasBurstEffect;
						}
						else {
							if (__this == null) goto label_0595a40c;
							ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_BaseEffect;
						}
					}
				}
			}
			pIVar4 = __this.AddComponent<object>();
			if (pIVar4 == null) {
	label_0595a40c: ;
				throw new NullReferenceException();
			}
			(*pIVar4.klass.vtable[4].methodPtr)(0x41200000,pIVar4,info.Sender,settings,pIVar4.klass.vtable[4].method);
			transform = __this.transform;
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
			}
			EffectSpawner.ScaleEffect(transform, scale, scaleSize);
			bVar2 = EffectSpawner.HasAudio(name, __this);
			if (bVar2) {
				bVar2 = EffectSpawner.IsOutOfCameraRange(position, 500.0);
				if (!bVar2) {
					(*pIVar4.klass.vtable[5].methodPtr)(pIVar4,pIVar4.klass.vtable[5].method);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x585C070", Offset = "0x585B070", VA = "0x585C070")]
	private static bool IsOutOfCameraRange(Vector3 position, float range)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$IsOutOfCameraRange): clean
		BaseCamera x;
		BaseComponentCache pUVar1;
		Transform __this;
		bool bVar2;
		bool bVar3;
		float fVar4;
		Vector3 UVar5;
		float local_28;
		float fStack_24;

		x = SceneLoader.CurrentCamera;
		bVar2 = ((Object)x == null);
		if (!bVar2) {
			if (((x == null) ||(pUVar1 = x.Cache, pUVar1 == null)) ||(__this = pUVar1.Transform, __this == null)) {
				throw new NullReferenceException();
			}
			UVar5 = __this.position;
			local_28 = position.x;
			fStack_24 = position.y;
			fStack_24 = fStack_24 - UVar5.y;
			fVar4 = position.z - UVar5.z;
			local_28 = local_28 - UVar5.x;
			bVar3 = range * range < fStack_24 * fStack_24 + local_28 * local_28 + fVar4 * fVar4;
		}
		return bVar3;
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x585BF20", Offset = "0x585AF20", VA = "0x585BF20")]
	private static bool HasAudio(string name, GameObject go)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$HasAudio): clean
		Dictionary<string, bool> pSVar1;
		bool bVar2;
		Object x;
		bool local_19;

		local_19 = false;
		pSVar1 = EffectSpawner._effectHasAudio;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue((object)name, ref local_19);
			if (bVar2) {
				return local_19;
			}
			if (go != null) {
				x = (Object)go.GetComponentInChildren<AudioSource>(true);
				local_19 = (x != null);
				pSVar1 = EffectSpawner._effectHasAudio;
				if (pSVar1 != null) {
					pSVar1.set_Item((object)name, local_19);
					return local_19;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x585BDB0", Offset = "0x585ADB0", VA = "0x585BDB0")]
	private static bool IsCulled(string name, Vector3 position)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$IsCulled): clean
		bool bVar1;
		float range;

		range = EffectSpawner.GetCullDistance(name);
		bVar1 = EffectSpawner.IsOutOfCameraRange(position, range);
		return bVar1;
	}

	[Token(Token = "0x600179D")]
	[Address(RVA = "0x585C160", Offset = "0x585B160", VA = "0x585C160")]
	private static float GetCullDistance(string name)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$GetCullDistance): 1 lines keep C-only constructs
		uint uVar1;
		HashSet<object> pSVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_075458f6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075458f6 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (HashSet<object>)EffectPrefabs.SmallEffects;
		}
		else {
			pSVar2 = *(HashSet<object>*)((long)(typeof(EffectPrefabs)).static_fields + 0x100);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.Contains((object)name);
			if (bVar3) {
				return 600.0;
			}
			pSVar2 = (HashSet<object>)EffectPrefabs.MediumEffects;
			if (pSVar2 != null) {
				bVar3 = pSVar2.Contains((object)name);
				if (bVar3) {
					return 1500.0;
				}
				return 5000.0;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x585BE20", Offset = "0x585AE20", VA = "0x585BE20")]
	private static void ScaleEffect(Transform transform, float scale, bool scaleSize)
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$ScaleEffect): clean
		uint uVar1;
		Object[] pSVar2;
		ParticleSystem.MainModule main;
		uint uVar3;
		Vector3 value;

		if (transform == null) {
	label_0595bf0f: ;
			throw new NullReferenceException();
		}
		value.y = scale;
		value.x = scale;
		value.z = scale;
		transform.localScale = value;
		if (scaleSize) {
			pSVar2 = transform.GetComponentsInChildren<ParticleSystem>();
			if (pSVar2 == null) goto label_0595bf0f;
			uVar1 = (uint)pSVar2.Length;
			if (0 < (int)uVar1) {
				uVar3 = 0;
				do {
					if (uVar1 <= uVar3) {
						throw new IndexOutOfRangeException();
					}
					if ((ParticleSystem)pSVar2[(int)uVar3] == null ) goto label_0595bf0f;
					main = (pSVar2[(int)uVar3]).main;
					Util.ScaleParticleStartSize(main, scale);
					Util.ScaleParticleStartSpeed(main, scale);
					uVar3 = uVar3 + 1;
					uVar1 = (uint)pSVar2.Length;
				} while ((int)uVar3 < (int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x585C270", Offset = "0x585B270", VA = "0x585C270")]
	public EffectSpawner()
	{
		// Lifted from source/cpp/Effects/EffectSpawner.c (Effects.EffectSpawner$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Effects/EffectSpawner.c.

	// Effects.EffectSpawner$$.cctor: clean
	static EffectSpawner()
	{
		Dictionary<string, bool> __this;

		__this = new Dictionary<string, bool>();
		EffectSpawner._effectHasAudio = __this;
		return;
	}
}
