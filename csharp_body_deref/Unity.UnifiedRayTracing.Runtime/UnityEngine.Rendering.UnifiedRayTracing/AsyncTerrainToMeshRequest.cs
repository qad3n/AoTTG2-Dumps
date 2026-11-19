// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.AsyncTerrainToMeshRequest
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6785590", Offset = "0x6784590", VA = "0x6785590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x6784F30", Offset = "0x6783F30", VA = "0x6784F30")]
	internal AsyncTerrainToMeshRequest(ComputeTerrainMeshJob job, JobHandle jobHandle)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x67853D0", Offset = "0x67843D0", VA = "0x67853D0")]
	public Mesh GetMesh()
	{
		return null;
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x67853C0", Offset = "0x67843C0", VA = "0x67853C0")]
	public void WaitForCompletion()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x67855A0", Offset = "0x67845A0", VA = "0x67855A0")]
	private List<int> TriangleIndicesWithoutHoles()
	{
		return null;
	}
}
