// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.MapEditorBrush
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/MapEditorBrush.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000124")]
public class MapEditorBrush
{
	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x10")]
	public bool Active;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x11")]
	public bool AssetSelectMode;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x14")]
	public BrushMode Mode;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x18")]
	public float Radius;

	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x1C")]
	public int Count;

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x20")]
	public bool RandomizeEachPlacement;

	[Token(Token = "0x40006C7")]
	[FieldOffset(Offset = "0x24")]
	public float SurfaceProjectionLimit;

	[Token(Token = "0x40006C8")]
	[FieldOffset(Offset = "0x28")]
	public bool AlignToSurface;

	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x29")]
	public bool FlatPlane;

	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x2C")]
	public int GridX;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x30")]
	public int GridY;

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x34")]
	public int GridZ;

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x38")]
	public float SpacingX;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x3C")]
	public float SpacingY;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x40")]
	public float SpacingZ;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x44")]
	public bool BoundsSnap;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x48")]
	public int CurveAxis;

	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x4C")]
	public float CurveAmount;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x50")]
	public List<BrushEntry> Entries;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _circleIndicator;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x60")]
	private LineRenderer _circleRenderer;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _diskIndicator;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x70")]
	private MeshFilter _diskFilter;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x78")]
	private Mesh _diskMesh;

	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x80")]
	private Material _diskMaterial;

	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x88")]
	private List<GameObject> _ghostObjects;

	[Token(Token = "0x40006DB")]
	[FieldOffset(Offset = "0x90")]
	private List<string> _ghostAssets;

	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0x98")]
	private List<Vector3> _ghostScales;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0xA0")]
	private List<Vector3> _ghostRotations;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0xA8")]
	private List<Vector3> _ghostLocalOffsets;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0xB0")]
	private int _ghostIdCounter;

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0xB4")]
	private Vector3 _center;

	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0xC0")]
	private Vector3 _surfaceNormal;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0xCC")]
	private Quaternion _surfaceFrame;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0xDC")]
	private Vector3 _hitNormal;

	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0xE8")]
	private Vector3 _cameraRight;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0xF4")]
	private Vector3 _cameraPosition;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x100")]
	private bool _hasCenter;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x104")]
	private int _seed;

	[Token(Token = "0x170000D1")]
	public bool HasCenter
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x1C41DE0", Offset = "0x1C403E0", VA = "0x181C41DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x20C0C00", Offset = "0x20BF200", VA = "0x1820C0C00")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x20B9990", Offset = "0x20B7F90", VA = "0x1820B9990")]
	public void AddEntry(string asset)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x20C0B50", Offset = "0x20BF150", VA = "0x1820C0B50")]
	public void RemoveEntry(int index)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x20C0FF0", Offset = "0x20BF5F0", VA = "0x1820C0FF0")]
	public void SetRadius(float radius)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x20C0FC0", Offset = "0x20BF5C0", VA = "0x1820C0FC0")]
	public void SetCount(int count)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x20C0BD0", Offset = "0x20BF1D0", VA = "0x1820C0BD0")]
	public void Reseed()
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x20C0F80", Offset = "0x20BF580", VA = "0x1820C0F80")]
	public void SetCenter(Vector3 center)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x20C0E00", Offset = "0x20BF400", VA = "0x1820C0E00")]
	public void SetCenter(Vector3 center, Vector3 surfaceNormal, Vector3 cameraRight, Vector3 cameraPosition)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x20C0DB0", Offset = "0x20BF3B0", VA = "0x1820C0DB0")]
	public void SetAlignToSurface(bool alignToSurface)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x20C3530", Offset = "0x20C1B30", VA = "0x1820C3530")]
	private void UpdateSurfaceFrame()
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x20C2A30", Offset = "0x20C1030", VA = "0x1820C2A30")]
	public bool TryProjectRayToPlane(Ray ray, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x20BC060", Offset = "0x20BA660", VA = "0x1820BC060")]
	public void ClearCenter()
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x20BC940", Offset = "0x20BAF40", VA = "0x1820BC940")]
	private void EnsureCircle()
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x20BC7C0", Offset = "0x20BADC0", VA = "0x1820BC7C0")]
	private void DestroyCircle()
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x20C2CB0", Offset = "0x20C12B0", VA = "0x1820C2CB0")]
	private void UpdateCircle()
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x20BBB40", Offset = "0x20BA140", VA = "0x1820BBB40")]
	private void BuildOverlayVolume()
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x20C30B0", Offset = "0x20C16B0", VA = "0x1820C30B0")]
	private void UpdateDisk()
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x20BE670", Offset = "0x20BCC70", VA = "0x1820BE670")]
	private float GetUpwardProjectionLimit()
	{
		return default(float);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x20BF7E0", Offset = "0x20BDDE0", VA = "0x1820BF7E0")]
	private Vector3 ProjectIndicatorPoint(Vector3 planePoint, int mask, float offset, out bool valid)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x20BFFE0", Offset = "0x20BE5E0", VA = "0x1820BFFE0")]
	public void RegenerateGhosts()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x20B9C40", Offset = "0x20B8240", VA = "0x1820B9C40")]
	private void ApplyBoundsSnappedOffsets(int gx, int gy, int gz)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x20BDB20", Offset = "0x20BC120", VA = "0x1820BDB20")]
	private int GetBoundsSnapAxis(int gx, int gy, int gz)
	{
		return default(int);
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x20C1040", Offset = "0x20BF640", VA = "0x1820C1040")]
	private void SnapLine(int count, Func<int, int> getIndex, Vector3[] sizes, int axis, float gap)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x20BD470", Offset = "0x20BBA70", VA = "0x1820BD470")]
	private static float GetAxis(Vector3 value, int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x20C0DE0", Offset = "0x20BF3E0", VA = "0x1820C0DE0")]
	private static void SetAxis(ref Vector3 value, int axis, float component)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x20BDB90", Offset = "0x20BC190", VA = "0x1820BDB90")]
	private static Vector3 GetProjectedBoundsSize(GameObject go, Vector3 axisX, Vector3 axisY, Vector3 axisZ)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x20BEA10", Offset = "0x20BD010", VA = "0x1820BEA10")]
	private BrushEntry PickEntry(System.Random rand, float totalWeight)
	{
		return null;
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x20BC470", Offset = "0x20BAA70", VA = "0x1820BC470")]
	private MapScriptSceneObject CloneScript(string asset)
	{
		return null;
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x20BC240", Offset = "0x20BA840", VA = "0x1820BC240")]
	private void ClearGhosts()
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x20BB780", Offset = "0x20B9D80", VA = "0x1820BB780")]
	private void ApplyGhostAppearance(GameObject go)
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x20C2840", Offset = "0x20C0E40", VA = "0x1820C2840")]
	private static void TryMakeTransparent(Material m)
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x20BEC00", Offset = "0x20BD200", VA = "0x1820BEC00")]
	private void PositionGhosts()
	{
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x20BA630", Offset = "0x20B8C30", VA = "0x1820BA630")]
	private void ApplyConnectedBoundsSnap(int mask)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x20C1340", Offset = "0x20BF940", VA = "0x1820C1340")]
	private void SolveConnectedBoundsSnapLine(int count, Func<int, int> getIndex, Vector3 chainDirection, float gap, int mask)
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x20BD490", Offset = "0x20BBA90", VA = "0x1820BD490")]
	private static void GetBoundsEdgeCenters(GameObject go, Vector3 axis, out Vector3 minimumCenter, out Vector3 maximumCenter)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x20BD0D0", Offset = "0x20BB6D0", VA = "0x1820BD0D0")]
	public Vector3 GetAverageGhostSize()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x20BB240", Offset = "0x20B9840", VA = "0x1820BB240")]
	private Vector3 ApplyCurve(Vector3 local)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x20BAC80", Offset = "0x20B9280", VA = "0x1820BAC80")]
	private Vector3 ApplyCurve(Vector3 local, out Quaternion tangent)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x20BE140", Offset = "0x20BC740", VA = "0x1820BE140")]
	private float GetSupportOffset(GameObject go, Vector3 normal)
	{
		return default(float);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x20BFA90", Offset = "0x20BE090", VA = "0x1820BFA90")]
	private Vector3 ProjectToSurface(GameObject go, Vector3 planePoint, int mask, out Vector3 hitNormal)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x20C2590", Offset = "0x20C0B90", VA = "0x1820C2590")]
	private bool TryFindClosestSurfaceHit(Vector3 planePoint, int mask, out RaycastHit closestHit)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x20BBD20", Offset = "0x20BA320", VA = "0x1820BBD20")]
	public List<MapScriptBaseObject> BuildPlacements()
	{
		return null;
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x20BCF70", Offset = "0x20BB570", VA = "0x1820BCF70")]
	private BrushEntry FindEntry(string asset)
	{
		return null;
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x20BB2A0", Offset = "0x20B98A0", VA = "0x1820BB2A0")]
	private static void ApplyEntryFields(MapScriptSceneObject script, BrushEntry entry)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x20C3AA0", Offset = "0x20C20A0", VA = "0x1820C3AA0")]
	public MapEditorBrush()
	{
	}
}
