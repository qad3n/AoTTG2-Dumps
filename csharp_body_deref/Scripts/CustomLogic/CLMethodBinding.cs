using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200026C")]
internal abstract class CLMethodBinding : ICLMemberBinding
{
	[Token(Token = "0x6000E05")]
	public abstract object Call(object instance, object[] parameters);

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x3CB3550", Offset = "0x3CB3550", VA = "0x3CB3550")]
	protected CLMethodBinding()
	{
	}
}
[Token(Token = "0x200026D")]
internal class CLMethodBinding<T> : CLMethodBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x4000D0E")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object[], object> _function;

	[Token(Token = "0x6000E07")]
	public CLMethodBinding(Func<T, object[], object> function)
	{
	}

	[Token(Token = "0x6000E08")]
	public override object Call(object instance, object[] parameters)
	{
		return null;
	}
}
