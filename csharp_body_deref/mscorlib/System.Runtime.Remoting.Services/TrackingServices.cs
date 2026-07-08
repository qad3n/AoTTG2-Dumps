using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Services;

[Token(Token = "0x200035A")]
[ComVisible(true)]
public class TrackingServices
{
	[Token(Token = "0x4000ECA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ArrayList _handlers;

	[Token(Token = "0x6001CEA")]
	[Address(RVA = "0x4E8B4A0", Offset = "0x4E8B4A0", VA = "0x4E8B4A0")]
	internal static void NotifyMarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001CEB")]
	[Address(RVA = "0x4E8B810", Offset = "0x4E8B810", VA = "0x4E8B810")]
	internal static void NotifyUnmarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001CEC")]
	[Address(RVA = "0x4E8BB80", Offset = "0x4E8BB80", VA = "0x4E8BB80")]
	internal static void NotifyDisconnectedObject(object obj)
	{
	}
}
