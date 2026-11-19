// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLCallbackAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLCallbackAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000447")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Method)]
internal class CLCallbackAttribute : CLBaseAttribute
{
	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x58A9760", Offset = "0x58A8760", VA = "0x58A9760")]
	public CLCallbackAttribute()
	{
		// Lifted from source/cpp/CustomLogic/CLCallbackAttribute.c (CustomLogic.CLCallbackAttribute$$.ctor): clean
		this._Name_k__BackingField = "";
		base();
		return;
	}
}
