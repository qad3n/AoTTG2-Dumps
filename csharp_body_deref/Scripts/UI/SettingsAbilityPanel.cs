using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000696")]
internal class SettingsAbilityPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Text _pointsLeftLabel;

	[Token(Token = "0x400202A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected GameObject _radiusElement;

	[Token(Token = "0x400202B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected GameObject _rangeElement;

	[Token(Token = "0x400202C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected GameObject _speedElement;

	[Token(Token = "0x400202D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected GameObject _cooldownElement;

	[Token(Token = "0x17000CF1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004251")]
		[Address(RVA = "0x402BD90", Offset = "0x402BD90", VA = "0x402BD90", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004252")]
	[Address(RVA = "0x402BDA0", Offset = "0x402BDA0", VA = "0x402BDA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004253")]
	[Address(RVA = "0x402CC00", Offset = "0x402CC00", VA = "0x402CC00")]
	protected string GetBombStatLabel(string cat, string sub, string statName, int pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, string unit, float divisor = 1f)
	{
		return null;
	}

	[Token(Token = "0x6004254")]
	[Address(RVA = "0x402D050", Offset = "0x402D050", VA = "0x402D050")]
	private string CenterString(string text, int totalWidth)
	{
		return null;
	}

	[Token(Token = "0x6004255")]
	[Address(RVA = "0x402D040", Offset = "0x402D040", VA = "0x402D040")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x6004256")]
	[Address(RVA = "0x402D0C0", Offset = "0x402D0C0", VA = "0x402D0C0")]
	protected void RefreshBombStatLabels()
	{
	}

	[Token(Token = "0x6004257")]
	[Address(RVA = "0x402D480", Offset = "0x402D480", VA = "0x402D480")]
	protected void UpdateElementLabel(GameObject element, string newText)
	{
	}

	[Token(Token = "0x6004258")]
	[Address(RVA = "0x402D550", Offset = "0x402D550", VA = "0x402D550")]
	public SettingsAbilityPanel()
	{
	}
}
