using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x200018D")]
public class Texture2DAtlas
{
	[Token(Token = "0x200018E")]
	private enum BlitType
	{
		[Token(Token = "0x40006DC")]
		Default,
		[Token(Token = "0x40006DD")]
		CubeTo2DOctahedral,
		[Token(Token = "0x40006DE")]
		SingleChannel,
		[Token(Token = "0x40006DF")]
		CubeTo2DOctahedralSingleChannel
	}

	[Token(Token = "0x40006CC")]
	private protected const int kGPUTexInvalid = 0;

	[Token(Token = "0x40006CD")]
	private protected const int kGPUTexValidMip0 = 1;

	[Token(Token = "0x40006CE")]
	private protected const int kGPUTexValidMipAll = 2;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x10")]
	private protected RTHandle m_AtlasTexture;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x18")]
	private protected int m_Width;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x1C")]
	private protected int m_Height;

	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x20")]
	private protected GraphicsFormat m_Format;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x24")]
	private protected bool m_UseMipMaps;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x25")]
	private bool m_IsAtlasTextureOwner;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x28")]
	private AtlasAllocator m_AtlasAllocator;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, (Vector4 scaleOffset, Vector2Int size)> m_AllocationCache;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<int, int> m_IsGPUTextureUpToDate;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<int, int> m_TextureHashes;

	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector4 fullScaleOffset;

	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_MaxMipLevelPadding;

	[Token(Token = "0x17000149")]
	public static int maxMipLevelPadding
	{
		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x48C2560", Offset = "0x48C2560", VA = "0x48C2560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014A")]
	public RTHandle AtlasTexture
	{
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x48C25D0", Offset = "0x48C25D0", VA = "0x48C25D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x48C25E0", Offset = "0x48C25E0", VA = "0x48C25E0")]
	public Texture2DAtlas(int width, int height, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, bool powerOfTwoPadding = false, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x48C29C0", Offset = "0x48C29C0", VA = "0x48C29C0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x48C2A90", Offset = "0x48C2A90", VA = "0x48C2A90")]
	public void ResetAllocator()
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x48C2B40", Offset = "0x48C2B40", VA = "0x48C2B40")]
	public void ClearTarget(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x48C2950", Offset = "0x48C2950", VA = "0x48C2950")]
	private protected int GetTextureMipmapCount(int width, int height)
	{
		return default(int);
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x48C3070", Offset = "0x48C3070", VA = "0x48C3070")]
	private protected bool Is2D(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x48C3110", Offset = "0x48C3110", VA = "0x48C3110")]
	private protected bool IsSingleChannelBlit(Texture source, Texture destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x48C3360", Offset = "0x48C3360", VA = "0x48C3360")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x48C3E00", Offset = "0x48C3E00", VA = "0x48C3E00")]
	private protected void MarkGPUTextureValid(int instanceId, bool mipAreValid = false)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x48C3E60", Offset = "0x48C3E60", VA = "0x48C3E60")]
	private protected void MarkGPUTextureInvalid(int instanceId)
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x48C3EB0", Offset = "0x48C3EB0", VA = "0x48C3EB0", Slot = "4")]
	public virtual void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x48C42C0", Offset = "0x48C42C0", VA = "0x48C42C0", Slot = "5")]
	public virtual void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x48C42E0", Offset = "0x48C42E0", VA = "0x48C42E0", Slot = "6")]
	public virtual void BlitCubeTexture2D(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x48C4460", Offset = "0x48C4460", VA = "0x48C4460", Slot = "7")]
	public virtual bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x48C46F0", Offset = "0x48C46F0", VA = "0x48C46F0")]
	public bool AllocateTextureWithoutBlit(Texture texture, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x48C4750", Offset = "0x48C4750", VA = "0x48C4750", Slot = "8")]
	public virtual bool AllocateTextureWithoutBlit(int instanceId, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x48C4940", Offset = "0x48C4940", VA = "0x48C4940")]
	private protected int GetTextureHash(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x48C40C0", Offset = "0x48C40C0", VA = "0x48C40C0")]
	public int GetTextureID(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x48C49B0", Offset = "0x48C49B0", VA = "0x48C49B0")]
	public int GetTextureID(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x48C49F0", Offset = "0x48C49F0", VA = "0x48C49F0")]
	public bool IsCached(out Vector4 scaleOffset, Texture textureA, Texture textureB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x48C4B10", Offset = "0x48C4B10", VA = "0x48C4B10")]
	public bool IsCached(out Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x48C4AA0", Offset = "0x48C4AA0", VA = "0x48C4AA0")]
	public bool IsCached(out Vector4 scaleOffset, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x48C4B90", Offset = "0x48C4B90", VA = "0x48C4B90")]
	internal Vector2Int GetCachedTextureSize(int id)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x48C4C00", Offset = "0x48C4C00", VA = "0x48C4C00", Slot = "9")]
	public virtual bool NeedsUpdate(Texture texture, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x48C4E60", Offset = "0x48C4E60", VA = "0x48C4E60", Slot = "10")]
	public virtual bool NeedsUpdate(Texture textureA, Texture textureB, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x48C5310", Offset = "0x48C5310", VA = "0x48C5310", Slot = "11")]
	public virtual bool AddTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x48C5410", Offset = "0x48C5410", VA = "0x48C5410", Slot = "12")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture oldTexture, Texture newTexture, ref Vector4 scaleOffset, Vector4 sourceScaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x48C56C0", Offset = "0x48C56C0", VA = "0x48C56C0", Slot = "13")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture texture, ref Vector4 scaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x48C5770", Offset = "0x48C5770", VA = "0x48C5770")]
	internal bool EnsureTextureSlot(out bool isUploadNeeded, ref Vector4 scaleBias, int key, int width, int height)
	{
		return default(bool);
	}
}
