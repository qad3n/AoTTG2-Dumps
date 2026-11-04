// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PowerOfTwoTextureAtlas
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x2B43070", Offset = "0x2B41670", VA = "0x182B43070")]
	public PowerOfTwoTextureAtlas(int size, int mipPadding, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x2B427D0", Offset = "0x2B40DD0", VA = "0x182B427D0")]
	private int GetTexturePadding()
	{
		return default(int);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x2B425C0", Offset = "0x2B40BC0", VA = "0x182B425C0")]
	public Vector4 GetPayloadScaleOffset(Texture texture, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x2B42520", Offset = "0x2B40B20", VA = "0x182B42520")]
	public static Vector4 GetPayloadScaleOffset(in Vector2 textureSize, in Vector2 paddingSize, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x2B41BA0", Offset = "0x2B401A0", VA = "0x182B41BA0")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x2B42290", Offset = "0x2B40890", VA = "0x182B42290", Slot = "4")]
	public override void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x2B42190", Offset = "0x2B40790", VA = "0x182B42190")]
	public void BlitTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x2B42090", Offset = "0x2B40690", VA = "0x182B42090", Slot = "5")]
	public override void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x2B41F90", Offset = "0x2B40590", VA = "0x182B41F90")]
	public void BlitOctahedralTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x2B43010", Offset = "0x2B41610", VA = "0x182B43010")]
	private void TextureSizeToPowerOfTwo(Texture texture, ref int width, ref int height)
	{
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x2B42710", Offset = "0x2B40D10", VA = "0x182B42710")]
	private Vector2 GetPowerOfTwoTextureSize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x2B417C0", Offset = "0x2B3FDC0", VA = "0x182B417C0", Slot = "7")]
	public override bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x2B42FC0", Offset = "0x2B415C0", VA = "0x182B42FC0")]
	public void ResetRequestedTexture()
	{
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x2B42CC0", Offset = "0x2B412C0", VA = "0x182B42CC0")]
	public bool ReserveSpace(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x2B42F60", Offset = "0x2B41560", VA = "0x182B42F60")]
	public bool ReserveSpace(Texture texture, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x2B42EF0", Offset = "0x2B414F0", VA = "0x182B42EF0")]
	public bool ReserveSpace(Texture textureA, Texture textureB, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x2B42D50", Offset = "0x2B41350", VA = "0x182B42D50")]
	public bool ReserveSpace(int id, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x2B42800", Offset = "0x2B40E00", VA = "0x182B42800")]
	public bool RelayoutEntries()
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x2B42380", Offset = "0x2B40980", VA = "0x182B42380")]
	public static long GetApproxCacheSizeInByte(int nbElement, int resolution, bool hasMipmap, GraphicsFormat format)
	{
		return default(long);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x2B42430", Offset = "0x2B40A30", VA = "0x182B42430")]
	public static int GetMaxCacheSizeForWeightInByte(int weight, bool hasMipmap, GraphicsFormat format)
	{
		return default(int);
	}
}
