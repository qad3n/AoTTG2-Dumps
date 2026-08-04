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

[Token(Token = "0x20001F8")]
public abstract class fsBaseConverter
{
	[Token(Token = "0x4000974")]
	[FieldOffset(Offset = "0x10")]
	public fsSerializer Serializer;

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x4D7A3F0", Offset = "0x4D7A3F0", VA = "0x4D7A3F0", Slot = "4")]
	public virtual object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x4D7A580", Offset = "0x4D7A580", VA = "0x4D7A580", Slot = "5")]
	public virtual bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x4D7A660", Offset = "0x4D7A660", VA = "0x4D7A660", Slot = "6")]
	public virtual bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F9")]
	public abstract fsResult TrySerialize(object instance, out fsData serialized, Type storageType);

	[Token(Token = "0x60011FA")]
	public abstract fsResult TryDeserialize(fsData data, ref object instance, Type storageType);

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x4D6B820", Offset = "0x4D6B820", VA = "0x4D6B820")]
	protected fsResult FailExpectedType(fsData data, params fsDataType[] types)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x4D69300", Offset = "0x4D69300", VA = "0x4D69300")]
	protected fsResult CheckType(fsData data, fsDataType type)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x4D6B2C0", Offset = "0x4D6B2C0", VA = "0x4D6B2C0")]
	protected fsResult CheckKey(fsData data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x4D7A6C0", Offset = "0x4D7A6C0", VA = "0x4D7A6C0")]
	protected fsResult CheckKey(Dictionary<string, fsData> data, string key, out fsData subitem)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011FF")]
	protected fsResult SerializeMember<T>(Dictionary<string, fsData> data, Type overrideConverterType, string name, T value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001200")]
	protected fsResult DeserializeMember<T>(Dictionary<string, fsData> data, Type overrideConverterType, string name, out T value)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x4D7A8A0", Offset = "0x4D7A8A0", VA = "0x4D7A8A0")]
	protected fsBaseConverter()
	{
	}
}
