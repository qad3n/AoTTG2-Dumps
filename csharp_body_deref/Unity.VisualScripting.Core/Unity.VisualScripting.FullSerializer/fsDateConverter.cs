// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsDateConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DD")]
public class fsDateConverter : fsConverter
{
	[Token(Token = "0x400095C")]
	private const string DefaultDateTimeFormatString = "o";

	[Token(Token = "0x400095D")]
	private const string DateTimeOffsetFormatString = "o";

	[Token(Token = "0x170001F7")]
	private string DateTimeFormatString
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x4D69680", Offset = "0x4D69680", VA = "0x4D69680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x4D696D0", Offset = "0x4D696D0", VA = "0x4D696D0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x4D697D0", Offset = "0x4D697D0", VA = "0x4D697D0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x4D69A60", Offset = "0x4D69A60", VA = "0x4D69A60", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x4D6A3D0", Offset = "0x4D6A3D0", VA = "0x4D6A3D0")]
	public fsDateConverter()
	{
	}
}
