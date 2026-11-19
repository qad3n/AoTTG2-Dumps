// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameGeneralSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameGeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DF")]
internal class InGameGeneralSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting MapCategory;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting MapName;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting GameMode;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting PrevGameMode;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Difficulty;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> Addons;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting RoomName;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Password;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting MaxPlayers;

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x5A46EC0", Offset = "0x5A45EC0", VA = "0x5A46EC0")]
	public InGameGeneralSettings()
	{
		// Lifted from source/cpp/Settings/InGameGeneralSettings.c (Settings.InGameGeneralSettings$$.ctor): 5 lines keep C-only constructs
		String defaultValue;
		int iVar1;
		StringSetting pSVar2;
		IntSetting __this_00;
		List<StringSetting> __this_01;
		ListSetting<StringSetting> __this_02;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_0754728d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor) ;
			Il2CppMethodInitialized_0754728d = true;
		}
		pSVar2 = new StringSetting("General", 0x7fffffff);
		this.MapCategory = pSVar2;
		pSVar2 = new StringSetting("Forest1", 0x7fffffff);
		this.MapName = pSVar2;
		pSVar2 = new StringSetting("Waves", 0x7fffffff);
		this.GameMode = pSVar2;
		pSVar2 = new StringSetting("", 0x7fffffff);
		this.PrevGameMode = pSVar2;
		__this_00.MinValue = -0x80000000;
		__this_00.MaxValue = 0x7fffffff;
		__this_00 = new IntSetting();
		__this_00.MinValue = -0x80000000;
		__this_00.MaxValue = 0x7fffffff;
		iVar1 = __this_00.SanitizeValue(2);
		__this_00.DefaultValue = iVar1;
		__this_00.SetDefault();
		this.Difficulty = __this_00;
		__this_01 = il2cpp_codegen_object_new(typeof(List<StringSetting>)) ;
		__this_01 = new List<object>();
		__this_02 = new ListSetting<StringSetting>((List<T>)__this_01);
		this.Addons = __this_02;
		pSVar2 = new StringSetting("FoodForTitan", 100);
		this.RoomName = pSVar2;
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(defaultValue, 100);
		this.Password = pSVar2;
		method_00.klass = (Il2CppClass)0x7fffffff80000000;
		method_00 = new IntSetting();
		method_00.klass = (Il2CppClass)0xff00000000;
		iVar1 = method_00.SanitizeValue(10);
		*(int)&method_00.name = iVar1;
		method_00.SetDefault();
		this.MaxPlayers = (IntSetting)method_00;
		base();
		return;
	}
}
