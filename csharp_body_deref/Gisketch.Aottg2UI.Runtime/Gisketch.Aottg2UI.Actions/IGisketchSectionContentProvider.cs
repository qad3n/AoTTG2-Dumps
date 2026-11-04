// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.IGisketchSectionContentProvider
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000FF")]
public interface IGisketchSectionContentProvider
{
	[Token(Token = "0x170000BD")]
	string Prefix
	{
		[Token(Token = "0x6000779")]
		get;
	}

	[Token(Token = "0x600077A")]
	bool EnsureSection(string sectionId);
}
