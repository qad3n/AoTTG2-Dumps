// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.BLASPositionsPool
// Update status: NEW in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x2D846E0", Offset = "0x2D82CE0", VA = "0x182D846E0")]
	public BLASPositionsPool(ComputeShader copyPositionsShader, ComputeShader copyShader)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2D84630", Offset = "0x2D82C30", VA = "0x182D84630", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2D84570", Offset = "0x2D82B70", VA = "0x182D84570")]
	public void Clear()
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x2D84100", Offset = "0x2D82700", VA = "0x182D84100")]
	public void Add(VertexBufferChunk info, out BlockAllocator.Allocation verticesAllocation)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x2D84660", Offset = "0x2D82C60", VA = "0x182D84660")]
	public void Remove(ref BlockAllocator.Allocation verticesAllocation)
	{
	}
}
