// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceDataBufferGrower
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200006E")]
internal struct GPUInstanceDataBufferGrower : IDisposable
{
	[Token(Token = "0x200006F")]
	private static class CopyInstancesKernelIDs
	{
		[Token(Token = "0x40001F8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _InputValidComponentCounts;

		[Token(Token = "0x40001F9")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _InstanceCounts;

		[Token(Token = "0x40001FA")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _InstanceOffset;

		[Token(Token = "0x40001FB")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _OutputInstanceOffset;

		[Token(Token = "0x40001FC")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _ValidComponentIndices;

		[Token(Token = "0x40001FD")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _ComponentByteCounts;

		[Token(Token = "0x40001FE")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _InputComponentAddresses;

		[Token(Token = "0x40001FF")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _OutputComponentAddresses;

		[Token(Token = "0x4000200")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _InputComponentInstanceIndexRanges;

		[Token(Token = "0x4000201")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _InputBuffer;

		[Token(Token = "0x4000202")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _OutputBuffer;
	}

	[Token(Token = "0x2000070")]
	public struct GPUResources : IDisposable
	{
		[Token(Token = "0x4000203")]
		[FieldOffset(Offset = "0x0")]
		public ComputeShader cs;

		[Token(Token = "0x4000204")]
		[FieldOffset(Offset = "0x8")]
		public int kernelId;

		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x65D33A0", Offset = "0x65D23A0", VA = "0x65D33A0")]
		public void LoadShaders(GPUResidentDrawerResources resources)
		{
		}

		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x65D3180", Offset = "0x65D2180", VA = "0x65D3180")]
		public void CreateResources()
		{
		}

		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x65D3440", Offset = "0x65D2440", VA = "0x65D3440", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x0")]
	private GPUInstanceDataBuffer m_SrcBuffer;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x8")]
	private GPUInstanceDataBuffer m_DstBuffer;

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x65D2AB0", Offset = "0x65D1AB0", VA = "0x65D2AB0")]
	public GPUInstanceDataBufferGrower(GPUInstanceDataBuffer sourceBuffer, in InstanceNumInfo instanceNumInfo)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x65D2D20", Offset = "0x65D1D20", VA = "0x65D2D20")]
	public GPUInstanceDataBuffer SubmitToGpu(ref GPUResources gpuResources)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x65D3190", Offset = "0x65D2190", VA = "0x65D3190", Slot = "4")]
	public void Dispose()
	{
	}
}
