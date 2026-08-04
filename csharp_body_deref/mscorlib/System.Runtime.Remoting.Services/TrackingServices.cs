// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Services.TrackingServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B70FC0", Offset = "0x3B70FC0", VA = "0x3B70FC0")]
	internal static void NotifyMarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001CEB")]
	[Address(RVA = "0x3B71330", Offset = "0x3B71330", VA = "0x3B71330")]
	internal static void NotifyUnmarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001CEC")]
	[Address(RVA = "0x3B716A0", Offset = "0x3B716A0", VA = "0x3B716A0")]
	internal static void NotifyDisconnectedObject(object obj)
	{
	}
}
