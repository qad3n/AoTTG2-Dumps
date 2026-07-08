using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000004")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public sealed class DisplayNameAttribute : Attribute
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	public readonly string displayName;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x480D4A0", Offset = "0x480D4A0", VA = "0x480D4A0")]
	public DisplayNameAttribute(string displayName)
	{
	}
}
