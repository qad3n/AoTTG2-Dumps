// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.CollectionChangeEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000273")]
public class CollectionChangeEventArgs : EventArgs
{
	[Token(Token = "0x17000372")]
	public virtual CollectionChangeAction Action
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x48872D0", Offset = "0x48872D0", VA = "0x48872D0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(CollectionChangeAction);
		}
	}

	[Token(Token = "0x17000373")]
	public virtual object Element
	{
		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x48872E0", Offset = "0x48872E0", VA = "0x48872E0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4887260", Offset = "0x4887260", VA = "0x4887260")]
	public CollectionChangeEventArgs(CollectionChangeAction action, object element)
	{
	}
}
