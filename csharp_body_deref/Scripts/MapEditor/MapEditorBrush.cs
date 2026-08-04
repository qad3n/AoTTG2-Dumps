// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.MapEditorBrush
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000103")]
public class MapEditorBrush
{
	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x10")]
	public bool Active;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x11")]
	public bool AssetSelectMode;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x14")]
	public BrushMode Mode;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x18")]
	public float Radius;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x1C")]
	public int Count;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x20")]
	public bool RandomizeEachPlacement;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x24")]
	public int GridX;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x28")]
	public int GridY;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x2C")]
	public int GridZ;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x30")]
	public float SpacingX;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x34")]
	public float SpacingY;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x38")]
	public float SpacingZ;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x3C")]
	public int CurveAxis;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x40")]
	public float CurveAmount;

	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x48")]
	public List<BrushEntry> Entries;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x50")]
	private GameObject _circleIndicator;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x58")]
	private LineRenderer _circleRenderer;

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x60")]
	private GameObject _diskIndicator;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x68")]
	private MeshFilter _diskFilter;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x70")]
	private Mesh _diskMesh;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x78")]
	private List<GameObject> _ghostObjects;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x80")]
	private List<string> _ghostAssets;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x88")]
	private List<Vector3> _ghostScales;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x90")]
	private List<Vector3> _ghostRotations;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x98")]
	private List<Vector3> _ghostLocalOffsets;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0xA0")]
	private int _ghostIdCounter;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0xA4")]
	private Vector3 _center;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0xB0")]
	private bool _hasCenter;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0xB4")]
	private int _seed;

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x42333C0", Offset = "0x42333C0", VA = "0x42333C0")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4234AE0", Offset = "0x4234AE0", VA = "0x4234AE0")]
	public void AddEntry(string asset)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4234DD0", Offset = "0x4234DD0", VA = "0x4234DD0")]
	public void RemoveEntry(int index)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4234E40", Offset = "0x4234E40", VA = "0x4234E40")]
	public void SetRadius(float radius)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4235B00", Offset = "0x4235B00", VA = "0x4235B00")]
	public void SetCount(int count)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4235B20", Offset = "0x4235B20", VA = "0x4235B20")]
	public void Reseed()
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4235B40", Offset = "0x4235B40", VA = "0x4235B40")]
	public void SetCenter(Vector3 center)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4235B70", Offset = "0x4235B70", VA = "0x4235B70")]
	public void ClearCenter()
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x42337D0", Offset = "0x42337D0", VA = "0x42337D0")]
	private void EnsureCircle()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4233690", Offset = "0x4233690", VA = "0x4233690")]
	private void DestroyCircle()
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4234E80", Offset = "0x4234E80", VA = "0x4234E80")]
	private void UpdateCircle()
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4235DA0", Offset = "0x4235DA0", VA = "0x4235DA0")]
	private void UpdateDisk(Vector3[] rim, int mask)
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4233CD0", Offset = "0x4233CD0", VA = "0x4233CD0")]
	public void RegenerateGhosts()
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x42360F0", Offset = "0x42360F0", VA = "0x42360F0")]
	private BrushEntry PickEntry(System.Random rand, float totalWeight)
	{
		return null;
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x42362F0", Offset = "0x42362F0", VA = "0x42362F0")]
	private MapScriptSceneObject CloneScript(string asset)
	{
		return null;
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4233400", Offset = "0x4233400", VA = "0x4233400")]
	private void ClearGhosts()
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4236AE0", Offset = "0x4236AE0", VA = "0x4236AE0")]
	private void ApplyGhostAppearance(GameObject go)
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4236F20", Offset = "0x4236F20", VA = "0x4236F20")]
	private static void TryMakeTransparent(Material m)
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4235300", Offset = "0x4235300", VA = "0x4235300")]
	private void PositionGhosts()
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4237DC0", Offset = "0x4237DC0", VA = "0x4237DC0")]
	public Vector3 GetAverageGhostSize()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4238290", Offset = "0x4238290", VA = "0x4238290")]
	private Vector3 ApplyCurve(Vector3 local)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4237110", Offset = "0x4237110", VA = "0x4237110")]
	private Vector3 ApplyCurve(Vector3 local, out Quaternion tangent)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x42377C0", Offset = "0x42377C0", VA = "0x42377C0")]
	private Vector3 ProjectToGround(GameObject go, Vector3 xz, int mask)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x42382B0", Offset = "0x42382B0", VA = "0x42382B0")]
	public List<MapScriptBaseObject> BuildPlacements()
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4237C30", Offset = "0x4237C30", VA = "0x4237C30")]
	private BrushEntry FindEntry(string asset)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4236660", Offset = "0x4236660", VA = "0x4236660")]
	private static void ApplyEntryFields(MapScriptSceneObject script, BrushEntry entry)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x42385D0", Offset = "0x42385D0", VA = "0x42385D0")]
	public MapEditorBrush()
	{
	}
}
