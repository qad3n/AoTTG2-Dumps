// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsBaseConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001FF")]
public abstract class fsBaseConverter
{
	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0x10")]
	public fsSerializer Serializer;

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x2E5E440", Offset = "0x2E5CA40", VA = "0x182E5E440", Slot = "4")]
	public virtual object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x2E5E930", Offset = "0x2E5CF30", VA = "0x182E5E930", Slot = "5")]
	public virtual bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x2E5EA20", Offset = "0x2E5D020", VA = "0x182E5EA20", Slot = "6")]
	public virtual bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001231")]
	public abstract fsResult TrySerialize(object instance, out fsData serialized, Type storageType);

	[Token(Token = "0x6001232")]
	public abstract fsResult TryDeserialize(fsData data, ref object instance, Type storageType);

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x2E5E5D0", Offset = "0x2E5CBD0", VA = "0x182E5E5D0")]
	protected fsResult FailExpectedType(fsData data, params fsDataType[] types)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x2E5E1A0", Offset = "0x2E5C7A0", VA = "0x182E5E1A0")]
	protected fsResult CheckType(fsData data, fsDataType type)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x2E5DF20", Offset = "0x2E5C520", VA = "0x182E5DF20")]
	protected fsResult CheckKey(fsData data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x2E5DFB0", Offset = "0x2E5C5B0", VA = "0x182E5DFB0")]
	protected fsResult CheckKey(Dictionary<string, fsData> data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001237")]
	protected fsResult SerializeMember<T>(Dictionary<string, fsData> data, Type overrideConverterType, string name, T value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001238")]
	protected fsResult DeserializeMember<T>(Dictionary<string, fsData> data, Type overrideConverterType, string name, out T value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected fsBaseConverter()
	{
	}
}
