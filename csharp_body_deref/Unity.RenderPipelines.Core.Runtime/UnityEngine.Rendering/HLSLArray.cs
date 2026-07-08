using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000172")]
[AttributeUsage(AttributeTargets.Field)]
public class HLSLArray : Attribute
{
	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x10")]
	public int arraySize;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x18")]
	public Type elementType;

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x48B9B80", Offset = "0x48B9B80", VA = "0x48B9B80")]
	public HLSLArray(int arraySize, Type elementType)
	{
	}
}
