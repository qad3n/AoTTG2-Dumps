// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MapEditorSceneGrid
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/MapEditorSceneGrid.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x200039C")]
internal class MapEditorSceneGrid : MonoBehaviour
{
	[Token(Token = "0x400125A")]
	private const int HalfLines = 50;

	[Token(Token = "0x400125B")]
	[FieldOffset(Offset = "0x20")]
	private readonly Mesh[] _meshes;

	[Token(Token = "0x400125C")]
	[FieldOffset(Offset = "0x28")]
	private readonly GameObject[] _planes;

	[Token(Token = "0x400125D")]
	[FieldOffset(Offset = "0x30")]
	private readonly Material[] _materials;

	[Token(Token = "0x400125E")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool[] _enabledAxes;

	[Token(Token = "0x400125F")]
	[FieldOffset(Offset = "0x40")]
	private readonly float[] _lastSpacing;

	[Token(Token = "0x4001260")]
	[FieldOffset(Offset = "0x48")]
	private readonly Vector2[] _lastCenters;

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x58554B0", Offset = "0x58544B0", VA = "0x58554B0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x5853960", Offset = "0x5852960", VA = "0x5853960")]
	public void SetAxes(HashSet<int> axes)
	{
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x5855E40", Offset = "0x5854E40", VA = "0x5855E40")]
	private void Update()
	{
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x5855930", Offset = "0x5854930", VA = "0x5855930")]
	private void RefreshIfNeeded(bool force)
	{
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x5855E50", Offset = "0x5854E50", VA = "0x5855E50")]
	private static float GetAdaptiveSpacing(float snap, float cameraDistance)
	{
		return default(float);
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x5855500", Offset = "0x5854500", VA = "0x5855500")]
	private void CreatePlane(int axis, Color color)
	{
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x5855E90", Offset = "0x5854E90", VA = "0x5855E90")]
	private static void BuildPlane(Mesh mesh, int axis, int halfLines, float spacing, Vector2 center)
	{
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x58566F0", Offset = "0x58556F0", VA = "0x58566F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x58569E0", Offset = "0x58559E0", VA = "0x58569E0")]
	public MapEditorSceneGrid()
	{
	}
}
