// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.SwitchLevelAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000104")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class SwitchLevelAttribute : Attribute
{
	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x170000EF")]
	public Type SwitchLevelType
	{
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x2874140", Offset = "0x2872740", VA = "0x182874140")]
		set
		{
		}
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x28740A0", Offset = "0x28726A0", VA = "0x1828740A0")]
	public SwitchLevelAttribute(Type switchLevelType)
	{
	}
}
