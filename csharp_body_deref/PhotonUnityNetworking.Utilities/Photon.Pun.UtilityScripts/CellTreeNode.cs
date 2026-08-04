// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.CellTreeNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Culling/CullArea.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3EFCFC0", Offset = "0x3EFCFC0", VA = "0x3EFCFC0")]
	public CellTreeNode()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3EFC4F0", Offset = "0x3EFC4F0", VA = "0x3EFC4F0")]
	public CellTreeNode(byte id, ENodeType nodeType, CellTreeNode parent)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3EFC8B0", Offset = "0x3EFC8B0", VA = "0x3EFC8B0")]
	public void AddChild(CellTreeNode child)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3EFC9A0", Offset = "0x3EFC9A0", VA = "0x3EFC9A0")]
	public void Draw()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3EFCAD0", Offset = "0x3EFCAD0", VA = "0x3EFCAD0")]
	public void GetActiveCells(List<byte> activeCells, bool yIsUpAxis, Vector3 position)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3EFD040", Offset = "0x3EFD040", VA = "0x3EFD040")]
	public bool IsPointInsideCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3EFCFD0", Offset = "0x3EFCFD0", VA = "0x3EFCFD0")]
	public bool IsPointNearCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}
}
