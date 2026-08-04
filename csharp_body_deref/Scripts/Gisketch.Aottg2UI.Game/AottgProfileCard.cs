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

[Token(Token = "0x20001AA")]
internal sealed class AottgProfileCard : AottgComponent
{
	[Token(Token = "0x400093E")]
	private const string EditIcon = "material-icons/edit";

	[Token(Token = "0x400093F")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _isMine;

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x441B770", Offset = "0x441B770", VA = "0x441B770")]
	public AottgProfileCard(bool isMine = true)
	{
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x441B790", Offset = "0x441B790", VA = "0x441B790", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x441B8F0", Offset = "0x441B8F0", VA = "0x441B8F0")]
	private static void BuildIdentity(AottgUi body, bool isMine)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x441BAA0", Offset = "0x441BAA0", VA = "0x441BAA0")]
	private static void BuildDetails(AottgUi body)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x441BC90", Offset = "0x441BC90", VA = "0x441BC90")]
	private static void Social(AottgUi ui, int index, string value)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x441BF90", Offset = "0x441BF90", VA = "0x441BF90")]
	private static void BoundProfileText(AottgUi ui, string fallback, string style, string id, string textKey, string skeletonId, GisketchLayoutDefinition skeletonLayout)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x441C180", Offset = "0x441C180", VA = "0x441C180")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x441C1F0", Offset = "0x441C1F0", VA = "0x441C1F0")]
	private static void AddEditOverlay(AottgUi ui, string id, string tooltip, string searchTitle, string dialogId, bool isMine, string sectionTitle, float offsetX = 0f)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x441C130", Offset = "0x441C130", VA = "0x441C130")]
	private static GisketchMotionDefinition RevealMotion()
	{
		return null;
	}
}
