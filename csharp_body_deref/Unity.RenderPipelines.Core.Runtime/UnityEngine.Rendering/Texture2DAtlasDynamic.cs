// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Texture2DAtlasDynamic
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000193")]
internal class Texture2DAtlasDynamic
{
	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x10")]
	private RTHandle m_AtlasTexture;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x18")]
	private bool isAtlasTextureOwner;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Width;

	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x20")]
	private int m_Height;

	[Token(Token = "0x40006F5")]
	[FieldOffset(Offset = "0x24")]
	private GraphicsFormat m_Format;

	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x28")]
	private AtlasAllocatorDynamic m_AtlasAllocator;

	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, Vector4> m_AllocationCache;

	[Token(Token = "0x1700014B")]
	public RTHandle AtlasTexture
	{
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x4BEBBD0", Offset = "0x4BEBBD0", VA = "0x4BEBBD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x4BEBBE0", Offset = "0x4BEBBE0", VA = "0x4BEBBE0")]
	public Texture2DAtlasDynamic(int width, int height, int capacity, GraphicsFormat format)
	{
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x4BEBDF0", Offset = "0x4BEBDF0", VA = "0x4BEBDF0")]
	public Texture2DAtlasDynamic(int width, int height, int capacity, RTHandle atlasTexture)
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x4BEBF00", Offset = "0x4BEBF00", VA = "0x4BEBF00")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x4BEC060", Offset = "0x4BEC060", VA = "0x4BEC060")]
	public void ResetAllocator()
	{
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x4BEC0B0", Offset = "0x4BEC0B0", VA = "0x4BEC0B0")]
	public bool AddTexture(CommandBuffer cmd, out Vector4 scaleOffset, Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x4BEC360", Offset = "0x4BEC360", VA = "0x4BEC360")]
	public bool IsCached(out Vector4 scaleOffset, int key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x4BEC3B0", Offset = "0x4BEC3B0", VA = "0x4BEC3B0")]
	public bool EnsureTextureSlot(out bool isUploadNeeded, out Vector4 scaleOffset, int key, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x4BEC4B0", Offset = "0x4BEC4B0", VA = "0x4BEC4B0")]
	public void ReleaseTextureSlot(int key)
	{
	}
}
