// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingBackend
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000049")]
internal class ComputeRayTracingBackend : IRayTracingBackend
{
	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x10")]
	private readonly RayTracingResources m_Resources;

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ComputeRayTracingBackend(RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2D95BC0", Offset = "0x2D941C0", VA = "0x182D95BC0", Slot = "4")]
	public IRayTracingShader CreateRayTracingShader(Object shader, string kernelName, GraphicsBuffer dispatchBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x2D95B50", Offset = "0x2D94150", VA = "0x182D95B50", Slot = "5")]
	public IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options, ReferenceCounter counter)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x2D95D00", Offset = "0x2D94300", VA = "0x182D95D00", Slot = "6")]
	public ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
