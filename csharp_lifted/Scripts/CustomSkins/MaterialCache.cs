// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.MaterialCache
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/MaterialCache.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/MaterialCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003D1")]
internal class MaterialCache
{
	[Token(Token = "0x4001382")]
	private const long MaxBytes = 536870912L;

	[Token(Token = "0x4001383")]
	private const int BytesPerPixel = 4;

	[Token(Token = "0x4001384")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Material> _idToMaterial;

	[Token(Token = "0x4001385")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, long> _idToBytes;

	[Token(Token = "0x4001386")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, MonoBehaviour> _idToDownloadOwner;

	[Token(Token = "0x4001387")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<string> _ids;

	[Token(Token = "0x4001388")]
	[FieldOffset(Offset = "0x20")]
	private static long _totalBytes;

	[Token(Token = "0x4001389")]
	[FieldOffset(Offset = "0x28")]
	public static Material TransparentMaterial;

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x58656A0", Offset = "0x58646A0", VA = "0x58656A0")]
	public static void Init()
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$Init): 1 lines keep C-only constructs
		Material pUVar2;

		pUVar2 = ResourceManager.InstantiateAsset<Material>("Map/Materials", "TransparentMaterial", false, false);
		MaterialCache.TransparentMaterial = pUVar2;
		pUVar2 = MaterialCache.TransparentMaterial;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2.color = (Color)ZEXT816(0);
		return;
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x5865790", Offset = "0x5864790", VA = "0x5865790")]
	public static void Clear()
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$Clear): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int length;
		Dictionary<object, object> pSVar3;
		Dictionary<string, long> __this;
		List<string> pSVar4;
		CustomSkins_MaterialCache_StaticFields pCVar5;

		if (Il2CppMethodInitialized_0754594a == false) {
			Il2CppMethodInitialized_0754594a = true;
			uVar2 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar3 = (Dictionary<object, object>)MaterialCache._idToMaterial;
		}
		else {
			pSVar3 = *(Dictionary<object, object>*)(typeof(MaterialCache)).static_fields;
		}
		if (pSVar3 != null) {
			pSVar3.Clear();
			__this = MaterialCache._idToBytes;
			if (__this != null) {
				__this.Clear();
				pSVar3 = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
				if (pSVar3 != null) {
					pSVar3.Clear();
					pCVar5 = typeof(MaterialCache).static_fields;
					pSVar4 = pCVar5._ids;
					if (pSVar4 != null) {
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						length = pSVar4._size;
						pSVar4._size = 0;
						if (0 < length) {
							Array.Clear((Array)pSVar4._items, 0, length);
							pCVar5 = typeof(MaterialCache).static_fields;
						}
						pCVar5._totalBytes = 0;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x58632B0", Offset = "0x58622B0", VA = "0x58632B0")]
	public static string GetId(string rendererId, string url)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$GetId): clean
		String pSVar1;

		pSVar1 = String.Concat(rendererId, ",", url);
		return pSVar1;
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x5863300", Offset = "0x5862300", VA = "0x5863300")]
	public static bool ContainsKey(string id)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$ContainsKey): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		Object x;
		bool bVar1;
		Object local_20;

		local_20 = null;
		__this = (Dictionary<object, object>)MaterialCache._idToMaterial;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this.TryGetValue((object)id, (object*)&local_20);
		x = local_20;
		if (bVar1) {
			bVar1 = (x == null);
			if (!bVar1) {
				return true;
			}
			MaterialCache.Remove(id);
		}
		return false;
	}

	[Token(Token = "0x6001837")]
	[Address(RVA = "0x58633F0", Offset = "0x58623F0", VA = "0x58633F0")]
	public static Material GetMaterial(string id)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$GetMaterial): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<string> pSVar4;
		String[] pSVar5;
		Dictionary<object, object> __this;
		Material pUVar7;

		if (Il2CppMethodInitialized_0754594d == false) {
			Il2CppMethodInitialized_0754594d = true;
			uVar2 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar4 = MaterialCache._ids;
		}
		else {
			pSVar4 = *(List<string>*)((long)(typeof(MaterialCache)).static_fields + 0x18);
		}
		if (pSVar4 != null) {
			pSVar4.Remove((object)id);
			pSVar4 = MaterialCache._ids;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pSVar5 = pSVar4._items;
				if (pSVar5 != null) {
					uVar3 = pSVar4._size;
					if (uVar3 < (uint)pSVar5.Length) {
						pSVar4._size = uVar3 + 1;
						pSVar5[(int)uVar3] = id;
					}
					else {
						pSVar4.AddWithResize((object)id);
					}
					__this = (Dictionary<object, object>)MaterialCache._idToMaterial;
					if (__this != null) {
						pUVar7 = __this.get_Item((object)id);
						return pUVar7;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001838")]
	[Address(RVA = "0x58649E0", Offset = "0x58639E0", VA = "0x58649E0")]
	public static void SetMaterial(string id, Material material, Texture texture)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$SetMaterial): 13 lines keep C-only constructs
		int piVar1;
		long piVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<object, object> pSVar5;
		Dictionary<string, long> __this;
		String[] pSVar6;
		bool bVar7;
		long value;
		List<string> pSVar8;
		String id_00;
		CustomSkins_MaterialCache_StaticFields pCVar9;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754594e == false) {
			Il2CppMethodInitialized_0754594e = true;
			uVar3 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			pSVar5 = (Dictionary<object, object>)MaterialCache._idToMaterial;
		}
		else {
			pSVar5 = *(Dictionary<object, object>*)(typeof(MaterialCache)).static_fields;
		}
		if (pSVar5 != null) {
			bVar7 = pSVar5.ContainsKey((object)id);
			if (bVar7) {
				MaterialCache.Remove(id);
			}
			value = MaterialCache.GetTextureBytes(texture);
			pSVar5 = (Dictionary<object, object>)MaterialCache._idToMaterial;
			if (pSVar5 != null) {
				pSVar5.set_Item((object)id, (object)material);
				__this = MaterialCache._idToBytes;
				if (__this != null) {
					__this.set_Item((object)id, value);
					pSVar8 = MaterialCache._ids;
					if (pSVar8 != null) {
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar8._items;
						if (pSVar6 != null) {
							uVar4 = pSVar8._size;
							if (uVar4 < (uint)pSVar6.Length) {
								pSVar8._size = uVar4 + 1;
								pSVar6[(int)uVar4] = id;
							}
							else {
								pSVar8.AddWithResize((object)id);
							}
							klass = typeof(MaterialCache);
							piVar2 = &MaterialCache._totalBytes;
							*piVar2 = *piVar2 + value;
							while(true) {
								if ((klass._2).cctor_finished_or_no_cctor == 0) {
									klass = typeof(MaterialCache);
								}
								pCVar9 = klass.static_fields;
								if (pCVar9._totalBytes < 0x20000001) {
									return;
								}
								if ((klass._2).cctor_finished_or_no_cctor == 0) {
									pCVar9 = typeof(MaterialCache).static_fields;
									klass = typeof(MaterialCache);
								}
								pSVar8 = pCVar9._ids;
								if (pSVar8 == null) break;
								if (pSVar8._size < 2) {
									return;
								}
								if ((klass._2).cctor_finished_or_no_cctor == 0) {
									pSVar8 = MaterialCache._ids;
									if (pSVar8 == null) break;
								}
								id_00 = pSVar8.get_Item(0);
								MaterialCache.Remove(id_00);
								klass = typeof(MaterialCache);
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x5864740", Offset = "0x5863740", VA = "0x5864740")]
	public static bool IsDownloading(string id)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$IsDownloading): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		Object x;
		bool bVar1;
		bool bVar2;
		Object local_18;

		local_18 = null;
		__this = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
		if (__this == null) {
	label_05964815: ;
			throw new NullReferenceException();
		}
		bVar1 = __this.TryGetValue((object)id, (object*)&local_18);
		x = local_18;
		if (bVar1) {
			bVar1 = false;
			bVar2 = (x != null);
			if (bVar2) {
				if (local_18 == null) goto label_05964815;
				bVar1 = local_18.isActiveAndEnabled;
			}
		}
		else {
			bVar1 = false;
		}
		return bVar1;
	}

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x5864820", Offset = "0x5863820", VA = "0x5864820")]
	public static void SetDownloading(string id, MonoBehaviour owner)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$SetDownloading): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07545950 == false) {
			Il2CppMethodInitialized_07545950 = true;
			uVar1 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(MaterialCache)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)id, (object)owner);
		return;
	}

	[Token(Token = "0x600183B")]
	[Address(RVA = "0x5864940", Offset = "0x5863940", VA = "0x5864940")]
	public static void ClearDownloading(string id)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$ClearDownloading): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07545951 == false) {
			Il2CppMethodInitialized_07545951 = true;
			uVar1 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)MaterialCache._idToDownloadOwner;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(MaterialCache)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Remove((object)id);
		return;
	}

	[Token(Token = "0x600183C")]
	[Address(RVA = "0x5865A10", Offset = "0x5864A10", VA = "0x5865A10")]
	private static long GetTextureBytes(Texture texture)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$GetTextureBytes): clean
		bool bVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		long lVar5;

		bVar1 = ((Object)texture == null);
		if (!bVar1) {
			if (texture == null) {
				throw new NullReferenceException();
			}
			iVar2 = texture.get_width();
			iVar3 = texture.get_height();
			iVar4 = texture.mipmapCount;
			if (iVar4 < 2) {
				lVar5 = (long)iVar3 * (long)iVar2 * 4;
			}
			else {
				lVar5 = ((long)iVar3 * (long)iVar2 * 0x10) / 3;
			}
		}
		return lVar5;
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x58658D0", Offset = "0x58648D0", VA = "0x58658D0")]
	private static void Remove(string id)
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$Remove): clean
		uint uVar1;
		CustomSkins_MaterialCache_StaticFields pCVar2;
		Dictionary<string, long> pSVar3;
		long lVar4;
		Dictionary<object, object> __this;
		List<string> __this_00;
		long iVar5;

		if (Il2CppMethodInitialized_07545953 == false) {
			Il2CppMethodInitialized_07545953 = true;
			uVar1 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MaterialCache)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = typeof(MaterialCache).static_fields;
			pSVar3 = pCVar2._idToBytes;
		}
		else {
			pCVar2 = (typeof(MaterialCache)).static_fields;
			pSVar3 = pCVar2._idToBytes;
		}
		if (pSVar3 != null) {
			lVar4 = pCVar2._totalBytes;
			iVar5 = pSVar3.get_Item((object)id);
			pCVar2 = typeof(MaterialCache).static_fields;
			pCVar2._totalBytes = lVar4 - iVar5;
			__this = (Dictionary<object, object>)pCVar2._idToMaterial;
			if (__this != null) {
				__this.Remove((object)id);
				pSVar3 = MaterialCache._idToBytes;
				if (pSVar3 != null) {
					pSVar3.Remove((object)id);
					__this_00 = MaterialCache._ids;
					if (__this_00 != null) {
						__this_00.Remove((object)id);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x5865AE0", Offset = "0x5864AE0", VA = "0x5865AE0")]
	public MaterialCache()
	{
		// Lifted from source/cpp/CustomSkins/MaterialCache.c (CustomSkins.MaterialCache$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomSkins/MaterialCache.c.

	// CustomSkins.MaterialCache$$.cctor: clean
	static MaterialCache()
	{
		CustomSkins_MaterialCache_StaticFields pCVar1;
		Dictionary<string, Material> __this;
		Dictionary<string, long> __this_00;
		Dictionary<string, MonoBehaviour> __this_01;
		List<string> __this_02;

		__this = new Dictionary<string, Material>();
		MaterialCache._idToMaterial = __this;
		__this_00 = new Dictionary<string, long>();
		pCVar1 = typeof(MaterialCache).static_fields;
		pCVar1._idToBytes = __this_00;
		__this_01 = new Dictionary<string, MonoBehaviour>() ;
		pCVar1 = typeof(MaterialCache).static_fields;
		pCVar1._idToDownloadOwner = __this_01;
		__this_02 = new List<string>();
		pCVar1 = typeof(MaterialCache).static_fields;
		pCVar1._ids = __this_02;
		return;
	}
}
