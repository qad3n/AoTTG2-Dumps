// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.ConditionalAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Serializable]
[Token(Token = "0x20005AC")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method, AllowMultiple = true)]
public sealed class ConditionalAttribute : Attribute
{
	[Token(Token = "0x4001815")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly string _003CConditionString_003Ek__BackingField;

	[Token(Token = "0x6002B65")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public ConditionalAttribute(string conditionString)
	{
	}
}
