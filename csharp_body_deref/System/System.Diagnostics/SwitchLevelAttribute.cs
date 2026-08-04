// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.SwitchLevelAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C4")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class SwitchLevelAttribute : Attribute
{
	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x170000B6")]
	public Type SwitchLevelType
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x49246F0", Offset = "0x49246F0", VA = "0x49246F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x49246D0", Offset = "0x49246D0", VA = "0x49246D0")]
	public SwitchLevelAttribute(Type switchLevelType)
	{
	}
}
