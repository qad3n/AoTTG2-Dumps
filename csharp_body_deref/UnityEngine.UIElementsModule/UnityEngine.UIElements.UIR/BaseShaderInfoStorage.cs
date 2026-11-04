// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BaseShaderInfoStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D0")]
internal abstract class BaseShaderInfoStorage : IDisposable
{
	[Token(Token = "0x4001586")]
	[FieldOffset(Offset = "0x0")]
	protected static int s_TextureCounter;

	[Token(Token = "0x4001587")]
	[FieldOffset(Offset = "0x8")]
	internal static ProfilerMarker s_MarkerCopyTexture;

	[Token(Token = "0x4001588")]
	[FieldOffset(Offset = "0x10")]
	internal static ProfilerMarker s_MarkerGetTextureData;

	[Token(Token = "0x4001589")]
	[FieldOffset(Offset = "0x18")]
	internal static ProfilerMarker s_MarkerUpdateTexture;

	[Token(Token = "0x17000AA1")]
	public abstract Texture2D texture
	{
		[Token(Token = "0x6002B35")]
		get;
	}

	[Token(Token = "0x17000AA2")]
	protected bool disposed
	{
		[Token(Token = "0x6002B39")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B3A")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B36")]
	public abstract bool AllocateRect(int width, int height, out RectInt uvs);

	[Token(Token = "0x6002B37")]
	public abstract void SetTexel(int x, int y, Color color);

	[Token(Token = "0x6002B38")]
	public abstract void UpdateTexture();

	[Token(Token = "0x6002B3B")]
	[Address(RVA = "0x31A2350", Offset = "0x31A0950", VA = "0x1831A2350", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B3C")]
	[Address(RVA = "0x19B9B70", Offset = "0x19B8170", VA = "0x1819B9B70", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B3D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected BaseShaderInfoStorage()
	{
	}
}
