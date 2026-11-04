// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B0")]
internal sealed class AottgProfileCard : AottgComponent
{
	[Token(Token = "0x4000DE5")]
	private const string EditIcon = "material-icons/edit";

	[Token(Token = "0x4000DE6")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _isMine;

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public AottgProfileCard(bool isMine = true)
	{
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x1E14AC0", Offset = "0x1E130C0", VA = "0x181E14AC0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x1E148F0", Offset = "0x1E12EF0", VA = "0x181E148F0")]
	private static void BuildIdentity(AottgUi body, bool isMine)
	{
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x1E146A0", Offset = "0x1E12CA0", VA = "0x181E146A0")]
	private static void BuildDetails(AottgUi body)
	{
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x1E14C90", Offset = "0x1E13290", VA = "0x181E14C90")]
	private static void Social(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x1E144E0", Offset = "0x1E12AE0", VA = "0x181E144E0")]
	private static void BoundProfileText(AottgUi ui, string fallback, string style, string id, string textKey, string skeletonId, GisketchLayoutDefinition skeletonLayout)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x1E15B00", Offset = "0x1E14100", VA = "0x181E15B00")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x1E14290", Offset = "0x1E12890", VA = "0x181E14290")]
	private static void AddEditOverlay(AottgUi ui, string id, string tooltip, string searchTitle, string dialogId, bool isMine, string sectionTitle, float offsetX = 0f)
	{
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x1E14C40", Offset = "0x1E13240", VA = "0x181E14C40")]
	private static GisketchMotionDefinition RevealMotion()
	{
		return null;
	}
}
