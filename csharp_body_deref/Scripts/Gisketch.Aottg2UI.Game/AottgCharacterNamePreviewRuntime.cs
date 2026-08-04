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

[Token(Token = "0x200018C")]
internal sealed class AottgCharacterNamePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x400088D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x400088E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GameObject _guildRow;

	[Token(Token = "0x400088F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4000890")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private NameEffectLabel _guild;

	[Token(Token = "0x4000891")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private NameEffectLabel _name;

	[Token(Token = "0x4000892")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Image _guildPresetImage;

	[Token(Token = "0x4000893")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x4000894")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _liveDialog;

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x4402810", Offset = "0x4402810", VA = "0x4402810")]
	public void Setup(GisketchUIState state, bool liveDialog)
	{
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x4403470", Offset = "0x4403470", VA = "0x4403470")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x44034F0", Offset = "0x44034F0", VA = "0x44034F0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x4402090", Offset = "0x4402090", VA = "0x4402090")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x44029D0", Offset = "0x44029D0", VA = "0x44029D0")]
	private GameObject CreateRow(string id, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x4402C70", Offset = "0x4402C70", VA = "0x4402C70")]
	private AottgBadgeIconRowRuntime CreateBadges(Transform parent, float size)
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x4402E70", Offset = "0x4402E70", VA = "0x4402E70")]
	private Image CreatePresetImage(Transform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x44031A0", Offset = "0x44031A0", VA = "0x44031A0")]
	private NameEffectLabel CreateLabel(string id, float fontSize, [Optional] Transform parent, bool flexibleWidth = true)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x4403670", Offset = "0x4403670", VA = "0x4403670")]
	private static string DialogGuild(Transform root, JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x4404390", Offset = "0x4404390", VA = "0x4404390")]
	private void ApplyGuild(string text, string presetId, bool liveDialog, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x44045C0", Offset = "0x44045C0", VA = "0x44045C0")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x44038D0", Offset = "0x44038D0", VA = "0x44038D0")]
	private static string PresetId(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x4403E30", Offset = "0x4403E30", VA = "0x4403E30")]
	private static void Apply(NameEffectLabel label, string text, bool liveDialog, bool name, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x4403AD0", Offset = "0x4403AD0", VA = "0x4403AD0")]
	private static string Font(JSONNode info, string key)
	{
		return null;
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x4404CC0", Offset = "0x4404CC0", VA = "0x4404CC0")]
	private static Color ColorValue(bool liveDialog, bool name, JSONNode effect, int index)
	{
		return default(Color);
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x4403500", Offset = "0x4403500", VA = "0x4403500")]
	private static string Input(Transform root, string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x4404FF0", Offset = "0x4404FF0", VA = "0x4404FF0")]
	public AottgCharacterNamePreviewRuntime()
	{
	}
}
