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

[Token(Token = "0x2000181")]
public class PowerOfTwoTextureAtlas : Texture2DAtlas
{
	[Token(Token = "0x2000182")]
	private enum BlitType
	{
		[Token(Token = "0x400069D")]
		Padding,
		[Token(Token = "0x400069E")]
		PaddingMultiply,
		[Token(Token = "0x400069F")]
		OctahedralPadding,
		[Token(Token = "0x40006A0")]
		OctahedralPaddingMultiply
	}

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x48")]
	private readonly int m_MipPadding;

	[Token(Token = "0x400069A")]
	private const float k_MipmapFactorApprox = 1.33f;

	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<int, Vector2Int> m_RequestedTextures;

	[Token(Token = "0x1700013C")]
	public int mipPadding
	{
		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x4BE0510", Offset = "0x4BE0510", VA = "0x4BE0510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x4BE0430", Offset = "0x4BE0430", VA = "0x4BE0430")]
	public PowerOfTwoTextureAtlas(int size, int mipPadding, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x4BE0520", Offset = "0x4BE0520", VA = "0x4BE0520")]
	private int GetTexturePadding()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x4BE0540", Offset = "0x4BE0540", VA = "0x4BE0540")]
	public Vector4 GetPayloadScaleOffset(Texture texture, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x4BE06B0", Offset = "0x4BE06B0", VA = "0x4BE06B0")]
	public static Vector4 GetPayloadScaleOffset(in Vector2 textureSize, in Vector2 paddingSize, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x4BE06E0", Offset = "0x4BE06E0", VA = "0x4BE06E0")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x4BE0B90", Offset = "0x4BE0B90", VA = "0x4BE0B90", Slot = "4")]
	public override void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x4BE0C50", Offset = "0x4BE0C50", VA = "0x4BE0C50")]
	public void BlitTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x4BE0D10", Offset = "0x4BE0D10", VA = "0x4BE0D10", Slot = "5")]
	public override void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x4BE0DD0", Offset = "0x4BE0DD0", VA = "0x4BE0DD0")]
	public void BlitOctahedralTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x4BE0E90", Offset = "0x4BE0E90", VA = "0x4BE0E90")]
	private void TextureSizeToPowerOfTwo(Texture texture, ref int width, ref int height)
	{
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x4BE0650", Offset = "0x4BE0650", VA = "0x4BE0650")]
	private Vector2 GetPowerOfTwoTextureSize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4BE0EC0", Offset = "0x4BE0EC0", VA = "0x4BE0EC0", Slot = "7")]
	public override bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x4BE1090", Offset = "0x4BE1090", VA = "0x4BE1090")]
	public void ResetRequestedTexture()
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4BE10D0", Offset = "0x4BE10D0", VA = "0x4BE10D0")]
	public bool ReserveSpace(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4BE1140", Offset = "0x4BE1140", VA = "0x4BE1140")]
	public bool ReserveSpace(Texture texture, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x4BE1280", Offset = "0x4BE1280", VA = "0x4BE1280")]
	public bool ReserveSpace(Texture textureA, Texture textureB, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x4BE1170", Offset = "0x4BE1170", VA = "0x4BE1170")]
	private bool ReserveSpace(int id, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4BE12B0", Offset = "0x4BE12B0", VA = "0x4BE12B0")]
	public bool RelayoutEntries()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x4BE1860", Offset = "0x4BE1860", VA = "0x4BE1860")]
	public static long GetApproxCacheSizeInByte(int nbElement, int resolution, bool hasMipmap, GraphicsFormat format)
	{
		return default(long);
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x4BE1920", Offset = "0x4BE1920", VA = "0x4BE1920")]
	public static int GetMaxCacheSizeForWeightInByte(int weight, bool hasMipmap, GraphicsFormat format)
	{
		return default(int);
	}
}
