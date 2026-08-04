// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003E0")]
internal struct StyleVariable
{
	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0x8")]
	public readonly StyleSheet sheet;

	[Token(Token = "0x4000BB1")]
	[FieldOffset(Offset = "0x10")]
	public readonly StyleValueHandle[] handles;

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x4F4E020", Offset = "0x4F4E020", VA = "0x4F4E020")]
	public StyleVariable(string name, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x4F4E060", Offset = "0x4F4E060", VA = "0x4F4E060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
