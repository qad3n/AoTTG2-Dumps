// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.StaticFieldAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200015E")]
public class StaticFieldAccessor<TField> : IOptimizedAccessor
{
	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x0")]
	private readonly FieldInfo fieldInfo;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x0")]
	private Func<TField> getter;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x0")]
	private Action<TField> setter;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x0")]
	private Type targetType;

	[Token(Token = "0x6000E34")]
	public StaticFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000E35")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000E36")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E37")]
	private object GetValueUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E38")]
	public void SetValue(object target, object value)
	{
	}

	[Token(Token = "0x6000E39")]
	private void SetValueUnsafe(object target, object value)
	{
	}
}
