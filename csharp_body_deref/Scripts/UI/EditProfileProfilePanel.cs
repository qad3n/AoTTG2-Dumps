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

[Token(Token = "0x200068A")]
internal class EditProfileProfilePanel : CategoryPanel
{
	[Token(Token = "0x4002008")]
	private const string DisplayNamePropertyKey = "display_name";

	[Token(Token = "0x4002009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _profileImage;

	[Token(Token = "0x400200A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _group;

	[Token(Token = "0x400200B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private GameObject _guildPreviewTMP;

	[Token(Token = "0x400200C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private NameEffectController _guildPreviewEffect;

	[Token(Token = "0x400200D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private TextMeshProUGUI _guildRoleSpriteButtonLabel;

	[Token(Token = "0x400200E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private GameObject _namePreviewTMP;

	[Token(Token = "0x400200F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private NameEffectController _namePreviewEffect;

	[Token(Token = "0x4002010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private CollapsibleToggleSection _nameEffectSection;

	[Token(Token = "0x4002011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ColorSettingElement _nameColorA;

	[Token(Token = "0x4002012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSettingElement _nameColorB;

	[Token(Token = "0x4002013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private ColorSettingElement _nameColorC;

	[Token(Token = "0x4002014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private ColorSettingElement _nameColorD;

	[Token(Token = "0x4002015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private CollapsibleToggleSection _guildEffectSection;

	[Token(Token = "0x4002016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ColorSettingElement _guildColorA;

	[Token(Token = "0x4002017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ColorSettingElement _guildColorB;

	[Token(Token = "0x4002018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private ColorSettingElement _guildColorC;

	[Token(Token = "0x4002019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ColorSettingElement _guildColorD;

	[Token(Token = "0x400201A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] EffectOptions;

	[Token(Token = "0x17000C8F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004175")]
		[Address(RVA = "0x42FC6D0", Offset = "0x42FC6D0", VA = "0x42FC6D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004176")]
	[Address(RVA = "0x42FC6E0", Offset = "0x42FC6E0", VA = "0x42FC6E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004177")]
	[Address(RVA = "0x42FDE50", Offset = "0x42FDE50", VA = "0x42FDE50")]
	private void CreateEffectChildren(Transform parent, ElementStyle style, ProfileSettings settings, bool isName, StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, CollapsibleToggleSection section)
	{
	}

	[Token(Token = "0x6004178")]
	[Address(RVA = "0x42FF5E0", Offset = "0x42FF5E0", VA = "0x42FF5E0")]
	private void OnEffectSelected(StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool isName)
	{
	}

	[Token(Token = "0x6004179")]
	[Address(RVA = "0x42FF920", Offset = "0x42FF920", VA = "0x42FF920")]
	private void ResetEffectColors(StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool isName)
	{
	}

	[Token(Token = "0x600417A")]
	[Address(RVA = "0x42FF6C0", Offset = "0x42FF6C0", VA = "0x42FF6C0")]
	private void ApplyPreset(NameEffectType effectType, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, ref ColorSettingElement elemA, ref ColorSettingElement elemB, ref ColorSettingElement elemC, ref ColorSettingElement elemD)
	{
	}

	[Token(Token = "0x600417B")]
	[Address(RVA = "0x42FDCF0", Offset = "0x42FDCF0", VA = "0x42FDCF0")]
	private void RefreshPreviews()
	{
	}

	[Token(Token = "0x600417C")]
	[Address(RVA = "0x42FFA00", Offset = "0x42FFA00", VA = "0x42FFA00")]
	private void RefreshSinglePreview(GameObject tmpObj, NameEffectController controller, string rawText, bool effectEnabled, StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool applyHexColor = true)
	{
	}

	[Token(Token = "0x600417D")]
	[Address(RVA = "0x42FD920", Offset = "0x42FD920", VA = "0x42FD920")]
	private void CreateProfileImage()
	{
	}

	[Token(Token = "0x600417E")]
	[Address(RVA = "0x42FD700", Offset = "0x42FD700", VA = "0x42FD700")]
	private string[] GetProfileIconPaths(string[] options)
	{
		return null;
	}

	[Token(Token = "0x600417F")]
	[Address(RVA = "0x42FE990", Offset = "0x42FE990", VA = "0x42FE990")]
	private void CreateGuildRoleSpriteButton(Transform parent, ElementStyle style, ProfileSettings settings)
	{
	}

	[Token(Token = "0x6004180")]
	[Address(RVA = "0x42FFC70", Offset = "0x42FFC70", VA = "0x42FFC70")]
	private void UpdateGuildRoleSpriteButtonText()
	{
	}

	[Token(Token = "0x6004181")]
	[Address(RVA = "0x42FDAD0", Offset = "0x42FDAD0", VA = "0x42FDAD0")]
	private string GetGuildPreviewText(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6004182")]
	[Address(RVA = "0x42FDBC0", Offset = "0x42FDBC0", VA = "0x42FDBC0")]
	private void ApplyChatFont(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x6004183")]
	[Address(RVA = "0x42FF450", Offset = "0x42FF450", VA = "0x42FF450")]
	private string GetDisplayUserId(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6004184")]
	[Address(RVA = "0x42FF250", Offset = "0x42FF250", VA = "0x42FF250")]
	private string GetDisplayDisplayName(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6004185")]
	[Address(RVA = "0x42FF520", Offset = "0x42FF520", VA = "0x42FF520")]
	private string GetDisplayPatreonTier()
	{
		return null;
	}

	[Token(Token = "0x6004186")]
	[Address(RVA = "0x42FFD70", Offset = "0x42FFD70", VA = "0x42FFD70")]
	public EditProfileProfilePanel()
	{
	}
}
