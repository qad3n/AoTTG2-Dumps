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
	[Address(RVA = "0x4EDAB20", Offset = "0x4EDAB20", VA = "0x4EDAB20")]
	public ReliabilityContractAttribute(Consistency consistencyGuarantee, Cer cer)
	{
	}
}
