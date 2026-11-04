// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDebugDisplaySettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CD")]
public interface IDebugDisplaySettings
{
	[Token(Token = "0x6000788")]
	void Reset();

	[Token(Token = "0x6000789")]
	void ForEach(Action<IDebugDisplaySettingsData> onExecute);

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "2")]
	IDebugDisplaySettingsData Add(IDebugDisplaySettingsData newData)
	{
		return null;
	}
}
