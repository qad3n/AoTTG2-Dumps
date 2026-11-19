// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingShader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200004D")]
internal class HardwareRayTracingShader : IRayTracingShader
{
	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x10")]
	private readonly RayTracingShader m_Shader;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x18")]
	private readonly string m_ShaderDispatchFuncName;

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x678BCE0", Offset = "0x678ACE0", VA = "0x678BCE0")]
	internal HardwareRayTracingShader(RayTracingShader shader, string dispatchFuncName, GraphicsBuffer unused)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x678BD80", Offset = "0x678AD80", VA = "0x678BD80", Slot = "17")]
	public uint3 GetThreadGroupSizes()
	{
		return default(uint3);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x678BD90", Offset = "0x678AD90", VA = "0x678BD90", Slot = "4")]
	public void SetAccelerationStructure(CommandBuffer cmd, string name, IRayTracingAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x678BE60", Offset = "0x678AE60", VA = "0x678BE60", Slot = "5")]
	public void SetIntParam(CommandBuffer cmd, int nameID, int val)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x678BE80", Offset = "0x678AE80", VA = "0x678BE80", Slot = "6")]
	public void SetFloatParam(CommandBuffer cmd, int nameID, float val)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x678BEA0", Offset = "0x678AEA0", VA = "0x678BEA0", Slot = "7")]
	public void SetVectorParam(CommandBuffer cmd, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x678BEC0", Offset = "0x678AEC0", VA = "0x678BEC0", Slot = "8")]
	public void SetMatrixParam(CommandBuffer cmd, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x678BEE0", Offset = "0x678AEE0", VA = "0x678BEE0", Slot = "9")]
	public void SetTextureParam(CommandBuffer cmd, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x678BF00", Offset = "0x678AF00", VA = "0x678BF00", Slot = "10")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x678BF20", Offset = "0x678AF20", VA = "0x678BF20", Slot = "11")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x678BF40", Offset = "0x678AF40", VA = "0x678BF40", Slot = "14")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x678BF70", Offset = "0x678AF70", VA = "0x678BF70", Slot = "15")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x678BFA0", Offset = "0x678AFA0", VA = "0x678BFA0", Slot = "12")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, uint width, uint height, uint depth)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x678BFD0", Offset = "0x678AFD0", VA = "0x678BFD0", Slot = "13")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x678C000", Offset = "0x678B000", VA = "0x678C000", Slot = "16")]
	public ulong GetTraceScratchBufferRequiredSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
