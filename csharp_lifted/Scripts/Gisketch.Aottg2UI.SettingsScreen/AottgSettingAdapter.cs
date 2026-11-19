// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000170")]
internal abstract class AottgSettingAdapter : IAottgSettingAdapter
{
	[Token(Token = "0x170000EC")]
	public virtual string TextValue
	{
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x5CC5980", Offset = "0x5CC4980", VA = "0x5CC5980", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_TextValue): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x170000ED")]
	public virtual float FloatValue
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x5CC59A0", Offset = "0x5CC49A0", VA = "0x5CC59A0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_FloatValue): clean
			return 0.0;
		}
	}

	[Token(Token = "0x170000EE")]
	public virtual bool BoolValue
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x5CC59B0", Offset = "0x5CC49B0", VA = "0x5CC59B0", Slot = "18")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_BoolValue): clean
			return false;
		}
	}

	[Token(Token = "0x170000EF")]
	public virtual float MinValue
	{
		[Token(Token = "0x60007D8")]
		[Address(RVA = "0x5CC59C0", Offset = "0x5CC49C0", VA = "0x5CC59C0", Slot = "19")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_MinValue): clean
			return 0.0;
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual float MaxValue
	{
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x5CC59D0", Offset = "0x5CC49D0", VA = "0x5CC59D0", Slot = "20")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_MaxValue): clean
			return 1.0;
		}
	}

	[Token(Token = "0x170000F1")]
	public virtual bool HasMinValue
	{
		[Token(Token = "0x60007DA")]
		[Address(RVA = "0x5CC59E0", Offset = "0x5CC49E0", VA = "0x5CC59E0", Slot = "21")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_HasMinValue): clean
			return false;
		}
	}

	[Token(Token = "0x170000F2")]
	public virtual bool HasMaxValue
	{
		[Token(Token = "0x60007DB")]
		[Address(RVA = "0x5CC59F0", Offset = "0x5CC49F0", VA = "0x5CC59F0", Slot = "22")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_HasMaxValue): clean
			return false;
		}
	}

	[Token(Token = "0x170000F3")]
	public virtual int MaxCharacters
	{
		[Token(Token = "0x60007DC")]
		[Address(RVA = "0x5CC5A00", Offset = "0x5CC4A00", VA = "0x5CC5A00", Slot = "23")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$get_MaxCharacters): clean
			return 0;
		}
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x5CC5A10", Offset = "0x5CC4A10", VA = "0x5CC5A10", Slot = "24")]
	public virtual void SetBool(bool value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$SetBool): clean
		return;
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x5CC5A20", Offset = "0x5CC4A20", VA = "0x5CC5A20", Slot = "25")]
	public virtual void SetFloat(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$SetFloat): clean
		return;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x5CC5A30", Offset = "0x5CC4A30", VA = "0x5CC5A30", Slot = "26")]
	public virtual void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$SetText): clean
		return;
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x5CC5A40", Offset = "0x5CC4A40", VA = "0x5CC5A40", Slot = "15")]
	public void SetValueFromContext(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$SetValueFromContext): 1 lines keep C-only constructs
		bool bVar1;
		TMP_InputField x;
		String pSVar2;

		if (Il2CppMethodInitialized_075481b5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_075481b5 = true;
		}
		if (context.Node == null) {
			pSVar2 = null;
		}
		else {
			pSVar2 = ((context.Node).fields).value;
		}
		x = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) goto label_05dc5b4c;
			x = context.GameObject.GetComponent<TMP_InputField>();
		}
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) goto label_05dc5b4c;
			pSVar2 = x.m_Text;
		}
		if (pSVar2 == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this != null) {
			this.SetText(pSVar2) ;
			return;
		}
	label_05dc5b4c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x5CC5B60", Offset = "0x5CC4B60", VA = "0x5CC5B60")]
	protected AottgSettingAdapter()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter$$.ctor): clean
		base();
		return;
	}
}
