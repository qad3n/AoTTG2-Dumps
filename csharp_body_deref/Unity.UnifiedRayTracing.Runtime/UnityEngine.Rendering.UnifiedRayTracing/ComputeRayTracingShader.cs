// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingShader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200004A")]
internal class ComputeRayTracingShader : IRayTracingShader
{
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10")]
	private readonly ComputeShader m_Shader;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	private readonly int m_KernelIndex;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int m_ComputeIndirectDispatchDimsKernelIndex;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x20")]
	private uint3 m_ThreadGroupSizes;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x30")]
	private readonly GraphicsBuffer m_DispatchBuffer;

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x2D965B0", Offset = "0x2D94BB0", VA = "0x182D965B0")]
	internal ComputeRayTracingShader(ComputeShader shader, string dispatchFuncName, GraphicsBuffer dispatchBuffer)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x2D961A0", Offset = "0x2D947A0", VA = "0x182D961A0", Slot = "17")]
	public uint3 GetThreadGroupSizes()
	{
		return default(uint3);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x2D961C0", Offset = "0x2D947C0", VA = "0x182D961C0", Slot = "4")]
	public void SetAccelerationStructure(CommandBuffer cmd, string name, IRayTracingAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x2D96480", Offset = "0x2D94A80", VA = "0x182D96480", Slot = "5")]
	public void SetIntParam(CommandBuffer cmd, int nameID, int val)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x2D96350", Offset = "0x2D94950", VA = "0x182D96350", Slot = "6")]
	public void SetFloatParam(CommandBuffer cmd, int nameID, float val)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2D96570", Offset = "0x2D94B70", VA = "0x182D96570", Slot = "7")]
	public void SetVectorParam(CommandBuffer cmd, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2D964B0", Offset = "0x2D94AB0", VA = "0x182D964B0", Slot = "8")]
	public void SetMatrixParam(CommandBuffer cmd, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x2D96510", Offset = "0x2D94B10", VA = "0x182D96510", Slot = "9")]
	public void SetTextureParam(CommandBuffer cmd, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x2D96270", Offset = "0x2D94870", VA = "0x182D96270", Slot = "10")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2D962B0", Offset = "0x2D948B0", VA = "0x182D962B0", Slot = "11")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x2D962F0", Offset = "0x2D948F0", VA = "0x182D962F0", Slot = "14")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x2D96320", Offset = "0x2D94920", VA = "0x182D96320", Slot = "15")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x2D95FE0", Offset = "0x2D945E0", VA = "0x182D95FE0", Slot = "12")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, uint width, uint height, uint depth)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x2D95E20", Offset = "0x2D94420", VA = "0x182D95E20", Slot = "13")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x2D96380", Offset = "0x2D94980", VA = "0x182D96380")]
	internal void SetIndirectDispatchDimensions(CommandBuffer cmd, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x2D95D20", Offset = "0x2D94320", VA = "0x182D95D20")]
	internal void DispatchIndirect(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x2D95D00", Offset = "0x2D94300", VA = "0x182D95D00", Slot = "16")]
	public ulong GetTraceScratchBufferRequiredSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
