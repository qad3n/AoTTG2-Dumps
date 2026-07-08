using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A0")]
internal class GradientSettingsAtlas : IDisposable
{
	[Token(Token = "0x20004A1")]
	private struct RawTexture
	{
		[Token(Token = "0x4000E44")]
		[FieldOffset(Offset = "0x0")]
		public Color32[] rgba;

		[Token(Token = "0x4000E45")]
		[FieldOffset(Offset = "0x8")]
		public int width;

		[Token(Token = "0x4000E46")]
		[FieldOffset(Offset = "0xC")]
		public int height;

		[Token(Token = "0x6001CD4")]
		[Address(RVA = "0x4C64800", Offset = "0x4C64800", VA = "0x4C64800")]
		public void WriteRawInt2Packed(int v0, int v1, int destX, int destY)
		{
		}

		[Token(Token = "0x6001CD5")]
		[Address(RVA = "0x4C64770", Offset = "0x4C64770", VA = "0x4C64770")]
		public void WriteRawFloat4Packed(float f0, float f1, float f2, float f3, int destX, int destY)
		{
		}
	}

	[Token(Token = "0x4000E3A")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerWrite;

	[Token(Token = "0x4000E3B")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_MarkerCommit;

	[Token(Token = "0x4000E3C")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Length;

	[Token(Token = "0x4000E3D")]
	[FieldOffset(Offset = "0x14")]
	private readonly int m_ElemWidth;

	[Token(Token = "0x4000E3E")]
	[FieldOffset(Offset = "0x18")]
	private BestFitAllocator m_Allocator;

	[Token(Token = "0x4000E3F")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_Atlas;

	[Token(Token = "0x4000E40")]
	[FieldOffset(Offset = "0x28")]
	private RawTexture m_RawAtlas;

	[Token(Token = "0x4000E41")]
	[FieldOffset(Offset = "0x10")]
	private static int s_TextureCounter;

	[Token(Token = "0x17000768")]
	internal int length
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x4C63ED0", Offset = "0x4C63ED0", VA = "0x4C63ED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000769")]
	protected bool disposed
	{
		[Token(Token = "0x6001CC6")]
		[Address(RVA = "0x4C63EE0", Offset = "0x4C63EE0", VA = "0x4C63EE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001CC7")]
		[Address(RVA = "0x4C63EF0", Offset = "0x4C63EF0", VA = "0x4C63EF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700076A")]
	public Texture2D atlas
	{
		[Token(Token = "0x6001CCC")]
		[Address(RVA = "0x4C640C0", Offset = "0x4C640C0", VA = "0x4C640C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076B")]
	public bool MustCommit
	{
		[Token(Token = "0x6001CCF")]
		[Address(RVA = "0x4C64890", Offset = "0x4C64890", VA = "0x4C64890")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001CD0")]
		[Address(RVA = "0x4C648A0", Offset = "0x4C648A0", VA = "0x4C648A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001CC8")]
	[Address(RVA = "0x4C63F00", Offset = "0x4C63F00", VA = "0x4C63F00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x4C63F70", Offset = "0x4C63F70", VA = "0x4C63F70", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x4C63FE0", Offset = "0x4C63FE0", VA = "0x4C63FE0")]
	public GradientSettingsAtlas(int length = 4096)
	{
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x4C64010", Offset = "0x4C64010", VA = "0x4C64010")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x4C640D0", Offset = "0x4C640D0", VA = "0x4C640D0")]
	public Alloc Add(int count)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x4C641C0", Offset = "0x4C641C0", VA = "0x4C641C0")]
	public void Write(Alloc alloc, GradientSettings[] settings, GradientRemap remap)
	{
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x4C648B0", Offset = "0x4C648B0", VA = "0x4C648B0")]
	public void Commit()
	{
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x4C64970", Offset = "0x4C64970", VA = "0x4C64970")]
	private void PrepareAtlas()
	{
	}
}
