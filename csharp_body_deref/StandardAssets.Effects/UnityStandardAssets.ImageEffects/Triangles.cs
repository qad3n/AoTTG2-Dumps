using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200003C")]
internal class Triangles
{
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x0")]
	private static Mesh[] meshes;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x8")]
	private static int currentTris;

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4164870", Offset = "0x4164870", VA = "0x4164870")]
	private static bool HasMeshes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4164940", Offset = "0x4164940", VA = "0x4164940")]
	private static void Cleanup()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4164AC0", Offset = "0x4164AC0", VA = "0x4164AC0")]
	private static Mesh[] GetMeshes(int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4164D10", Offset = "0x4164D10", VA = "0x4164D10")]
	private static Mesh GetMesh(int triCount, int triOffset, int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4165000", Offset = "0x4165000", VA = "0x4165000")]
	public Triangles()
	{
	}
}
