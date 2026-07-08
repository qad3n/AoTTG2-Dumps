using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x200039E")]
internal class CADObjRef
{
	[Token(Token = "0x4000F55")]
	[FieldOffset(Offset = "0x10")]
	internal ObjRef objref;

	[Token(Token = "0x4000F56")]
	[FieldOffset(Offset = "0x18")]
	internal int SourceDomain;

	[Token(Token = "0x4000F57")]
	[FieldOffset(Offset = "0x20")]
	internal byte[] TypeInfo;

	[Token(Token = "0x6001E1D")]
	[Address(RVA = "0x4EA1140", Offset = "0x4EA1140", VA = "0x4EA1140")]
	public CADObjRef(ObjRef o, int sourceDomain)
	{
	}
}
