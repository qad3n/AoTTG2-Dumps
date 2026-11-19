// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using PatreonEffects;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EE")]
internal sealed class AottgCharacterNamePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x4000EC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000EC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GameObject _guildRow;

	[Token(Token = "0x4000EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4000ECA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private NameEffectLabel _guild;

	[Token(Token = "0x4000ECB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private NameEffectLabel _name;

	[Token(Token = "0x4000ECC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Image _guildPresetImage;

	[Token(Token = "0x4000ECD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x4000ECE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _liveDialog;

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x57DE250", Offset = "0x57DD250", VA = "0x57DE250")]
	public void Setup(GisketchUIState state, bool liveDialog)
	{
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x57DEEC0", Offset = "0x57DDEC0", VA = "0x57DEEC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x57DEF40", Offset = "0x57DDF40", VA = "0x57DEF40")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x57DDAA0", Offset = "0x57DCAA0", VA = "0x57DDAA0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x57DE410", Offset = "0x57DD410", VA = "0x57DE410")]
	private GameObject CreateRow(string id, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x57DE6B0", Offset = "0x57DD6B0", VA = "0x57DE6B0")]
	private AottgBadgeIconRowRuntime CreateBadges(Transform parent, float size)
	{
		return null;
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x57DE8B0", Offset = "0x57DD8B0", VA = "0x57DE8B0")]
	private Image CreatePresetImage(Transform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x57DEBF0", Offset = "0x57DDBF0", VA = "0x57DEBF0")]
	private NameEffectLabel CreateLabel(string id, float fontSize, [Optional] Transform parent, bool flexibleWidth = true)
	{
		return null;
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x57DF0C0", Offset = "0x57DE0C0", VA = "0x57DF0C0")]
	private static string DialogGuild(Transform root, JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x57DFDC0", Offset = "0x57DEDC0", VA = "0x57DFDC0")]
	private void ApplyGuild(string text, string presetId, bool liveDialog, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x57E03D0", Offset = "0x57DF3D0", VA = "0x57E03D0")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x57DF320", Offset = "0x57DE320", VA = "0x57DF320")]
	private static string PresetId(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x57DF880", Offset = "0x57DE880", VA = "0x57DF880")]
	private static void Apply(NameEffectLabel label, string text, bool liveDialog, bool name, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x57DF520", Offset = "0x57DE520", VA = "0x57DF520")]
	private static string Font(JSONNode info, string key)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x57E1010", Offset = "0x57E0010", VA = "0x57E1010")]
	private static Color ColorValue(bool liveDialog, bool name, JSONNode effect, int index)
	{
		return default(Color);
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x57DEF50", Offset = "0x57DDF50", VA = "0x57DEF50")]
	private static string Input(Transform root, string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x57E1340", Offset = "0x57E0340", VA = "0x57E1340")]
	public AottgCharacterNamePreviewRuntime()
	{
	}
}
