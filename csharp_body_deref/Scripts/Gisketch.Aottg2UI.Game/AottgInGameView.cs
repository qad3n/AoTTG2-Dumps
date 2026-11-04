// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgInGameView
// Update status: NEW in this game update
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

[Token(Token = "0x200025F")]
internal sealed class AottgInGameView
{
	[Token(Token = "0x2000260")]
	private sealed class Actions : IGisketchActionHandler
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x1DD5610", Offset = "0x1DD3C10", VA = "0x181DD5610", Slot = "4")]
		public void HandleAction(string id, GisketchActionContext context)
		{
		}

		[Token(Token = "0x6000E62")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Actions()
		{
		}
	}

	[Token(Token = "0x4000C4C")]
	private const string StyleOverridePrefix = "inGame.";

	[Token(Token = "0x4000C4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000C4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Color? _lightBackground;

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x1DDF1F0", Offset = "0x1DDD7F0", VA = "0x181DDF1F0")]
	static AottgInGameView()
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x1DDF370", Offset = "0x1DDD970", VA = "0x181DDF370")]
	public AottgInGameView()
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x1DDF190", Offset = "0x1DDD790", VA = "0x181DDF190")]
	public Color ThemeColor(string token)
	{
		return default(Color);
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x1DDE900", Offset = "0x1DDCF00", VA = "0x181DDE900")]
	public string Readable(string richText)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x1DDE700", Offset = "0x1DDCD00", VA = "0x181DDE700")]
	public RawImage RawImage(Transform parent, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x1DDE020", Offset = "0x1DDC620", VA = "0x181DDE020")]
	public EffectText PlayerName(Transform parent, float width)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x1DDD2F0", Offset = "0x1DDB8F0", VA = "0x181DDD2F0")]
	public GameObject Build(Transform parent, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x1DDD7B0", Offset = "0x1DDBDB0", VA = "0x181DDD7B0")]
	public GisketchView Dialog(Transform parent, string id)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x1DDEB70", Offset = "0x1DDD170", VA = "0x181DDEB70")]
	public void SetButtonSelected(Button button, bool selected)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x1DDEF80", Offset = "0x1DDD580", VA = "0x181DDEF80")]
	public void SetState(string key, string value)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x1DDD740", Offset = "0x1DDBD40", VA = "0x181DDD740")]
	public GisketchOverlayManager CreateOverlayManager(Transform layer)
	{
		return null;
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x1DDE9E0", Offset = "0x1DDCFE0", VA = "0x181DDE9E0")]
	public static AottgInGameView ScaledPopupShell(Transform host, float width, float height, float headerHeight, float footerHeight, out Transform header, out Transform footer, string headerStyle = "inGameFooter")
	{
		return null;
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x1DDE210", Offset = "0x1DDC810", VA = "0x181DDE210")]
	public void PopupShell(Transform parent, float width, float height, float headerHeight, float footerHeight, out Transform header, out Transform footer, string headerStyle = "inGameFooter")
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x1DDE500", Offset = "0x1DDCB00", VA = "0x181DDE500")]
	public RectTransform ProgressBar(Transform parent, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x1DDEF40", Offset = "0x1DDD540", VA = "0x181DDEF40")]
	public static void SetProgress(RectTransform fill, float progress)
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x1DDDCF0", Offset = "0x1DDC2F0", VA = "0x181DDDCF0")]
	public Transform Panel(Transform parent, string style, float width, float height, [Optional][DefaultParameterValue(false)] bool row, [Optional] float? gap)
	{
		return null;
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x1DDEFB0", Offset = "0x1DDD5B0", VA = "0x181DDEFB0")]
	public TMP_Text Text(Transform parent, string text, float width, float height = 40f, string style = "inGameText")
	{
		return null;
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x1DDD850", Offset = "0x1DDBE50", VA = "0x181DDD850")]
	public static float FitTextHeight(TMP_Text label, float minimumHeight = 40f)
	{
		return default(float);
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x1DDEDB0", Offset = "0x1DDD3B0", VA = "0x181DDEDB0")]
	public static void SetHeight(Transform target, float height)
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x1DDD440", Offset = "0x1DDBA40", VA = "0x181DDD440")]
	public Button Button(Transform parent, string text, string action, string value, float width, float height = 44f, AottgButtonVariant variant = AottgButtonVariant.Quiet)
	{
		return null;
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x1DDE420", Offset = "0x1DDCA20", VA = "0x181DDE420")]
	public static void Position(Transform transform, Vector2 position)
	{
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x1DDDAE0", Offset = "0x1DDC0E0", VA = "0x181DDDAE0")]
	public static void HidePrefab(Transform host)
	{
	}
}
