// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgInGameView
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000285")]
internal sealed class AottgInGameView
{
	[Token(Token = "0x2000286")]
	private sealed class Actions : IGisketchActionHandler
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x57B2640", Offset = "0x57B1640", VA = "0x57B2640", Slot = "4")]
		public void HandleAction(string id, GisketchActionContext context)
		{
		}

		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x57B1A80", Offset = "0x57B0A80", VA = "0x57B1A80")]
		public Actions()
		{
		}
	}

	[Token(Token = "0x4000CF9")]
	private const string StyleOverridePrefix = "inGame.";

	[Token(Token = "0x4000CFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Color? _lightBackground;

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x57B1900", Offset = "0x57B0900", VA = "0x57B1900")]
	static AottgInGameView()
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x57AF980", Offset = "0x57AE980", VA = "0x57AF980")]
	public AottgInGameView()
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x57B1A90", Offset = "0x57B0A90", VA = "0x57B1A90")]
	public Color ThemeColor(string token)
	{
		return default(Color);
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x57B1AC0", Offset = "0x57B0AC0", VA = "0x57B1AC0")]
	public string Readable(string richText)
	{
		return null;
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x57B15E0", Offset = "0x57B05E0", VA = "0x57B15E0")]
	public RawImage RawImage(Transform parent, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x57B1BA0", Offset = "0x57B0BA0", VA = "0x57B1BA0")]
	public EffectText PlayerName(Transform parent, float width)
	{
		return null;
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x57B0790", Offset = "0x57AF790", VA = "0x57B0790")]
	public GameObject Build(Transform parent, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x57B1D40", Offset = "0x57B0D40", VA = "0x57B1D40")]
	public GisketchView Dialog(Transform parent, string id)
	{
		return null;
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x57B1DE0", Offset = "0x57B0DE0", VA = "0x57B1DE0")]
	public void SetButtonSelected(Button button, bool selected)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x57B1FD0", Offset = "0x57B0FD0", VA = "0x57B1FD0")]
	public void SetState(string key, string value)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x57B1FF0", Offset = "0x57B0FF0", VA = "0x57B1FF0")]
	public GisketchOverlayManager CreateOverlayManager(Transform layer)
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x57B2050", Offset = "0x57B1050", VA = "0x57B2050")]
	public static AottgInGameView ScaledPopupShell(Transform host, float width, float height, float headerHeight, float footerHeight, out Transform header, out Transform footer, string headerStyle = "inGameFooter")
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x57B0160", Offset = "0x57AF160", VA = "0x57B0160")]
	public void PopupShell(Transform parent, float width, float height, float headerHeight, float footerHeight, out Transform header, out Transform footer, string headerStyle = "inGameFooter")
	{
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x57B2190", Offset = "0x57B1190", VA = "0x57B2190")]
	public RectTransform ProgressBar(Transform parent, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x57B2350", Offset = "0x57B1350", VA = "0x57B2350")]
	public static void SetProgress(RectTransform fill, float progress)
	{
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x57AFE10", Offset = "0x57AEE10", VA = "0x57AFE10")]
	public Transform Panel(Transform parent, string style, float width, float height, [Optional][DefaultParameterValue(false)] bool row, [Optional] float? gap)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x57B0310", Offset = "0x57AF310", VA = "0x57B0310")]
	public TMP_Text Text(Transform parent, string text, float width, float height = 40f, string style = "inGameText")
	{
		return null;
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x57B2390", Offset = "0x57B1390", VA = "0x57B2390")]
	public static float FitTextHeight(TMP_Text label, float minimumHeight = 40f)
	{
		return default(float);
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x57B24C0", Offset = "0x57B14C0", VA = "0x57B24C0")]
	public static void SetHeight(Transform target, float height)
	{
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x57B04C0", Offset = "0x57AF4C0", VA = "0x57B04C0")]
	public Button Button(Transform parent, string text, string action, string value, float width, float height = 44f, AottgButtonVariant variant = AottgButtonVariant.Quiet)
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x57B00D0", Offset = "0x57AF0D0", VA = "0x57B00D0")]
	public static void Position(Transform transform, Vector2 position)
	{
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x57AF6B0", Offset = "0x57AE6B0", VA = "0x57AF6B0")]
	public static void HidePrefab(Transform host)
	{
	}
}
