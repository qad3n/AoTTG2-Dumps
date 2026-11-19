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

[Token(Token = "0x200012C")]
public class MapEditorBrush
{
	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x10")]
	public bool Active;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x11")]
	public bool AssetSelectMode;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x14")]
	public BrushMode Mode;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x18")]
	public float Radius;

	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x1C")]
	public int Count;

	[Token(Token = "0x400070F")]
	[FieldOffset(Offset = "0x20")]
	public bool RandomizeEachPlacement;

	[Token(Token = "0x4000710")]
	[FieldOffset(Offset = "0x24")]
	public float SurfaceProjectionLimit;

	[Token(Token = "0x4000711")]
	[FieldOffset(Offset = "0x28")]
	public bool AlignToSurface;

	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x29")]
	public bool FlatPlane;

	[Token(Token = "0x4000713")]
	public const int MaxGridObjects = 1000;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x2C")]
	public int GridX;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x30")]
	public int GridY;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x34")]
	public int GridZ;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x38")]
	public float SpacingX;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x3C")]
	public float SpacingY;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x40")]
	public float SpacingZ;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x44")]
	public bool BoundsSnap;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x48")]
	public int CurveAxis;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x4C")]
	public float CurveAmount;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x50")]
	public List<BrushEntry> Entries;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _circleIndicator;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x60")]
	private LineRenderer _circleRenderer;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _diskIndicator;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x70")]
	private MeshFilter _diskFilter;

	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x78")]
	private Mesh _diskMesh;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x80")]
	private Material _diskMaterial;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x88")]
	private Material _circleMaterial;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x90")]
	private List<GameObject> _ghostObjects;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x98")]
	private List<Material> _ghostMaterials;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0xA0")]
	private List<string> _ghostAssets;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0xA8")]
	private List<Vector3> _ghostScales;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0xB0")]
	private List<Vector3> _ghostRotations;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0xB8")]
	private List<Vector3> _ghostLocalOffsets;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0xC0")]
	private int _ghostIdCounter;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0xC4")]
	private Vector3 _center;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0xD0")]
	private Vector3 _surfaceNormal;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0xDC")]
	private Quaternion _surfaceFrame;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0xEC")]
	private Vector3 _hitNormal;

	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0xF8")]
	private Vector3 _cameraRight;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x104")]
	private Vector3 _cameraPosition;

	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x110")]
	private bool _hasCenter;

	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x114")]
	private int _seed;

	[Token(Token = "0x170000D2")]
	public bool HasCenter
	{
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x5B7FC40", Offset = "0x5B7EC40", VA = "0x5B7FC40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x5B7FC50", Offset = "0x5B7EC50", VA = "0x5B7FC50")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5B81340", Offset = "0x5B80340", VA = "0x5B81340")]
	public void AddEntry(string asset)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x5B81640", Offset = "0x5B80640", VA = "0x5B81640")]
	public void RemoveEntry(int index)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x5B816B0", Offset = "0x5B806B0", VA = "0x5B816B0")]
	public void SetRadius(float radius)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x5B82450", Offset = "0x5B81450", VA = "0x5B82450")]
	public void SetCount(int count)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x5B82480", Offset = "0x5B81480", VA = "0x5B82480")]
	public void SetGrid(int x, int y, int z)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x5B824C0", Offset = "0x5B814C0", VA = "0x5B824C0")]
	public void Reseed()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5B824E0", Offset = "0x5B814E0", VA = "0x5B824E0")]
	public void SetCenter(Vector3 center)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x5B82510", Offset = "0x5B81510", VA = "0x5B82510")]
	public void SetCenter(Vector3 center, Vector3 surfaceNormal, Vector3 cameraRight, Vector3 cameraPosition)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5B83040", Offset = "0x5B82040", VA = "0x5B83040")]
	public void SetAlignToSurface(bool alignToSurface)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x5B82770", Offset = "0x5B81770", VA = "0x5B82770")]
	private void UpdateSurfaceFrame()
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x5B83060", Offset = "0x5B82060", VA = "0x5B83060")]
	public bool TryProjectRayToPlane(Ray ray, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x5B83380", Offset = "0x5B82380", VA = "0x5B83380")]
	public void ClearCenter()
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x5B80230", Offset = "0x5B7F230", VA = "0x5B80230")]
	private void EnsureCircle()
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x5B80070", Offset = "0x5B7F070", VA = "0x5B80070")]
	private void DestroyCircle()
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x5B816F0", Offset = "0x5B806F0", VA = "0x5B816F0")]
	private void UpdateCircle()
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x5B83590", Offset = "0x5B82590", VA = "0x5B83590")]
	private void BuildOverlayVolume()
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x5B839F0", Offset = "0x5B829F0", VA = "0x5B839F0")]
	private void UpdateDisk()
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x5B83DD0", Offset = "0x5B82DD0", VA = "0x5B83DD0")]
	private float GetUpwardProjectionLimit()
	{
		return default(float);
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x5B83730", Offset = "0x5B82730", VA = "0x5B83730")]
	private Vector3 ProjectIndicatorPoint(Vector3 planePoint, int mask, float offset, out bool valid)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x5B806E0", Offset = "0x5B7F6E0", VA = "0x5B806E0")]
	public void RegenerateGhosts()
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x5B85580", Offset = "0x5B84580", VA = "0x5B85580")]
	private void ApplyBoundsSnappedOffsets(int gx, int gy, int gz)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x5B86570", Offset = "0x5B85570", VA = "0x5B86570")]
	private int GetBoundsSnapAxis(int gx, int gy, int gz)
	{
		return default(int);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x5B86600", Offset = "0x5B85600", VA = "0x5B86600")]
	private void SnapLine(int count, Func<int, int> getIndex, Vector3[] sizes, int axis, float gap)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x5B86950", Offset = "0x5B85950", VA = "0x5B86950")]
	private static float GetAxis(Vector3 value, int axis)
	{
		return default(float);
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x5B86970", Offset = "0x5B85970", VA = "0x5B86970")]
	private static void SetAxis(ref Vector3 value, int axis, float component)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x5B85F50", Offset = "0x5B84F50", VA = "0x5B85F50")]
	private static Vector3 GetProjectedBoundsSize(GameObject go, Vector3 axisX, Vector3 axisY, Vector3 axisZ)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x5B84810", Offset = "0x5B83810", VA = "0x5B84810")]
	private BrushEntry PickEntry(System.Random rand, float totalWeight)
	{
		return null;
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x5B84A00", Offset = "0x5B83A00", VA = "0x5B84A00")]
	private MapScriptSceneObject CloneScript(string asset)
	{
		return null;
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x5B7FC90", Offset = "0x5B7EC90", VA = "0x5B7FC90")]
	private void ClearGhosts()
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x5B851F0", Offset = "0x5B841F0", VA = "0x5B851F0")]
	private void ApplyGhostAppearance(GameObject go)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x5B86990", Offset = "0x5B85990", VA = "0x5B86990")]
	private static void TryMakeTransparent(Material m)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x5B81A90", Offset = "0x5B80A90", VA = "0x5B81A90")]
	private void PositionGhosts()
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x5B883D0", Offset = "0x5B873D0", VA = "0x5B883D0")]
	private void ApplyConnectedBoundsSnap(int mask)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x5B88B20", Offset = "0x5B87B20", VA = "0x5B88B20")]
	private void SolveConnectedBoundsSnapLine(int count, Func<int, int> getIndex, Vector3 chainDirection, float gap, int mask)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x5B89CB0", Offset = "0x5B88CB0", VA = "0x5B89CB0")]
	private static void GetBoundsEdgeCenters(GameObject go, Vector3 axis, out Vector3 minimumCenter, out Vector3 maximumCenter)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x5B84170", Offset = "0x5B83170", VA = "0x5B84170")]
	public Vector3 GetAverageGhostSize()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x5B84150", Offset = "0x5B83150", VA = "0x5B84150")]
	private Vector3 ApplyCurve(Vector3 local)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x5B86B80", Offset = "0x5B85B80", VA = "0x5B86B80")]
	private Vector3 ApplyCurve(Vector3 local, out Quaternion tangent)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x5B87360", Offset = "0x5B86360", VA = "0x5B87360")]
	private float GetSupportOffset(GameObject go, Vector3 normal)
	{
		return default(float);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x5B87F20", Offset = "0x5B86F20", VA = "0x5B87F20")]
	private Vector3 ProjectToSurface(GameObject go, Vector3 planePoint, int mask, out Vector3 hitNormal)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x5B845F0", Offset = "0x5B835F0", VA = "0x5B845F0")]
	private bool TryFindClosestSurfaceHit(Vector3 planePoint, int mask, out RaycastHit closestHit)
	{
		return default(bool);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x5B8A480", Offset = "0x5B89480", VA = "0x5B8A480")]
	public List<MapScriptBaseObject> BuildPlacements()
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x5B87DB0", Offset = "0x5B86DB0", VA = "0x5B87DB0")]
	private BrushEntry FindEntry(string asset)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x5B84D70", Offset = "0x5B83D70", VA = "0x5B84D70")]
	private static void ApplyEntryFields(MapScriptSceneObject script, BrushEntry entry)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x5B8A790", Offset = "0x5B89790", VA = "0x5B8A790")]
	public MapEditorBrush()
	{
	}
}
