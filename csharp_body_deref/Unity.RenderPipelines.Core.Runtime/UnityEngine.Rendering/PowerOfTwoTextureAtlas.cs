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
		[Address(RVA = "0x48BB470", Offset = "0x48BB470", VA = "0x48BB470")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x48BB390", Offset = "0x48BB390", VA = "0x48BB390")]
	public PowerOfTwoTextureAtlas(int size, int mipPadding, GraphicsFormat format, FilterMode filterMode = FilterMode.Point, string name = "", bool useMipMap = true)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x48BB480", Offset = "0x48BB480", VA = "0x48BB480")]
	private int GetTexturePadding()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x48BB4A0", Offset = "0x48BB4A0", VA = "0x48BB4A0")]
	public Vector4 GetPayloadScaleOffset(Texture texture, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x48BB610", Offset = "0x48BB610", VA = "0x48BB610")]
	public static Vector4 GetPayloadScaleOffset(in Vector2 textureSize, in Vector2 paddingSize, in Vector4 scaleOffset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x48BB640", Offset = "0x48BB640", VA = "0x48BB640")]
	private void Blit2DTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips, BlitType blitType)
	{
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x48BBAF0", Offset = "0x48BBAF0", VA = "0x48BBAF0", Slot = "4")]
	public override void BlitTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x48BBBB0", Offset = "0x48BBBB0", VA = "0x48BBBB0")]
	public void BlitTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x48BBC70", Offset = "0x48BBC70", VA = "0x48BBC70", Slot = "5")]
	public override void BlitOctahedralTexture(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x48BBD30", Offset = "0x48BBD30", VA = "0x48BBD30")]
	public void BlitOctahedralTextureMultiply(CommandBuffer cmd, Vector4 scaleOffset, Texture texture, Vector4 sourceScaleOffset, bool blitMips = true, int overrideInstanceID = -1)
	{
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x48BBDF0", Offset = "0x48BBDF0", VA = "0x48BBDF0")]
	private void TextureSizeToPowerOfTwo(Texture texture, ref int width, ref int height)
	{
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x48BB5B0", Offset = "0x48BB5B0", VA = "0x48BB5B0")]
	private Vector2 GetPowerOfTwoTextureSize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x48BBE20", Offset = "0x48BBE20", VA = "0x48BBE20", Slot = "7")]
	public override bool AllocateTexture(CommandBuffer cmd, ref Vector4 scaleOffset, Texture texture, int width, int height, int overrideInstanceID = -1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x48BBFF0", Offset = "0x48BBFF0", VA = "0x48BBFF0")]
	public void ResetRequestedTexture()
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x48BC030", Offset = "0x48BC030", VA = "0x48BC030")]
	public bool ReserveSpace(Texture texture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x48BC0A0", Offset = "0x48BC0A0", VA = "0x48BC0A0")]
	public bool ReserveSpace(Texture texture, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x48BC1E0", Offset = "0x48BC1E0", VA = "0x48BC1E0")]
	public bool ReserveSpace(Texture textureA, Texture textureB, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x48BC0D0", Offset = "0x48BC0D0", VA = "0x48BC0D0")]
	private bool ReserveSpace(int id, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x48BC210", Offset = "0x48BC210", VA = "0x48BC210")]
	public bool RelayoutEntries()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x48BC7C0", Offset = "0x48BC7C0", VA = "0x48BC7C0")]
	public static long GetApproxCacheSizeInByte(int nbElement, int resolution, bool hasMipmap, GraphicsFormat format)
	{
		return default(long);
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x48BC880", Offset = "0x48BC880", VA = "0x48BC880")]
	public static int GetMaxCacheSizeForWeightInByte(int weight, bool hasMipmap, GraphicsFormat format)
	{
		return default(int);
	}
}
