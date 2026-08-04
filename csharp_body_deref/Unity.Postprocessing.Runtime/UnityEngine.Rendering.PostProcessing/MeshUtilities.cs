// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.MeshUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000081")]
internal static class MeshUtilities
{
	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<PrimitiveType, Mesh> s_Primitives;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<Type, PrimitiveType> s_ColliderPrimitives;

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4B60AC0", Offset = "0x4B60AC0", VA = "0x4B60AC0")]
	static MeshUtilities()
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4B60C70", Offset = "0x4B60C70", VA = "0x4B60C70")]
	internal static Mesh GetColliderMesh(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4B60DA0", Offset = "0x4B60DA0", VA = "0x4B60DA0")]
	internal static Mesh GetPrimitive(PrimitiveType primitiveType)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4B60E80", Offset = "0x4B60E80", VA = "0x4B60E80")]
	private static Mesh GetBuiltinMesh(PrimitiveType primitiveType)
	{
		return null;
	}
}
