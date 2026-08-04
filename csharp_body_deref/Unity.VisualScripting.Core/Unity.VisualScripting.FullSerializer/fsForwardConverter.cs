// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsForwardConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E3")]
public class fsForwardConverter : fsConverter
{
	[Token(Token = "0x4000964")]
	[FieldOffset(Offset = "0x18")]
	private string _memberName;

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x4D6DF50", Offset = "0x4D6DF50", VA = "0x4D6DF50")]
	public fsForwardConverter(fsForwardAttribute attribute)
	{
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x4D6DF90", Offset = "0x4D6DF90", VA = "0x4D6DF90", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4D6DFE0", Offset = "0x4D6DFE0", VA = "0x4D6DFE0")]
	private fsResult GetProperty(object instance, out fsMetaProperty property)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4D6E1C0", Offset = "0x4D6E1C0", VA = "0x4D6E1C0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x4D6E330", Offset = "0x4D6E330", VA = "0x4D6E330", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x4D6E520", Offset = "0x4D6E520", VA = "0x4D6E520", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}
}
