// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.BuiltinTypeManagerAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/BuiltinTypeManagerAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000445")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class BuiltinTypeManagerAttribute : Attribute
{
	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x58A96A0", Offset = "0x58A86A0", VA = "0x58A96A0")]
	public BuiltinTypeManagerAttribute()
	{
		// Lifted from source/cpp/CustomLogic/BuiltinTypeManagerAttribute.c (CustomLogic.BuiltinTypeManagerAttribute$$.ctor): clean
		base();
		return;
	}
}
