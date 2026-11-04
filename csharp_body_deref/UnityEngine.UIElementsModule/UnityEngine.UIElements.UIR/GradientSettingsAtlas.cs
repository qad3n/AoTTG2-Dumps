// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GradientSettingsAtlas
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000599")]
internal class GradientSettingsAtlas : IDisposable
{
	[Token(Token = "0x200059A")]
	private struct RawTexture
	{
		[Token(Token = "0x40013DC")]
		[FieldOffset(Offset = "0x0")]
		public Color32[] rgba;

		[Token(Token = "0x40013DD")]
		[FieldOffset(Offset = "0x8")]
		public int width;

		[Token(Token = "0x40013DE")]
		[FieldOffset(Offset = "0xC")]
		public int height;

		[Token(Token = "0x60029DB")]
		[Address(RVA = "0x3197930", Offset = "0x3195F30", VA = "0x183197930")]
		public void WriteRawInt2Packed(int v0, int v1, int destX, int destY)
		{
		}

		[Token(Token = "0x60029DC")]
		[Address(RVA = "0x3197880", Offset = "0x3195E80", VA = "0x183197880")]
		public void WriteRawFloat4Packed(float f0, float f1, float f2, float f3, int destX, int destY)
		{
		}
	}

	[Token(Token = "0x40013D2")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerWrite;

	[Token(Token = "0x40013D3")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_MarkerCommit;

	[Token(Token = "0x40013D4")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Length;

	[Token(Token = "0x40013D5")]
	[FieldOffset(Offset = "0x14")]
	private readonly int m_ElemWidth;

	[Token(Token = "0x40013D6")]
	[FieldOffset(Offset = "0x18")]
	private BestFitAllocator m_Allocator;

	[Token(Token = "0x40013D7")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_Atlas;

	[Token(Token = "0x40013D8")]
	[FieldOffset(Offset = "0x28")]
	private RawTexture m_RawAtlas;

	[Token(Token = "0x40013D9")]
	[FieldOffset(Offset = "0x10")]
	private static int s_TextureCounter;

	[Token(Token = "0x17000A62")]
	internal int length
	{
		[Token(Token = "0x60029CB")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A63")]
	protected bool disposed
	{
		[Token(Token = "0x60029CC")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029CD")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A64")]
	public Texture2D atlas
	{
		[Token(Token = "0x60029D2")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A65")]
	public bool MustCommit
	{
		[Token(Token = "0x60029D6")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029D7")]
		[Address(RVA = "0xF1DA30", Offset = "0xF1C030", VA = "0x180F1DA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029CE")]
	[Address(RVA = "0x318F070", Offset = "0x318D670", VA = "0x18318F070", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029CF")]
	[Address(RVA = "0x318F0D0", Offset = "0x318D6D0", VA = "0x18318F0D0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60029D0")]
	[Address(RVA = "0x318F920", Offset = "0x318DF20", VA = "0x18318F920")]
	public GradientSettingsAtlas(int length = 4096)
	{
	}

	[Token(Token = "0x60029D1")]
	[Address(RVA = "0x318F310", Offset = "0x318D910", VA = "0x18318F310")]
	public void Reset()
	{
	}

	[Token(Token = "0x60029D3")]
	[Address(RVA = "0x318EDC0", Offset = "0x318D3C0", VA = "0x18318EDC0")]
	public Alloc Add(int count)
	{
		return default(Alloc);
	}

	[Token(Token = "0x60029D4")]
	[Address(RVA = "0x318F2C0", Offset = "0x318D8C0", VA = "0x18318F2C0")]
	public void Remove(Alloc alloc)
	{
	}

	[Token(Token = "0x60029D5")]
	[Address(RVA = "0x318F3D0", Offset = "0x318D9D0", VA = "0x18318F3D0")]
	public void Write(Alloc alloc, GradientSettings[] settings, GradientRemap remap)
	{
	}

	[Token(Token = "0x60029D8")]
	[Address(RVA = "0x318EEA0", Offset = "0x318D4A0", VA = "0x18318EEA0")]
	public void Commit()
	{
	}

	[Token(Token = "0x60029D9")]
	[Address(RVA = "0x318F140", Offset = "0x318D740", VA = "0x18318F140")]
	private void PrepareAtlas()
	{
	}
}
