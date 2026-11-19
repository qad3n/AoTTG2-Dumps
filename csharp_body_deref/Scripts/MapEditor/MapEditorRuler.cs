// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.MapEditorRuler
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000155")]
public class MapEditorRuler
{
	[Token(Token = "0x40007CB")]
	private const float HandleScreenRadius = 18f;

	[Token(Token = "0x40007CC")]
	private const float CloseShapeScreenRadius = 22f;

	[Token(Token = "0x40007CD")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x40007CE")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x40007CF")]
	private const float MinLabelScale = 0.15f;

	[Token(Token = "0x40007D0")]
	private const float MaxLabelScale = 25f;

	[Token(Token = "0x40007D1")]
	private const float CardinalAngleStep = 45f;

	[Token(Token = "0x40007D2")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<RulerMeasurement> _measurements;

	[Token(Token = "0x40007D3")]
	[FieldOffset(Offset = "0x18")]
	private GameObject _root;

	[Token(Token = "0x40007D4")]
	[FieldOffset(Offset = "0x20")]
	private MapEditorMenu _menu;

	[Token(Token = "0x40007D5")]
	[FieldOffset(Offset = "0x28")]
	private RulerMeasurement _pending;

	[Token(Token = "0x40007D6")]
	[FieldOffset(Offset = "0x30")]
	private RulerMeasurement _dragging;

	[Token(Token = "0x40007D7")]
	[FieldOffset(Offset = "0x38")]
	private bool _dragOrigin;

	[Token(Token = "0x40007D8")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3? _chainRoot;

	[Token(Token = "0x40007D9")]
	[FieldOffset(Offset = "0x4C")]
	private bool _awaitingFirstPoint;

	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x4D")]
	private bool _creatingMeasurement;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x0")]
	private static Shader _visualShader;

	[Token(Token = "0x170000D6")]
	public IReadOnlyList<RulerMeasurement> Measurements
	{
		[Token(Token = "0x60006F6")]
		[Address(RVA = "0x5CB6B70", Offset = "0x5CB5B70", VA = "0x5CB6B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	public bool Active
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x5CB6B80", Offset = "0x5CB5B80", VA = "0x5CB6B80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006F8")]
		[Address(RVA = "0x5CB6B90", Offset = "0x5CB5B90", VA = "0x5CB6B90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public bool IsCreatingMeasurement
	{
		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x5CB6BA0", Offset = "0x5CB5BA0", VA = "0x5CB6BA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x5CB6BB0", Offset = "0x5CB5BB0", VA = "0x5CB6BB0")]
	internal void SetActive(bool active, MapEditorMenu menu)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x5CB6EF0", Offset = "0x5CB5EF0", VA = "0x5CB6EF0")]
	public void CreateNewMeasurement()
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x5CB6F30", Offset = "0x5CB5F30", VA = "0x5CB6F30")]
	public void ChainFrom(int index)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x5CB74E0", Offset = "0x5CB64E0", VA = "0x5CB74E0")]
	public void Delete(int index)
	{
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x5CB75F0", Offset = "0x5CB65F0", VA = "0x5CB75F0")]
	public void SetOrigin(int index, Vector3 origin)
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x5CB7A90", Offset = "0x5CB6A90", VA = "0x5CB7A90")]
	public void SetLength(int index, float length)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x5CB7D30", Offset = "0x5CB6D30", VA = "0x5CB7D30")]
	public void SetColor(int index, Color255 color)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x5CB7E50", Offset = "0x5CB6E50", VA = "0x5CB7E50")]
	public void Update()
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x5CB72F0", Offset = "0x5CB62F0", VA = "0x5CB72F0")]
	private RulerMeasurement AddMeasurement(Vector3 origin, Vector3 end, Color255 color)
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x5CB9340", Offset = "0x5CB8340", VA = "0x5CB9340")]
	private void CreateVisual(RulerMeasurement measurement)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x5CB9760", Offset = "0x5CB8760", VA = "0x5CB9760")]
	private static Transform CreateHandle(Transform parent, string name, PrimitiveType primitiveType)
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x5CB9690", Offset = "0x5CB8690", VA = "0x5CB9690")]
	private static Shader GetVisualShader()
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x5CB76A0", Offset = "0x5CB66A0", VA = "0x5CB76A0")]
	private void RefreshVisual(RulerMeasurement measurement)
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x5CB82A0", Offset = "0x5CB72A0", VA = "0x5CB82A0")]
	private void UpdateVisualScale()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x5CB8890", Offset = "0x5CB7890", VA = "0x5CB8890")]
	private static Vector3 ApplyPlacementConstraints(Vector3 origin, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x5CB8F60", Offset = "0x5CB7F60", VA = "0x5CB8F60")]
	private void TryBeginHandleDrag(Camera camera)
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x5CB8E00", Offset = "0x5CB7E00", VA = "0x5CB8E00")]
	private Vector3 SnapToChainRoot(Camera camera, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x5CB7020", Offset = "0x5CB6020", VA = "0x5CB7020")]
	private Vector3 FindChainRoot(RulerMeasurement source)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x5CB87F0", Offset = "0x5CB77F0", VA = "0x5CB87F0")]
	private static bool TryGetPlacementPoint(Camera camera, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x5CB98C0", Offset = "0x5CB88C0", VA = "0x5CB98C0")]
	private static bool TryGetNearestVertex(Camera camera, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x5CB9DF0", Offset = "0x5CB8DF0", VA = "0x5CB9DF0")]
	private static bool TryGetMapPoint(Camera camera, out Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x5CB6CC0", Offset = "0x5CB5CC0", VA = "0x5CB6CC0")]
	private void CancelInteraction()
	{
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x5CB6C10", Offset = "0x5CB5C10", VA = "0x5CB6C10")]
	private void EnsureRoot()
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x5CB9F80", Offset = "0x5CB8F80", VA = "0x5CB9F80")]
	public MapEditorRuler()
	{
	}
}
