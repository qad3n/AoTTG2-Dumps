// ==================== AoTTG2 cross-reference ====================
// Type: UI.PlayerKDRRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PlayerKDRRow.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PlayerKDRRow.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000854")]
internal class PlayerKDRRow : MonoBehaviour
{
	[Token(Token = "0x4002A29")]
	[FieldOffset(Offset = "0x20")]
	public Player player;

	[Token(Token = "0x4002A2A")]
	[FieldOffset(Offset = "0x28")]
	public Text id;

	[Token(Token = "0x4002A2B")]
	[FieldOffset(Offset = "0x30")]
	public RawImage weapon;

	[Token(Token = "0x4002A2C")]
	[FieldOffset(Offset = "0x38")]
	public Text playerName;

	[Token(Token = "0x4002A2D")]
	[FieldOffset(Offset = "0x40")]
	public Text score;

	[Token(Token = "0x4002A2E")]
	[FieldOffset(Offset = "0x48")]
	public bool isSet;

	[Token(Token = "0x4002A2F")]
	[FieldOffset(Offset = "0x49")]
	public bool isMasterClient;

	[Token(Token = "0x4002A30")]
	[FieldOffset(Offset = "0x4C")]
	public int actorNumber;

	[Token(Token = "0x4002A31")]
	[FieldOffset(Offset = "0x50")]
	public string status;

	[Token(Token = "0x4002A32")]
	[FieldOffset(Offset = "0x58")]
	public string character;

	[Token(Token = "0x4002A33")]
	[FieldOffset(Offset = "0x60")]
	public string loadout;

	[Token(Token = "0x4002A34")]
	[FieldOffset(Offset = "0x68")]
	public string team;

	[Token(Token = "0x4002A35")]
	[FieldOffset(Offset = "0x70")]
	public int kills;

	[Token(Token = "0x4002A36")]
	[FieldOffset(Offset = "0x74")]
	public int deaths;

	[Token(Token = "0x4002A37")]
	[FieldOffset(Offset = "0x78")]
	public int maxDamage;

	[Token(Token = "0x4002A38")]
	[FieldOffset(Offset = "0x7C")]
	public int totalDamage;

	[Token(Token = "0x4002A39")]
	[FieldOffset(Offset = "0x80")]
	private string[] trackedProperties;

	[Token(Token = "0x4002A3A")]
	private const string _deadStatus = " <color=red>*dead*</color> ";

	[Token(Token = "0x4002A3B")]
	[FieldOffset(Offset = "0x88")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x4002A3C")]
	[FieldOffset(Offset = "0x90")]
	private KDRPanel _kdrPanel;

	[Token(Token = "0x6004F9F")]
	[Address(RVA = "0x5C3A4F0", Offset = "0x5C394F0", VA = "0x5C3A4F0")]
	public void Setup(ElementStyle style, Player player, KDRPanel panel)
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$Setup): clean
		bool bVar1;
		Transform pUVar2;
		GameObject pUVar3;
		Text pUVar4;
		RawImage pUVar5;

		pUVar2 = this.transform;
		pUVar3 = ElementFactory.CreateWhiteLabel(pUVar2, style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 3);
		if (pUVar3 != null) {
			pUVar4 = pUVar3.GetComponent<Text>();
			this.id = pUVar4;
			pUVar2 = this.transform;
			pUVar3 = ElementFactory.CreateRawImage(pUVar2, style, "Icons/Game/BladeIcon", 24.0, 24.0) ;
			if (pUVar3 != null) {
				pUVar5 = pUVar3.GetComponent<RawImage>();
				this.weapon = pUVar5;
				pUVar2 = this.transform;
				pUVar3 = ElementFactory.CreateWhiteLabel(pUVar2, style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 3);
				if (pUVar3 != null) {
					pUVar4 = pUVar3.GetComponent<Text>();
					this.playerName = pUVar4;
					pUVar2 = this.transform;
					pUVar3 = ElementFactory.CreateWhiteLabel(pUVar2, style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
					if (pUVar3 != null) {
						pUVar4 = pUVar3.GetComponent<Text>();
						this.score = pUVar4;
						if (player != null) {
							bVar1 = player.IsMasterClient;
							this.isMasterClient = bVar1;
							this.actorNumber = player.actorNumber;
							this.status = (String)**(ulong*)(g_data_07556758 + 0xb8);
							this.character = (String)**(ulong*)(g_data_07556758 + 0xb8);
							this.loadout = (String)**(ulong*)(g_data_07556758 + 0xb8);
							this.team = (String)**(ulong*)(g_data_07556758 + 0xb8);
							this.isSet = false;
							this.player = player;
							this._kdrPanel = panel;
							this.UpdateRow();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FA0")]
	[Address(RVA = "0x5C3AEA0", Offset = "0x5C39EA0", VA = "0x5C3AEA0")]
	public bool StatsChanged()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$StatsChanged): clean
		int iVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		bool bVar5;

		iVar1 = PhotonExtensions.GetIntProperty(this.player, "Kills", 0);
		iVar2 = PhotonExtensions.GetIntProperty(this.player, "Deaths", 0);
		iVar3 = PhotonExtensions.GetIntProperty(this.player, "HighestDamage", 0);
		iVar4 = PhotonExtensions.GetIntProperty(this.player, "TotalDamage", 0);
		if (((this.kills == iVar1) && (this.deaths == iVar2)) &&(this.maxDamage == iVar3)) {
			bVar5 = this.totalDamage != iVar4;
		}
		return bVar5;
	}

	[Token(Token = "0x6004FA1")]
	[Address(RVA = "0x5C3AF80", Offset = "0x5C39F80", VA = "0x5C3AF80")]
	public bool StatsChanged(int kills, int deaths, int maxDamage, int totalDamage)
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$StatsChanged): clean
		bool bVar1;

		if (((this.kills == kills) && (this.deaths == deaths)) &&(this.maxDamage == maxDamage)) {
			bVar1 = this.totalDamage != totalDamage;
		}
		return bVar1;
	}

	[Token(Token = "0x6004FA2")]
	[Address(RVA = "0x5C3AFA0", Offset = "0x5C39FA0", VA = "0x5C3AFA0")]
	public int GetKillDiff()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetKillDiff): clean
		int iVar1;

		iVar1 = PhotonExtensions.GetIntProperty(this.player, "Kills", 0);
		return iVar1 - this.kills;
	}

	[Token(Token = "0x6004FA3")]
	[Address(RVA = "0x5C3AFE0", Offset = "0x5C39FE0", VA = "0x5C3AFE0")]
	public int GetDeathDiff()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetDeathDiff): clean
		int iVar1;

		iVar1 = PhotonExtensions.GetIntProperty(this.player, "Deaths", 0);
		return iVar1 - this.deaths;
	}

	[Token(Token = "0x6004FA4")]
	[Address(RVA = "0x5C3B020", Offset = "0x5C3A020", VA = "0x5C3B020")]
	public int GetMaxDamageDiff()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetMaxDamageDiff): clean
		int iVar1;

		iVar1 = PhotonExtensions.GetIntProperty(this.player, "HighestDamage", 0);
		return iVar1 - this.maxDamage;
	}

	[Token(Token = "0x6004FA5")]
	[Address(RVA = "0x5C3B060", Offset = "0x5C3A060", VA = "0x5C3B060")]
	public int GetTotalDamageDiff()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetTotalDamageDiff): clean
		int iVar1;

		iVar1 = PhotonExtensions.GetIntProperty(this.player, "TotalDamage", 0);
		return iVar1 - this.totalDamage;
	}

	[Token(Token = "0x6004FA6")]
	[Address(RVA = "0x5C3B0A0", Offset = "0x5C3A0A0", VA = "0x5C3B0A0")]
	public void UpdateRow(Player player)
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$UpdateRow): clean
		this.player = player;
		this.UpdateRow();
		return;
	}

	[Token(Token = "0x6004FA7")]
	[Address(RVA = "0x5C3A780", Offset = "0x5C39780", VA = "0x5C3A780")]
	public void UpdateRow()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$UpdateRow): 8 lines keep C-only constructs
		String* targetAddress;
		uint uVar1;
		Player pPVar2;
		Text pUVar3;
		RawImage __this_00;
		StringBuilder pSVar4;
		bool bVar5;
		bool bVar6;
		int iVar7;
		int iVar8;
		int iVar9;
		int iVar10;
		String pSVar11;
		String pSVar12;
		MethodInfo pMVar13;
		Texture value;
		String pSVar14;
		CustomLogicEvaluator pCVar15;
		object pIVar16;
		String[] pSVar17;
		Text method_00;
		ulong uVar18;
		int iStack_4c;
		String pSStack_48;
		String pSStack_40;
		String pSStack_38;

		iStack_4c = 0;
		pPVar2 = this.player;
		if (pPVar2 == null) {
			return;
		}
		pSStack_38 = PhotonExtensions.GetStringProperty(pPVar2, PlayerProperty.Name, "");
		pSVar11 = PhotonExtensions.GetStringProperty(this.player, PlayerProperty.Status, "");
		pSVar12 = PhotonExtensions.GetStringProperty(this.player, PlayerProperty.Character, "");
		method_00 = null;
		pSStack_48 = PhotonExtensions.GetStringProperty(this.player, PlayerProperty.Loadout, "");
		pPVar2 = this.player;
		if (pPVar2 == null) goto label_05d3ae95;
		bVar6 = this.isMasterClient;
		bVar5 = pPVar2.IsMasterClient;
		pPVar2 = this.player;
		if (bVar6 == bVar5) {
			if (pPVar2 == null) goto label_05d3ae95;
			if ((this.actorNumber != pPVar2.actorNumber) || (this.isSet == false)) goto label_05d3a926;
		}
		else {
			if (pPVar2 == null) goto label_05d3ae95;
	label_05d3a926: ;
			pSStack_40 = pSVar11;
			bVar6 = pPVar2.IsMasterClient;
			this.isMasterClient = bVar6;
			pPVar2 = this.player;
			if (pPVar2 == null) goto label_05d3ae95;
			iVar7 = pPVar2.actorNumber;
			this.actorNumber = iVar7;
			this.isSet = true;
			pUVar3 = this.id;
			bVar6 = pPVar2.IsMasterClient;
			pPVar2 = this.player;
			if (pPVar2 == null) goto label_05d3ae95;
			bVar5 = pPVar2.IsLocal;
			pMVar13 = (MethodInfo)ChatManager.GetIDString(iVar7, bVar6, bVar5);
			if (pUVar3 == null) goto label_05d3ae95;
			method_00 = pUVar3.klass;
			pUVar3.set_text(pMVar13, (method_00.vtable)._75_set_text.method, (IntPtr)method_00);
			pSVar11 = pSStack_40;
		}
		bVar6 = (pSVar12 != this.character);
		if ((bVar6) ||(bVar6 = (pSStack_48 != this.loadout))) {
			this.character = pSVar12;
			pSVar14 = pSStack_48;
			this.loadout = pSStack_48;
			__this_00 = this.weapon;
			value = this.GetPlayerIcon(pSVar12, pSVar14);
			if (__this_00 == null) goto label_05d3ae95;
			__this_00.texture = value;
		}
		pUVar3 = this.playerName;
		if (pUVar3 != null) {
			pSVar14 = pUVar3.get_text();
			pSVar12 = pSStack_38;
			bVar6 = (pSStack_38 != pSVar14);
			if ((bVar6) ||(bVar6 = (pSVar11 != this.status))) {
				this.status = pSVar11;
				pSVar11 = this.GetPlayerStatus(pSVar11);
				pUVar3 = this.playerName;
				pSVar11 = String.Concat(pSVar11, pSVar12, ": ");
				LanguageFonts.SetText(pUVar3, pSVar11);
			}
			pPVar2 = this.player;
			pSVar11 = this.team;
			pSVar12 = PhotonExtensions.GetStringProperty(pPVar2, PlayerProperty.Team, "");
			bVar6 = (pSVar11 != pSVar12);
			if (bVar6) {
				targetAddress = &this.team;
				pPVar2 = this.player;
				pSVar11 = PhotonExtensions.GetStringProperty(pPVar2, PlayerProperty.Team, "");
				*targetAddress = pSVar11;
			}
			iVar7 = PhotonExtensions.GetIntProperty(this.player, "Kills", 0);
			iVar8 = PhotonExtensions.GetIntProperty(this.player, "Deaths", 0);
			iVar9 = PhotonExtensions.GetIntProperty(this.player, "HighestDamage", 0);
			iVar10 = PhotonExtensions.GetIntProperty(this.player, "TotalDamage", 0);
			pSStack_48 = (String)CONCAT44(pSStack_48._4_4_, iVar10);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar15 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar15 = CustomLogicManager.Evaluator;
			}
			if (pCVar15 != null) {
				if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
					pCVar15 = CustomLogicManager.Evaluator;
					if (pCVar15 == null) goto label_05d3ae95;
				}
				bVar6 = (pCVar15.ScoreboardProperty != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar6) {
					pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					pPVar2 = this.player;
					pCVar15 = CustomLogicManager.Evaluator;
					if (pCVar15 != null) {
						pIVar16 = PhotonExtensions.GetCustomProperty(pPVar2, pCVar15.ScoreboardProperty);
						if (pIVar16 != null) {
							pSVar11 = (String)(*pIVar16.klass.vtable[3].methodPtr)(pIVar16,pIVar16.klass.vtable[3].method);
						}
						pUVar3 = this.score;
						if (pUVar3 != null) {
							pSVar12 = pUVar3.get_text();
							bVar6 = (pSVar11 != pSVar12);
							if (!bVar6) {
								return;
							}
							pUVar3 = this.score;
							if (pUVar3 != null) {
								pUVar3.set_text(pSVar11);
								return;
							}
						}
					}
					goto label_05d3ae95;
				}
			}
			pSStack_40 = (String)CONCAT44(pSStack_40._4_4_, iVar9);
			pSStack_38 = (String)CONCAT44(pSStack_38._4_4_, iVar8);
			pSVar4 = this._scoreBuilder;
			if (pSVar4 != null) {
				pSVar4.Clear();
				pSVar17 = this.trackedProperties;
				if (pSVar17 != null) {
					uVar18 = 0;
					do {
						uVar1 = (uint)pSVar17.Length;
						if ((long)(int)uVar1 <= (long)uVar18) {
							pSVar4 = this._scoreBuilder;
							if (pSVar4 != null) {
								pUVar3 = this.score;
								pSVar11 = pSVar4.ToString();
								if (pUVar3 != null) {
									pUVar3.set_text(pSVar11);
									this.kills = iVar7;
									this.deaths = (int32_t)pSStack_38;
									this.maxDamage = (int32_t)pSStack_40;
									this.totalDamage = (int32_t)pSStack_48;
									return;
								}
							}
							break;
						}
						if (uVar1 <= uVar18) {
							throw new IndexOutOfRangeException();
						}
						iStack_4c = PhotonExtensions.GetIntProperty(this.player, pSVar17[uVar18], 0);
						pSVar4 = this._scoreBuilder;
						pSVar11 = iStack_4c.ToString();
						if (pSVar4 == null) break;
						pSVar4.Append(pSVar11);
						pSVar17 = this.trackedProperties;
						if (pSVar17 == null) break;
						if ((long)uVar18 < (long)((int)pSVar17.Length + -1)) {
							pSVar4 = this._scoreBuilder;
							if (pSVar4 == null) break;
							pSVar4.Append("/");
							pSVar17 = this.trackedProperties;
						}
						uVar18 = uVar18 + 1;
					} while (pSVar17 != null);
				}
			}
		}
	label_05d3ae95: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FA8")]
	[Address(RVA = "0x5C3B600", Offset = "0x5C3A600", VA = "0x5C3B600")]
	public string GetPlayerStatus(string status)
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetPlayerStatus): 1 lines keep C-only constructs
		KDRPanel pUVar1;
		bool bVar2;
		String* ppSVar3;

		pUVar1 = this._kdrPanel;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		if (pUVar1._showScoreboardStatus != false) {
			bVar2 = (status == PlayerStatus.Dead);
			ppSVar3 = &" <color=red>*dead*</color> ";
			if (bVar2) goto label_05d3b6c6;
			bVar2 = (status == PlayerStatus.Spectating) ;
			if (bVar2) goto label_05d3b6c6;
		}
		ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
	label_05d3b6c6: ;
		return *ppSVar3;
	}

	[Token(Token = "0x6004FA9")]
	[Address(RVA = "0x5C3B0C0", Offset = "0x5C3A0C0", VA = "0x5C3B0C0")]
	public Texture GetPlayerIcon(string character, string loadout)
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetPlayerIcon): 5 lines keep C-only constructs
		byte bVar1;
		KDRPanel pUVar2;
		bool bVar3;
		String* ppSVar4;
		Object obj;
		Texture pUVar5;
		Texture pUVar6;
		String pSVar7;

		pUVar2 = this._kdrPanel;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		if (pUVar2._showScoreboardLoadout == false) {
			pSVar7 = ResourcePaths.UI;
			ppSVar4 = &"Icons/Specials/NoneSpecialIcon";
			goto label_05d3b599;
		}
		bVar3 = (character == PlayerCharacter.Human);
		if (bVar3) {
			bVar3 = (loadout == HumanLoadout.Blade);
			if (!bVar3) {
				bVar3 = (loadout == HumanLoadout.AHSS);
				if (bVar3) {
					pSVar7 = ResourcePaths.UI;
					ppSVar4 = &"Icons/Game/AHSSIcon";
					goto label_05d3b599;
				}
				bVar3 = (loadout == HumanLoadout.APG);
				if (bVar3) {
					pSVar7 = ResourcePaths.UI;
					ppSVar4 = &"Icons/Game/APGIcon";
					goto label_05d3b599;
				}
				bVar3 = (loadout == HumanLoadout.Thunderspear);
				if (bVar3) {
					pSVar7 = ResourcePaths.UI;
					ppSVar4 = &"Icons/Game/ThunderSpearIcon";
					goto label_05d3b51b;
				}
				bVar3 = (loadout == HumanLoadout.Unarmed) ;
				if (!bVar3) {
					bVar3 = (loadout == HumanLoadout.Civilian);
					if (!bVar3) goto label_05d3b555;
				}
				pSVar7 = ResourcePaths.UI;
				ppSVar4 = &"Icons/Specials/NoneSpecialIcon";
	label_05d3b51b: ;
				obj = ResourceManager.LoadAsset(pSVar7, *ppSVar4, true, false);
				pUVar5 = (Texture)il2cpp_codegen_is_inst_class((object)obj, typeof(Texture));
				return pUVar5;
			}
		}
		else {
			bVar3 = (character == PlayerCharacter.Titan);
			if (bVar3) {
				pSVar7 = ResourcePaths.UI;
				ppSVar4 = &"Icons/Game/TitanIcon";
				goto label_05d3b599;
			}
			bVar3 = (character == PlayerCharacter.Shifter);
			if (bVar3) {
				pSVar7 = ResourcePaths.UI;
				ppSVar4 = &"Icons/Game/ShifterIcon";
				goto label_05d3b599;
			}
		}
	label_05d3b555: ;
		pSVar7 = ResourcePaths.UI;
		ppSVar4 = &"Icons/Game/BladeIcon";
	label_05d3b599: ;
		pUVar6 = (Texture)ResourceManager.LoadAsset(pSVar7, *ppSVar4, true, false);
		if (pUVar6 != null) {
			bVar1 = (typeof(Texture)._2).typeHierarchyDepth;
			if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Texture))) {
				throw new InvalidCastException();
			}
		}
		return pUVar5;
	}

	[Token(Token = "0x6004FAA")]
	[Address(RVA = "0x5C3B6E0", Offset = "0x5C3A6E0", VA = "0x5C3B6E0")]
	public Texture GetPlayerIconFull(string character, string loadout, string status)
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$GetPlayerIconFull): 3 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		String* ppSVar3;
		Texture pUVar4;
		Texture pUVar5;
		String path;

		bVar2 = (status == PlayerStatus.Dead);
		if (bVar2) {
			path = ResourcePaths.UI;
			ppSVar3 = &"Icons/Quests/Skull1Icon";
		}
		else {
			bVar2 = (status == PlayerStatus.Spectating) ;
			if (!bVar2) {
				pUVar5 = this.GetPlayerIcon(character, loadout);
				return pUVar5;
			}
			path = ResourcePaths.UI;
			ppSVar3 = &"Icons/Game/SpectatingIcon";
		}
		pUVar4 = (Texture)ResourceManager.LoadAsset(path, *ppSVar3, true, false);
		if (pUVar4 != null) {
			bVar1 = (typeof(Texture)._2).typeHierarchyDepth;
			if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Texture))) {
				throw new InvalidCastException();
			}
		}
		return pUVar5;
	}

	[Token(Token = "0x6004FAB")]
	[Address(RVA = "0x5C3B8C0", Offset = "0x5C3A8C0", VA = "0x5C3B8C0")]
	public PlayerKDRRow()
	{
		// Lifted from source/cpp/UI/PlayerKDRRow.c (UI.PlayerKDRRow$$.ctor): clean
		String[] pSVar1;
		StringBuilder __this_00;

		pSVar1 = (String[])new string[4];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "Kills";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Deaths";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "HighestDamage";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "TotalDamage";
						this.trackedProperties = pSVar1;
						__this_00 = new StringBuilder();
						this._scoreBuilder = __this_00;
						base();
						return;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
