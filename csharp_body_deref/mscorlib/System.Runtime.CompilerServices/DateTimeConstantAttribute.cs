using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000470")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public sealed class DateTimeConstantAttribute : CustomConstantAttribute
{
	[Token(Token = "0x40012FC")]
	[FieldOffset(Offset = "0x10")]
	private DateTime _date;

	[Token(Token = "0x1700046B")]
	public override object Value
	{
		[Token(Token = "0x600226B")]
		[Address(RVA = "0x4EDB210", Offset = "0x4EDB210", VA = "0x4EDB210", Slot = "7")]
		get
		{
			return null;
		}
	}
}
