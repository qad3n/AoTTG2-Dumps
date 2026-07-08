using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000070")]
public static class AottgSearchableExtensions
{
	[Token(Token = "0x600030B")]
	[Address(RVA = "0x39F8CE0", Offset = "0x39F8CE0", VA = "0x39F8CE0")]
	public static GisketchNodeDefinition Searchable(this GisketchNodeDefinition node, [Optional] string title, [Optional] string keywords, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		return null;
	}
}
