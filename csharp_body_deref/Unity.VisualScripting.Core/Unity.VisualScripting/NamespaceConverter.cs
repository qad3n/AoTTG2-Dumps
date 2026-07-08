using System;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;

namespace Unity.VisualScripting;

[Token(Token = "0x200017D")]
public class NamespaceConverter : fsDirectConverter
{
	[Token(Token = "0x170001A3")]
	public override Type ModelType
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x4A319B0", Offset = "0x4A319B0", VA = "0x4A319B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x4A31A10", Offset = "0x4A31A10", VA = "0x4A31A10", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x4A31A50", Offset = "0x4A31A50", VA = "0x4A31A50", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x4A31B10", Offset = "0x4A31B10", VA = "0x4A31B10", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x4A31C30", Offset = "0x4A31C30", VA = "0x4A31C30")]
	public NamespaceConverter()
	{
	}
}
