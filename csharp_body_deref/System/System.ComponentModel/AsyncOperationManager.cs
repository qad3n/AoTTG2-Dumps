// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AsyncOperationManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000155")]
public static class AsyncOperationManager
{
	[Token(Token = "0x1700019F")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x2879520", Offset = "0x2877B20", VA = "0x182879520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x2879590", Offset = "0x2877B90", VA = "0x182879590")]
		set
		{
		}
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x2879420", Offset = "0x2877A20", VA = "0x182879420")]
	public static AsyncOperation CreateOperation(object userSuppliedState)
	{
		return null;
	}
}
