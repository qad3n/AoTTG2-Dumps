// ==================== AoTTG2 cross-reference ====================
// Type: UI.ShifterHUD
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200086D")]
internal class ShifterHUD : MonoBehaviour
{
	[Token(Token = "0x4002AA9")]
	private const int Columns = 4;

	[Token(Token = "0x4002AAA")]
	private const int Rows = 7;

	[Token(Token = "0x4002AAB")]
	private const int RestFrame = 21;

	[Token(Token = "0x4002AAC")]
	private const float Width = 1024f;

	[Token(Token = "0x4002AAD")]
	private const float FramePixelWidth = 480f;

	[Token(Token = "0x4002AAE")]
	private const float BoxPixelSize = 64f;

	[Token(Token = "0x4002AAF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color BackdropColor;

	[Token(Token = "0x4002AB0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] SpecialElements;

	[Token(Token = "0x4002AB1")]
	[FieldOffset(Offset = "0x18")]
	private static readonly float[] FrameDurations;

	[Token(Token = "0x4002AB2")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _image;

	[Token(Token = "0x4002AB3")]
	[FieldOffset(Offset = "0x28")]
	private BaseShifter _shifter;

	[Token(Token = "0x4002AB4")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Image> _timers;

	[Token(Token = "0x4002AB5")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _icon;

	[Token(Token = "0x4002AB6")]
	[FieldOffset(Offset = "0x40")]
	private Sprite _fill;

	[Token(Token = "0x4002AB7")]
	[FieldOffset(Offset = "0x48")]
	private int _frame;

	[Token(Token = "0x4002AB8")]
	[FieldOffset(Offset = "0x4C")]
	private float _frameTime;

	[Token(Token = "0x6005062")]
	[Address(RVA = "0x5C4E7B0", Offset = "0x5C4D7B0", VA = "0x5C4E7B0")]
	public static GameObject Create(Transform parent, BaseShifter shifter)
	{
		return null;
	}

	[Token(Token = "0x6005063")]
	[Address(RVA = "0x5C4EBA0", Offset = "0x5C4DBA0", VA = "0x5C4EBA0")]
	private void CreateTimer(string iconName)
	{
	}

	[Token(Token = "0x6005064")]
	[Address(RVA = "0x5C4F360", Offset = "0x5C4E360", VA = "0x5C4F360")]
	private static Sprite CreateSprite(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x6005065")]
	[Address(RVA = "0x5C4F3C0", Offset = "0x5C4E3C0", VA = "0x5C4F3C0")]
	private void Start()
	{
	}

	[Token(Token = "0x6005066")]
	[Address(RVA = "0x5C4F450", Offset = "0x5C4E450", VA = "0x5C4F450")]
	private void Update()
	{
	}

	[Token(Token = "0x6005067")]
	[Address(RVA = "0x5C4F3F0", Offset = "0x5C4E3F0", VA = "0x5C4F3F0")]
	private void ShowFrame(int frame)
	{
	}

	[Token(Token = "0x6005068")]
	[Address(RVA = "0x5C4F770", Offset = "0x5C4E770", VA = "0x5C4F770")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6005069")]
	[Address(RVA = "0x5C4F830", Offset = "0x5C4E830", VA = "0x5C4F830")]
	public ShifterHUD()
	{
	}
}
