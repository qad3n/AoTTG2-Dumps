// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.ConstrainedExecution;

[Token(Token = "0x2000460")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Interface, Inherited = false)]
public sealed class ReliabilityContractAttribute : Attribute
{
	[Token(Token = "0x40012EE")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly Consistency _003CConsistencyGuarantee_003Ek__BackingField;

	[Token(Token = "0x40012EF")]
	[FieldOffset(Offset = "0x14")]
	[CompilerGenerated]
	private readonly Cer _003CCer_003Ek__BackingField;

	[Token(Token = "0x600224A")]
	[Address(RVA = "0x3BC0640", Offset = "0x3BC0640", VA = "0x3BC0640")]
	public ReliabilityContractAttribute(Consistency consistencyGuarantee, Cer cer)
	{
	}
}
