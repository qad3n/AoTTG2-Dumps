// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Quads
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Quads.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Quads.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4485D10", Offset = "0x4485D10", VA = "0x4485D10")]
	private static bool HasMeshes()
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4485DD0", Offset = "0x4485DD0", VA = "0x4485DD0")]
	public static void Cleanup()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4485F50", Offset = "0x4485F50", VA = "0x4485F50")]
	public static Mesh[] GetMeshes(int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x44861A0", Offset = "0x44861A0", VA = "0x44861A0")]
	private static Mesh GetMesh(int triCount, int triOffset, int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4486540", Offset = "0x4486540", VA = "0x4486540")]
	public Quads()
	{
	}
}
