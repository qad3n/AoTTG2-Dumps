// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.NamespaceConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;

namespace Unity.VisualScripting;

[Token(Token = "0x200017D")]
public class NamespaceConverter : fsDirectConverter
{
	[Token(Token = "0x170001A3")]
	public override Type ModelType
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x4D56580", Offset = "0x4D56580", VA = "0x4D56580", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x4D565E0", Offset = "0x4D565E0", VA = "0x4D565E0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x4D56620", Offset = "0x4D56620", VA = "0x4D56620", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x4D566E0", Offset = "0x4D566E0", VA = "0x4D566E0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x4D56800", Offset = "0x4D56800", VA = "0x4D56800")]
	public NamespaceConverter()
	{
	}
}
