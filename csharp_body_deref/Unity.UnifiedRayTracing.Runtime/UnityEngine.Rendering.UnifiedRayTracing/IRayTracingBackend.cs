// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.IRayTracingBackend
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000050")]
internal interface IRayTracingBackend
{
	[Token(Token = "0x6000163")]
	IRayTracingShader CreateRayTracingShader(Object shader, string kernelName, GraphicsBuffer dispatchBuffer);

	[Token(Token = "0x6000164")]
	IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options, ReferenceCounter counter);

	[Token(Token = "0x6000165")]
	ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth);
}
