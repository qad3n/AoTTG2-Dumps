// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterInfoPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterInfoPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Characters;
using ExitGames.Client.Photon;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using PatreonEffects;
using Photon.Realtime;
using Settings;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000814")]
internal class CharacterInfoPopup : BasePopup
{
	[Token(Token = "0x4002821")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected TextMeshProUGUI _guildLabel;

	[Token(Token = "0x4002822")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected TextMeshProUGUI _nameLabel;

	[Token(Token = "0x4002823")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Image _nameBackground;

	[Token(Token = "0x4002824")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _healthbar;

	[Token(Token = "0x4002825")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Image _healthbarFill;

	[Token(Token = "0x4002826")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected TextMeshProUGUI _healthbarLabel;

	[Token(Token = "0x4002827")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _guildRow;

	[Token(Token = "0x4002828")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4002829")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private NameEffectController _guildEffect;

	[Token(Token = "0x400282A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x400282B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x400282C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Image _guildPresetImage;

	[Token(Token = "0x400282D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BaseCharacter Character;

	[Token(Token = "0x400282E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public Vector3 Offset;

	[Token(Token = "0x400282F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public float Range;

	[Token(Token = "0x4002830")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color _settingsNameColor;

	[Token(Token = "0x4002831")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Color _settingsBackgroundColor;

	[Token(Token = "0x4002832")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private NameStyleType _settingsStyleType;

	[Token(Token = "0x4002833")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	private bool _forceNameColorEnabled;

	[Token(Token = "0x4002834")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x145")]
	private bool _applyForceNameColor;

	[Token(Token = "0x4002835")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x146")]
	private bool _settingsApplyToMe;

	[Token(Token = "0x4002836")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x147")]
	private bool _teamsEnabled;

	[Token(Token = "0x4002837")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private string _name;

	[Token(Token = "0x4002838")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private int _minNameLength;

	[Token(Token = "0x4002839")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private int _maxNameLength;

	[Token(Token = "0x400283A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string _lastName;

	[Token(Token = "0x400283B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _lastGuild;

	[Token(Token = "0x400283C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private string _lastTeam;

	[Token(Token = "0x17000D67")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004D24")]
		[Address(RVA = "0x5C022A0", Offset = "0x5C012A0", VA = "0x5C022A0", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000D68")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004D25")]
		[Address(RVA = "0x5C022B0", Offset = "0x5C012B0", VA = "0x5C022B0", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$get_AnimationTime): clean
			return 0.25;
		}
	}

	[Token(Token = "0x17000D69")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004D26")]
		[Address(RVA = "0x5C022C0", Offset = "0x5C012C0", VA = "0x5C022C0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x6004D27")]
	[Address(RVA = "0x5C022D0", Offset = "0x5C012D0", VA = "0x5C022D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$Setup): 7 lines keep C-only constructs
		TextMeshProUGUI* targetAddress;
		Transform pUVar1;
		Image pUVar2;
		TextMeshProUGUI pTVar3;
		GameObject pUVar4;
		Action __this_00;
		Action<int> __this_01;

		if (Il2CppMethodInitialized_07547d09 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI) ;
			Il2CppMethodInitialized_07547d09 = true;
		}
		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Name");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<Image>();
				this._nameBackground = pUVar2;
				pUVar1 = this.transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("Name/GuildLabel");
					if (pUVar1 != null) {
						pTVar3 = pUVar1.GetComponent<TextMeshProUGUI>();
						this._guildLabel = pTVar3;
						pUVar1 = this.transform;
						if (pUVar1 != null) {
							pUVar1 = pUVar1.Find("Name/NameLabel");
							if (pUVar1 != null) {
								pTVar3 = pUVar1.GetComponent<TextMeshProUGUI>();
								targetAddress = &this._nameLabel;
								this._nameLabel = pTVar3;
								pUVar1 = this.transform;
								if (pUVar1 != null) {
									pUVar1 = pUVar1.Find("Healthbar");
									if (pUVar1 != null) {
										pUVar4 = pUVar1.gameObject;
										this._healthbar = pUVar4;
										pUVar4 = this._healthbar;
										if (pUVar4 != null) {
											pUVar1 = pUVar4.transform;
											if (pUVar1 != null) {
												pUVar1 = pUVar1.Find("Fill");
												if (pUVar1 != null) {
													pUVar2 = pUVar1.GetComponent<Image>();
													this._healthbarFill = pUVar2;
													pUVar4 = this._healthbar;
													if (pUVar4 != null) {
														pUVar1 = pUVar4.transform;
														if (pUVar1 != null) {
															pUVar1 = pUVar1.Find("Label");
															if (pUVar1 != null) {
																pTVar3 = pUVar1.GetComponent<TextMeshProUGUI>();
																this._healthbarLabel = pTVar3;
																pTVar3 = this._guildLabel;
																if (pTVar3 != null) {
																	pTVar3.richText = true;
																	pTVar3 = *targetAddress;
																	if (pTVar3 != null) {
																		pTVar3.richText = true;
																		this.SetupGuildBadges();
																		__this_00 = il2cpp_codegen_object_new(typeof(Action)) ;
																		__this_00 = new Action((object)this, (intptr_t) MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged);
																		SettingsManager.add_OnSettingsChanged(__this_00) ;
																		__this_01 = new Action<int>((object)this, (intptr_t) MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated);
																		InGameManager.add_PlayerInfoUpdated(__this_01);
																		return;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D28")]
	[Address(RVA = "0x5C02CF0", Offset = "0x5C01CF0", VA = "0x5C02CF0")]
	public void OnDestroy()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$OnDestroy): 3 lines keep C-only constructs
		BaseCharacter pCVar1;
		bool bVar2;
		Action __this_00;
		Action<int> __this_01;
		Action<Hashtable> __this_02;

		__this_00 = new Action((object)this, (intptr_t)MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged);
		SettingsManager.remove_OnSettingsChanged(__this_00);
		__this_01 = new Action<int>((object)this, (intptr_t)MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated);
		InGameManager.remove_PlayerInfoUpdated(__this_01);
		pCVar1 = this.Character;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			if (pCVar1.AI == false) {
				__this_02 = new Action<Hashtable>((object)this, (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
				pCVar1.remove_OnPlayerPropertiesChanged(__this_02);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004D29")]
	[Address(RVA = "0x5C02E70", Offset = "0x5C01E70", VA = "0x5C02E70")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$InGameManager_PlayerInfoUpdated): clean
		Player pPVar1;

		pPVar1 = this.OwnerPlayer() ;
		if ((pPVar1 == null) || (pPVar1.actorNumber != actorNumber)) {
			return;
		}
		this.SettingsManager_OnSettingsChanged();
		return;
	}

	[Token(Token = "0x6004D2A")]
	[Address(RVA = "0x5C03A90", Offset = "0x5C02A90", VA = "0x5C03A90")]
	private void Character_OnPlayerPropertiesChanged(Hashtable changedProps)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$Character_OnPlayerPropertiesChanged): 3 lines keep C-only constructs
		uint uVar1;
		BaseCharacter pCVar2;
		BaseComponentCache pUVar3;
		PhotonView pPVar4;
		bool bVar5;
		String pSVar6;
		MethodInfo pMVar7;
		Player pPVar8;

		pMVar7 = (MethodInfo)changedProps;
		bVar5 = this.CanApplySettings();
		if (!bVar5) {
			return;
		}
		if (changedProps == null) {
	label_05d03e12: ;
			throw new NullReferenceException();
		}
		bVar5 = changedProps.ContainsKey((object)PlayerProperty.Team);
		if (bVar5) {
			pSVar6 = (String)changedProps.get_Item((object)PlayerProperty.Team);
			if ((pSVar6 != null) && ((Il2CppClass)pSVar6.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			pCVar2 = this.Character;
			if (pCVar2 == null) goto label_05d03e12;
			pCVar2.Team = pSVar6;
		}
		bVar5 = changedProps.ContainsKey((object)PlayerProperty.Name);
		if (bVar5) {
			pSVar6 = (String)changedProps.get_Item((object)PlayerProperty.Name);
			if (pSVar6 != null) {
				if ((Il2CppClass)pSVar6.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
				pCVar2 = this.Character;
				if (pCVar2 == null) goto label_05d03e12;
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 == null) ||(pPVar4 = pUVar3.PhotonView, pPVar4 == null)) {
					pPVar8 = null;
					uVar1 = (typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor;
				}
				else {
					pPVar8 = pPVar4._Owner_k__BackingField;
					uVar1 = (typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pSVar6 = RoleSpriteHelpers.SanitizePlayerText(pPVar8, pSVar6);
				pSVar6 = MiscExtensions.StripIllegalRichText(pSVar6);
				pCVar2.Name = pSVar6;
			}
		}
		pMVar7 = (MethodInfo)PlayerProperty.Guild;
		bVar5 = changedProps.ContainsKey((object)pMVar7);
		if (bVar5) {
			pMVar7 = (MethodInfo)PlayerProperty.Guild;
			pSVar6 = (String)changedProps.get_Item((object)pMVar7);
			if (pSVar6 != null) {
				if ((Il2CppClass)pSVar6.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
				pCVar2 = this.Character;
				if (pCVar2 == null) goto label_05d03e12;
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 == null) ||(pPVar4 = pUVar3.PhotonView, pPVar4 == null)) {
					pPVar8 = null;
					uVar1 = (typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor;
				}
				else {
					pPVar8 = pPVar4._Owner_k__BackingField;
					uVar1 = (typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pSVar6 = RoleSpriteHelpers.SanitizePlayerText(pPVar8, pSVar6);
				pMVar7 = (MethodInfo)MiscExtensions.StripIllegalRichText(pSVar6);
				pCVar2.Guild = (String)pMVar7;
			}
		}
		this.SettingsManager_OnSettingsChanged();
		return;
	}

	[Token(Token = "0x6004D2B")]
	[Address(RVA = "0x5C02FA0", Offset = "0x5C01FA0", VA = "0x5C02FA0")]
	private void SettingsManager_OnSettingsChanged()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$SettingsManager_OnSettingsChanged): 16 lines keep C-only constructs
		String* targetAddress;
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		ulong uVar5;
		ulong uVar6;
		ulong uVar7;
		int iVar8;
		int iVar9;
		int length;
		UISettings pSVar10;
		IntSetting pSVar11;
		BaseCharacter pCVar12;
		ColorSetting pSVar13;
		Color255 pUVar14;
		ToggleColorSetting pSVar15;
		BoolSetting pSVar16;
		Settings_SettingsManager_StaticFields pSVar17;
		InGameSet pSVar18;
		InGameMiscSettings pSVar19;
		Image pUVar20;
		TextMeshProUGUI pTVar21;
		String pSVar22;
		bool bVar23;
		Color32 UVar24;
		SettingsManager pSVar25;
		String pSVar26;
		String pSVar27;
		String[] values;
		int count;
		float fVar28;
		float fVar29;
		ulong uVar30;
		Color UVar31;
		Color UVar32;

		bVar23 = this.CanApplySettings();
		if (!bVar23) {
			return;
		}
		pSVar10 = SettingsManager.UISettings;
		if ((pSVar10 == null) ||(pSVar11 = pSVar10.NameOverrideTarget, pSVar11 == null)) goto label_05d03a79;
		iVar8 = pSVar11._value;
		if (iVar8 == 0) {
			bVar23 = true;
		}
		else if (iVar8 == 2) {
			pCVar12 = this.Character;
			if (pCVar12 == null) goto label_05d03a79;
			bVar23 = pCVar12.IsMainCharacter();
			bVar23 = !bVar23;
		}
		else if (iVar8 == 1) {
			pCVar12 = this.Character;
			if (pCVar12 == null) goto label_05d03a79;
			bVar23 = pCVar12.IsMainCharacter();
		}
		else {
			bVar23 = false;
		}
		if (this == null) goto label_05d03a79;
		this._settingsApplyToMe = bVar23;
		pSVar10 = SettingsManager.UISettings;
		if ((pSVar10 == null) ||(pSVar11 = pSVar10.NameBackgroundType, pSVar11 == null)) goto label_05d03a79;
		this._settingsStyleType = pSVar11._value;
		pSVar13 = pSVar10.ForceBackgroundColor;
		if ((pSVar13 == null) ||(pUVar14 = pSVar13._value, pUVar14 == null)) goto label_05d03a79;
		UVar31 = (Color)pUVar14.ToColor();
		this._settingsBackgroundColor = UVar31;
		pSVar25 = typeof(SettingsManager);
		pSVar10 = SettingsManager.UISettings;
		if (((pSVar10 == null) ||(pSVar15 = pSVar10.ForceNameColor, pSVar15 == null)) ||(pSVar16 = pSVar15.Enabled, pSVar16 == null)) goto label_05d03a79;
		bVar23 = pSVar16._value;
		this._forceNameColorEnabled = bVar23;
		if (bVar23 == false) {
			this._applyForceNameColor = false;
			fVar28 = (float)g_data_01005870;
			fVar29 = g_data_01005870._4_4_;
			uVar30 = g_data_01005870;
		}
		else {
			if (this == null) goto label_05d03a79;
			this._applyForceNameColor = this._settingsApplyToMe;
			pSVar13 = pSVar15.Color;
			if ((pSVar13 == null) ||(pUVar14 = pSVar13._value, pUVar14 == null)) goto label_05d03a79;
			UVar32 = pUVar14.ToColor();
			uVar30 = UVar32._8_8_;
			fVar28 = UVar32.r;
			fVar29 = UVar32.g;
			pSVar25 = typeof(SettingsManager);
		}
		this._settingsNameColor.r = fVar28;
		this._settingsNameColor.g = fVar29;
		this._settingsNameColor.b = (float)uVar30;
		this._settingsNameColor.a = (float)((ulong)uVar30 >> 0x20);
		pSVar17 = pSVar25.static_fields;
		pSVar18 = pSVar17.InGameCurrent;
		if (((pSVar18 == null) ||(pSVar19 = pSVar18.Misc, pSVar19 == null)) ||(pSVar11 = pSVar19.PVP, pSVar11 == null)) goto label_05d03a79;
		this._teamsEnabled = pSVar11._value == 2;
		pSVar10 = pSVar17.UISettings;
		if ((pSVar10 == null) ||(pSVar11 = pSVar10.MinNameLength, pSVar11 == null)) goto label_05d03a79;
		this._minNameLength = pSVar11._value;
		pSVar11 = pSVar10.MaxNameLength;
		if (pSVar11 == null) goto label_05d03a79;
		this._maxNameLength = pSVar11._value;
		pCVar12 = this.Character;
		if (pCVar12 == null) goto label_05d03a79;
		targetAddress = &this._name;
		this._name = pCVar12.RichTextName;
		if (this._applyForceNameColor == false) {
			pUVar20 = this._nameBackground;
			if (this._settingsApplyToMe != false) {
				if (pUVar20 == null) goto label_05d03a79;
				pUVar20.enabled = this._settingsStyleType == 2;
				pUVar20 = this._nameBackground;
				if (pUVar20 == null) goto label_05d03a79;
				pUVar20.set_color((Color)this._settingsBackgroundColor);
				pTVar21 = this._nameLabel;
				if (pTVar21 == null) goto label_05d03a79;
				pTVar21.set_color((Color)this._settingsNameColor);
				pTVar21 = this._guildLabel;
				if (pTVar21 == null) goto label_05d03a79;
				pTVar21.set_color((Color)this._settingsNameColor);
				iVar8 = this._settingsStyleType;
				pTVar21 = this._nameLabel;
				uVar3 = this._settingsBackgroundColor.r;
				uVar30._0_4_ = this._settingsBackgroundColor.b;
				uVar30._4_4_ = this._settingsBackgroundColor.a;
				UVar24._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(uVar3, uVar30, 0);
				if (pTVar21 == null) goto label_05d03a79;
				pTVar21.outlineColor = UVar24;
				pTVar21 = this._guildLabel;
				uVar4 = this._settingsBackgroundColor.r;
				uVar7._0_4_ = this._settingsBackgroundColor.b;
				uVar7._4_4_ = this._settingsBackgroundColor.a;
				UVar24._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(uVar4, uVar7, 0);
				if (pTVar21 == null) goto label_05d03a79;
				pTVar21.outlineColor = UVar24;
				pTVar21 = this._nameLabel;
				if (iVar8 == 1) {
					fVar28 = 0.2;
				}
				else {
					fVar28 = 0.0;
				}
				if (pTVar21 == null) goto label_05d03a79;
				pTVar21.outlineWidth = fVar28;
				pTVar21 = this._guildLabel;
				if (pTVar21 == null) goto label_05d03a79;
				pTVar21.outlineWidth = fVar28;
				pCVar12 = this.Character;
				if (((pCVar12 == null) ||(pSVar26 = pCVar12.VisibleName, pSVar26 == null)) ||(pSVar26 = pSVar26.Trim(), pSVar26 == null)) goto label_05d03a79;
				iVar8 = pSVar26._stringLength;
				iVar9 = this._minNameLength;
				count = iVar9 - iVar8;
				if (count == 0 || iVar9 < iVar8) {
					length = this._maxNameLength;
					if (length < iVar8) {
						pSVar26 = pSVar26.Substring(0, length);
					}
				}
				else {
					pSVar27 = 0x0.CreateString(0x25a9, count);
					pSVar26 = String.Concat(pSVar26, pSVar27);
				}
				pCVar12 = this.Character;
				if ((pCVar12 == null) ||(pSVar27 = pCVar12.VisibleName, pSVar27 == null)) goto label_05d03a79;
				pSVar22 = pCVar12.RichTextName;
				pSVar27 = pSVar27.Trim();
				bVar23 = (pSVar26 == pSVar27);
				if (this._teamsEnabled == false) {
					if (bVar23) {
						pSVar26 = pSVar22;
					}
					goto label_05d036e0;
				}
				pCVar12 = this.Character;
				if (pCVar12 == null) goto label_05d03a79;
				pSVar27 = pCVar12.Team;
				pSVar27 = TeamInfo.GetTeamColor(pSVar27);
				if (bVar23) {
					pCVar12 = this.Character;
					if ((pCVar12 == null) ||(pSVar26 = pCVar12.VisibleName, pSVar26 == null)) goto label_05d03a79;
					pSVar26 = pSVar26.Trim();
				}
				goto label_05d03613;
			}
			if (pUVar20 == null) goto label_05d03a79;
			pUVar20.enabled = false;
			pTVar21 = this._nameLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.set_color((Color)this._settingsNameColor);
			pTVar21 = this._guildLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.set_color((Color)this._settingsNameColor);
			pTVar21 = this._nameLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.outlineWidth = 0.0;
			pTVar21 = this._guildLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.outlineWidth = 0.0;
			pCVar12 = this.Character;
			if (this._teamsEnabled == false) {
				if (pCVar12 == null) goto label_05d03a79;
				pSVar26 = pCVar12.RichTextName;
				goto label_05d036e0;
			}
			if (pCVar12 == null) goto label_05d03a79;
			pSVar26 = pCVar12.Team;
			pSVar26 = TeamInfo.GetTeamColor(pSVar26);
			pCVar12 = this.Character;
			if ((pCVar12 == null) ||(pSVar27 = pCVar12.VisibleName, pSVar27 == null)) goto label_05d03a79;
			pSVar27 = pSVar27.Trim();
			values = (String[])new string[5];
			if (values == null) goto label_05d03a79;
			if ((int)values.Length == 0) goto label_05d03a7e;
			values[0] = "<color=";
			if ((values.Length & 0xfffffffe) == 0) goto label_05d03a7e;
			values[1] = pSVar26;
			if ((uint)values.Length < 3) goto label_05d03a7e;
			values[2] = ">";
			if ((values.Length & 0xfffffffc) == 0) goto label_05d03a7e;
			values[3] = pSVar27;
			if ((uint)values.Length < 5) goto label_05d03a7e;
			values[4] = "</color>";
		}
		else {
			pUVar20 = this._nameBackground;
			if (pUVar20 == null) goto label_05d03a79;
			pUVar20.enabled = this._settingsStyleType == 2;
			if (this._settingsStyleType == 2) {
				pUVar20 = this._nameBackground;
				if (pUVar20 == null) goto label_05d03a79;
				pUVar20.set_color((Color)this._settingsBackgroundColor);
			}
			pTVar21 = this._nameLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.set_color((Color)this._settingsNameColor);
			pTVar21 = this._guildLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.set_color((Color)this._settingsNameColor);
			iVar8 = this._settingsStyleType;
			pTVar21 = this._nameLabel;
			uVar1 = this._settingsBackgroundColor.r;
			uVar5._0_4_ = this._settingsBackgroundColor.b;
			uVar5._4_4_ = this._settingsBackgroundColor.a;
			UVar24._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(uVar1, uVar5, 0);
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.outlineColor = UVar24;
			pTVar21 = this._guildLabel;
			uVar2 = this._settingsBackgroundColor.r;
			uVar6._0_4_ = this._settingsBackgroundColor.b;
			uVar6._4_4_ = this._settingsBackgroundColor.a;
			UVar24._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(uVar2, uVar6, 0);
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.outlineColor = UVar24;
			pTVar21 = this._nameLabel;
			if (iVar8 == 1) {
				fVar28 = 0.2;
			}
			else {
				fVar28 = 0.0;
			}
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.outlineWidth = fVar28;
			pTVar21 = this._guildLabel;
			if (pTVar21 == null) goto label_05d03a79;
			pTVar21.outlineWidth = fVar28;
			pCVar12 = this.Character;
			if ((pCVar12 == null) ||(pSVar26 = pCVar12.VisibleName, pSVar26 == null)) goto label_05d03a79;
			pSVar26 = pSVar26.Trim();
			if (this._teamsEnabled == false) goto label_05d036e0;
			pCVar12 = this.Character;
			if (pCVar12 == null) goto label_05d03a79;
			pSVar27 = pCVar12.Team;
			pSVar27 = TeamInfo.GetTeamColor(pSVar27);
	label_05d03613: ;
			values = (String[])new string[5];
			if (values == null) {
	label_05d03a79: ;
				throw new NullReferenceException();
			}
			if ((int)values.Length == 0) {
	label_05d03a7e: ;
				throw new IndexOutOfRangeException();
			}
			values[0] = "<color=";
			if ((values.Length & 0xfffffffe) == 0) goto label_05d03a7e;
			values[1] = pSVar27;
			if ((uint)values.Length < 3) goto label_05d03a7e;
			values[2] = ">";
			if ((values.Length & 0xfffffffc) == 0) goto label_05d03a7e;
			values[3] = pSVar26;
			if ((uint)values.Length < 5) goto label_05d03a7e;
			values[4] = "</color>";
		}
		pSVar26 = String.Concat(values);
	label_05d036e0: ;
		this._name = pSVar26;
		this.SetName(this._name);
		return;
	}

	[Token(Token = "0x6004D2C")]
	[Address(RVA = "0x5C03F10", Offset = "0x5C02F10", VA = "0x5C03F10")]
	public void SetName(string name)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$SetName): clean
		BaseCharacter pCVar1;
		TextMeshProUGUI pTVar2;
		AottgBadgeIconRowRuntime pGVar3;
		Object x;
		bool bVar4;
		bool bVar5;
		Player owner;
		String presetId;
		String pSVar6;
		String pSVar7;
		GameObject pUVar8;
		bool value;

		this._name = name;
		pCVar1 = this.Character;
		if (pCVar1 != null) {
			pSVar6 = pCVar1.Guild;
			if (pSVar6 == null) {
				pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8);
			}
			owner = this.OwnerPlayer();
			presetId = this.GuildPresetId(owner);
			bVar4 = AottgGuildPresetVisual.IsPreset(presetId);
			if (bVar4) {
				pSVar6 = AottgGuildPresetCatalog.Label(presetId);
			}
			this.RefreshGuildBadges(owner);
			pSVar7 = this._name;
			pSVar7 = GisketchArabicText.ToVisual(pSVar7, false);
			pSVar6 = GisketchArabicText.ToVisual(pSVar6, false);
			pTVar2 = this._nameLabel;
			if (pTVar2 != null) {
				pTVar2.set_text(pSVar7);
				pTVar2 = this._guildLabel;
				if (pTVar2 != null) {
					pTVar2.set_text(pSVar6);
					bVar4 = String.IsNullOrEmpty(pSVar6);
					value = true;
					if (bVar4) {
						pGVar3 = this._guildBadges;
						value = false;
						bVar5 = ((Object)pGVar3 != null);
						if (bVar5) {
							pGVar3 = this._guildBadges;
							if (pGVar3 == null) goto label_05d0414a;
							value = pGVar3._HasBadges_k__BackingField != false;
						}
					}
					x = (Object)this._guildRow;
					bVar5 = (x != null);
					if (bVar5) {
						pUVar8 = this._guildRow;
						if (pUVar8 == null) goto label_05d0414a;
						pUVar8.SetActive(value);
					}
					pTVar2 = this._guildLabel;
					if (pTVar2 != null) {
						pUVar8 = pTVar2.gameObject;
						if (pUVar8 != null) {
							pUVar8.SetActive(!bVar4);
							this.UpdateEffectOverlay(pSVar6, pSVar7, presetId);
							return;
						}
					}
				}
			}
		}
	label_05d0414a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D2D")]
	[Address(RVA = "0x5C01E00", Offset = "0x5C00E00", VA = "0x5C01E00")]
	public void Load(BaseCharacter character, Vector3 offset, float range)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$Load): 5 lines keep C-only constructs
		BaseCharacter* targetAddress;
		BaseCharacter pCVar1;
		bool bVar2;
		Action<Hashtable> pSVar3;

		pCVar1 = this.Character;
		targetAddress = &this.Character;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = *targetAddress;
			if (pCVar1 == null) goto label_05d01fe1;
			if (pCVar1.AI == false) {
				pSVar3 = new Action<Hashtable>((object)this, (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
				pCVar1.remove_OnPlayerPropertiesChanged(pSVar3);
			}
		}
		this.Character = character;
		this.Offset.x = offset.x;
		this.Offset.y = offset.y;
		this.Offset.z = offset.z;
		this.Range = range;
		if (character != null) {
			this._name = character.RichTextName;
			this._lastTeam = null;
			this._lastGuild = null;
			this._lastName = null;
			pSVar3 = null;
			pCVar1 = this.Character;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					pSVar3 = new Action<Hashtable>((object)this, (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
					pCVar1.add_OnPlayerPropertiesChanged(pSVar3);
				}
				this.SettingsManager_OnSettingsChanged();
				return;
			}
		}
	label_05d01fe1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D2E")]
	[Address(RVA = "0x5C03E30", Offset = "0x5C02E30", VA = "0x5C03E30")]
	private bool CanApplySettings()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$CanApplySettings): clean
		BaseCharacter x;
		Image x_00;
		TextMeshProUGUI pTVar1;
		bool bVar2;

		x = this.Character;
		bVar2 = ((Object)x != null);
		if (bVar2) {
			x_00 = this._nameBackground;
			bVar2 = ((Object)x_00 != null);
			if (bVar2) {
				pTVar1 = this._nameLabel;
				bVar2 = ((Object)pTVar1 != null);
				if (bVar2) {
					pTVar1 = this._guildLabel;
					bVar2 = ((Object)pTVar1 != null);
					return bVar2;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6004D2F")]
	[Address(RVA = "0x5C04BE0", Offset = "0x5C03BE0", VA = "0x5C04BE0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$LateUpdate): clean
		BaseCharacter pCVar1;
		String a;
		String a_00;
		bool bVar2;
		MethodInfo method_00;

		pCVar1 = this.Character;
		bVar2 = ((Object)pCVar1 == null);
		if (bVar2) {
			return;
		}
		pCVar1 = this.Character;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		a = pCVar1.RichTextName;
		if (a == null) {
			a = (String)**(ulong*)(g_data_07556758 + 0xb8);
			a_00 = pCVar1.Guild;
		}
		else {
			a_00 = pCVar1.Guild;
		}
		if (a_00 == null) {
			a_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			method_00 = (MethodInfo)pCVar1.Team;
		}
		else {
			method_00 = (MethodInfo)pCVar1.Team;
		}
		if (method_00 == null) {
			method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar2 = (a == this._lastName);
		if (((bVar2) &&(bVar2 = (a_00 == this._lastGuild))) &&(bVar2 = ((String)method_00 == this._lastTeam))) {
			return;
		}
		this._lastName = a;
		this._lastGuild = a_00;
		this._lastTeam = (String)method_00;
		this.SettingsManager_OnSettingsChanged();
		return;
	}

	[Token(Token = "0x6004D30")]
	[Address(RVA = "0x5C019D0", Offset = "0x5C009D0", VA = "0x5C019D0")]
	public void ToggleName(bool toggle)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$ToggleName): clean
		Image pUVar1;
		bool bVar2;
		GameObject pUVar3;

		pUVar1 = this._nameBackground;
		if (pUVar1 != null) {
			pUVar3 = pUVar1.gameObject;
			if (pUVar3 != null) {
				bVar2 = pUVar3.activeSelf;
				if (bVar2 == toggle) {
					return;
				}
				pUVar1 = this._nameBackground;
				if (pUVar1 != null) {
					pUVar3 = pUVar1.gameObject;
					if (pUVar3 != null) {
						pUVar3.SetActive(toggle);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D31")]
	[Address(RVA = "0x5C017F0", Offset = "0x5C007F0", VA = "0x5C017F0")]
	public void ToggleHealthbar(bool toggle)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$ToggleHealthbar): clean
		bool bVar1;
		GameObject pUVar2;

		pUVar2 = this._healthbar;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.gameObject;
			if (pUVar2 != null) {
				bVar1 = pUVar2.activeSelf;
				if (bVar1 == toggle) {
					return;
				}
				pUVar2 = this._healthbar;
				if (pUVar2 != null) {
					pUVar2 = pUVar2.gameObject;
					if (pUVar2 != null) {
						pUVar2.SetActive(toggle);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D32")]
	[Address(RVA = "0x5C01860", Offset = "0x5C00860", VA = "0x5C01860")]
	public void SetHealthbar(int currentHealth, int maxHealth, Color color)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$SetHealthbar): 18 lines keep C-only constructs
		Image pUVar1;
		TextMeshProUGUI pTVar2;
		String pSVar3;
		String str2;
		float fVar4;
		float fVar5;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar6;
		float fVar7;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color UVar8;
		int local_40;
		int local_3c;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		local_28._8_4_ = in_XMM1_Dc;
		local_28._0_8_ = color._8_8_;
		local_28._12_4_ = in_XMM1_Dd;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = color._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		local_40 = maxHealth;
		local_3c = currentHealth;
		pUVar1 = this._healthbarFill;
		if (maxHealth < 1) {
			fVar5 = 0.0;
			if (pUVar1 == null) goto label_05d019c6;
		}
		else {
			if (pUVar1 == null) goto label_05d019c6;
			fVar4 = (float)currentHealth / (float)maxHealth;
			fVar5 = 1.0;
			if (fVar4 <= 1.0) {
				fVar5 = fVar4;
			}
			fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
		}
		pUVar1.fillAmount = fVar5;
		pTVar2 = this._healthbarLabel;
		pSVar3 = local_3c.ToString();
		str2 = local_40.ToString();
		pSVar3 = String.Concat(pSVar3, "/", str2);
		if (pTVar2 != null) {
			pTVar2.set_text(pSVar3);
			pUVar1 = this._healthbarFill;
			if (pUVar1 != null) {
				UVar8 = pUVar1.get_color();
				fVar5 = UVar8.r - (float)local_38._0_4_;
				fVar4 = UVar8.g - (float)local_38._4_4_;
				fVar6 = UVar8.b - (float)local_28._0_4_;
				fVar7 = UVar8.a - (float)local_28._4_4_;
				if (9.9999994e-11 <= fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) {
					pUVar1 = this._healthbarFill;
					if (pUVar1 == null) goto label_05d019c6;
					UVar8.b = (float)local_28._0_4_;
					UVar8.a = (float)local_28._4_4_;
					UVar8.r = (float)local_38._0_4_;
					UVar8.g = (float)local_38._4_4_;
					pUVar1.set_color(UVar8);
				}
				return;
			}
		}
	label_05d019c6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D33")]
	[Address(RVA = "0x5C04530", Offset = "0x5C03530", VA = "0x5C04530")]
	private void UpdateEffectOverlay(string guild, string nameText, string guildPresetId)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$UpdateEffectOverlay): 38 lines keep C-only constructs
		ResolvedNameEffect effect;
		ResolvedNameEffect effect_00;
		bool bVar1;
		bool bVar2;
		bool bVar3;
		bool bVar4;
		bool bVar5;
		bool bVar6;
		Player player;
		TMP_FontAsset pTVar7;
		TMP_FontAsset preferred;
		GameObject pUVar8;
		TextMeshProUGUI pTVar9;
		float in_XMM1_Da;
		float in_XMM1_Db;
		Color fallbackColor;
		Color color;
		Color fallbackColor_00;
		Color UVar10;
		Color color_00;
		Color fallbackColor_01;
		Color fallbackColor_02;
		ResolvedNameEffect PStack_c8;
		ResolvedNameEffect PStack_78;

		PStack_78.ColorC.b = 0.0;
		PStack_78.ColorC.a = 0.0;
		PStack_78.ColorD.r = 0.0;
		PStack_78.ColorD.g = 0.0;
		PStack_78.ColorB.b = 0.0;
		PStack_78.ColorB.a = 0.0;
		PStack_78.ColorC.r = 0.0;
		PStack_78.ColorC.g = 0.0;
		PStack_78.ColorA.b = 0.0;
		PStack_78.ColorA.a = 0.0;
		PStack_78.ColorB.r = 0.0;
		PStack_78.ColorB.g = 0.0;
		PStack_78.Enabled = false;
		PStack_78._1_3_ = 0;
		PStack_78.Type = 0;
		PStack_78.ColorA.r = 0.0;
		PStack_78.ColorA.g = 0.0;
		PStack_78.ColorD.b = 0.0;
		PStack_78.ColorD.a = 0.0;
		PStack_c8.ColorC.b = 0.0;
		PStack_c8.ColorC.a = 0.0;
		PStack_c8.ColorD.r = 0.0;
		PStack_c8.ColorD.g = 0.0;
		PStack_c8.ColorB.b = 0.0;
		PStack_c8.ColorB.a = 0.0;
		PStack_c8.ColorC.r = 0.0;
		PStack_c8.ColorC.g = 0.0;
		PStack_c8.ColorA.b = 0.0;
		PStack_c8.ColorA.a = 0.0;
		PStack_c8.ColorB.r = 0.0;
		PStack_c8.ColorB.g = 0.0;
		PStack_c8.Enabled = false;
		PStack_c8._1_3_ = 0;
		PStack_c8.Type = 0;
		PStack_c8.ColorA.r = 0.0;
		PStack_c8.ColorA.g = 0.0;
		PStack_c8.ColorD.b = 0.0;
		PStack_c8.ColorD.a = 0.0;
		player = this.OwnerPlayer();
		if (player == null) {
	label_05d0460b: ;
			pTVar7 = NameFontCatalog.Load("Normal");
			preferred = NameFontCatalog.Load("Normal");
			bVar1 = true;
		}
		else {
			bVar1 = PatreonHelper.HasNameEffectAccess(player);
			if ((!bVar1) || (this._applyForceNameColor == true)) goto label_05d0460b;
			pTVar7 = NameFontCatalog.FontForPlayer(player, false);
			bVar1 = false;
			preferred = NameFontCatalog.FontForPlayer(player, true);
		}
		pTVar9 = this._nameLabel;
		bVar2 = ((Object)pTVar9 != null);
		if (bVar2) {
			bVar2 = ((Object)pTVar7 != null);
			if (bVar2) {
				pTVar9 = this._nameLabel;
				pTVar7 = GisketchTypography.ForText(nameText, pTVar7);
				if (pTVar9 == null) goto label_05d04bcd;
				pTVar9.font = pTVar7;
			}
		}
		pTVar9 = this._guildLabel;
		bVar3 = false;
		bVar2 = ((Object)pTVar9 != null);
		if (bVar2) {
			bVar2 = ((Object)preferred != null);
			if (bVar2) {
				pTVar9 = this._guildLabel;
				pTVar7 = GisketchTypography.ForText(guild, preferred);
				if (pTVar9 == null) goto label_05d04bcd;
				pTVar9.font = pTVar7;
			}
		}
		PStack_78.ColorC.b = 0.0;
		PStack_78.ColorC.a = 0.0;
		PStack_78.ColorD.r = 0.0;
		PStack_78.ColorD.g = 0.0;
		PStack_78.ColorB.b = 0.0;
		PStack_78.ColorB.a = 0.0;
		PStack_78.ColorC.r = 0.0;
		PStack_78.ColorC.g = 0.0;
		PStack_78.ColorA.b = 0.0;
		PStack_78.ColorA.a = 0.0;
		PStack_78.ColorB.r = 0.0;
		PStack_78.ColorB.g = 0.0;
		PStack_78.Enabled = false;
		PStack_78._1_3_ = 0;
		PStack_78.Type = 0;
		PStack_78.ColorA.r = 0.0;
		PStack_78.ColorA.g = 0.0;
		PStack_78.ColorD.b = 0.0;
		PStack_78.ColorD.a = 0.0;
		PStack_c8.Enabled = false;
		PStack_c8._1_3_ = 0;
		PStack_c8.Type = 0;
		PStack_c8.ColorA.r = 0.0;
		PStack_c8.ColorA.g = 0.0;
		PStack_c8.ColorA.b = 0.0;
		PStack_c8.ColorA.a = 0.0;
		PStack_c8.ColorB.r = 0.0;
		PStack_c8.ColorB.g = 0.0;
		PStack_c8.ColorB.b = 0.0;
		PStack_c8.ColorB.a = 0.0;
		PStack_c8.ColorC.r = 0.0;
		PStack_c8.ColorC.g = 0.0;
		PStack_c8.ColorC.b = 0.0;
		PStack_c8.ColorC.a = 0.0;
		PStack_c8.ColorD.r = 0.0;
		PStack_c8.ColorD.g = 0.0;
		PStack_c8.ColorD.b = 0.0;
		PStack_c8.ColorD.a = 0.0;
		bVar2 = true;
		if (!bVar1) {
			bVar3 = false;
			bVar1 = false;
			if (this._teamsEnabled == false) {
				bVar1 = NameEffectHelpers.TryGetNameEffect(player, ref PStack_78);
			}
			bVar2 = bVar1 == false;
			bVar1 = String.IsNullOrEmpty(guild);
			if (!bVar1) {
				bVar3 = NameEffectHelpers.TryGetGuildEffect(player, ref PStack_c8);
			}
		}
		bVar1 = String.IsNullOrEmpty(nameText);
		bVar4 = String.IsNullOrEmpty(guild);
		pTVar9 = this._nameLabel;
		if (pTVar9 == null) goto label_05d04bcd;
		pUVar8 = pTVar9.gameObject;
		if (pUVar8 == null) goto label_05d04bcd;
		pUVar8.SetActive(!bVar1);
		bVar5 = AottgGuildPresetVisual.ApplyImage(this._guildPresetImage, guildPresetId);
		this.SetGuildRowSpacing(bVar5);
		pTVar9 = this._guildLabel;
		if (pTVar9 == null) goto label_05d04bcd;
		pUVar8 = pTVar9.gameObject;
		if (pUVar8 == null) goto label_05d04bcd;
		pUVar8.SetActive(!bVar4 && !bVar5);
		pTVar9 = this._guildLabel;
		bVar6 = ((Object)pTVar9 != null);
		if (bVar6) {
			if (bVar5) {
				pTVar9 = this._guildLabel;
				if (pTVar9 == null) goto label_05d04bcd;
				UVar10._0_8_ =pTVar9.get_color();
				fallbackColor.a = in_XMM1_Db;
				fallbackColor.b = in_XMM1_Da;
				fallbackColor._0_8_ = (undefined8)UVar10._0_8_;
				CharacterInfoPopup.ClearEffect(pTVar9, ref this._guildEffect, fallbackColor);
				pTVar9 = this._guildLabel;
				if (pTVar9 == null) goto label_05d04bcd;
				UVar10._0_8_ =pTVar9.get_color();
				color.a = in_XMM1_Db;
				color.b = in_XMM1_Da;
				color._0_8_ = (undefined8)UVar10._0_8_;
				AottgGuildPresetVisual.ClearEffect((TMP_Text)pTVar9, ref this._guildPresetEffect, color);
			}
			else {
				bVar5 = AottgGuildPresetVisual.IsPreset(guildPresetId);
				pTVar9 = this._guildLabel;
				if (bVar5) {
					if (pTVar9 == null) goto label_05d04bcd;
					UVar10._0_8_ =pTVar9.get_color();
					fallbackColor_00.a = in_XMM1_Db;
					fallbackColor_00.b = in_XMM1_Da;
					fallbackColor_00._0_8_ = (undefined8)UVar10._0_8_;
					CharacterInfoPopup.ClearEffect(pTVar9, ref this._guildEffect, fallbackColor_00);
					in_XMM1_Da = (float)g_data_01005870;
					in_XMM1_Db = g_data_01005870._4_4_;
					UVar10.b = (float)(int)g_data_01005870;
					UVar10.a = (float)g_data_01005870._4_4_;
					UVar10.r = (float)(int)g_data_01005870;
					UVar10.g = (float)g_data_01005870._4_4_;
					AottgGuildPresetVisual.ApplyText((TMP_Text)this._guildLabel, ref this._guildPresetEffect, guildPresetId, guild, UVar10);
				}
				else {
					if (!bVar4) {
						if (pTVar9 == null) goto label_05d04bcd;
						UVar10._0_8_ =pTVar9.get_color();
						color_00.a = in_XMM1_Db;
						color_00.b = in_XMM1_Da;
						color_00._0_8_ = (undefined8)UVar10._0_8_;
						AottgGuildPresetVisual.ClearEffect((TMP_Text)pTVar9, ref this._guildPresetEffect, color_00);
						pTVar9 = this._guildLabel;
						if (bVar3 != false) {
							effect.ColorA.r = PStack_c8.ColorA.r;
							effect.ColorA.g = PStack_c8.ColorA.g;
							effect.Enabled = PStack_c8.Enabled;
							effect._1_3_ = PStack_c8._1_3_;
							effect.Type = PStack_c8.Type;
							effect.ColorA.b = PStack_c8.ColorA.b;
							effect.ColorA.a = PStack_c8.ColorA.a;
							effect.ColorB.r = PStack_c8.ColorB.r;
							effect.ColorB.g = PStack_c8.ColorB.g;
							effect.ColorB.b = PStack_c8.ColorB.b;
							effect.ColorB.a = PStack_c8.ColorB.a;
							effect.ColorC.r = PStack_c8.ColorC.r;
							effect.ColorC.g = PStack_c8.ColorC.g;
							effect.ColorC.b = PStack_c8.ColorC.b;
							effect.ColorC.a = PStack_c8.ColorC.a;
							effect.ColorD.r = PStack_c8.ColorD.r;
							effect.ColorD.g = PStack_c8.ColorD.g;
							effect.ColorD.b = PStack_c8.ColorD.b;
							effect.ColorD.a = PStack_c8.ColorD.a;
							in_XMM1_Da = PStack_c8.ColorA.b;
							in_XMM1_Db = PStack_c8.ColorA.a;
							CharacterInfoPopup.ApplyEffect(pTVar9, ref this._guildEffect, effect);
							goto label_05d04af3;
						}
					}
					if (pTVar9 == null) goto label_05d04bcd;
					UVar10._0_8_ =pTVar9.get_color();
					fallbackColor_01.a = in_XMM1_Db;
					fallbackColor_01.b = in_XMM1_Da;
					fallbackColor_01._0_8_ = (undefined8)UVar10._0_8_;
					CharacterInfoPopup.ClearEffect(pTVar9, ref this._guildEffect, fallbackColor_01);
				}
			}
		}
	label_05d04af3: ;
		pTVar9 = this._nameLabel;
		bVar3 = ((Object)pTVar9 != null);
		if (bVar3) {
			pTVar9 = this._nameLabel;
			if ((bVar1) || (bVar2)) {
				if (pTVar9 == null) {
	label_05d04bcd: ;
					throw new NullReferenceException();
				}
				UVar10._0_8_ =pTVar9.get_color();
				fallbackColor_02.a = in_XMM1_Db;
				fallbackColor_02.b = in_XMM1_Da;
				fallbackColor_02._0_8_ = (undefined8)UVar10._0_8_;
				CharacterInfoPopup.ClearEffect(pTVar9, ref this._nameEffect, fallbackColor_02);
			}
			else {
				effect_00.ColorA.r = PStack_78.ColorA.r;
				effect_00.ColorA.g = PStack_78.ColorA.g;
				effect_00.Enabled = PStack_78.Enabled;
				effect_00._1_3_ = PStack_78._1_3_;
				effect_00.Type = PStack_78.Type;
				effect_00.ColorA.b = PStack_78.ColorA.b;
				effect_00.ColorA.a = PStack_78.ColorA.a;
				effect_00.ColorB.r = PStack_78.ColorB.r;
				effect_00.ColorB.g = PStack_78.ColorB.g;
				effect_00.ColorB.b = PStack_78.ColorB.b;
				effect_00.ColorB.a = PStack_78.ColorB.a;
				effect_00.ColorC.r = PStack_78.ColorC.r;
				effect_00.ColorC.g = PStack_78.ColorC.g;
				effect_00.ColorC.b = PStack_78.ColorC.b;
				effect_00.ColorC.a = PStack_78.ColorC.a;
				effect_00.ColorD.r = PStack_78.ColorD.r;
				effect_00.ColorD.g = PStack_78.ColorD.g;
				effect_00.ColorD.b = PStack_78.ColorD.b;
				effect_00.ColorD.a = PStack_78.ColorD.a;
				CharacterInfoPopup.ApplyEffect(pTVar9, ref this._nameEffect, effect_00);
			}
		}
		return;
	}

	[Token(Token = "0x6004D34")]
	[Address(RVA = "0x5C04E70", Offset = "0x5C03E70", VA = "0x5C04E70")]
	private static void ClearEffect(TextMeshProUGUI tmp, ref NameEffectController controller, Color fallbackColor)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$ClearEffect): 4 lines keep C-only constructs
		NameEffectController pPVar1;
		bool bVar2;

		pPVar1 = *controller;
		bVar2 = ((Object)pPVar1 != null);
		if (bVar2) {
			if (*controller == null) goto label_05d04f72;
			(*controller).Clear();
			pPVar1 = *controller;
			Object.Destroy((Object)pPVar1);
			*controller = null;
		}
		bVar2 = ((Object)tmp != null);
		if (!bVar2) {
			return;
		}
		if (tmp != null) {
			tmp.set_color(fallbackColor);
			return;
		}
	label_05d04f72: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D35")]
	[Address(RVA = "0x5C04F80", Offset = "0x5C03F80", VA = "0x5C04F80")]
	private static void ApplyEffect(TextMeshProUGUI tmp, ref NameEffectController controller, ResolvedNameEffect effect)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$ApplyEffect): 5 lines keep C-only constructs
		bool bVar1;
		GameObject __this;
		NameEffectController pPVar2;
		NameEffectSettings settings;
		Color UVar3;

		bVar1 = ((Object)tmp == null);
		if (bVar1) {
			return;
		}
		pPVar2 = *controller;
		bVar1 = ((Object)pPVar2 == null);
		if (bVar1) {
			if ((tmp == null) ||(__this = tmp.gameObject, __this == null)) goto label_05d051cc;
			pPVar2 = __this.AddComponent<NameEffectController>();
			*controller = pPVar2;
		}
		if (*controller != null) {
			(*controller).AutoConfigure();
			settings = NameEffectPresets.GetPreset(effect.Type);
			if (settings != null) {
				settings.gradientA.r = effect.ColorA.r;
				settings.gradientA.g = effect.ColorA.g;
				settings.gradientA.b = effect.ColorA.b;
				settings.gradientA.a = effect.ColorA.a;
				settings.gradientB.r = effect.ColorB.r;
				settings.gradientB.g = effect.ColorB.g;
				settings.gradientB.b = effect.ColorB.b;
				settings.gradientB.a = effect.ColorB.a;
				settings.gradientC.r = effect.ColorC.r;
				settings.gradientC.g = effect.ColorC.g;
				settings.gradientC.b = effect.ColorC.b;
				settings.gradientC.a = effect.ColorC.a;
				settings.gradientD.r = effect.ColorD.r;
				settings.gradientD.g = effect.ColorD.g;
				settings.gradientD.b = effect.ColorD.b;
				settings.gradientD.a = effect.ColorD.a;
				if (tmp != null) {
					UVar3.b = 1.0;
					UVar3.a = 1.0;
					UVar3.r = 1.0;
					UVar3.g = 1.0;
					tmp.set_color(UVar3);
					if (*controller != null) {
						(*controller).Apply(settings);
						return;
					}
				}
			}
		}
	label_05d051cc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D36")]
	[Address(RVA = "0x5C02670", Offset = "0x5C01670", VA = "0x5C02670")]
	private void SetupGuildBadges()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$SetupGuildBadges): 17 lines keep C-only constructs
		GameObject* targetAddress;
		Image* image;
		TextMeshProUGUI pTVar1;
		Il2CppType handle;
		bool bVar2;
		int index;
		Transform pUVar3;
		Transform pUVar4;
		Type[] pSVar5;
		Type pSVar6;
		object pIVar7;
		GameObject pUVar8;
		HorizontalLayoutGroup __this_00;
		ContentSizeFitter __this_01;
		LayoutElement pUVar9;
		AottgBadgeIconRowRuntime pGVar10;
		Image pUVar11;

		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("Name");
			bVar2 = ((Object)pUVar3 == null);
			if (bVar2) {
				return;
			}
			pTVar1 = this._guildLabel;
			bVar2 = ((Object)pTVar1 == null);
			if (bVar2) {
				return;
			}
			pTVar1 = this._guildLabel;
			if ((pTVar1 != null) &&(pUVar4 = pTVar1.transform, pUVar4 != null)) {
				index = pUVar4.GetSiblingIndex();
				pSVar5 = (Type[])new Type[2];
				handle = TypeRef_UnityEngine_RectTransform;
				pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (pSVar5 != null) {
					if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((pSVar5.obj).klass)._1).element_class) , pIVar7 == null)) {
	label_05d02cde: ;
						pIVar7 = new ArrayTypeMismatchException();
						throw pIVar7;
					}
					if ((int)pSVar5.Length != 0) {
						pSVar5[0] = pSVar6;
						pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
						if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05d02cde;
						if ((pSVar5.Length & 0xfffffffe) != 0) {
							pSVar5[1] = pSVar6;
							pUVar8 = new GameObject("GuildBadgeRow", pSVar5);
							targetAddress = &this._guildRow;
							this._guildRow = pUVar8;
							pUVar8 = this._guildRow;
							if ((pUVar8 != null) &&(pUVar4 = pUVar8.transform, pUVar4 != null)) {
								pUVar4.SetParent(pUVar3, false);
								if ((*targetAddress != null) &&(pUVar3 = (*targetAddress).transform, pUVar3 != null)) {
									pUVar3.SetSiblingIndex(index);
									if ((*targetAddress != null) &&(__this_00 = (*targetAddress).AddComponent<HorizontalLayoutGroup>(), __this_00 != null)) {
										__this_00.childAlignment = 4;
										__this_00.childControlWidth = true;
										__this_00.childControlHeight = true;
										__this_00.childForceExpandWidth = false;
										__this_00.childForceExpandHeight = false;
										__this_00.spacing = 4.0;
										if ((*targetAddress != null) &&(__this_01 = (*targetAddress).AddComponent<ContentSizeFitter>() , __this_01 != null)) {
											__this_01.horizontalFit = 2;
											__this_01.verticalFit = 2;
											if (*targetAddress != null) {
												pUVar9 = (*targetAddress).GetComponent<LayoutElement>();
												pTVar1 = this._guildLabel;
												if ((pTVar1 != null) &&(pUVar9 != null)) {
													pUVar9.set_preferredHeight(pTVar1.m_fontSize + 10.0);
													pSVar5 = (Type[])new Type[2];
													pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
													if (pSVar5 != null) {
														if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05d02cde;
														if ((int)pSVar5.Length != 0) {
															pSVar5[0] = pSVar6;
															pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
															if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05d02cde;
															if ((pSVar5.Length & 0xfffffffe) != 0) {
																pSVar5[1] = pSVar6;
																pUVar8 = new GameObject("GuildBadges", pSVar5);
																if (pUVar8 != null) {
																	pUVar3 = pUVar8.transform;
																	if ((*targetAddress != null) &&(pUVar4 = (*targetAddress).transform, pUVar3 != null)) {
																		pUVar3.SetParent(pUVar4, false);
																		pGVar10 = pUVar8.AddComponent<AottgBadgeIconRowRuntime>();
																		this._guildBadges = pGVar10;
																		pTVar1 = this._guildLabel;
																		if ((pTVar1 != null) &&(pGVar10 = this._guildBadges, pGVar10 != null)) {
																			pGVar10.Setup(pTVar1.m_fontSize, 2.0, null, null, true);
																			if (*targetAddress != null) {
																				pUVar3 = (*targetAddress).transform;
																				pTVar1 = this._guildLabel;
																				if (pTVar1 != null) {
																					image = &this._guildPresetImage;
																					pUVar11 = AottgGuildPresetVisual.EnsureImage(pUVar3, image, "GuildPresetImage", pTVar1.m_fontSize + 10.0);
																					this._guildPresetImage = pUVar11;
																					pUVar11 = this._guildPresetImage;
																					if ((pUVar11 != null) &&(pUVar8 = pUVar11.gameObject, pUVar8 != null)) {
																						pUVar8.SetActive(false);
																						pTVar1 = this._guildLabel;
																						if (pTVar1 != null) {
																							pUVar3 = pTVar1.transform;
																							if ((*targetAddress != null) &&(pUVar4 = (*targetAddress).transform, pUVar3 != null)) {
																								pUVar3.SetParent(pUVar4, false);
																								return;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
																goto label_05d02cd4;
															}
														}
														goto label_05d02cd9;
													}
												}
											}
										}
									}
								}
							}
							goto label_05d02cd4;
						}
					}
	label_05d02cd9: ;
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05d02cd4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D37")]
	[Address(RVA = "0x5C04300", Offset = "0x5C03300", VA = "0x5C04300")]
	private void RefreshGuildBadges(Player owner)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$RefreshGuildBadges): 2 lines keep C-only constructs
		AottgBadgeIconRowRuntime pGVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		Dictionary<int, PlayerInfo> __this_00;
		Il2CppClass pIVar4;
		IEnumerable<string> roles;
		String json;
		object local_38;

		local_38 = null;
		pGVar1 = this._guildBadges;
		bVar3 = ((Object)pGVar1 == null);
		if (bVar3) {
			return;
		}
		json = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if (owner == null) {
	label_05d04458: ;
			if (SettingsManager.ProfileSettings != null ) {
				pCVar2 = this.Character;
				bVar3 = ((Object)pCVar2 != null);
				if (bVar3) {
					pCVar2 = this.Character;
					if (pCVar2 == null) goto label_05d04522;
					bVar3 = pCVar2.IsMainCharacter();
					if (bVar3) {
						pIVar4 = (Il2CppClass)SettingsManager.ProfileSettings;
						if (pIVar4 == null) goto label_05d04522;
						goto label_05d044c7;
					}
				}
			}
		}
		else {
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = InGameManager.AllPlayerInfo;
				if (__this_00 != null) goto label_05d04404;
				goto label_05d04458;
			}
			__this_00 = InGameManager.AllPlayerInfo;
			if (__this_00 == null) goto label_05d04458;
	label_05d04404: ;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = InGameManager.AllPlayerInfo;
				if (__this_00 == null) goto label_05d04522;
			}
			bVar3 = __this_00.TryGetValue(owner.actorNumber, ref local_38);
			if (((!bVar3) || (local_38 == null)) ||(pIVar4 = local_38[3].klass, pIVar4 == null)) goto label_05d04458;
	label_05d044c7: ;
			pIVar4 = (pIVar4._1).klass;
			if (pIVar4 == null) goto label_05d04522;
			json = (pIVar4._1).byval_arg.data;
		}
		pGVar1 = this._guildBadges;
		roles = RoleSpriteHelpers.GetRoles(owner);
		if (pGVar1 != null) {
			pGVar1.SetFromCharacterInfoJson(json, roles);
			return;
		}
	label_05d04522: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D38")]
	[Address(RVA = "0x5C04D80", Offset = "0x5C03D80", VA = "0x5C04D80")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$SetGuildRowSpacing): clean
		Object x;
		GameObject __this_00;
		bool bVar1;
		HorizontalLayoutGroup __this_01;
		float value;

		x = (Object)this._guildRow;
		__this_01 = null;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._guildRow;
			if (__this_00 == null) goto label_05d04e5f;
			__this_01 = __this_00.GetComponent<HorizontalLayoutGroup>();
		}
		bVar1 = ((Object)__this_01 != null);
		if (!bVar1) {
			return;
		}
		if (__this_01 != null) {
			if (imageGuild) {
				value = 2.8;
			}
			else {
				value = 4.0;
			}
			__this_01.spacing = value;
			return;
		}
	label_05d04e5f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D39")]
	[Address(RVA = "0x5C04150", Offset = "0x5C03150", VA = "0x5C04150")]
	private string GuildPresetId(Player owner)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$GuildPresetId): clean
		bool bVar1;
		String pSVar2;
		JSONNode pSVar3;
		JSONNode a;

		pSVar2 = this.CharacterInfoJson(owner);
		bVar1 = String.IsNullOrWhiteSpace(pSVar2);
		if (!bVar1) {
			pSVar3 = JSON.Parse(pSVar2);
			bVar1 = (pSVar3 != null);
			if (bVar1) {
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				a = pSVar3.get_Item("guildPresetId");
				bVar1 = (a != null);
				if (bVar1) {
					pSVar3 = pSVar3.get_Item("guildPresetId");
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar2 = pSVar3.get_Value();
					return pSVar2;
				}
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6004D3A")]
	[Address(RVA = "0x5C051E0", Offset = "0x5C041E0", VA = "0x5C051E0")]
	private string CharacterInfoJson(Player owner)
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$CharacterInfoJson): 2 lines keep C-only constructs
		BaseCharacter pCVar1;
		ProfileSettings pSVar2;
		Il2CppClass pIVar3;
		bool bVar4;
		Dictionary<int, PlayerInfo> __this_00;
		Il2CppType pIVar5;
		object local_20;

		local_20 = null;
		if (owner == null) {
	label_05d052ee: ;
			if (SettingsManager.ProfileSettings != null ) {
				pCVar1 = this.Character;
				bVar4 = ((Object)pCVar1 != null);
				if (bVar4) {
					pCVar1 = this.Character;
					if (pCVar1 == null) goto label_05d05390;
					bVar4 = pCVar1.IsMainCharacter();
					if (bVar4) {
						pSVar2 = SettingsManager.ProfileSettings;
						if (pSVar2 == null) goto label_05d05390;
						pIVar3 = (Il2CppClass)pSVar2.CharacterInfoJson;
						goto joined_r0x05d05366;
					}
				}
			}
			pIVar5 = *(Il2CppType*)(g_data_07556758 + 0xb8);
		}
		else {
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = InGameManager.AllPlayerInfo;
				if (__this_00 != null) goto label_05d0528a;
				goto label_05d052ee;
			}
			__this_00 = InGameManager.AllPlayerInfo;
			if (__this_00 == null) goto label_05d052ee;
	label_05d0528a: ;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = InGameManager.AllPlayerInfo;
				if (__this_00 == null) goto label_05d05390;
			}
			bVar4 = __this_00.TryGetValue(owner.actorNumber, ref local_20);
			if (((!bVar4) || (local_20 == null)) || (local_20[3].klass == null)) goto label_05d052ee;
			pIVar3 = ((local_20[3].klass)._1).klass;
	joined_r0x05d05366: ;
			if (pIVar3 == null) {
	label_05d05390: ;
				throw new NullReferenceException();
			}
			pIVar5 = &(pIVar3._1).byval_arg;
		}
		return pIVar5.data;
	}

	[Token(Token = "0x6004D3B")]
	[Address(RVA = "0x5C02EA0", Offset = "0x5C01EA0", VA = "0x5C02EA0")]
	private Player OwnerPlayer()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$OwnerPlayer): clean
		uint uVar1;
		BaseCharacter pCVar2;
		BaseComponentCache pUVar3;
		bool bVar4;
		Player pPVar5;
		PhotonView pPVar6;

		pCVar2 = this.Character;
		bVar4 = ((Object)pCVar2 != null);
		if (bVar4) {
			pCVar2 = this.Character;
			if (pCVar2 == null) {
	label_05d02f95: ;
				throw new NullReferenceException();
			}
			if (pCVar2.AI == false) {
				pUVar3 = pCVar2.Cache;
				if (pUVar3 == null) {
					pPVar6 = null;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					pPVar6 = pUVar3.PhotonView;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar4 = ((Object)pPVar6 != null);
				if (bVar4) {
					pCVar2 = this.Character;
					if (((pCVar2 == null) ||(pUVar3 = pCVar2.Cache, pUVar3 == null)) ||(pPVar6 = pUVar3.PhotonView, pPVar6 == null)) goto label_05d02f95;
				}
			}
			else {
			}
		}
		return pPVar5;
	}

	[Token(Token = "0x6004D3C")]
	[Address(RVA = "0x5C053A0", Offset = "0x5C043A0", VA = "0x5C053A0")]
	public CharacterInfoPopup()
	{
		// Lifted from source/cpp/UI/CharacterInfoPopup.c (UI.CharacterInfoPopup$$.ctor): clean
		this._settingsNameColor.r = 255.0;
		this._settingsNameColor.g = 255.0;
		this._settingsNameColor.b = 255.0;
		this._settingsNameColor.a = 1.0;
		this._settingsBackgroundColor.r = 0.0;
		this._settingsBackgroundColor.g = 0.0;
		this._settingsBackgroundColor.b = 0.0;
		this._settingsBackgroundColor.a = 100.0;
		this._name = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}
}
