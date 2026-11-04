// ==================== AoTTG2 cross-reference ====================
// Type: UI.MinimapHandler
// Update status: CHANGED in this game update
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

[Token(Token = "0x20007A3")]
internal class MinimapHandler : MonoBehaviour
{
	[Token(Token = "0x400268F")]
	[FieldOffset(Offset = "0x0")]
	public static MinimapHandler Instance;

	[Token(Token = "0x4002690")]
	[FieldOffset(Offset = "0x20")]
	private float _height;

	[Token(Token = "0x4002691")]
	[FieldOffset(Offset = "0x8")]
	private static Color _mineColor;

	[Token(Token = "0x4002692")]
	[FieldOffset(Offset = "0x18")]
	private static Color _titanColor;

	[Token(Token = "0x4002693")]
	[FieldOffset(Offset = "0x28")]
	private static Color _humanColor;

	[Token(Token = "0x4002694")]
	[FieldOffset(Offset = "0x38")]
	private static Color _teamBlueColor;

	[Token(Token = "0x4002695")]
	[FieldOffset(Offset = "0x48")]
	private static Color _teamRedColor;

	[Token(Token = "0x4002696")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _minimapPanel;

	[Token(Token = "0x4002697")]
	[FieldOffset(Offset = "0x30")]
	private Text _positionLabel;

	[Token(Token = "0x4002698")]
	[FieldOffset(Offset = "0x38")]
	private Text _compassLabel;

	[Token(Token = "0x4002699")]
	[FieldOffset(Offset = "0x40")]
	private RawImage[] _images;

	[Token(Token = "0x400269A")]
	[FieldOffset(Offset = "0x48")]
	private Transform _tileTransform;

	[Token(Token = "0x400269B")]
	[FieldOffset(Offset = "0x50")]
	private Transform _maskTransform;

	[Token(Token = "0x400269C")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<Vector2Int, Texture2D> _tileTextures;

	[Token(Token = "0x400269D")]
	[FieldOffset(Offset = "0x60")]
	private Queue<Vector2Int> _createTileQueue;

	[Token(Token = "0x400269E")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<Vector2Int> _finishedTiles;

	[Token(Token = "0x400269F")]
	[FieldOffset(Offset = "0x70")]
	private Vector2Int _currentTile;

	[Token(Token = "0x40026A0")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x40026A1")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<Transform, BaseCharacter> _characters;

	[Token(Token = "0x40026A2")]
	[FieldOffset(Offset = "0x88")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x40026A3")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _currentTileCenter;

	[Token(Token = "0x40026A4")]
	[FieldOffset(Offset = "0x9C")]
	private bool _needUpdateTiles;

	[Token(Token = "0x40026A5")]
	private const int MaxTilesFromCenter = 2;

	[Token(Token = "0x6004A50")]
	[Address(RVA = "0x225AC10", Offset = "0x2259210", VA = "0x18225AC10")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004A51")]
	[Address(RVA = "0x225B4B0", Offset = "0x2259AB0", VA = "0x18225B4B0")]
	public static void CreateMinimapIcon(Transform transform, string type)
	{
	}

	[Token(Token = "0x6004A52")]
	[Address(RVA = "0x225AFF0", Offset = "0x22595F0", VA = "0x18225AFF0")]
	public static void CreateMinimapIcon(BaseCharacter character)
	{
	}

	[Token(Token = "0x6004A53")]
	[Address(RVA = "0x225B790", Offset = "0x2259D90", VA = "0x18225B790")]
	public static Dictionary<Transform, Transform> GetIcons()
	{
		return null;
	}

	[Token(Token = "0x6004A54")]
	[Address(RVA = "0x225BCF0", Offset = "0x225A2F0", VA = "0x18225BCF0")]
	private static void SetupIcon(string texture, Color color, Transform transform)
	{
	}

	[Token(Token = "0x6004A55")]
	[Address(RVA = "0x225D350", Offset = "0x225B950", VA = "0x18225D350")]
	private void Update()
	{
	}

	[Token(Token = "0x6004A56")]
	[Address(RVA = "0x225C0E0", Offset = "0x225A6E0", VA = "0x18225C0E0")]
	private void UpdateCompass(InGameCamera camera, Vector3 position, float y)
	{
	}

	[Token(Token = "0x6004A57")]
	[Address(RVA = "0x225B8A0", Offset = "0x2259EA0", VA = "0x18225B8A0")]
	private void RemoveOldIcons()
	{
	}

	[Token(Token = "0x6004A58")]
	[Address(RVA = "0x225C4F0", Offset = "0x225AAF0", VA = "0x18225C4F0")]
	private void UpdateIcons(Vector3 position, float y)
	{
	}

	[Token(Token = "0x6004A59")]
	[Address(RVA = "0x225C8F0", Offset = "0x225AEF0", VA = "0x18225C8F0")]
	private void UpdateTiles(Vector3 position, float rotation)
	{
	}

	[Token(Token = "0x6004A5A")]
	[Address(RVA = "0x225B700", Offset = "0x2259D00", VA = "0x18225B700")]
	private Vector2Int GetCurrentTile(Vector3 position)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6004A5B")]
	[Address(RVA = "0x225B860", Offset = "0x2259E60", VA = "0x18225B860")]
	private Vector3 GetTilePosition(Vector2Int tile)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004A5C")]
	[Address(RVA = "0x225B590", Offset = "0x2259B90", VA = "0x18225B590")]
	private void CreateTile(Vector2Int tile)
	{
	}

	[Token(Token = "0x6004A5D")]
	[Address(RVA = "0x225D660", Offset = "0x225BC60", VA = "0x18225D660")]
	public MinimapHandler()
	{
	}
}
