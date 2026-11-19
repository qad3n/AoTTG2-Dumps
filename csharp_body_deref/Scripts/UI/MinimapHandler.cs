// ==================== AoTTG2 cross-reference ====================
// Type: UI.MinimapHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MinimapHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Cameras;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000850")]
internal class MinimapHandler : MonoBehaviour
{
	[Token(Token = "0x4002A0E")]
	[FieldOffset(Offset = "0x0")]
	public static MinimapHandler Instance;

	[Token(Token = "0x4002A0F")]
	[FieldOffset(Offset = "0x20")]
	private float _height;

	[Token(Token = "0x4002A10")]
	[FieldOffset(Offset = "0x8")]
	private static Color _mineColor;

	[Token(Token = "0x4002A11")]
	[FieldOffset(Offset = "0x18")]
	private static Color _titanColor;

	[Token(Token = "0x4002A12")]
	[FieldOffset(Offset = "0x28")]
	private static Color _humanColor;

	[Token(Token = "0x4002A13")]
	[FieldOffset(Offset = "0x38")]
	private static Color _teamBlueColor;

	[Token(Token = "0x4002A14")]
	[FieldOffset(Offset = "0x48")]
	private static Color _teamRedColor;

	[Token(Token = "0x4002A15")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _minimapPanel;

	[Token(Token = "0x4002A16")]
	[FieldOffset(Offset = "0x30")]
	private Text _positionLabel;

	[Token(Token = "0x4002A17")]
	[FieldOffset(Offset = "0x38")]
	private Text _compassLabel;

	[Token(Token = "0x4002A18")]
	[FieldOffset(Offset = "0x40")]
	private RawImage[] _images;

	[Token(Token = "0x4002A19")]
	[FieldOffset(Offset = "0x48")]
	private Transform _tileTransform;

	[Token(Token = "0x4002A1A")]
	[FieldOffset(Offset = "0x50")]
	private Transform _maskTransform;

	[Token(Token = "0x4002A1B")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<Vector2Int, Texture2D> _tileTextures;

	[Token(Token = "0x4002A1C")]
	[FieldOffset(Offset = "0x60")]
	private Queue<Vector2Int> _createTileQueue;

	[Token(Token = "0x4002A1D")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<Vector2Int> _finishedTiles;

	[Token(Token = "0x4002A1E")]
	[FieldOffset(Offset = "0x70")]
	private Vector2Int _currentTile;

	[Token(Token = "0x4002A1F")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4002A20")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<Transform, BaseCharacter> _characters;

	[Token(Token = "0x4002A21")]
	[FieldOffset(Offset = "0x88")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x4002A22")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _currentTileCenter;

	[Token(Token = "0x4002A23")]
	[FieldOffset(Offset = "0x9C")]
	private bool _needUpdateTiles;

	[Token(Token = "0x4002A24")]
	private const int MaxTilesFromCenter = 2;

	[Token(Token = "0x6004F7E")]
	[Address(RVA = "0x5C370A0", Offset = "0x5C360A0", VA = "0x5C370A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004F7F")]
	[Address(RVA = "0x5C37480", Offset = "0x5C36480", VA = "0x5C37480")]
	public static void CreateMinimapIcon(Transform transform, string type)
	{
	}

	[Token(Token = "0x6004F80")]
	[Address(RVA = "0x5C37950", Offset = "0x5C36950", VA = "0x5C37950")]
	public static void CreateMinimapIcon(BaseCharacter character)
	{
	}

	[Token(Token = "0x6004F81")]
	[Address(RVA = "0x5C36BB0", Offset = "0x5C35BB0", VA = "0x5C36BB0")]
	public static Dictionary<Transform, Transform> GetIcons()
	{
		return null;
	}

	[Token(Token = "0x6004F82")]
	[Address(RVA = "0x5C37550", Offset = "0x5C36550", VA = "0x5C37550")]
	private static void SetupIcon(string texture, Color color, Transform transform)
	{
	}

	[Token(Token = "0x6004F83")]
	[Address(RVA = "0x5C37D40", Offset = "0x5C36D40", VA = "0x5C37D40")]
	private void Update()
	{
	}

	[Token(Token = "0x6004F84")]
	[Address(RVA = "0x5C39300", Offset = "0x5C38300", VA = "0x5C39300")]
	private void UpdateCompass(InGameCamera camera, Vector3 position, float y)
	{
	}

	[Token(Token = "0x6004F85")]
	[Address(RVA = "0x5C37EC0", Offset = "0x5C36EC0", VA = "0x5C37EC0")]
	private void RemoveOldIcons()
	{
	}

	[Token(Token = "0x6004F86")]
	[Address(RVA = "0x5C38E70", Offset = "0x5C37E70", VA = "0x5C38E70")]
	private void UpdateIcons(Vector3 position, float y)
	{
	}

	[Token(Token = "0x6004F87")]
	[Address(RVA = "0x5C383D0", Offset = "0x5C373D0", VA = "0x5C383D0")]
	private void UpdateTiles(Vector3 position, float rotation)
	{
	}

	[Token(Token = "0x6004F88")]
	[Address(RVA = "0x5C39760", Offset = "0x5C38760", VA = "0x5C39760")]
	private Vector2Int GetCurrentTile(Vector3 position)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6004F89")]
	[Address(RVA = "0x5C397D0", Offset = "0x5C387D0", VA = "0x5C397D0")]
	private Vector3 GetTilePosition(Vector2Int tile)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004F8A")]
	[Address(RVA = "0x5C397F0", Offset = "0x5C387F0", VA = "0x5C397F0")]
	private void CreateTile(Vector2Int tile)
	{
	}

	[Token(Token = "0x6004F8B")]
	[Address(RVA = "0x5C39930", Offset = "0x5C38930", VA = "0x5C39930")]
	public MinimapHandler()
	{
	}
}
