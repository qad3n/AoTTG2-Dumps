// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingShader
// Update status: NEW in this game update
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
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal HardwareRayTracingShader(RayTracingShader shader, string dispatchFuncName, GraphicsBuffer unused)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x2D96FE0", Offset = "0x2D955E0", VA = "0x182D96FE0", Slot = "17")]
	public uint3 GetThreadGroupSizes()
	{
		return default(uint3);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2D97000", Offset = "0x2D95600", VA = "0x182D97000", Slot = "4")]
	public void SetAccelerationStructure(CommandBuffer cmd, string name, IRayTracingAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2D971D0", Offset = "0x2D957D0", VA = "0x182D971D0", Slot = "5")]
	public void SetIntParam(CommandBuffer cmd, int nameID, int val)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x2D971A0", Offset = "0x2D957A0", VA = "0x182D971A0", Slot = "6")]
	public void SetFloatParam(CommandBuffer cmd, int nameID, float val)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2D972B0", Offset = "0x2D958B0", VA = "0x182D972B0", Slot = "7")]
	public void SetVectorParam(CommandBuffer cmd, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x2D97200", Offset = "0x2D95800", VA = "0x182D97200", Slot = "8")]
	public void SetMatrixParam(CommandBuffer cmd, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x2D97260", Offset = "0x2D95860", VA = "0x182D97260", Slot = "9")]
	public void SetTextureParam(CommandBuffer cmd, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x2D970E0", Offset = "0x2D956E0", VA = "0x182D970E0", Slot = "10")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x2D97110", Offset = "0x2D95710", VA = "0x182D97110", Slot = "11")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x2D97140", Offset = "0x2D95740", VA = "0x182D97140", Slot = "14")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2D97170", Offset = "0x2D95770", VA = "0x182D97170", Slot = "15")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2D96F50", Offset = "0x2D95550", VA = "0x182D96F50", Slot = "12")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, uint width, uint height, uint depth)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2D96FA0", Offset = "0x2D955A0", VA = "0x182D96FA0", Slot = "13")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "16")]
	public ulong GetTraceScratchBufferRequiredSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
