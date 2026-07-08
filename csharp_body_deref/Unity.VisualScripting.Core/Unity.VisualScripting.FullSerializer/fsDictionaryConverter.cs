using System;
using System.Collections;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E8")]
public class fsDictionaryConverter : fsConverter
{
	[Token(Token = "0x6001198")]
	[Address(RVA = "0x4A49C40", Offset = "0x4A49C40", VA = "0x4A49C40", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x4A49CC0", Offset = "0x4A49CC0", VA = "0x4A49CC0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x4A49D30", Offset = "0x4A49D30", VA = "0x4A49D30", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x4A4B1E0", Offset = "0x4A4B1E0", VA = "0x4A4B1E0", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4A4AA60", Offset = "0x4A4AA60", VA = "0x4A4AA60")]
	private fsResult AddItemToDictionary(IDictionary dictionary, object key, object value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x4A4A860", Offset = "0x4A4A860", VA = "0x4A4A860")]
	private static void GetKeyValueTypes(Type dictionaryType, out Type keyStorageType, out Type valueStorageType)
	{
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x4A4C140", Offset = "0x4A4C140", VA = "0x4A4C140")]
	public fsDictionaryConverter()
	{
	}
}
