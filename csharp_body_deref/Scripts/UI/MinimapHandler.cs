// ==================== AoTTG2 cross-reference ====================
// Type: UI.MinimapHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MinimapHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Cameras;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000646")]
internal class MinimapHandler : MonoBehaviour
{
	[Token(Token = "0x4001EC4")]
	[FieldOffset(Offset = "0x0")]
	public static MinimapHandler Instance;

	[Token(Token = "0x4001EC5")]
	[FieldOffset(Offset = "0x20")]
	private float _height;

	[Token(Token = "0x4001EC6")]
	[FieldOffset(Offset = "0x8")]
	private static Color _mineColor;

	[Token(Token = "0x4001EC7")]
	[FieldOffset(Offset = "0x18")]
	private static Color _titanColor;

	[Token(Token = "0x4001EC8")]
	[FieldOffset(Offset = "0x28")]
	private static Color _humanColor;

	[Token(Token = "0x4001EC9")]
	[FieldOffset(Offset = "0x38")]
	private static Color _teamBlueColor;

	[Token(Token = "0x4001ECA")]
	[FieldOffset(Offset = "0x48")]
	private static Color _teamRedColor;

	[Token(Token = "0x4001ECB")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _minimapPanel;

	[Token(Token = "0x4001ECC")]
	[FieldOffset(Offset = "0x30")]
	private Text _positionLabel;

	[Token(Token = "0x4001ECD")]
	[FieldOffset(Offset = "0x38")]
	private Text _compassLabel;

	[Token(Token = "0x4001ECE")]
	[FieldOffset(Offset = "0x40")]
	private RawImage[] _images;

	[Token(Token = "0x4001ECF")]
	[FieldOffset(Offset = "0x48")]
	private Transform _tileTransform;

	[Token(Token = "0x4001ED0")]
	[FieldOffset(Offset = "0x50")]
	private Transform _maskTransform;

	[Token(Token = "0x4001ED1")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<Tuple<int, int>, Texture2D> _tileTextures;

	[Token(Token = "0x4001ED2")]
	[FieldOffset(Offset = "0x60")]
	private Queue<Tuple<int, int>> _createTileQueue;

	[Token(Token = "0x4001ED3")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<Tuple<int, int>> _finishedTiles;

	[Token(Token = "0x4001ED4")]
	[FieldOffset(Offset = "0x70")]
	private Tuple<int, int> _currentTile;

	[Token(Token = "0x4001ED5")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4001ED6")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<Transform, BaseCharacter> _characters;

	[Token(Token = "0x4001ED7")]
	[FieldOffset(Offset = "0x88")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x4001ED8")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _currentTileCenter;

	[Token(Token = "0x4001ED9")]
	[FieldOffset(Offset = "0x9C")]
	private bool _needUpdateTiles;

	[Token(Token = "0x4001EDA")]
	private const int MaxTilesFromCenter = 2;

	[Token(Token = "0x6003F41")]
	[Address(RVA = "0x42D3500", Offset = "0x42D3500", VA = "0x42D3500")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003F42")]
	[Address(RVA = "0x42D38E0", Offset = "0x42D38E0", VA = "0x42D38E0")]
	public static void CreateMinimapIcon(Transform transform, string type)
	{
	}

	[Token(Token = "0x6003F43")]
	[Address(RVA = "0x42D3D70", Offset = "0x42D3D70", VA = "0x42D3D70")]
	public static void CreateMinimapIcon(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003F44")]
	[Address(RVA = "0x42D30C0", Offset = "0x42D30C0", VA = "0x42D30C0")]
	public static Dictionary<Transform, Transform> GetIcons()
	{
		return null;
	}

	[Token(Token = "0x6003F45")]
	[Address(RVA = "0x42D39A0", Offset = "0x42D39A0", VA = "0x42D39A0")]
	private static void SetupIcon(string texture, Color color, Transform transform)
	{
	}

	[Token(Token = "0x6003F46")]
	[Address(RVA = "0x42D4150", Offset = "0x42D4150", VA = "0x42D4150")]
	private void Update()
	{
	}

	[Token(Token = "0x6003F47")]
	[Address(RVA = "0x42D5BB0", Offset = "0x42D5BB0", VA = "0x42D5BB0")]
	private void UpdateCompass(InGameCamera camera, Vector3 position, float y)
	{
	}

	[Token(Token = "0x6003F48")]
	[Address(RVA = "0x42D42D0", Offset = "0x42D42D0", VA = "0x42D42D0")]
	private void RemoveOldIcons()
	{
	}

	[Token(Token = "0x6003F49")]
	[Address(RVA = "0x42D55F0", Offset = "0x42D55F0", VA = "0x42D55F0")]
	private void UpdateIcons(Vector3 position, float y)
	{
	}

	[Token(Token = "0x6003F4A")]
	[Address(RVA = "0x42D4980", Offset = "0x42D4980", VA = "0x42D4980")]
	private void UpdateTiles(Vector3 position, float rotation)
	{
	}

	[Token(Token = "0x6003F4B")]
	[Address(RVA = "0x42D60A0", Offset = "0x42D60A0", VA = "0x42D60A0")]
	private Tuple<int, int> GetCurrentTile(Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6003F4C")]
	[Address(RVA = "0x42D6150", Offset = "0x42D6150", VA = "0x42D6150")]
	private Vector3 GetTilePosition(Tuple<int, int> tile)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003F4D")]
	[Address(RVA = "0x42D61B0", Offset = "0x42D61B0", VA = "0x42D61B0")]
	private void CreateTile(Tuple<int, int> tile)
	{
	}

	[Token(Token = "0x6003F4E")]
	[Address(RVA = "0x42D6330", Offset = "0x42D6330", VA = "0x42D6330")]
	public MinimapHandler()
	{
	}
}
