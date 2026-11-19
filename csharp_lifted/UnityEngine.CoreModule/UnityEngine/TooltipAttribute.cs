// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TooltipAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200015A")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public class TooltipAttribute : PropertyAttribute
{
	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x18")]
	public readonly string tooltip;

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x690DCD0", Offset = "0x690CCD0", VA = "0x690DCD0")]
	public TooltipAttribute(string tooltip)
	{
	}
}
