using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200014F")]
public class InstancePropertyAccessor<TTarget, TProperty> : IOptimizedAccessor
{
	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyInfo propertyInfo;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TProperty> getter;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TProperty> setter;

	[Token(Token = "0x6000DB5")]
	public InstancePropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000DB6")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DB7")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DB8")]
	private object GetValueUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	public void SetValue(object target, object value)
	{
	}

	[Token(Token = "0x6000DBA")]
	private void SetValueUnsafe(object target, object value)
	{
	}
}
