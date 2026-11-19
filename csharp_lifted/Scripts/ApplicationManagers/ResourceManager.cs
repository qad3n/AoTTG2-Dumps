// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ResourceManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ResourceManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000985")]
internal class ResourceManager : MonoBehaviour
{
	[Token(Token = "0x400301D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Object> _cache;

	[Token(Token = "0x400301E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Object> _persistentCache;

	[Token(Token = "0x400301F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Texture2D> _externalTextureCache;

	[Token(Token = "0x4003020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static HashSet<string> _persistentTextures;

	[Token(Token = "0x4003021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly HashSet<int> _meshParticlesChecked;

	[Token(Token = "0x60058FE")]
	[Address(RVA = "0x5D1BBB0", Offset = "0x5D1ABB0", VA = "0x5D1BBB0")]
	public static void ClearCache()
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$ClearCache): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_0754846a == false) {
			Il2CppMethodInitialized_0754846a = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)ResourceManager._cache;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(ResourceManager)).static_fields;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		return;
	}

	[Token(Token = "0x60058FF")]
	[Address(RVA = "0x5D1BC40", Offset = "0x5D1AC40", VA = "0x5D1BC40")]
	public static string LoadText(string path, string name)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$LoadText): 1 lines keep C-only constructs
		byte bVar1;
		Object __this;
		String pSVar2;

		__this = ResourceManager.LoadAsset(path, name, false, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(TextAsset)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(TextAsset))) {
			throw new InvalidCastException();
		}
		return pSVar2;
	}

	[Token(Token = "0x6005900")]
	[Address(RVA = "0x5D18410", Offset = "0x5D17410", VA = "0x5D18410")]
	public static string TryLoadText(string path, string name)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$TryLoadText): clean
		String pSVar1;

		if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = ResourceManager.LoadText(path, name);
		return pSVar1;
	}

	[Token(Token = "0x6005901")]
	[Address(RVA = "0x5D0CBD0", Offset = "0x5D0BBD0", VA = "0x5D0CBD0")]
	public static Object LoadAsset(string path, string name, bool cached = false, bool persistent = false)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$LoadAsset): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		Texture2D x;
		Object pUVar4;
		MethodInfo pMVar5;
		Dictionary<string, Object> cache;

		pMVar5 = (MethodInfo *)"";
		bVar3 = (path != "");
		if (bVar3) {
			pMVar5 = (MethodInfo *)"/";
			name = String.Concat(path, "/", name);
		}
		x = ResourceManager.GetExternalTexture(name);
		bVar3 = ((Object)x != null);
		if (!bVar3) {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
			if (persistent) {
				if (uVar1 == 0) {
				}
				cache = ResourceManager._persistentCache;
			}
			else {
				if (!cached) {
					if (uVar1 == 0) {
					}
					pUVar4 = Resources.Load(name);
					if (pUVar4 == null) {
						return null;
					}
					if (pUVar4.klass == (Object)typeof(GameObject)) {
						ResourceManager.HideUnsupportedMeshParticles((GameObject)pUVar4);
					}
					return pUVar4;
				}
				if (uVar1 == 0) {
				}
				cache = ResourceManager._cache;
			}
			pUVar4 = ResourceManager.LoadCached(cache, name);
			return pUVar4;
		}
		if (cached) {
			pSVar2 = (Dictionary<object, object>)ResourceManager._cache;
			if (pSVar2 == null) {
	label_05e0ce1f: ;
				throw new NullReferenceException();
			}
			bVar3 = pSVar2.ContainsKey((object)name);
			if (!bVar3) {
				pSVar2 = (Dictionary<object, object>)ResourceManager._cache;
				if (pSVar2 == null) goto label_05e0ce1f;
				pSVar2.set_Item((object)name, (object)x);
			}
		}
		return (Object)x;
	}

	[Token(Token = "0x6005902")]
	[Address(RVA = "0x5D1BDE0", Offset = "0x5D1ADE0", VA = "0x5D1BDE0")]
	private static Object LoadCached(Dictionary<string, Object> cache, string name)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$LoadCached): 2 lines keep C-only constructs
		bool bVar1;
		Object prefab;
		Object pUStack_28;

		pUStack_28 = null;
		if (cache == null) {
			throw new NullReferenceException();
		}
		bVar1 = cache.TryGetValue((object)name, (object*)&pUStack_28);
		if (!bVar1) {
			prefab = Resources.Load(name);
			if ((prefab != null) &&(prefab.klass == (Object)typeof(GameObject))) {
				ResourceManager.HideUnsupportedMeshParticles((GameObject)prefab);
			}
			pUStack_28 = prefab;
			cache.set_Item((object)name, (object)prefab);
		}
		return pUStack_28;
	}

	[Token(Token = "0x6005903")]
	[Address(RVA = "0x5D1BF20", Offset = "0x5D1AF20", VA = "0x5D1BF20")]
	private static Object Load(string name)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$Load): 1 lines keep C-only constructs
		Object prefab;
		Object pUVar1;

		prefab = Resources.Load(name);
		if (prefab != null) {
			if (prefab.klass == (Object)typeof(GameObject)) {
				ResourceManager.HideUnsupportedMeshParticles((GameObject)prefab);
			}
		}
		return pUVar1;
	}

	[Token(Token = "0x6005904")]
	[Address(RVA = "0x5D0C580", Offset = "0x5D0B580", VA = "0x5D0C580")]
	public static void HideUnsupportedMeshParticles(GameObject prefab)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$HideUnsupportedMeshParticles): clean
		HashSet<int> __this;
		bool bVar1;
		uint item;

		bVar1 = SystemInfo.supportsComputeShaders;
		if (bVar1) {
			return;
		}
		if (prefab != null) {
			__this = ResourceManager._meshParticlesChecked;
			item = prefab.GetInstanceID();
			if (__this != null) {
				bVar1 = __this.Add(item);
				if (!bVar1) {
					return;
				}
				ResourceManager.HideMeshParticles(prefab);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005905")]
	[Address(RVA = "0x5D1BFB0", Offset = "0x5D1AFB0", VA = "0x5D1BFB0")]
	private static void HideMeshParticles(GameObject root)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$HideMeshParticles): 1 lines keep C-only constructs
		ParticleSystemRenderer __this;
		bool bVar1;
		uint uVar2;
		int iVar3;
		Object[] pSVar4;
		uint uVar5;
		ParticleSystem.MainModule local_40;
		ParticleSystem local_38;

		local_38 = null;
		local_40.m_ParticleSystem =(ParticleSystem.MainModule)null;
		if (root != null) {
			pSVar4 = root.GetComponentsInChildren<ParticleSystemRenderer>(true);
			if (pSVar4 != null) {
				uVar2 = (uint)pSVar4.Length;
				if (0 < (int)uVar2) {
					uVar5 = 0;
					do {
						if (uVar2 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						__this = (ParticleSystemRenderer)pSVar4[(int)uVar5];
						if (__this == null) goto label_05e1c0d0;
						__this.enableGPUInstancing = false;
						iVar3 = __this.renderMode;
						if (iVar3 == 4) {
							bVar1 = __this.TryGetComponent<ParticleSystem>((object*)&local_38);
							if (bVar1) {
								if (local_38 == null) goto label_05e1c0d0;
								local_40 = local_38.main;
								local_40.maxParticles = 0;
							}
						}
						uVar5 = uVar5 + 1;
						uVar2 = (uint)pSVar4.Length;
					} while ((int)uVar5 < (int)uVar2);
				}
				return;
			}
		}
	label_05e1c0d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005906")]
	public static T InstantiateAsset<T>(string path, string name, bool cached = false, bool persistent = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6005907")]
	public static T InstantiateAsset<T>(string path, string name, Vector3 position, Quaternion rotation, bool cached = false, bool persistent = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6005908")]
	[Address(RVA = "0x5D1BCF0", Offset = "0x5D1ACF0", VA = "0x5D1BCF0")]
	public static Texture2D GetExternalTexture(string key)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$GetExternalTexture): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		Texture2D pUVar4;

		if (Il2CppMethodInitialized_07548472 == false) {
			Il2CppMethodInitialized_07548472 = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(ResourceManager)).static_fields + 0x10);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)key);
			if (!bVar3) {
				return null;
			}
			pSVar2 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
			if (pSVar2 != null) {
				pUVar4 = pSVar2.get_Item((object)key);
				return pUVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005909")]
	[Address(RVA = "0x5D1C0E0", Offset = "0x5D1B0E0", VA = "0x5D1C0E0")]
	public static void SetExternalTexture(string key, Texture2D texture, bool persistent = true)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$SetExternalTexture): clean
		Dictionary<object, object> __this;
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07548473 == false) {
			Il2CppMethodInitialized_07548473 = true;
			if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e1c16a;
	label_05e1c10b: ;
			__this = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		}
		else {
			if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e1c10b;
	label_05e1c16a: ;
			__this = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		}
		if (__this == null) {
	label_05e1c234: ;
			throw new NullReferenceException();
		}
		__this.set_Item((object)key, (object)texture) ;
		if (persistent) {
			bVar1 = ((Object)texture != null);
			if (bVar1) {
				Object.DontDestroyOnLoad((Object)texture);
				__this_00 = (HashSet<object>)ResourceManager._persistentTextures;
				if (__this_00 != null) {
					__this_00.Add((object)key);
					return;
				}
				goto label_05e1c234;
			}
		}
		return;
	}

	[Token(Token = "0x600590A")]
	[Address(RVA = "0x5D1C240", Offset = "0x5D1B240", VA = "0x5D1C240")]
	public static void RemoveExternalTexture(string key)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$RemoveExternalTexture): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		HashSet<object> __this;
		bool bVar3;

		if (Il2CppMethodInitialized_07548474 == false) {
			Il2CppMethodInitialized_07548474 = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(ResourceManager)).static_fields + 0x10);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)key);
			if (!bVar3) {
				return;
			}
			pSVar2 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
			if (pSVar2 != null) {
				pSVar2.Remove((object)key);
				__this = (HashSet<object>)ResourceManager._persistentTextures;
				if (__this != null) {
					__this.Remove((object)key);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600590B")]
	[Address(RVA = "0x5D1C370", Offset = "0x5D1B370", VA = "0x5D1C370")]
	public static Texture2D LoadExternalTexture(string filePath, [Optional] string cacheKey, bool persistent = true)
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$LoadExternalTexture): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Texture2D pUVar3;
		Byte[] data;

		bVar2 = String.IsNullOrEmpty(cacheKey);
		if (bVar2) {
			cacheKey = filePath;
		}
		pSVar1 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)cacheKey);
			if (!bVar2) {
				bVar2 = File.Exists(filePath);
				if (bVar2) {
					data = File.ReadAllBytes(filePath);
					pUVar3 = new Texture2D(2, 2, 4, false);
					bVar2 = ImageConversion.LoadImage(pUVar3, data);
					if (bVar2) {
						ResourceManager.SetExternalTexture(cacheKey, pUVar3, persistent);
						return pUVar3;
					}
				}
				return null;
			}
			pSVar1 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
			if (pSVar1 != null) {
				pUVar3 = pSVar1.get_Item((object)cacheKey);
				return pUVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600590C")]
	[Address(RVA = "0x5D1C600", Offset = "0x5D1B600", VA = "0x5D1C600")]
	public static void ClearExternalTextureCache()
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$ClearExternalTextureCache): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		HashSet<object> __this;
		object x;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte local_30;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		pSVar1 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Values;
			if (__this_00 != null) {
				local_58 = __this_00.GetEnumerator();
				local_30 = (byte)&local_58;
				while(true) {
					bVar2 = local_58.MoveNext();
					x = local_58._currentValue;
					if (!bVar2) break;
					bVar2 = ((Object)x != null);
					if (bVar2) {
						Object.DestroyImmediate((Object)x);
					}
				}
				local_58.Dispose();
				pSVar1 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
				if (pSVar1 != null) {
					pSVar1.Clear();
					__this = (HashSet<object>)ResourceManager._persistentTextures;
					if (__this != null) {
						__this.Clear();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600590D")]
	[Address(RVA = "0x5D1C860", Offset = "0x5D1B860", VA = "0x5D1C860")]
	public static void ClearNonPersistentTextures()
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$ClearNonPersistentTextures): 15 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		HashSet<object> pSVar4;
		String[] pSVar5;
		String pSVar7;
		Object pUVar8;
		object key;
		byte puVar9;
		bool bVar10;
		List<string> __this;
		byte[] local_98 = new byte[8];
		String local_88;
		Object pUStack_80;
		ulong local_78;
		byte[] local_70 = new byte[16];
		String local_60;
		Object pUStack_58;
		int local_50;
		uint uStack_4c;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		if (Il2CppMethodInitialized_07548477 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548477 = true;
		}
		local_88 = null;
		pUStack_80 = null;
		local_98 = (byte[])0x0;
		local_78._0_4_ = 0;
		local_78._4_4_ = 0;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this = new List<string>();
		pSVar3 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		if (pSVar3 != null) {
			local_70.GetEnumerator(pSVar3);
			local_78._0_4_ = local_50;
			local_78._4_4_ = uStack_4c;
			local_88 = local_60;
			pUStack_80 = pUStack_58;
			local_98 = (byte[])local_70._0_8_;
			local_70._0_8_ = null;
			local_70._8_8_ = local_98;
			puVar9 = local_98;
			if (__this == null) {
				while (true) {
					local_70._8_8_ = puVar9;
					bVar10 = local_98.MoveNext();
					pUVar8 = pUStack_80;
					pSVar7 = local_88;
					if (!(bVar10)) break;
					pSVar4 = (HashSet<object>)ResourceManager._persistentTextures;
					if (pSVar4 == null) {
	label_05e1cc53: ;
						throw new NullReferenceException();
					}
					bVar10 = pSVar4.Contains((object)pSVar7);
					puVar9 = (byte)local_70._8_8_;
					if (!bVar10) {
						bVar10 = (pUVar8 != null);
						if (bVar10) {
							Object.DestroyImmediate(pUVar8);
						}
	label_05e1cc9b: ;
						throw new NullReferenceException();
					}
				}
			}
			else {
				while (true) {
					bVar10 = local_98.MoveNext();
					pUVar8 = pUStack_80;
					pSVar7 = local_88;
					if (!(bVar10)) break;
					pSVar4 = (HashSet<object>)ResourceManager._persistentTextures;
					if (pSVar4 == null) goto label_05e1cc53;
					bVar10 = pSVar4.Contains((object)pSVar7);
					if (!bVar10) {
						bVar10 = (pUVar8 != null);
						if (bVar10) {
							Object.DestroyImmediate(pUVar8);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this._items;
						if (pSVar5 == null) goto label_05e1cc9b;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this._size = uVar2 + 1;
							pSVar5[(int)uVar2] = pSVar7;
						}
						else {
							__this.AddWithResize((object)pSVar7);
						}
					}
				}
			}
			local_98.Dispose();
			if (__this != null) {
				local_48 = __this.GetEnumerator();
				local_70._0_8_ = null;
				local_70._8_8_ = &local_48;
				while(true) {
					bVar10 = local_48.MoveNext();
					key = local_48._current;
					if (!bVar10) {
						local_48.Dispose();
						return;
					}
					pSVar3 = (Dictionary<object, object>)ResourceManager._externalTextureCache;
					if (pSVar3 == null) break;
					pSVar3.Remove(key);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600590E")]
	[Address(RVA = "0x5D1CD70", Offset = "0x5D1BD70", VA = "0x5D1CD70")]
	public static int GetExternalTextureCacheCount()
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$GetExternalTextureCacheCount): clean
		uint uVar1;
		Dictionary<object, object> __this;
		int iVar2;

		if (Il2CppMethodInitialized_07548478 == false) {
			Il2CppMethodInitialized_07548478 = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)ResourceManager._externalTextureCache;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(ResourceManager)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x600590F")]
	[Address(RVA = "0x5D1CE00", Offset = "0x5D1BE00", VA = "0x5D1CE00")]
	public static int GetPersistentTextureCacheCount()
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$GetPersistentTextureCacheCount): clean
		uint uVar1;
		HashSet<string> pSVar2;

		if (Il2CppMethodInitialized_07548479 == false) {
			Il2CppMethodInitialized_07548479 = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ResourceManager._persistentTextures;
		}
		else {
			pSVar2 = *(HashSet<string>*)((long)(typeof(ResourceManager)).static_fields + 0x18);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._count;
	}

	[Token(Token = "0x6005910")]
	[Address(RVA = "0x5D1CE90", Offset = "0x5D1BE90", VA = "0x5D1CE90")]
	public ResourceManager()
	{
		// Lifted from source/cpp/ApplicationManagers/ResourceManager.c (ApplicationManagers.ResourceManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/ResourceManager.c.

	// ApplicationManagers.ResourceManager$$InstantiateAsset<object>: 6 lines keep C-only constructs
	private static object InstantiateAsset_object(String path, String name, bool cached, bool persistent)
	{
		uint uVar1;
		Object pUVar2;
		Il2CppClass klass;
		object pIVar3;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
				goto joined_r0x037657e1;
			}
		}
		uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
	joined_r0x037657e1: ;
		if (uVar1 == 0) {
		}
		pUVar2 = ResourceManager.LoadAsset(path, name, cached, persistent);
		pUVar2 = Object.Instantiate(pUVar2);
		klass = method.rgctx_data._0_T;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (pUVar2 == null) {
			pIVar3 = null;
		}
		else {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pUVar2, klass);
			if (pIVar3 == null) {
				throw new InvalidCastException();
			}
		}
		return pIVar3;
	}

	// ApplicationManagers.ResourceManager$$InstantiateAsset<object>: 6 lines keep C-only constructs
	private static object InstantiateAsset_object(String path, String name, Vector3 position, Quaternion rotation, bool cached, bool persistent)
	{
		uint uVar1;
		Object pUVar2;
		Il2CppClass klass;
		object pIVar3;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
				goto joined_r0x037658fb;
			}
		}
		uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
	joined_r0x037658fb: ;
		if (uVar1 == 0) {
		}
		pUVar2 = ResourceManager.LoadAsset(path, name, cached, persistent);
		pUVar2 = Object.Instantiate(pUVar2, position, rotation);
		klass = method.rgctx_data._0_T;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (pUVar2 == null) {
			pIVar3 = null;
		}
		else {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pUVar2, klass);
			if (pIVar3 == null) {
				throw new InvalidCastException();
			}
		}
		return pIVar3;
	}

	// ApplicationManagers.ResourceManager$$.cctor: clean
	static ResourceManager()
	{
		ApplicationManagers_ResourceManager_StaticFields pAVar1;
		Dictionary<string, Object> pSVar2;
		Dictionary<string, Texture2D> __this;
		HashSet<string> __this_00;
		HashSet<int> __this_01;

		pSVar2 = new Dictionary<string, Object>();
		ResourceManager._cache = pSVar2;
		pSVar2 = new Dictionary<string, Object>();
		pAVar1 = typeof(ResourceManager).static_fields;
		pAVar1._persistentCache = pSVar2;
		__this = new Dictionary<string, Texture2D>();
		pAVar1 = typeof(ResourceManager).static_fields;
		pAVar1._externalTextureCache = __this;
		__this_00 = new HashSet<string>();
		pAVar1 = typeof(ResourceManager).static_fields;
		pAVar1._persistentTextures = __this_00;
		__this_01 = new HashSet<int>();
		pAVar1 = typeof(ResourceManager).static_fields;
		pAVar1._meshParticlesChecked = __this_01;
		return;
	}
}
