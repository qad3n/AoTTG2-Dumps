using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200012E")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class MinAttribute : PropertyAttribute
{
	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x10")]
	public readonly float min;

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x4ACA650", Offset = "0x4ACA650", VA = "0x4ACA650")]
	public MinAttribute(float min)
	{
	}
}
