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

[Token(Token = "0x2000292")]
internal sealed class AottgCharacterNamePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x4000D2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000D2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GameObject _guildRow;

	[Token(Token = "0x4000D30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4000D31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private NameEffectLabel _guild;

	[Token(Token = "0x4000D32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private NameEffectLabel _name;

	[Token(Token = "0x4000D33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Image _guildPresetImage;

	[Token(Token = "0x4000D34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x4000D35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _liveDialog;

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x1DF7DF0", Offset = "0x1DF63F0", VA = "0x181DF7DF0")]
	public void Setup(GisketchUIState state, bool liveDialog)
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x1DF7380", Offset = "0x1DF5980", VA = "0x181DF7380")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x1DF7410", Offset = "0x1DF5A10", VA = "0x181DF7410")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x1DF7530", Offset = "0x1DF5B30", VA = "0x181DF7530")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x1DF6D30", Offset = "0x1DF5330", VA = "0x181DF6D30")]
	private GameObject CreateRow(string id, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x1DF64F0", Offset = "0x1DF4AF0", VA = "0x181DF64F0")]
	private AottgBadgeIconRowRuntime CreateBadges(Transform parent, float size)
	{
		return null;
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x1DF69F0", Offset = "0x1DF4FF0", VA = "0x181DF69F0")]
	private Image CreatePresetImage(Transform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x1DF6700", Offset = "0x1DF4D00", VA = "0x181DF6700")]
	private NameEffectLabel CreateLabel(string id, float fontSize, [Optional] Transform parent, bool flexibleWidth = true)
	{
		return null;
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x1DF6FC0", Offset = "0x1DF55C0", VA = "0x181DF6FC0")]
	private static string DialogGuild(Transform root, JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x1DF5AC0", Offset = "0x1DF40C0", VA = "0x181DF5AC0")]
	private void ApplyGuild(string text, string presetId, bool liveDialog, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x1DF7D00", Offset = "0x1DF6300", VA = "0x181DF7D00")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x1DF7420", Offset = "0x1DF5A20", VA = "0x181DF7420")]
	private static string PresetId(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x1DF5D20", Offset = "0x1DF4320", VA = "0x181DF5D20")]
	private static void Apply(NameEffectLabel label, string text, bool liveDialog, bool name, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x1DF7170", Offset = "0x1DF5770", VA = "0x181DF7170")]
	private static string Font(JSONNode info, string key)
	{
		return null;
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x1DF6230", Offset = "0x1DF4830", VA = "0x181DF6230")]
	private static Color ColorValue(bool liveDialog, bool name, JSONNode effect, int index)
	{
		return default(Color);
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x1DF72A0", Offset = "0x1DF58A0", VA = "0x181DF72A0")]
	private static string Input(Transform root, string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000FAC")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgCharacterNamePreviewRuntime()
	{
	}
}
