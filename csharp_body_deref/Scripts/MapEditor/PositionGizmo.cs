// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.PositionGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/PositionGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010F")]
internal class PositionGizmo : BaseGizmo
{
	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x38")]
	private Transform _lineX;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x40")]
	private Transform _lineY;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineZ;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x50")]
	private Transform _planeXY;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x58")]
	private Transform _planeYZ;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x60")]
	private Transform _planeXZ;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x68")]
	private Transform _centerSquare;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x70")]
	private Color SelectedColor;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x80")]
	private Color LineXColor;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x90")]
	private Color LineYColor;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0xA0")]
	private Color LineZColor;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0xB0")]
	private Transform _activeLine;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0xB8")]
	private bool _activeIsPlane;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0xB9")]
	private bool _activeIsCenter;

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0xBC")]
	private Plane _dragPlane;

	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0xCC")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0xD8")]
	private bool _vertexSnapActive;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0xDC")]
	private Vector3 _vertexSnapOrigin;

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0xE8")]
	private Transform _snapAnchorTransform;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0xF0")]
	private Vector3 _snapAnchorLocal;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0xFC")]
	private bool _hasSnapAnchor;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x100")]
	private int _axisSnapDirection;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x104")]
	private Vector2 _axisSnapStartMouse;

	[Token(Token = "0x400066D")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x400066E")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x400066F")]
	private const float VertexSnapWorldRadiusFactor = 0.3f;

	[Token(Token = "0x4000670")]
	private const float VertexSnapWorldRadiusMin = 60f;

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x423D370", Offset = "0x423D370", VA = "0x423D370")]
	public static PositionGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x423D460", Offset = "0x423D460", VA = "0x423D460", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x423D4B0", Offset = "0x423D4B0", VA = "0x423D4B0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x423D590", Offset = "0x423D590", VA = "0x423D590")]
	private void CreatePlaneHandles()
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x423DB60", Offset = "0x423DB60", VA = "0x423DB60")]
	private Transform CreateCenterSquare()
	{
		return null;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x423D830", Offset = "0x423D830", VA = "0x423D830")]
	private Transform CreatePlaneHandle(string name, Vector3 axisMask, Color color)
	{
		return null;
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x423DE30", Offset = "0x423DE30", VA = "0x423DE30")]
	private Mesh BuildQuadMesh(Vector3 axisMask, float size)
	{
		return null;
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x423E2F0", Offset = "0x423E2F0", VA = "0x423E2F0", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x423E740", Offset = "0x423E740", VA = "0x423E740", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4240F60", Offset = "0x4240F60", VA = "0x4240F60")]
	private Vector3 GetPlaneNormal(Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4242920", Offset = "0x4242920", VA = "0x4242920")]
	private Vector3 ProjectDragOntoPlaneHandle(Vector3 drag, Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4242AB0", Offset = "0x4242AB0", VA = "0x4242AB0")]
	private void ApplySnap(ref Vector3 frameDelta, ref Vector3 mousePoint)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x42425B0", Offset = "0x42425B0", VA = "0x42425B0")]
	private void DoVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4241850", Offset = "0x4241850", VA = "0x4241850")]
	private void DoAxisSurfaceSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4241090", Offset = "0x4241090", VA = "0x4241090")]
	private void DoFreeDragVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4243710", Offset = "0x4243710", VA = "0x4243710")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4243720", Offset = "0x4243720", VA = "0x4243720")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, float screenRadius, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4244050", Offset = "0x4244050", VA = "0x4244050")]
	private static bool ScreenBoundsIntersectsMouse(Bounds bounds, Camera cam, Vector2 mouseScreen, float screenRadius)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4240710", Offset = "0x4240710", VA = "0x4240710")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex, out Transform owner, out Vector3 localVertex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x42436E0", Offset = "0x42436E0", VA = "0x42436E0")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x42434E0", Offset = "0x42434E0", VA = "0x42434E0")]
	private void MoveSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x423E3D0", Offset = "0x423E3D0", VA = "0x423E3D0")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x423D6D0", Offset = "0x423D6D0", VA = "0x423D6D0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x4240E80", Offset = "0x4240E80", VA = "0x4240E80")]
	private void SetLineColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4244500", Offset = "0x4244500", VA = "0x4244500")]
	public PositionGizmo()
	{
	}
}
