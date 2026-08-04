// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UQueryExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000410")]
public static class UQueryExtensions
{
	[Token(Token = "0x4000C69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static UQueryState<VisualElement> SingleElementEmptyQuery;

	[Token(Token = "0x4000C6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static UQueryState<VisualElement> SingleElementNameQuery;

	[Token(Token = "0x4000C6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static UQueryState<VisualElement> SingleElementClassQuery;

	[Token(Token = "0x4000C6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static UQueryState<VisualElement> SingleElementNameAndClassQuery;

	[Token(Token = "0x4000C6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static UQueryState<VisualElement> SingleElementTypeQuery;

	[Token(Token = "0x4000C6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static UQueryState<VisualElement> SingleElementTypeAndNameQuery;

	[Token(Token = "0x4000C6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static UQueryState<VisualElement> SingleElementTypeAndClassQuery;

	[Token(Token = "0x4000C70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static UQueryState<VisualElement> SingleElementTypeAndNameAndClassQuery;

	[Token(Token = "0x6001A67")]
	public static T Q<T>(this VisualElement e, [Optional] string name, [Optional] string className) where T : VisualElement
	{
		return null;
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x4F673B0", Offset = "0x4F673B0", VA = "0x4F673B0")]
	public static VisualElement Q(this VisualElement e, [Optional] string name, [Optional] string className)
	{
		return null;
	}
}
