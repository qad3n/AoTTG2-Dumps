// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.RayTracingHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000057")]
public static class RayTracingHelper
{
	[Token(Token = "0x40001DF")]
	public const GraphicsBuffer.Target ScratchBufferTarget = GraphicsBuffer.Target.Structured;

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2D979D0", Offset = "0x2D95FD0", VA = "0x182D979D0")]
	public static GraphicsBuffer CreateDispatchIndirectBuffer()
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2D97A30", Offset = "0x2D96030", VA = "0x182D97A30")]
	public static GraphicsBuffer CreateScratchBufferForBuildAndDispatch(IRayTracingAccelStruct accelStruct, IRayTracingShader shader, uint dispatchWidth, uint dispatchHeight, uint dispatchDepth)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x2D97B50", Offset = "0x2D96150", VA = "0x182D97B50")]
	public static GraphicsBuffer CreateScratchBufferForBuild(IRayTracingAccelStruct accelStruct)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2D97C00", Offset = "0x2D96200", VA = "0x182D97C00")]
	public static GraphicsBuffer CreateScratchBufferForTrace(IRayTracingShader shader, uint dispatchWidth, uint dispatchHeight, uint dispatchDepth)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2D97DC0", Offset = "0x2D963C0", VA = "0x182D97DC0")]
	public static void ResizeScratchBufferForTrace(IRayTracingShader shader, uint dispatchWidth, uint dispatchHeight, uint dispatchDepth, ref GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2D97CC0", Offset = "0x2D962C0", VA = "0x182D97CC0")]
	public static void ResizeScratchBufferForBuild(IRayTracingAccelStruct accelStruct, ref GraphicsBuffer scratchBuffer)
	{
	}
}
