using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000471")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public sealed class DecimalConstantAttribute : Attribute
{
	[Token(Token = "0x40012FD")]
	[FieldOffset(Offset = "0x10")]
	private decimal _dec;

	[Token(Token = "0x1700046C")]
	public decimal Value
	{
		[Token(Token = "0x600226D")]
		[Address(RVA = "0x4EDB2D0", Offset = "0x4EDB2D0", VA = "0x4EDB2D0")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x600226C")]
	[Address(RVA = "0x4EDB260", Offset = "0x4EDB260", VA = "0x4EDB260")]
	[CLSCompliant(false)]
	public DecimalConstantAttribute(byte scale, byte sign, uint hi, uint mid, uint low)
	{
	}
}
