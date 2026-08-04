// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000019")]
internal readonly struct XRView
{
	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Matrix4x4 projMatrix;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x40")]
	internal readonly Matrix4x4 viewMatrix;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x80")]
	internal readonly Rect viewport;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x90")]
	internal readonly Mesh occlusionMesh;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x98")]
	internal readonly int textureArraySlice;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x9C")]
	internal readonly Vector2 eyeCenterUV;

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4B7A630", Offset = "0x4B7A630", VA = "0x4B7A630")]
	internal XRView(Matrix4x4 projMatrix, Matrix4x4 viewMatrix, Rect viewport, Mesh occlusionMesh, int textureArraySlice)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4B7A980", Offset = "0x4B7A980", VA = "0x4B7A980")]
	private static Vector2 ComputeEyeCenterUV(Matrix4x4 proj)
	{
		return default(Vector2);
	}
}
