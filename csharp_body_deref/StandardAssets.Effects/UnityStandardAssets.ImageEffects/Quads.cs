using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200002C")]
internal class Quads
{
	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x0")]
	private static Mesh[] meshes;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x8")]
	private static int currentQuads;

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4160C10", Offset = "0x4160C10", VA = "0x4160C10")]
	private static bool HasMeshes()
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4160CD0", Offset = "0x4160CD0", VA = "0x4160CD0")]
	public static void Cleanup()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4160E50", Offset = "0x4160E50", VA = "0x4160E50")]
	public static Mesh[] GetMeshes(int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x41610A0", Offset = "0x41610A0", VA = "0x41610A0")]
	private static Mesh GetMesh(int triCount, int triOffset, int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4161440", Offset = "0x4161440", VA = "0x4161440")]
	public Quads()
	{
	}
}
