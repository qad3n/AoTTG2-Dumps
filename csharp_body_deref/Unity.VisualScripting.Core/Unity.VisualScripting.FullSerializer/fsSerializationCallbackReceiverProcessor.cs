using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x200020E")]
public class fsSerializationCallbackReceiverProcessor : fsObjectProcessor
{
	[Token(Token = "0x6001272")]
	[Address(RVA = "0x4A570B0", Offset = "0x4A570B0", VA = "0x4A570B0", Slot = "4")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x4A57130", Offset = "0x4A57130", VA = "0x4A57130", Slot = "5")]
	public override void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x4A57240", Offset = "0x4A57240", VA = "0x4A57240", Slot = "9")]
	public override void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x4A57360", Offset = "0x4A57360", VA = "0x4A57360")]
	public fsSerializationCallbackReceiverProcessor()
	{
	}
}
