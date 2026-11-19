// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawSystem
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66139D0", Offset = "0x66129D0", VA = "0x66139D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x66139E0", Offset = "0x66129E0", VA = "0x66139E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x660D9C0", Offset = "0x660C9C0", VA = "0x660D9C0")]
	public DecalDrawSystem(string sampler, DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x66139F0", Offset = "0x66129F0", VA = "0x66139F0")]
	public void Execute(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x660DFB0", Offset = "0x660CFB0", VA = "0x660DFB0")]
	internal void Execute(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x6613C60", Offset = "0x6612C60", VA = "0x6613C60", Slot = "4")]
	protected virtual Material GetMaterial(DecalEntityChunk decalEntityChunk)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	protected abstract int GetPassIndex(DecalCachedChunk decalCachedChunk);

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x6613AF0", Offset = "0x6612AF0", VA = "0x6613AF0")]
	private void Execute(RasterCommandBuffer cmd, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int count)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x6613F30", Offset = "0x6612F30", VA = "0x6613F30")]
	private void Draw(RasterCommandBuffer cmd, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int passIndex)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x6613C80", Offset = "0x6612C80", VA = "0x6613C80")]
	private void DrawInstanced(RasterCommandBuffer cmd, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int passIndex)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x6614330", Offset = "0x6613330", VA = "0x6614330")]
	public void Execute(in CameraData cameraData)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x6614540", Offset = "0x6613540", VA = "0x6614540")]
	private void Execute(in CameraData cameraData, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk, int count)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x66149A0", Offset = "0x66139A0", VA = "0x66149A0")]
	private void Draw(in CameraData cameraData, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x66146A0", Offset = "0x66136A0", VA = "0x66146A0")]
	private void DrawInstanced(in CameraData cameraData, DecalEntityChunk decalEntityChunk, DecalCachedChunk decalCachedChunk, DecalDrawCallChunk decalDrawCallChunk)
	{
	}
}
