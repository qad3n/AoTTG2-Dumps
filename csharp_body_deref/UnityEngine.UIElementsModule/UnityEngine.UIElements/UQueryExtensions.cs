// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UQueryExtensions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004D7")]
public static class UQueryExtensions
{
	[Token(Token = "0x40010B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static UQueryState<VisualElement> SingleElementEmptyQuery;

	[Token(Token = "0x40010B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static UQueryState<VisualElement> SingleElementNameQuery;

	[Token(Token = "0x40010B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static UQueryState<VisualElement> SingleElementClassQuery;

	[Token(Token = "0x40010B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static UQueryState<VisualElement> SingleElementNameAndClassQuery;

	[Token(Token = "0x40010B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static UQueryState<VisualElement> SingleElementTypeQuery;

	[Token(Token = "0x40010B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static UQueryState<VisualElement> SingleElementTypeAndNameQuery;

	[Token(Token = "0x40010B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static UQueryState<VisualElement> SingleElementTypeAndClassQuery;

	[Token(Token = "0x40010BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static UQueryState<VisualElement> SingleElementTypeAndNameAndClassQuery;

	[Token(Token = "0x6002627")]
	[Address(RVA = "0x3153600", Offset = "0x3151C00", VA = "0x183153600")]
	public static VisualElement Q(this VisualElement e, [Optional] string name, params string[] classes)
	{
		return null;
	}

	[Token(Token = "0x6002628")]
	public static T Q<T>(this VisualElement e, [Optional] string name, [Optional] string className) where T : VisualElement
	{
		return null;
	}

	[Token(Token = "0x6002629")]
	[Address(RVA = "0x3153150", Offset = "0x3151750", VA = "0x183153150")]
	public static VisualElement Q(this VisualElement e, [Optional] string name, [Optional] string className)
	{
		return null;
	}

	[Token(Token = "0x600262A")]
	public static UQueryBuilder<T> Query<T>(this VisualElement e, [Optional] string name, params string[] classes) where T : VisualElement
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x600262B")]
	public static UQueryBuilder<T> Query<T>(this VisualElement e, [Optional] string name, [Optional] string className) where T : VisualElement
	{
		return default(UQueryBuilder<T>);
	}
}
