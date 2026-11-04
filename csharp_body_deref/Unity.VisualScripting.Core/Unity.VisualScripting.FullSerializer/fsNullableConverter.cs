// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsNullableConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F1")]
public class fsNullableConverter : fsConverter
{
	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x2E6C0E0", Offset = "0x2E6A6E0", VA = "0x182E6C0E0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x2E6C230", Offset = "0x2E6A830", VA = "0x182E6C230", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x2E6C1C0", Offset = "0x2E6A7C0", VA = "0x182E6C1C0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x546D10", Offset = "0x545310", VA = "0x180546D10", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsNullableConverter()
	{
	}
}
