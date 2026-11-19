// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormDiscardActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E6")]
public static class GisketchFormDiscardActions
{
	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GameObject>> Actions;

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x52A3050", Offset = "0x52A2050", VA = "0x52A3050")]
	public static void Register(string overlayId, Action<GameObject> action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormDiscardActions.c (Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$Register): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;

		if (Il2CppMethodInitialized_07542bba == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFormDiscardActions)) ;
			Il2CppMethodInitialized_07542bba = true;
		}
		bVar1 = String.IsNullOrEmpty(overlayId);
		if ((action == null) || (bVar1)) {
			return;
		}
		__this = (Dictionary<object, object>)GisketchFormDiscardActions.Actions;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)overlayId, (object)action);
		return;
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x52A30F0", Offset = "0x52A20F0", VA = "0x52A30F0")]
	public static void Invoke(string overlayId, GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormDiscardActions.c (Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$Invoke): 2 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		object local_20;

		if (Il2CppMethodInitialized_07542bbb == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFormDiscardActions)) ;
			Il2CppMethodInitialized_07542bbb = true;
		}
		local_20 = null;
		bVar1 = String.IsNullOrEmpty(overlayId);
		if (!bVar1) {
			__this = (Dictionary<object, object>)GisketchFormDiscardActions.Actions;
			if (__this == null) {
	label_053a31a5: ;
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetValue((object)overlayId, ref local_20);
			if (bVar1) {
				if (local_20 == null) goto label_053a31a5;
				(*local_20[1].monitor)(local_20[4].klass,source,local_20[2].monitor);
			}
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormDiscardActions.c.

	// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$.cctor: 2 lines keep C-only constructs
	static GisketchFormDiscardActions()
	{
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, Action<GameObject>> __this;

		if (Il2CppMethodInitialized_07542bbc == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFormDiscardActions)) ;
			Il2CppMethodInitialized_07542bbc = true;
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
		__this = new Dictionary<string, Action<GameObject>>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		GisketchFormDiscardActions.Actions = __this;
		return;
	}
}
