// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.BaseCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/BaseCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/BaseCustomSkinLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003B8")]
internal abstract class BaseCustomSkinLoader : MonoBehaviour
{
	[Token(Token = "0x400131C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TransparentURL;

	[Token(Token = "0x400131D")]
	[FieldOffset(Offset = "0x20")]
	protected GameObject _owner;

	[Token(Token = "0x400131E")]
	protected const int BytesPerKb = 1000;

	[Token(Token = "0x400131F")]
	protected const int MaxSizeLarge = 2000000;

	[Token(Token = "0x4001320")]
	protected const int MaxSizeMedium = 1000000;

	[Token(Token = "0x4001321")]
	protected const int MaxSizeSmall = 500000;

	[Token(Token = "0x17000287")]
	protected abstract string RendererIdPrefix
	{
		[Token(Token = "0x60017C0")]
		get;
	}

	[Token(Token = "0x17000288")]
	internal virtual bool AllowLocalFileTextures
	{
		[Token(Token = "0x60017C1")]
		[Address(RVA = "0x585F1D0", Offset = "0x585E1D0", VA = "0x585F1D0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$get_AllowLocalFileTextures): clean
			return false;
		}
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x585F1E0", Offset = "0x585E1E0", VA = "0x585F1E0")]
	protected void Awake()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$Awake): clean
		GameObject pUVar1;

		pUVar1 = this.gameObject;
		this._owner = pUVar1;
		return;
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x585F200", Offset = "0x585E200", VA = "0x585F200", Slot = "6")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPart): 4 lines keep C-only constructs
		Il2CppClass klass;
		NotImplementedException __this_00;
		MethodInfo lastManagedFrame;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
		__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotImplementedException();
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomSkins_BaseCustomSkinLoader_GetCustomSkinPart);
		throw (object)__this_00;
	}

	[Token(Token = "0x60017C4")]
	public abstract IEnumerator LoadSkinsFromRPC(object[] data);

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x585EC20", Offset = "0x585DC20", VA = "0x585EC20")]
	protected string GetRendererId(int partId)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$GetRendererId): 1 lines keep C-only constructs
		String pSVar1;
		String str1;
		int local_c;

		local_c = partId;
		pSVar1 = (String)(*(this.klass.vtable)._4_unknown.methodPtr)();
		str1 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, str1);
		return pSVar1;
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x585F240", Offset = "0x585E240", VA = "0x585F240")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject obj)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$AddRendererIfExists): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer[] pUVar3;
		bool bVar5;
		Renderer item;

		bVar5 = ((Object)obj != null);
		if (bVar5) {
			if (obj != null) {
				item = obj.GetComponentInChildren<Renderer>();
				if (renderers != null) {
					piVar1 = &renderers._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = renderers._items;
					if (pUVar3 != null) {
						uVar2 = renderers._size;
						if (uVar2 < (uint)pUVar3.Length) {
							renderers._size = uVar2 + 1;
							pUVar3[(int)uVar2] = item;
							return;
						}
						renderers.AddWithResize((object)item);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x585EB10", Offset = "0x585DB10", VA = "0x585EB10")]
	protected void AddAllRenderers(List<Renderer> renderers, GameObject obj)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$AddAllRenderers): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer item;
		Renderer[] pUVar3;
		int iVar5;
		Object[] pSVar6;
		ulong uVar7;
		ulong uVar8;

		if (obj != null) {
			pSVar6 = obj.GetComponentsInChildren<Renderer>();
			if (pSVar6 != null) {
				iVar5 = (int)pSVar6.Length;
				if (renderers == null) {
					if (0 < iVar5) goto label_0595ec07;
				}
				else if (0 < iVar5) {
					uVar7 = pSVar6.Length & 0xffffffff;
					uVar8 = 0;
					do {
						if (uVar7 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						item = (Renderer)pSVar6[uVar8];
						piVar1 = &renderers._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = renderers._items;
						if (pUVar3 == null) goto label_0595ec07;
						uVar2 = renderers._size;
						if (uVar2 < (uint)pUVar3.Length) {
							renderers._size = uVar2 + 1;
							pUVar3[(int)uVar2] = item;
						}
						else {
							renderers.AddWithResize((object)item);
						}
						uVar8 = uVar8 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar7 = (ulong)uVar2;
					} while ((long)uVar8 < (long)(int)uVar2);
				}
				return;
			}
		}
	label_0595ec07: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x585F340", Offset = "0x585E340", VA = "0x585F340")]
	protected void AddAllRenderersIfExists(List<Renderer> renderers, GameObject obj)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$AddAllRenderersIfExists): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer item;
		Renderer[] pUVar3;
		bool bVar5;
		int iVar6;
		Object[] pSVar7;
		ulong uVar8;
		ulong uVar9;

		bVar5 = ((Object)obj != null);
		if (!bVar5) {
			return;
		}
		if ((obj == null) ||(pSVar7 = obj.GetComponentsInChildren<Renderer>(true) , pSVar7 == null)) {
	label_0595f477: ;
			throw new NullReferenceException();
		}
		iVar6 = (int)pSVar7.Length;
		if (renderers == null) {
			if (0 < iVar6) goto label_0595f477;
		}
		else if (0 < iVar6) {
			uVar8 = pSVar7.Length & 0xffffffff;
			uVar9 = 0;
			do {
				if (uVar8 <= uVar9) {
					throw new IndexOutOfRangeException();
				}
				item = (Renderer)pSVar7[uVar9];
				piVar1 = &renderers._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = renderers._items;
				if (pUVar3 == null) goto label_0595f477;
				uVar2 = renderers._size;
				if (uVar2 < (uint)pUVar3.Length) {
					renderers._size = uVar2 + 1;
					pUVar3[(int)uVar2] = item;
				}
				else {
					renderers.AddWithResize((object)item);
				}
				uVar9 = uVar9 + 1;
				uVar2 = (uint)pSVar7.Length;
				uVar8 = (ulong)uVar2;
			} while ((long)uVar9 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x60017C9")]
	[Address(RVA = "0x585F490", Offset = "0x585E490", VA = "0x585F490")]
	protected void AddRenderersContainingName(List<Renderer> renderers, GameObject obj, string name)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$AddRenderersContainingName): 2 lines keep C-only constructs
		int piVar1;
		Object __this_00;
		Renderer[] pUVar2;
		bool bVar4;
		uint uVar5;
		Object[] pSVar6;
		String pSVar7;
		uint uVar8;
		long lVar9;

		if (obj != null) {
			pSVar6 = obj.GetComponentsInChildren<Renderer>();
			if (pSVar6 != null) {
				uVar5 = (uint)pSVar6.Length;
				if (renderers == null) {
					if (0 < (int)uVar5) {
						lVar9 = 0;
						do {
							if (uVar5 <= (uint)lVar9) goto label_0595f61b;
							if ((Object)pSVar6[lVar9] == null) goto label_0595f616;
							pSVar7 = (pSVar6[lVar9]).name;
							if (pSVar7 == null) goto label_0595f616;
							bVar4 = pSVar7.Contains(name);
							if (bVar4) goto label_0595f616;
							uVar5 = (uint)pSVar6.Length;
							lVar9 = lVar9 + 1;
						} while ((int)lVar9 < (int)uVar5);
					}
				}
				else if (0 < (int)uVar5) {
					uVar8 = 0;
					do {
						if (uVar5 <= uVar8) {
	label_0595f61b: ;
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Object)pSVar6[(int)uVar8];
						if (__this_00 == null) goto label_0595f616;
						pSVar7 = __this_00.name;
						if (pSVar7 == null) goto label_0595f616;
						bVar4 = pSVar7.Contains(name);
						if (bVar4) {
							piVar1 = &renderers._version;
							*piVar1 = *piVar1 + 1;
							pUVar2 = renderers._items;
							if (pUVar2 == null) goto label_0595f616;
							uVar5 = renderers._size;
							if (uVar5 < (uint)pUVar2.Length) {
								renderers._size = uVar5 + 1;
								pUVar2[(int)uVar5] = (Renderer)__this_00;
							}
							else {
								renderers.AddWithResize((object)__this_00);
							}
						}
						uVar8 = uVar8 + 1;
						uVar5 = (uint)pSVar6.Length;
					} while ((int)uVar8 < (int)uVar5);
				}
				return;
			}
		}
	label_0595f616: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017CA")]
	[Address(RVA = "0x585F620", Offset = "0x585E620", VA = "0x585F620")]
	protected void AddRenderersMatchingName(List<Renderer> renderers, GameObject obj, string name)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$AddRenderersMatchingName): 2 lines keep C-only constructs
		int piVar1;
		Object __this_00;
		Renderer[] pUVar2;
		bool bVar4;
		uint uVar5;
		Object[] pSVar6;
		String pSVar7;
		uint uVar8;
		long lVar9;

		if (obj != null) {
			pSVar6 = obj.GetComponentsInChildren<Renderer>();
			if (pSVar6 != null) {
				uVar5 = (uint)pSVar6.Length;
				if (renderers == null) {
					if (0 < (int)uVar5) {
						lVar9 = 0;
						do {
							if (uVar5 <= (uint)lVar9) goto label_0595f796;
							if ((Object)pSVar6[lVar9] == null) goto label_0595f791;
							pSVar7 = (pSVar6[lVar9]).name;
							bVar4 = (pSVar7 == name);
							if (bVar4) goto label_0595f791;
							uVar5 = (uint)pSVar6.Length;
							lVar9 = lVar9 + 1;
						} while ((int)lVar9 < (int)uVar5);
					}
				}
				else if (0 < (int)uVar5) {
					uVar8 = 0;
					do {
						if (uVar5 <= uVar8) {
	label_0595f796: ;
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Object)pSVar6[(int)uVar8];
						if (__this_00 == null) goto label_0595f791;
						pSVar7 = __this_00.name;
						bVar4 = (pSVar7 == name);
						if (bVar4) {
							piVar1 = &renderers._version;
							*piVar1 = *piVar1 + 1;
							pUVar2 = renderers._items;
							if (pUVar2 == null) goto label_0595f791;
							uVar5 = renderers._size;
							if (uVar5 < (uint)pUVar2.Length) {
								renderers._size = uVar5 + 1;
								pUVar2[(int)uVar5] = (Renderer)__this_00;
							}
							else {
								renderers.AddWithResize((object)__this_00);
							}
						}
						uVar8 = uVar8 + 1;
						uVar5 = (uint)pSVar6.Length;
					} while ((int)uVar8 < (int)uVar5);
				}
				return;
			}
		}
	label_0595f791: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x585F7A0", Offset = "0x585E7A0", VA = "0x585F7A0")]
	protected List<int> GetCustomSkinPartIds(Type t)
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPartIds): 3 lines keep C-only constructs
		IEnumerable source;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_List_TSource__o pSVar1;

		source = (IEnumerable)Enum.GetValues(t);
		source_00 = Enumerable.Cast<int>(source);
		pSVar1 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		return (List<int>)pSVar1;
	}

	[Token(Token = "0x60017CC")]
	[Address(RVA = "0x585F820", Offset = "0x585E820", VA = "0x585F820")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$OnDestroy): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545911 == false) {
			Il2CppMethodInitialized_07545911 = true;
			uVar1 = (typeof(TextureDownloader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TextureDownloader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07545955 == false) {
			Il2CppMethodInitialized_07545955 = true;
			uVar1 = (typeof(TextureDownloader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(TextureDownloader))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			TextureDownloader.CurrentConcurrentDownloads = 0;
			return;
		}
		*(uint)((long)(typeof(TextureDownloader)).static_fields + 0x18) = 0;
		return;
	}

	[Token(Token = "0x60017CD")]
	[Address(RVA = "0x585EDB0", Offset = "0x585DDB0", VA = "0x585EDB0")]
	protected BaseCustomSkinLoader()
	{
		// Lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c (CustomSkins.BaseCustomSkinLoader$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomSkins/BaseCustomSkinLoader.c.

	// CustomSkins.BaseCustomSkinLoader$$.cctor: clean
	static BaseCustomSkinLoader()
	{
		BaseCustomSkinLoader.TransparentURL = "transparent";
		return;
	}
}
