// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsWeakReferenceConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F5")]
public class fsWeakReferenceConverter : fsConverter
{
	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x68605D0", Offset = "0x685F5D0", VA = "0x68605D0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x6860640", Offset = "0x685F640", VA = "0x6860640", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x6860650", Offset = "0x685F650", VA = "0x6860650", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x6860660", Offset = "0x685F660", VA = "0x6860660", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x6860970", Offset = "0x685F970", VA = "0x6860970", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x6860D80", Offset = "0x685FD80", VA = "0x6860D80", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x6860DC0", Offset = "0x685FDC0", VA = "0x6860DC0")]
	public fsWeakReferenceConverter()
	{
	}
}
