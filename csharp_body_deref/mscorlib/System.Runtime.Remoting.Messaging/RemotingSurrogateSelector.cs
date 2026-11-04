// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003ED")]
[ComVisible(true)]
public class RemotingSurrogateSelector : ISurrogateSelector
{
	[Token(Token = "0x4000FB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Type s_cachedTypeObjRef;

	[Token(Token = "0x4000FB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate;

	[Token(Token = "0x4000FB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate;

	[Token(Token = "0x4000FB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ISurrogateSelector _next;

	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RemotingSurrogateSelector()
	{
	}

	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x1A07530", Offset = "0x1A05B30", VA = "0x181A07530", Slot = "5")]
	public virtual ISerializationSurrogate GetSurrogate(Type type, StreamingContext context, out ISurrogateSelector ssout)
	{
		return null;
	}
}
