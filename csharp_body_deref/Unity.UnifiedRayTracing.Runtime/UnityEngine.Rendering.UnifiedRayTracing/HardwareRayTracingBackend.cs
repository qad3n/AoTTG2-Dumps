// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingBackend
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200004C")]
internal class HardwareRayTracingBackend : IRayTracingBackend
{
	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x10")]
	private readonly RayTracingResources m_Resources;

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public HardwareRayTracingBackend(RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x2D96E90", Offset = "0x2D95490", VA = "0x182D96E90", Slot = "4")]
	public IRayTracingShader CreateRayTracingShader(Object shader, string kernelName, GraphicsBuffer dispatchBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x2D96D00", Offset = "0x2D95300", VA = "0x182D96D00", Slot = "5")]
	public IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options, ReferenceCounter counter)
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	public ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
