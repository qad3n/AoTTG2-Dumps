using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000005")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public sealed class MaxAttribute : Attribute
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	public readonly float max;

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x480D4D0", Offset = "0x480D4D0", VA = "0x480D4D0")]
	public MaxAttribute(float max)
	{
	}
}
