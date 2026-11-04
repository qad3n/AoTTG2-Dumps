// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBufferHelpers
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.VFX;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001E")]
public struct CommandBufferHelpers
{
	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x0")]
	internal static RasterCommandBuffer rasterCmd;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x8")]
	internal static ComputeCommandBuffer computeCmd;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x10")]
	internal static UnsafeCommandBuffer unsafeCmd;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x2ABB270", Offset = "0x2AB9870", VA = "0x182ABB270")]
	public static RasterCommandBuffer GetRasterCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2ABB1E0", Offset = "0x2AB97E0", VA = "0x182ABB1E0")]
	public static ComputeCommandBuffer GetComputeCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2ABB2F0", Offset = "0x2AB98F0", VA = "0x182ABB2F0")]
	public static UnsafeCommandBuffer GetUnsafeCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
	public static CommandBuffer GetNativeCommandBuffer(UnsafeCommandBuffer baseBuffer)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2ABB380", Offset = "0x2AB9980", VA = "0x182ABB380")]
	public static void VFXManager_ProcessCameraCommand(Camera cam, UnsafeCommandBuffer cmd, VFXCameraXRSettings camXRSettings, CullingResults results)
	{
	}
}
