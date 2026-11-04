// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsNativeMethods
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Jobs;
using UnityEngine.Scripting;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000058")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal readonly struct PhysicsNativeMethods
{
	[Token(Token = "0x2000059")]
	private struct FastWriteTransformsJob : IJobParallelForTransform
	{
		[Token(Token = "0x40001EA")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<PhysicsBody.TransformWriteTween> TransformWriteTweens;

		[Token(Token = "0x40001EB")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public PhysicsWorld.TransformPlane TransformPlane;

		[Token(Token = "0x40001EC")]
		[FieldOffset(Offset = "0x14")]
		[ReadOnly]
		public bool TransformTweening;

		[Token(Token = "0x600018C")]
		[Address(RVA = "0x2FCEE00", Offset = "0x2FCD400", VA = "0x182FCEE00", Slot = "4")]
		public void Execute(int index, TransformAccess transform)
		{
		}
	}

	[Token(Token = "0x200005A")]
	private struct Slow3DWriteTransformsJob : IJobParallelForTransform
	{
		[Token(Token = "0x40001ED")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<PhysicsBody.TransformWriteTween> TransformWriteTweens;

		[Token(Token = "0x40001EE")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public PhysicsWorld.TransformPlane TransformPlane;

		[Token(Token = "0x40001EF")]
		[FieldOffset(Offset = "0x14")]
		[ReadOnly]
		public bool TransformTweening;

		[Token(Token = "0x600018D")]
		[Address(RVA = "0x2FDAE20", Offset = "0x2FD9420", VA = "0x182FDAE20", Slot = "4")]
		public void Execute(int index, TransformAccess transform)
		{
		}
	}

	[Token(Token = "0x200005B")]
	private struct WriteTransformTweensJob : IJobParallelForTransform
	{
		[Token(Token = "0x40001F0")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeArray<PhysicsBody.TransformWriteTween> TransformWriteTweens;

		[Token(Token = "0x40001F1")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public PhysicsWorld.TransformWriteMode TransformWriteMode;

		[Token(Token = "0x40001F2")]
		[FieldOffset(Offset = "0x14")]
		[ReadOnly]
		public PhysicsWorld.TransformPlane TransformPlane;

		[Token(Token = "0x40001F3")]
		[FieldOffset(Offset = "0x18")]
		[ReadOnly]
		public float InterpolationTime;

		[Token(Token = "0x40001F4")]
		[FieldOffset(Offset = "0x1C")]
		[ReadOnly]
		public float ExtrapolationTime;

		[Token(Token = "0x600018E")]
		[Address(RVA = "0x2FDB680", Offset = "0x2FD9C80", VA = "0x182FDB680", Slot = "4")]
		public void Execute(int index, TransformAccess transform)
		{
		}
	}

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x0")]
	private static TransformAccessArray[] s_WorldTransformAccessArrays;

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2FD52D0", Offset = "0x2FD38D0", VA = "0x182FD52D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CreateWorldTransformAccessArray(PhysicsWorld world, int capacity, int desiredJobCount)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x2FD53F0", Offset = "0x2FD39F0", VA = "0x182FD53F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DestroyWorldTransformAccessArray(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2FD54D0", Offset = "0x2FD3AD0", VA = "0x182FD54D0")]
	private static TransformAccessArray GetWorldTransformAccessArray(PhysicsWorld world)
	{
		return default(TransformAccessArray);
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2FD5820", Offset = "0x2FD3E20", VA = "0x182FD5820")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void WriteWorldTransforms(PhysicsWorld world, PhysicsWorld.TransformWriteMode transformWriteMode, PhysicsWorld.TransformPlane transformPlane, int eventCount, bool transformTweening)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2FD55F0", Offset = "0x2FD3BF0", VA = "0x182FD55F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void WriteTransformTweens(PhysicsWorld world, double lastSimulationTimestamp, float lastSimulationDeltaTime, PhysicsWorld.TransformWriteMode transformWriteMode, PhysicsWorld.TransformPlane transformPlane, PhysicsLowLevelScripting2D.PhysicsBuffer transformWriteTweensBuffer)
	{
	}
}
