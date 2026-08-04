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

[Token(Token = "0x20001DE")]
public class fsDictionaryConverter : fsConverter
{
	[Token(Token = "0x6001171")]
	[Address(RVA = "0x4D6A3E0", Offset = "0x4D6A3E0", VA = "0x4D6A3E0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x4D6A460", Offset = "0x4D6A460", VA = "0x4D6A460", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x4D6A4E0", Offset = "0x4D6A4E0", VA = "0x4D6A4E0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x4D6BB50", Offset = "0x4D6BB50", VA = "0x4D6BB50", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x4D6B330", Offset = "0x4D6B330", VA = "0x4D6B330")]
	private fsResult AddItemToDictionary(IDictionary dictionary, object key, object value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x4D6B130", Offset = "0x4D6B130", VA = "0x4D6B130")]
	private static void GetKeyValueTypes(Type dictionaryType, out Type keyStorageType, out Type valueStorageType)
	{
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x4D6C9E0", Offset = "0x4D6C9E0", VA = "0x4D6C9E0")]
	public fsDictionaryConverter()
	{
	}
}
