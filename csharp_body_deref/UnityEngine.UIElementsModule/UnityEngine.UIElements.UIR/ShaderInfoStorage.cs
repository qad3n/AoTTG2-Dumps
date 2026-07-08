using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004C9")]
internal class ShaderInfoStorage<T> : BaseShaderInfoStorage where T : struct
{
	[Token(Token = "0x4000F75")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_InitialSize;

	[Token(Token = "0x4000F76")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_MaxSize;

	[Token(Token = "0x4000F77")]
	[FieldOffset(Offset = "0x0")]
	private readonly TextureFormat m_Format;

	[Token(Token = "0x4000F78")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<Color, T> m_Convert;

	[Token(Token = "0x4000F79")]
	[FieldOffset(Offset = "0x0")]
	private UIRAtlasAllocator m_Allocator;

	[Token(Token = "0x4000F7A")]
	[FieldOffset(Offset = "0x0")]
	private Texture2D m_Texture;

	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_Texels;

	[Token(Token = "0x17000789")]
	public override Texture2D texture
	{
		[Token(Token = "0x6001DBB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DB9")]
	public ShaderInfoStorage(TextureFormat format, Func<Color, T> convert, int initialSize = 64, int maxSize = 4096)
	{
	}

	[Token(Token = "0x6001DBA")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001DBC")]
	public override bool AllocateRect(int width, int height, out RectInt uvs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DBD")]
	public override void SetTexel(int x, int y, Color color)
	{
	}

	[Token(Token = "0x6001DBE")]
	public override void UpdateTexture()
	{
	}

	[Token(Token = "0x6001DBF")]
	private void CreateOrExpandTexture()
	{
	}

	[Token(Token = "0x6001DC0")]
	private static void CpuBlit(NativeArray<T> src, int srcWidth, int srcHeight, NativeArray<T> dst, int dstWidth, int dstHeight)
	{
	}
}
