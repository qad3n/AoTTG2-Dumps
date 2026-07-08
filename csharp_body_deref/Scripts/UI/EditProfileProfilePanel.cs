using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x200063E")]
internal class EditProfileProfilePanel : CategoryPanel
{
	[Token(Token = "0x4001EB4")]
	private const string DisplayNamePropertyKey = "display_name";

	[Token(Token = "0x4001EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _profileImage;

	[Token(Token = "0x4001EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _group;

	[Token(Token = "0x4001EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private GameObject _guildPreviewTMP;

	[Token(Token = "0x4001EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private NameEffectController _guildPreviewEffect;

	[Token(Token = "0x4001EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private TextMeshProUGUI _guildRoleSpriteButtonLabel;

	[Token(Token = "0x4001EBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private GameObject _namePreviewTMP;

	[Token(Token = "0x4001EBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private NameEffectController _namePreviewEffect;

	[Token(Token = "0x4001EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private CollapsibleToggleSection _nameEffectSection;

	[Token(Token = "0x4001EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ColorSettingElement _nameColorA;

	[Token(Token = "0x4001EBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSettingElement _nameColorB;

	[Token(Token = "0x4001EBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private ColorSettingElement _nameColorC;

	[Token(Token = "0x4001EC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private ColorSettingElement _nameColorD;

	[Token(Token = "0x4001EC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private CollapsibleToggleSection _guildEffectSection;

	[Token(Token = "0x4001EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ColorSettingElement _guildColorA;

	[Token(Token = "0x4001EC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ColorSettingElement _guildColorB;

	[Token(Token = "0x4001EC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private ColorSettingElement _guildColorC;

	[Token(Token = "0x4001EC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ColorSettingElement _guildColorD;

	[Token(Token = "0x4001EC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] EffectOptions;

	[Token(Token = "0x17000C15")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003F18")]
		[Address(RVA = "0x3FE84A0", Offset = "0x3FE84A0", VA = "0x3FE84A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003F19")]
	[Address(RVA = "0x3FE84B0", Offset = "0x3FE84B0", VA = "0x3FE84B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F1A")]
	[Address(RVA = "0x3FE9C30", Offset = "0x3FE9C30", VA = "0x3FE9C30")]
	private void CreateEffectChildren(Transform parent, ElementStyle style, ProfileSettings settings, bool isName, StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, CollapsibleToggleSection section)
	{
	}

	[Token(Token = "0x6003F1B")]
	[Address(RVA = "0x3FEB3D0", Offset = "0x3FEB3D0", VA = "0x3FEB3D0")]
	private void OnEffectSelected(StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool isName)
	{
	}

	[Token(Token = "0x6003F1C")]
	[Address(RVA = "0x3FEB710", Offset = "0x3FEB710", VA = "0x3FEB710")]
	private void ResetEffectColors(StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool isName)
	{
	}

	[Token(Token = "0x6003F1D")]
	[Address(RVA = "0x3FEB4B0", Offset = "0x3FEB4B0", VA = "0x3FEB4B0")]
	private void ApplyPreset(NameEffectType effectType, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, ref ColorSettingElement elemA, ref ColorSettingElement elemB, ref ColorSettingElement elemC, ref ColorSettingElement elemD)
	{
	}

	[Token(Token = "0x6003F1E")]
	[Address(RVA = "0x3FE9AD0", Offset = "0x3FE9AD0", VA = "0x3FE9AD0")]
	private void RefreshPreviews()
	{
	}

	[Token(Token = "0x6003F1F")]
	[Address(RVA = "0x3FEB7F0", Offset = "0x3FEB7F0", VA = "0x3FEB7F0")]
	private void RefreshSinglePreview(GameObject tmpObj, NameEffectController controller, string rawText, bool effectEnabled, StringSetting effectSetting, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD, bool applyHexColor = true)
	{
	}

	[Token(Token = "0x6003F20")]
	[Address(RVA = "0x3FE9700", Offset = "0x3FE9700", VA = "0x3FE9700")]
	private void CreateProfileImage()
	{
	}

	[Token(Token = "0x6003F21")]
	[Address(RVA = "0x3FE94E0", Offset = "0x3FE94E0", VA = "0x3FE94E0")]
	private string[] GetProfileIconPaths(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003F22")]
	[Address(RVA = "0x3FEA770", Offset = "0x3FEA770", VA = "0x3FEA770")]
	private void CreateGuildRoleSpriteButton(Transform parent, ElementStyle style, ProfileSettings settings)
	{
	}

	[Token(Token = "0x6003F23")]
	[Address(RVA = "0x3FEBA60", Offset = "0x3FEBA60", VA = "0x3FEBA60")]
	private void UpdateGuildRoleSpriteButtonText()
	{
	}

	[Token(Token = "0x6003F24")]
	[Address(RVA = "0x3FE98B0", Offset = "0x3FE98B0", VA = "0x3FE98B0")]
	private string GetGuildPreviewText(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6003F25")]
	[Address(RVA = "0x3FE99A0", Offset = "0x3FE99A0", VA = "0x3FE99A0")]
	private void ApplyChatFont(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x6003F26")]
	[Address(RVA = "0x3FEB230", Offset = "0x3FEB230", VA = "0x3FEB230")]
	private string GetDisplayUserId(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6003F27")]
	[Address(RVA = "0x3FEB030", Offset = "0x3FEB030", VA = "0x3FEB030")]
	private string GetDisplayDisplayName(ProfileSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6003F28")]
	[Address(RVA = "0x3FEB300", Offset = "0x3FEB300", VA = "0x3FEB300")]
	private string GetDisplayPatreonTier()
	{
		return null;
	}

	[Token(Token = "0x6003F29")]
	[Address(RVA = "0x3FEBB70", Offset = "0x3FEBB70", VA = "0x3FEBB70")]
	public EditProfileProfilePanel()
	{
	}
}
