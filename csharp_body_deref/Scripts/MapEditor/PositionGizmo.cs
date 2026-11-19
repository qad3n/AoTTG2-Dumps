// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.PositionGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/PositionGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014E")]
internal class PositionGizmo : BaseGizmo
{
	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineX;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x50")]
	private Transform _lineY;

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x58")]
	private Transform _lineZ;

	[Token(Token = "0x400078F")]
	[FieldOffset(Offset = "0x60")]
	private Transform _planeXY;

	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x68")]
	private Transform _planeYZ;

	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x70")]
	private Transform _planeXZ;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x78")]
	private Transform _centerSquare;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x80")]
	private Color SelectedColor;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x90")]
	private Color LineXColor;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0xA0")]
	private Color LineYColor;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0xB0")]
	private Color LineZColor;

	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0xC0")]
	private Transform _activeLine;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0xC8")]
	private bool _activeIsPlane;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0xC9")]
	private bool _activeIsCenter;

	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0xCC")]
	private Plane _dragPlane;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0xDC")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0xE8")]
	private bool _vertexSnapActive;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0xEC")]
	private Vector3 _vertexSnapOrigin;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0xF8")]
	private Transform _snapAnchorTransform;

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _snapAnchorLocal;

	[Token(Token = "0x40007A0")]
	[FieldOffset(Offset = "0x10C")]
	private bool _hasSnapAnchor;

	[Token(Token = "0x40007A1")]
	[FieldOffset(Offset = "0x110")]
	private int _axisSnapDirection;

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x114")]
	private Vector2 _axisSnapStartMouse;

	[Token(Token = "0x40007A3")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x40007A4")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x40007A5")]
	private const float VertexSnapWorldRadiusFactor = 0.3f;

	[Token(Token = "0x40007A6")]
	private const float VertexSnapWorldRadiusMin = 60f;

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x5B93C80", Offset = "0x5B92C80", VA = "0x5B93C80")]
	public static PositionGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x5B93D70", Offset = "0x5B92D70", VA = "0x5B93D70", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x5B93DC0", Offset = "0x5B92DC0", VA = "0x5B93DC0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x5B93EA0", Offset = "0x5B92EA0", VA = "0x5B93EA0")]
	private void CreatePlaneHandles()
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x5B94430", Offset = "0x5B93430", VA = "0x5B94430")]
	private Transform CreateCenterSquare()
	{
		return null;
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x5B94140", Offset = "0x5B93140", VA = "0x5B94140")]
	private Transform CreatePlaneHandle(string name, Vector3 axisMask, Color color)
	{
		return null;
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x5B94700", Offset = "0x5B93700", VA = "0x5B94700")]
	private Mesh BuildQuadMesh(Vector3 axisMask, float size)
	{
		return null;
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x5B94C60", Offset = "0x5B93C60", VA = "0x5B94C60", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x5B95030", Offset = "0x5B94030", VA = "0x5B95030", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x5B96E60", Offset = "0x5B95E60", VA = "0x5B96E60")]
	private Vector3 GetPlaneNormal(Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x5B98190", Offset = "0x5B97190", VA = "0x5B98190")]
	private Vector3 ProjectDragOntoPlaneHandle(Vector3 drag, Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x5B98300", Offset = "0x5B97300", VA = "0x5B98300")]
	private void ApplySnap(ref Vector3 frameDelta, ref Vector3 mousePoint)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x5B98000", Offset = "0x5B97000", VA = "0x5B98000")]
	private void DoVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x5B97570", Offset = "0x5B96570", VA = "0x5B97570")]
	private void DoAxisSurfaceSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x5B96FB0", Offset = "0x5B95FB0", VA = "0x5B96FB0")]
	private void DoFreeDragVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x5B99030", Offset = "0x5B98030", VA = "0x5B99030")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x5B99040", Offset = "0x5B98040", VA = "0x5B99040")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, float screenRadius, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x5B99CE0", Offset = "0x5B98CE0", VA = "0x5B99CE0")]
	private static bool ScreenBoundsIntersectsMouse(Bounds bounds, Camera cam, Vector2 mouseScreen, float screenRadius)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x5B999B0", Offset = "0x5B989B0", VA = "0x5B999B0")]
	private HashSet<MeshFilter> GetSelectionMeshFilters()
	{
		return null;
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x5B96740", Offset = "0x5B95740", VA = "0x5B96740")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex, out Transform owner, out Vector3 localVertex)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x5B99010", Offset = "0x5B98010", VA = "0x5B99010")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x5B98D00", Offset = "0x5B97D00", VA = "0x5B98D00")]
	private void MoveSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x5B94D40", Offset = "0x5B93D40", VA = "0x5B94D40")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x5B93FE0", Offset = "0x5B92FE0", VA = "0x5B93FE0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x5B96D80", Offset = "0x5B95D80", VA = "0x5B96D80")]
	private void SetLineColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x5B9A070", Offset = "0x5B99070", VA = "0x5B9A070")]
	public PositionGizmo()
	{
	}
}
