// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F4")]
public class fsTypeConverter : fsConverter
{
	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x6860230", Offset = "0x685F230", VA = "0x6860230", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x6860290", Offset = "0x685F290", VA = "0x6860290", Slot = "5")]
	public override bool RequestCycleSupport(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x68602A0", Offset = "0x685F2A0", VA = "0x68602A0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x68602B0", Offset = "0x685F2B0", VA = "0x68602B0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x68603D0", Offset = "0x685F3D0", VA = "0x68603D0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x68605B0", Offset = "0x685F5B0", VA = "0x68605B0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x68605C0", Offset = "0x685F5C0", VA = "0x68605C0")]
	public fsTypeConverter()
	{
	}
}
