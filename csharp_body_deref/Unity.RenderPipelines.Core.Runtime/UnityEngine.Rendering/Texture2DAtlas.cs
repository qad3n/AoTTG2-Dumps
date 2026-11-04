// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Texture2DAtlas
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A9")]
public class Texture2DAtlas
{
	[Token(Token = "0x20001AA")]
	private enum BlitType
	{
		[Token(Token = "0x400083C")]
		Default,
		[Token(Token = "0x400083D")]
		CubeTo2DOctahedral,
		[Token(Token = "0x400083E")]
		SingleChannel,
		[Token(Token = "0x400083F")]
		CubeTo2DOctahedralSingleChannel
	}

	[Token(Token = "0x400082C")]
	private protected const int kGPUTexInvalid = 0;

	[Token(Token = "0x400082D")]
	private protected const int kGPUTexValidMip0 = 1;

	[Token(Token = "0x400082E")]
	private protected const int kGPUTexValidMipAll = 2;

	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x10")]
	private protected RTHandle m_AtlasTexture;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x18")]
	private protected int m_Width;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x1C")]
	private protected int m_Height;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x20")]
	private protected GraphicsFormat m_Format;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x24")]
	private protected bool m_UseMipMaps;

	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x25")]
	private bool m_IsAtlasTextureOwner;

	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x28")]
	private AtlasAllocator m_AtlasAllocator;

	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, (Vector4 scaleOffset, Vector2Int size)> m_AllocationCache;

	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<int, int> m_IsGPUTextureUpToDate;

	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<int, int> m_TextureHashes;

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector4 fullScaleOffset;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_MaxMipLevelPadding;

	[Token(Token = "0x17000195")]
	public static int maxMipLevelPadding
	{
		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x2B4CCB0", Offset = "0x2B4B2B0", VA = "0x182B4CCB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public RTHandle AtlasTexture
	{
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x2B4C970", Offset = "0x2B4AF70", VA = "0x182B4C970")]
	public Texture2DAtlas(int width, int height, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, bool powerOfTwoPadding = false, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x2B4C560", Offset = "0x2B4AB60", VA = "0x182B4C560")]
	public void Release()
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x2B4C5D0", Offset = "0x2B4ABD0", VA = "0x182B4C5D0")]
	public void ResetAllocator()
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x2B4B2E0", Offset = "0x2B498E0", VA = "0x182B4B2E0")]
	public void ClearTarget(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x2B4B800", Offset = "0x2B49E00", VA = "0x182B4B800")]
	private protected int GetTextureMipmapCount(int width, int height)
	{
		return default(int);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x2B4B890", Offset = "0x2B49E90", VA = "0x182B4B890")]
	private protected bool Is2D(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x2B4BA70", Offset = "0x2B4A070", VA = "0x182B4BA70")]
	private protected bool IsSingleChannelBlit(Texture source, Texture destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x2B4ACD0", Offset = "0x2B492D0", VA = "0x182B4ACD0")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x2B4BD40", Offset = "0x2B4A340", VA = "0x182B4BD40")]
	private protected void MarkGPUTextureValid(int instanceId, bool mipAreValid = false)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x2B4BCE0", Offset = "0x2B4A2E0", VA = "0x182B4BCE0")]
	private protected void MarkGPUTextureInvalid(int instanceId)
	{
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x2B4B160", Offset = "0x2B49760", VA = "0x182B4B160", Slot = "4")]
	public virtual void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x2B4B100", Offset = "0x2B49700", VA = "0x182B4B100", Slot = "5")]
	public virtual void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x2B4AF70", Offset = "0x2B49570", VA = "0x182B4AF70", Slot = "6")]
	public virtual void BlitCubeTexture2D(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x2B4AAB0", Offset = "0x2B490B0", VA = "0x182B4AAB0", Slot = "7")]
	public virtual bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x2B4AA50", Offset = "0x2B49050", VA = "0x182B4AA50")]
	public bool AllocateTextureWithoutBlit(Texture texture, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x2B4A830", Offset = "0x2B48E30", VA = "0x182B4A830", Slot = "8")]
	public virtual bool AllocateTextureWithoutBlit(int instanceId, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x2B4B720", Offset = "0x2B49D20", VA = "0x182B4B720")]
	private protected int GetTextureHash(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x2B4B7E0", Offset = "0x2B49DE0", VA = "0x182B4B7E0")]
	public int GetTextureID(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x2B4B790", Offset = "0x2B49D90", VA = "0x182B4B790")]
	public int GetTextureID(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x2B4B950", Offset = "0x2B49F50", VA = "0x182B4B950")]
	public bool IsCached(out Vector4 scaleOffset, Texture textureA, Texture textureB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x2B4BA30", Offset = "0x2B4A030", VA = "0x182B4BA30")]
	public bool IsCached(out Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x2B4B9B0", Offset = "0x2B49FB0", VA = "0x182B4B9B0")]
	public bool IsCached(out Vector4 scaleOffset, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x2B4B6B0", Offset = "0x2B49CB0", VA = "0x182B4B6B0")]
	internal Vector2Int GetCachedTextureSize(int id)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x2B4C310", Offset = "0x2B4A910", VA = "0x182B4C310", Slot = "9")]
	public virtual bool NeedsUpdate(Texture texture, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x2B4BDB0", Offset = "0x2B4A3B0", VA = "0x182B4BDB0", Slot = "10")]
	public virtual bool NeedsUpdate(int id, int updateCount, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x2B4BEA0", Offset = "0x2B4A4A0", VA = "0x182B4BEA0", Slot = "11")]
	public virtual bool NeedsUpdate(Texture textureA, Texture textureB, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x2B4A770", Offset = "0x2B48D70", VA = "0x182B4A770", Slot = "12")]
	public virtual bool AddTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x2B4C690", Offset = "0x2B4AC90", VA = "0x182B4C690", Slot = "13")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture oldTexture, Texture newTexture, ref Vector4 scaleOffset, Vector4 sourceScaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x2B4C850", Offset = "0x2B4AE50", VA = "0x182B4C850", Slot = "14")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture texture, ref Vector4 scaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x2B4B4B0", Offset = "0x2B49AB0", VA = "0x182B4B4B0")]
	internal bool EnsureTextureSlot(out bool isUploadNeeded, ref Vector4 scaleBias, int key, int width, int height)
	{
		return default(bool);
	}
}
