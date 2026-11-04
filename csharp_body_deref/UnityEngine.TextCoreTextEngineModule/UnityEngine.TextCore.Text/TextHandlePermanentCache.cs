// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandlePermanentCache
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000061")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal class TextHandlePermanentCache
{
	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x10")]
	internal LinkedList<TextCacheEntry> s_Cache;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x18")]
	private object syncRoot;

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3056C40", Offset = "0x3055240", VA = "0x183056C40")]
	public void AddToCache(TextHandle textHandle)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x3056F60", Offset = "0x3055560", VA = "0x183056F60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	public void RemoveFromCache(TextHandle textHandle)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3057100", Offset = "0x3055700", VA = "0x183057100")]
	private void ResetEntryState(TextHandle handle)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x30571A0", Offset = "0x30557A0", VA = "0x1830571A0")]
	public TextHandlePermanentCache()
	{
	}
}
