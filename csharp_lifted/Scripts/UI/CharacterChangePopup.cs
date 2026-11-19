// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterChangePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterChangePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200080E")]
internal class CharacterChangePopup : CharacterPopup
{
	[Token(Token = "0x17000D66")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004D09")]
		[Address(RVA = "0x5BFDCC0", Offset = "0x5BFCCC0", VA = "0x5BFDCC0", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/CharacterChangePopup.c (UI.CharacterChangePopup$$get_EscapeBehavior): clean
			return 0;
		}
	}

	[Token(Token = "0x6004D0A")]
	[Address(RVA = "0x5BFDCD0", Offset = "0x5BFCCD0", VA = "0x5BFDCD0", Slot = "62")]
	protected override void SetAllowedCategories()
	{
		// Lifted from source/cpp/UI/CharacterChangePopup.c (UI.CharacterChangePopup$$SetAllowedCategories): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> __this_00;
		String[] pSVar3;
		String item;

		item = "Human";
		__this_00 = this._allowedCategories;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_00._items;
			if (pSVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = item;
					return;
				}
				__this_00.AddWithResize((object)item);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D0B")]
	[Address(RVA = "0x5BFDD70", Offset = "0x5BFCD70", VA = "0x5BFDD70", Slot = "63")]
	protected override void SetupBottomButtons()
	{
		// Lifted from source/cpp/UI/CharacterChangePopup.c (UI.CharacterChangePopup$$SetupBottomButtons): clean
		Transform pUVar1;
		AottgInGameView pGVar2;
		String pSVar3;

		pUVar1 = this.BottomBar;
		pGVar2 = this.View;
		pSVar3 = UIManager.GetLocaleCommon("Back");
		if (pGVar2 != null) {
			pGVar2.Button(pUVar1, pSVar3, "ingame.character.confirm", "Back", 220.0, 44.0, 3);
			pUVar1 = this.BottomBar;
			pGVar2 = this.View;
			pSVar3 = UIManager.GetLocaleCommon("Join");
			if (pGVar2 != null) {
				pGVar2.Button(pUVar1, pSVar3, "ingame.character.confirm", "Join", 220.0, 44.0, 0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D0C")]
	[Address(RVA = "0x5BFDEA0", Offset = "0x5BFCEA0", VA = "0x5BFDEA0", Slot = "64")]
	public override void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CharacterChangePopup.c (UI.CharacterChangePopup$$OnBottomBarButtonClick): 6 lines keep C-only constructs
		float pfVar1;
		float fVar2;
		byte bVar3;
		BaseMenu pUVar4;
		InGameManager __this_00;
		IntSetting __this_01;
		BaseGameManager pGVar5;
		Object x;
		Human __this_02;
		CustomLogicEvaluator pCVar6;
		InGameSet pSVar7;
		InGameMiscSettings pSVar8;
		FloatSetting pSVar9;
		bool bVar10;
		InGameCharacterSettings pSVar11;

		if (Il2CppMethodInitialized_07547cf6 == false) {
			Il2CppMethodInitialized_07547cf6 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05cfdfa6;
	label_05cfded2: ;
			pUVar4 = UIManager.CurrentMenu;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05cfded2;
	label_05cfdfa6: ;
			pUVar4 = UIManager.CurrentMenu;
		}
		if (pUVar4 == null) goto label_05cfe2bc;
		bVar3 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((pUVar4.klass._2).typeHierarchyDepth < bVar3) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		*(byte)&(*(ulong)((sbyte)pUVar4 + 0x158)) = 1;
		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar3 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar3) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
		}
		bVar10 = (name == "Back");
		if (bVar10) goto label_05cfe26b;
		bVar10 = (name == "Join");
		if (!bVar10) {
			return;
		}
		pSVar11 = SettingsManager.InGameCharacterSettings;
		if ((pSVar11 == null) ||(__this_01 = pSVar11.ChooseStatus, __this_01 == null)) goto label_05cfe2bc;
		__this_01.Value = 2;
		pGVar5 = SceneLoader.CurrentGameManager;
		if (pGVar5 == null) goto label_05cfe2bc;
		bVar3 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((pGVar5.klass._2).typeHierarchyDepth < bVar3) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		x = (*(ulong)((sbyte)pGVar5 + 0x80));
		bVar10 = (x != null);
		if ((bVar10) && (__this_02 = (*(ulong)((sbyte)pGVar5 + 0x80)), __this_02 != null)) {
			bVar3 = (typeof(Human)._2).typeHierarchyDepth;
			if (((__this_02.klass._2).typeHierarchyDepth < bVar3) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(Human))) goto label_05cfe16e;
			if ((__this_02.Dead == false) && (__this_02._state != 7)) {
				if (__this_00 == null) goto label_05cfe2bc;
				pSVar11 = __this_00.GetSetHumanSettings();
				__this_02.ReloadHuman(pSVar11);
			}
		}
		else {
	label_05cfe16e: ;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar10 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar10 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar10) {
				if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				pCVar6 = CustomLogicManager.Evaluator;
				if ((((pCVar6 == null) ||(pSVar7 = SettingsManager.InGameCurrent, pSVar7 == null)) ||(pSVar8 = pSVar7.Misc, pSVar8 == null)) ||(pSVar9 = pSVar8.AllowSpawnTime, pSVar9 == null)) goto label_05cfe2bc;
				fVar2 = pSVar9._value;
				pfVar1 = &pCVar6.CurrentTime;
				if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto label_05cfe241;
			}
			if (__this_00 == null) {
	label_05cfe2bc: ;
				throw new NullReferenceException();
			}
			if (__this_00.HasSpawned == false) {
				__this_00.SpawnPlayer(false);
			}
		}
	label_05cfe241: ;
		InGameManager.UpdateRoundPlayerProperties();
		InGameManager.OnCharacterChosen();
		this.SaveLastCharacter();
	label_05cfe26b: ;
		this.Hide();
		return;
	}

	[Token(Token = "0x6004D0D")]
	[Address(RVA = "0x5BFE2E0", Offset = "0x5BFD2E0", VA = "0x5BFE2E0")]
	public CharacterChangePopup()
	{
		// Lifted from source/cpp/UI/CharacterChangePopup.c (UI.CharacterChangePopup$$.ctor): clean
		base();
		return;
	}
}
