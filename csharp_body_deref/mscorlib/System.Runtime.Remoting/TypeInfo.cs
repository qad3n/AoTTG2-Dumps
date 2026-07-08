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
		[Address(RVA = "0x4E8AE40", Offset = "0x4E8AE40", VA = "0x4E8AE40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x4E7ABB0", Offset = "0x4E7ABB0", VA = "0x4E7ABB0")]
	public TypeInfo(Type type)
	{
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x4E8AE50", Offset = "0x4E8AE50", VA = "0x4E8AE50", Slot = "5")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}
}
