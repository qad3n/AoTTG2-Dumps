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
	[Address(RVA = "0x1046250", Offset = "0x1044850", VA = "0x181046250")]
	public StyleVariable(string name, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6002318")]
	[Address(RVA = "0x312EC30", Offset = "0x312D230", VA = "0x18312EC30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
