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

[Token(Token = "0x2000389")]
[ComVisible(true)]
public class TrackingServices
{
	[Token(Token = "0x4000ED7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ArrayList _handlers;

	[Token(Token = "0x6001D59")]
	[Address(RVA = "0x1A09BE0", Offset = "0x1A081E0", VA = "0x181A09BE0")]
	internal static void NotifyMarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001D5A")]
	[Address(RVA = "0x1A09F30", Offset = "0x1A08530", VA = "0x181A09F30")]
	internal static void NotifyUnmarshaledObject(object obj, ObjRef or)
	{
	}

	[Token(Token = "0x6001D5B")]
	[Address(RVA = "0x1A098A0", Offset = "0x1A07EA0", VA = "0x181A098A0")]
	internal static void NotifyDisconnectedObject(object obj)
	{
	}
}
