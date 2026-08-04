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

[Token(Token = "0x20004C8")]
internal abstract class BaseShaderInfoStorage : IDisposable
{
	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x0")]
	protected static int s_TextureCounter;

	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x8")]
	internal static ProfilerMarker s_MarkerCopyTexture;

	[Token(Token = "0x4000F72")]
	[FieldOffset(Offset = "0x10")]
	internal static ProfilerMarker s_MarkerGetTextureData;

	[Token(Token = "0x4000F73")]
	[FieldOffset(Offset = "0x18")]
	internal static ProfilerMarker s_MarkerUpdateTexture;

	[Token(Token = "0x17000787")]
	public abstract Texture2D texture
	{
		[Token(Token = "0x6001DAF")]
		get;
	}

	[Token(Token = "0x17000788")]
	protected bool disposed
	{
		[Token(Token = "0x6001DB3")]
		[Address(RVA = "0x4FA6070", Offset = "0x4FA6070", VA = "0x4FA6070")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001DB4")]
		[Address(RVA = "0x4FA6080", Offset = "0x4FA6080", VA = "0x4FA6080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001DB0")]
	public abstract bool AllocateRect(int width, int height, out RectInt uvs);

	[Token(Token = "0x6001DB1")]
	public abstract void SetTexel(int x, int y, Color color);

	[Token(Token = "0x6001DB2")]
	public abstract void UpdateTexture();

	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x4FA6090", Offset = "0x4FA6090", VA = "0x4FA6090", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x4FA6100", Offset = "0x4FA6100", VA = "0x4FA6100", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001DB7")]
	[Address(RVA = "0x4FA6110", Offset = "0x4FA6110", VA = "0x4FA6110")]
	protected BaseShaderInfoStorage()
	{
	}
}
