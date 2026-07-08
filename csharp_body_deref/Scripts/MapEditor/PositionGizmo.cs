using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010E")]
internal class PositionGizmo : BaseGizmo
{
	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x38")]
	private Transform _lineX;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x40")]
	private Transform _lineY;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineZ;

	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x50")]
	private Transform _planeXY;

	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x58")]
	private Transform _planeYZ;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x60")]
	private Transform _planeXZ;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x68")]
	private Transform _centerSquare;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x70")]
	private Color SelectedColor;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x80")]
	private Color LineXColor;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x90")]
	private Color LineYColor;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0xA0")]
	private Color LineZColor;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0xB0")]
	private Transform _activeLine;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0xB8")]
	private bool _activeIsPlane;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0xB9")]
	private bool _activeIsCenter;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0xBC")]
	private Plane _dragPlane;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0xCC")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0xD8")]
	private bool _vertexSnapActive;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0xDC")]
	private Vector3 _vertexSnapOrigin;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0xE8")]
	private Transform _snapAnchorTransform;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0xF0")]
	private Vector3 _snapAnchorLocal;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0xFC")]
	private bool _hasSnapAnchor;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x100")]
	private int _axisSnapDirection;

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x104")]
	private Vector2 _axisSnapStartMouse;

	[Token(Token = "0x4000665")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x4000666")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x4000667")]
	private const float VertexSnapWorldRadiusFactor = 0.3f;

	[Token(Token = "0x4000668")]
	private const float VertexSnapWorldRadiusMin = 60f;

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x3F483F0", Offset = "0x3F483F0", VA = "0x3F483F0")]
	public static PositionGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x3F484E0", Offset = "0x3F484E0", VA = "0x3F484E0", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x3F48530", Offset = "0x3F48530", VA = "0x3F48530", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x3F48610", Offset = "0x3F48610", VA = "0x3F48610")]
	private void CreatePlaneHandles()
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x3F48BE0", Offset = "0x3F48BE0", VA = "0x3F48BE0")]
	private Transform CreateCenterSquare()
	{
		return null;
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x3F488B0", Offset = "0x3F488B0", VA = "0x3F488B0")]
	private Transform CreatePlaneHandle(string name, Vector3 axisMask, Color color)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x3F48EB0", Offset = "0x3F48EB0", VA = "0x3F48EB0")]
	private Mesh BuildQuadMesh(Vector3 axisMask, float size)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x3F49370", Offset = "0x3F49370", VA = "0x3F49370", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x3F497C0", Offset = "0x3F497C0", VA = "0x3F497C0", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x3F4BFE0", Offset = "0x3F4BFE0", VA = "0x3F4BFE0")]
	private Vector3 GetPlaneNormal(Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x3F4D9A0", Offset = "0x3F4D9A0", VA = "0x3F4D9A0")]
	private Vector3 ProjectDragOntoPlaneHandle(Vector3 drag, Transform plane)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x3F4DB30", Offset = "0x3F4DB30", VA = "0x3F4DB30")]
	private void ApplySnap(ref Vector3 frameDelta, ref Vector3 mousePoint)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x3F4D630", Offset = "0x3F4D630", VA = "0x3F4D630")]
	private void DoVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x3F4C8D0", Offset = "0x3F4C8D0", VA = "0x3F4C8D0")]
	private void DoAxisSurfaceSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x3F4C110", Offset = "0x3F4C110", VA = "0x3F4C110")]
	private void DoFreeDragVertexSnap(BaseCamera camera)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x3F4E790", Offset = "0x3F4E790", VA = "0x3F4E790")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x3F4E7A0", Offset = "0x3F4E7A0", VA = "0x3F4E7A0")]
	private bool TryFindNearestSceneVertexOnScreen(BaseCamera camera, float screenRadius, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x3F4F0D0", Offset = "0x3F4F0D0", VA = "0x3F4F0D0")]
	private static bool ScreenBoundsIntersectsMouse(Bounds bounds, Camera cam, Vector2 mouseScreen, float screenRadius)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x3F4B790", Offset = "0x3F4B790", VA = "0x3F4B790")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex, out Transform owner, out Vector3 localVertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x3F4E760", Offset = "0x3F4E760", VA = "0x3F4E760")]
	private bool TryFindClosestVertexOnSelection(BaseCamera camera, out Vector3 vertex)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x3F4E560", Offset = "0x3F4E560", VA = "0x3F4E560")]
	private void MoveSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x3F49450", Offset = "0x3F49450", VA = "0x3F49450")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x3F48750", Offset = "0x3F48750", VA = "0x3F48750")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x3F4BF00", Offset = "0x3F4BF00", VA = "0x3F4BF00")]
	private void SetLineColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x3F4F580", Offset = "0x3F4F580", VA = "0x3F4F580")]
	public PositionGizmo()
	{
	}
}
