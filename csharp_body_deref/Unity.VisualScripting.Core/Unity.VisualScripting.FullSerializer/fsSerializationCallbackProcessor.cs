using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x200020D")]
public class fsSerializationCallbackProcessor : fsObjectProcessor
{
	[Token(Token = "0x600126C")]
	[Address(RVA = "0x4A56B50", Offset = "0x4A56B50", VA = "0x4A56B50", Slot = "4")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x4A56BD0", Offset = "0x4A56BD0", VA = "0x4A56BD0", Slot = "5")]
	public override void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x4A56CC0", Offset = "0x4A56CC0", VA = "0x4A56CC0", Slot = "6")]
	public override void OnAfterSerialize(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x4A56DC0", Offset = "0x4A56DC0", VA = "0x4A56DC0", Slot = "8")]
	public override void OnBeforeDeserializeAfterInstanceCreation(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x4A56FA0", Offset = "0x4A56FA0", VA = "0x4A56FA0", Slot = "9")]
	public override void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x4A570A0", Offset = "0x4A570A0", VA = "0x4A570A0")]
	public fsSerializationCallbackProcessor()
	{
	}
}
