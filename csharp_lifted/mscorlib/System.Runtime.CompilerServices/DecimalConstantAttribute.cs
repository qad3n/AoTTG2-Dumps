// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.DecimalConstantAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000479")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public sealed class DecimalConstantAttribute : Attribute
{
	[Token(Token = "0x400125F")]
	[FieldOffset(Offset = "0x10")]
	private decimal _dec;

	[Token(Token = "0x1700046E")]
	public decimal Value
	{
		[Token(Token = "0x60022BA")]
		[Address(RVA = "0x53C8710", Offset = "0x53C7710", VA = "0x53C8710")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x60022B9")]
	[Address(RVA = "0x53C86A0", Offset = "0x53C76A0", VA = "0x53C86A0")]
	[CLSCompliant(false)]
	public DecimalConstantAttribute(byte scale, byte sign, uint hi, uint mid, uint low)
	{
	}
}
