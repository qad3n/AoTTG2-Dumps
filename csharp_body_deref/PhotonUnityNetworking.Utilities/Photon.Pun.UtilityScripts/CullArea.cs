// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.CullArea
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Culling/CullArea.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000004")]
public class CullArea : MonoBehaviour
{
	[Token(Token = "0x4000006")]
	private const int MAX_NUMBER_OF_ALLOWED_CELLS = 250;

	[Token(Token = "0x4000007")]
	public const int MAX_NUMBER_OF_SUBDIVISIONS = 3;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x20")]
	public readonly byte FIRST_GROUP_ID;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x28")]
	public readonly int[] SUBDIVISION_FIRST_LEVEL_ORDER;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x30")]
	public readonly int[] SUBDIVISION_SECOND_LEVEL_ORDER;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x38")]
	public readonly int[] SUBDIVISION_THIRD_LEVEL_ORDER;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x40")]
	public Vector2 Center;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x48")]
	public Vector2 Size;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x50")]
	public Vector2[] Subdivisions;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x58")]
	public int NumberOfSubdivisions;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x70")]
	public bool YIsUpAxis;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x71")]
	public bool RecreateCellHierarchy;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x72")]
	private byte idCounter;

	[Token(Token = "0x17000001")]
	public int CellCount
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x3EFBE30", Offset = "0x3EFBE30", VA = "0x3EFBE30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3EFBE40", Offset = "0x3EFBE40", VA = "0x3EFBE40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public CellTree CellTree
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3EFBE50", Offset = "0x3EFBE50", VA = "0x3EFBE50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3EFBE60", Offset = "0x3EFBE60", VA = "0x3EFBE60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Dictionary<int, GameObject> Map
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x3EFBE70", Offset = "0x3EFBE70", VA = "0x3EFBE70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3EFBE80", Offset = "0x3EFBE80", VA = "0x3EFBE80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3EFBE90", Offset = "0x3EFBE90", VA = "0x3EFBE90")]
	private void Awake()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3EFC410", Offset = "0x3EFC410", VA = "0x3EFC410")]
	public void OnDrawGizmos()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3EFBEA0", Offset = "0x3EFBEA0", VA = "0x3EFBEA0")]
	private void CreateCellHierarchy()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3EFC530", Offset = "0x3EFC530", VA = "0x3EFC530")]
	private void CreateChildCells(CellTreeNode parent, int cellLevelInHierarchy)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3EFC440", Offset = "0x3EFC440", VA = "0x3EFC440")]
	private void DrawCells()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3EFC460", Offset = "0x3EFC460", VA = "0x3EFC460")]
	private bool IsCellCountAllowed()
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3EFC9B0", Offset = "0x3EFC9B0", VA = "0x3EFC9B0")]
	public List<byte> GetActiveCells(Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3EFCE50", Offset = "0x3EFCE50", VA = "0x3EFCE50")]
	public CullArea()
	{
	}
}
