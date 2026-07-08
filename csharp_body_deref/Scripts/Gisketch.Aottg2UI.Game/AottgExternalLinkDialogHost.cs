using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000131")]
public sealed class AottgExternalLinkDialogHost : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x4000703")]
	private const int SortingOrder = 950;

	[Token(Token = "0x4000704")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000705")]
	[FieldOffset(Offset = "0x28")]
	private GisketchOverlayManager _overlays;

	[Token(Token = "0x4000706")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIState _state;

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x38")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000708")]
	[FieldOffset(Offset = "0x40")]
	private AottgCodeCatalog _catalog;

	[Token(Token = "0x170000C9")]
	public static AottgExternalLinkDialogHost Current
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x4073E00", Offset = "0x4073E00", VA = "0x4073E00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x4073E40", Offset = "0x4073E40", VA = "0x4073E40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4073E90", Offset = "0x4073E90", VA = "0x4073E90")]
	public static bool ShowUrl(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4074010", Offset = "0x4074010", VA = "0x4074010")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4074060", Offset = "0x4074060", VA = "0x4074060")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4073F70", Offset = "0x4073F70", VA = "0x4073F70")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4074380", Offset = "0x4074380", VA = "0x4074380", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4074130", Offset = "0x4074130", VA = "0x4074130")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4074570", Offset = "0x4074570", VA = "0x4074570")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4074850", Offset = "0x4074850", VA = "0x4074850")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x40749C0", Offset = "0x40749C0", VA = "0x40749C0")]
	private static void PromoteLayer(Transform layer)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4074BF0", Offset = "0x4074BF0", VA = "0x4074BF0")]
	private static Vector2 ReferenceResolution()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4074A70", Offset = "0x4074A70", VA = "0x4074A70")]
	private static GisketchTheme Theme()
	{
		return null;
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4074C90", Offset = "0x4074C90", VA = "0x4074C90")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4074D90", Offset = "0x4074D90", VA = "0x4074D90")]
	public AottgExternalLinkDialogHost()
	{
	}
}
