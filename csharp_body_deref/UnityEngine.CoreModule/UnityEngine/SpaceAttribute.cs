using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200012B")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = true)]
public class SpaceAttribute : PropertyAttribute
{
	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x10")]
	public readonly float height;

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x4ACA590", Offset = "0x4ACA590", VA = "0x4ACA590")]
	public SpaceAttribute()
	{
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x4ACA5B0", Offset = "0x4ACA5B0", VA = "0x4ACA5B0")]
	public SpaceAttribute(float height)
	{
	}
}
