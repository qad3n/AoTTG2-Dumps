// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200048D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct StyleVariable
{
	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x4000F2B")]
	[FieldOffset(Offset = "0x8")]
	public readonly StyleSheet sheet;

	[Token(Token = "0x4000F2C")]
	[FieldOffset(Offset = "0x10")]
	public readonly StyleValueHandle[] handles;

	[Token(Token = "0x6002317")]
	[Address(RVA = "0x6B27150", Offset = "0x6B26150", VA = "0x6B27150")]
	public StyleVariable(string name, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6002318")]
	[Address(RVA = "0x6B27190", Offset = "0x6B26190", VA = "0x6B27190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
