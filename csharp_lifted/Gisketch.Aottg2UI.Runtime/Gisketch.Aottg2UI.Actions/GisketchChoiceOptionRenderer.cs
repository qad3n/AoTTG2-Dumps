// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchChoiceOptionRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DB")]
public static class GisketchChoiceOptionRenderer
{
	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GisketchChoiceOptionRenderContext>> Renderers;

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x529ED70", Offset = "0x529DD70", VA = "0x529ED70")]
	public static void Register(string key, Action<GisketchChoiceOptionRenderContext> renderer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchChoiceOptionRenderer.c (Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$Register): clean
		Dictionary<object, object> __this;
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(key);
		if ((renderer == null) || (bVar1)) {
			return;
		}
		__this = (Dictionary<object, object>)GisketchChoiceOptionRenderer.Renderers;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)key, (object)renderer);
		return;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x5297DF0", Offset = "0x5296DF0", VA = "0x5297DF0")]
	public static bool TryRender(string key, GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchChoiceOptionRenderer.c (Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$TryRender): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		bool bVar2;
		object local_20;

		local_20 = null;
		bVar1 = String.IsNullOrEmpty(key);
		if ((context != null) && (!bVar1)) {
			__this = (Dictionary<object, object>)GisketchChoiceOptionRenderer.Renderers;
			if (__this == null) {
	label_05397eb4: ;
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetValue((object)key, ref local_20);
			if (bVar1) {
				if (local_20 == null) goto label_05397eb4;
				(*local_20[1].monitor)(local_20[4].klass,context,local_20[2].monitor);
			}
			else {
			}
		}
		return bVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchChoiceOptionRenderer.c.

	// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$.cctor: 1 lines keep C-only constructs
	static GisketchChoiceOptionRenderer()
	{
		Dictionary<string, Action<GisketchChoiceOptionRenderContext>> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Action<GisketchChoiceOptionRenderContext>>));
		__this = new Dictionary<object, object>();
		GisketchChoiceOptionRenderer.Renderers = __this;
		return;
	}
}
