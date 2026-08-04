// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Triangles
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Triangles.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Triangles.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4489970", Offset = "0x4489970", VA = "0x4489970")]
	private static bool HasMeshes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4489A40", Offset = "0x4489A40", VA = "0x4489A40")]
	private static void Cleanup()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4489BC0", Offset = "0x4489BC0", VA = "0x4489BC0")]
	private static Mesh[] GetMeshes(int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4489E10", Offset = "0x4489E10", VA = "0x4489E10")]
	private static Mesh GetMesh(int triCount, int triOffset, int totalWidth, int totalHeight)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x448A100", Offset = "0x448A100", VA = "0x448A100")]
	public Triangles()
	{
	}
}
