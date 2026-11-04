// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettingsData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CE")]
public interface IDebugDisplaySettingsData : IDebugDisplaySettingsQuery
{
	[Token(Token = "0x600078B")]
	IDebugDisplaySettingsPanelDisposable CreatePanel();

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "1")]
	void Reset()
	{
	}
}
