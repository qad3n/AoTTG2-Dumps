// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AdvancedSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AdvancedSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009E")]
internal class AdvancedSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting ServicesEnabled;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> ServiceKeys;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> ServiceUrls;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<StringSetting> SecretKeys;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> SecretValues;

	[Token(Token = "0x170000A4")]
	protected override string FileName
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x58D13B0", Offset = "0x58D03B0", VA = "0x58D13B0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/AdvancedSettings.c (Settings.AdvancedSettings$$get_FileName): clean
			return "Advanced.json";
		}
	}

	[Token(Token = "0x170000A5")]
	protected override bool Encrypted
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x58D13E0", Offset = "0x58D03E0", VA = "0x58D13E0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Settings/AdvancedSettings.c (Settings.AdvancedSettings$$get_Encrypted): clean
			return true;
		}
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x58D13F0", Offset = "0x58D03F0", VA = "0x58D13F0", Slot = "13")]
	protected override bool Validate()
	{
		// Lifted from source/cpp/Settings/AdvancedSettings.c (Settings.AdvancedSettings$$Validate): clean
		ListSetting<StringSetting> pSVar1;
		int iVar2;
		int iVar3;

		pSVar1 = this.ServiceKeys;
		if (pSVar1 != null) {
			iVar2 = pSVar1.GetCount();
			pSVar1 = this.ServiceUrls;
			if (pSVar1 != null) {
				iVar3 = pSVar1.GetCount();
				if (iVar2 != iVar3) {
					return false;
				}
				pSVar1 = this.SecretKeys;
				if (pSVar1 != null) {
					iVar2 = pSVar1.GetCount();
					pSVar1 = this.SecretValues;
					if (pSVar1 != null) {
						iVar3 = pSVar1.GetCount();
						return iVar2 == iVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x58D1480", Offset = "0x58D0480", VA = "0x58D1480")]
	public bool TryGetServiceUrl(string key, out string url)
	{
		// Lifted from source/cpp/Settings/AdvancedSettings.c (Settings.AdvancedSettings$$TryGetServiceUrl): 2 lines keep C-only constructs
		ListSetting<StringSetting> pSVar1;
		ListSetting<StringSetting> pSVar2;
		List<object> __this_00;
		List<object> __this_01;
		bool bVar3;
		StringSetting pSVar4;
		int index;

		if (Il2CppMethodInitialized_07545c79 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545c79 = true;
		}
		*url = null;
		index = 0;
		bVar3 = String.IsNullOrEmpty(key);
		if (!bVar3) {
			pSVar1 = this.ServiceKeys;
			if (((pSVar1 == null) ||(pSVar2 = this.ServiceUrls, pSVar2 == null)) ||(__this_00 = (List<object>)pSVar1._value, __this_00 == null)) {
	label_059d15ac: ;
				throw new NullReferenceException();
			}
			index = 0;
			if (0 < __this_00._size) {
				__this_01 = (List<object>)pSVar2._value;
				do {
					pSVar4 = __this_00.get_Item(index);
					if (pSVar4 == null) goto label_059d15ac;
					bVar3 = (pSVar4._value == key);
					if (bVar3) {
						if (__this_01 == null) goto label_059d15ac;
						pSVar4 = __this_01.get_Item(index);
						if (pSVar4 == null) goto label_059d15ac;
						*url = pSVar4._value;
						index = 1;
						goto label_059d159b;
					}
					index = index + 1;
				} while (index < __this_00._size);
				index = 0;
			}
		}
	label_059d159b: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x58D15C0", Offset = "0x58D05C0", VA = "0x58D15C0")]
	public bool TryGetSecretValue(string key, out string value)
	{
		// Lifted from source/cpp/Settings/AdvancedSettings.c (Settings.AdvancedSettings$$TryGetSecretValue): 2 lines keep C-only constructs
		ListSetting<StringSetting> pSVar1;
		ListSetting<StringSetting> pSVar2;
		List<object> __this_00;
		List<object> __this_01;
		bool bVar3;
		StringSetting pSVar4;
		int index;

		if (Il2CppMethodInitialized_07545c7a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545c7a = true;
		}
		*value = null;
		index = 0;
		bVar3 = String.IsNullOrEmpty(key);
		if (!bVar3) {
			pSVar1 = this.SecretKeys;
			if (((pSVar1 == null) ||(pSVar2 = this.SecretValues, pSVar2 == null)) ||(__this_00 = (List<object>)pSVar1._value, __this_00 == null)) {
	label_059d16ec: ;
				throw new NullReferenceException();
			}
			index = 0;
			if (0 < __this_00._size) {
				__this_01 = (List<object>)pSVar2._value;
				do {
					pSVar4 = __this_00.get_Item(index);
					if (pSVar4 == null) goto label_059d16ec;
					bVar3 = (pSVar4._value == key);
					if (bVar3) {
						if (__this_01 == null) goto label_059d16ec;
						pSVar4 = __this_01.get_Item(index);
						if (pSVar4 == null) goto label_059d16ec;
						*value = pSVar4._value;
						index = 1;
						goto label_059d16db;
					}
					index = index + 1;
				} while (index < __this_00._size);
				index = 0;
			}
		}
	label_059d16db: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x58D1700", Offset = "0x58D0700", VA = "0x58D1700")]
	public AdvancedSettings()
	{
		// Lifted from source/cpp/Settings/AdvancedSettings.c (Settings.AdvancedSettings$$.ctor): clean
		BoolSetting __this_00;
		ListSetting<StringSetting> pSVar1;

		__this_00 = new BoolSetting(false);
		this.ServicesEnabled = __this_00;
		pSVar1 = new ListSetting<StringSetting>();
		this.ServiceKeys = pSVar1;
		pSVar1 = new ListSetting<StringSetting>();
		this.ServiceUrls = pSVar1;
		pSVar1 = new ListSetting<StringSetting>();
		this.SecretKeys = pSVar1;
		pSVar1 = new ListSetting<StringSetting>();
		this.SecretValues = pSVar1;
		base();
		return;
	}
}
