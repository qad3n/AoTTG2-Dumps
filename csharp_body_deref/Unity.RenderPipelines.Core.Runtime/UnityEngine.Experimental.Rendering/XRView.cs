// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRView
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000014")]
internal readonly struct XRView
{
	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Matrix4x4 projMatrix;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x40")]
	internal readonly Matrix4x4 viewMatrix;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x80")]
	internal readonly Matrix4x4 prevViewMatrix;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0xC0")]
	internal readonly Rect viewport;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0xD0")]
	internal readonly Mesh occlusionMesh;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0xD8")]
	internal readonly Mesh visibleMesh;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0xE0")]
	internal readonly int textureArraySlice;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0xE4")]
	internal readonly Vector2 eyeCenterUV;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0xEC")]
	internal readonly bool isPrevViewMatrixValid;

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2AD1E60", Offset = "0x2AD0460", VA = "0x182AD1E60")]
	internal XRView(Matrix4x4 projMatrix, Matrix4x4 viewMatrix, Matrix4x4 prevViewMatrix, bool isPrevViewMatrixValid, Rect viewport, Mesh occlusionMesh, Mesh visibleMesh, int textureArraySlice)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2AD1DA0", Offset = "0x2AD03A0", VA = "0x182AD1DA0")]
	private static Vector2 ComputeEyeCenterUV(Matrix4x4 proj)
	{
		return default(Vector2);
	}
}
