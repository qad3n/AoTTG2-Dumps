using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001ED")]
public class fsForwardConverter : fsConverter
{
	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x18")]
	private string _memberName;

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4A4D6B0", Offset = "0x4A4D6B0", VA = "0x4A4D6B0")]
	public fsForwardConverter(fsForwardAttribute attribute)
	{
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x4A4D6F0", Offset = "0x4A4D6F0", VA = "0x4A4D6F0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x4A4D740", Offset = "0x4A4D740", VA = "0x4A4D740")]
	private fsResult GetProperty(object instance, out fsMetaProperty property)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x4A4D920", Offset = "0x4A4D920", VA = "0x4A4D920", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x4A4DB50", Offset = "0x4A4DB50", VA = "0x4A4DB50", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x4A4DFA0", Offset = "0x4A4DFA0", VA = "0x4A4DFA0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}
}
