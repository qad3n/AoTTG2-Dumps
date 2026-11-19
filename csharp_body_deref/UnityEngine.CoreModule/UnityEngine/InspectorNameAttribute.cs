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

[Token(Token = "0x2000159")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
[UnityEngine.Scripting.UsedByNativeCode]
public class InspectorNameAttribute : PropertyAttribute
{
	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x18")]
	public readonly string displayName;

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x690DCA0", Offset = "0x690CCA0", VA = "0x690DCA0")]
	public InspectorNameAttribute(string displayName)
	{
	}
}
