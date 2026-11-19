// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLMethodBinding
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLMethodBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044F")]
internal abstract class CLMethodBinding : ICLMemberBinding
{
	[Token(Token = "0x6001AA8")]
	public abstract object Call(object instance, object[] parameters);

	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x58A9E40", Offset = "0x58A8E40", VA = "0x58A9E40")]
	protected CLMethodBinding()
	{
	}
}
[Token(Token = "0x2000450")]
internal class CLMethodBinding<T> : CLMethodBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x40015B4")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object[], object> _function;

	[Token(Token = "0x6001AAA")]
	public CLMethodBinding(Func<T, object[], object> function)
	{
	}

	[Token(Token = "0x6001AAB")]
	public override object Call(object instance, object[] parameters)
	{
		return null;
	}
}
