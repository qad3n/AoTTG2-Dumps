// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsDateConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E7")]
public class fsDateConverter : fsConverter
{
	[Token(Token = "0x4000964")]
	private const string DefaultDateTimeFormatString = "o";

	[Token(Token = "0x4000965")]
	private const string DateTimeOffsetFormatString = "o";

	[Token(Token = "0x170001FA")]
	private string DateTimeFormatString
	{
		[Token(Token = "0x60011A0")]
		[Address(RVA = "0x6857AE0", Offset = "0x6856AE0", VA = "0x6857AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x6857B30", Offset = "0x6856B30", VA = "0x6857B30", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x6857C30", Offset = "0x6856C30", VA = "0x6857C30", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x6857EC0", Offset = "0x6856EC0", VA = "0x6857EC0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x6858720", Offset = "0x6857720", VA = "0x6858720")]
	public fsDateConverter()
	{
	}
}
