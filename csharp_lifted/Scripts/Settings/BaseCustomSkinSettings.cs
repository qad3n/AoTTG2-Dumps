// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseCustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseCustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/BaseCustomSkinSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009F")]
internal class BaseCustomSkinSettings<T> : SetSettingsContainer<T>, ICustomSkinSettings, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x0")]
	public BoolSetting SkinsLocal;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x0")]
	public BoolSetting SkinsEnabled;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> SkinSets;

	[Token(Token = "0x6000482")]
	public BoolSetting GetSkinsEnabled()
	{
		return null;
	}

	[Token(Token = "0x6000483")]
	public IListSetting GetSkinSets()
	{
		return null;
	}

	[Token(Token = "0x6000484")]
	public BoolSetting GetSkinsLocal()
	{
		return null;
	}

	[Token(Token = "0x6000485")]
	public BaseCustomSkinSettings()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/BaseCustomSkinSettings.c.

	// Settings.BaseCustomSkinSettings<object>$$GetSkinsEnabled: clean
	private BoolSetting object__GetSkinsEnabled()
	{
		return this.SkinsEnabled;
	}

	// Settings.BaseCustomSkinSettings<object>$$GetSkinSets: clean
	private IListSetting object__GetSkinSets()
	{
		return (IListSetting)this.SkinSets;
	}

	// Settings.BaseCustomSkinSettings<object>$$GetSkinsLocal: clean
	private BoolSetting object__GetSkinsLocal()
	{
		return this.SkinsLocal;
	}

	// Settings.BaseCustomSkinSettings<object>$$.ctor: 5 lines keep C-only constructs
	private void object___ctor()
	{
		BoolSetting pSVar1;
		Il2CppClass klass;
		ListSetting<T> __this_00;

		pSVar1 = new BoolSetting(false);
		this.SkinsLocal = pSVar1;
		pSVar1 = new BoolSetting(true);
		this.SkinsEnabled = pSVar1;
		klass = method.klass.rgctx_data._1_Settings_ListSetting_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (ListSetting<T>)il2cpp_codegen_object_new(klass);
		__this_00 = new ListSetting<object>();
		this.SkinSets = __this_00;
		base();
		return;
	}
}
