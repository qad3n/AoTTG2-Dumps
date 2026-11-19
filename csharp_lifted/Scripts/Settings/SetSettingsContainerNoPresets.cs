// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainerNoPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainerNoPresets.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainerNoPresets.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000119")]
internal class SetSettingsContainerNoPresets<T> : SetSettingsContainer<T> where T : BaseSetSetting, new()
{
	[Token(Token = "0x170000CC")]
	protected override bool AllowPresets
	{
		[Token(Token = "0x6000603")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000604")]
	public SetSettingsContainerNoPresets()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/SetSettingsContainerNoPresets.c.

	// Settings.SetSettingsContainerNoPresets<object>$$get_AllowPresets: clean
	private bool object__get_AllowPresets()
	{
		return false;
	}

	// Settings.SetSettingsContainerNoPresets<object>$$.ctor: clean
	private void object___ctor()
	{
		base();
		return;
	}
}
