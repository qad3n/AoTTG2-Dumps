// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.DateTimeConstantAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x200049F")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public sealed class DateTimeConstantAttribute : CustomConstantAttribute
{
	[Token(Token = "0x40012FE")]
	[FieldOffset(Offset = "0x10")]
	private DateTime _date;

	[Token(Token = "0x1700046E")]
	public override object Value
	{
		[Token(Token = "0x60022EB")]
		[Address(RVA = "0x1A29AF0", Offset = "0x1A280F0", VA = "0x181A29AF0", Slot = "7")]
		get
		{
			return null;
		}
	}
}
