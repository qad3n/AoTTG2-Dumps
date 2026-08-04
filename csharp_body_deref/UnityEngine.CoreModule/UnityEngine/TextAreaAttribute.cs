// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextAreaAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000133")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class TextAreaAttribute : PropertyAttribute
{
	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x10")]
	public readonly int minLines;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x14")]
	public readonly int maxLines;

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x4DF1FD0", Offset = "0x4DF1FD0", VA = "0x4DF1FD0")]
	public TextAreaAttribute(int minLines, int maxLines)
	{
	}
}
