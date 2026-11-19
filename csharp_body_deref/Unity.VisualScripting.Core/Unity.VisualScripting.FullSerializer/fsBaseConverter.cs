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
	[Address(RVA = "0x6863670", Offset = "0x6862670", VA = "0x6863670", Slot = "4")]
	public virtual object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x68637E0", Offset = "0x68627E0", VA = "0x68637E0", Slot = "5")]
	public virtual bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x68638C0", Offset = "0x68628C0", VA = "0x68638C0", Slot = "6")]
	public virtual bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001231")]
	public abstract fsResult TrySerialize(object instance, out fsData serialized, Type storageType);

	[Token(Token = "0x6001232")]
	public abstract fsResult TryDeserialize(fsData data, ref object instance, Type storageType);

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x6859870", Offset = "0x6858870", VA = "0x6859870")]
	protected fsResult FailExpectedType(fsData data, params fsDataType[] types)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x68570B0", Offset = "0x68560B0", VA = "0x68570B0")]
	protected fsResult CheckType(fsData data, fsDataType type)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x68593A0", Offset = "0x68583A0", VA = "0x68593A0")]
	protected fsResult CheckKey(fsData data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x6863920", Offset = "0x6862920", VA = "0x6863920")]
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
	[Address(RVA = "0x6863B10", Offset = "0x6862B10", VA = "0x6863B10")]
	protected fsBaseConverter()
	{
	}
}
