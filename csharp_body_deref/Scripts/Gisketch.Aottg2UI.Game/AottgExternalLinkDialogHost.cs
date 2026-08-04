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

[Token(Token = "0x2000163")]
public sealed class AottgExternalLinkDialogHost : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x40007C2")]
	private const int SortingOrder = 950;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _canvasObject;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x28")]
	private GisketchOverlayManager _overlays;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIState _state;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x38")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x40007C7")]
	[FieldOffset(Offset = "0x40")]
	private AottgCodeCatalog _catalog;

	[Token(Token = "0x1700011F")]
	public static AottgExternalLinkDialogHost Current
	{
		[Token(Token = "0x60007D2")]
		[Address(RVA = "0x43EB6A0", Offset = "0x43EB6A0", VA = "0x43EB6A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x43EB6E0", Offset = "0x43EB6E0", VA = "0x43EB6E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x43EB730", Offset = "0x43EB730", VA = "0x43EB730")]
	public static bool ShowUrl(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x43EB8B0", Offset = "0x43EB8B0", VA = "0x43EB8B0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x43EB900", Offset = "0x43EB900", VA = "0x43EB900")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x43EB810", Offset = "0x43EB810", VA = "0x43EB810")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x43EBC20", Offset = "0x43EBC20", VA = "0x43EBC20", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x43EB9D0", Offset = "0x43EB9D0", VA = "0x43EB9D0")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x43EBE10", Offset = "0x43EBE10", VA = "0x43EBE10")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x43EC0F0", Offset = "0x43EC0F0", VA = "0x43EC0F0")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x43EC260", Offset = "0x43EC260", VA = "0x43EC260")]
	private static void PromoteLayer(Transform layer)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x43EC490", Offset = "0x43EC490", VA = "0x43EC490")]
	private static Vector2 ReferenceResolution()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x43EC310", Offset = "0x43EC310", VA = "0x43EC310")]
	private static GisketchTheme Theme()
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x43EC530", Offset = "0x43EC530", VA = "0x43EC530")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x43EC630", Offset = "0x43EC630", VA = "0x43EC630")]
	public AottgExternalLinkDialogHost()
	{
	}
}
