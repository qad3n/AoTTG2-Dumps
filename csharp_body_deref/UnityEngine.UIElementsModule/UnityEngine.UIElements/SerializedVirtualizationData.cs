// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SerializedVirtualizationData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000087")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class SerializedVirtualizationData
{
	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 scrollOffset;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x18")]
	public int firstVisibleIndex;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x1C")]
	public float contentPadding;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x20")]
	public float contentHeight;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x24")]
	public int anchoredItemIndex;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x28")]
	public float anchorOffset;

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SerializedVirtualizationData()
	{
	}
}
