// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsGuidConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E4")]
public class fsGuidConverter : fsConverter
{
	[Token(Token = "0x600118E")]
	[Address(RVA = "0x4D6E5A0", Offset = "0x4D6E5A0", VA = "0x4D6E5A0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x4D6E610", Offset = "0x4D6E610", VA = "0x4D6E610", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x4D6E620", Offset = "0x4D6E620", VA = "0x4D6E620", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x4D6E630", Offset = "0x4D6E630", VA = "0x4D6E630", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x4D6E740", Offset = "0x4D6E740", VA = "0x4D6E740", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x4D6E880", Offset = "0x4D6E880", VA = "0x4D6E880", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x4D6E8C0", Offset = "0x4D6E8C0", VA = "0x4D6E8C0")]
	public fsGuidConverter()
	{
	}
}
