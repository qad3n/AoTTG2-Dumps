// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingBackend
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x678AE20", Offset = "0x6789E20", VA = "0x678AE20")]
	public ComputeRayTracingBackend(RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x678AE50", Offset = "0x6789E50", VA = "0x678AE50", Slot = "4")]
	public IRayTracingShader CreateRayTracingShader(Object shader, string kernelName, GraphicsBuffer dispatchBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x678AFA0", Offset = "0x6789FA0", VA = "0x678AFA0", Slot = "5")]
	public IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options, ReferenceCounter counter)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x678B010", Offset = "0x678A010", VA = "0x678B010", Slot = "6")]
	public ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
