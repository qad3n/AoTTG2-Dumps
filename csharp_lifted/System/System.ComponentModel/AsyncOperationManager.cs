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

[Token(Token = "0x2000116")]
public static class AsyncOperationManager
{
	[Token(Token = "0x17000170")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public static SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x6220D70", Offset = "0x621FD70", VA = "0x6220D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x6220DE0", Offset = "0x621FDE0", VA = "0x6220DE0")]
		set
		{
		}
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x6220D00", Offset = "0x621FD00", VA = "0x6220D00")]
	public static AsyncOperation CreateOperation(object userSuppliedState)
	{
		return null;
	}
}
