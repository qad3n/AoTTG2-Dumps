// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandleTemporaryCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000064")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal class TextHandleTemporaryCache
{
	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x10")]
	internal LinkedList<TextCacheEntry> s_Cache;

	[Token(Token = "0x40003BA")]
	internal const int s_MinFramesInCache = 2;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x18")]
	internal int currentFrame;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x20")]
	private object syncRoot;

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x6A53AE0", Offset = "0x6A52AE0", VA = "0x6A53AE0")]
	public void ClearTemporaryCache()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x6A53CE0", Offset = "0x6A52CE0", VA = "0x6A53CE0")]
	public void AddTextInfoToCache(TextHandle textHandle, int hashCode)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x6A54460", Offset = "0x6A53460", VA = "0x6A54460")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void RemoveFromCache(TextHandle handle)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x6A53C40", Offset = "0x6A52C40", VA = "0x6A53C40")]
	internal void ResetEntryState(TextHandle handle)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x6A54140", Offset = "0x6A53140", VA = "0x6A54140")]
	private void RefreshCaching(TextHandle textHandle)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x6A54270", Offset = "0x6A53270", VA = "0x6A54270")]
	private void RecycleTextInfoFromCache(TextHandle textHandle)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x6A545A0", Offset = "0x6A535A0", VA = "0x6A545A0")]
	public void UpdateCurrentFrame()
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x6A545B0", Offset = "0x6A535B0", VA = "0x6A545B0")]
	public TextHandleTemporaryCache()
	{
	}
}
