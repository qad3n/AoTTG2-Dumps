// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TilingJob
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001BC")]
[BurstCompile(FloatMode = FloatMode.Default, DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct TilingJob : IJobFor
{
	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<VisibleLight> lights;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<VisibleReflectionProbe> reflectionProbes;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x20")]
	[ReadOnly]
	public bool reflectionProbeRotation;

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x28")]
	[NativeDisableParallelForRestriction]
	public NativeArray<InclusiveRange> tileRanges;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x38")]
	public int itemsPerTile;

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x3C")]
	public int rangesPerItem;

	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x40")]
	public Fixed2<float4x4> worldToViews;

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0xC0")]
	public float2 tileScale;

	[Token(Token = "0x4000982")]
	[FieldOffset(Offset = "0xC8")]
	public float2 tileScaleInv;

	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0xD0")]
	public Fixed2<float> viewPlaneBottoms;

	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0xD8")]
	public Fixed2<float> viewPlaneTops;

	[Token(Token = "0x4000985")]
	[FieldOffset(Offset = "0xE0")]
	public Fixed2<float4> viewToViewportScaleBiases;

	[Token(Token = "0x4000986")]
	[FieldOffset(Offset = "0x100")]
	public int2 tileCount;

	[Token(Token = "0x4000987")]
	[FieldOffset(Offset = "0x108")]
	public float near;

	[Token(Token = "0x4000988")]
	[FieldOffset(Offset = "0x10C")]
	public bool isOrthographic;

	[Token(Token = "0x4000989")]
	[FieldOffset(Offset = "0x10E")]
	private InclusiveRange m_TileYRange;

	[Token(Token = "0x400098A")]
	[FieldOffset(Offset = "0x114")]
	private int m_Offset;

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x118")]
	private int m_ViewIndex;

	[Token(Token = "0x400098C")]
	[FieldOffset(Offset = "0x11C")]
	private float2 m_CenterOffset;

	[Token(Token = "0x400098D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly float3[] k_CubePoints;

	[Token(Token = "0x400098E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int4[] k_CubeLineIndices;

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x6693D00", Offset = "0x6692D00", VA = "0x6693D00", Slot = "4")]
	public void Execute(int jobIndex)
	{
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x6695560", Offset = "0x6694560", VA = "0x6695560")]
	private void TileLight(int lightIndex)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x6693DF0", Offset = "0x6692DF0", VA = "0x6693DF0")]
	private void TileLightOrthographic(int lightIndex)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x6698800", Offset = "0x6697800", VA = "0x6698800")]
	private void TileReflectionProbe(int index)
	{
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x669B4F0", Offset = "0x669A4F0", VA = "0x669B4F0")]
	private float2 ViewToTileSpace(float3 positionVS)
	{
		return default(float2);
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x669CA80", Offset = "0x669BA80", VA = "0x669CA80")]
	private float2 ViewToTileSpaceOrthographic(float3 positionVS)
	{
		return default(float2);
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x6699710", Offset = "0x6698710", VA = "0x6699710")]
	private void ExpandY(float3 positionVS)
	{
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x669C640", Offset = "0x669B640", VA = "0x669C640")]
	private void ExpandOrthographic(float3 positionVS)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x669C940", Offset = "0x669B940", VA = "0x669C940")]
	private void ExpandRangeOrthographic(ref InclusiveRange range, float xVS)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x66998E0", Offset = "0x66988E0", VA = "0x66998E0")]
	private static float square(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x66998F0", Offset = "0x66988F0", VA = "0x66998F0")]
	private static void GetSphereHorizon(float2 center, float radius, float near, float clipRadius, out float2 p0, out float2 p1)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x669BFF0", Offset = "0x669AFF0", VA = "0x669BFF0")]
	private static void GetSphereYPlaneHorizon(float3 center, float sphereRadius, float near, float clipRadius, float y, out float3 left, out float3 right)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x669A100", Offset = "0x6699100", VA = "0x669A100")]
	private static bool GetCircleClipPoints(float3 circleCenter, float3 circleNormal, float circleRadius, float near, out float3 p0, out float3 p1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x669CB10", Offset = "0x669BB10", VA = "0x669CB10")]
	private static (float, float) IntersectEllipseLine(float a, float b, float3 line)
	{
		return default((float, float));
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x6699E30", Offset = "0x6698E30", VA = "0x6699E30")]
	private static void GetProjectedCircleHorizon(float2 center, float radius, float2 U, float2 V, out float2 uv1, out float2 uv2)
	{
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x669B590", Offset = "0x669A590", VA = "0x669B590")]
	private static bool IntersectCircleYPlane(float y, float3 circleCenter, float3 circleNormal, float3 circleU, float3 circleV, float circleRadius, out float3 p1, out float3 p2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x669ABC0", Offset = "0x6699BC0", VA = "0x669ABC0")]
	private static void GetConeSideTangentPoints(float3 vertex, float3 axis, float cosHalfAngle, float circleRadius, float coneHeight, float range, float3 circleU, float3 circleV, out float3 l1, out float3 l2)
	{
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x669A7B0", Offset = "0x66997B0", VA = "0x669A7B0")]
	private static float3 EvaluateNearConic(float near, float3 o, float3 d, float r, float3 u, float3 v, float theta)
	{
		return default(float3);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x669A410", Offset = "0x6699410", VA = "0x669A410")]
	private static float2 FindNearConicTangentTheta(float2 o, float2 d, float r, float2 u, float2 v)
	{
		return default(float2);
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x669B970", Offset = "0x669A970", VA = "0x669B970")]
	private static float2 FindNearConicYTheta(float near, float3 o, float3 d, float r, float3 u, float3 v, float y)
	{
		return default(float2);
	}
}
