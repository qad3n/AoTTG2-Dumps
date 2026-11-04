// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.NormalReconstruction
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x200022F")]
public static class NormalReconstruction
{
	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_NormalReconstructionMatrixID;

	[Token(Token = "0x4000D9A")]
	[FieldOffset(Offset = "0x8")]
	private static Matrix4x4[] s_NormalReconstructionMatrix;

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x2CDAD60", Offset = "0x2CD9360", VA = "0x182CDAD60")]
	public static void SetupProperties(CommandBuffer cmd, in CameraData cameraData)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x2CDA800", Offset = "0x2CD8E00", VA = "0x182CDA800")]
	public static void SetupProperties(RasterCommandBuffer cmd, in CameraData cameraData)
	{
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x2CDACD0", Offset = "0x2CD92D0", VA = "0x182CDACD0")]
	public static void SetupProperties(CommandBuffer cmd, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x2CDA880", Offset = "0x2CD8E80", VA = "0x182CDA880")]
	public static void SetupProperties(RasterCommandBuffer cmd, in UniversalCameraData cameraData)
	{
	}
}
