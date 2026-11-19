// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.StaticPropertyAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000168")]
public class StaticPropertyAccessor<TProperty> : IOptimizedAccessor
{
	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyInfo propertyInfo;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x0")]
	private Func<TProperty> getter;

	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x0")]
	private Action<TProperty> setter;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x0")]
	private Type targetType;

	[Token(Token = "0x6000E7D")]
	public StaticPropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000E7E")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000E7F")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E80")]
	private object GetValueUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	public void SetValue(object target, object value)
	{
	}

	[Token(Token = "0x6000E82")]
	private void SetValueUnsafe(object target, object value)
	{
	}
}
