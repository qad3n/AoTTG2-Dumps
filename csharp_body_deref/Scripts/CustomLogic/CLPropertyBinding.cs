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

[Token(Token = "0x20002A7")]
internal abstract class CLPropertyBinding : ICLMemberBinding
{
	[Token(Token = "0x170001E6")]
	public abstract bool IsReadOnly
	{
		[Token(Token = "0x6000FB3")]
		get;
	}

	[Token(Token = "0x6000FB4")]
	public abstract object GetValue(object instance);

	[Token(Token = "0x6000FB5")]
	public abstract void SetValue(object instance, object value);

	[Token(Token = "0x6000FB6")]
	public abstract void SetValueSafe(object instance, object value);

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x3FB98A0", Offset = "0x3FB98A0", VA = "0x3FB98A0")]
	protected CLPropertyBinding()
	{
	}
}
[Token(Token = "0x20002A8")]
internal class CLPropertyBinding<T> : CLPropertyBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x4000DF5")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object> _getter;

	[Token(Token = "0x4000DF6")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T, object> _setter;

	[Token(Token = "0x4000DF7")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x170001E7")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000FB9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FB8")]
	public CLPropertyBinding(Func<T, object> getter, Action<T, object> setter)
	{
	}

	[Token(Token = "0x6000FBA")]
	public override object GetValue(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000FBB")]
	public override void SetValue(object instance, object value)
	{
	}

	[Token(Token = "0x6000FBC")]
	public override void SetValueSafe(object instance, object value)
	{
	}
}
