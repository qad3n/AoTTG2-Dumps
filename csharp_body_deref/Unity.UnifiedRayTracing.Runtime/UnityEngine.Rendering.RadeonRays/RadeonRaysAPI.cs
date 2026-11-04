// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.RadeonRaysAPI
// Update status: NEW in this game update
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
	[Address(RVA = "0x2D92210", Offset = "0x2D90810", VA = "0x182D92210")]
	public RadeonRaysAPI(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2D91B70", Offset = "0x2D90170", VA = "0x182D91B70", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2D91660", Offset = "0x2D8FC60", VA = "0x182D91660")]
	public static int BvhInternalNodeSizeInDwords()
	{
		return default(int);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2D91600", Offset = "0x2D8FC00", VA = "0x182D91600")]
	public static int BvhInternalNodeSizeInBytes()
	{
		return default(int);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2D916C0", Offset = "0x2D8FCC0", VA = "0x182D916C0")]
	public static int BvhLeafNodeSizeInBytes()
	{
		return default(int);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2D91720", Offset = "0x2D8FD20", VA = "0x182D91720")]
	public static int BvhLeafNodeSizeInDwords()
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2D91140", Offset = "0x2D8F740", VA = "0x182D91140")]
	public void BuildMeshAccelStruct(CommandBuffer cmd, MeshBuildInfo buildInfo, BuildFlags buildFlags, GraphicsBuffer scratchBuffer, in BottomLevelLevelAccelStruct result)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2D91BA0", Offset = "0x2D901A0", VA = "0x182D91BA0")]
	public MeshBuildMemoryRequirements GetMeshBuildMemoryRequirements(MeshBuildInfo buildInfo, BuildFlags buildFlags)
	{
		return default(MeshBuildMemoryRequirements);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2D91230", Offset = "0x2D8F830", VA = "0x182D91230")]
	public TopLevelAccelStruct BuildSceneAccelStruct(CommandBuffer cmd, GraphicsBuffer meshAccelStructsBuffer, Instance[] instances, GraphicsBuffer scratchBuffer)
	{
		return default(TopLevelAccelStruct);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2D91780", Offset = "0x2D8FD80", VA = "0x182D91780")]
	public TopLevelAccelStruct CreateSceneAccelStructBuffers(GraphicsBuffer meshAccelStructsBuffer, uint tlasSizeInDwords, Instance[] instances)
	{
		return default(TopLevelAccelStruct);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2D91D00", Offset = "0x2D90300", VA = "0x182D91D00")]
	public SceneBuildMemoryRequirements GetSceneBuildMemoryRequirements(uint instanceCount)
	{
		return default(SceneBuildMemoryRequirements);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2D91D90", Offset = "0x2D90390", VA = "0x182D91D90")]
	public SceneMemoryRequirements GetSceneMemoryRequirements(MeshBuildInfo[] buildInfos, BuildFlags buildFlags)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2D92200", Offset = "0x2D90800", VA = "0x182D92200")]
	public static ulong GetTraceMemoryRequirements(uint rayCount)
	{
		return default(ulong);
	}
}
