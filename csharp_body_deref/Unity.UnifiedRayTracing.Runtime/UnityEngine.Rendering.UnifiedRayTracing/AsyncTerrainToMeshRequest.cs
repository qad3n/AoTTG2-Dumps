// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.AsyncTerrainToMeshRequest
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Jobs;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200003A")]
internal struct AsyncTerrainToMeshRequest
{
	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x0")]
	private JobHandle m_JobHandle;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x10")]
	private ComputeTerrainMeshJob m_Job;

	[Token(Token = "0x17000015")]
	public bool done
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x2D840F0", Offset = "0x2D826F0", VA = "0x182D840F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x2D840A0", Offset = "0x2D826A0", VA = "0x182D840A0")]
	internal AsyncTerrainToMeshRequest(ComputeTerrainMeshJob job, JobHandle jobHandle)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2D83D10", Offset = "0x2D82310", VA = "0x182D83D10")]
	public Mesh GetMesh()
	{
		return null;
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2D84090", Offset = "0x2D82690", VA = "0x182D84090")]
	public void WaitForCompletion()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2D83E70", Offset = "0x2D82470", VA = "0x182D83E70")]
	private List<int> TriangleIndicesWithoutHoles()
	{
		return null;
	}
}
