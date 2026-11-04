// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MapEditorSceneGrid
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/MapEditorSceneGrid.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x200033B")]
internal class MapEditorSceneGrid : MonoBehaviour
{
	[Token(Token = "0x40010AE")]
	private const int HalfLines = 50;

	[Token(Token = "0x40010AF")]
	[FieldOffset(Offset = "0x20")]
	private readonly Mesh[] _meshes;

	[Token(Token = "0x40010B0")]
	[FieldOffset(Offset = "0x28")]
	private readonly GameObject[] _planes;

	[Token(Token = "0x40010B1")]
	[FieldOffset(Offset = "0x30")]
	private readonly Material[] _materials;

	[Token(Token = "0x40010B2")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool[] _enabledAxes;

	[Token(Token = "0x40010B3")]
	[FieldOffset(Offset = "0x40")]
	private readonly float[] _lastSpacing;

	[Token(Token = "0x40010B4")]
	[FieldOffset(Offset = "0x48")]
	private readonly Vector2[] _lastCenters;

	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x1E71160", Offset = "0x1E6F760", VA = "0x181E71160")]
	private void Awake()
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x1E720F0", Offset = "0x1E706F0", VA = "0x181E720F0")]
	public void SetAxes(HashSet<int> axes)
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x1E721B0", Offset = "0x1E707B0", VA = "0x181E721B0")]
	private void Update()
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x1E71BC0", Offset = "0x1E701C0", VA = "0x181E71BC0")]
	private void RefreshIfNeeded(bool force)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x1E71A30", Offset = "0x1E70030", VA = "0x181E71A30")]
	private static float GetAdaptiveSpacing(float snap, float cameraDistance)
	{
		return default(float);
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x1E71610", Offset = "0x1E6FC10", VA = "0x181E71610")]
	private void CreatePlane(int axis, Color color)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x1E711B0", Offset = "0x1E6F7B0", VA = "0x181E711B0")]
	private static void BuildPlane(Mesh mesh, int axis, int halfLines, float spacing, Vector2 center)
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x1E71A80", Offset = "0x1E70080", VA = "0x181E71A80")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x1E721C0", Offset = "0x1E707C0", VA = "0x181E721C0")]
	public MapEditorSceneGrid()
	{
	}
}
