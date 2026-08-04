// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Texture2DAtlas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4BE75D0", Offset = "0x4BE75D0", VA = "0x4BE75D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014A")]
	public RTHandle AtlasTexture
	{
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x4BE7640", Offset = "0x4BE7640", VA = "0x4BE7640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x4BE7650", Offset = "0x4BE7650", VA = "0x4BE7650")]
	public Texture2DAtlas(int width, int height, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, bool powerOfTwoPadding = false, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x4BE7A30", Offset = "0x4BE7A30", VA = "0x4BE7A30")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x4BE7B00", Offset = "0x4BE7B00", VA = "0x4BE7B00")]
	public void ResetAllocator()
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x4BE7BB0", Offset = "0x4BE7BB0", VA = "0x4BE7BB0")]
	public void ClearTarget(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x4BE79C0", Offset = "0x4BE79C0", VA = "0x4BE79C0")]
	private protected int GetTextureMipmapCount(int width, int height)
	{
		return default(int);
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x4BE80E0", Offset = "0x4BE80E0", VA = "0x4BE80E0")]
	private protected bool Is2D(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4BE8180", Offset = "0x4BE8180", VA = "0x4BE8180")]
	private protected bool IsSingleChannelBlit(Texture source, Texture destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x4BE83D0", Offset = "0x4BE83D0", VA = "0x4BE83D0")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x4BE8E70", Offset = "0x4BE8E70", VA = "0x4BE8E70")]
	private protected void MarkGPUTextureValid(int instanceId, bool mipAreValid = false)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x4BE8ED0", Offset = "0x4BE8ED0", VA = "0x4BE8ED0")]
	private protected void MarkGPUTextureInvalid(int instanceId)
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4BE8F20", Offset = "0x4BE8F20", VA = "0x4BE8F20", Slot = "4")]
	public virtual void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4BE9330", Offset = "0x4BE9330", VA = "0x4BE9330", Slot = "5")]
	public virtual void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4BE9350", Offset = "0x4BE9350", VA = "0x4BE9350", Slot = "6")]
	public virtual void BlitCubeTexture2D(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4BE94D0", Offset = "0x4BE94D0", VA = "0x4BE94D0", Slot = "7")]
	public virtual bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4BE9760", Offset = "0x4BE9760", VA = "0x4BE9760")]
	public bool AllocateTextureWithoutBlit(Texture texture, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4BE97C0", Offset = "0x4BE97C0", VA = "0x4BE97C0", Slot = "8")]
	public virtual bool AllocateTextureWithoutBlit(int instanceId, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4BE99B0", Offset = "0x4BE99B0", VA = "0x4BE99B0")]
	private protected int GetTextureHash(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4BE9130", Offset = "0x4BE9130", VA = "0x4BE9130")]
	public int GetTextureID(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4BE9A20", Offset = "0x4BE9A20", VA = "0x4BE9A20")]
	public int GetTextureID(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4BE9A60", Offset = "0x4BE9A60", VA = "0x4BE9A60")]
	public bool IsCached(out Vector4 scaleOffset, Texture textureA, Texture textureB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4BE9B80", Offset = "0x4BE9B80", VA = "0x4BE9B80")]
	public bool IsCached(out Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4BE9B10", Offset = "0x4BE9B10", VA = "0x4BE9B10")]
	public bool IsCached(out Vector4 scaleOffset, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4BE9C00", Offset = "0x4BE9C00", VA = "0x4BE9C00")]
	internal Vector2Int GetCachedTextureSize(int id)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4BE9C70", Offset = "0x4BE9C70", VA = "0x4BE9C70", Slot = "9")]
	public virtual bool NeedsUpdate(Texture texture, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4BE9ED0", Offset = "0x4BE9ED0", VA = "0x4BE9ED0", Slot = "10")]
	public virtual bool NeedsUpdate(Texture textureA, Texture textureB, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4BEA380", Offset = "0x4BEA380", VA = "0x4BEA380", Slot = "11")]
	public virtual bool AddTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4BEA480", Offset = "0x4BEA480", VA = "0x4BEA480", Slot = "12")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture oldTexture, Texture newTexture, ref Vector4 scaleOffset, Vector4 sourceScaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x4BEA730", Offset = "0x4BEA730", VA = "0x4BEA730", Slot = "13")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture texture, ref Vector4 scaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4BEA7E0", Offset = "0x4BEA7E0", VA = "0x4BEA7E0")]
	internal bool EnsureTextureSlot(out bool isUploadNeeded, ref Vector4 scaleBias, int key, int width, int height)
	{
		return default(bool);
	}
}
