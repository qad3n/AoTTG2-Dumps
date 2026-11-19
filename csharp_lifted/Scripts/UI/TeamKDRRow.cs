// ==================== AoTTG2 cross-reference ====================
// Type: UI.TeamKDRRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TeamKDRRow.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TeamKDRRow.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000873")]
internal class TeamKDRRow : MonoBehaviour
{
	[Token(Token = "0x4002AD6")]
	[FieldOffset(Offset = "0x20")]
	public Text teamText;

	[Token(Token = "0x4002AD7")]
	[FieldOffset(Offset = "0x28")]
	public Text scoreText;

	[Token(Token = "0x4002AD8")]
	[FieldOffset(Offset = "0x30")]
	public string team;

	[Token(Token = "0x4002AD9")]
	[FieldOffset(Offset = "0x38")]
	public int kills;

	[Token(Token = "0x4002ADA")]
	[FieldOffset(Offset = "0x3C")]
	public int deaths;

	[Token(Token = "0x4002ADB")]
	[FieldOffset(Offset = "0x40")]
	public int maxDamage;

	[Token(Token = "0x4002ADC")]
	[FieldOffset(Offset = "0x44")]
	public int totalDamage;

	[Token(Token = "0x4002ADD")]
	[FieldOffset(Offset = "0x48")]
	public int playerCount;

	[Token(Token = "0x4002ADE")]
	[FieldOffset(Offset = "0x50")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x60050A2")]
	[Address(RVA = "0x5C51F40", Offset = "0x5C50F40", VA = "0x5C51F40")]
	public void Setup(ElementStyle style, string team)
	{
		// Lifted from source/cpp/UI/TeamKDRRow.c (UI.TeamKDRRow$$Setup): 6 lines keep C-only constructs
		Text* targetAddress;
		Text* targetAddress_00;
		Transform pUVar1;
		GameObject pUVar2;
		Text pUVar3;
		Color UVar4;

		pUVar1 = this.transform;
		pUVar2 = ElementFactory.CreateDefaultLabel(pUVar1, style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 3);
		if (pUVar2 != null) {
			pUVar3 = pUVar2.GetComponent<Text>();
			targetAddress = &this.teamText;
			this.teamText = pUVar3;
			pUVar1 = this.transform;
			pUVar2 = ElementFactory.CreateDefaultLabel(pUVar1, style, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
			if (pUVar2 != null) {
				pUVar3 = pUVar2.GetComponent<Text>();
				targetAddress_00 = &this.scoreText;
				this.scoreText = pUVar3;
				pUVar3 = this.teamText;
				if (pUVar3 != null) {
					pUVar3.set_text(team);
					pUVar3 = *targetAddress;
					UVar4 = TeamInfo.GetTeamColorUnity(team);
					if (pUVar3 != null) {
						pUVar3.set_color(UVar4);
						pUVar3 = *targetAddress_00;
						if (pUVar3 != null) {
							pUVar3.set_text((String)**(ulong*)(g_data_07556758 + 0xb8));
							this.kills = 0;
							this.deaths = 0;
							this.maxDamage = 0;
							this.totalDamage = 0;
							this.playerCount = 0;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050A3")]
	[Address(RVA = "0x5C520F0", Offset = "0x5C510F0", VA = "0x5C520F0")]
	public void ResetStats()
	{
		// Lifted from source/cpp/UI/TeamKDRRow.c (UI.TeamKDRRow$$ResetStats): clean
		this.kills = 0;
		this.deaths = 0;
		this.maxDamage = 0;
		this.totalDamage = 0;
		this.playerCount = 0;
		return;
	}

	[Token(Token = "0x60050A4")]
	[Address(RVA = "0x5C52100", Offset = "0x5C51100", VA = "0x5C52100")]
	public void RemovePlayerStats(PlayerKDRRow player)
	{
		// Lifted from source/cpp/UI/TeamKDRRow.c (UI.TeamKDRRow$$RemovePlayerStats): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		int val2;
		int iVar6;

		if (player == null) {
			throw new NullReferenceException();
		}
		uVar2 = this.kills;
		uVar4 = this.deaths;
		uVar3 = player.kills;
		uVar5 = player.deaths;
		this.kills = uVar2 - uVar3;
		this.deaths = uVar4 - uVar5;
		iVar6 = this.maxDamage;
		val2 = player.maxDamage;
		iVar6 = Math.Max(iVar6, val2);
		this.maxDamage = iVar6;
		piVar1 = &this.totalDamage;
		*piVar1 = *piVar1 - player.totalDamage;
		piVar1 = &this.playerCount;
		*piVar1 = *piVar1 + -1;
		return;
	}

	[Token(Token = "0x60050A5")]
	[Address(RVA = "0x5C52190", Offset = "0x5C51190", VA = "0x5C52190")]
	public void AddPlayerStats(PlayerKDRRow player)
	{
		// Lifted from source/cpp/UI/TeamKDRRow.c (UI.TeamKDRRow$$AddPlayerStats): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		int val2;
		int iVar7;

		if (player == null) {
			throw new NullReferenceException();
		}
		uVar1 = this.kills;
		uVar4 = this.deaths;
		uVar2 = player.kills;
		uVar5 = player.deaths;
		this.kills = uVar2 + uVar1;
		this.deaths = uVar5 + uVar4;
		iVar7 = this.maxDamage;
		val2 = player.maxDamage;
		iVar7 = Math.Max(iVar7, val2);
		this.maxDamage = iVar7;
		uVar3 = this.totalDamage;
		uVar6 = this.playerCount;
		this.totalDamage = player.totalDamage + uVar3;
		this.playerCount = uVar6 + 1;
		return;
	}

	[Token(Token = "0x60050A6")]
	[Address(RVA = "0x5C52230", Offset = "0x5C51230", VA = "0x5C52230")]
	public void UpdateRow()
	{
		// Lifted from source/cpp/UI/TeamKDRRow.c (UI.TeamKDRRow$$UpdateRow): clean
		StringBuilder pSVar1;
		Text pUVar2;
		String pSVar3;

		pSVar1 = this._scoreBuilder;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = this._scoreBuilder;
			if (pSVar1 != null) {
				pSVar1.Append(this.kills);
				pSVar1 = this._scoreBuilder;
				if (pSVar1 != null) {
					pSVar1.Append("/");
					pSVar1 = this._scoreBuilder;
					if (pSVar1 != null) {
						pSVar1.Append(this.deaths);
						pSVar1 = this._scoreBuilder;
						if (pSVar1 != null) {
							pSVar1.Append("/");
							pSVar1 = this._scoreBuilder;
							if (pSVar1 != null) {
								pSVar1.Append(this.maxDamage);
								pSVar1 = this._scoreBuilder;
								if (pSVar1 != null) {
									pSVar1.Append("/");
									pSVar1 = this._scoreBuilder;
									if (pSVar1 != null) {
										pSVar1.Append(this.totalDamage);
										pSVar1 = this._scoreBuilder;
										if (pSVar1 != null) {
											pSVar1.Append("\t(");
											pSVar1 = this._scoreBuilder;
											if (pSVar1 != null) {
												pSVar1.Append(this.playerCount);
												pSVar1 = this._scoreBuilder;
												if (pSVar1 != null) {
													pSVar1.Append(")");
													pSVar1 = this._scoreBuilder;
													if (pSVar1 != null) {
														pUVar2 = this.scoreText;
														pSVar3 = pSVar1.ToString();
														if (pUVar2 != null) {
															pUVar2.set_text(pSVar3);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050A7")]
	[Address(RVA = "0x5C523C0", Offset = "0x5C513C0", VA = "0x5C523C0")]
	public TeamKDRRow()
	{
		// Lifted from source/cpp/UI/TeamKDRRow.c (UI.TeamKDRRow$$.ctor): clean
		StringBuilder __this_00;

		__this_00 = new StringBuilder();
		this._scoreBuilder = __this_00;
		base();
		return;
	}
}
