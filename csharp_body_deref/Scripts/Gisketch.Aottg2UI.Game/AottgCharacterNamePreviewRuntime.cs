using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using PatreonEffects;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200015A")]
internal sealed class AottgCharacterNamePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x40007CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x40007CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GameObject _guildRow;

	[Token(Token = "0x40007CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x40007CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private NameEffectLabel _guild;

	[Token(Token = "0x40007D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private NameEffectLabel _name;

	[Token(Token = "0x40007D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Image _guildPresetImage;

	[Token(Token = "0x40007D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x40007D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _liveDialog;

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x40D1150", Offset = "0x40D1150", VA = "0x40D1150")]
	public void Setup(GisketchUIState state, bool liveDialog)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x40D1DB0", Offset = "0x40D1DB0", VA = "0x40D1DB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x40D1E30", Offset = "0x40D1E30", VA = "0x40D1E30")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x40D0A60", Offset = "0x40D0A60", VA = "0x40D0A60")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x40D1310", Offset = "0x40D1310", VA = "0x40D1310")]
	private GameObject CreateRow(string id, float fontSize)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x40D15B0", Offset = "0x40D15B0", VA = "0x40D15B0")]
	private AottgBadgeIconRowRuntime CreateBadges(Transform parent, float size)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x40D17B0", Offset = "0x40D17B0", VA = "0x40D17B0")]
	private Image CreatePresetImage(Transform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x40D1AE0", Offset = "0x40D1AE0", VA = "0x40D1AE0")]
	private NameEffectLabel CreateLabel(string id, float fontSize, [Optional] Transform parent, bool flexibleWidth = true)
	{
		return null;
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x40D1EF0", Offset = "0x40D1EF0", VA = "0x40D1EF0")]
	private static string DialogGuild(Transform root, JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x40D27B0", Offset = "0x40D27B0", VA = "0x40D27B0")]
	private void ApplyGuild(string text, string presetId, bool liveDialog, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x40D29E0", Offset = "0x40D29E0", VA = "0x40D29E0")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x40D2080", Offset = "0x40D2080", VA = "0x40D2080")]
	private static string PresetId(JSONNode info)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x40D22D0", Offset = "0x40D22D0", VA = "0x40D22D0")]
	private static void Apply(NameEffectLabel label, string text, bool liveDialog, bool name, JSONNode effect, string font)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x40D2190", Offset = "0x40D2190", VA = "0x40D2190")]
	private static string Font(JSONNode info, string key)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x40D2DC0", Offset = "0x40D2DC0", VA = "0x40D2DC0")]
	private static Color ColorValue(bool liveDialog, bool name, JSONNode effect, int index)
	{
		return default(Color);
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x40D1E40", Offset = "0x40D1E40", VA = "0x40D1E40")]
	private static string Input(Transform root, string id, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x40D3030", Offset = "0x40D3030", VA = "0x40D3030")]
	public AottgCharacterNamePreviewRuntime()
	{
	}
}
