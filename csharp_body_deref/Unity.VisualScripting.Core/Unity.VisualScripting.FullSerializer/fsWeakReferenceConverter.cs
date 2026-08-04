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

[Token(Token = "0x20001EB")]
public class fsWeakReferenceConverter : fsConverter
{
	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x4D73110", Offset = "0x4D73110", VA = "0x4D73110", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x4D73180", Offset = "0x4D73180", VA = "0x4D73180", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x4D73190", Offset = "0x4D73190", VA = "0x4D73190", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x4D731A0", Offset = "0x4D731A0", VA = "0x4D731A0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x4D73520", Offset = "0x4D73520", VA = "0x4D73520", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x4D73970", Offset = "0x4D73970", VA = "0x4D73970", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x4D739B0", Offset = "0x4D739B0", VA = "0x4D739B0")]
	public fsWeakReferenceConverter()
	{
	}
}
