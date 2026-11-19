// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLPropertyBinding
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLPropertyBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000451")]
internal abstract class CLPropertyBinding : ICLMemberBinding
{
	[Token(Token = "0x170002DC")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6001AAC")]
		get;
	}

	[Token(Token = "0x6001AAD")]
	public abstract object GetValue(object instance);

	[Token(Token = "0x6001AAE")]
	public abstract void SetValue(object instance, object value);

	[Token(Token = "0x6001AAF")]
	public abstract void SetValueSafe(object instance, object value);

	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x58A9E50", Offset = "0x58A8E50", VA = "0x58A9E50")]
	protected CLPropertyBinding()
	{
	}
}
[Token(Token = "0x2000452")]
internal class CLPropertyBinding<T> : CLPropertyBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x40015B5")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object> _getter;

	[Token(Token = "0x40015B6")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T, object> _setter;

	[Token(Token = "0x40015B7")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x170002DD")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6001AB2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001AB1")]
	public CLPropertyBinding(Func<T, object> getter, Action<T, object> setter)
	{
	}

	[Token(Token = "0x6001AB3")]
	public override object GetValue(object instance)
	{
		return null;
	}

	[Token(Token = "0x6001AB4")]
	public override void SetValue(object instance, object value)
	{
	}

	[Token(Token = "0x6001AB5")]
	public override void SetValueSafe(object instance, object value)
	{
	}
}
