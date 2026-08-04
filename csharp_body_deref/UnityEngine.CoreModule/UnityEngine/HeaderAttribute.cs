// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HeaderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200012F")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = true)]
public class HeaderAttribute : PropertyAttribute
{
	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x10")]
	public readonly string header;

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x4DF1F10", Offset = "0x4DF1F10", VA = "0x4DF1F10")]
	public HeaderAttribute(string header)
	{
	}
}
