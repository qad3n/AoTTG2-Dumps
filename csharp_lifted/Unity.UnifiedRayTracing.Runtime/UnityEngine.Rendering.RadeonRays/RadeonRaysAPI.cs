// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.RadeonRaysAPI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200001C")]
internal class RadeonRaysAPI : IDisposable
{
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x10")]
	private readonly HlbvhBuilder buildBvh;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x18")]
	private readonly HlbvhTopLevelBuilder buildTopLevelBvh;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x20")]
	private readonly RestructureBvh restructureBvh;

	[Token(Token = "0x400008F")]
	public const GraphicsBuffer.Target BufferTarget = GraphicsBuffer.Target.Structured;

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6778930", Offset = "0x6777930", VA = "0x6778930")]
	public RadeonRaysAPI(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x6778B60", Offset = "0x6777B60", VA = "0x6778B60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x6778BA0", Offset = "0x6777BA0", VA = "0x6778BA0")]
	public static int BvhInternalNodeSizeInDwords()
	{
		return default(int);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x6778C00", Offset = "0x6777C00", VA = "0x6778C00")]
	public static int BvhInternalNodeSizeInBytes()
	{
		return default(int);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x6778C80", Offset = "0x6777C80", VA = "0x6778C80")]
	public static int BvhLeafNodeSizeInBytes()
	{
		return default(int);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x6778D00", Offset = "0x6777D00", VA = "0x6778D00")]
	public static int BvhLeafNodeSizeInDwords()
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x6778D60", Offset = "0x6777D60", VA = "0x6778D60")]
	public void BuildMeshAccelStruct(CommandBuffer cmd, MeshBuildInfo buildInfo, BuildFlags buildFlags, GraphicsBuffer scratchBuffer, in BottomLevelLevelAccelStruct result)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x6779280", Offset = "0x6778280", VA = "0x6779280")]
	public MeshBuildMemoryRequirements GetMeshBuildMemoryRequirements(MeshBuildInfo buildInfo, BuildFlags buildFlags)
	{
		return default(MeshBuildMemoryRequirements);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x67793B0", Offset = "0x67783B0", VA = "0x67793B0")]
	public TopLevelAccelStruct BuildSceneAccelStruct(CommandBuffer cmd, GraphicsBuffer meshAccelStructsBuffer, Instance[] instances, GraphicsBuffer scratchBuffer)
	{
		return default(TopLevelAccelStruct);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6779610", Offset = "0x6778610", VA = "0x6779610")]
	public TopLevelAccelStruct CreateSceneAccelStructBuffers(GraphicsBuffer meshAccelStructsBuffer, uint tlasSizeInDwords, Instance[] instances)
	{
		return default(TopLevelAccelStruct);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x67799B0", Offset = "0x67789B0", VA = "0x67799B0")]
	public SceneBuildMemoryRequirements GetSceneBuildMemoryRequirements(uint instanceCount)
	{
		return default(SceneBuildMemoryRequirements);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6779A00", Offset = "0x6778A00", VA = "0x6779A00")]
	public SceneMemoryRequirements GetSceneMemoryRequirements(MeshBuildInfo[] buildInfos, BuildFlags buildFlags)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6779F20", Offset = "0x6778F20", VA = "0x6779F20")]
	public static ulong GetTraceMemoryRequirements(uint rayCount)
	{
		return default(ulong);
	}
}
