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

[Token(Token = "0x200039B")]
internal class ArgInfo
{
	[Token(Token = "0x4000F41")]
	[FieldOffset(Offset = "0x10")]
	private int[] _paramMap;

	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x18")]
	private int _inoutArgCount;

	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x20")]
	private MethodBase _method;

	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x3B86540", Offset = "0x3B86540", VA = "0x3B86540")]
	public ArgInfo(MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
	{
	}

	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x3B86710", Offset = "0x3B86710", VA = "0x3B86710")]
	public object[] GetInOutArgs(object[] args)
	{
		return null;
	}
}
