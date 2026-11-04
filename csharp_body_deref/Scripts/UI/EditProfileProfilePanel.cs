// ==================== AoTTG2 cross-reference ====================
// Type: UI.EditProfileProfilePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EditProfileProfilePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileProfilePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007E5")]
internal class EditProfileProfilePanel : CategoryPanel
{
	[Token(Token = "0x40027E0")]
	private const string DisplayNamePropertyKey = "display_name";

	[Token(Token = "0x40027E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _profileImage;

	[Token(Token = "0x40027E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _group;

	[Token(Token = "0x40027E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private GameObject _guildPreviewTMP;

	[Token(Token = "0x40027E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private NameEffectController _guildPreviewEffect;

	[Token(Token = "0x40027E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private TextMeshProUGUI _guildRoleSpriteButtonLabel;

	[Token(Token = "0x40027E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private GameObject _namePreviewTMP;

	[Token(Token = "0x40027E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private NameEffectController _namePreviewEffect;

	[Token(Token = "0x40027E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private CollapsibleToggleSection _nameEffectSection;

	[Token(Token = "0x40027E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ColorSettingElement _nameColorA;

	[Token(Token = "0x40027EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSettingElement _nameColorB;

	[Token(Token = "0x40027EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private ColorSettingElement _nameColorC;

	[Token(Token = "0x40027EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private ColorSettingElement _nameColorD;

	[Token(Token = "0x40027ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private CollapsibleToggleSection _guildEffectSection;

	[Token(Token = "0x40027EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ColorSettingElement _guildColorA;

	[Token(Token = "0x40027EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ColorSettingElement _guildColorB;

	[Token(Token = "0x40027F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private ColorSettingElement _guildColorC;

	[Token(Token = "0x40027F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ColorSettingElement _guildColorD;

	[Token(Token = "0x40027F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] EffectOptions;

	[Token(Token = "0x17000DD5")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004C6A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004C6B")]
	[Address(RVA = "0x2287A90", Offset = "0x2286090", VA = "0x182287A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004C6C")]
	[Address(RVA = "0x2285640", Offset = "0x2283C40", VA = "0x182285640")]
	private void CreateEffectChildren(Transform parent, ElementStyle style, ProfileSettings settings, bool isName, StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, CollapsibleToggleSection section)
	{
	}

	[Token(Token = "0x6004C6D")]
	[Address(RVA = "0x2287310", Offset = "0x2285910", VA = "0x182287310")]
	private void OnEffectSelected(StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool isName)
	{
	}

	[Token(Token = "0x6004C6E")]
	[Address(RVA = "0x2287980", Offset = "0x2285F80", VA = "0x182287980")]
	private void ResetEffectColors(StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool isName)
	{
	}

	[Token(Token = "0x6004C6F")]
	[Address(RVA = "0x2285420", Offset = "0x2283A20", VA = "0x182285420")]
	private void ApplyPreset(NameEffectType effectType, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, ref ColorSettingElement elemA, ref ColorSettingElement elemB, ref ColorSettingElement elemC, ref ColorSettingElement elemD)
	{
	}

	[Token(Token = "0x6004C70")]
	[Address(RVA = "0x2287420", Offset = "0x2285A20", VA = "0x182287420")]
	private void RefreshPreviews()
	{
	}

	[Token(Token = "0x6004C71")]
	[Address(RVA = "0x22876D0", Offset = "0x2285CD0", VA = "0x1822876D0")]
	private void RefreshSinglePreview(GameObject tmpObj, NameEffectController controller, string rawText, bool effectEnabled, StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool applyHexColor = true)
	{
	}

	[Token(Token = "0x6004C72")]
	[Address(RVA = "0x2286B40", Offset = "0x2285140", VA = "0x182286B40")]
	private void CreateProfileImage()
	{
	}

	[Token(Token = "0x6004C73")]
	[Address(RVA = "0x2287150", Offset = "0x2285750", VA = "0x182287150")]
	private string[] GetProfileIconPaths(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004C74")]
	[Address(RVA = "0x2286220", Offset = "0x2284820", VA = "0x182286220")]
	private void CreateGuildRoleSpriteButton(Transform parent, ElementStyle style, ProfileSettings settings)
	{
	}

	[Token(Token = "0x6004C75")]
	[Address(RVA = "0x2288E10", Offset = "0x2287410", VA = "0x182288E10")]
	private void UpdateGuildRoleSpriteButtonText()
	{
	}

	[Token(Token = "0x6004C76")]
	[Address(RVA = "0x2287060", Offset = "0x2285660", VA = "0x182287060")]
	private string GetGuildPreviewText(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6004C77")]
	[Address(RVA = "0x22852E0", Offset = "0x22838E0", VA = "0x1822852E0")]
	private void ApplyChatFont(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x6004C78")]
	[Address(RVA = "0x2286F80", Offset = "0x2285580", VA = "0x182286F80")]
	private string GetDisplayUserId(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6004C79")]
	[Address(RVA = "0x2286CE0", Offset = "0x22852E0", VA = "0x182286CE0")]
	private string GetDisplayDisplayName(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6004C7A")]
	[Address(RVA = "0x2286ED0", Offset = "0x22854D0", VA = "0x182286ED0")]
	private string GetDisplayPatreonTier()
	{
		return null;
	}

	[Token(Token = "0x6004C7B")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public EditProfileProfilePanel()
	{
	}
}
