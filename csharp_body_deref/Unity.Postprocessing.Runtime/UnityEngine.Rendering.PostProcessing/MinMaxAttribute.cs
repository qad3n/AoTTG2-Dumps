// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.MinMaxAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000007")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public sealed class MinMaxAttribute : Attribute
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x10")]
	public readonly float min;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x14")]
	public readonly float max;

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4B32620", Offset = "0x4B32620", VA = "0x4B32620")]
	public MinMaxAttribute(float min, float max)
	{
	}
}
