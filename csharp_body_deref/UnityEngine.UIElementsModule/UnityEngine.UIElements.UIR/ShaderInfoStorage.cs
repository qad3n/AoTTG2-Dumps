// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.ShaderInfoStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D1")]
internal class ShaderInfoStorage<T> : BaseShaderInfoStorage where T : struct
{
	[Token(Token = "0x400158B")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_InitialSize;

	[Token(Token = "0x400158C")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_MaxSize;

	[Token(Token = "0x400158D")]
	[FieldOffset(Offset = "0x0")]
	private readonly TextureFormat m_Format;

	[Token(Token = "0x400158E")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<Color, T> m_Convert;

	[Token(Token = "0x400158F")]
	[FieldOffset(Offset = "0x0")]
	private UIRAtlasAllocator m_Allocator;

	[Token(Token = "0x4001590")]
	[FieldOffset(Offset = "0x0")]
	private Texture2D m_Texture;

	[Token(Token = "0x4001591")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_Texels;

	[Token(Token = "0x17000AA3")]
	public override Texture2D texture
	{
		[Token(Token = "0x6002B41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B3F")]
	public ShaderInfoStorage(TextureFormat format, Func<Color, T> convert, int initialSize = 64, int maxSize = 4096)
	{
	}

	[Token(Token = "0x6002B40")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B42")]
	public override bool AllocateRect(int width, int height, out RectInt uvs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B43")]
	public override void SetTexel(int x, int y, Color color)
	{
	}

	[Token(Token = "0x6002B44")]
	public override void UpdateTexture()
	{
	}

	[Token(Token = "0x6002B45")]
	private void CreateOrExpandTexture()
	{
	}

	[Token(Token = "0x6002B46")]
	private static void CpuBlit(NativeArray<T> src, int srcWidth, int srcHeight, NativeArray<T> dst, int dstWidth, int dstHeight)
	{
	}
}
