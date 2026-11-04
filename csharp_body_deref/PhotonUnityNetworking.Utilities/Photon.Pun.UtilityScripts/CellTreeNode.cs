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

[Token(Token = "0x2000004")]
public class CellTreeNode
{
	[Token(Token = "0x2000005")]
	public enum ENodeType : byte
	{
		[Token(Token = "0x400001C")]
		Root,
		[Token(Token = "0x400001D")]
		Node,
		[Token(Token = "0x400001E")]
		Leaf
	}

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x10")]
	public byte Id;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x14")]
	public Vector3 Center;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x20")]
	public Vector3 Size;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 TopLeft;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x38")]
	public Vector3 BottomRight;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x44")]
	public ENodeType NodeType;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x48")]
	public CellTreeNode Parent;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x50")]
	public List<CellTreeNode> Childs;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x58")]
	private float maxDistance;

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CellTreeNode()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x1D502C0", Offset = "0x1D4E8C0", VA = "0x181D502C0")]
	public CellTreeNode(byte id, ENodeType nodeType, CellTreeNode parent)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D4FE00", Offset = "0x1D4E400", VA = "0x181D4FE00")]
	public void AddChild(CellTreeNode child)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Draw()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D4FF10", Offset = "0x1D4E510", VA = "0x181D4FF10")]
	public void GetActiveCells(List<byte> activeCells, bool yIsUpAxis, Vector3 position)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x1D50200", Offset = "0x1D4E800", VA = "0x181D50200")]
	public bool IsPointInsideCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x1D50250", Offset = "0x1D4E850", VA = "0x181D50250")]
	public bool IsPointNearCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}
}
