// ==================== AoTTG2 cross-reference ====================
// Type: UI.ShifterHUD
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ShifterHUD.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007C1")]
internal class ShifterHUD : MonoBehaviour
{
	[Token(Token = "0x4002729")]
	private const int Columns = 4;

	[Token(Token = "0x400272A")]
	private const int Rows = 7;

	[Token(Token = "0x400272B")]
	private const int RestFrame = 21;

	[Token(Token = "0x400272C")]
	private const float Width = 1024f;

	[Token(Token = "0x400272D")]
	private const float FramePixelWidth = 480f;

	[Token(Token = "0x400272E")]
	private const float BoxPixelSize = 64f;

	[Token(Token = "0x400272F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color BackdropColor;

	[Token(Token = "0x4002730")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] SpecialElements;

	[Token(Token = "0x4002731")]
	[FieldOffset(Offset = "0x18")]
	private static readonly float[] FrameDurations;

	[Token(Token = "0x4002732")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _image;

	[Token(Token = "0x4002733")]
	[FieldOffset(Offset = "0x28")]
	private BaseShifter _shifter;

	[Token(Token = "0x4002734")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Image> _timers;

	[Token(Token = "0x4002735")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _icon;

	[Token(Token = "0x4002736")]
	[FieldOffset(Offset = "0x40")]
	private Sprite _fill;

	[Token(Token = "0x4002737")]
	[FieldOffset(Offset = "0x48")]
	private int _frame;

	[Token(Token = "0x4002738")]
	[FieldOffset(Offset = "0x4C")]
	private float _frameTime;

	[Token(Token = "0x6004B42")]
	[Address(RVA = "0x227E6A0", Offset = "0x227CCA0", VA = "0x18227E6A0")]
	public static GameObject Create(Transform parent, BaseShifter shifter)
	{
		return null;
	}

	[Token(Token = "0x6004B43")]
	[Address(RVA = "0x227DFB0", Offset = "0x227C5B0", VA = "0x18227DFB0")]
	private void CreateTimer(string iconName)
	{
	}

	[Token(Token = "0x6004B44")]
	[Address(RVA = "0x227DF20", Offset = "0x227C520", VA = "0x18227DF20")]
	private static Sprite CreateSprite(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x6004B45")]
	[Address(RVA = "0x227EC10", Offset = "0x227D210", VA = "0x18227EC10")]
	private void Start()
	{
	}

	[Token(Token = "0x6004B46")]
	[Address(RVA = "0x227EC20", Offset = "0x227D220", VA = "0x18227EC20")]
	private void Update()
	{
	}

	[Token(Token = "0x6004B47")]
	[Address(RVA = "0x227EB80", Offset = "0x227D180", VA = "0x18227EB80")]
	private void ShowFrame(int frame)
	{
	}

	[Token(Token = "0x6004B48")]
	[Address(RVA = "0x227EAB0", Offset = "0x227D0B0", VA = "0x18227EAB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004B49")]
	[Address(RVA = "0x227F0B0", Offset = "0x227D6B0", VA = "0x18227F0B0")]
	public ShifterHUD()
	{
	}
}
