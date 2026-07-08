using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001FF")]
public abstract class fsBaseConverter
{
	[Token(Token = "0x4000986")]
	[FieldOffset(Offset = "0x10")]
	public fsSerializer Serializer;

	[Token(Token = "0x6001221")]
	[Address(RVA = "0x4A54F30", Offset = "0x4A54F30", VA = "0x4A54F30", Slot = "4")]
	public virtual object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x4A550C0", Offset = "0x4A550C0", VA = "0x4A550C0", Slot = "5")]
	public virtual bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x4A551A0", Offset = "0x4A551A0", VA = "0x4A551A0", Slot = "6")]
	public virtual bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001224")]
	public abstract fsResult TrySerialize(object instance, out fsData serialized, Type storageType);

	[Token(Token = "0x6001225")]
	public abstract fsResult TryDeserialize(fsData data, ref object instance, Type storageType);

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x4A4AEB0", Offset = "0x4A4AEB0", VA = "0x4A4AEB0")]
	protected fsResult FailExpectedType(fsData data, params fsDataType[] types)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x4A48550", Offset = "0x4A48550", VA = "0x4A48550")]
	protected fsResult CheckType(fsData data, fsDataType type)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x4A4A9F0", Offset = "0x4A4A9F0", VA = "0x4A4A9F0")]
	protected fsResult CheckKey(fsData data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x4A55200", Offset = "0x4A55200", VA = "0x4A55200")]
	protected fsResult CheckKey(Dictionary<string, fsData> data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600122A")]
	protected fsResult SerializeMember<T>(Dictionary<string, fsData> data, Type overrideConverterType, string name, T value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600122B")]
	protected fsResult DeserializeMember<T>(Dictionary<string, fsData> data, Type overrideConverterType, string name, out T value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x4A553E0", Offset = "0x4A553E0", VA = "0x4A553E0")]
	protected fsBaseConverter()
	{
	}
}
