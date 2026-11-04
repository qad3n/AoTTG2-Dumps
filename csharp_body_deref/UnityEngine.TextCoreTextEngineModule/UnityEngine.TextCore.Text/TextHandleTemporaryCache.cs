// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandleTemporaryCache
// Update status: NEW in this game update
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
	[Address(RVA = "0x3057790", Offset = "0x3055D90", VA = "0x183057790")]
	public void ClearTemporaryCache()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x3057250", Offset = "0x3055850", VA = "0x183057250")]
	public void AddTextInfoToCache(TextHandle textHandle, int hashCode)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x3057D00", Offset = "0x3056300", VA = "0x183057D00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void RemoveFromCache(TextHandle handle)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x3057ED0", Offset = "0x30564D0", VA = "0x183057ED0")]
	internal void ResetEntryState(TextHandle handle)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3057BD0", Offset = "0x30561D0", VA = "0x183057BD0")]
	private void RefreshCaching(TextHandle textHandle)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x30579E0", Offset = "0x3055FE0", VA = "0x1830579E0")]
	private void RecycleTextInfoFromCache(TextHandle textHandle)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x3057F80", Offset = "0x3056580", VA = "0x183057F80")]
	public void UpdateCurrentFrame()
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3057FA0", Offset = "0x30565A0", VA = "0x183057FA0")]
	public TextHandleTemporaryCache()
	{
	}
}
