// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StyleSheetColor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000637")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class StyleSheetColor
{
	[Token(Token = "0x40017C5")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Color32> s_NameToColor;

	[Token(Token = "0x6002D9A")]
	[Address(RVA = "0x31F5C30", Offset = "0x31F4230", VA = "0x1831F5C30")]
	public static bool TryGetColor(string name, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D9B")]
	[Address(RVA = "0x31F5C10", Offset = "0x31F4210", VA = "0x1831F5C10")]
	private static Color32 HexToColor32(uint color)
	{
		return default(Color32);
	}
}
