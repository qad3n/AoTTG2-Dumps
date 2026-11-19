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
[Token(Token = "0x2000478")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public sealed class DateTimeConstantAttribute : CustomConstantAttribute
{
	[Token(Token = "0x400125E")]
	[FieldOffset(Offset = "0x10")]
	private DateTime _date;

	[Token(Token = "0x1700046D")]
	public override object Value
	{
		[Token(Token = "0x60022B8")]
		[Address(RVA = "0x53C8650", Offset = "0x53C7650", VA = "0x53C8650", Slot = "7")]
		get
		{
			return null;
		}
	}
}
