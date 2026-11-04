// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TilingJob
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C9B340", Offset = "0x2C99940", VA = "0x182C9B340", Slot = "4")]
	public void Execute(int jobIndex)
	{
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x2C9E8A0", Offset = "0x2C9CEA0", VA = "0x182C9E8A0")]
	private void TileLight(int lightIndex)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x2C9D790", Offset = "0x2C9BD90", VA = "0x182C9D790")]
	private void TileLightOrthographic(int lightIndex)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x2CA12C0", Offset = "0x2C9F8C0", VA = "0x182CA12C0")]
	private void TileReflectionProbe(int index)
	{
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x2CA2260", Offset = "0x2CA0860", VA = "0x182CA2260")]
	private float2 ViewToTileSpace(float3 positionVS)
	{
		return default(float2);
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x2CA2190", Offset = "0x2CA0790", VA = "0x182CA2190")]
	private float2 ViewToTileSpaceOrthographic(float3 positionVS)
	{
		return default(float2);
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x2C9B650", Offset = "0x2C99C50", VA = "0x182C9B650")]
	private void ExpandY(float3 positionVS)
	{
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x2C9B470", Offset = "0x2C99A70", VA = "0x182C9B470")]
	private void ExpandOrthographic(float3 positionVS)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x2C9B580", Offset = "0x2C99B80", VA = "0x182C9B580")]
	private void ExpandRangeOrthographic(ref InclusiveRange range, float xVS)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x29F0D70", Offset = "0x29EF370", VA = "0x1829F0D70")]
	private static float square(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x2C9CBF0", Offset = "0x2C9B1F0", VA = "0x182C9CBF0")]
	private static void GetSphereHorizon(float2 center, float radius, float near, float clipRadius, out float2 p0, out float2 p1)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x2C9CEB0", Offset = "0x2C9B4B0", VA = "0x182C9CEB0")]
	private static void GetSphereYPlaneHorizon(float3 center, float sphereRadius, float near, float clipRadius, float y, out float3 left, out float3 right)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x2C9C1A0", Offset = "0x2C9A7A0", VA = "0x182C9C1A0")]
	private static bool GetCircleClipPoints(float3 circleCenter, float3 circleNormal, float circleRadius, float near, out float3 p0, out float3 p1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x2C9D600", Offset = "0x2C9BC00", VA = "0x182C9D600")]
	private static (float, float) IntersectEllipseLine(float a, float b, float3 line)
	{
		return default((float, float));
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x2C9C960", Offset = "0x2C9AF60", VA = "0x182C9C960")]
	private static void GetProjectedCircleHorizon(float2 center, float radius, float2 U, float2 V, out float2 uv1, out float2 uv2)
	{
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x2C9D2C0", Offset = "0x2C9B8C0", VA = "0x182C9D2C0")]
	private static bool IntersectCircleYPlane(float y, float3 circleCenter, float3 circleNormal, float3 circleU, float3 circleV, float circleRadius, out float3 p1, out float3 p2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x2C9C400", Offset = "0x2C9AA00", VA = "0x182C9C400")]
	private static void GetConeSideTangentPoints(float3 vertex, float3 axis, float cosHalfAngle, float circleRadius, float coneHeight, float range, float3 circleU, float3 circleV, out float3 l1, out float3 l2)
	{
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x2C9B100", Offset = "0x2C99700", VA = "0x182C9B100")]
	private static float3 EvaluateNearConic(float near, float3 o, float3 d, float r, float3 u, float3 v, float theta)
	{
		return default(float3);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x2C9B760", Offset = "0x2C99D60", VA = "0x182C9B760")]
	private static float2 FindNearConicTangentTheta(float2 o, float2 d, float r, float2 u, float2 v)
	{
		return default(float2);
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x2C9BA50", Offset = "0x2C9A050", VA = "0x182C9BA50")]
	private static float2 FindNearConicYTheta(float near, float3 o, float3 d, float r, float3 u, float3 v, float y)
	{
		return default(float2);
	}
}
