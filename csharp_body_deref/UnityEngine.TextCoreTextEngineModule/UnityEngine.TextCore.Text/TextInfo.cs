using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000036")]
internal class TextInfo
{
	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 s_InfinityVectorPositive;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_InfinityVectorNegative;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x10")]
	public int characterCount;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x14")]
	public int spriteCount;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x18")]
	public int spaceCount;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x1C")]
	public int wordCount;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x20")]
	public int linkCount;

	[Token(Token = "0x400027C")]
	[FieldOffset(Offset = "0x24")]
	public int lineCount;

	[Token(Token = "0x400027D")]
	[FieldOffset(Offset = "0x28")]
	public int pageCount;

	[Token(Token = "0x400027E")]
	[FieldOffset(Offset = "0x2C")]
	public int materialCount;

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x30")]
	public TextElementInfo[] textElementInfo;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x38")]
	public WordInfo[] wordInfo;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x40")]
	public LinkInfo[] linkInfo;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x48")]
	public LineInfo[] lineInfo;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x50")]
	public PageInfo[] pageInfo;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x58")]
	public MeshInfo[] meshInfo;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x60")]
	public double lastTimeInCache;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x68")]
	public Action removedFromCache;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x74")]
	public bool hasMultipleColors;

	[Token(Token = "0x1700003E")]
	public VertexDataLayout vertexDataLayout
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4BC0650", Offset = "0x4BC0650", VA = "0x4BC0650")]
		[CompilerGenerated]
		get
		{
			return default(VertexDataLayout);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4BC0660", Offset = "0x4BC0660", VA = "0x4BC0660")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4BBAAD0", Offset = "0x4BBAAD0", VA = "0x4BBAAD0")]
	public void RemoveFromCache()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4BBA360", Offset = "0x4BBA360", VA = "0x4BBA360")]
	public TextInfo(VertexDataLayout vertexDataLayout)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x4BC0670", Offset = "0x4BC0670", VA = "0x4BC0670")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x4BC06E0", Offset = "0x4BC06E0", VA = "0x4BC06E0")]
	internal void ClearMeshInfo(bool updateMesh)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x4BC0790", Offset = "0x4BC0790", VA = "0x4BC0790")]
	internal void ClearLineInfo()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x4BC0950", Offset = "0x4BC0950", VA = "0x4BC0950")]
	internal void ClearPageInfo()
	{
	}

	[Token(Token = "0x600018C")]
	internal static void Resize<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x600018D")]
	internal static void Resize<T>(ref T[] array, int size, bool isBlockAllocated)
	{
	}
}
