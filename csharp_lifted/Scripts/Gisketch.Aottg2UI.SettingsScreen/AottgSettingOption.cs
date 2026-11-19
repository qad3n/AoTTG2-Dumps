// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000178")]
internal readonly struct AottgSettingOption
{
	[Token(Token = "0x400087F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Value;

	[Token(Token = "0x4000880")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Text;

	[Token(Token = "0x4000881")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4000882")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly bool Enabled;

	[Token(Token = "0x4000883")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string Tooltip;

	[Token(Token = "0x4000884")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly string TooltipKey;

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x5CC6760", Offset = "0x5CC5760", VA = "0x5CC6760")]
	public AottgSettingOption(string value, [Optional] string text, [Optional][DefaultParameterValue(true)] bool enabled, [Optional] string tooltip, [Optional] string textKey, [Optional] string tooltipKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$.ctor): clean
		String pSVar1;

		this.Value = value;
		if (text != null) {
			value = text;
		}
		pSVar1 = GisketchArabicText.ToVisual(value, false);
		this.Text = pSVar1;
		this.TextKey = textKey;
		this.Enabled = enabled;
		this.Tooltip = tooltip;
		this.TooltipKey = tooltipKey;
		return;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x5CC6830", Offset = "0x5CC5830", VA = "0x5CC6830")]
	public GisketchChoiceOptionDefinition ToChoice()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$ToChoice): clean
		GisketchChoiceOptionDefinition __this_00;

		__this_00 = new GisketchChoiceOptionDefinition();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.value = this.Value;
		__this_00.text = this.Text;
		__this_00.textKey = this.TextKey;
		__this_00.enabled = this.Enabled;
		__this_00.tooltip = this.Tooltip;
		__this_00.tooltipKey = this.TooltipKey;
		return __this_00;
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x5CC68F0", Offset = "0x5CC58F0", VA = "0x5CC68F0")]
	public static AottgSettingOption[] StringOptions(params string[] values)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$StringOptions): clean
		AottgSettingOption[] pGVar1;

		pGVar1 = AottgSettingOption.LocalizedStringOptions(values, null);
		return pGVar1;
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x5CC6900", Offset = "0x5CC5900", VA = "0x5CC6900")]
	public static AottgSettingOption[] LocalizedStringOptions(string[] values, string[] localizedText)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$LocalizedStringOptions): 5 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		bool bVar3;
		AottgSettingOption[] pGVar4;
		ulong uVar5;
		String pSVar6;
		AottgSettingOption targetAddress;
		ulong uVar7;
		AottgSettingOption local_68;

		if (values == null) {
			pGVar4 = (AottgSettingOption[])new AottgSettingOption[0];
			return pGVar4;
		}
		pGVar4 = (AottgSettingOption[])new AottgSettingOption[(uint32_t)values.Length];
		if (0 < (int)values.Length) {
			if (pGVar4 == null) {
				pSVar2 = values[0];
				pSVar6 = pSVar2;
				if (((localizedText != null) && (0 < (int)localizedText.Length)) &&(bVar3 = String.IsNullOrEmpty(localizedText[0]), !bVar3)) {
					if ((int)localizedText.Length == 0) {
	label_05dc6b37: ;
						throw new IndexOutOfRangeException();
					}
					pSVar6 = localizedText[0];
				}
				local_68.Tooltip = null;
				local_68.TooltipKey = null;
				local_68.TextKey = null;
				local_68.Enabled = false;
				local_68._25_7_ = 0;
				local_68.Value = null;
				local_68.Text = null;
				local_68 = new AottgSettingOption(pSVar2, pSVar6, true, null, null, null);
				throw new NullReferenceException();
			}
			uVar5 = values.Length & 0xffffffff;
			targetAddress = pGVar4.m_Items;
			if (localizedText == null) {
				uVar7 = 0;
				do {
					if (uVar5 <= uVar7) goto label_05dc6b37;
					local_68.Tooltip = null;
					local_68.TooltipKey = null;
					local_68.TextKey = null;
					local_68.Enabled = false;
					local_68._25_7_ = 0;
					local_68.Value = null;
					local_68.Text = null;
					local_68 = new AottgSettingOption(values[uVar7], values[uVar7], true, null, null, null);
					if ((uint)pGVar4.Length <= uVar7) goto label_05dc6b37;
					targetAddress.Tooltip = local_68.Tooltip;
					targetAddress.TooltipKey = local_68.TooltipKey;
					targetAddress.TextKey = local_68.TextKey;
					targetAddress.Enabled = local_68.Enabled;
					*(undefined7)&targetAddress.field_0x19 = local_68._25_7_;
					targetAddress.Value = local_68.Value;
					targetAddress.Text = local_68.Text;
					uVar7 = uVar7 + 1;
					uVar1 = (uint)values.Length;
					uVar5 = (ulong)uVar1;
					targetAddress = targetAddress + 1;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
			else {
				uVar7 = 0;
				do {
					if (uVar5 <= uVar7) goto label_05dc6b37;
					pSVar2 = values[uVar7];
					uVar1 = (uint)localizedText.Length;
					pSVar6 = pSVar2;
					if ((long)uVar7 < (long)(int)uVar1) {
						if (uVar1 <= uVar7) goto label_05dc6b37;
						bVar3 = String.IsNullOrEmpty(localizedText[uVar7]);
						if (!bVar3) {
							if ((uint)localizedText.Length <= uVar7) goto label_05dc6b37;
							pSVar6 = localizedText[uVar7];
						}
					}
					local_68.Tooltip = null;
					local_68.TooltipKey = null;
					local_68.TextKey = null;
					local_68.Enabled = false;
					local_68._25_7_ = 0;
					local_68.Value = null;
					local_68.Text = null;
					local_68 = new AottgSettingOption(pSVar2, pSVar6, true, null, null, null);
					if ((uint)pGVar4.Length <= uVar7) goto label_05dc6b37;
					targetAddress.Tooltip = local_68.Tooltip;
					targetAddress.TooltipKey = local_68.TooltipKey;
					targetAddress.TextKey = local_68.TextKey;
					targetAddress.Enabled = local_68.Enabled;
					*(undefined7)&targetAddress.field_0x19 = local_68._25_7_;
					targetAddress.Value = local_68.Value;
					targetAddress.Text = local_68.Text;
					uVar7 = uVar7 + 1;
					uVar1 = (uint)values.Length;
					uVar5 = (ulong)uVar1;
					targetAddress = targetAddress + 1;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
		}
		return pGVar4;
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x5CC6BD0", Offset = "0x5CC5BD0", VA = "0x5CC6BD0")]
	public static AottgSettingOption[] IndexedOptions(params string[] labels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$IndexedOptions): 5 lines keep C-only constructs
		AottgSettingOption pGVar1;
		uint uVar2;
		AottgSettingOption[] pGVar3;
		String pSVar4;
		long lVar5;
		uint local_6c;
		AottgSettingOption local_68;

		if (labels == null) {
			pGVar3 = (AottgSettingOption[])new AottgSettingOption[0];
			return pGVar3;
		}
		pGVar3 = (AottgSettingOption[])new AottgSettingOption[(uint32_t)labels.Length];
		local_6c = 0;
		if (0 < (int)labels.Length) {
			if (pGVar3 == null) {
				pSVar4 = local_6c.ToString();
				if (local_6c < (uint)labels.Length) {
					local_68.Tooltip = null;
					local_68.TooltipKey = null;
					local_68.TextKey = null;
					local_68.Enabled = false;
					local_68._25_7_ = 0;
					local_68.Value = null;
					local_68.Text = null;
					local_68 = new AottgSettingOption(pSVar4, labels[(int)local_6c], true, null, null, null);
					throw new NullReferenceException();
				}
	label_05dc6d68: ;
				throw new IndexOutOfRangeException();
			}
			do {
				uVar2 = local_6c;
				pSVar4 = local_6c.ToString();
				if ((uint)labels.Length <= local_6c) goto label_05dc6d68;
				local_68.Tooltip = null;
				local_68.TooltipKey = null;
				local_68.TextKey = null;
				local_68.Enabled = false;
				local_68._25_7_ = 0;
				local_68.Value = null;
				local_68.Text = null;
				local_68 = new AottgSettingOption(pSVar4, labels[(int)local_6c], true, null, null, null);
				if ((uint)pGVar3.Length <= uVar2) goto label_05dc6d68;
				lVar5 = (long)(int)uVar2;
				pGVar1 = &pGVar3[lVar5];
				pGVar1.Tooltip = local_68.Tooltip;
				pGVar1.TooltipKey = local_68.TooltipKey;
				pGVar1 = &pGVar3[lVar5];
				pGVar1.TextKey = local_68.TextKey;
				pGVar1.Enabled = local_68.Enabled;
				*(undefined7)&pGVar1.field_0x19 = local_68._25_7_;
				pGVar3[lVar5].Value = local_68.Value;
				pGVar3[lVar5].Text = local_68.Text;
				local_6c = local_6c + 1;
			} while ((int)local_6c < (int)labels.Length);
		}
		return pGVar3;
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x5CC6B80", Offset = "0x5CC5B80", VA = "0x5CC6B80")]
	private static string TextAt(string[] values, int index, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingOption.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$TextAt): clean
		uint uVar1;
		bool bVar2;

		if (((values != null) && (-1 < index)) &&(uVar1 = (uint)values.Length, index < (int)uVar1)) {
			if (uVar1 <= (uint)index) {
	label_05dc6bca: ;
				throw new IndexOutOfRangeException();
			}
			bVar2 = String.IsNullOrEmpty(values[(uint)index]);
			if (!bVar2) {
				if ((uint)values.Length <= (uint)index) goto label_05dc6bca;
			}
		}
		return fallback;
	}
}
