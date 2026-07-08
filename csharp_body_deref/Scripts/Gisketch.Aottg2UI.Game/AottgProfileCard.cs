using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000178")]
internal sealed class AottgProfileCard : AottgComponent
{
	[Token(Token = "0x400087A")]
	private const string EditIcon = "material-icons/edit";

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _isMine;

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x40EA520", Offset = "0x40EA520", VA = "0x40EA520")]
	public AottgProfileCard(bool isMine = true)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x40EA540", Offset = "0x40EA540", VA = "0x40EA540", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x40EA6A0", Offset = "0x40EA6A0", VA = "0x40EA6A0")]
	private static void BuildIdentity(AottgUi body, bool isMine)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x40EA850", Offset = "0x40EA850", VA = "0x40EA850")]
	private static void BuildDetails(AottgUi body)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x40EAA40", Offset = "0x40EAA40", VA = "0x40EAA40")]
	private static void Social(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x40EAC90", Offset = "0x40EAC90", VA = "0x40EAC90")]
	private static void BoundProfileText(AottgUi ui, string fallback, string style, string id, string textKey, string skeletonId, GisketchLayoutDefinition skeletonLayout)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x40EAE80", Offset = "0x40EAE80", VA = "0x40EAE80")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x40EAEF0", Offset = "0x40EAEF0", VA = "0x40EAEF0")]
	private static void AddEditOverlay(AottgUi ui, string id, string tooltip, string searchTitle, string dialogId, bool isMine, string sectionTitle, float offsetX = 0f)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x40EAE30", Offset = "0x40EAE30", VA = "0x40EAE30")]
	private static GisketchMotionDefinition RevealMotion()
	{
		return null;
	}
}
