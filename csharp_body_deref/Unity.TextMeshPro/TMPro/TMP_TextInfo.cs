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
[Token(Token = "0x200009D")]
public class TMP_TextInfo
{
	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x0")]
	internal static Vector2 k_InfinityVectorPositive;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x8")]
	internal static Vector2 k_InfinityVectorNegative;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x10")]
	public TMP_Text textComponent;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x18")]
	public int characterCount;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x1C")]
	public int spriteCount;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x20")]
	public int spaceCount;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x24")]
	public int wordCount;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x28")]
	public int linkCount;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x2C")]
	public int lineCount;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x30")]
	public int pageCount;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x34")]
	public int materialCount;

	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x38")]
	public TMP_CharacterInfo[] characterInfo;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x40")]
	public TMP_WordInfo[] wordInfo;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x48")]
	public TMP_LinkInfo[] linkInfo;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x50")]
	public TMP_LineInfo[] lineInfo;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x58")]
	public TMP_PageInfo[] pageInfo;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x60")]
	public TMP_MeshInfo[] meshInfo;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x68")]
	private TMP_MeshInfo[] m_CachedMeshInfo;

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4C94370", Offset = "0x4C94370", VA = "0x4C94370")]
	public TMP_TextInfo()
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4C944B0", Offset = "0x4C944B0", VA = "0x4C944B0")]
	internal TMP_TextInfo(int characterCount)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4C94600", Offset = "0x4C94600", VA = "0x4C94600")]
	public TMP_TextInfo(TMP_Text textComponent)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4C947B0", Offset = "0x4C947B0", VA = "0x4C947B0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4C94810", Offset = "0x4C94810", VA = "0x4C94810")]
	internal void ClearAllData()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4C94960", Offset = "0x4C94960", VA = "0x4C94960")]
	public void ClearMeshInfo(bool updateMesh)
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4C94A10", Offset = "0x4C94A10", VA = "0x4C94A10")]
	public void ClearAllMeshInfo()
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4C94AC0", Offset = "0x4C94AC0", VA = "0x4C94AC0")]
	public void ResetVertexLayout(bool isVolumetric)
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4C94B70", Offset = "0x4C94B70", VA = "0x4C94B70")]
	public void ClearUnusedVertices(MaterialReference[] materials)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4C94C30", Offset = "0x4C94C30", VA = "0x4C94C30")]
	public void ClearLineInfo()
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4C94DC0", Offset = "0x4C94DC0", VA = "0x4C94DC0")]
	internal void ClearPageInfo()
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4C94E60", Offset = "0x4C94E60", VA = "0x4C94E60")]
	public TMP_MeshInfo[] CopyMeshInfoVertexData()
	{
		return null;
	}

	[Token(Token = "0x60005F6")]
	public static void Resize<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x60005F7")]
	public static void Resize<T>(ref T[] array, int size, bool isBlockAllocated)
	{
	}
}
