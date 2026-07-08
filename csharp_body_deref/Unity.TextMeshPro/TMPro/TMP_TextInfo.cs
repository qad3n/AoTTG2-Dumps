using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000087")]
public class TMP_TextInfo
{
	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x0")]
	internal static Vector2 k_InfinityVectorPositive;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x8")]
	internal static Vector2 k_InfinityVectorNegative;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x10")]
	public TMP_Text textComponent;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x18")]
	public int characterCount;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x1C")]
	public int spriteCount;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x20")]
	public int spaceCount;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x24")]
	public int wordCount;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x28")]
	public int linkCount;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x2C")]
	public int lineCount;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x30")]
	public int pageCount;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x34")]
	public int materialCount;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x38")]
	public TMP_CharacterInfo[] characterInfo;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x40")]
	public TMP_WordInfo[] wordInfo;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x48")]
	public TMP_LinkInfo[] linkInfo;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x50")]
	public TMP_LineInfo[] lineInfo;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x58")]
	public TMP_PageInfo[] pageInfo;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x60")]
	public TMP_MeshInfo[] meshInfo;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x68")]
	private TMP_MeshInfo[] m_CachedMeshInfo;

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x4946DF0", Offset = "0x4946DF0", VA = "0x4946DF0")]
	public TMP_TextInfo()
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x4946F30", Offset = "0x4946F30", VA = "0x4946F30")]
	internal TMP_TextInfo(int characterCount)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x4947080", Offset = "0x4947080", VA = "0x4947080")]
	public TMP_TextInfo(TMP_Text textComponent)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4947230", Offset = "0x4947230", VA = "0x4947230")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4947290", Offset = "0x4947290", VA = "0x4947290")]
	internal void ClearAllData()
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x49473E0", Offset = "0x49473E0", VA = "0x49473E0")]
	public void ClearMeshInfo(bool updateMesh)
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4947490", Offset = "0x4947490", VA = "0x4947490")]
	public void ClearAllMeshInfo()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4947540", Offset = "0x4947540", VA = "0x4947540")]
	public void ResetVertexLayout(bool isVolumetric)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x49475F0", Offset = "0x49475F0", VA = "0x49475F0")]
	public void ClearUnusedVertices(MaterialReference[] materials)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x49476B0", Offset = "0x49476B0", VA = "0x49476B0")]
	public void ClearLineInfo()
	{
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4947840", Offset = "0x4947840", VA = "0x4947840")]
	internal void ClearPageInfo()
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x49478E0", Offset = "0x49478E0", VA = "0x49478E0")]
	public TMP_MeshInfo[] CopyMeshInfoVertexData()
	{
		return null;
	}

	[Token(Token = "0x6000505")]
	public static void Resize<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000506")]
	public static void Resize<T>(ref T[] array, int size, bool isBlockAllocated)
	{
	}
}
