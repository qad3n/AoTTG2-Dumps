// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchManifestDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200005F")]
public sealed class GisketchManifestDefinition
{
	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x10")]
	public int schemaVersion;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x18")]
	public string initialScreen;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x20")]
	public GisketchThemeDefinition theme;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x28")]
	public GisketchScreenDefinition[] screens;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x30")]
	public GisketchOverlayDefinition[] dialogs;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x38")]
	public GisketchOverlayDefinition[] popovers;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x40")]
	public GisketchTooltipDefinition[] tooltips;

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x5260D00", Offset = "0x525FD00", VA = "0x5260D00")]
	public static GisketchManifestDefinition FromJson(string json)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c (Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FromJson): 5 lines keep C-only constructs
		int iVar1;
		GisketchManifestDefinition pGVar2;
		Il2CppClass klass;
		ArgumentException __this;
		String message;
		MethodInfo lastManagedFrame;
		int iVar3;

		pGVar2 = JsonConvert.DeserializeObject<GisketchManifestDefinition>(json);
		if (pGVar2 == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Invalid Gisketch UI manifest JSON.");
			__this = new ArgumentException(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition_FromJson);
			throw (object)__this;
		}
		iVar1 = pGVar2.schemaVersion;
		iVar3 = 1;
		if (1 < iVar1) {
			iVar3 = iVar1;
		}
		pGVar2.schemaVersion = iVar3;
		return pGVar2;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x524E040", Offset = "0x524D040", VA = "0x524E040")]
	public GisketchScreenDefinition FindScreen(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c (Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindScreen): 3 lines keep C-only constructs
		GisketchScreenDefinition[] items;
		object @object;
		Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_StaticFields pGVar1;
		Func<GisketchScreenDefinition, string> __this_00;
		GisketchScreenDefinition pGVar2;

		items = this.screens;
		if ((typeof(GisketchManifestDefinition.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__8_0;
		}
		else {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__8_0;
		}
		if (__this_00 == null) {
			if (((typeof(GisketchManifestDefinition.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = il2cpp_codegen_object_new(typeof(Func<GisketchScreenDefinition, string>)) ;
			__this_00 = new Func<@object, @object>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition_c_FindScreen_b__8_0);
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			pGVar1.__9__8_0 = __this_00;
		}
		pGVar2 = GisketchManifestDefinition.FindById<GisketchScreenDefinition>((Object[])items, id, (System_Func_T__string__o)__this_00);
		return pGVar2;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x5258820", Offset = "0x5257820", VA = "0x5258820")]
	public GisketchOverlayDefinition FindDialog(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c (Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindDialog): 2 lines keep C-only constructs
		GisketchOverlayDefinition[] items;
		object @object;
		Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_StaticFields pGVar1;
		Func<GisketchOverlayDefinition, string> __this_00;
		GisketchOverlayDefinition pGVar2;

		items = this.dialogs;
		if ((typeof(GisketchManifestDefinition.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__9_0;
		}
		else {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__9_0;
		}
		if (__this_00 == null) {
			if (((typeof(GisketchManifestDefinition.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Func<GisketchOverlayDefinition, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition_c_FindDialog_b__9_0);
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			pGVar1.__9__9_0 = __this_00;
		}
		pGVar2 = GisketchManifestDefinition.FindById<GisketchOverlayDefinition>((Object[])items, id, (System_Func_T__string__o)__this_00);
		return pGVar2;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x5257A20", Offset = "0x5256A20", VA = "0x5257A20")]
	public GisketchOverlayDefinition FindPopover(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c (Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindPopover): 2 lines keep C-only constructs
		GisketchOverlayDefinition[] items;
		object @object;
		Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_StaticFields pGVar1;
		Func<GisketchOverlayDefinition, string> __this_00;
		GisketchOverlayDefinition pGVar2;

		items = this.popovers;
		if ((typeof(GisketchManifestDefinition.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__10_0;
		}
		else {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__10_0;
		}
		if (__this_00 == null) {
			if (((typeof(GisketchManifestDefinition.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Func<GisketchOverlayDefinition, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition_c_FindPopover_b__10_0);
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			pGVar1.__9__10_0 = __this_00;
		}
		pGVar2 = GisketchManifestDefinition.FindById<GisketchOverlayDefinition>((Object[])items, id, (System_Func_T__string__o)__this_00);
		return pGVar2;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5260DC0", Offset = "0x525FDC0", VA = "0x5260DC0")]
	public GisketchTooltipDefinition FindTooltip(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c (Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindTooltip): 2 lines keep C-only constructs
		GisketchTooltipDefinition[] items;
		object @object;
		Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_StaticFields pGVar1;
		Func<GisketchTooltipDefinition, string> __this_00;
		GisketchTooltipDefinition pGVar2;

		items = this.tooltips;
		if ((typeof(GisketchManifestDefinition.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__11_0;
		}
		else {
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			__this_00 = pGVar1.__9__11_0;
		}
		if (__this_00 == null) {
			if (((typeof(GisketchManifestDefinition.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Func<GisketchTooltipDefinition, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition_c_FindTooltip_b__11_0);
			pGVar1 = typeof(GisketchManifestDefinition.c).static_fields;
			pGVar1.__9__11_0 = __this_00;
		}
		pGVar2 = GisketchManifestDefinition.FindById<GisketchTooltipDefinition>((Object[])items, id, (System_Func_T__string__o)__this_00);
		return pGVar2;
	}

	[Token(Token = "0x600035F")]
	private static T FindById<T>(T[] items, string id, Func<T, string> getId) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x5260EE0", Offset = "0x525FEE0", VA = "0x5260EE0")]
	public GisketchManifestDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c (Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$.ctor): clean
		this.schemaVersion = 1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchManifestDefinition.c.

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindById<object>: 1 lines keep C-only constructs
	private static object FindById_object(Object[] items, String id, System_Func_T__string__o getId)
	{
		object pIVar1;
		bool bVar2;
		uint uVar3;
		ulong uVar4;
		String a;
		uint uVar5;
		ulong uVar6;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		if (items != null) {
			bVar2 = String.IsNullOrEmpty(id);
			if (bVar2) {
				return null;
			}
			uVar3 = (uint)items.Length;
			if (0 < (int)uVar3) {
				if (getId == null) {
					uVar5 = 0;
					while (uVar5 < uVar3) {
						if (items[(int)uVar5] != null) {
							throw new NullReferenceException();
						}
						uVar5 = uVar5 + 1;
						if ((int)uVar3 <= (int)uVar5) {
							return null;
						}
					}
	label_0363cac7: ;
					throw new IndexOutOfRangeException();
				}
				uVar4 = items.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar4 <= uVar6) goto label_0363cac7;
					pIVar1 = items[uVar6];
					if (pIVar1 != null) {
						a = (String)(*(code)getId.invoke_impl)(getId.method_code,pIVar1,getId.method);
						bVar2 = String.Equals(a, id, 5);
						if (bVar2) {
							return pIVar1;
						}
						uVar4 = (ulong)(uint)items.Length;
					}
					uVar6 = uVar6 + 1;
				} while ((long)uVar6 < (long)(int)uVar4);
			}
		}
		return null;
	}

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = new GisketchManifestDefinition.c();
		GisketchManifestDefinition.c.__9 =(GisketchManifestDefinition.c)__this;
		Il2CppCodeGenWriteBarrier(&GisketchManifestDefinition.c.__9) ;
		return;
	}

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindScreen>b__8_0: clean
	private String c__FindScreen_b__8_0(GisketchScreenDefinition item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item.id;
	}

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindDialog>b__9_0: clean
	private String c__FindDialog_b__9_0(GisketchOverlayDefinition item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item.id;
	}

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindPopover>b__10_0: clean
	private String c__FindPopover_b__10_0(GisketchOverlayDefinition item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item.id;
	}

	// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindTooltip>b__11_0: clean
	private String c__FindTooltip_b__11_0(GisketchTooltipDefinition item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item.id;
	}
}
