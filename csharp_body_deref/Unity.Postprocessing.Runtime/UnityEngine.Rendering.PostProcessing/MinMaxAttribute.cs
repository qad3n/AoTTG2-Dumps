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
	[Address(RVA = "0x480D530", Offset = "0x480D530", VA = "0x480D530")]
	public MinMaxAttribute(float min, float max)
	{
	}
}
