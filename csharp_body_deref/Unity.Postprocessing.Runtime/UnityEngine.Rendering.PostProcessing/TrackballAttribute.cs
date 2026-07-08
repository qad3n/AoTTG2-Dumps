using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000009")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public sealed class TrackballAttribute : Attribute
{
	[Token(Token = "0x200000A")]
	public enum Mode
	{
		[Token(Token = "0x4000012")]
		None,
		[Token(Token = "0x4000013")]
		Lift,
		[Token(Token = "0x4000014")]
		Gamma,
		[Token(Token = "0x4000015")]
		Gain
	}

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x10")]
	public readonly Mode mode;

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x480D620", Offset = "0x480D620", VA = "0x480D620")]
	public TrackballAttribute(Mode mode)
	{
	}
}
