using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000146")]
public class InstanceFieldAccessor<TTarget, TField> : IOptimizedAccessor
{
	[Token(Token = "0x400081A")]
	[FieldOffset(Offset = "0x0")]
	private readonly FieldInfo fieldInfo;

	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TField> getter;

	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TField> setter;

	[Token(Token = "0x6000D7E")]
	public InstanceFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000D7F")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000D80")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	private object GetValueUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D82")]
	public void SetValue(object target, object value)
	{
	}

	[Token(Token = "0x6000D83")]
	private void SetValueUnsafe(object target, object value)
	{
	}
}
