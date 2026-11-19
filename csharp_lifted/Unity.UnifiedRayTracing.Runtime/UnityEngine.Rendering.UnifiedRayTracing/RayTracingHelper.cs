// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.RayTracingHelper
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x678C2C0", Offset = "0x678B2C0", VA = "0x678C2C0")]
	public static GraphicsBuffer CreateDispatchIndirectBuffer()
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x678C6C0", Offset = "0x678B6C0", VA = "0x678C6C0")]
	public static GraphicsBuffer CreateScratchBufferForBuildAndDispatch(IRayTracingAccelStruct accelStruct, IRayTracingShader shader, uint dispatchWidth, uint dispatchHeight, uint dispatchDepth)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x678C8A0", Offset = "0x678B8A0", VA = "0x678C8A0")]
	public static GraphicsBuffer CreateScratchBufferForBuild(IRayTracingAccelStruct accelStruct)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x678C990", Offset = "0x678B990", VA = "0x678C990")]
	public static GraphicsBuffer CreateScratchBufferForTrace(IRayTracingShader shader, uint dispatchWidth, uint dispatchHeight, uint dispatchDepth)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x678CAA0", Offset = "0x678BAA0", VA = "0x678CAA0")]
	public static void ResizeScratchBufferForTrace(IRayTracingShader shader, uint dispatchWidth, uint dispatchHeight, uint dispatchDepth, ref GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x678CC10", Offset = "0x678BC10", VA = "0x678CC10")]
	public static void ResizeScratchBufferForBuild(IRayTracingAccelStruct accelStruct, ref GraphicsBuffer scratchBuffer)
	{
	}
}
