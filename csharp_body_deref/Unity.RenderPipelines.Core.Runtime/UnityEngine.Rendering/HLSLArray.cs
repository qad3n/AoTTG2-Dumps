// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.HLSLArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4BDEC20", Offset = "0x4BDEC20", VA = "0x4BDEC20")]
	public HLSLArray(int arraySize, Type elementType)
	{
	}
}
