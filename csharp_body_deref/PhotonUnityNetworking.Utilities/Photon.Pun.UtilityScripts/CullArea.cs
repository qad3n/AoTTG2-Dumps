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

[Token(Token = "0x2000002")]
public class CullArea : MonoBehaviour
{
	[Token(Token = "0x4000001")]
	private const int MAX_NUMBER_OF_ALLOWED_CELLS = 250;

	[Token(Token = "0x4000002")]
	public const int MAX_NUMBER_OF_SUBDIVISIONS = 3;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x20")]
	public readonly byte FIRST_GROUP_ID;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x28")]
	public readonly int[] SUBDIVISION_FIRST_LEVEL_ORDER;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x30")]
	public readonly int[] SUBDIVISION_SECOND_LEVEL_ORDER;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x38")]
	public readonly int[] SUBDIVISION_THIRD_LEVEL_ORDER;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x40")]
	public Vector2 Center;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x48")]
	public Vector2 Size;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x50")]
	public Vector2[] Subdivisions;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x58")]
	public int NumberOfSubdivisions;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x70")]
	public bool YIsUpAxis;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x71")]
	public bool RecreateCellHierarchy;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x72")]
	private byte idCounter;

	[Token(Token = "0x17000001")]
	public int CellCount
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public CellTree CellTree
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Dictionary<int, GameObject> Map
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x1D513E0", Offset = "0x1D4F9E0", VA = "0x181D513E0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x1D51EB0", Offset = "0x1D504B0", VA = "0x181D51EB0")]
	public void OnDrawGizmos()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x1D513F0", Offset = "0x1D4F9F0", VA = "0x181D513F0")]
	private void CreateCellHierarchy()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x1D51950", Offset = "0x1D4FF50", VA = "0x181D51950")]
	private void CreateChildCells(CellTreeNode parent, int cellLevelInHierarchy)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1D51CB0", Offset = "0x1D502B0", VA = "0x181D51CB0")]
	private void DrawCells()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x1D51E30", Offset = "0x1D50430", VA = "0x181D51E30")]
	private bool IsCellCountAllowed()
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x1D51CF0", Offset = "0x1D502F0", VA = "0x181D51CF0")]
	public List<byte> GetActiveCells(Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x1D51F00", Offset = "0x1D50500", VA = "0x181D51F00")]
	public CullArea()
	{
	}
}
