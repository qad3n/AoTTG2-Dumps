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
		[Address(RVA = "0x6531F60", Offset = "0x6530F60", VA = "0x6531F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public RTHandle AtlasTexture
	{
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x6531FD0", Offset = "0x6530FD0", VA = "0x6531FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x6527F40", Offset = "0x6526F40", VA = "0x6527F40")]
	public Texture2DAtlas(int width, int height, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, bool powerOfTwoPadding = false, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x6531FE0", Offset = "0x6530FE0", VA = "0x6531FE0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x652ABF0", Offset = "0x6529BF0", VA = "0x652ABF0")]
	public void ResetAllocator()
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x65320B0", Offset = "0x65310B0", VA = "0x65320B0")]
	public void ClearTarget(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x6528A60", Offset = "0x6527A60", VA = "0x6528A60")]
	private protected int GetTextureMipmapCount(int width, int height)
	{
		return default(int);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x65297B0", Offset = "0x65287B0", VA = "0x65297B0")]
	private protected bool Is2D(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x6532560", Offset = "0x6531560", VA = "0x6532560")]
	private protected bool IsSingleChannelBlit(Texture source, Texture destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x65327B0", Offset = "0x65317B0", VA = "0x65327B0")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x6529850", Offset = "0x6528850", VA = "0x6529850")]
	private protected void MarkGPUTextureValid(int instanceId, bool mipAreValid = false)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x6533270", Offset = "0x6532270", VA = "0x6533270")]
	private protected void MarkGPUTextureInvalid(int instanceId)
	{
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x65332C0", Offset = "0x65322C0", VA = "0x65332C0", Slot = "4")]
	public virtual void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x65334D0", Offset = "0x65324D0", VA = "0x65334D0", Slot = "5")]
	public virtual void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x65334F0", Offset = "0x65324F0", VA = "0x65334F0", Slot = "6")]
	public virtual void BlitCubeTexture2D(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x6529FE0", Offset = "0x6528FE0", VA = "0x6529FE0", Slot = "7")]
	public virtual bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x6533670", Offset = "0x6532670", VA = "0x6533670")]
	public bool AllocateTextureWithoutBlit(Texture texture, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x65336D0", Offset = "0x65326D0", VA = "0x65336D0", Slot = "8")]
	public virtual bool AllocateTextureWithoutBlit(int instanceId, int width, int height, ref Vector4 scaleOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x65338D0", Offset = "0x65328D0", VA = "0x65338D0")]
	private protected int GetTextureHash(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x652A370", Offset = "0x6529370", VA = "0x652A370")]
	public int GetTextureID(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x652A580", Offset = "0x6529580", VA = "0x652A580")]
	public int GetTextureID(Texture textureA, Texture textureB)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x6533940", Offset = "0x6532940", VA = "0x6533940")]
	public bool IsCached(out Vector4 scaleOffset, Texture textureA, Texture textureB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x65339F0", Offset = "0x65329F0", VA = "0x65339F0")]
	public bool IsCached(out Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x652A630", Offset = "0x6529630", VA = "0x652A630")]
	public bool IsCached(out Vector4 scaleOffset, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x652A5C0", Offset = "0x65295C0", VA = "0x652A5C0")]
	internal Vector2Int GetCachedTextureSize(int id)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x6533A70", Offset = "0x6532A70", VA = "0x6533A70", Slot = "9")]
	public virtual bool NeedsUpdate(Texture texture, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x6533CD0", Offset = "0x6532CD0", VA = "0x6533CD0", Slot = "10")]
	public virtual bool NeedsUpdate(int id, int updateCount, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x6533D80", Offset = "0x6532D80", VA = "0x6533D80", Slot = "11")]
	public virtual bool NeedsUpdate(Texture textureA, Texture textureB, bool needMips = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x6534240", Offset = "0x6533240", VA = "0x6534240", Slot = "12")]
	public virtual bool AddTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x6534340", Offset = "0x6533340", VA = "0x6534340", Slot = "13")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture oldTexture, Texture newTexture, ref Vector4 scaleOffset, Vector4 sourceScaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x6534610", Offset = "0x6533610", VA = "0x6534610", Slot = "14")]
	public virtual bool UpdateTexture(CommandBuffer cmd, Texture texture, ref Vector4 scaleOffset, bool updateIfNeeded = true, bool blitMips = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x65346C0", Offset = "0x65336C0", VA = "0x65346C0")]
	internal bool EnsureTextureSlot(out bool isUploadNeeded, ref Vector4 scaleBias, int key, int width, int height)
	{
		return default(bool);
	}
}
