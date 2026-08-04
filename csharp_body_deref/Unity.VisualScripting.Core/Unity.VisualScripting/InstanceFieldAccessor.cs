// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InstanceFieldAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000144")]
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

	[Token(Token = "0x6000D73")]
	public InstanceFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000D74")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000D75")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	private object GetValueUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	public void SetValue(object target, object value)
	{
	}

	[Token(Token = "0x6000D78")]
	private void SetValueUnsafe(object target, object value)
	{
	}
}
