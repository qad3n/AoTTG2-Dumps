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
	[Address(RVA = "0x483B9D0", Offset = "0x483B9D0", VA = "0x483B9D0")]
	static MeshUtilities()
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x483BB80", Offset = "0x483BB80", VA = "0x483BB80")]
	internal static Mesh GetColliderMesh(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x483BCB0", Offset = "0x483BCB0", VA = "0x483BCB0")]
	internal static Mesh GetPrimitive(PrimitiveType primitiveType)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x483BD90", Offset = "0x483BD90", VA = "0x483BD90")]
	private static Mesh GetBuiltinMesh(PrimitiveType primitiveType)
	{
		return null;
	}
}
