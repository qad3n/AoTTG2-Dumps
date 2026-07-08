using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000130")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class TextAreaAttribute : PropertyAttribute
{
	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x10")]
	public readonly int minLines;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x14")]
	public readonly int maxLines;

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x4ACA6A0", Offset = "0x4ACA6A0", VA = "0x4ACA6A0")]
	public TextAreaAttribute(int minLines, int maxLines)
	{
	}
}
