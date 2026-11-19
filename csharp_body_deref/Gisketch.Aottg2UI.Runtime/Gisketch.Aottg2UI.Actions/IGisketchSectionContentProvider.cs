// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.IGisketchSectionContentProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x2000105")]
public interface IGisketchSectionContentProvider
{
	[Token(Token = "0x170000BE")]
	string Prefix
	{
		[Token(Token = "0x60007C8")]
		get;
	}

	[Token(Token = "0x60007C9")]
	bool EnsureSection(string sectionId);
}
