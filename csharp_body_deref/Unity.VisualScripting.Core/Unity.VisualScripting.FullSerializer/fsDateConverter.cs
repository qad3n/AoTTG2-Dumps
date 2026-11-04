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
		[Address(RVA = "0x2E60E60", Offset = "0x2E5F460", VA = "0x182E60E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x2E603E0", Offset = "0x2E5E9E0", VA = "0x182E603E0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x2E60B80", Offset = "0x2E5F180", VA = "0x182E60B80", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x2E604E0", Offset = "0x2E5EAE0", VA = "0x182E604E0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsDateConverter()
	{
	}
}
