// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.StrongNameKeyPair
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000521")]
[ComVisible(true)]
public class StrongNameKeyPair : ISerializable, IDeserializationCallback
{
	[Token(Token = "0x400155F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] _publicKey;

	[Token(Token = "0x4001560")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _keyPairContainer;

	[Token(Token = "0x4001561")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _keyPairExported;

	[Token(Token = "0x4001562")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _keyPairArray;

	[Token(Token = "0x600271D")]
	[Address(RVA = "0x3BE72C0", Offset = "0x3BE72C0", VA = "0x3BE72C0")]
	protected StrongNameKeyPair(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600271E")]
	[Address(RVA = "0x3BE74C0", Offset = "0x3BE74C0", VA = "0x3BE74C0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600271F")]
	[Address(RVA = "0x3BE75E0", Offset = "0x3BE75E0", VA = "0x3BE75E0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}
}
