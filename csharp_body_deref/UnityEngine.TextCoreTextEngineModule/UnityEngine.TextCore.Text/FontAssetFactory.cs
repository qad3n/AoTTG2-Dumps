// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAssetFactory
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000034")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.CoreModule", "UnityEngine.UIElementsModule" })]
internal class FontAssetFactory
{
	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<FontAsset> visitedFontAssets;

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3041310", Offset = "0x303F910", VA = "0x183041310")]
	internal static FontAsset ConvertFontToFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3041610", Offset = "0x303FC10", VA = "0x183041610")]
	internal static void SetupFontAssetSettings(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3041550", Offset = "0x303FB50", VA = "0x183041550")]
	public static void SetHideFlags(FontAsset fontAsset)
	{
	}
}
