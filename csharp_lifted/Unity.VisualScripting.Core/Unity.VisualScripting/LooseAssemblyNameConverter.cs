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
		[Address(RVA = "0x6840EC0", Offset = "0x683FEC0", VA = "0x6840EC0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x6840F20", Offset = "0x683FF20", VA = "0x6840F20", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x6840F60", Offset = "0x683FF60", VA = "0x6840F60", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x6841030", Offset = "0x6840030", VA = "0x6841030", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x6841170", Offset = "0x6840170", VA = "0x6841170")]
	public LooseAssemblyNameConverter()
	{
	}
}
