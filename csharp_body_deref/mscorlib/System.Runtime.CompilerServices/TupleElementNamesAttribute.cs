using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000484")]
[CLSCompliant(false)]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Parameter | AttributeTargets.ReturnValue)]
public sealed class TupleElementNamesAttribute : Attribute
{
	[Token(Token = "0x4001305")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _transformNames;

	[Token(Token = "0x600228D")]
	[Address(RVA = "0x4EDB800", Offset = "0x4EDB800", VA = "0x4EDB800")]
	public TupleElementNamesAttribute(string[] transformNames)
	{
	}
}
