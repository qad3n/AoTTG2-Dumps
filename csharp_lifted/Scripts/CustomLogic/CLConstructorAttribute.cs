// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLConstructorAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLConstructorAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000448")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Constructor)]
public sealed class CLConstructorAttribute : Attribute
{
	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x58A97B0", Offset = "0x58A87B0", VA = "0x58A97B0")]
	public CLConstructorAttribute()
	{
		// Lifted from source/cpp/CustomLogic/CLConstructorAttribute.c (CustomLogic.CLConstructorAttribute$$.ctor): clean
		base();
		return;
	}
}
