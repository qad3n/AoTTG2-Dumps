// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchComponentRegistry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchComponentRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000AA")]
public sealed class GisketchComponentRegistry
{
	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchComponentRegistry Default;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GisketchComponentFactory> _factories;

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x526B2F0", Offset = "0x526A2F0", VA = "0x526B2F0")]
	public void Register(string type, GisketchComponentFactory factory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchComponentRegistry.c (Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$Register): clean
		Dictionary<object, object> __this_00;
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(type);
		if ((factory == null) || (bVar1)) {
			return;
		}
		__this_00 = (Dictionary<object, object>)this._factories;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)type, (object)factory);
		return;
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x527B730", Offset = "0x527A730", VA = "0x527B730")]
	public bool TryBuild(string type, GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchComponentRegistry.c (Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$TryBuild): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		byte uVar2;
		object pIStack_40;
		GisketchView pGStack_38;

		pGStack_38 = view;
		pIStack_40 = null;
		uVar2 = 0;
		bVar1 = String.IsNullOrEmpty(type);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._factories;
			if (__this_00 == null) {
	label_0537b7e9: ;
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)type, ref pIStack_40);
			if (bVar1) {
				if (pIStack_40 == null) goto label_0537b7e9;
				uVar2 = (*pIStack_40[1].monitor)(pIStack_40[4].klass,go,node,context,pGStack_38,pIStack_40[2].monitor);
			}
			else {
				uVar2 = 0;
			}
		}
		return (bool)uVar2;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x527B7F0", Offset = "0x527A7F0", VA = "0x527B7F0")]
	public GisketchComponentRegistry()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchComponentRegistry.c (Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.ctor): 2 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, GisketchComponentFactory> __this_00;

		if (Il2CppMethodInitialized_07542aaf == false) {
			Il2CppMethodInitialized_07542aaf = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, GisketchComponentFactory>));
		__this_00 = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._factories = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchComponentRegistry.c.

	// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.cctor: 1 lines keep C-only constructs
	static GisketchComponentRegistry()
	{
		GisketchComponentRegistry __this;

		if (Il2CppMethodInitialized_07542ab0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07542ab0 = true;
		}
		__this = new GisketchComponentRegistry();
		GisketchComponentRegistry.Default = __this;
		return;
	}
}
