// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.IRayTracingShader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000051")]
public interface IRayTracingShader
{
	[Token(Token = "0x6000166")]
	void SetAccelerationStructure(CommandBuffer cmd, string name, IRayTracingAccelStruct accelStruct);

	[Token(Token = "0x6000167")]
	void SetIntParam(CommandBuffer cmd, int nameID, int val);

	[Token(Token = "0x6000168")]
	void SetFloatParam(CommandBuffer cmd, int nameID, float val);

	[Token(Token = "0x6000169")]
	void SetVectorParam(CommandBuffer cmd, int nameID, Vector4 val);

	[Token(Token = "0x600016A")]
	void SetMatrixParam(CommandBuffer cmd, int nameID, Matrix4x4 val);

	[Token(Token = "0x600016B")]
	void SetTextureParam(CommandBuffer cmd, int nameID, RenderTargetIdentifier rt);

	[Token(Token = "0x600016C")]
	void SetBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer);

	[Token(Token = "0x600016D")]
	void SetBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer);

	[Token(Token = "0x600016E")]
	void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, uint width, uint height, uint depth);

	[Token(Token = "0x600016F")]
	void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer);

	[Token(Token = "0x6000170")]
	void SetConstantBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x6000171")]
	void SetConstantBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x6000172")]
	ulong GetTraceScratchBufferRequiredSizeInBytes(uint width, uint height, uint depth);

	[Token(Token = "0x6000173")]
	uint3 GetThreadGroupSizes();
}
