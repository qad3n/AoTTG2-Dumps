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
	[Token(Token = "0x170001A5")]
	public override Type ModelType
	{
		[Token(Token = "0x6000F44")]
		[Address(RVA = "0x2E2EBF0", Offset = "0x2E2D1F0", VA = "0x182E2EBF0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x2E2E950", Offset = "0x2E2CF50", VA = "0x182E2E950", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x2E2EAF0", Offset = "0x2E2D0F0", VA = "0x182E2EAF0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x2E2E9A0", Offset = "0x2E2CFA0", VA = "0x182E2E9A0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public LooseAssemblyNameConverter()
	{
	}
}
