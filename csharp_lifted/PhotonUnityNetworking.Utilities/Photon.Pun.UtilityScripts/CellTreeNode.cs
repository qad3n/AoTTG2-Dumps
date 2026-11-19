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
	[Address(RVA = "0x56E85C0", Offset = "0x56E75C0", VA = "0x56E85C0")]
	public CellTreeNode()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x56E7A50", Offset = "0x56E6A50", VA = "0x56E7A50")]
	public CellTreeNode(byte id, ENodeType nodeType, CellTreeNode parent)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x56E7EE0", Offset = "0x56E6EE0", VA = "0x56E7EE0")]
	public void AddChild(CellTreeNode child)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x56E7FD0", Offset = "0x56E6FD0", VA = "0x56E7FD0")]
	public void Draw()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x56E8100", Offset = "0x56E7100", VA = "0x56E8100")]
	public void GetActiveCells(List<byte> activeCells, bool yIsUpAxis, Vector3 position)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x56E8630", Offset = "0x56E7630", VA = "0x56E8630")]
	public bool IsPointInsideCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x56E85D0", Offset = "0x56E75D0", VA = "0x56E85D0")]
	public bool IsPointNearCell(bool yIsUpAxis, Vector3 point)
	{
		return default(bool);
	}
}
