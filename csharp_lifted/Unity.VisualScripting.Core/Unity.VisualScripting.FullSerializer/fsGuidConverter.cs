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

[Token(Token = "0x20001EE")]
public class fsGuidConverter : fsConverter
{
	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x685C8C0", Offset = "0x685B8C0", VA = "0x685C8C0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x685C930", Offset = "0x685B930", VA = "0x685C930", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x685C940", Offset = "0x685B940", VA = "0x685C940", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x685C950", Offset = "0x685B950", VA = "0x685C950", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x685CA50", Offset = "0x685BA50", VA = "0x685CA50", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x685CB90", Offset = "0x685BB90", VA = "0x685CB90", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x685CBD0", Offset = "0x685BBD0", VA = "0x685CBD0")]
	public fsGuidConverter()
	{
	}
}
