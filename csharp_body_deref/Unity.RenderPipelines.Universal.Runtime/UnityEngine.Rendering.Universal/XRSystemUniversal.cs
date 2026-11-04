// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.XRSystemUniversal
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001FE")]
internal static class XRSystemUniversal
{
	[Token(Token = "0x4000C03")]
	[FieldOffset(Offset = "0x0")]
	private static Matrix4x4[] s_projMatrix;

	[Token(Token = "0x4000C04")]
	[FieldOffset(Offset = "0x8")]
	private static MaterialPropertyBlock s_XRSharedPropertyBlock;

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x2CC9AC0", Offset = "0x2CC80C0", VA = "0x182CC9AC0")]
	internal static MaterialPropertyBlock GetMaterialPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x2CC9930", Offset = "0x2CC7F30", VA = "0x182CC9930")]
	internal static void BeginLateLatching(Camera camera, XRPassUniversal xrPass)
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x2CC9A00", Offset = "0x2CC8000", VA = "0x182CC9A00")]
	internal static void EndLateLatching(Camera camera, XRPassUniversal xrPass)
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x2CC9D70", Offset = "0x2CC8370", VA = "0x182CC9D70")]
	internal static void UnmarkShaderProperties(RasterCommandBuffer cmd, XRPassUniversal xrPass)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x2CC9B10", Offset = "0x2CC8110", VA = "0x182CC9B10")]
	internal static void MarkShaderProperties(RasterCommandBuffer cmd, XRPassUniversal xrPass, bool renderIntoTexture)
	{
	}
}
