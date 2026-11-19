// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.IRemotingTypeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000348")]
[ComVisible(true)]
public interface IRemotingTypeInfo
{
	[Token(Token = "0x17000331")]
	string TypeName
	{
		[Token(Token = "0x6001C61")]
		get;
	}

	[Token(Token = "0x6001C62")]
	bool CanCastTo(Type fromType, object o);
}
