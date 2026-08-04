// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.LooseAssemblyNameConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;

namespace Unity.VisualScripting;

[Token(Token = "0x200017C")]
public class LooseAssemblyNameConverter : fsDirectConverter
{
	[Token(Token = "0x170001A2")]
	public override Type ModelType
	{
		[Token(Token = "0x6000F3A")]
		[Address(RVA = "0x4D562C0", Offset = "0x4D562C0", VA = "0x4D562C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x4D56320", Offset = "0x4D56320", VA = "0x4D56320", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x4D56360", Offset = "0x4D56360", VA = "0x4D56360", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x4D56430", Offset = "0x4D56430", VA = "0x4D56430", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x4D56570", Offset = "0x4D56570", VA = "0x4D56570")]
	public LooseAssemblyNameConverter()
	{
	}
}
