// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorTexturePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorTexturePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20008D0")]
internal class MapEditorTexturePanel : MapEditorAddObjectPanel
{
	[Token(Token = "0x60053FC")]
	[Address(RVA = "0x5C9C7F0", Offset = "0x5C9B7F0", VA = "0x5C9C7F0", Slot = "35")]
	protected override List<string> GetItems(string category)
	{
		// Lifted from source/cpp/UI/MapEditorTexturePanel.c (UI.MapEditorTexturePanel$$GetItems): 5 lines keep C-only constructs
		uint uVar1;
		Dictionary<@object, @object> pSVar2;
		object @object;
		bool bVar3;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		object source_00;
		UI_MapEditorTexturePanel___c_StaticFields pUVar4;
		Func<MapScriptBasicMaterial, string> __this_00;
		List<string> pSVar5;

		bVar3 = (category == "All");
		uVar1 = (typeof(BuiltinMapTextures)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			pSVar2 = (Dictionary<@object, @object>)BuiltinMapTextures.AllTexturesNoLegacy;
			if (pSVar2 == null) goto label_05d9c9d9;
			source = pSVar2.Keys;
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar2 = (Dictionary<@object, @object>)BuiltinMapTextures.TextureCategories;
			if (pSVar2 == null) {
	label_05d9c9d9: ;
				throw new NullReferenceException();
			}
			source_00 = pSVar2.get_Item((object)category);
			if ((typeof(MapEditorTexturePanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar4 = typeof(MapEditorTexturePanel.c).static_fields;
				__this_00 = pUVar4.__9__0_0;
			}
			else {
				pUVar4 = typeof(MapEditorTexturePanel.c).static_fields;
				__this_00 = pUVar4.__9__0_0;
			}
			if (__this_00 == null) {
				if (((typeof(MapEditorTexturePanel.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar4 = typeof(MapEditorTexturePanel.c).static_fields;
				}
				@object = (object)pUVar4.__9;
				__this_00 = il2cpp_codegen_object_new(typeof(Func<MapScriptBasicMaterial, string>)) ;
				__this_00 = new Func<@object, @object>(@object, (intptr_t)MethodInfo_UI_MapEditorTexturePanel_c_GetItems_b__0_0);
				pUVar4 = typeof(MapEditorTexturePanel.c).static_fields;
				pUVar4.__9__0_0 = __this_00;
			}
			source = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o)Enumerable.Select<MapScriptBasicMaterial, string>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__TResult__o)__this_00);
		}
		pSVar5 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar5;
	}

	[Token(Token = "0x60053FD")]
	[Address(RVA = "0x5C9C9E0", Offset = "0x5C9B9E0", VA = "0x5C9C9E0", Slot = "36")]
	protected override string GetPreviewName(string item)
	{
		// Lifted from source/cpp/UI/MapEditorTexturePanel.c (UI.MapEditorTexturePanel$$GetPreviewName): clean
		String pSVar1;

		pSVar1 = String.Concat(item, "TexturePreview");
		return pSVar1;
	}

	[Token(Token = "0x60053FE")]
	[Address(RVA = "0x5C9CA20", Offset = "0x5C9BA20", VA = "0x5C9CA20", Slot = "37")]
	protected override void OnSelectObject(string name)
	{
		// Lifted from source/cpp/UI/MapEditorTexturePanel.c (UI.MapEditorTexturePanel$$OnSelectObject): 1 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		long lVar3;
		BasePanel pUVar4;

		if (Il2CppMethodInitialized_0754808e == false) {
			Il2CppMethodInitialized_0754808e = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d9ca8e;
	label_05d9ca47: ;
			pUVar2 = UIManager.CurrentMenu;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d9ca47;
	label_05d9ca8e: ;
			pUVar2 = UIManager.CurrentMenu;
		}
		if (pUVar2 != null) {
			bVar1 = ((typeof(MapEditorMenu))._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MapEditorMenu))) {
				throw new InvalidCastException();
			}
			lVar3 = (*(ulong)((sbyte)pUVar2 + 0x140));
			if (lVar3 == 0) {
				if ((*(ulong)((sbyte)pUVar2 + 0x98)) == null) goto label_05d9cb49;
				((*(ulong)((sbyte)pUVar2 + 0x98))).OnSelectTexture(name);
				pUVar4 = this.Parent;
			}
			else {
				(*(ulong)((sbyte)pUVar2 + 0x140)) = 0;
				(**(code*)(lVar3 + 0x18))(*(ulong)(lVar3 + 0x40),name,*(ulong)(lVar3 + 0x28));
				pUVar4 = this.Parent;
			}
			if (pUVar4 != null) {
				pUVar4.Hide();
				return;
			}
		}
	label_05d9cb49: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053FF")]
	[Address(RVA = "0x5C9CB60", Offset = "0x5C9BB60", VA = "0x5C9CB60")]
	public MapEditorTexturePanel()
	{
		// Lifted from source/cpp/UI/MapEditorTexturePanel.c (UI.MapEditorTexturePanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorTexturePanel.c.

	// UI.MapEditorTexturePanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorTexturePanel.c();
		MapEditorTexturePanel.c.__9 = (MapEditorTexturePanel.c)__this;
		return;
	}

	// UI.MapEditorTexturePanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorTexturePanel.<>c$$<GetItems>b__0_0: clean
	private String c__GetItems_b__0_0(MapScriptBasicMaterial x)
	{
		String __this_00;
		String[] pSVar1;

		if ((x != null) &&(__this_00 = x.Texture, __this_00 != null)) {
			pSVar1 = __this_00.Split(0x2f, 0);
			if (pSVar1 != null) {
				if ((pSVar1.Length & 0xfffffffe) == 0) {
					throw new IndexOutOfRangeException();
				}
				return pSVar1[1];
			}
		}
		throw new NullReferenceException();
	}
}
