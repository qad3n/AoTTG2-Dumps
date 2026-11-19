// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000094")]
public class TMP_TextInfo
{
	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x0")]
	internal static Vector2 k_InfinityVectorPositive;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x8")]
	internal static Vector2 k_InfinityVectorNegative;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x10")]
	public TMP_Text textComponent;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x18")]
	public int characterCount;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x1C")]
	public int spriteCount;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x20")]
	public int spaceCount;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x24")]
	public int wordCount;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x28")]
	public int linkCount;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x2C")]
	public int lineCount;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x30")]
	public int pageCount;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x34")]
	public int materialCount;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x38")]
	public TMP_CharacterInfo[] characterInfo;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x40")]
	public TMP_WordInfo[] wordInfo;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x48")]
	public TMP_LinkInfo[] linkInfo;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x50")]
	public TMP_LineInfo[] lineInfo;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x58")]
	public TMP_PageInfo[] pageInfo;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x60")]
	public TMP_MeshInfo[] meshInfo;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x68")]
	private TMP_MeshInfo[] m_CachedMeshInfo;

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x6740810", Offset = "0x673F810", VA = "0x6740810")]
	public TMP_TextInfo()
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x6740950", Offset = "0x673F950", VA = "0x6740950")]
	internal TMP_TextInfo(int characterCount)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x6740AA0", Offset = "0x673FAA0", VA = "0x6740AA0")]
	public TMP_TextInfo(TMP_Text textComponent)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x6740C50", Offset = "0x673FC50", VA = "0x6740C50")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x6740D10", Offset = "0x673FD10", VA = "0x6740D10")]
	internal void ClearAllData()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x6740E60", Offset = "0x673FE60", VA = "0x6740E60")]
	public void ClearMeshInfo(bool updateMesh)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x6740F10", Offset = "0x673FF10", VA = "0x6740F10")]
	public void ClearAllMeshInfo()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x6740FC0", Offset = "0x673FFC0", VA = "0x6740FC0")]
	public void ResetVertexLayout(bool isVolumetric)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x6741070", Offset = "0x6740070", VA = "0x6741070")]
	public void ClearUnusedVertices(MaterialReference[] materials)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x6741130", Offset = "0x6740130", VA = "0x6741130")]
	internal void ClearLineInfo()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x67412D0", Offset = "0x67402D0", VA = "0x67412D0")]
	internal void ClearPageInfo()
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x67413B0", Offset = "0x67403B0", VA = "0x67413B0")]
	public TMP_MeshInfo[] CopyMeshInfoVertexData()
	{
		return null;
	}

	[Token(Token = "0x60005A5")]
	public static void Resize<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x60005A6")]
	public static void Resize<T>(ref T[] array, int size, bool isBlockAllocated)
	{
	}
}
