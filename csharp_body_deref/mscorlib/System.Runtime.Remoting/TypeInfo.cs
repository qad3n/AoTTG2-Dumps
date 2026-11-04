// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.TypeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x2000384")]
internal class TypeInfo : IRemotingTypeInfo
{
	[Token(Token = "0x4000ECB")]
	[FieldOffset(Offset = "0x10")]
	private string serverType;

	[Token(Token = "0x4000ECC")]
	[FieldOffset(Offset = "0x18")]
	private string[] serverHierarchy;

	[Token(Token = "0x4000ECD")]
	[FieldOffset(Offset = "0x20")]
	private string[] interfacesImplemented;

	[Token(Token = "0x1700034F")]
	public string TypeName
	{
		[Token(Token = "0x6001D4A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D49")]
	[Address(RVA = "0x1A0AE30", Offset = "0x1A09430", VA = "0x181A0AE30")]
	public TypeInfo(Type type)
	{
	}

	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x1A0ABF0", Offset = "0x1A091F0", VA = "0x181A0ABF0", Slot = "5")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}
}
