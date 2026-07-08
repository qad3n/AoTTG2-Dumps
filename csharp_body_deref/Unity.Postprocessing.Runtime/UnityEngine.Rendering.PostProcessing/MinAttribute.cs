using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000006")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public sealed class MinAttribute : Attribute
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x10")]
	public readonly float min;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x480D500", Offset = "0x480D500", VA = "0x480D500")]
	public MinAttribute(float min)
	{
	}
}
