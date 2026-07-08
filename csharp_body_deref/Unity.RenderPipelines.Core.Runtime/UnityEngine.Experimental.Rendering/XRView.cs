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
	[Address(RVA = "0x4855540", Offset = "0x4855540", VA = "0x4855540")]
	internal XRView(Matrix4x4 projMatrix, Matrix4x4 viewMatrix, Rect viewport, Mesh occlusionMesh, int textureArraySlice)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4855890", Offset = "0x4855890", VA = "0x4855890")]
	private static Vector2 ComputeEyeCenterUV(Matrix4x4 proj)
	{
		return default(Vector2);
	}
}
