// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ArgInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A3")]
internal class ArgInfo
{
	[Token(Token = "0x4000EAB")]
	[FieldOffset(Offset = "0x10")]
	private int[] _paramMap;

	[Token(Token = "0x4000EAC")]
	[FieldOffset(Offset = "0x18")]
	private int _inoutArgCount;

	[Token(Token = "0x4000EAD")]
	[FieldOffset(Offset = "0x20")]
	private MethodBase _method;

	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x538E490", Offset = "0x538D490", VA = "0x538E490")]
	public ArgInfo(MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
	{
	}

	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x538E650", Offset = "0x538D650", VA = "0x538E650")]
	public object[] GetInOutArgs(object[] args)
	{
		return null;
	}
}
