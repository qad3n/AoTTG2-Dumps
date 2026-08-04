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
[Token(Token = "0x2000355")]
internal class TypeInfo : IRemotingTypeInfo
{
	[Token(Token = "0x4000EBE")]
	[FieldOffset(Offset = "0x10")]
	private string serverType;

	[Token(Token = "0x4000EBF")]
	[FieldOffset(Offset = "0x18")]
	private string[] serverHierarchy;

	[Token(Token = "0x4000EC0")]
	[FieldOffset(Offset = "0x20")]
	private string[] interfacesImplemented;

	[Token(Token = "0x1700034D")]
	public string TypeName
	{
		[Token(Token = "0x6001CDB")]
		[Address(RVA = "0x3B70960", Offset = "0x3B70960", VA = "0x3B70960", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x3B606D0", Offset = "0x3B606D0", VA = "0x3B606D0")]
	public TypeInfo(Type type)
	{
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x3B70970", Offset = "0x3B70970", VA = "0x3B70970", Slot = "5")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}
}
