// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.OverrideStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001B8")]
public class OverrideStack<T>
{
	[Token(Token = "0x400090F")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T> getValue;

	[Token(Token = "0x4000910")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T> setValue;

	[Token(Token = "0x4000911")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action clearValue;

	[Token(Token = "0x4000912")]
	[FieldOffset(Offset = "0x0")]
	private T _value;

	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> previous;

	[Token(Token = "0x170001D3")]
	public T value
	{
		[Token(Token = "0x600106F")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6001070")]
		internal set
		{
		}
	}

	[Token(Token = "0x600106C")]
	public OverrideStack(T defaultValue)
	{
	}

	[Token(Token = "0x600106D")]
	public OverrideStack(Func<T> getValue, Action<T> setValue)
	{
	}

	[Token(Token = "0x600106E")]
	public OverrideStack(Func<T> getValue, Action<T> setValue, Action clearValue)
	{
	}

	[Token(Token = "0x6001071")]
	public OverrideLayer<T> Override(T item)
	{
		return default(OverrideLayer<T>);
	}

	[Token(Token = "0x6001072")]
	public void BeginOverride(T item)
	{
	}

	[Token(Token = "0x6001073")]
	public void EndOverride()
	{
	}

	[Token(Token = "0x6001074")]
	public static implicit operator T(OverrideStack<T> stack)
	{
		return (T)null;
	}
}
