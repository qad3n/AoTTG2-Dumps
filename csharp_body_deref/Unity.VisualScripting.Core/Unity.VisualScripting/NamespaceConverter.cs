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
	[Token(Token = "0x170001A6")]
	public override Type ModelType
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x2E2F860", Offset = "0x2E2DE60", VA = "0x182E2F860", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x2E2F5C0", Offset = "0x2E2DBC0", VA = "0x182E2F5C0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x2E2F750", Offset = "0x2E2DD50", VA = "0x182E2F750", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x2E2F610", Offset = "0x2E2DC10", VA = "0x182E2F610", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public NamespaceConverter()
	{
	}
}
