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

[Token(Token = "0x2000130")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class RangeAttribute : PropertyAttribute
{
	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x10")]
	public readonly float min;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x14")]
	public readonly float max;

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x4DF1F40", Offset = "0x4DF1F40", VA = "0x4DF1F40")]
	public RangeAttribute(float min, float max)
	{
	}
}
