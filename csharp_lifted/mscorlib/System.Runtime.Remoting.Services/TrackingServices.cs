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

[Token(Token = "0x2000362")]
[ComVisible(true)]
public class TrackingServices
{
	[Token(Token = "0x4000E37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ArrayList _handlers;

	[Token(Token = "0x6001D2F")]
	[Address(RVA = "0x5379950", Offset = "0x5378950", VA = "0x5379950")]
	internal static void NotifyMarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001D30")]
	[Address(RVA = "0x5379C90", Offset = "0x5378C90", VA = "0x5379C90")]
	internal static void NotifyUnmarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001D31")]
	[Address(RVA = "0x5379FD0", Offset = "0x5378FD0", VA = "0x5379FD0")]
	internal static void NotifyDisconnectedObject(object obj)
	{
	}
}
