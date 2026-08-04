// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F7")]
public interface IDebugDisplaySettings
{
	[Token(Token = "0x6000829")]
	void Reset();

	[Token(Token = "0x600082A")]
	void ForEach(Action<IDebugDisplaySettingsData> onExecute);
}
