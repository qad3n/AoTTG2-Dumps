// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.PositionGizmo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/PositionGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000146")]
internal class PositionGizmo : BaseGizmo
{
	[Token(Token = "0x400073F")]
	[FieldOffset(Offset = "0x38")]
	private Transform _lineX;

	[Token(Token = "0x4000740")]
	[FieldOffset(Offset = "0x40")]
	private Transform _lineY;

	[Token(Token = "0x4000741")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineZ;

	[Token(Token = "0x4000742")]
	[FieldOffset(Offset = "0x50")]
	private Transform _planeXY;

	[Token(Token = "0x4000743")]
	[FieldOffset(Offset = "0x58")]
	private Transform _planeYZ;

	[Token(Token = "0x4000744")]
	[FieldOffset(Offset = "0x60")]
	private Transform _planeXZ;

	[Token(Token = "0x4000745")]
	[FieldOffset(Offset = "0x68")]
	private Transform _centerSquare;

	[Token(Token = "0x4000746")]
	[FieldOffset(Offset = "0x70")]
	private Color SelectedColor;

	[Token(Token = "0x4000747")]
	[FieldOffset(Offset = "0x80")]
	private Color LineXColor;

	[Token(Token = "0x4000748")]
	[FieldOffset(Offset = "0x90")]
	private Color LineYColor;

	[Token(Token = "0x4000749")]
	[FieldOffset(Offset = "0xA0")]
	private Color LineZColor;

	[Token(Token = "0x400074A")]
	[FieldOffset(Offset = "0xB0")]
	private Transform _activeLine;

	[Token(Token = "0x400074B")]
	[FieldOffset(Offset = "0xB8")]
	private bool _activeIsPlane;

	[Token(Token = "0x400074C")]
	[FieldOffset(Offset = "0xB9")]
	private bool _activeIsCenter;

	[Token(Token = "0x400074D")]
	[FieldOffset(Offset = "0xBC")]
	private Plane _dragPlane;

	[Token(Token = "0x400074E")]
	[FieldOffset(Offset = "0xCC")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x400074F")]
	[FieldOffset(Offset = "0xD8")]
	private bool _vertexSnapActive;

	[Token(Token = "0x4000750")]
	[FieldOffset(Offset = "0xDC")]
	private Vector3 _vertexSnapOrigin;

	[Token(Token = "0x4000751")]
	[FieldOffset(Offset = "0xE8")]
	private Transform _snapAnchorTransform;

	[Token(Token = "0x4000752")]
	[FieldOffset(Offset = "0xF0")]
	private Vector3 _snapAnchorLocal;

	[Token(Token = "0x4000753")]
	[FieldOffset(Offset = "0xFC")]
	private bool _hasSnapAnchor;

	[Token(Token = "0x4000754")]
	[FieldOffset(Offset = "0x100")]
	private int _axisSnapDirection;

	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x104")]
	private Vector2 _axisSnapStartMouse;

	[Token(Token = "0x4000756")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x4000757")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x4000758")]
	private const float VertexSnapWorldRadiusFactor = 0.3f;

	[Token(Token = "0x4000759")]
	private const float VertexSnapWorldRadiusMin = 60f;

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x21F4730", Offset = "0x21F2D30", VA = "0x1821F4730")]
	public static PositionGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x21F5DE0", Offset = "0x21F43E0", VA = "0x1821F5DE0", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x21F3680", Offset = "0x21F1C80", VA = "0x1821F3680", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x21F45B0", Offset = "0x21F2BB0", VA = "0x1821F45B0")]
	private void CreatePlaneHandles()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x21F3F20", Offset = "0x21F2520", VA = "0x1821F3F20")]
	private Transform CreateCenterSquare()
	{
		return null;
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x21F4240", Offset = "0x21F2840", VA = "0x1821F4240")]
	private Transform CreatePlaneHandle(string name, Vector3 axisMask, Color color)
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x21F38D0", Offset = "0x21F1ED0", VA = "0x1821F38D0")]
	private Mesh BuildQuadMesh(Vector3 axisMask, float size)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x21F6140", Offset = "0x21F4740", VA = "0x1821F6140", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x21F7950", Offset = "0x21F5F50", VA = "0x1821F7950", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x21F5A60", Offset = "0x21F4060", VA = "0x1821F5A60")]
	private Vector3 GetPlaneNormal(Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x21F6230", Offset = "0x21F4830", VA = "0x1821F6230")]
	private Vector3 ProjectDragOntoPlaneHandle(Vector3 drag, Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x21F3380", Offset = "0x21F1980", VA = "0x1821F3380")]
	private void ApplySnap(ref Vector3 frameDelta, ref Vector3 mousePoint)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x21F5870", Offset = "0x21F3E70", VA = "0x1821F5870")]
	private void DoVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x21F4820", Offset = "0x21F2E20", VA = "0x1821F4820")]
	private void DoAxisSurfaceSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x21F5250", Offset = "0x21F3850", VA = "0x1821F5250")]
	private void DoFreeDragVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x21F7920", Offset = "0x21F5F20", VA = "0x1821F7920")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x21F7200", Offset = "0x21F5800", VA = "0x1821F7200")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, float screenRadius, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x21F68E0", Offset = "0x21F4EE0", VA = "0x1821F68E0")]
	private static bool ScreenBoundsIntersectsMouse(Bounds bounds, Camera cam, Vector2 mouseScreen, float screenRadius)
	{
		return default(bool);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x21F5BB0", Offset = "0x21F41B0", VA = "0x1821F5BB0")]
	private HashSet<MeshFilter> GetSelectionMeshFilters()
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x21F6BD0", Offset = "0x21F51D0", VA = "0x1821F6BD0")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex, out Transform owner, out Vector3 localVertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x21F71C0", Offset = "0x21F57C0", VA = "0x1821F71C0")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x21F5E40", Offset = "0x21F4440", VA = "0x1821F5E40")]
	private void MoveSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x21F63B0", Offset = "0x21F49B0", VA = "0x1821F63B0")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x21F66F0", Offset = "0x21F4CF0", VA = "0x1821F66F0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x21F6AE0", Offset = "0x21F50E0", VA = "0x1821F6AE0")]
	private void SetLineColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x21F9100", Offset = "0x21F7700", VA = "0x1821F9100")]
	public PositionGizmo()
	{
	}
}
