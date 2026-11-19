// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MonoPropertyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000524")]
internal struct MonoPropertyInfo
{
	[Token(Token = "0x40014AC")]
	[FieldOffset(Offset = "0x0")]
	public Type parent;

	[Token(Token = "0x40014AD")]
	[FieldOffset(Offset = "0x8")]
	public Type declaring_type;

	[Token(Token = "0x40014AE")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40014AF")]
	[FieldOffset(Offset = "0x18")]
	public MethodInfo get_method;

	[Token(Token = "0x40014B0")]
	[FieldOffset(Offset = "0x20")]
	public MethodInfo set_method;

	[Token(Token = "0x40014B1")]
	[FieldOffset(Offset = "0x28")]
	public PropertyAttributes attrs;
}
