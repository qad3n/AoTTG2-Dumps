// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainerPresetsOnly
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainerPresetsOnly.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainerPresetsOnly.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200011A")]
internal class SetSettingsContainerPresetsOnly<T> : SetSettingsContainer<T> where T : BaseSetSetting, new()
{
	[Token(Token = "0x170000CD")]
	protected override bool PresetsOnly
	{
		[Token(Token = "0x6000605")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000606")]
	public SetSettingsContainerPresetsOnly()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/SetSettingsContainerPresetsOnly.c.

	// Settings.SetSettingsContainerPresetsOnly<object>$$get_PresetsOnly: clean
	private bool object__get_PresetsOnly()
	{
		return true;
	}

	// Settings.SetSettingsContainerPresetsOnly<object>$$.ctor: clean
	private void object___ctor()
	{
		base();
		return;
	}
}
