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
	[Address(RVA = "0x6858730", Offset = "0x6857730", VA = "0x6858730", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x68587B0", Offset = "0x68577B0", VA = "0x68587B0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x6858820", Offset = "0x6857820", VA = "0x6858820", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x6859BB0", Offset = "0x6858BB0", VA = "0x6859BB0", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x6859410", Offset = "0x6858410", VA = "0x6859410")]
	private fsResult AddItemToDictionary(IDictionary dictionary, object key, object value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x6859210", Offset = "0x6858210", VA = "0x6859210")]
	private static void GetKeyValueTypes(Type dictionaryType, out Type keyStorageType, out Type valueStorageType)
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x685ABF0", Offset = "0x6859BF0", VA = "0x685ABF0")]
	public fsDictionaryConverter()
	{
	}
}
