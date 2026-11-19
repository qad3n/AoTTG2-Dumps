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

[Token(Token = "0x200013F")]
public class CollectionChangeEventArgs : EventArgs
{
	[Token(Token = "0x170001B2")]
	public virtual CollectionChangeAction Action
	{
		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x6227660", Offset = "0x6226660", VA = "0x6227660", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(CollectionChangeAction);
		}
	}

	[Token(Token = "0x170001B3")]
	public virtual object Element
	{
		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x6227670", Offset = "0x6226670", VA = "0x6227670", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x62275F0", Offset = "0x62265F0", VA = "0x62275F0")]
	public CollectionChangeEventArgs(CollectionChangeAction action, object element)
	{
	}
}
