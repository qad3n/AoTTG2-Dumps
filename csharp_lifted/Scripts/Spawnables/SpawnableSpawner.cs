// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.SpawnableSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/SpawnableSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnableSpawner.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x2000061")]
internal class SpawnableSpawner
{
	[Token(Token = "0x6000311")]
	[Address(RVA = "0x576DE30", Offset = "0x576CE30", VA = "0x576DE30")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional] object[] settings)
	{
		// Lifted from source/cpp/Spawnables/SpawnableSpawner.c (Spawnables.SpawnableSpawner$$Spawn): 16 lines keep C-only constructs
		PhotonView __this;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float local_7c;
		ulong local_78;
		ulong local_68;
		ulong local_58;
		byte[] local_48 = new byte[16];
		uint local_30;
		uint uStack_24;

		local_68 = rotation._8_8_;
		local_58 = rotation._0_8_;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = position._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[5];
		if (parameters == null) {
	label_0586e09f: ;
			throw new NullReferenceException();
		}
		if (name != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)name, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_0586e090;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)name;
			local_78 = local_48._0_8_;
			pIVar1 = (object)local_78;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0586e090;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_0586e08b;
			parameters[1] = pIVar1;
			uStack_24 = (undefined4)((ulong)local_68 >> 0x20);
			local_30 = (undefined4)local_58;
			pIVar1 = (object)local_30;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0586e090;
			}
			if ((uint)parameters.Length < 3) goto label_0586e08b;
			parameters[2] = pIVar1;
			local_7c = scale;
			pIVar1 = (object)local_7c;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0586e090;
			}
			if ((parameters.Length & 0xfffffffc) != 0) {
				parameters[3] = pIVar1;
				if (settings != null) {
					pIVar1 = il2cpp_vm_Object_IsInst(&settings.obj, (((parameters.obj).klass)._1).element_class);
					if (pIVar1 == null) {
	label_0586e090: ;
						pIVar1 = new ArrayTypeMismatchException();
						throw pIVar1;
					}
				}
				if (4 < (uint)parameters.Length) {
					parameters[4] = &settings.obj;
					if (__this != null) {
						__this.RPC("SpawnSpawnableRPC", 0, parameters);
						return;
					}
					goto label_0586e09f;
				}
			}
		}
	label_0586e08b: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x576E0B0", Offset = "0x576D0B0", VA = "0x576E0B0")]
	public static void OnSpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Spawnables/SpawnableSpawner.c (Spawnables.SpawnableSpawner$$OnSpawnSpawnableRPC): 3 lines keep C-only constructs
		String path;
		bool bVar1;
		GameObject __this;
		SupplySpawnable pSVar2;
		Transform __this_00;
		SupplySpawnable pSVar4;
		float fVar5;
		Vector3 UVar6;
		Vector3 value;

		if (Il2CppMethodInitialized_0754515a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rock1Spawnable) ;
			Il2CppMethodInitialized_0754515a = true;
		}
		path = ResourcePaths.Spawnables;
		__this = ResourceManager.InstantiateAsset<GameObject>(path, name, position, rotation, false, false);
		bVar1 = (name == SpawnablePrefabs.Supply);
		if (bVar1) {
			if (__this == null) goto label_0586e312;
			pSVar2 = __this.AddComponent<SupplySpawnable>();
			if (pSVar2 == null) goto label_0586e312;
			fVar5 = 30.0;
		}
		else {
			bVar1 = (name == SpawnablePrefabs.Rock1);
			if (bVar1) {
				if (__this == null) goto label_0586e312;
				pSVar2 = (SupplySpawnable)__this.AddComponent<Rock1Spawnable>();
				if (pSVar2 == null) goto label_0586e312;
				pSVar4 = (SupplySpawnable)((Rock1Spawnable)pSVar2).klass;
				fVar5 = 10.0;
			}
			else {
				if (__this == null) goto label_0586e312;
				pSVar2 = (SupplySpawnable)__this.AddComponent<BaseSpawnable>();
				if (pSVar2 == null) goto label_0586e312;
				pSVar4 = (SupplySpawnable)((BaseSpawnable)pSVar2).klass;
				fVar5 = 0.0;
			}
		}
		pSVar2.Setup(info.Sender, fVar5, settings);
		__this_00 = __this.transform;
		if (__this_00 != null) {
			UVar6 = __this_00.localScale;
			value.z = UVar6.z * scale;
			value.x = UVar6.x * scale;
			value.y = UVar6.y * scale;
			__this_00.localScale = value;
			return;
		}
	label_0586e312: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x576E320", Offset = "0x576D320", VA = "0x576E320")]
	public SpawnableSpawner()
	{
		// Lifted from source/cpp/Spawnables/SpawnableSpawner.c (Spawnables.SpawnableSpawner$$.ctor): clean
		base();
		return;
	}
}
