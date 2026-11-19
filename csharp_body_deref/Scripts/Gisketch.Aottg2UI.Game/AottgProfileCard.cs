// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030D")]
internal sealed class AottgProfileCard : AottgComponent
{
	[Token(Token = "0x4000F7A")]
	private const string EditIcon = "material-icons/edit";

	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _isMine;

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x57F8120", Offset = "0x57F7120", VA = "0x57F8120")]
	public AottgProfileCard(bool isMine = true)
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x57F8140", Offset = "0x57F7140", VA = "0x57F8140", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x57F8290", Offset = "0x57F7290", VA = "0x57F8290")]
	private static void BuildIdentity(AottgUi body, bool isMine)
	{
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x57F8430", Offset = "0x57F7430", VA = "0x57F8430")]
	private static void BuildDetails(AottgUi body)
	{
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x57F8620", Offset = "0x57F7620", VA = "0x57F8620")]
	private static void Social(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x57F8870", Offset = "0x57F7870", VA = "0x57F8870")]
	private static void BoundProfileText(AottgUi ui, string value, string style, string id, string textKey, string skeletonId, GisketchLayoutDefinition skeletonLayout)
	{
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x57F8A60", Offset = "0x57F7A60", VA = "0x57F8A60")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x57F8AD0", Offset = "0x57F7AD0", VA = "0x57F8AD0")]
	private static void AddEditOverlay(AottgUi ui, string id, string item, string dialogId, bool isMine, float offsetX = 0f)
	{
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x57F8A10", Offset = "0x57F7A10", VA = "0x57F8A10")]
	private static GisketchMotionDefinition RevealMotion()
	{
		return null;
	}
}
