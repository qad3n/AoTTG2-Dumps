// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsDictionaryConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E8")]
public class fsDictionaryConverter : fsConverter
{
	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x2E612A0", Offset = "0x2E5F8A0", VA = "0x182E612A0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x2E61320", Offset = "0x2E5F920", VA = "0x182E61320", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x2E614D0", Offset = "0x2E5FAD0", VA = "0x182E614D0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x2E61E90", Offset = "0x2E60490", VA = "0x182E61E90", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x2E60EC0", Offset = "0x2E5F4C0", VA = "0x182E60EC0")]
	private fsResult AddItemToDictionary(IDictionary dictionary, object key, object value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x2E613A0", Offset = "0x2E5F9A0", VA = "0x182E613A0")]
	private static void GetKeyValueTypes(Type dictionaryType, out Type keyStorageType, out Type valueStorageType)
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsDictionaryConverter()
	{
	}
}
