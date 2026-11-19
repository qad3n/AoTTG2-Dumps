// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineRendererLifetime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineRendererLifetime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200049A")]
internal class CustomLogicLineRendererLifetime : MonoBehaviour
{
	[Token(Token = "0x40016AB")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicLineRendererBuiltin LineRenderer;

	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x58FEE10", Offset = "0x58FDE10", VA = "0x58FEE10")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererLifetime.c (CustomLogic.CustomLogicLineRendererLifetime$$OnDestroy): 2 lines keep C-only constructs
		CustomLogicLineRendererBuiltin __this_00;
		CustomLogicLineRendererBuiltin* targetAddress;

		__this_00 = this.LineRenderer;
		targetAddress = &this.LineRenderer;
		if (__this_00 != null) {
			__this_00.ReleaseResources();
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x58FEE40", Offset = "0x58FDE40", VA = "0x58FEE40")]
	public CustomLogicLineRendererLifetime()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererLifetime.c (CustomLogic.CustomLogicLineRendererLifetime$$.ctor): clean
		base();
		return;
	}
}
