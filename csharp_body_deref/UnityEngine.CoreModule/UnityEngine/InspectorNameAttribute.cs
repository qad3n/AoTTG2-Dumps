// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InspectorNameAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000158")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public class InspectorNameAttribute : PropertyAttribute
{
	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x18")]
	public readonly string displayName;

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x2F1B750", Offset = "0x2F19D50", VA = "0x182F1B750")]
	public InspectorNameAttribute(string displayName)
	{
	}
}
