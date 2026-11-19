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

[Token(Token = "0x200020C")]
public sealed class AottgExternalLinkDialogHost : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x4000ADE")]
	private const int SortingOrder = 950;

	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x28")]
	private GisketchOverlayManager _overlays;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIState _state;

	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x38")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x40")]
	private AottgCodeCatalog _catalog;

	[Token(Token = "0x17000163")]
	public static AottgExternalLinkDialogHost Current
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x5D85750", Offset = "0x5D84750", VA = "0x5D85750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x5D85790", Offset = "0x5D84790", VA = "0x5D85790")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x5D857E0", Offset = "0x5D847E0", VA = "0x5D857E0")]
	public static bool ShowUrl(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x5D85960", Offset = "0x5D84960", VA = "0x5D85960")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x5D859B0", Offset = "0x5D849B0", VA = "0x5D859B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x5D858C0", Offset = "0x5D848C0", VA = "0x5D858C0")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x5D85CD0", Offset = "0x5D84CD0", VA = "0x5D85CD0", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x5D85A80", Offset = "0x5D84A80", VA = "0x5D85A80")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x5D85EC0", Offset = "0x5D84EC0", VA = "0x5D85EC0")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x5D86170", Offset = "0x5D85170", VA = "0x5D86170")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x5D862E0", Offset = "0x5D852E0", VA = "0x5D862E0")]
	private static void PromoteLayer(Transform layer)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x5D86510", Offset = "0x5D85510", VA = "0x5D86510")]
	private static Vector2 ReferenceResolution()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x5D86390", Offset = "0x5D85390", VA = "0x5D86390")]
	private static GisketchTheme Theme()
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x5D86570", Offset = "0x5D85570", VA = "0x5D86570")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x5D86670", Offset = "0x5D85670", VA = "0x5D86670")]
	public AottgExternalLinkDialogHost()
	{
	}
}
