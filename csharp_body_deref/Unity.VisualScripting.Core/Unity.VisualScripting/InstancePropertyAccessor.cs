// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InstancePropertyAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200014F")]
public class InstancePropertyAccessor<TTarget, TProperty> : IOptimizedAccessor
{
	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyInfo propertyInfo;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TProperty> getter;

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TProperty> setter;

	[Token(Token = "0x6000DBF")]
	public InstancePropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000DC0")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DC1")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DC2")]
	private object GetValueUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DC3")]
	public void SetValue(object target, object value)
	{
	}

	[Token(Token = "0x6000DC4")]
	private void SetValueUnsafe(object target, object value)
	{
	}
}
