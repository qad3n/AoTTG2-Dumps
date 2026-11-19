// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandlePermanentCache
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6A53370", Offset = "0x6A52370", VA = "0x6A53370")]
	public void AddToCache(TextHandle textHandle)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x6A53810", Offset = "0x6A52810", VA = "0x6A53810")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	public void RemoveFromCache(TextHandle textHandle)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x6A53940", Offset = "0x6A52940", VA = "0x6A53940")]
	private void ResetEntryState(TextHandle handle)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x6A53A30", Offset = "0x6A52A30", VA = "0x6A53A30")]
	public TextHandlePermanentCache()
	{
	}
}
