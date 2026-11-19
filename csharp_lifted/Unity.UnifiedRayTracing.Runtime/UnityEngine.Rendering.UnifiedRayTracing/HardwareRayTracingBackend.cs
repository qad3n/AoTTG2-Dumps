// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingBackend
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x678BC10", Offset = "0x678AC10", VA = "0x678BC10")]
	public HardwareRayTracingBackend(RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x678BC40", Offset = "0x678AC40", VA = "0x678BC40", Slot = "4")]
	public IRayTracingShader CreateRayTracingShader(Object shader, string kernelName, GraphicsBuffer dispatchBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x678BD20", Offset = "0x678AD20", VA = "0x678BD20", Slot = "5")]
	public IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options, ReferenceCounter counter)
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x678BD70", Offset = "0x678AD70", VA = "0x678BD70", Slot = "6")]
	public ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
