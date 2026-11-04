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

[Token(Token = "0x20003F2")]
internal abstract class CLPropertyBinding : ICLMemberBinding
{
	[Token(Token = "0x1700029B")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6001835")]
		get;
	}

	[Token(Token = "0x6001836")]
	public abstract object GetValue(object instance);

	[Token(Token = "0x6001837")]
	public abstract void SetValue(object instance, object value);

	[Token(Token = "0x6001838")]
	public abstract void SetValueSafe(object instance, object value);

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CLPropertyBinding()
	{
	}
}
[Token(Token = "0x20003F3")]
internal class CLPropertyBinding<T> : CLPropertyBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x4001415")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object> _getter;

	[Token(Token = "0x4001416")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T, object> _setter;

	[Token(Token = "0x4001417")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x1700029C")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600183B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600183A")]
	public CLPropertyBinding(Func<T, object> getter, Action<T, object> setter)
	{
	}

	[Token(Token = "0x600183C")]
	public override object GetValue(object instance)
	{
		return null;
	}

	[Token(Token = "0x600183D")]
	public override void SetValue(object instance, object value)
	{
	}

	[Token(Token = "0x600183E")]
	public override void SetValueSafe(object instance, object value)
	{
	}
}
