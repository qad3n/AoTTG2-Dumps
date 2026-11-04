// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CADObjRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003CD")]
internal class CADObjRef
{
	[Token(Token = "0x4000F5F")]
	[FieldOffset(Offset = "0x10")]
	internal ObjRef objref;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x18")]
	internal int SourceDomain;

	[Token(Token = "0x4000F61")]
	[FieldOffset(Offset = "0x20")]
	internal byte[] TypeInfo;

	[Token(Token = "0x6001E8C")]
	[Address(RVA = "0x19F0EA0", Offset = "0x19EF4A0", VA = "0x1819F0EA0")]
	public CADObjRef(ObjRef o, int sourceDomain)
	{
	}
}
