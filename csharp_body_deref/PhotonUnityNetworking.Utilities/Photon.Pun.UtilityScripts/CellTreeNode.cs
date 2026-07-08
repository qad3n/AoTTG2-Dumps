using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000006")]
public class CellTreeNode
{
	[Token(Token = "0x2000007")]
	public enum ENodeType : byte
	{
		[Token(Token = "0x4000021")]
		Root,
		[Token(Token = "0x4000022")]
		Node,
		[Token(Token = "0x4000023")]
		Leaf
	}

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x10")]
	public byte Id;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x14")]
	public Vector3 Center;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x20")]
	public Vector3 Size;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 TopLeft;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x38")]
	public Vector3 BottomRight;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x44")]
	public ENodeType NodeType;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x48")]
	public CellTreeNode Parent;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x50")]
	public List<CellTreeNode> Childs;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x58")]
	private float maxDistance;

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3BE4AF0", Offset = "0x3BE4AF0", VA = "0x3BE4AF0")]
	public CellTreeNode()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3BE4020", Offset = "0x3BE4020", VA = "0x3BE4020")]
	public CellTreeNode(byte id, ENodeType nodeType, CellTreeNode parent)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3BE43E0", Offset = "0x3BE43E0", VA = "0x3BE43E0")]
	public void AddChild(CellTreeNode child)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3BE44D0", Offset = "0x3BE44D0", VA = "0x3BE44D0")]
	public void Draw()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3BE4600", Offset = "0x3BE4600", VA = "0x3BE4600")]
	public void GetActiveCells(List<byte> activeCells, bool yIsUpAxis, Vector3 position)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3BE4B70", Offset = "0x3BE4B70", VA = "0x3BE4B70")]
	public bool IsPointInsideCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3BE4B00", Offset = "0x3BE4B00", VA = "0x3BE4B00")]
	public bool IsPointNearCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}
}
