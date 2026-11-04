// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AnimateCrossFadeJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x200003D")]
[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct AnimateCrossFadeJob : IJobParallelFor
{
	[Token(Token = "0x40000D4")]
	public const int k_BatchSize = 512;

	[Token(Token = "0x40000D5")]
	public const byte k_MeshLODTransitionToLowerLODBit = 128;

	[Token(Token = "0x40000D6")]
	private const byte k_LODFadeOff = 255;

	[Token(Token = "0x40000D7")]
	private const float k_CrossfadeAnimationTimeS = 0.333f;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public float deltaTime;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x8")]
	public UnsafeList<byte> crossFadeArray;

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x2BBC7E0", Offset = "0x2BBADE0", VA = "0x182BBC7E0", Slot = "4")]
	public void Execute(int instanceIndex)
	{
	}
}
