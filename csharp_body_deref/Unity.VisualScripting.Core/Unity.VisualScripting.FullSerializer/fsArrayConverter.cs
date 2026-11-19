// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsArrayConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E6")]
public class fsArrayConverter : fsConverter
{
	[Token(Token = "0x6001199")]
	[Address(RVA = "0x6856880", Offset = "0x6855880", VA = "0x6856880", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x68568A0", Offset = "0x68558A0", VA = "0x68568A0", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x68568B0", Offset = "0x68558B0", VA = "0x68568B0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x68568C0", Offset = "0x68558C0", VA = "0x68568C0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x6856D90", Offset = "0x6855D90", VA = "0x6856D90", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x6857320", Offset = "0x6856320", VA = "0x6857320", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x6857AC0", Offset = "0x6856AC0", VA = "0x6857AC0")]
	public fsArrayConverter()
	{
	}
}
