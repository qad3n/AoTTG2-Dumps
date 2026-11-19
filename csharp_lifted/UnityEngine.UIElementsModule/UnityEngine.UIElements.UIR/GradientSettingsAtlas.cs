// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GradientSettingsAtlas
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

[Token(Token = "0x2000584")]
internal class GradientSettingsAtlas : IDisposable
{
	[Token(Token = "0x2000585")]
	private struct RawTexture
	{
		[Token(Token = "0x400131E")]
		[FieldOffset(Offset = "0x0")]
		public Color32[] rgba;

		[Token(Token = "0x400131F")]
		[FieldOffset(Offset = "0x8")]
		public int width;

		[Token(Token = "0x4001320")]
		[FieldOffset(Offset = "0xC")]
		public int height;

		[Token(Token = "0x600297A")]
		[Address(RVA = "0x6B87090", Offset = "0x6B86090", VA = "0x6B87090")]
		public void WriteRawInt2Packed(int v0, int v1, int destX, int destY)
		{
		}

		[Token(Token = "0x600297B")]
		[Address(RVA = "0x6B87010", Offset = "0x6B86010", VA = "0x6B87010")]
		public void WriteRawFloat4Packed(float f0, float f1, float f2, float f3, int destX, int destY)
		{
		}
	}

	[Token(Token = "0x4001314")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerWrite;

	[Token(Token = "0x4001315")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_MarkerCommit;

	[Token(Token = "0x4001316")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Length;

	[Token(Token = "0x4001317")]
	[FieldOffset(Offset = "0x14")]
	private readonly int m_ElemWidth;

	[Token(Token = "0x4001318")]
	[FieldOffset(Offset = "0x18")]
	private BestFitAllocator m_Allocator;

	[Token(Token = "0x4001319")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_Atlas;

	[Token(Token = "0x400131A")]
	[FieldOffset(Offset = "0x28")]
	private RawTexture m_RawAtlas;

	[Token(Token = "0x400131B")]
	[FieldOffset(Offset = "0x10")]
	private static int s_TextureCounter;

	[Token(Token = "0x17000A56")]
	internal int length
	{
		[Token(Token = "0x600296A")]
		[Address(RVA = "0x6B86750", Offset = "0x6B85750", VA = "0x6B86750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A57")]
	protected bool disposed
	{
		[Token(Token = "0x600296B")]
		[Address(RVA = "0x6B86760", Offset = "0x6B85760", VA = "0x6B86760")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600296C")]
		[Address(RVA = "0x6B86770", Offset = "0x6B85770", VA = "0x6B86770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A58")]
	public Texture2D atlas
	{
		[Token(Token = "0x6002971")]
		[Address(RVA = "0x6B86940", Offset = "0x6B85940", VA = "0x6B86940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A59")]
	public bool MustCommit
	{
		[Token(Token = "0x6002975")]
		[Address(RVA = "0x6B87110", Offset = "0x6B86110", VA = "0x6B87110")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002976")]
		[Address(RVA = "0x6B87120", Offset = "0x6B86120", VA = "0x6B87120")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600296D")]
	[Address(RVA = "0x6B86780", Offset = "0x6B85780", VA = "0x6B86780", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600296E")]
	[Address(RVA = "0x6B867F0", Offset = "0x6B857F0", VA = "0x6B867F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600296F")]
	[Address(RVA = "0x6B86860", Offset = "0x6B85860", VA = "0x6B86860")]
	public GradientSettingsAtlas(int length = 4096)
	{
	}

	[Token(Token = "0x6002970")]
	[Address(RVA = "0x6B86890", Offset = "0x6B85890", VA = "0x6B86890")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002972")]
	[Address(RVA = "0x6B86950", Offset = "0x6B85950", VA = "0x6B86950")]
	public Alloc Add(int count)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6002973")]
	[Address(RVA = "0x6B86A30", Offset = "0x6B85A30", VA = "0x6B86A30")]
	public void Remove(Alloc alloc)
	{
	}

	[Token(Token = "0x6002974")]
	[Address(RVA = "0x6B86A60", Offset = "0x6B85A60", VA = "0x6B86A60")]
	public void Write(Alloc alloc, GradientSettings[] settings, GradientRemap remap)
	{
	}

	[Token(Token = "0x6002977")]
	[Address(RVA = "0x6B87130", Offset = "0x6B86130", VA = "0x6B87130")]
	public void Commit()
	{
	}

	[Token(Token = "0x6002978")]
	[Address(RVA = "0x6B871F0", Offset = "0x6B861F0", VA = "0x6B871F0")]
	private void PrepareAtlas()
	{
	}
}
