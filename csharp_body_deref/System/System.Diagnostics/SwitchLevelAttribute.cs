// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.SwitchLevelAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C5")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class SwitchLevelAttribute : Attribute
{
	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x170000C0")]
	public Type SwitchLevelType
	{
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x6200AB0", Offset = "0x61FFAB0", VA = "0x6200AB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x6200A80", Offset = "0x61FFA80", VA = "0x6200A80")]
	public SwitchLevelAttribute(Type switchLevelType)
	{
	}
}
