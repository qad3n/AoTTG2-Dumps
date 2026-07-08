using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200012D")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class RangeAttribute : PropertyAttribute
{
	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x10")]
	public readonly float min;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x14")]
	public readonly float max;

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x4ACA610", Offset = "0x4ACA610", VA = "0x4ACA610")]
	public RangeAttribute(float min, float max)
	{
	}
}
