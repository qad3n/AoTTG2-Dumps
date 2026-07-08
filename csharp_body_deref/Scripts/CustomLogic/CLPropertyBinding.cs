using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200026E")]
internal abstract class CLPropertyBinding : ICLMemberBinding
{
	[Token(Token = "0x1700018D")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6000E09")]
		get;
	}

	[Token(Token = "0x6000E0A")]
	public abstract object GetValue(object instance);

	[Token(Token = "0x6000E0B")]
	public abstract void SetValue(object instance, object value);

	[Token(Token = "0x6000E0C")]
	public abstract void SetValueSafe(object instance, object value);

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x3CB3560", Offset = "0x3CB3560", VA = "0x3CB3560")]
	protected CLPropertyBinding()
	{
	}
}
[Token(Token = "0x200026F")]
internal class CLPropertyBinding<T> : CLPropertyBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x4000D0F")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object> _getter;

	[Token(Token = "0x4000D10")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T, object> _setter;

	[Token(Token = "0x4000D11")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x1700018E")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000E0F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E0E")]
	public CLPropertyBinding(Func<T, object> getter, Action<T, object> setter)
	{
	}

	[Token(Token = "0x6000E10")]
	public override object GetValue(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	public override void SetValue(object instance, object value)
	{
	}

	[Token(Token = "0x6000E12")]
	public override void SetValueSafe(object instance, object value)
	{
	}
}
