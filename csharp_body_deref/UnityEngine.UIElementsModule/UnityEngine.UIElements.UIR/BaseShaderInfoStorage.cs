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

[Token(Token = "0x20005BB")]
internal abstract class BaseShaderInfoStorage : IDisposable
{
	[Token(Token = "0x40014C8")]
	[FieldOffset(Offset = "0x0")]
	protected static int s_TextureCounter;

	[Token(Token = "0x40014C9")]
	[FieldOffset(Offset = "0x8")]
	internal static ProfilerMarker s_MarkerCopyTexture;

	[Token(Token = "0x40014CA")]
	[FieldOffset(Offset = "0x10")]
	internal static ProfilerMarker s_MarkerGetTextureData;

	[Token(Token = "0x40014CB")]
	[FieldOffset(Offset = "0x18")]
	internal static ProfilerMarker s_MarkerUpdateTexture;

	[Token(Token = "0x17000A95")]
	public abstract Texture2D texture
	{
		[Token(Token = "0x6002AD4")]
		get;
	}

	[Token(Token = "0x17000A96")]
	protected bool disposed
	{
		[Token(Token = "0x6002AD8")]
		[Address(RVA = "0x6BA9C70", Offset = "0x6BA8C70", VA = "0x6BA9C70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002AD9")]
		[Address(RVA = "0x6BA9C80", Offset = "0x6BA8C80", VA = "0x6BA9C80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002AD5")]
	public abstract bool AllocateRect(int width, int height, out RectInt uvs);

	[Token(Token = "0x6002AD6")]
	public abstract void SetTexel(int x, int y, Color color);

	[Token(Token = "0x6002AD7")]
	public abstract void UpdateTexture();

	[Token(Token = "0x6002ADA")]
	[Address(RVA = "0x6BA9C90", Offset = "0x6BA8C90", VA = "0x6BA9C90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002ADB")]
	[Address(RVA = "0x6BA9D00", Offset = "0x6BA8D00", VA = "0x6BA9D00", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002ADC")]
	[Address(RVA = "0x6BA9D10", Offset = "0x6BA8D10", VA = "0x6BA9D10")]
	protected BaseShaderInfoStorage()
	{
	}
}
