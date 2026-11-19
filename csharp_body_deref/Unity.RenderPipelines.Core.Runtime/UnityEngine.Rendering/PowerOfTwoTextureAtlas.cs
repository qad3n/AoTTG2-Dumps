// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PowerOfTwoTextureAtlas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000198")]
public class PowerOfTwoTextureAtlas : Texture2DAtlas
{
	[Token(Token = "0x2000199")]
	private enum BlitType
	{
		[Token(Token = "0x40007E2")]
		Padding,
		[Token(Token = "0x40007E3")]
		PaddingMultiply,
		[Token(Token = "0x40007E4")]
		OctahedralPadding,
		[Token(Token = "0x40007E5")]
		OctahedralPaddingMultiply
	}

	[Token(Token = "0x40007DE")]
	[FieldOffset(Offset = "0x48")]
	private readonly int m_MipPadding;

	[Token(Token = "0x40007DF")]
	private const float k_MipmapFactorApprox = 1.33f;

	[Token(Token = "0x40007E0")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<int, Vector2Int> m_RequestedTextures;

	[Token(Token = "0x17000172")]
	public int mipPadding
	{
		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x65282E0", Offset = "0x65272E0", VA = "0x65282E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x6527E60", Offset = "0x6526E60", VA = "0x6527E60")]
	public PowerOfTwoTextureAtlas(int size, int mipPadding, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x65282F0", Offset = "0x65272F0", VA = "0x65282F0")]
	private int GetTexturePadding()
	{
		return default(int);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x6528310", Offset = "0x6527310", VA = "0x6528310")]
	public Vector4 GetPayloadScaleOffset(Texture texture, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x6528500", Offset = "0x6527500", VA = "0x6528500")]
	public static Vector4 GetPayloadScaleOffset(in Vector2 textureSize, in Vector2 paddingSize, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x6528540", Offset = "0x6527540", VA = "0x6528540")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x6529610", Offset = "0x6528610", VA = "0x6529610", Slot = "4")]
	public override void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x65298B0", Offset = "0x65288B0", VA = "0x65298B0")]
	public void BlitTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x6529A50", Offset = "0x6528A50", VA = "0x6529A50", Slot = "5")]
	public override void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x6529BF0", Offset = "0x6528BF0", VA = "0x6529BF0")]
	public void BlitOctahedralTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x6529D90", Offset = "0x6528D90", VA = "0x6529D90")]
	private void TextureSizeToPowerOfTwo(Texture texture, ref int width, ref int height)
	{
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x6528460", Offset = "0x6527460", VA = "0x6528460")]
	private Vector2 GetPowerOfTwoTextureSize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x6529DF0", Offset = "0x6528DF0", VA = "0x6529DF0", Slot = "7")]
	public override bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x652A280", Offset = "0x6529280", VA = "0x652A280")]
	public void ResetRequestedTexture()
	{
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x652A2C0", Offset = "0x65292C0", VA = "0x652A2C0")]
	public bool ReserveSpace(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x652A330", Offset = "0x6529330", VA = "0x652A330")]
	public bool ReserveSpace(Texture texture, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x652A520", Offset = "0x6529520", VA = "0x652A520")]
	public bool ReserveSpace(Texture textureA, Texture textureB, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x652A390", Offset = "0x6529390", VA = "0x652A390")]
	public bool ReserveSpace(int id, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x652A6A0", Offset = "0x65296A0", VA = "0x652A6A0")]
	public bool RelayoutEntries()
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x652AC90", Offset = "0x6529C90", VA = "0x652AC90")]
	public static long GetApproxCacheSizeInByte(int nbElement, int resolution, bool hasMipmap, GraphicsFormat format)
	{
		return default(long);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x652AD60", Offset = "0x6529D60", VA = "0x652AD60")]
	public static int GetMaxCacheSizeForWeightInByte(int weight, bool hasMipmap, GraphicsFormat format)
	{
		return default(int);
	}
}
