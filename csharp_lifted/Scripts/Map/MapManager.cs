// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapManager.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000410")]
internal class MapManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x40014EF")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapLoaded;

	[Token(Token = "0x40014F0")]
	[FieldOffset(Offset = "0x8")]
	public static MapScript MapScript;

	[Token(Token = "0x40014F1")]
	[FieldOffset(Offset = "0x10")]
	private static MapManager _instance;

	[Token(Token = "0x40014F2")]
	[FieldOffset(Offset = "0x18")]
	public static bool NeedsNavMeshUpdate;

	[Token(Token = "0x40014F3")]
	[FieldOffset(Offset = "0x20")]
	public static string LastMapHash;

	[Token(Token = "0x40014F4")]
	[FieldOffset(Offset = "0x28")]
	public static string LastGameMode;

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x589EF50", Offset = "0x589DF50", VA = "0x589EF50")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$Init): 2 lines keep C-only constructs
		MapManager pMVar2;
		OnLoadScene __this;
		OnPreLoadScene __this_00;

		pMVar2 = SingletonFactory.CreateSingleton<MapManager>((object)MapManager._instance);
		MapManager._instance = pMVar2;
		MapTransfer.Init();
		MapLoader.Init();
		BuiltinLevels.Init();
		BuiltinMapPrefabs.Init();
		BuiltinMapTextures.Init();
		__this = new OnLoadScene(null, (intptr_t)MethodInfo_Map_MapManager_OnLoadScene);
		EventManager.add_OnLoadScene(__this);
		__this_00 = new OnPreLoadScene(null, (intptr_t)MethodInfo_Map_MapManager_OnPreLoadScene);
		EventManager.add_OnPreLoadScene(__this_00);
		return;
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x589F210", Offset = "0x589E210", VA = "0x589F210")]
	public static bool TryGetRandomTagXform(string tag, out Transform xform)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$TryGetRandomTagXform): clean
		bool bVar1;
		Object exists;
		Transform pUVar2;

		exists = (Object)MapManager.GetRandomTag(tag);
		pUVar2 = null;
		bVar1 = ((bool)exists);
		if (bVar1) {
			if (exists == null) {
				throw new NullReferenceException();
			}
			pUVar2 = exists.transform;
		}
		*xform = pUVar2;
		return bVar1;
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x589F470", Offset = "0x589E470", VA = "0x589F470")]
	public static bool TryGetRandomTagsXform(List<string> tags, out Transform xform)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$TryGetRandomTagsXform): 6 lines keep C-only constructs
		object tag;
		bool bVar1;
		Object exists;
		Transform pUVar2;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		String local_38;

		if (tags == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)tags);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		do {
			bVar1 = local_68.MoveNext();
			tag = local_68._current;
			if (!bVar1) {
				local_68.Dispose();
				*xform = null;
				return false;
			}
			exists = (Object)MapManager.GetRandomTag((String)tag);
			bVar1 = ((bool)exists);
		} while (!bVar1);
		if (exists == null) {
			throw new NullReferenceException();
		}
		pUVar2 = exists.transform;
		*xform = pUVar2;
		local_68.Dispose();
		return true;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x589F670", Offset = "0x589E670", VA = "0x589F670")]
	public static bool TryGetRandomTagXforms(string tag, Vector3 avoidPosition, float avoidRadius, int count, out List<Transform> xforms)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$TryGetRandomTagXforms): 47 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		Dictionary<object, object> __this;
		Transform[] pUVar4;
		List<Transform> __this_00;
		uint uVar5;
		uint uVar6;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		bool bVar14;
		bool bVar15;
		int index;
		List<Transform> __this_01;
		List<Transform> pSVar16;
		Transform pUVar17;
		int maxExclusive;
		int iVar18;
		int iVar19;
		float fVar20;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		float fVar21;
		float in_XMM1_Db;
		float fVar22;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		float fVar23;
		Vector3 UVar24;
		byte[] local_b8 = new byte[8];
		object local_a8;
		List<object> local_98;
		byte[] local_90 = new byte[16];
		object local_80;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[8];
		uint uStack_50;
		uint uStack_4c;
		byte[] local_48 = new byte[24];

		local_78 = avoidPosition.z;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = avoidPosition._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		fStack_74 = in_XMM1_Db;
		fStack_70 = in_XMM1_Dc;
		fStack_6c = in_XMM1_Dd;
		if (Il2CppMethodInitialized_07545a7c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_RemoveAt) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item) ;
			Il2CppMethodInitialized_07545a7c = true;
		}
		local_98 = null;
		local_b8 = (byte[])0x0;
		local_a8 = null;
		*xforms = null;
		__this = (Dictionary<object, object>)MapLoader.Tags;
		if (__this == null) {
	label_0599fbbe: ;
			throw new NullReferenceException();
		}
		bVar14 = __this.TryGetValue((object)tag, (object*)&local_98);
		if (bVar14) {
			__this_01 = new List<Transform>();
			pSVar16 = new List<Transform>();
			*xforms = pSVar16;
			if (local_98 == null) goto label_0599fbbe;
			local_90.GetEnumerator(local_98);
			local_a8 = local_80;
			local_b8 = (byte[])local_90._0_8_;
			local_90._0_8_ = null;
			local_90._8_8_ = local_b8;
			if (__this_01 == null) {
				bVar15 = local_b8.MoveNext();
				if (bVar15) {
					if (local_a8 != null) {
						if (local_a8[1].monitor != null) {
							local_a8[1].monitor.transform;
	label_0599fbe7: ;
							throw new NullReferenceException();
						}
	label_0599fbdb: ;
						throw new NullReferenceException();
					}
	label_0599fbcd: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (bVar15 = local_b8.MoveNext()) {
					if (local_a8 == null) goto label_0599fbcd;
					if (local_a8[1].monitor == null) goto label_0599fbdb;
					pUVar17 = local_a8[1].monitor.transform;
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = __this_01._items;
					if (pUVar4 == null) goto label_0599fbe7;
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pUVar4.Length) {
						__this_01._size = uVar2 + 1;
						pUVar4[(int)uVar2] = pUVar17;
					}
					else {
						__this_01.AddWithResize((object)pUVar17);
					}
				}
			}
			local_b8.Dispose();
			pSVar16 = new List<Transform>((IEnumerable<T>)__this_01);
			fStack_70 = fStack_74;
			if (0 < count) {
				fStack_74 = (float)local_48._0_4_;
				fStack_6c = (float)local_48._4_4_;
				iVar19 = 0;
				iVar18 = 0;
				do {
					if (pSVar16 == null) goto label_0599fbbe;
					maxExclusive = pSVar16._size;
					if (maxExclusive < 1) {
						pSVar16 = new List<Transform>((IEnumerable<T>)__this_01);
						if (pSVar16 == null) goto label_0599fbbe;
						maxExclusive = pSVar16._size;
					}
					index = Random.Range(0, maxExclusive);
					pUVar17 = pSVar16.get_Item(index);
					if (pUVar17 == null) goto label_0599fbbe;
					UVar24 = pUVar17.position;
					fVar23 = UVar24.x;
					fVar20 = UVar24.y;
					if (avoidRadius <= 0.0) {
	label_0599fad0: ;
						__this_00 = *xforms;
						pUVar17 = pSVar16.get_Item(index);
						if (__this_00 == null) goto label_0599fbbe;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_00._items;
						if (pUVar4 == null) goto label_0599fbbe;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_00._size = uVar2 + 1;
							pUVar4[(int)uVar2] = pUVar17;
						}
						else {
							__this_00.AddWithResize((object)pUVar17);
						}
					}
					else {
						if (g_data_0753e7b7 == false) {
							uStack_50 = extraout_XMM0_Dc;
							local_58 = (byte[])UVar24._0_8_;
							uStack_4c = extraout_XMM0_Dd;
							local_68 = UVar24.z;
							fStack_64 = in_XMM1_Db;
							fStack_60 = in_XMM1_Dc;
							fStack_5c = in_XMM1_Dd;
							g_data_0753e7b7 = true;
							uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							fVar23 = (float)local_58._0_4_;
							fVar20 = (float)local_58._4_4_;
							uVar5 = uStack_50;
							uVar6 = uStack_4c;
							fVar21 = local_68;
							fVar8 = local_68;
							fVar22 = fStack_64;
							fVar9 = fStack_64;
							fVar12 = fStack_60;
							fVar10 = fStack_60;
							fVar13 = fStack_5c;
							fVar11 = fStack_5c;
						}
						else {
							uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							uVar5 = extraout_XMM0_Dc;
							uVar6 = extraout_XMM0_Dd;
							fVar21 = UVar24.z;
							fVar8 = local_68;
							fVar22 = in_XMM1_Db;
							fVar9 = fStack_64;
							fVar12 = in_XMM1_Dc;
							fVar10 = fStack_60;
							fVar13 = in_XMM1_Dd;
							fVar11 = fStack_5c;
						}
						fStack_5c = fVar13;
						fStack_60 = fVar12;
						fStack_64 = fVar22;
						local_68 = fVar21;
						fVar21 = local_68;
						fVar22 = fStack_64;
						if (uVar3 == 0) {
							local_58._4_4_ = fVar20;
							local_58._0_4_ = fVar23;
							uStack_50 = uVar5;
							uStack_4c = uVar6;
							fVar21 = local_68;
							fVar22 = fStack_64;
							fVar23 = (float)local_58._0_4_;
							fVar20 = (float)local_58._4_4_;
							fVar8 = local_68;
							fVar9 = fStack_64;
							fVar10 = fStack_60;
							fVar11 = fStack_5c;
						}
						fStack_5c = fVar11;
						fStack_60 = fVar10;
						fStack_64 = fVar9;
						local_68 = fVar8;
						in_XMM1_Db = (fVar23 - fStack_74) * (fVar23 - fStack_74);
						in_XMM1_Dc = (fVar22 - fStack_70) * (fVar22 - fStack_70);
						in_XMM1_Dd = (fVar20 - fStack_6c) * (fVar20 - fStack_6c);
						fVar23 = (fVar20 - (float)local_48._4_4_) * (fVar20 - (float)local_48._4_4_) + in_XMM1_Db +(fVar21 - local_78) * (fVar21 - local_78);
						if (fVar23 < 0.0) {
							fVar23 = sqrtf(fVar23);
							if (fVar23 <= avoidRadius) goto label_0599fabf;
							goto label_0599fad0;
						}
						if (avoidRadius < SQRT(fVar23)) goto label_0599fad0;
	label_0599fabf: ;
						if (100 < iVar19) goto label_0599fad0;
						iVar18 = iVar18 + -1;
						iVar19 = iVar19 + 1;
					}
					pSVar16.RemoveAt(index);
					iVar18 = iVar18 + 1;
				} while (iVar18 < count);
			}
		}
		return bVar14;
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x589F2D0", Offset = "0x589E2D0", VA = "0x589F2D0")]
	public static GameObject GetRandomTag(string tag)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$GetRandomTag): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		object pIVar4;
		List<T> list;
		MapObject pMVar5;

		if (Il2CppMethodInitialized_07545a7d == false) {
			Il2CppMethodInitialized_07545a7d = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)MapLoader.Tags;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(MapLoader)).static_fields + 0x20);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)tag);
			if (!bVar3) {
				return null;
			}
			pSVar2 = (Dictionary<object, object>)MapLoader.Tags;
			if ((pSVar2 != null) &&(pIVar4 = pSVar2.get_Item((object)tag), pIVar4 != null)) {
				if (*(int)&pIVar4[1].monitor < 1) {
					return null;
				}
				pSVar2 = (Dictionary<object, object>)MapLoader.Tags;
				if (pSVar2 != null) {
					list = (List<T>)pSVar2.get_Item((object)tag);
					pMVar5 = MiscExtensions.GetRandomItem<MapObject>(list);
					if (pMVar5 != null) {
						return pMVar5.GameObject;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x589FC60", Offset = "0x589EC60", VA = "0x589FC60")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$OnPreLoadScene): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545a7e == false) {
			Il2CppMethodInitialized_07545a7e = true;
			uVar1 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MapManager.MapLoaded = false;
			return;
		}
		*(byte)(typeof(MapManager)).static_fields = 0;
		return;
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x589FCD0", Offset = "0x589ECD0", VA = "0x589FCD0")]
	private static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$OnLoadScene): clean
		List<string> customAssets;
		List<MapScriptBaseObject> objects;

		if (sceneName == 3) {
			if ((typeof(MapManager)._2).cctor_finished_or_no_cctor == 0) {
				MapManager.StartMapEditor();
				return;
			}
			MapManager.StartMapEditor();
			return;
		}
		if (sceneName != 2) {
			customAssets = new List<string>();
			objects = new List<MapScriptBaseObject>();
			MapLoader.StartLoadObjects(customAssets, objects, null, null, false, null);
			return;
		}
		if ((typeof(MapManager)._2).cctor_finished_or_no_cctor == 0) {
			MapManager.StartInGame();
			return;
		}
		MapManager.StartInGame();
		return;
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x589FE30", Offset = "0x589EE30", VA = "0x589FE30")]
	private static void StartInGame()
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$StartInGame): 8 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		String pSVar5;
		StringSetting pSVar6;
		String mapName;
		PhotonView __this;
		PhotonMessageInfo info;
		bool bVar7;
		MethodInfo method_00;
		MapScript pMVar8;
		Object[] parameters;
		object pIVar9;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar10;
		Il2CppMethodPointer pIStack_38;
		Il2CppMethodPointer pIStack_30;
		PhotonView pPStack_28;

		if (Il2CppMethodInitialized_07545a80 == false) {
			Il2CppMethodInitialized_07545a80 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_0599fe5b;
	label_0599ff1d: ;
			bVar7 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_0599ff1d;
	label_0599fe5b: ;
			bVar7 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar7) {
			return;
		}
		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(pSVar3 = pSVar2.MapCategory, pSVar3 != null)) {
			bVar7 = (pSVar3._value == "Custom");
			if (bVar7) {
				pSVar3 = pSVar2.MapName;
				if (pSVar3 != null) {
					pMVar10 = (MethodInfo)pSVar3._value;
					method_00 = (MethodInfo)BuiltinLevels.LoadMap("Custom", (String)pMVar10);
					pMVar8 = new MapScript();
					MapManager.MapScript = pMVar8;
					pMVar8 = MapManager.MapScript;
					if (pMVar8 != null) {
						pMVar8.Deserialize((String)method_00, true);
						pSVar3 = pSVar2.MapName;
						if (pSVar3 != null) {
							pSVar5 = pSVar3._value;
							MapTransfer.Start(pSVar5);
							pMVar10 = (MethodInfo)&pIStack_38;
							Util.CreateLocalPhotonInfo((PhotonMessageInfo)pMVar10);
							info.Sender = (Player)pIStack_30;
							info._0_8_ = pIStack_38;
							info.photonView = pPStack_28;
							MapManager.OnLoadCachedMapRPC(info);
							return;
						}
					}
				}
			}
			else {
				pSVar3 = pSVar2.MapCategory;
				if ((pSVar3 != null) &&(pSVar6 = pSVar2.MapName, pSVar6 != null)) {
					pSVar5 = pSVar3._value;
					mapName = pSVar6._value;
					pMVar10 = extraout_RDX;
					if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
						pMVar10 = extraout_RDX_00;
					}
					MapTransfer.UseBuiltin(pSVar5, mapName);
					MapTransfer.MapTransferReady = true;
					__this = RPCManager.PhotonView;
					parameters = (Object[])new object[2];
					pSVar3 = pSVar2.MapCategory;
					if ((pSVar3 != null) && (parameters != null)) {
						pSVar5 = pSVar3._value;
						if ((pSVar5 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) {
	label_059a01fe: ;
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
						if ((int)parameters.Length == 0) {
	label_059a01f9: ;
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pSVar5;
						pSVar3 = pSVar2.MapName;
						if (pSVar3 != null) {
							pSVar5 = pSVar3._value;
							if ((pSVar5 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) goto label_059a01fe;
							if ((parameters.Length & 0xfffffffe) == 0) goto label_059a01f9;
							parameters[1] = (object)pSVar5;
							if (__this != null) {
								__this.RPC("LoadBuiltinMapRPC", 0, parameters);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x58A0210", Offset = "0x589F210", VA = "0x58A0210")]
	private static void StartMapEditor()
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$StartMapEditor): 6 lines keep C-only constructs
		MapEditorSettings pSVar1;
		MethodInfo __this;
		Il2CppClass name;
		MapScriptCustomAssets pMVar3;
		MapScriptObjects pMVar4;
		List<string> customAssets;
		List<MapScriptBaseObject> objects;
		MapScriptOptions options;
		WeatherSet weather;
		List<string> parseErrors;
		bool bVar5;
		String[] source;
		System_Collections_Generic_List_TSource__o __this_00;
		Il2CppClass pIVar6;
		MapScript pMVar7;
		String pSVar8;

		pSVar1 = SettingsManager.MapEditorSettings;
		if (pSVar1 == null) goto label_059a0527;
		__this = (MethodInfo)pSVar1.CurrentMap;
		source = BuiltinLevels.GetMapNames("Custom");
		__this_00 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		if (__this == null) goto label_059a0527;
		bVar5 = ((String)__this.klass == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar5) {
			if (__this_00 == null) goto label_059a0527;
	label_059a038a: ;
			if (__this_00._size < 1) {
				__this.Value = (Il2CppObject *)"Untitled";
				name = __this.klass;
				pIVar6 = (Il2CppClass)MapScript.CreateDefault();
				BuiltinLevels.SaveCustomMap((String)name, (MapScript)pIVar6);
			}
			else {
				pIVar6 = (Il2CppClass)__this_00.get_Item(0);
				__this.Value = (object)pIVar6;
			}
		}
		else {
			if (__this_00 == null) goto label_059a0527;
			pIVar6 = __this.klass;
			bVar5 = __this_00.Contains((object)pIVar6);
			if (!bVar5) goto label_059a038a;
		}
		pMVar7 = new MapScript();
		MapManager.MapScript = pMVar7;
		pMVar7 = MapManager.MapScript;
		pIVar6 = __this.klass;
		pSVar8 = BuiltinLevels.LoadMap("Custom", (String)pIVar6);
		if (pMVar7 != null) {
			pMVar7.Deserialize(pSVar8, true);
			pMVar7 = MapManager.MapScript;
			if (((pMVar7 != null) &&(pMVar3 = pMVar7.CustomAssets, pMVar3 != null)) &&(pMVar4 = pMVar7.Objects, pMVar4 != null)) {
				customAssets = pMVar3.CustomAssets;
				objects = pMVar4.Objects;
				options = pMVar7.Options;
				weather = pMVar7.Weather;
				parseErrors = pMVar7.Errors;
				MapLoader.StartLoadObjects(customAssets, objects, options, weather, true, parseErrors) ;
				return;
			}
		}
	label_059a0527: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x58A11B0", Offset = "0x58A01B0", VA = "0x58A11B0")]
	public static void OnLoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$OnLoadBuiltinMapRPC): clean
		Map_MapManager_StaticFields pMVar1;
		String pSVar2;
		InGameSet pSVar4;
		InGameGeneralSettings pSVar5;
		StringSetting pSVar6;
		bool bVar7;
		bool mapChanged;
		MapScript pMVar8;
		MethodInfo method_00;
		String pSStack_20;

		pSStack_20 = null;
		if (info.Sender == null) goto label_059a1458;
		bVar7 = info.Sender.IsMasterClient;
		if (bVar7) {
			bVar7 = BuiltinLevels.TryLoadBuiltinMap(category, name, ref pSStack_20);
			if (bVar7) {
				pMVar8 = new MapScript();
				pMVar1 = typeof(MapManager).static_fields;
				pMVar1.MapScript = pMVar8;
				pMVar8 = MapManager.MapScript;
				if (pMVar8 != null) {
					pMVar8.Deserialize(pSStack_20, true);
					pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					MapTransfer.MapHash = pSVar2;
					pMVar8 = MapManager.MapScript;
					if (pMVar8 != null) {
						bVar7 = (MapManager.LastMapHash != pMVar8.MapHash);
						mapChanged = true;
						if (!bVar7) {
							pSVar4 = SettingsManager.InGameCurrent;
							if (((pSVar4 == null) ||(pSVar5 = pSVar4.General, pSVar5 == null)) ||(pSVar6 = pSVar5.GameMode, pSVar6 == null)) goto label_059a1458;
							mapChanged = (MapManager.LastGameMode != pSVar6._value);
						}
						pMVar1 = typeof(MapManager).static_fields;
						if (pMVar1.MapScript != null) {
							pMVar1.LastMapHash = pMVar1.MapScript.MapHash;
							pSVar4 = SettingsManager.InGameCurrent;
							if (((pSVar4 != null) &&(pSVar5 = pSVar4.General, pSVar5 != null)) &&(pSVar6 = pSVar5.GameMode, pSVar6 != null)) {
								method_00 = (MethodInfo)pSVar6._value;
								pMVar1 = typeof(MapManager).static_fields;
								pMVar1.LastGameMode = (String)method_00;
								MapManager.LoadMap(mapChanged);
								return;
							}
						}
					}
				}
	label_059a1458: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x58A0B30", Offset = "0x589FB30", VA = "0x58A0B30")]
	public static void OnLoadCachedMapRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$OnLoadCachedMapRPC): clean
		MapScript pMVar1;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		StringSetting pSVar4;
		Map_MapManager_StaticFields pMVar5;
		bool bVar6;
		bool mapChanged;
		MethodInfo method_00;

		if (info.Sender != null) {
			bVar6 = info.Sender.IsMasterClient;
			if (!bVar6) {
				return;
			}
		}
		pMVar1 = MapManager.MapScript;
		if (pMVar1 != null) {
			bVar6 = (MapManager.LastMapHash != pMVar1.MapHash);
			mapChanged = true;
			if (!bVar6) {
				pSVar2 = SettingsManager.InGameCurrent;
				if (((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) ||(pSVar4 = pSVar3.GameMode, pSVar4 == null)) goto label_059a0cc0;
				mapChanged = (MapManager.LastGameMode != pSVar4._value);
			}
			pMVar5 = typeof(MapManager).static_fields;
			if (pMVar5.MapScript != null) {
				pMVar5.LastMapHash = pMVar5.MapScript.MapHash;
				pSVar2 = SettingsManager.InGameCurrent;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.General, pSVar3 != null)) &&(pSVar4 = pSVar3.GameMode, pSVar4 != null)) {
					method_00 = (MethodInfo)pSVar4._value;
					pMVar5 = typeof(MapManager).static_fields;
					pMVar5.LastGameMode = (String)method_00;
					MapManager.LoadMap(mapChanged);
					return;
				}
			}
		}
	label_059a0cc0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x58A1460", Offset = "0x58A0460", VA = "0x58A1460")]
	public static void LoadMap(bool mapChanged)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$LoadMap): clean
		MapScript pMVar1;
		MapScriptCustomAssets pMVar2;
		MapScriptObjects pMVar3;
		List<string> customAssets;
		List<MapScriptBaseObject> objects;
		MapScriptOptions options;
		WeatherSet weather;
		List<string> parseErrors;
		Player player;

		MapManager.NeedsNavMeshUpdate = mapChanged;
		player = PhotonNetwork.LocalPlayer;
		PhotonExtensions.SetCustomProperty(player, "CustomMapHash", (object)MapTransfer.MapHash);
		pMVar1 = MapManager.MapScript;
		if (((pMVar1 == null) ||(pMVar2 = pMVar1.CustomAssets, pMVar2 == null)) ||(pMVar3 = pMVar1.Objects, pMVar3 == null)) {
			throw new NullReferenceException();
		}
		customAssets = pMVar2.CustomAssets;
		objects = pMVar3.Objects;
		options = pMVar1.Options;
		weather = pMVar1.Weather;
		parseErrors = pMVar1.Errors;
		MapLoader.StartLoadObjects(customAssets, objects, options, weather, false, parseErrors);
		return;
	}

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x58A15C0", Offset = "0x58A05C0", VA = "0x58A15C0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$OnPlayerEnteredRoom): 2 lines keep C-only constructs
		sbyte cVar1;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		StringSetting pSVar4;
		PhotonView __this_00;
		String pSVar5;
		bool bVar6;
		Object[] parameters;
		object pIVar7;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545a85 == false) {
			Il2CppMethodInitialized_07545a85 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_059a15ec;
	label_059a167e: ;
			bVar6 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_059a167e;
	label_059a15ec: ;
			bVar6 = PhotonNetwork.IsMasterClient;
		}
		if (bVar6) {
			if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = MapTransfer.MapTransferReady;
				method_00 = (MethodInfo *)"Custom";
			}
			else {
				cVar1 = *(sbyte)(typeof(MapTransfer)).static_fields;
				method_00 = (MethodInfo *)"Custom";
			}
			"Custom" = (String)method_00;
			if (cVar1 != false) {
				pSVar2 = SettingsManager.InGameCurrent;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.General, pSVar3 != null)) &&(pSVar4 = pSVar3.MapCategory, pSVar4 != null)) {
					bVar6 = (pSVar4._value == (String)method_00);
					if (bVar6) {
						MapTransfer.Transfer(player);
						return;
					}
					__this_00 = RPCManager.PhotonView;
					parameters = (Object[])new object[2];
					pSVar4 = pSVar3.MapCategory;
					if ((pSVar4 != null) && (parameters != null)) {
						pSVar5 = pSVar4._value;
						if ((pSVar5 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) {
	label_059a183f: ;
							pIVar7 = new ArrayTypeMismatchException();
							throw pIVar7;
						}
						if ((int)parameters.Length == 0) {
	label_059a183a: ;
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pSVar5;
						pSVar4 = pSVar3.MapName;
						if (pSVar4 != null) {
							pSVar5 = pSVar4._value;
							if ((pSVar5 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_059a183f;
							if ((parameters.Length & 0xfffffffe) == 0) goto label_059a183a;
							parameters[1] = (object)pSVar5;
							if (__this_00 != null) {
								__this_00.RPC("LoadBuiltinMapRPC", player, parameters);
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x58A1940", Offset = "0x58A0940", VA = "0x58A1940")]
	public MapManager()
	{
		// Lifted from source/cpp/Map/MapManager.c (Map.MapManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapManager.c.

	// Map.MapManager$$.cctor: clean
	static MapManager()
	{
		Map_MapManager_StaticFields pMVar1;

		pMVar1 = typeof(MapManager).static_fields;
		pMVar1.NeedsNavMeshUpdate = true;
		pMVar1.LastMapHash = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pMVar1 = typeof(MapManager).static_fields;
		pMVar1.LastGameMode = (String)**(ulong*)(g_data_07556758 + 0xb8);
		return;
	}
}
