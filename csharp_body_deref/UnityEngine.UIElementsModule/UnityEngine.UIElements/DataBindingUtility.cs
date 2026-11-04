// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataBindingUtility
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Pool;
using UnityEngine.UIElements.Internal;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class DataBindingUtility
{
	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly UnityEngine.Pool.ObjectPool<TypePathVisitor> k_TypeVisitors;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly UnityEngine.Pool.ObjectPool<AutoCompletePathVisitor> k_AutoCompleteVisitors;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Regex s_ReplaceIndices;

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x308F250", Offset = "0x308D850", VA = "0x18308F250")]
	public static bool TryGetBinding(VisualElement element, in BindingId bindingId, out BindingInfo bindingInfo)
	{
		return default(bool);
	}
}
