// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F2")]
public sealed class AottgExternalLinkDialogHost : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x4000A66")]
	private const int SortingOrder = 950;

	[Token(Token = "0x4000A67")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000A68")]
	[FieldOffset(Offset = "0x28")]
	private GisketchOverlayManager _overlays;

	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIState _state;

	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x38")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x40")]
	private AottgCodeCatalog _catalog;

	[Token(Token = "0x1700015A")]
	public static AottgExternalLinkDialogHost Current
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x23AD1A0", Offset = "0x23AB7A0", VA = "0x1823AD1A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x23AD1E0", Offset = "0x23AB7E0", VA = "0x1823AD1E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x23ACDF0", Offset = "0x23AB3F0", VA = "0x1823ACDF0")]
	public static bool ShowUrl(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x23ABFA0", Offset = "0x23AA5A0", VA = "0x1823ABFA0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x23ACBC0", Offset = "0x23AB1C0", VA = "0x1823ACBC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x23ACF70", Offset = "0x23AB570", VA = "0x1823ACF70")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x23AC9D0", Offset = "0x23AAFD0", VA = "0x1823AC9D0", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x23AC000", Offset = "0x23AA600", VA = "0x1823AC000")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x23AC590", Offset = "0x23AAB90", VA = "0x1823AC590")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x23AC870", Offset = "0x23AAE70", VA = "0x1823AC870")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x23ACC90", Offset = "0x23AB290", VA = "0x1823ACC90")]
	private static void PromoteLayer(Transform layer)
	{
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x23ACD40", Offset = "0x23AB340", VA = "0x1823ACD40")]
	private static Vector2 ReferenceResolution()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x23AD020", Offset = "0x23AB620", VA = "0x1823AD020")]
	private static GisketchTheme Theme()
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x189B1D0", Offset = "0x18997D0", VA = "0x18189B1D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgExternalLinkDialogHost()
	{
	}
}
