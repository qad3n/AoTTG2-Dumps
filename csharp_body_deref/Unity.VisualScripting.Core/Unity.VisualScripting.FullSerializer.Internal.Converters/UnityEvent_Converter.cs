using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal.Converters;

[Token(Token = "0x2000225")]
public class UnityEvent_Converter : fsConverter
{
	[Token(Token = "0x6001324")]
	[Address(RVA = "0x4A66E30", Offset = "0x4A66E30", VA = "0x4A66E30", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x4A66F10", Offset = "0x4A66F10", VA = "0x4A66F10", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x4A66F20", Offset = "0x4A66F20", VA = "0x4A66F20", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x4A66FF0", Offset = "0x4A66FF0", VA = "0x4A66FF0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x4A67080", Offset = "0x4A67080", VA = "0x4A67080")]
	public UnityEvent_Converter()
	{
	}
}
