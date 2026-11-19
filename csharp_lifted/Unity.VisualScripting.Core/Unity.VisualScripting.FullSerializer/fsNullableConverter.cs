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
	[Address(RVA = "0x685E4E0", Offset = "0x685D4E0", VA = "0x685E4E0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x685E5C0", Offset = "0x685D5C0", VA = "0x685E5C0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x685E600", Offset = "0x685D600", VA = "0x685E600", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x685E640", Offset = "0x685D640", VA = "0x685E640", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x685E650", Offset = "0x685D650", VA = "0x685E650")]
	public fsNullableConverter()
	{
	}
}
