// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.BLASPositionsPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000044")]
internal sealed class BLASPositionsPool : IDisposable
{
	[Token(Token = "0x4000194")]
	public const int VertexSizeInDwords = 3;

	[Token(Token = "0x4000195")]
	private const int intialVertexCount = 1000;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x10")]
	private GraphicsBuffer m_VerticesBuffer;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x18")]
	private BlockAllocator m_VerticesAllocator;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x38")]
	private readonly ComputeShader m_CopyPositionsShader;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x40")]
	private readonly int m_CopyVerticesKernel;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x48")]
	private readonly ComputeShader m_CopyShader;

	[Token(Token = "0x400019B")]
	private const uint kItemsPerWorkgroup = 6144u;

	[Token(Token = "0x1700001E")]
	public GraphicsBuffer VertexBuffer
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x6786D50", Offset = "0x6785D50", VA = "0x6786D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x6786C30", Offset = "0x6785C30", VA = "0x6786C30")]
	public BLASPositionsPool(ComputeShader copyPositionsShader, ComputeShader copyShader)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x6786D20", Offset = "0x6785D20", VA = "0x6786D20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x6786D60", Offset = "0x6785D60", VA = "0x6786D60")]
	public void Clear()
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x6786E10", Offset = "0x6785E10", VA = "0x6786E10")]
	public void Add(VertexBufferChunk info, out BlockAllocator.Allocation verticesAllocation)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x67871E0", Offset = "0x67861E0", VA = "0x67871E0")]
	public void Remove(ref BlockAllocator.Allocation verticesAllocation)
	{
	}
}
