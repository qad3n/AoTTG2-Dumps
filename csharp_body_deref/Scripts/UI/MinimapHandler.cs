using System;
using System.Collections.Generic;
using Cameras;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005FB")]
internal class MinimapHandler : MonoBehaviour
{
	[Token(Token = "0x4001D7E")]
	[FieldOffset(Offset = "0x0")]
	public static MinimapHandler Instance;

	[Token(Token = "0x4001D7F")]
	[FieldOffset(Offset = "0x20")]
	private float _height;

	[Token(Token = "0x4001D80")]
	[FieldOffset(Offset = "0x8")]
	private static Color _mineColor;

	[Token(Token = "0x4001D81")]
	[FieldOffset(Offset = "0x18")]
	private static Color _titanColor;

	[Token(Token = "0x4001D82")]
	[FieldOffset(Offset = "0x28")]
	private static Color _humanColor;

	[Token(Token = "0x4001D83")]
	[FieldOffset(Offset = "0x38")]
	private static Color _teamBlueColor;

	[Token(Token = "0x4001D84")]
	[FieldOffset(Offset = "0x48")]
	private static Color _teamRedColor;

	[Token(Token = "0x4001D85")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _minimapPanel;

	[Token(Token = "0x4001D86")]
	[FieldOffset(Offset = "0x30")]
	private Text _positionLabel;

	[Token(Token = "0x4001D87")]
	[FieldOffset(Offset = "0x38")]
	private Text _compassLabel;

	[Token(Token = "0x4001D88")]
	[FieldOffset(Offset = "0x40")]
	private RawImage[] _images;

	[Token(Token = "0x4001D89")]
	[FieldOffset(Offset = "0x48")]
	private Transform _tileTransform;

	[Token(Token = "0x4001D8A")]
	[FieldOffset(Offset = "0x50")]
	private Transform _maskTransform;

	[Token(Token = "0x4001D8B")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<Tuple<int, int>, Texture2D> _tileTextures;

	[Token(Token = "0x4001D8C")]
	[FieldOffset(Offset = "0x60")]
	private Queue<Tuple<int, int>> _createTileQueue;

	[Token(Token = "0x4001D8D")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<Tuple<int, int>> _finishedTiles;

	[Token(Token = "0x4001D8E")]
	[FieldOffset(Offset = "0x70")]
	private Tuple<int, int> _currentTile;

	[Token(Token = "0x4001D8F")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4001D90")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<Transform, BaseCharacter> _characters;

	[Token(Token = "0x4001D91")]
	[FieldOffset(Offset = "0x88")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x4001D92")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _currentTileCenter;

	[Token(Token = "0x4001D93")]
	[FieldOffset(Offset = "0x9C")]
	private bool _needUpdateTiles;

	[Token(Token = "0x4001D94")]
	private const int MaxTilesFromCenter = 2;

	[Token(Token = "0x6003CF4")]
	[Address(RVA = "0x3FC1010", Offset = "0x3FC1010", VA = "0x3FC1010")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003CF5")]
	[Address(RVA = "0x3FC13F0", Offset = "0x3FC13F0", VA = "0x3FC13F0")]
	public static void CreateMinimapIcon(Transform transform, string type)
	{
	}

	[Token(Token = "0x6003CF6")]
	[Address(RVA = "0x3FC1880", Offset = "0x3FC1880", VA = "0x3FC1880")]
	public static void CreateMinimapIcon(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003CF7")]
	[Address(RVA = "0x3FC0BD0", Offset = "0x3FC0BD0", VA = "0x3FC0BD0")]
	public static Dictionary<Transform, Transform> GetIcons()
	{
		return null;
	}

	[Token(Token = "0x6003CF8")]
	[Address(RVA = "0x3FC14B0", Offset = "0x3FC14B0", VA = "0x3FC14B0")]
	private static void SetupIcon(string texture, Color color, Transform transform)
	{
	}

	[Token(Token = "0x6003CF9")]
	[Address(RVA = "0x3FC1C60", Offset = "0x3FC1C60", VA = "0x3FC1C60")]
	private void Update()
	{
	}

	[Token(Token = "0x6003CFA")]
	[Address(RVA = "0x3FC36C0", Offset = "0x3FC36C0", VA = "0x3FC36C0")]
	private void UpdateCompass(InGameCamera camera, Vector3 position, float y)
	{
	}

	[Token(Token = "0x6003CFB")]
	[Address(RVA = "0x3FC1DE0", Offset = "0x3FC1DE0", VA = "0x3FC1DE0")]
	private void RemoveOldIcons()
	{
	}

	[Token(Token = "0x6003CFC")]
	[Address(RVA = "0x3FC3100", Offset = "0x3FC3100", VA = "0x3FC3100")]
	private void UpdateIcons(Vector3 position, float y)
	{
	}

	[Token(Token = "0x6003CFD")]
	[Address(RVA = "0x3FC2490", Offset = "0x3FC2490", VA = "0x3FC2490")]
	private void UpdateTiles(Vector3 position, float rotation)
	{
	}

	[Token(Token = "0x6003CFE")]
	[Address(RVA = "0x3FC3BB0", Offset = "0x3FC3BB0", VA = "0x3FC3BB0")]
	private Tuple<int, int> GetCurrentTile(Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6003CFF")]
	[Address(RVA = "0x3FC3C60", Offset = "0x3FC3C60", VA = "0x3FC3C60")]
	private Vector3 GetTilePosition(Tuple<int, int> tile)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003D00")]
	[Address(RVA = "0x3FC3CC0", Offset = "0x3FC3CC0", VA = "0x3FC3CC0")]
	private void CreateTile(Tuple<int, int> tile)
	{
	}

	[Token(Token = "0x6003D01")]
	[Address(RVA = "0x3FC3E40", Offset = "0x3FC3E40", VA = "0x3FC3E40")]
	public MinimapHandler()
	{
	}
}
