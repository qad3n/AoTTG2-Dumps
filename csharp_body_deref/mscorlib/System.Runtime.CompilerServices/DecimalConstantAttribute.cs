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
		[Address(RVA = "0x3BC0DF0", Offset = "0x3BC0DF0", VA = "0x3BC0DF0")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x600226C")]
	[Address(RVA = "0x3BC0D80", Offset = "0x3BC0D80", VA = "0x3BC0D80")]
	[CLSCompliant(false)]
	public DecimalConstantAttribute(byte scale, byte sign, uint hi, uint mid, uint low)
	{
	}
}
