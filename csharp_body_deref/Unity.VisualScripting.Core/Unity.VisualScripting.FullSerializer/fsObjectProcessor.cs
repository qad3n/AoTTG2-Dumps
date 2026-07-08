using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000214")]
public abstract class fsObjectProcessor
{
	[Token(Token = "0x600129A")]
	[Address(RVA = "0x4A5B6C0", Offset = "0x4A5B6C0", VA = "0x4A5B6C0", Slot = "4")]
	public virtual bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x4A5B700", Offset = "0x4A5B700", VA = "0x4A5B700", Slot = "5")]
	public virtual void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x4A5B710", Offset = "0x4A5B710", VA = "0x4A5B710", Slot = "6")]
	public virtual void OnAfterSerialize(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x4A5B720", Offset = "0x4A5B720", VA = "0x4A5B720", Slot = "7")]
	public virtual void OnBeforeDeserialize(Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x4A5B730", Offset = "0x4A5B730", VA = "0x4A5B730", Slot = "8")]
	public virtual void OnBeforeDeserializeAfterInstanceCreation(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x4A5B740", Offset = "0x4A5B740", VA = "0x4A5B740", Slot = "9")]
	public virtual void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x4A5B750", Offset = "0x4A5B750", VA = "0x4A5B750")]
	protected fsObjectProcessor()
	{
	}
}
