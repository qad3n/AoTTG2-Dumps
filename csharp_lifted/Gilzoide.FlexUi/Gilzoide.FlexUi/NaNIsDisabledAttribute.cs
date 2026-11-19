// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.NaNIsDisabledAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/NaNIsDisabledAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000006")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public class NaNIsDisabledAttribute : PropertyAttribute
{
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x5216970", Offset = "0x5215970", VA = "0x5216970")]
	public NaNIsDisabledAttribute()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/NaNIsDisabledAttribute.c (Gilzoide.FlexUi.NaNIsDisabledAttribute$$.ctor): clean
		base();
		return;
	}
}
