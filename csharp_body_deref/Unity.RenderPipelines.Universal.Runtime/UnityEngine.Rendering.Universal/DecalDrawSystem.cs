// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000085")]
internal abstract class DecalDrawSystem
{
	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly uint MaxBatchSize;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x10")]
	protected DecalEntityManager m_EntityManager;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x18")]
	private Matrix4x4[] m_WorldToDecals;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x20")]
	private Matrix4x4[] m_NormalToDecals;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x28")]
	private float[] m_DecalLayerMasks;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x30")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x170000DF")]
	public Material overrideMaterial
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2C1E540", Offset = "0x2C1CB40", VA = "0x182C1E540")]
	public DecalDrawSystem(string sampler, DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x2C1DAC0", Offset = "0x2C1C0C0", VA = "0x182C1DAC0")]
	public void Execute(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2C1E1A0", Offset = "0x2C1C7A0", VA = "0x182C1E1A0")]
	internal void Execute(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2C1E4E0", Offset = "0x2C1CAE0", VA = "0x182C1E4E0", Slot = "4")]
	protected virtual Material GetMaterial(DecalEntityChunk decalEntityChunk)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	protected abstract int GetPassIndex(DecalCachedChunk decalCachedChunk);

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2C1DD00", Offset = "0x2C1C300", VA = "0x182C1DD00")]
	private void Execute(RasterCommandBuffer cmd, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int count)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2C1D4F0", Offset = "0x2C1BAF0", VA = "0x182C1D4F0")]
	private void Draw(RasterCommandBuffer cmd, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int passIndex)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2C1D1F0", Offset = "0x2C1B7F0", VA = "0x182C1D1F0")]
	private void DrawInstanced(RasterCommandBuffer cmd, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int passIndex)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2C1DE90", Offset = "0x2C1C490", VA = "0x182C1DE90")]
	public void Execute(in CameraData cameraData)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2C1DB90", Offset = "0x2C1C190", VA = "0x182C1DB90")]
	private void Execute(in CameraData cameraData, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int count)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2C1D7A0", Offset = "0x2C1BDA0", VA = "0x182C1D7A0")]
	private void Draw(in CameraData cameraData, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2C1CE80", Offset = "0x2C1B480", VA = "0x182C1CE80")]
	private void DrawInstanced(in CameraData cameraData, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk)
	{
	}
}
