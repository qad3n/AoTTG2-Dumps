using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x200046F")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public abstract class CustomConstantAttribute : Attribute
{
	[Token(Token = "0x1700046A")]
	public abstract object Value
	{
		[Token(Token = "0x6002269")]
		get;
	}

	[Token(Token = "0x600226A")]
	[Address(RVA = "0x4EDB200", Offset = "0x4EDB200", VA = "0x4EDB200")]
	protected CustomConstantAttribute()
	{
	}
}
