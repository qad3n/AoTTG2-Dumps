// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.MapEditorRuler
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/MapEditorRuler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;
using Utility;

namespace MapEditor;

[Token(Token = "0x200014D")]
public class MapEditorRuler
{
	[Token(Token = "0x400077E")]
	private const float HandleScreenRadius = 18f;

	[Token(Token = "0x400077F")]
	private const float CloseShapeScreenRadius = 22f;

	[Token(Token = "0x4000780")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x4000781")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x4000782")]
	private const float MinLabelScale = 0.15f;

	[Token(Token = "0x4000783")]
	private const float MaxLabelScale = 25f;

	[Token(Token = "0x4000784")]
	private const float CardinalAngleStep = 45f;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<RulerMeasurement> _measurements;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x18")]
	private GameObject _root;

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x20")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x28")]
	private RulerMeasurement _pending;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x30")]
	private RulerMeasurement _dragging;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x38")]
	private bool _dragOrigin;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3? _chainRoot;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x4C")]
	private bool _awaitingFirstPoint;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x4D")]
	private bool _creatingMeasurement;

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x0")]
	private static Shader _visualShader;

	[Token(Token = "0x170000D4")]
	public IReadOnlyList<RulerMeasurement> Measurements
	{
		[Token(Token = "0x6000685")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	public bool Active
	{
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x21F2DD0", Offset = "0x21F13D0", VA = "0x1821F2DD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x21F2DF0", Offset = "0x21F13F0", VA = "0x1821F2DF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public bool IsCreatingMeasurement
	{
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x21F2DE0", Offset = "0x21F13E0", VA = "0x1821F2DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x21F0FD0", Offset = "0x21EF5D0", VA = "0x1821F0FD0")]
	internal void SetActive(bool active, MapEditorMenu menu)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x21F0380", Offset = "0x21EE980", VA = "0x1821F0380")]
	public void CreateNewMeasurement()
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x21F00E0", Offset = "0x21EE6E0", VA = "0x1821F00E0")]
	public void ChainFrom(int index)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x21F0730", Offset = "0x21EED30", VA = "0x1821F0730")]
	public void Delete(int index)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x21F13E0", Offset = "0x21EF9E0", VA = "0x1821F13E0")]
	public void SetOrigin(int index, Vector3 origin)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x21F1180", Offset = "0x21EF780", VA = "0x1821F1180")]
	public void SetLength(int index, float length)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x21F1040", Offset = "0x21EF640", VA = "0x1821F1040")]
	public void SetColor(int index, Color255 color)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x21F27E0", Offset = "0x21F0DE0", VA = "0x1821F27E0")]
	public void Update()
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x21EFAC0", Offset = "0x21EE0C0", VA = "0x1821EFAC0")]
	private RulerMeasurement AddMeasurement(Vector3 origin, Vector3 end, Color255 color)
	{
		return null;
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x21F03C0", Offset = "0x21EE9C0", VA = "0x1821F03C0")]
	private void CreateVisual(RulerMeasurement measurement)
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x21F0220", Offset = "0x21EE820", VA = "0x1821F0220")]
	private static Transform CreateHandle(Transform parent, string name, PrimitiveType primitiveType)
	{
		return null;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x21F0B90", Offset = "0x21EF190", VA = "0x1821F0B90")]
	private static Shader GetVisualShader()
	{
		return null;
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x21F0C60", Offset = "0x21EF260", VA = "0x1821F0C60")]
	private void RefreshVisual(RulerMeasurement measurement)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x21F2240", Offset = "0x21F0840", VA = "0x1821F2240")]
	private void UpdateVisualScale()
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x21EFCB0", Offset = "0x21EE2B0", VA = "0x1821EFCB0")]
	private static Vector3 ApplyPlacementConstraints(Vector3 origin, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x21F15D0", Offset = "0x21EFBD0", VA = "0x1821F15D0")]
	private void TryBeginHandleDrag(Camera camera)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x21F14A0", Offset = "0x21EFAA0", VA = "0x1821F14A0")]
	private Vector3 SnapToChainRoot(Camera camera, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x21F0900", Offset = "0x21EEF00", VA = "0x1821F0900")]
	private Vector3 FindChainRoot(RulerMeasurement source)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x21F1FC0", Offset = "0x21F05C0", VA = "0x1821F1FC0")]
	private static bool TryGetPlacementPoint(Camera camera, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x21F1AD0", Offset = "0x21F00D0", VA = "0x1821F1AD0")]
	private static bool TryGetNearestVertex(Camera camera, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x21F18E0", Offset = "0x21EFEE0", VA = "0x1821F18E0")]
	private static bool TryGetMapPoint(Camera camera, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x21EFFC0", Offset = "0x21EE5C0", VA = "0x1821EFFC0")]
	private void CancelInteraction()
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x21F0850", Offset = "0x21EEE50", VA = "0x1821F0850")]
	private void EnsureRoot()
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x21F2D50", Offset = "0x21F1350", VA = "0x1821F2D50")]
	public MapEditorRuler()
	{
	}
}
