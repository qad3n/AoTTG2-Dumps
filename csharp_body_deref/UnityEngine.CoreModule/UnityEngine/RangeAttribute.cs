// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RangeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200015D")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class RangeAttribute : PropertyAttribute
{
	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x14")]
	public readonly float min;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x18")]
	public readonly float max;

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x690DD80", Offset = "0x690CD80", VA = "0x690DD80")]
	public RangeAttribute(float min, float max)
	{
	}
}
