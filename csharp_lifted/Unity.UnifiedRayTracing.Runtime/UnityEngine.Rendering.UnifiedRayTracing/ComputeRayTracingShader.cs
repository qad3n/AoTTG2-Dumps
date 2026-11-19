// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingShader
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x678AEE0", Offset = "0x6789EE0", VA = "0x678AEE0")]
	internal ComputeRayTracingShader(ComputeShader shader, string dispatchFuncName, GraphicsBuffer dispatchBuffer)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x678B040", Offset = "0x678A040", VA = "0x678B040", Slot = "17")]
	public uint3 GetThreadGroupSizes()
	{
		return default(uint3);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x678B050", Offset = "0x678A050", VA = "0x678B050", Slot = "4")]
	public void SetAccelerationStructure(CommandBuffer cmd, string name, IRayTracingAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x678B0E0", Offset = "0x678A0E0", VA = "0x678B0E0", Slot = "5")]
	public void SetIntParam(CommandBuffer cmd, int nameID, int val)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x678B100", Offset = "0x678A100", VA = "0x678B100", Slot = "6")]
	public void SetFloatParam(CommandBuffer cmd, int nameID, float val)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x678B120", Offset = "0x678A120", VA = "0x678B120", Slot = "7")]
	public void SetVectorParam(CommandBuffer cmd, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x678B140", Offset = "0x678A140", VA = "0x678B140", Slot = "8")]
	public void SetMatrixParam(CommandBuffer cmd, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x678B160", Offset = "0x678A160", VA = "0x678B160", Slot = "9")]
	public void SetTextureParam(CommandBuffer cmd, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x678B190", Offset = "0x678A190", VA = "0x678B190", Slot = "10")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x678B1C0", Offset = "0x678A1C0", VA = "0x678B1C0", Slot = "11")]
	public void SetBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x678B1F0", Offset = "0x678A1F0", VA = "0x678B1F0", Slot = "14")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x678B220", Offset = "0x678A220", VA = "0x678B220", Slot = "15")]
	public void SetConstantBufferParam(CommandBuffer cmd, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x678B250", Offset = "0x678A250", VA = "0x678B250", Slot = "12")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, uint width, uint height, uint depth)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x678B420", Offset = "0x678A420", VA = "0x678B420", Slot = "13")]
	public void Dispatch(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x678B460", Offset = "0x678A460", VA = "0x678B460")]
	internal void SetIndirectDispatchDimensions(CommandBuffer cmd, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x678B540", Offset = "0x678A540", VA = "0x678B540")]
	internal void DispatchIndirect(CommandBuffer cmd, GraphicsBuffer scratchBuffer, GraphicsBuffer argsBuffer)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x678B400", Offset = "0x678A400", VA = "0x678B400", Slot = "16")]
	public ulong GetTraceScratchBufferRequiredSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}
}
