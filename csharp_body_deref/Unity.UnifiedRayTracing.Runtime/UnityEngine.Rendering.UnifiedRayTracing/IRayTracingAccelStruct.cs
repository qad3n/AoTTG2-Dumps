// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.IRayTracingAccelStruct
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200004F")]
public interface IRayTracingAccelStruct : IDisposable
{
	[Token(Token = "0x600015B")]
	int AddInstance(MeshInstanceDesc meshInstance);

	[Token(Token = "0x600015C")]
	void RemoveInstance(int instanceHandle);

	[Token(Token = "0x600015D")]
	void ClearInstances();

	[Token(Token = "0x600015E")]
	void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix);

	[Token(Token = "0x600015F")]
	void UpdateInstanceID(int instanceHandle, uint instanceID);

	[Token(Token = "0x6000160")]
	void UpdateInstanceMask(int instanceHandle, uint mask);

	[Token(Token = "0x6000161")]
	void Build(CommandBuffer cmd, GraphicsBuffer scratchBuffer);

	[Token(Token = "0x6000162")]
	ulong GetBuildScratchBufferRequiredSizeInBytes();
}
