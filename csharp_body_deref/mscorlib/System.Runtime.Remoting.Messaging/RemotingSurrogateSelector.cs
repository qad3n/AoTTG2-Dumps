using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003BE")]
[ComVisible(true)]
public class RemotingSurrogateSelector : ISurrogateSelector
{
	[Token(Token = "0x4000FAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Type s_cachedTypeObjRef;

	[Token(Token = "0x4000FAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate;

	[Token(Token = "0x4000FAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate;

	[Token(Token = "0x4000FB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ISurrogateSelector _next;

	[Token(Token = "0x6001EF4")]
	[Address(RVA = "0x4E9C800", Offset = "0x4E9C800", VA = "0x4E9C800")]
	public RemotingSurrogateSelector()
	{
	}

	[Token(Token = "0x6001EF5")]
	[Address(RVA = "0x4EAC720", Offset = "0x4EAC720", VA = "0x4EAC720", Slot = "5")]
	public virtual ISerializationSurrogate GetSurrogate(Type type, StreamingContext context, out ISurrogateSelector ssout)
	{
		return null;
	}
}
