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

[Token(Token = "0x20003F0")]
internal abstract class CLMethodBinding : ICLMemberBinding
{
	[Token(Token = "0x6001831")]
	public abstract object Call(object instance, object[] parameters);

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CLMethodBinding()
	{
	}
}
[Token(Token = "0x20003F1")]
internal class CLMethodBinding<T> : CLMethodBinding where T : CustomLogicClassInstance
{
	[Token(Token = "0x4001414")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T, object[], object> _function;

	[Token(Token = "0x6001833")]
	public CLMethodBinding(Func<T, object[], object> function)
	{
	}

	[Token(Token = "0x6001834")]
	public override object Call(object instance, object[] parameters)
	{
		return null;
	}
}
