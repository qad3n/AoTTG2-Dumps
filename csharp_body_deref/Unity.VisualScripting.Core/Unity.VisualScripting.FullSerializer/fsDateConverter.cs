using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E7")]
public class fsDateConverter : fsConverter
{
	[Token(Token = "0x4000966")]
	private const string DefaultDateTimeFormatString = "o";

	[Token(Token = "0x4000967")]
	private const string DateTimeOffsetFormatString = "o";

	[Token(Token = "0x170001F7")]
	private string DateTimeFormatString
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x4A48FD0", Offset = "0x4A48FD0", VA = "0x4A48FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x4A49020", Offset = "0x4A49020", VA = "0x4A49020", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001195")]
	[Address(RVA = "0x4A49120", Offset = "0x4A49120", VA = "0x4A49120", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x4A493B0", Offset = "0x4A493B0", VA = "0x4A493B0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x4A49C30", Offset = "0x4A49C30", VA = "0x4A49C30")]
	public fsDateConverter()
	{
	}
}
