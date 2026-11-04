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

[Token(Token = "0x20003CA")]
internal class ArgInfo
{
	[Token(Token = "0x4000F4B")]
	[FieldOffset(Offset = "0x10")]
	private int[] _paramMap;

	[Token(Token = "0x4000F4C")]
	[FieldOffset(Offset = "0x18")]
	private int _inoutArgCount;

	[Token(Token = "0x4000F4D")]
	[FieldOffset(Offset = "0x20")]
	private MethodBase _method;

	[Token(Token = "0x6001E75")]
	[Address(RVA = "0x19ED660", Offset = "0x19EBC60", VA = "0x1819ED660")]
	public ArgInfo(MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
	{
	}

	[Token(Token = "0x6001E76")]
	[Address(RVA = "0x19ED570", Offset = "0x19EBB70", VA = "0x1819ED570")]
	public object[] GetInOutArgs(object[] args)
	{
		return null;
	}
}
