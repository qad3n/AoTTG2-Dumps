using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000102")]
public class MapEditorBrush
{
	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x10")]
	public bool Active;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x11")]
	public bool AssetSelectMode;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x14")]
	public BrushMode Mode;

	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x18")]
	public float Radius;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x1C")]
	public int Count;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x20")]
	public bool RandomizeEachPlacement;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x24")]
	public int GridX;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x28")]
	public int GridY;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x2C")]
	public int GridZ;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x30")]
	public float SpacingX;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x34")]
	public float SpacingY;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x38")]
	public float SpacingZ;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x3C")]
	public int CurveAxis;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x40")]
	public float CurveAmount;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x48")]
	public List<BrushEntry> Entries;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x50")]
	private GameObject _circleIndicator;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x58")]
	private LineRenderer _circleRenderer;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x60")]
	private GameObject _diskIndicator;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x68")]
	private MeshFilter _diskFilter;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x70")]
	private Mesh _diskMesh;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x78")]
	private List<GameObject> _ghostObjects;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x80")]
	private List<string> _ghostAssets;

	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x88")]
	private List<Vector3> _ghostScales;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x90")]
	private List<Vector3> _ghostRotations;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x98")]
	private List<Vector3> _ghostLocalOffsets;

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0xA0")]
	private int _ghostIdCounter;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0xA4")]
	private Vector3 _center;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0xB0")]
	private bool _hasCenter;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0xB4")]
	private int _seed;

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x3F3E580", Offset = "0x3F3E580", VA = "0x3F3E580")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x3F3FCA0", Offset = "0x3F3FCA0", VA = "0x3F3FCA0")]
	public void AddEntry(string asset)
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x3F3FF90", Offset = "0x3F3FF90", VA = "0x3F3FF90")]
	public void RemoveEntry(int index)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x3F40000", Offset = "0x3F40000", VA = "0x3F40000")]
	public void SetRadius(float radius)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x3F40CC0", Offset = "0x3F40CC0", VA = "0x3F40CC0")]
	public void SetCount(int count)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x3F40CE0", Offset = "0x3F40CE0", VA = "0x3F40CE0")]
	public void Reseed()
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x3F40D00", Offset = "0x3F40D00", VA = "0x3F40D00")]
	public void SetCenter(Vector3 center)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x3F40D30", Offset = "0x3F40D30", VA = "0x3F40D30")]
	public void ClearCenter()
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x3F3E990", Offset = "0x3F3E990", VA = "0x3F3E990")]
	private void EnsureCircle()
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x3F3E850", Offset = "0x3F3E850", VA = "0x3F3E850")]
	private void DestroyCircle()
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x3F40040", Offset = "0x3F40040", VA = "0x3F40040")]
	private void UpdateCircle()
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x3F40F60", Offset = "0x3F40F60", VA = "0x3F40F60")]
	private void UpdateDisk(Vector3[] rim, int mask)
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x3F3EE90", Offset = "0x3F3EE90", VA = "0x3F3EE90")]
	public void RegenerateGhosts()
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x3F412B0", Offset = "0x3F412B0", VA = "0x3F412B0")]
	private BrushEntry PickEntry(System.Random rand, float totalWeight)
	{
		return null;
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x3F414B0", Offset = "0x3F414B0", VA = "0x3F414B0")]
	private MapScriptSceneObject CloneScript(string asset)
	{
		return null;
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x3F3E5C0", Offset = "0x3F3E5C0", VA = "0x3F3E5C0")]
	private void ClearGhosts()
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x3F41CA0", Offset = "0x3F41CA0", VA = "0x3F41CA0")]
	private void ApplyGhostAppearance(GameObject go)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x3F420E0", Offset = "0x3F420E0", VA = "0x3F420E0")]
	private static void TryMakeTransparent(Material m)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x3F404C0", Offset = "0x3F404C0", VA = "0x3F404C0")]
	private void PositionGhosts()
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x3F42F80", Offset = "0x3F42F80", VA = "0x3F42F80")]
	public Vector3 GetAverageGhostSize()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x3F43450", Offset = "0x3F43450", VA = "0x3F43450")]
	private Vector3 ApplyCurve(Vector3 local)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x3F422D0", Offset = "0x3F422D0", VA = "0x3F422D0")]
	private Vector3 ApplyCurve(Vector3 local, out Quaternion tangent)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x3F42980", Offset = "0x3F42980", VA = "0x3F42980")]
	private Vector3 ProjectToGround(GameObject go, Vector3 xz, int mask)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x3F43470", Offset = "0x3F43470", VA = "0x3F43470")]
	public List<MapScriptBaseObject> BuildPlacements()
	{
		return null;
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x3F42DF0", Offset = "0x3F42DF0", VA = "0x3F42DF0")]
	private BrushEntry FindEntry(string asset)
	{
		return null;
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x3F41820", Offset = "0x3F41820", VA = "0x3F41820")]
	private static void ApplyEntryFields(MapScriptSceneObject script, BrushEntry entry)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x3F43790", Offset = "0x3F43790", VA = "0x3F43790")]
	public MapEditorBrush()
	{
	}
}
