// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.IAottgSettingsVirtualItemSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200018B")]
internal interface IAottgSettingsVirtualItemSource
{
	[Token(Token = "0x600088C")]
	void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context);
}
