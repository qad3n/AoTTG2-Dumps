using System;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;

namespace Unity.VisualScripting;

[Token(Token = "0x200017C")]
public class LooseAssemblyNameConverter : fsDirectConverter
{
	[Token(Token = "0x170001A2")]
	public override Type ModelType
	{
		[Token(Token = "0x6000F3A")]
		[Address(RVA = "0x4A316F0", Offset = "0x4A316F0", VA = "0x4A316F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x4A31750", Offset = "0x4A31750", VA = "0x4A31750", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x4A31790", Offset = "0x4A31790", VA = "0x4A31790", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x4A31860", Offset = "0x4A31860", VA = "0x4A31860", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x4A319A0", Offset = "0x4A319A0", VA = "0x4A319A0")]
	public LooseAssemblyNameConverter()
	{
	}
}
