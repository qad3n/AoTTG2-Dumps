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
[Token(Token = "0x20004A0")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public sealed class DecimalConstantAttribute : Attribute
{
	[Token(Token = "0x40012FF")]
	[FieldOffset(Offset = "0x10")]
	private decimal _dec;

	[Token(Token = "0x1700046F")]
	public decimal Value
	{
		[Token(Token = "0x60022ED")]
		[Address(RVA = "0x561300", Offset = "0x55F900", VA = "0x180561300")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x60022EC")]
	[Address(RVA = "0x1A29B40", Offset = "0x1A28140", VA = "0x181A29B40")]
	[CLSCompliant(false)]
	public DecimalConstantAttribute(byte scale, byte sign, uint hi, uint mid, uint low)
	{
	}
}
