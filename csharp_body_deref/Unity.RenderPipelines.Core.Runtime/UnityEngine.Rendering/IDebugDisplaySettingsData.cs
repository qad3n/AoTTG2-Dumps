using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F8")]
public interface IDebugDisplaySettingsData : IDebugDisplaySettingsQuery
{
	[Token(Token = "0x600082B")]
	IDebugDisplaySettingsPanelDisposable CreatePanel();
}
